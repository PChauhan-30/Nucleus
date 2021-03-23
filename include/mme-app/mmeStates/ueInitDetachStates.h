

 /*
 * Copyright 2021-present Infosys Limited
 *
 * SPDX-License-Identifier: Apache-2.0
 */
 
 /******************************************************
 * ueInitDetachStates.h
 * This is an auto generated file.
 * Please do not edit this file.
 * All edits to be made through template source file
 * <TOP-DIR/scripts/SMCodeGen/templates/stateMachineTmpls/state.h.tt>
 ******************************************************/
 #ifndef __UE_INIT_DETACH__
 #define __UE_INIT_DETACH__

 #include "state.h"

 namespace mme {
	class DetachStart : public SM::State
	{
		public:
			/******************************************
			* Instance 
			*    Creates static instance for the state
			*******************************************/
			static DetachStart* Instance();

			/****************************************
			* DetachStart
			*    Destructor
			****************************************/
			~DetachStart();			
			
			/******************************************
			* initialize
			*  Initializes action handlers for the state
			* and next state
			******************************************/
			void initialize();

			/*****************************************
			* returns stateId
			*****************************************/
			uint16_t getStateId() const;

			/*****************************************
			* returns stateName
			*****************************************/
			const char* getStateName() const;

		protected:
			/****************************************
			* DetachStart
			*    Protected constructor
			****************************************/
			DetachStart();  
	};
	
	class DetachWfPurgeRespDelSessionResp : public SM::State
	{
		public:
			/******************************************
			* Instance 
			*    Creates static instance for the state
			*******************************************/
			static DetachWfPurgeRespDelSessionResp* Instance();

			/****************************************
			* DetachWfPurgeRespDelSessionResp
			*    Destructor
			****************************************/
			~DetachWfPurgeRespDelSessionResp();			
			
			/******************************************
			* initialize
			*  Initializes action handlers for the state
			* and next state
			******************************************/
			void initialize();

			/*****************************************
			* returns stateId
			*****************************************/
			uint16_t getStateId() const;

			/*****************************************
			* returns stateName
			*****************************************/
			const char* getStateName() const;

		protected:
			/****************************************
			* DetachWfPurgeRespDelSessionResp
			*    Protected constructor
			****************************************/
			DetachWfPurgeRespDelSessionResp();  
	};
	
	class DetachWfDelSessionResp : public SM::State
	{
		public:
			/******************************************
			* Instance 
			*    Creates static instance for the state
			*******************************************/
			static DetachWfDelSessionResp* Instance();

			/****************************************
			* DetachWfDelSessionResp
			*    Destructor
			****************************************/
			~DetachWfDelSessionResp();			
			
			/******************************************
			* initialize
			*  Initializes action handlers for the state
			* and next state
			******************************************/
			void initialize();

			/*****************************************
			* returns stateId
			*****************************************/
			uint16_t getStateId() const;

			/*****************************************
			* returns stateName
			*****************************************/
			const char* getStateName() const;

		protected:
			/****************************************
			* DetachWfDelSessionResp
			*    Protected constructor
			****************************************/
			DetachWfDelSessionResp();  
	};
	
	class DetachWfPurgeResp : public SM::State
	{
		public:
			/******************************************
			* Instance 
			*    Creates static instance for the state
			*******************************************/
			static DetachWfPurgeResp* Instance();

			/****************************************
			* DetachWfPurgeResp
			*    Destructor
			****************************************/
			~DetachWfPurgeResp();			
			
			/******************************************
			* initialize
			*  Initializes action handlers for the state
			* and next state
			******************************************/
			void initialize();

			/*****************************************
			* returns stateId
			*****************************************/
			uint16_t getStateId() const;

			/*****************************************
			* returns stateName
			*****************************************/
			const char* getStateName() const;

		protected:
			/****************************************
			* DetachWfPurgeResp
			*    Protected constructor
			****************************************/
			DetachWfPurgeResp();  
	};
	
};
#endif // __UE_INIT_DETACH__
