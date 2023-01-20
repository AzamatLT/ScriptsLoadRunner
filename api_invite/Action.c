Action()
{
	char* block_name;

	char* inviteIncome_10 = "api_1_0_invite_income";
	char* inviteList_10 = "api_1_0_invite_list";
	char* inviteCreateAndAccept_10 = "api_1_0_invite_create_and_accept";

	block_name = lr_get_attrib_string("block");

	lr_save_string(lr_eval_string("{system_token}"),"token");

	lr_start_transaction("TMP_api_b2c_invite");

		if(strcmp(block_name, inviteIncome_10)==0) {
			api_1_0_invite_income();
		} else if(strcmp(block_name, inviteList_10)==0) {
			api_1_0_invite_list();
		} else if(strcmp(block_name, inviteCreateAndAccept_10)==0) {
			api_1_0_invite_create_and_accept();
		} else {
			lr_error_message("api_invite no block");
			lr_exit(LR_EXIT_ACTION_AND_CONTINUE, LR_AUTO);
		}

	lr_end_transaction("TMP_api_b2c_invite", LR_AUTO);

	return 0;
}
