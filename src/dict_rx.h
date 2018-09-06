#ifndef _APP_RX_DICT_H_
#define _APP_RX_DICT_H_

#define VENDOR_DIAM_ID  0
#define VENDOR_3GPP_ID  10415
#define APP_RX_ID       16777236

#define AAR_CMD_ID      265
#define STR_CMD_ID      275
#define RAR_CMD_ID      258
#define ASR_CMD_ID      274

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

#endif /* _APP_RX_DICT_H_ */
