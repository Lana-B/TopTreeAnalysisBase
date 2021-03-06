// @(#)root/tmva $Id: MethodBDT.h,v 1.1.2.1 2012/01/04 18:54:01 caebergs Exp $
// Author: Andreas Hoecker, Joerg Stelzer, Helge Voss, Kai Voss

/**********************************************************************************
 * Project: TMVA - a Root-integrated toolkit for multivariate data analysis       *
 * Package: TMVA                                                                  *
 * Class  : MethodBDT  (Boosted Decision Trees)                                   *
 * Web    : http://tmva.sourceforge.net                                           *
 *                                                                                *
 * Description:                                                                   *
 *      Analysis of Boosted Decision Trees                                        *
 *                                                                                *
 * Authors (alphabetical):                                                        *
 *      Andreas Hoecker <Andreas.Hocker@cern.ch> - CERN, Switzerland              *
 *      Helge Voss      <Helge.Voss@cern.ch>     - MPI-K Heidelberg, Germany      *
 *      Kai Voss        <Kai.Voss@cern.ch>       - U. of Victoria, Canada         *
 *      Doug Schouten   <dschoute@sfu.ca>        - Simon Fraser U., Canada        *
 *      Jan Therhaag    <jan.therhaag@cern.ch>   - U. of Bonn, Germany            *
 *                                                                                *
 * Copyright (c) 2005:                                                            *
 *      CERN, Switzerland                                                         *
 *      U. of Victoria, Canada                                                    *
 *      MPI-K Heidelberg, Germany                                                 *
 *                                                                                *
 * Redistribution and use in source and binary forms, with or without             *
 * modification, are permitted according to the terms listed in LICENSE           *
 * (http://tmva.sourceforge.net/LICENSE)                                          *
 **********************************************************************************/

#ifndef ROOT_TMVA_MethodBDT
#define ROOT_TMVA_MethodBDT

//////////////////////////////////////////////////////////////////////////
//                                                                      //
// MethodBDT                                                            //
//                                                                      //
// Analysis of Boosted Decision Trees                                   //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#include <vector>
#ifndef ROOT_TH2
#include "TH2.h"
#endif
#ifndef ROOT_TTree
#include "TTree.h"
#endif
#ifndef ROOT_TMVA_MethodBase
#include "TMVA/MethodBase.h"
#endif
#ifndef ROOT_TMVA_DecisionTree
#include "TMVA/DecisionTree.h"
#endif
#ifndef ROOT_TMVA_Event
#include "TMVA/Event.h"
#endif

namespace TMVA {
   
   class SeparationBase;
   
   class MethodBDT : public MethodBase {
      
   public:
      // constructor for training and reading
      MethodBDT( const TString& jobName,
                 const TString& methodTitle,
                 DataSetInfo& theData,
                 const TString& theOption = "",
                 TDirectory* theTargetDir = 0 );

      // constructor for calculating BDT-MVA using previously generatad decision trees
      MethodBDT( DataSetInfo& theData,
                 const TString& theWeightFile,
                 TDirectory* theTargetDir = NULL );

      virtual ~MethodBDT( void );

      virtual Bool_t HasAnalysisType( Types::EAnalysisType type, UInt_t numberClasses, UInt_t numberTargets );


      // write all Events from the Tree into a vector of Events, that are
      // more easily manipulated
      void InitEventSample();

      // training method
      void Train( void );

      using MethodBase::ReadWeightsFromStream;

      // write weights to file
      void AddWeightsXMLTo( void* parent ) const;

      // read weights from file
      void ReadWeightsFromStream( istream& istr );
      void ReadWeightsFromXML(void* parent);

      // write method specific histos to target file
      void WriteMonitoringHistosToFile( void ) const;

      // calculate the MVA value
      Double_t GetMvaValue( Double_t* err = 0);
      Double_t GetMvaValue( Double_t* err , UInt_t useNTrees );

      // regression response
      const std::vector<Float_t>& GetRegressionValues();

      // apply the boost algorithm to a tree in the collection
      Double_t Boost( std::vector<Event*>, DecisionTree *dt, Int_t iTree );

      // ranking of input variables
      const Ranking* CreateRanking();

      // the option handling methods
      void DeclareOptions();
      void ProcessOptions();

      // get the forest
      inline const std::vector<TMVA::DecisionTree*> & GetForest() const;

      // get the forest
      inline const std::vector<Event*> & GetTrainingEvents() const;

      inline const std::vector<double> & GetBoostWeights() const;

      //return the individual relative variable importance
      std::vector<Double_t> GetVariableImportance();
      Double_t GetVariableImportance(UInt_t ivar);

      Double_t TestTreeQuality( DecisionTree *dt );

      // make ROOT-independent C++ class for classifier response (classifier-specific implementation)
      void MakeClassSpecific( std::ostream&, const TString& ) const;

      // header and auxiliary classes
      void MakeClassSpecificHeader( std::ostream&, const TString& ) const;

      void MakeClassInstantiateNode( DecisionTreeNode *n, std::ostream& fout,
                                     const TString& className ) const;

      void GetHelpMessage() const;

   protected:
      void DeclareCompatibilityOptions();

   private:
      // Init used in the various constructors
      void Init( void );

      // boosting algorithm (adaptive boosting)
      Double_t AdaBoost( std::vector<Event*>, DecisionTree *dt );

      // boosting as a random re-weighting
      Double_t Bagging( std::vector<Event*>, Int_t iTree );

      // boosting special for regression
      Double_t RegBoost( std::vector<Event*>, DecisionTree *dt );

      // adaboost adapted to regression
      Double_t AdaBoostR2( std::vector<Event*>, DecisionTree *dt );
      
      // binomial likelihood gradient boost for classification
      // (see Friedman: "Greedy Function Approximation: a Gradient Boosting Machine"
      // Technical report, Dept. of Statistics, Stanford University)
      Double_t GradBoost( std::vector<Event*>, DecisionTree *dt );
      Double_t GradBoostRegression(std::vector<Event*>, DecisionTree *dt );      
      void InitGradBoost( std::vector<Event*>);
      void UpdateTargets( std::vector<Event*>);
      void UpdateTargetsRegression( std::vector<Event*>,Bool_t first=kFALSE);
      Double_t GetGradBoostMVA(TMVA::Event& e, UInt_t nTrees);
      void GetRandomSubSample();
      Double_t GetWeightedQuantile(std::vector<std::vector<Double_t> > &vec, const Double_t quantile, const Double_t SumOfWeights = 0.0);

      std::vector<Event*>             fEventSample;     // the training events
      std::vector<Event*>             fValidationSample;// the Validation events
      std::vector<Event*>             fSubSample;       // subsample for bagged grad boost

      Int_t                           fNTrees;          // number of decision trees requested
      std::vector<DecisionTree*>      fForest;          // the collection of decision trees
      std::vector<double>             fBoostWeights;    // the weights applied in the individual boosts
      std::vector<double>             fInitialWeights;  // the initial event weights
      std::vector<double>             fRegResiduals;    // temporary storage for regression residuals
      TString                         fBoostType;       // string specifying the boost type
      Double_t                        fSumOfWeights;    // total sum of all event weights
      Double_t                        fAdaBoostBeta;    // beta parameter for AdaBoost algorithm
      TString                         fAdaBoostR2Loss;  // loss type used in AdaBoostR2 (Linear,Quadratic or Exponential)
      Double_t                        fTransitionPoint; // break-down point for gradient regression
      Double_t                        fShrinkage;       // learning rate for gradient boost;
      Bool_t                          fBaggedGradBoost; // turn bagging in combination with grad boost on/off
      Double_t                        fSampleFraction;  // fraction of events used for bagged grad boost

      //options for the decision Tree
      SeparationBase                 *fSepType;         // the separation used in node splitting
      TString                         fSepTypeS;        // the separation (option string) used in node splitting
      Int_t                           fNodeMinEvents;   // min number of events in node

      Int_t                           fNCuts;           // grid used in cut applied in node splitting
      Bool_t                          fUseYesNoLeaf;    // use sig or bkg classification in leave nodes or sig/bkg
      Double_t                        fNodePurityLimit; // purity limit for sig/bkg nodes
      Bool_t                          fUseWeightedTrees;// use average classification from the trees, or have the individual trees trees in the forest weighted (e.g. log(boostweight) from AdaBoost
      UInt_t                          fNNodesMax;       // max # of nodes
      UInt_t                          fMaxDepth;        // max depth 


      //some histograms for monitoring
      TTree*                           fMonitorNtuple;   // monitoring ntuple
      Int_t                            fITree;           // ntuple var: ith tree
      Double_t                         fBoostWeight;     // ntuple var: boost weight
      Double_t                         fErrorFraction;   // ntuple var: misclassification error fraction
      Double_t                         fPruneStrength;   // a parameter to set the "amount" of pruning..needs to be adjusted
      DecisionTree::EPruneMethod       fPruneMethod;     // method used for prunig
      TString                          fPruneMethodS;    // prune method option String
      Bool_t                           fPruneBeforeBoost;// flag to prune before boosting
      Double_t                         fFValidationEvents;    // fraction of events to use for pruning
      Bool_t                           fAutomatic;       // use user given prune strength or automatically determined one using a validation sample
      Bool_t                           fRandomisedTrees; // choose a random subset of possible cut variables at each node during training
      UInt_t                           fUseNvars;        // the number of variables used in the randomised tree splitting
      UInt_t                           fUseNTrainEvents; // number of randomly picked training events used in randomised (and bagged) trees 

      std::vector<Double_t>            fVariableImportance; // the relative importance of the different variables

      // debugging flags
      static const Int_t               fgDebugLevel;     // debug level determining some printout/control plots etc.

      // for backward compatibility

      Double_t                         fSampleSizeFraction; // relative size of bagged event sample to original sample size
      Bool_t                           fNoNegWeightsInTraining; // ignore negative event weights in the training


      ClassDef(MethodBDT,0)  // Analysis of Boosted Decision Trees
   };

} // namespace TMVA

const std::vector<TMVA::DecisionTree*>& TMVA::MethodBDT::GetForest()         const { return fForest; }
const std::vector<TMVA::Event*>&        TMVA::MethodBDT::GetTrainingEvents() const { return fEventSample; }
const std::vector<double>&              TMVA::MethodBDT::GetBoostWeights()   const { return fBoostWeights; }

#endif
