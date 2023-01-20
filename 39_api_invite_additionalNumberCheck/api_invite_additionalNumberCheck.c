api_invite_additionalNumberCheck()
{
	if (pool_get_hash(lr_eval_string("{create_mainCTN}")) == 0) {

	web_reg_save_param_ex("ParamName=response", "LB={", "RB=}",	LAST);
	web_reg_save_param_ex("ParamName=fullresponse", "LB=", "RB=",	LAST);
    web_add_cookie("token={system_token}; domain={endpoint}");
    web_add_header("Content-Type", "application/json; charset=utf-8");

	lr_start_transaction("api_invite_additionalNumberCheck");
	web_custom_request("api_invite_additionalNumberCheck",
		"URL=http://{endpoint}/api/invite/additionalNumberCheck?ctnMain={create_mainCTN}&hash={hash_qouted}",
		"Method=PUT",
		"TargetFrame=",
		"Resource=0",
		"Referer=",
		"Body={\"ctnExtras\":[\"{create_extraCTN}\"]}",
		LAST );

	checkResult("api_invite_additionalNumberCheck",lr_eval_string("{response}"),lr_eval_string("{token}"),lr_eval_string("{login}"),lr_eval_string("{fullresponse}"));
	lr_end_transaction("api_invite_additionalNumberCheck", LR_AUTO);
	}

	return 0;
}
