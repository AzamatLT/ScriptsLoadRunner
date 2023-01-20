Action()
{
	int i_login = atoi(lr_eval_string("{var_Random100000}")); 
	int percent = atoi(lr_eval_string("{var_Random100}")); 
	int i_tarif = atoi(lr_eval_string("{tarif_Random100}")); 

	char* block_name;

	char* settingNotifications_10 = "api_1_0_GET_setting_notifications";
	char* localization_10 = "api_1_0_localization";
	char* infoStatus_10 = "api_1_0_info_status";
	char* infoAccumulators_10 = "api_1_0_info_accumulators";
	char* infoAccumulators_20 = "api_2_0_info_accumulators";
	char* infoPricePlan_20 = "api_2_0_info_pricePlan";
	char* infoTveSubscriptions_20 = "api_2_0_info_tveSubscriptions"; 
	char* infoServiceList_10 = "api_1_0_info_serviceList";
	char* infoServiceList_20 = "api_2_0_info_serviceList";
	char* infoSubscriptions_10 = "api_1_0_info_subscriptions";
	char* infoPricePlan_10 = "api_1_0_info_pricePlan";
	char* infoMcBalance_10 = "api_1_0_info_mcBalance";
	char* infoUserNotifications_10 = "api_1_0_info_userNotifications";
	char* infoUserType_10 = "api_1_0_info_userType";
	char* infoServiceAvailableList_10 = "api_1_0_info_serviceAvailableList";
	char* offerCheck_10 = "api_1_0_offer_check";
	char* offerCheck_20 = "api_2_0_offer_check";
	char* infoTrialSvod = "api_info_trialSvod";
	char* infoPrepaidBalance_10 = "api_1_0_info_prepaidBalance";
	char* infoPrepaidAddBalance_10 = "api_1_0_info_prepaidAddBalance";
	char* onlineBillDetail_10 = "api_info_1_onlineBillDetail";
	char* infoRests_10 = "api_1_0_info_rests";
	char* infoRests_20 = "api_2_0_info_rests";
	char* infoPostpaidBalance_10 = "api_1_0_info_postpaidBalance";
	char* infoPostpaidDebt_10 = "api_1_0_info_postpaidDebt";
	char* loginInfo_10 = "api_info_1_loginInfo";
	char* authBySysToken = "auth_sys";
	char* authXbr_10 = "auth_xbr";
	char* auth_GET_10 = "auth_one";
	char* auth_PUT_20 = "auth";

	lr_start_transaction("TMP_api_b2c_multi");

	block_name = lr_get_attrib_string("block");

	if ((strcmp(block_name, infoPrepaidBalance_10)==0)||(strcmp(block_name, infoPrepaidAddBalance_10)==0)||(strcmp(block_name, onlineBillDetail_10)==0)) {
		if ( i_login <= 98647) {lr_save_string(lr_eval_string("{login_sys}"),"login"); } // 98.6%
			else {lr_save_string(lr_eval_string("{login_lego}"),"login"); } // 1.4%
	} 
	else if (strcmp(block_name, infoPostpaidDebt_10)==0) {
		lr_save_string(lr_eval_string("{login_postpaid_1ctn_on_ban}"),"login"); // 100%
	}
	else if ((strcmp(block_name, infoRests_10)==0)||(strcmp(block_name, infoPostpaidBalance_10)==0)||(strcmp(block_name, infoRests_20)==0)) {
			 if ( i_login <= 75000) { lr_save_string(lr_eval_string("{login_postpaid_1ctn_on_ban}"),"login"); } // 75%
				else {	lr_save_string(lr_eval_string("{login_postpaid}"),"login");} // 25%

				if ( percent <= 20) { lr_save_string(lr_eval_string("{post_autoprodli}"),"login"); } // 20%
					else if ( percent <= 40) { lr_save_string(lr_eval_string("{post_unlimit}"),"login"); } // 20%

    }
    else if (strcmp(block_name, authBySysToken)==0) {
			lr_save_string(lr_eval_string("{login_sys}"),"login"); // 100%
	}
	else if ((strcmp(block_name, auth_GET_10)==0)||(strcmp(block_name, auth_PUT_20)==0)) {
			lr_save_string(lr_eval_string("{login_postpaid}"),"login"); // 100%
	}
	else if (strcmp(block_name, authXbr_10)==0) {
			if ( i_login <= 7456) {lr_save_string(lr_eval_string("{login_lego}"),"login"); } // 7.5%
			else if ( i_login <= 11695) {lr_save_string(lr_eval_string("{login_postpaid_1ctn_on_ban}"),"login"); } // 11.7%
				else { lr_save_string(lr_eval_string("{login_postpaid}"),"login"); } //	80.8% 
	}
	else {
			if (i_login <= 73000){ lr_save_string(lr_eval_string("{login_sys}"),"login");} // 73%
			else if ( i_login <= 74000) {lr_save_string(lr_eval_string("{login_lego}"),"login"); } // 1%
				else if ( i_login <= 75572) {lr_save_string(lr_eval_string("{login_postpaid_1ctn_on_ban}"),"login"); } // 1.6%
					else { lr_save_string(lr_eval_string("{login_postpaid}"),"login"); } //	24.4% 
	}
		if(strcmp(block_name, settingNotifications_10)==0) {

			api_1_0_GET_setting_notifications();

		} else if(strcmp(block_name, localization_10)==0) {

			api_1_0_localization();

		} else if(strcmp(block_name, infoStatus_10)==0) {

			api_1_0_info_status();

		} else if(strcmp(block_name, infoAccumulators_10)==0) {
		
		

			api_1_0_info_accumulators();

		} else if(strcmp(block_name, loginInfo_10)==0) {

			api_info_1_loginInfo();

		} else if(strcmp(block_name, infoAccumulators_20)==0) {
		
		if ( i_tarif <= 40) {lr_save_string(lr_eval_string("{smart}"),"login"); } // 40% - smart
				//	else 60% i_tarif

			api_2_0_info_accumulators();

		} else if(strcmp(block_name, infoTveSubscriptions_20)==0) { 

			api_2_0_info_tveSubscriptions();

		} else if(strcmp(block_name, infoServiceList_10)==0) {

			api_1_0_info_serviceList();

		} else if(strcmp(block_name, infoServiceList_20)==0) {
		
		if ( i_tarif <= 40) {lr_save_string(lr_eval_string("{smart}"),"login"); } // 40% - smart
				//	else 60% i_tarif

			api_2_0_info_serviceList();

		} else if(strcmp(block_name, infoSubscriptions_10)==0) {

			api_1_0_info_subscriptions();

		} else if(strcmp(block_name, infoPricePlan_10)==0) {

			api_1_0_info_pricePlan();

		} else if(strcmp(block_name, infoPricePlan_20)==0) {
		
		if ( i_tarif <= 40) {lr_save_string(lr_eval_string("{smart}"),"login"); } // 40% - smart
				//	else 60% i_tarif

			api_2_0_info_pricePlan();

		} else if(strcmp(block_name, infoMcBalance_10)==0) {

			api_1_0_info_mcBalance();

		} else if(strcmp(block_name, infoUserNotifications_10)==0) {

			api_1_0_info_userNotifications();

		} else if(strcmp(block_name, infoUserType_10)==0) {

			api_1_0_info_userType();

		} else if(strcmp(block_name, infoServiceAvailableList_10)==0) {
		
		if ( i_tarif <= 40) {lr_save_string(lr_eval_string("{smart}"),"login"); } // 40% - smart
				//	else 60% i_tarif

			api_1_0_info_serviceAvailableList();

		} else if(strcmp(block_name, offerCheck_10)==0) {

			auth_sys(); // предполагает работу с пользовательским токеном
			api_1_0_offer_check();

		} else if(strcmp(block_name, offerCheck_20)==0) {

			api_2_0_offer_check();

		} else if(strcmp(block_name, infoTrialSvod)==0) {

			api_info_trialSvod();

		} else if(strcmp(block_name, infoPrepaidBalance_10)==0) {
		
		if ( i_tarif <= 40) {lr_save_string(lr_eval_string("{smart}"),"login"); } // 40% - smart
				//	else 60% i_tarif

			api_1_0_info_prepaidBalance();

		} else if(strcmp(block_name, infoPrepaidAddBalance_10)==0) {
		
		if ( i_tarif <= 40) {lr_save_string(lr_eval_string("{smart}"),"login"); } // 40% - smart
				//	else 60% i_tarif

			api_1_0_info_prepaidAddBalance();

		} else if(strcmp(block_name, onlineBillDetail_10)==0) {

			auth_sys(); // предполагает работу с пользовательским токеном
			api_info_1_onlineBillDetail();

		} else if (strcmp(block_name, infoRests_10)==0) {

			api_1_0_info_rests();

		} else if (strcmp(block_name, infoRests_20)==0) {

			api_2_0_info_rests();

		} else if(strcmp(block_name, infoPostpaidBalance_10)==0) {

			api_1_0_info_postpaidBalance();

		} else if(strcmp(block_name, infoPostpaidDebt_10)==0) {

			api_1_0_info_postpaidDebt();

		} else if(strcmp(block_name, authBySysToken)==0) { //authBySysToken

			auth_sys();

		} else if(strcmp(block_name, authXbr_10)==0) { //auth_xbr

			auth_xbr();

		} else if(strcmp(block_name, auth_GET_10)==0) { //api_1_0_auth_GET

			auth_one();

		} else if(strcmp(block_name, auth_PUT_20)==0) { //2_0_auth_auth_PUT

			auth();

		} else {

			lr_error_message("api_b2c_multi no block");
			lr_exit(LR_EXIT_ACTION_AND_CONTINUE, LR_AUTO);
		}

	lr_end_transaction("TMP_api_b2c_multi", LR_AUTO);

	lr_free_parameter("login");

	return 0;
}
