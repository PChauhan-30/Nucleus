

 /*
 * Copyright 2021-present Infosys Limited
 *
 * SPDX-License-Identifier: Apache-2.0
 */
 
 /******************************************************
 * createBearerProcedureStates.h
 * This is an auto generated file.
 * Please do not edit this file.
 * All edits to be made through template source file
 * <TOP-DIR/scripts/SMCodeGen/templates/stateMachineTmpls/state.h.tt>
 ******************************************************/
 #ifndef __CREATE_BEARER_PROCEDURE__
 #define __CREATE_BEARER_PROCEDURE__

 #include "state.h"

 namespace mme {
	class CreateBearerStart : public SM::State
	{
		public:
			/******************************************
			* Instance 
			*    Creates static instance for the state
			*******************************************/
			static CreateBearerStart* Instance();

			/****************************************
			* CreateBearerStart
			*    Destructor
			****************************************/
			~CreateBearerStart();			
			
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
			* CreateBearerStart
			*    Protected constructor
			****************************************/
			CreateBearerStart();  
	};
	
	class CreateBearerWfPagingComplete : public SM::State
	{
		public:
			/******************************************
			* Instance 
			*    Creates static instance for the state
			*******************************************/
			static CreateBearerWfPagingComplete* Instance();

			/****************************************
			* CreateBearerWfPagingComplete
			*    Destructor
			****************************************/
			~CreateBearerWfPagingComplete();			
			
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
			* CreateBearerWfPagingComplete
			*    Protected constructor
			****************************************/
			CreateBearerWfPagingComplete();  
	};
	
	class CreateBearerWfDedActComplete : public SM::State
	{
		public:
			/******************************************
			* Instance 
			*    Creates static instance for the state
			*******************************************/
			static CreateBearerWfDedActComplete* Instance();

			/****************************************
			* CreateBearerWfDedActComplete
			*    Destructor
			****************************************/
			~CreateBearerWfDedActComplete();			
			
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
			* CreateBearerWfDedActComplete
			*    Protected constructor
			****************************************/
			CreateBearerWfDedActComplete();  
	};
	
};
#endif // __CREATE_BEARER_PROCEDURE__
