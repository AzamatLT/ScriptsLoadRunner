api_1_0_info_serviceAvailableList()
{
	if (pool_get_hash(lr_eval_string("{login}")) == 0) {
    
		web_reg_save_param_ex("ParamName=response", "LB={", "RB=}",	LAST);
		web_reg_save_param_ex("ParamName=fullresponse", "LB=", "RB=",	LAST);
		web_add_cookie("token={system_token}; domain={endpoint}");

		lr_start_transaction("api_1_0_info_serviceAvailableList");
		web_url("serviceAvailable",
				"URL=http://{endpoint}/api/1.0/info/serviceAvailableList?ctn={login}&skipEligibilityRulesCheck={skipEligibilityRulesCheck}&hash={hash_qouted}",
                "Resource=0",
				"RecContentType=text/html",
				"Mode=HTML",
				LAST );

	lr_end_transaction("api_1_0_info_serviceAvailableList", LR_AUTO);
	}
	return 0;
}
