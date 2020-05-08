
/*
 * Copyright 2020-present Infosys Limited
 *
 * SPDX-License-Identifier: Apache-2.0
 */
 
/**************************************
 * serviceRequestWfInitCtxtResp.cpp
 * This is an auto generated file.
 * Please do not edit this file.
 * All edits to be made through template source file
 * <TOP-DIR/scripts/SMCodeGen/templates/stateMachineTmpls/state.cpp.tt>
 **************************************/


#include "actionTable.h"
#include "actionHandlers/actionHandlers.h"
#include "mmeSmDefs.h"
#include "utils/mmeStatesUtils.h"
#include "utils/mmeTimerTypes.h"

#include "mmeStates/serviceRequestWfInitCtxtResp.h"	
#include "mmeStates/serviceRequestWfMbResp.h"

using namespace mme;
using namespace SM;

/******************************************************************************
* Constructor
******************************************************************************/
ServiceRequestWfInitCtxtResp::ServiceRequestWfInitCtxtResp():State(service_request_wf_init_ctxt_resp, 0)
{
        stateEntryAction = &MmeStatesUtils::on_state_entry;
        stateExitAction = &MmeStatesUtils::on_state_exit;
        eventValidator = &MmeStatesUtils::validate_event;
}

/******************************************************************************
* Destructor
******************************************************************************/
ServiceRequestWfInitCtxtResp::~ServiceRequestWfInitCtxtResp()
{
}

/******************************************************************************
* creates and returns static instance
******************************************************************************/
ServiceRequestWfInitCtxtResp* ServiceRequestWfInitCtxtResp::Instance()
{
        static ServiceRequestWfInitCtxtResp state;
        return &state;
}

/******************************************************************************
* initializes eventToActionsMap
******************************************************************************/
void ServiceRequestWfInitCtxtResp::initialize()
{
        {
                ActionTable actionTable;
                actionTable.addAction(&ActionHandlers::process_init_ctxt_resp_svc_req);
                actionTable.addAction(&ActionHandlers::send_mb_req_to_sgw_svc_req);
                actionTable.setNextState(ServiceRequestWfMbResp::Instance());
                eventToActionsMap.insert(pair<uint16_t, ActionTable>(INIT_CTXT_RESP_FROM_UE, actionTable));
        }
}
