checkResult200(char *transName, char *resp, char *token, char *login,char *fullresp)
{
	int result = lr_get_transaction_status(transName);
	
	if(result != LR_PASS) {
		lr_error_message("\nDate = %s "
			   "Transaction \"%s\" "
			   "Login = %s "
			   "Token = %s "
			   "Response was - %s",
			   lr_eval_string("{Date}"),
			   transName,
               login,
			   token,
			   fullresp);
	}

	lr_set_transaction_status_by_name(result, transName);
	lr_end_transaction(transName, LR_AUTO);
	
	return result;
}
