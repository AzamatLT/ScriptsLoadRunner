Action()
{
	int i_login = atoi(lr_eval_string("{var_Random1000}"));
	char* block_name;

	char* infoRecommendedBasket = "api_info_recommendedBasket";
	char* requestBasket = "api_request_basket";

	block_name = lr_get_attrib_string("block");


	 /*if ( i_login > 900) {lr_save_string(lr_eval_string("{login_lego}"),"login"); // chance = 10%
	 }
	 else if ( i_login > 600) {lr_save_string(lr_eval_string("{login_sub_auth}"),"login"); // chance = 30%
	 }
	 else {	 lr_save_string(lr_eval_string("{login_connect}"),"login"); //chance = 90%
	 }*/

	 if ( i_login > 900) {lr_save_string(lr_eval_string("{login_lego}"),"login"); // chance = 10%
	 }
	// else if ( i_login > 600) {lr_save_string(lr_eval_string("{login_sub_auth}"),"login"); // chance = 30%
	 //}
	 else if (i_login > 450) {lr_save_string(lr_eval_string("{ctn2delMn}"),"login"); //chance = 30%
	 }
	 else {lr_save_string(lr_eval_string("{login_connect}"),"login"); //chance = 60%
	 } 

//	if(auth()==0){
	 
		if(strcmp(block_name, infoRecommendedBasket)==0) {
		
		
			api_info_recommendedBasket();
		} else if(strcmp(block_name, requestBasket)==0) {
			api_request_basket();
		} else {
			lr_error_message("api_basket no block");
			lr_exit(LR_EXIT_ACTION_AND_CONTINUE, LR_AUTO);
		}
//	}

	return 0;
}
