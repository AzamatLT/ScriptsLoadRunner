checkResult(char *transName, char *resp, char *token, char *login,char *txt)
{
	 	if(!strcmp(resp , "\"status\":\"OK\",\"code\":20000,\"message\":null")==0)
		 {
			lr_error_message("\nDate = %s "
			   "Transaction \"%s\" "
			   "Login = %s "
			   "Token = %s "
			   "Response was - %s",
			   lr_eval_string("{Date}"),
			   transName,
               login,
			   token,
			   txt);

			lr_set_transaction_status_by_name(LR_FAIL, transName); 
			return -1;
		}
	   else 
		{ 
		    return 0;
		}
}
