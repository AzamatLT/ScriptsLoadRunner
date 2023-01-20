api_1_0_info_conflict(char *transName, char *soc)

{
    int ik = atoi(lr_eval_string("{var_Random100}"));

	lr_save_string(soc,"CheckingSoc");

	web_reg_save_param_ex("ParamName=response", "LB={", "RB=}",	LAST);
	web_add_cookie("token={token}; domain={endpoint}");
	web_add_header("Usss-Language", "ru_RU");
	web_reg_find("Text=\"conflictList\":[]", "SaveCount=EmptyConflictList_count", LAST ); 

	lr_start_transaction("api_1_0_info_conflict");

	web_url("api_1_0_info_conflict",
		"URL=http://{endpoint}/api/1.0/info/conflict?ctn=&soc={CheckingSoc}",
		"Resource=1",
		"RecContentType=text/html",
		"Referer=",
		"Mode=HTML",
		LAST);

 	if(!strcmp(lr_eval_string("{response}") , "\"status\":\"OK\",\"code\":20000,\"message\":null")==0) {
		error_message_to_log("API_b2b_SubscriberService", 
							 "api_1_0_info_conflict", 
							 lr_eval_string("{login}"), 
							 lr_eval_string(""), 
							 lr_eval_string("{token}"), 
							 lr_eval_string("{response}"), 
							 "",
							 "");
        lr_end_transaction("api_1_0_info_conflict", LR_FAIL);
	} else {
		lr_end_transaction("api_1_0_info_conflict", LR_AUTO);
	}

if (strcmp(lr_eval_string("{EmptyConflictList_count}"), "0") == 0) {
	return -2;}
else {return 0;}

}
