checkResult(char *transName, char *resp, char *token, char *login,char *fullresp)
{
	int result = strcmp(resp , "\"status\":\"OK\",\"code\":20000,\"message\":null");
	if(result < 0) {
		result = result * -1;
	}		
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
