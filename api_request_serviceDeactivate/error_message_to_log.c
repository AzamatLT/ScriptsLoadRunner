error_message_to_log(char *scriptName, char *transName, char *login, char *ctn, char *token, char *response, char *soc, char *text)
{
	lr_error_message("%s "
					 "Date = [%s] "
					 "Script = \"%s\" "
					 "Transaction = \"%s\" "
					 "Login = %s "
					 "CTN = %s "
					 "Token = %s \n"
					 "Response = [%s]\n"
					 "SOC (if exists) = [%s]\n",
					 
					 text,
					 lr_eval_string("{Date}"),
					 scriptName,
					 transName,
					 login,
					 ctn,
					 token,
					 response,
					 soc);
	return 0;
}

