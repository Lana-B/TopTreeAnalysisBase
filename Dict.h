/********************************************************************
* Dict.h
* CAUTION: DON'T CHANGE THIS FILE. THIS FILE IS AUTOMATICALLY GENERATED
*          FROM HEADER FILES LISTED IN G__setup_cpp_environmentXXX().
*          CHANGE THOSE HEADER FILES AND REGENERATE THIS FILE.
********************************************************************/
#ifdef __CINT__
#error Dict.h/C is only for compilation. Abort cint.
#endif
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define G__ANSIHEADER
#define G__DICTIONARY
#define G__PRIVATE_GVALUE
#include "G__ci.h"
#include "FastAllocString.h"
extern "C" {
extern void G__cpp_setup_tagtableDict();
extern void G__cpp_setup_inheritanceDict();
extern void G__cpp_setup_typetableDict();
extern void G__cpp_setup_memvarDict();
extern void G__cpp_setup_globalDict();
extern void G__cpp_setup_memfuncDict();
extern void G__cpp_setup_funcDict();
extern void G__set_cpp_environmentDict();
}


#include "TObject.h"
#include "TMemberInspector.h"
#include "Content/interface/AnalysisEnvironment.h"
#include "Content/interface/BinningFirstGuess.h"
#include "Content/interface/Container.h"
#include "Content/interface/Dataset.h"
#include "Content/interface/MCExpectation.h"
#include "Content/interface/MCObsExpectation.h"
#include "../TopTreeProducer/interface/TRootCaloJet.h"
#include "../TopTreeProducer/interface/TRootCaloMET.h"
#include "../TopTreeProducer/interface/TRootElectron.h"
#include "../TopTreeProducer/interface/TRootEvent.h"
#include "../TopTreeProducer/interface/TRootGenEvent.h"
#include "../TopTreeProducer/interface/TRootGenJet.h"
#include "../TopTreeProducer/interface/TRootGenTop.h"
#include "../TopTreeProducer/interface/TRootHLTInfo.h"
#include "../TopTreeProducer/interface/TRootJPTJet.h"
#include "../TopTreeProducer/interface/TRootJet.h"
#include "../TopTreeProducer/interface/TRootMCParticle.h"
#include "../TopTreeProducer/interface/TRootMET.h"
#include "../TopTreeProducer/interface/TRootMuon.h"
#include "../TopTreeProducer/interface/TRootNPGenEvent.h"
#include "../TopTreeProducer/interface/TRootPFJet.h"
#include "../TopTreeProducer/interface/TRootPFMET.h"
#include "../TopTreeProducer/interface/TRootParticle.h"
#include "../TopTreeProducer/interface/TRootRun.h"
#include "../TopTreeProducer/interface/TRootSpinCorrGen.h"
#include "../TopTreeProducer/interface/TRootTrackMET.h"
#include "../TopTreeProducer/interface/TRootVertex.h"
#include <algorithm>
namespace std { }
using namespace std;

#ifndef G__MEMFUNCBODY
#endif

extern G__linked_taginfo G__DictLN_TClass;
extern G__linked_taginfo G__DictLN_TBuffer;
extern G__linked_taginfo G__DictLN_TMemberInspector;
extern G__linked_taginfo G__DictLN_TObject;
extern G__linked_taginfo G__DictLN_TString;
extern G__linked_taginfo G__DictLN_vectorlEunsignedsPintcOallocatorlEunsignedsPintgRsPgR;
extern G__linked_taginfo G__DictLN_vectorlEfloatcOallocatorlEfloatgRsPgR;
extern G__linked_taginfo G__DictLN_vectorlEdoublecOallocatorlEdoublegRsPgR;
extern G__linked_taginfo G__DictLN_vectorlEboolcOallocatorlEboolgRsPgR;
extern G__linked_taginfo G__DictLN_string;
extern G__linked_taginfo G__DictLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR;
extern G__linked_taginfo G__DictLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__DictLN_TObjArray;
extern G__linked_taginfo G__DictLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR;
extern G__linked_taginfo G__DictLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__DictLN_TMatrixTBaselEfloatgR;
extern G__linked_taginfo G__DictLN_TMatrixTBaselEdoublegR;
extern G__linked_taginfo G__DictLN_TVectorTlEfloatgR;
extern G__linked_taginfo G__DictLN_TVectorTlEdoublegR;
extern G__linked_taginfo G__DictLN_TElementActionTlEfloatgR;
extern G__linked_taginfo G__DictLN_TElementPosActionTlEfloatgR;
extern G__linked_taginfo G__DictLN_TElementActionTlEdoublegR;
extern G__linked_taginfo G__DictLN_TElementPosActionTlEdoublegR;
extern G__linked_taginfo G__DictLN_TMatrixTlEfloatgR;
extern G__linked_taginfo G__DictLN_TMatrixTRow_constlEfloatgR;
extern G__linked_taginfo G__DictLN_TMatrixTRowlEfloatgR;
extern G__linked_taginfo G__DictLN_TMatrixTDiag_constlEfloatgR;
extern G__linked_taginfo G__DictLN_TMatrixTColumn_constlEfloatgR;
extern G__linked_taginfo G__DictLN_TMatrixTFlat_constlEfloatgR;
extern G__linked_taginfo G__DictLN_TMatrixTSub_constlEfloatgR;
extern G__linked_taginfo G__DictLN_TMatrixTSparseRow_constlEfloatgR;
extern G__linked_taginfo G__DictLN_TMatrixTSparseDiag_constlEfloatgR;
extern G__linked_taginfo G__DictLN_TMatrixTColumnlEfloatgR;
extern G__linked_taginfo G__DictLN_TMatrixTDiaglEfloatgR;
extern G__linked_taginfo G__DictLN_TMatrixTFlatlEfloatgR;
extern G__linked_taginfo G__DictLN_TMatrixTSublEfloatgR;
extern G__linked_taginfo G__DictLN_TMatrixTSparseRowlEfloatgR;
extern G__linked_taginfo G__DictLN_TMatrixTSparseDiaglEfloatgR;
extern G__linked_taginfo G__DictLN_TVector3;
extern G__linked_taginfo G__DictLN_TLorentzVector;
extern G__linked_taginfo G__DictLN_TopTree;
extern G__linked_taginfo G__DictLN_TopTreecLcLTRootParticle;
extern G__linked_taginfo G__DictLN_maplEstringcOfloatcOlesslEstringgRcOallocatorlEpairlEconstsPstringcOfloatgRsPgRsPgR;
extern G__linked_taginfo G__DictLN_maplEintcOintcOlesslEintgRcOallocatorlEpairlEconstsPintcOintgRsPgRsPgR;
extern G__linked_taginfo G__DictLN_TopTreecLcLTRootJet;
extern G__linked_taginfo G__DictLN_TopTreecLcLTRootMuon;
extern G__linked_taginfo G__DictLN_TopTreecLcLTRootGenEvent;
extern G__linked_taginfo G__DictLN_TopTreecLcLTRootGenEventcLcLLeptonType;
extern G__linked_taginfo G__DictLN_vectorlETLorentzVectorcOallocatorlETLorentzVectorgRsPgR;
extern G__linked_taginfo G__DictLN_reverse_iteratorlEvectorlETLorentzVectorcOallocatorlETLorentzVectorgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__DictLN_TopTreecLcLTRootMCParticle;
extern G__linked_taginfo G__DictLN_TopTreecLcLTRootGenTop;
extern G__linked_taginfo G__DictLN_TopTreecLcLTRootNPGenEvent;
extern G__linked_taginfo G__DictLN_vectorlETopTreecLcLTRootGenTopcOallocatorlETopTreecLcLTRootGenTopgRsPgR;
extern G__linked_taginfo G__DictLN_reverse_iteratorlEvectorlETopTreecLcLTRootGenTopcOallocatorlETopTreecLcLTRootGenTopgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__DictLN_vectorlETopTreecLcLTRootMCParticlecOallocatorlETopTreecLcLTRootMCParticlegRsPgR;
extern G__linked_taginfo G__DictLN_reverse_iteratorlEvectorlETopTreecLcLTRootMCParticlecOallocatorlETopTreecLcLTRootMCParticlegRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__DictLN_TopTreecLcLTRootMET;
extern G__linked_taginfo G__DictLN_iteratorlEbidirectional_iterator_tagcOTObjectmUcOlongcOconstsPTObjectmUmUcOconstsPTObjectmUaNgR;
extern G__linked_taginfo G__DictLN_TMatrixTlEdoublegR;
extern G__linked_taginfo G__DictLN_TMatrixTSymlEdoublegR;
extern G__linked_taginfo G__DictLN_TMatrixTSparselEdoublegR;
extern G__linked_taginfo G__DictLN_TMatrixTRow_constlEdoublegR;
extern G__linked_taginfo G__DictLN_TMatrixTRowlEdoublegR;
extern G__linked_taginfo G__DictLN_TMatrixTDiag_constlEdoublegR;
extern G__linked_taginfo G__DictLN_TMatrixTColumn_constlEdoublegR;
extern G__linked_taginfo G__DictLN_TMatrixTFlat_constlEdoublegR;
extern G__linked_taginfo G__DictLN_TMatrixTSub_constlEdoublegR;
extern G__linked_taginfo G__DictLN_TMatrixTSparseRow_constlEdoublegR;
extern G__linked_taginfo G__DictLN_TMatrixTSparseDiag_constlEdoublegR;
extern G__linked_taginfo G__DictLN_TMatrixTColumnlEdoublegR;
extern G__linked_taginfo G__DictLN_TMatrixTDiaglEdoublegR;
extern G__linked_taginfo G__DictLN_TMatrixTFlatlEdoublegR;
extern G__linked_taginfo G__DictLN_TMatrixTSublEdoublegR;
extern G__linked_taginfo G__DictLN_TMatrixTSparseRowlEdoublegR;
extern G__linked_taginfo G__DictLN_TMatrixTSparseDiaglEdoublegR;
extern G__linked_taginfo G__DictLN_Observables;
extern G__linked_taginfo G__DictLN_vectorlETopTreecLcLTRootJetcOallocatorlETopTreecLcLTRootJetgRsPgR;
extern G__linked_taginfo G__DictLN_reverse_iteratorlEvectorlETopTreecLcLTRootJetcOallocatorlETopTreecLcLTRootJetgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__DictLN_vectorlETopTreecLcLTRootJetmUcOallocatorlETopTreecLcLTRootJetmUgRsPgR;
extern G__linked_taginfo G__DictLN_reverse_iteratorlEvectorlETopTreecLcLTRootJetmUcOallocatorlETopTreecLcLTRootJetmUgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__DictLN_pairlEfloatcOfloatgR;
extern G__linked_taginfo G__DictLN_vectorlEpairlEstringcOfloatgRcOallocatorlEpairlEstringcOfloatgRsPgRsPgR;
extern G__linked_taginfo G__DictLN_reverse_iteratorlEvectorlEpairlEstringcOfloatgRcOallocatorlEpairlEstringcOfloatgRsPgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__DictLN_vectorlEpairlEfloatcOfloatgRcOallocatorlEpairlEfloatcOfloatgRsPgRsPgR;
extern G__linked_taginfo G__DictLN_reverse_iteratorlEvectorlEpairlEfloatcOfloatgRcOallocatorlEpairlEfloatcOfloatgRsPgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__DictLN_vectorlEstringcOallocatorlEstringgRsPgR;
extern G__linked_taginfo G__DictLN_reverse_iteratorlEvectorlEstringcOallocatorlEstringgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__DictLN_AnalysisEnvironment;
extern G__linked_taginfo G__DictLN_vectorlEintcOallocatorlEintgRsPgR;
extern G__linked_taginfo G__DictLN_reverse_iteratorlEvectorlEintcOallocatorlEintgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__DictLN_vectorlEvectorlEfloatcOallocatorlEfloatgRsPgRcOallocatorlEvectorlEfloatcOallocatorlEfloatgRsPgRsPgRsPgR;
extern G__linked_taginfo G__DictLN_reverse_iteratorlEvectorlEvectorlEfloatcOallocatorlEfloatgRsPgRcOallocatorlEvectorlEfloatcOallocatorlEfloatgRsPgRsPgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__DictLN_vectorlEvectorlEvectorlEfloatcOallocatorlEfloatgRsPgRcOallocatorlEvectorlEfloatcOallocatorlEfloatgRsPgRsPgRsPgRcOallocatorlEvectorlEvectorlEfloatcOallocatorlEfloatgRsPgRcOallocatorlEvectorlEfloatcOallocatorlEfloatgRsPgRsPgRsPgRsPgRsPgR;
extern G__linked_taginfo G__DictLN_reverse_iteratorlEvectorlEvectorlEvectorlEfloatcOallocatorlEfloatgRsPgRcOallocatorlEvectorlEfloatcOallocatorlEfloatgRsPgRsPgRsPgRcOallocatorlEvectorlEvectorlEfloatcOallocatorlEfloatgRsPgRcOallocatorlEvectorlEfloatcOallocatorlEfloatgRsPgRsPgRsPgRsPgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__DictLN_TAxis;
extern G__linked_taginfo G__DictLN_TH1D;
extern G__linked_taginfo G__DictLN_TH1F;
extern G__linked_taginfo G__DictLN_TMap;
extern G__linked_taginfo G__DictLN_maplEstringcOTObjArraymUcOlesslEstringgRcOallocatorlEpairlEconstsPstringcOTObjArraymUgRsPgRsPgR;
extern G__linked_taginfo G__DictLN_BinningFirstGuess;
extern G__linked_taginfo G__DictLN_maplEstringcOTAxismUcOlesslEstringgRcOallocatorlEpairlEconstsPstringcOTAxismUgRsPgRsPgR;
extern G__linked_taginfo G__DictLN_TChain;
extern G__linked_taginfo G__DictLN_Container;
extern G__linked_taginfo G__DictLN_Dataset;
extern G__linked_taginfo G__DictLN_vectorlEvectorlEintcOallocatorlEintgRsPgRcOallocatorlEvectorlEintcOallocatorlEintgRsPgRsPgRsPgR;
extern G__linked_taginfo G__DictLN_reverse_iteratorlEvectorlEvectorlEintcOallocatorlEintgRsPgRcOallocatorlEvectorlEintcOallocatorlEintgRsPgRsPgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__DictLN_MCExpectation;
extern G__linked_taginfo G__DictLN_THStack;
extern G__linked_taginfo G__DictLN_TLegend;
extern G__linked_taginfo G__DictLN_MCObsExpectation;
extern G__linked_taginfo G__DictLN_vectorlEDatasetmUcOallocatorlEDatasetmUgRsPgR;
extern G__linked_taginfo G__DictLN_reverse_iteratorlEvectorlEDatasetmUcOallocatorlEDatasetmUgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__DictLN_TopTreecLcLTRootCaloJet;
extern G__linked_taginfo G__DictLN_TopTreecLcLTRootCaloMET;
extern G__linked_taginfo G__DictLN_TopTreecLcLTRootElectron;
extern G__linked_taginfo G__DictLN_TopTreecLcLtriggeredObject;
extern G__linked_taginfo G__DictLN_TopTreecLcLTRootEvent;
extern G__linked_taginfo G__DictLN_vectorlETopTreecLcLtriggeredObjectcOallocatorlETopTreecLcLtriggeredObjectgRsPgR;
extern G__linked_taginfo G__DictLN_reverse_iteratorlEvectorlETopTreecLcLtriggeredObjectcOallocatorlETopTreecLcLtriggeredObjectgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__DictLN_maplEstringcOvectorlETopTreecLcLtriggeredObjectcOallocatorlETopTreecLcLtriggeredObjectgRsPgRcOlesslEstringgRcOallocatorlEpairlEconstsPstringcOvectorlETopTreecLcLtriggeredObjectcOallocatorlETopTreecLcLtriggeredObjectgRsPgRsPgRsPgRsPgR;
extern G__linked_taginfo G__DictLN_TopTreecLcLTRootGenJet;
extern G__linked_taginfo G__DictLN_TopTreecLcLTRootHLTInfo;
extern G__linked_taginfo G__DictLN_TopTreecLcLTRootJPTJet;
extern G__linked_taginfo G__DictLN_TopTreecLcLTRootPFJet;
extern G__linked_taginfo G__DictLN_TopTreecLcLTRootPFMET;
extern G__linked_taginfo G__DictLN_TopTreecLcLTRootRun;
extern G__linked_taginfo G__DictLN_vectorlETopTreecLcLTRootHLTInfocOallocatorlETopTreecLcLTRootHLTInfogRsPgR;
extern G__linked_taginfo G__DictLN_reverse_iteratorlEvectorlETopTreecLcLTRootHLTInfocOallocatorlETopTreecLcLTRootHLTInfogRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__DictLN_TopTreecLcLTRootSpinCorrGen;
extern G__linked_taginfo G__DictLN_TopTreecLcLTRootTrackMET;
extern G__linked_taginfo G__DictLN_TopTreecLcLTRootVertex;

/* STUB derived class for protected member access */