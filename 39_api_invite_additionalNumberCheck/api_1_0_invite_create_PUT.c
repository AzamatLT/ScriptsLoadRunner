api_1_0_invite_create_PUT()
{
	web_reg_save_param_ex("ParamName=response", "LB={", "RB=}",	LAST);
	web_reg_save_param_ex("ParamName=fullresponse", "LB=", "RB=",	LAST);
    web_add_cookie("token={token}; domain={endpoint}");
    web_add_header("Content-Type", "application/json; charset=utf-8");

	lr_start_transaction("api_1_0_invite_create_PUT");
	web_custom_request("invite_create",
		"URL=http://{endpoint}/api/1.0/invite/create?ctnMain={login}&type=SEB_SHARE&hash={hash}",
		"Method=PUT",
		"TargetFrame=",
		"Resource=0",
		"Referer=",
		"Body={\"ctnExtras\": [\"{login_extra}\"]}",
		LAST );

	checkResult("api_1_0_invite_create_PUT",lr_eval_string("{response}"),lr_eval_string("{token}"),lr_eval_string("{login}"),lr_eval_string("{fullresponse}"));
	lr_end_transaction("api_1_0_invite_create_PUT", LR_AUTO);
	
	return 0;
}
