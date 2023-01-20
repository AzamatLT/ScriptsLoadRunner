api_1_0_info_conflict(char *soc)
{
	lr_save_string(soc,"CheckingSoc");

	if (pool_get_hash(lr_eval_string("{login}{CheckingSoc}")) == 0) {
		
		web_reg_save_param_ex("ParamName=response", "LB={", "RB=}",	LAST);
		web_reg_save_param_ex("ParamName=fullresponse", "LB=", "RB=",	LAST);
		web_add_cookie("token={systoken}; domain={endpoint}");
		web_add_header("Usss-Language", "ru_RU");
		web_reg_find("Text=\"conflictList\":[]", "SaveCount=EmptyConflictList_count", LAST );
	
		lr_start_transaction("api_1_0_info_conflict");
	
		web_url("api_1_0_info_conflict",
			"URL=http://{endpoint}/api/1.0/info/conflict?ctn={login}&soc={CheckingSoc}&hash={hash_qouted}",
			"Resource=1",
			"RecContentType=text/html",
			"Referer=",
			"Mode=HTML",
			LAST);
	
		//checkResult("api_1_0_info_conflict",lr_eval_string("{response}"),lr_eval_string("{token}"),lr_eval_string("{login}"),lr_eval_string("{fullresponse}"));
		lr_end_transaction("api_1_0_info_conflict", LR_AUTO);
	
	if (strcmp(lr_eval_string("{EmptyConflictList_count}"), "0") == 0) {
		return -2;}
	else {return 0;}
	}
}
