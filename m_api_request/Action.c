Action()
{
	char* block_name;
	
	char* serviceActivate = "ServiceActivate";
	char* serviceActivate_10 = "ServiceActivate_1_0";
	char* requestList = "RequestList";
	char* requestList_10 = "RequestList_1_0";
	char* requestList_20 = "RequestList_2_0";
	char* serviceAvailableList = "ServiceAvailableList";
	char* serviceDeactivate = "ServiceDeactivate";
	char* subscriptionRemove = "SubscriptionRemove";
	char* subscriptionRemove_10 = "SubscriptionRemove_1_0";
	char* prepaidDetail = "PrepaidDetail";
	char* requestAttachment = "RequestAttachment";
	char* requestDetails = "RequestDetails";
	char* suspendRestore = "SuspendRestore";

	int i_login = atoi(lr_eval_string("{rnd1000}"));
    
//	double time_elapsed1;
//	merc_timer_handle_t timer1;

	// начало снятия метрики
//	timer1 = lr_start_timer();

/*	if (i_login > 700) {
		lr_save_string(lr_eval_string("{login_post}"),"login"); // chance = 30%
	} else {
		 lr_save_string(lr_eval_string("{login_prep}"),"login"); //chance = 70%
	}
	*/
	
		if (i_login > 400) {
		lr_save_string(lr_eval_string("{login_prep}"),"login"); // chance = 60%
	} else {
		 lr_save_string(lr_eval_string("{smart}"),"login"); //chance = 40%
	}

//	lr_save_string(lr_eval_string("{smart}"),"login");
	
	block_name = lr_get_attrib_string("block");
	
	
	if(strcmp(block_name, serviceActivate)==0) {
	//--	lr_save_string(lr_eval_string("{login_prep}"),"login");
		ServiceActivate(0);
	} else if(strcmp(block_name, serviceActivate_10)==0) {
//--		lr_save_string(lr_eval_string("{login_prep}"),"login");
		ServiceActivate(10);
	} else if(strcmp(block_name, requestList)==0) {
		RequestList(0);
	} else if(strcmp(block_name, requestList_10)==0) {
		RequestList(10);
	} else if(strcmp(block_name, requestList_20)==0) {
		RequestList(20);
	} else if(strcmp(block_name, serviceAvailableList)==0) {
        ServiceAvailableList();
	} else if(strcmp(block_name, serviceDeactivate)==0) {
		lr_save_string(lr_eval_string("{login_prep}"),"login");
		ServiceDeactivate();
	} else if(strcmp(block_name, subscriptionRemove)==0) {
		SubscriptionRemove(0);
	} else if(strcmp(block_name, subscriptionRemove_10)==0) {
		SubscriptionRemove(10);
	} else if(strcmp(block_name, prepaidDetail)==0) {
		lr_save_string(lr_eval_string("{login_prep}"),"login");
		PrepaidDetail();
//		lr_error_message("m_api_request use RequestAttachment");
//		lr_exit(LR_EXIT_ACTION_AND_CONTINUE, LR_AUTO);
	} else if(strcmp(block_name, requestAttachment)==0) {
		//prepaid only!
		lr_save_string(lr_eval_string("{login_prep}"),"login");
		PrepaidDetail();
		PrepaidDetail(); //duplicate to reach 656 (713) tph
		sleep(1000); //вместо sleep - получить статус
		RequestAttachment(); //356 tph
	} else if(strcmp(block_name, requestDetails)==0) {
		RequestDetails();
	} else if(strcmp(block_name, suspendRestore)==0) {
		SuspendRestore();
	} else {
		lr_error_message("m_api_request no block");
		lr_exit(LR_EXIT_ACTION_AND_CONTINUE, LR_AUTO);
	}
	
	// окончание снятия метрики
//	time_elapsed1 = lr_end_timer(timer1);
//	lr_output_message("%f", time_elapsed1);

	return 0;
}

