/*
 * Copyright 2019-present Open Networking Foundation
 * Copyright (c) 2003-2018, Great Software Laboratory Pvt. Ltd.
 * Copyright (c) 2017 Intel Corporation
 *
 * SPDX-License-Identifier: Apache-2.0
 */


#ifndef __UE_GTPV2_H_
#define __UE_GTPV2_H_

#include <stdint.h>
#include <stdbool.h>
#include "log.h"
#include "s11_structs.h"
#include <gtpV2StackWrappers.h>

/*No of threads handling S11 GTPv2 messages coming in*/
#define S11_THREADPOOL_SIZE 5
#define S10_THREADPOOL_SIZE 5

#define S11_GTPV2C_BUF_LEN	4096
#define S10_GTPV2C_BUF_LEN	4096

/*GTPv2c IE message types*/
#define S11_IE_CAUSE		2
#define S11_IE_FTEID_C		87
#define S11_IE_PAA		79
#define S11_IE_APN_RESTRICTION	127
#define S11_IE_BEARER_CTX	93
#define S11_IE_EPS_BEARER_ID	73
//
#define S10_IE_CAUSE		2
#define S10_IE_FTEID_C		87
#define S10_IE_PAA		79
#define S10_IE_APN_RESTRICTION	127
#define S10_IE_BEARER_CTX	93
#define S10_IE_EPS_BEARER_ID	73

int
init_s11();

void
handle_gtp_message(void *message);

int
s11_transation(char * buf, unsigned int len);

void* create_session_handler(void *);
void* create_bearer_resp_handler(void *);
void* delete_bearer_resp_handler(void *);
void* modify_bearer_handler(void *);
void* release_bearer_handler(void *); 
void* delete_session_handler(void *);
void* ddn_ack_handler(void *);
void* ddn_failure_ind_handler(void *);
int s11_CS_resp_handler(MsgBuffer* message, GtpV2MessageHeader* hdr, uint32_t sgw_ip);
int s11_CB_req_handler(MsgBuffer* message, GtpV2MessageHeader* hdr, uint32_t sgw_ip, uint16_t src_port);
int s11_DB_req_handler(MsgBuffer* message, GtpV2MessageHeader* hdr, uint32_t sgw_ip, uint16_t src_port);
int s11_MB_resp_handler(MsgBuffer* message, GtpV2MessageHeader* hdr, uint32_t sgw_ip);
int s11_DS_resp_handler(MsgBuffer* message, GtpV2MessageHeader* hdr, uint32_t sgw_ip);
int s11_RB_resp_handler(MsgBuffer* message, GtpV2MessageHeader* hdr, uint32_t sgw_ip);
int s11_DDN_handler(MsgBuffer* message, GtpV2MessageHeader* hdr, uint32_t sgw_ip);
int s11_ECHO_req_resp_handler(MsgBuffer* message, GtpV2MessageHeader* hdr, uint32_t sgw_ip_val, uint16_t src_port);
//
void* forward_relocation_handler(void *);
void* forward_relocation_resonse_handler(void *);
int s10_ID_resp_handler(MsgBuffer* message, GtpV2MessageHeader* hdr, uint32_t sgw_ip);
int s10_ID_request_handler(MsgBuffer* message, GtpV2MessageHeader* hdr, uint32_t sgw_ip);
int s10_FWD_relocation_cmp_ack_handler(MsgBuffer* message, GtpV2MessageHeader* hdr, uint32_t sgw_ip);
int s10_Fwd_acc_ctxt_ack_handler(MsgBuffer* message, GtpV2MessageHeader* hdr, uint32_t mme_ip);
int S10_fwd_acc_ctxt_noti_handler(MsgBuffer* message, GtpV2MessageHeader* hdr, uint32_t mme_ip);
void* identification_request_handler(void *);
void* identification_response_handler(void *);
void* forward_access_context_notification_handler(void *);
void* forward_relocation_complete_acknowledgement_handler(void *);
void* forward_access_context_ack_handler(void *);
void* forward_relocation_complete_notifi_handler(void *);
int s10_FR_resp_handler(MsgBuffer* message, GtpV2MessageHeader* hdr, uint32_t tmme_ip);
int s10_FR_req_handler(MsgBuffer* message, GtpV2MessageHeader* hdr, uint32_t tmme_ip);
int s10_FR_relocation_complete_notification(MsgBuffer* message, GtpV2MessageHeader* hdr, uint32_t tmme_ip);
void get_sequence(uint32_t *seq);

void
bswap8_array(uint8_t *src, uint8_t *dest, uint32_t len);

int parse_gtpv2c_IEs(char *msg, int len, struct s11_proto_IE *proto_ies);

#endif /*S11_H*/
