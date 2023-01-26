#ifndef _APP_RX_DICT_H_
#define _APP_RX_DICT_H_

#define VEND_ID_DIAM	static_cast<uint32_t>(0)
#define VEND_ID_3GPP	static_cast<uint32_t>(10415)
#define APP_ID_RX		static_cast<uint32_t>(16777236)

#define CMD_ID_AAR      265
#define CMD_ID_STR      275
#define CMD_ID_RAR      258
#define CMD_ID_ASR      274

#define END_USER_E164     0
#define END_USER_IMSI     1
#define END_USER_SIP_URI  2
#define END_USER_NAI      3
#define END_USER_PRIVATE  4

/* Experimental-Result-Code */
#define ERC_INVALID_SERVICE_INFORMATION              5061
#define ERC_FILTER_RESTRICTIONS                      5062
#define ERC_REQUESTED_SERVICE_NOT_AUTHORIZED         5063
#define ERC_DUPLICATED_AF_SESSION                    5064
#define ERC_IP_CAN_SESSION_NOT_AVAILABLE             5065
#define ERC_UNAUTHORIZED_NON_EMERGENCY_SESSION       5066
#define ERC_UNAUTHORIZED_SPONSORED_DATA_CONNECTIVITY 5067
#define ERC_TEMPORARY_NETWORK_FAILURE                5068
/* Experimental-Result-Code */

/* Abort-Cause */
#define AC_BEARER_RELEASED                        0
#define AC_INSUFFICIENT_SERVER_RESOURCES          1
#define AC_INSUFFICIENT_BEARER_RESOURCES          2
#define AC_PS_TO_CS_HANDOVER                      3
#define AC_SPONSORED_DATA_CONNECTIVITY_DISALLOWED 4
/* Abort-Cause */

/* Specific-Action */
#define SA_Void0                                               0
#define SA_CHARGING_CORRELATION_EXCHANGE                       1
#define SA_INDICATION_OF_LOSS_OF_BEARER                        2
#define SA_INDICATION_OF_RECOVERY_OF_BEARER                    3
#define SA_INDICATION_OF_RELEASE_OF_BEARER                     4
#define SA_Void5                                               5
#define SA_IP_CAN_CHANGE                                       6
#define SA_INDICATION_OF_OUT_OF_CREDIT                         7
#define SA_INDICATION_OF_SUCCESSFUL_RESOURCES_ALLOCATION       8
#define SA_INDICATION_OF_FAILED_RESOURCES_ALLOCATION           9
#define SA_INDICATION_OF_LIMITED_PCC_DEPLOYMENT               10
#define SA_USAGE_REPORT                                       11
#define SA_ACCESS_NETWORK_INFO_REPORT                         12
#define SA_INDICATION_OF_RECOVERY_FROM_LIMITED_PCC_DEPLOYMENT 13
/* Specific-Action */

/* Rule-Failure-Code */
#define RFC_UNKNOWN_RULE_NAME            1
#define RFC_RATING_GROUP_ERROR           2
#define RFC_SERVICE_IDENTIFIER_ERROR     3
#define RFC_GW_PCEF_MALFUNCTION          4
#define RFC_RESOURCES_LIMITATION         5
#define RFC_MAX_NR_BEARERS_REACHED       6
#define RFC_UNKNOWN_BEARER_ID            7
#define RFC_MISSING_BEARER_ID            8
#define RFC_MISSING_FLOW_INFORMATION     9
#define RFC_RESOURCE_ALLOCATION_FAILURE 10
#define RFC_UNSUCCESSFUL_QOS_VALIDATION 11
#define RFC_INCORRECT_FLOW_INFORMATION  12
#define RFC_PS_TO_CS_HANDOVER           13
#define RFC_NO_BEARER_BOUND             15
/* Rule-Failure-Code */

/* Media-Type */
#define MT_AUDIO		static_cast<uint32_t>(0)
#define MT_VIDEO		static_cast<uint32_t>(1)
#define MT_DATA			static_cast<uint32_t>(2)
#define MT_APPLICATION	static_cast<uint32_t>(3)
#define MT_CONTROL		static_cast<uint32_t>(4)
#define MT_TEXT			static_cast<uint32_t>(5)
#define MT_MESSAGE		static_cast<uint32_t>(6)
#define MT_OTHER		static_cast<uint32_t>(0xFFFFFFFF)
/* Media-Type */

#endif /* _APP_RX_DICT_H_ */
