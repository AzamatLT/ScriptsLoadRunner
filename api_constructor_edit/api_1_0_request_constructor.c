api_1_0_request_constructor()
{
	if (pool_get_hash(lr_eval_string("{login}{constructor_id}")) == 0) {

		web_reg_save_param_ex("ParamName=response", "LB={", "RB=}",	LAST);
		web_reg_save_param_ex("ParamName=fullresponse", "LB=", "RB=",	LAST);
		web_add_cookie("token={system_token}; domain={endpoin}");
	
		lr_start_transaction("api_1_0_request_constructor");
	
		web_custom_request("api_1_0_request_constructor", 
			"URL=http://{endpoint}/api/1.0/request/constructor?ctn={login}&constructorId={constructor_id}&hash={hash_qouted}", 
			"Method=PUT", 
			"Resource=0", 
			"RecContentType=application/json", 
			"Referer=", 
			"Snapshot=t25.inf", 
			"Mode=HTML", 
			"Body=",
			LAST);
	
		checkResult("api_1_0_request_constructor",lr_eval_string("{response}"),"",lr_eval_string("{login}"),lr_eval_string("{fullresponse}"));
		lr_end_transaction("api_1_0_request_constructor",LR_AUTO);
	}
	return 0;
}
