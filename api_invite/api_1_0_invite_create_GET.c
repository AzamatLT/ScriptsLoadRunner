api_1_0_invite_create_GET()
{
	lr_save_string(lr_eval_string("{create_mainCTN}"),"login");
	lr_save_string(lr_eval_string("{create_mainCTN_hash}"),"hash");
	lr_save_string(lr_eval_string("{create_extraCTN}"),"login_extra");

	if (pool_get_hash(lr_eval_string("{login}{login_extra}SEB_SHARE")) == 0) {

	web_reg_save_param_ex("ParamName=response", "LB={", "RB=}",	LAST);
	web_reg_save_param_ex("ParamName=fullresponse", "LB=", "RB=",	LAST);
    web_add_cookie("token={token}; domain={endpoint}");
    web_add_header("Content-Type", "application/json; charset=utf-8");

	lr_start_transaction("api_1_0_invite_create_GET");
	web_custom_request("invite_create",
		"URL=http://{endpoint}/api/1.0/invite/create?ctnMain={login}&type=SEB_SHARE&ctnExtra={login_extra}&hash={hash_qouted}",
		"Method=GET",
		"TargetFrame=",
		"Resource=0",
		"Referer=",
		LAST );

	checkResult("api_1_0_invite_create_GET",lr_eval_string("{response}"),lr_eval_string("{token}"),lr_eval_string("{login}"),lr_eval_string("{fullresponse}"));
	lr_end_transaction("api_1_0_invite_create_GET", LR_AUTO);
	}

	return 0;
}
