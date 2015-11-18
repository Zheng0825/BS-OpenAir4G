/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/nfvepc/oEPC/trunk/openair2/RRC/LITE/MESSAGES/asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_UE_EUTRA_Capability_v1020_IEs_H_
#define	_UE_EUTRA_Capability_v1020_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PhyLayerParameters_v1020;
struct RF_Parameters_v1020;
struct MeasParameters_v1020;
struct IRAT_ParametersCDMA2000_1XRTT_v1020;
struct UE_BasedNetwPerfMeasParameters_r10;
struct IRAT_ParametersUTRA_TDD_v1020;

/* UE-EUTRA-Capability-v1020-IEs */
typedef struct UE_EUTRA_Capability_v1020_IEs {
	long	*ue_Category_v1020	/* OPTIONAL */;
	struct PhyLayerParameters_v1020	*phyLayerParameters_v1020	/* OPTIONAL */;
	struct RF_Parameters_v1020	*rf_Parameters_v1020	/* OPTIONAL */;
	struct MeasParameters_v1020	*measParameters_v1020	/* OPTIONAL */;
	BIT_STRING_t	*featureGroupIndicators_v1020	/* OPTIONAL */;
	struct IRAT_ParametersCDMA2000_1XRTT_v1020	*interRAT_ParametersCDMA2000_v1020	/* OPTIONAL */;
	struct UE_BasedNetwPerfMeasParameters_r10	*ue_BasedNetwPerfMeasParameters_r10	/* OPTIONAL */;
	struct IRAT_ParametersUTRA_TDD_v1020	*interRAT_ParametersUTRA_TDD_v1020	/* OPTIONAL */;
	struct UE_EUTRA_Capability_v1020_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_EUTRA_Capability_v1020_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_EUTRA_Capability_v1020_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "PhyLayerParameters-v1020.h"
#include "RF-Parameters-v1020.h"
#include "MeasParameters-v1020.h"
#include "IRAT-ParametersCDMA2000-1XRTT-v1020.h"
#include "UE-BasedNetwPerfMeasParameters-r10.h"
#include "IRAT-ParametersUTRA-TDD-v1020.h"

#endif	/* _UE_EUTRA_Capability_v1020_IEs_H_ */
#include <asn_internal.h>