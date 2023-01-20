Action()
{
    int i_login = atoi(lr_eval_string("{var_Random1000}"));
	char* block_name;

	char* availableConstructors_10 = "api_info_1_0_availableConstructors";
	char* requestConstructor_10 = "api_1_0_request_constructor";

	block_name = lr_get_attrib_string("block");
	//block_name = "api_1_0_request_constructor";

    if ( i_login > 900) {lr_save_string(lr_eval_string("{lego_login}"),"login"); }// chance = 10%
        else{lr_save_string(lr_eval_string("{login_0}"),"login"); }//chance = 90%
	 
	// получение доступного конструктора для подключения
    if ( i_login > 900) {
		lr_save_string(lr_eval_string("{price_newlego}"),"price"); // chance = 10%
		lr_save_string(lr_eval_string("{cid}"),"constructor_id");
		}
		 else{
			 lr_save_string(lr_eval_string("{price_lego}"),"price"); //chance = 90%
			 lr_save_string(lr_eval_string("{cid0}"),"constructor_id");
		 }

	 if(strcmp(block_name, availableConstructors_10)==0) {
		 api_info_1_0_availableConstructors();
	 } else if(strcmp(block_name, requestConstructor_10)==0) {
		 api_1_0_request_constructor();
	 } else {
		 lr_error_message("api_constructor_edit no block");
		 lr_exit(LR_EXIT_ACTION_AND_CONTINUE, LR_AUTO);
	 }

	return 0;
}
