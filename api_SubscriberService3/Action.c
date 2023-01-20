Action()
{
    int i = atoi(lr_eval_string("{var_Random100}")); //теперь 1'000'000
    char* block_name;

	char* UnbilledCallsList = "getUnbilledCallsList";
	char* ServicesList = "getServicesList";
	char* UnbilledBalances = "getUnbilledBalances";
	char* PaymentList = "getPaymentList";
	char* RequestList = "getRequestList";
	char* SIMList = "getSIMList"; 
	char* AddAndDelSOC = "AddDelSOC";
	char* AuthService = "Auth";
	char* CTNInfoList = "getCTNInfoList";
	char* getRestoreCTN = "restoreCTN";
	char* restRestoreCTN = "RESTrestoreCTN";
	char* getSuspendRestore = "suspendRestore";
	char* changePPRequest = "changePP";
	char* addSharedNumberDOLRequest = "addSharedNumberDOL";
	

	block_name = lr_get_attrib_string("block_name");

	//block_name = lr_get_attrib_string("CTNInfoList");

	if ( i <= 94787) // others with AddAndDelSoc = 90000!
	{
		lr_save_string(lr_eval_string("{user_id_adddelsoc}"),"login");
		lr_save_string(lr_eval_string("{ban_adddelsoc}"),"ban");
		lr_save_string(lr_eval_string("{ctn_adddelsoc}"),"ctn");
	}
	else if (i <= 697458)// others without AddAndDelSoc
	{
		lr_save_string(lr_eval_string("{user_id_all}"),"login");
		lr_save_string(lr_eval_string("{ban_all}"),"ban");
		lr_save_string(lr_eval_string("{ctn_all}"),"ctn");
	}

	else if (i <= 997426)// others without AddAndDelSoc for PersonalDataResult (997458-697458 = 30% (300'000/1'000'000) = 2 тпс = (0,3*6,66))
	{
		lr_save_string(lr_eval_string("{PDRlogin}"),"login");
		lr_save_string(lr_eval_string("{PDRban}"),"ban");
		lr_save_string(lr_eval_string("{PDRctn}"),"ctn");
	}

	else if (i <= 999926)  // -''- для GetDataReport - в данный момент установлен 0.0167 тпс = 0,25% (2500/1'000'000) от 6,66 (тпс сценария)
	{
		lr_save_string(lr_eval_string("{oper4gd}"),"login");
		lr_save_string(lr_eval_string("{ban4gd}"),"ban");
		lr_save_string(lr_eval_string("{ctn4gd}"),"ctn");
		lr_save_string(lr_eval_string("{req4gd}"),"reqq");

	} 
    else  //вызов 1 раз в час банов с количеством номеров более 10'000 - ТПС 0,00016 - 0,0074% (74/1'000'000) от 2.11
    {
		lr_save_string(lr_eval_string("{gd10koper}"),"login");
		lr_save_string(lr_eval_string("{gd10kban}"),"ban");
		lr_save_string(lr_eval_string("{gd10kctn}"),"ctn");
		lr_save_string(lr_eval_string("{gd10kreq}"),"reqq");
	}

    lr_start_transaction("TMP_SubscriberService_Multi");

		if(strcmp(block_name, CTNInfoList)==0) {

			getCTNInfoList();

		} else if(strcmp(block_name, ServicesList)==0) {

			getServicesList();

		} else if(strcmp(block_name, UnbilledBalances)==0) {

			getUnbilledBalances();

        } else if(strcmp(block_name, UnbilledCallsList)==0) {

			getUnbilledCallsList();

        } else if(strcmp(block_name, PaymentList)==0) {

			lr_save_string(lr_eval_string("{pay_login}"),"login");
			lr_save_string(lr_eval_string("{pay_ban}"),"ban");
			lr_save_string(lr_eval_string("{pay_ctn}"),"ctn");

			getPaymentList();

        } else if(strcmp(block_name, RequestList)==0) {

			getRequestList();

        } else if(strcmp(block_name, SIMList)==0) {

			getSIMList();

        } else if(strcmp(block_name, AddAndDelSOC)==0) {

			lr_save_string(lr_eval_string("{user_id_adddelsoc}"),"login");
			lr_save_string(lr_eval_string("{ban_adddelsoc}"),"ban");
			lr_save_string(lr_eval_string("{ctn_adddelsoc}"),"ctn");

			AddDelSOCAdd();

			lr_save_string(lr_eval_string("{user_id_adddelsoc}"),"login");
			lr_save_string(lr_eval_string("{ban_adddelsoc}"),"ban");
			lr_save_string(lr_eval_string("{ctn_adddelsoc}"),"ctn");

			AddDelSOCDel();

		} else if(strcmp(block_name, AuthService)==0) {

			Auth();

        } else if(strcmp(block_name, getRestoreCTN)==0) {

            lr_save_string(lr_eval_string("{ctn_restoreCTN}"),"ctn");

			restoreCTN();

        } else if(strcmp(block_name, restRestoreCTN)==0) {

            RESTrestoreCTN();

        }  else if(strcmp(block_name, getSuspendRestore)==0) {

            suspendRestore();
			

        }  else if(strcmp(block_name, changePPRequest)==0) { 

          //  lr_save_string(lr_eval_string("{ctn_restoreCTN}"),"ctn");

			changePP();

        } else if(strcmp(block_name, addSharedNumberDOLRequest)==0) { 

          //  lr_save_string(lr_eval_string("{ctn_restoreCTN}"),"ctn");

			addSharedNumberDOL();
			

        } else {

			lr_error_message("api_SubscriberService no block");
			lr_exit(LR_EXIT_ACTION_AND_CONTINUE, LR_AUTO);
		}

	lr_end_transaction("TMP_SubscriberService_Multi", LR_PASS);
/*
	lr_free_parameter("login");
	lr_free_parameter("ban");
	lr_free_parameter("ctn");
	lr_free_parameter("token");
	lr_free_parameter("response");
	lr_free_parameter("socToAdd");
	lr_free_parameter("AddSOC");
	lr_free_parameter("SocToAdd");
	lr_free_parameter("DelSOC");
	lr_free_parameter("DelSOCIndex");
	lr_free_parameter("SocToDel");
	lr_free_parameter("CheckingSoc");
*/


	 return 0;
}
