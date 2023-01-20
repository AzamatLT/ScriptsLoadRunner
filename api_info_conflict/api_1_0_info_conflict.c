api_1_0_info_conflict()

{
		int i_tarif = atoi(lr_eval_string("{tarif_Random100}")); 
	
if ( i_tarif <= 40) {lr_save_string(lr_eval_string("{smart}"),"ctn"); } // 40% - smart
				//	else 60% 
				
	if (pool_get_hash(lr_eval_string("{ctn}{SocToAdd}")) == 0) {


	web_reg_save_param_ex("ParamName=response", "LB={", "RB=}",	LAST);
	web_add_cookie("token={systoken}; domain={endpoint}");
	web_add_header("Usss-Language", "ru_RU");


	lr_start_transaction("api_1_0_info_conflict");

	web_url("api_1_0_info_conflict",
		"URL=http://{endpoint}/api/99.0/info/conflict?ctn={ctn}&soc={SocToAdd}&hash={hash_qouted}",
		"Resource=1",
		"RecContentType=text/html",
		"Referer=",
		"Mode=HTML",
		LAST);

 	if(!strcmp(lr_eval_string("{response}") , "\"status\":\"OK\",\"code\":20000,\"message\":null")==0) {
		error_message_to_log("API_b2b_SubscriberService", 
							 "api_1_0_info_conflict", 
							 lr_eval_string("{login}"), 
							 lr_eval_string("{ctn}"), 
							 lr_eval_string("{systoken}"), 
							 lr_eval_string("{response}"), 
							 "",
							 "");
        lr_end_transaction("api_1_0_info_conflict", LR_FAIL);
	} else {
		lr_end_transaction("api_1_0_info_conflict", LR_AUTO);
	}
	}
	return 0;

}
