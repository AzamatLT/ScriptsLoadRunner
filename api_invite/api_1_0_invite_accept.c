api_1_0_invite_accept()
{
	web_reg_save_param_ex("ParamName=response", "LB={", "RB=}",	LAST);
	web_reg_save_param_ex("ParamName=fullresponse", "LB=", "RB=",	LAST);
    web_add_cookie("token={token}; domain={endpoint}");

	lr_save_string(lr_eval_string("{accept_mainCTN_hash}"),"hash");

	lr_start_transaction("api_1_0_invite_accept");
		web_url("invite_accept",
		"URL=http://{endpoint}/api/1.0/invite/accept?ctnMain={login}&ctnExtra={login_extra}&type=SEB_SHARE&hash={hash}",
		"Resource=1",
		"RecContentType=text/html",
		"Referer=",
		"Mode=HTML",
		LAST);

	checkResult("api_1_0_invite_accept",lr_eval_string("{response}"),lr_eval_string("{token}"),lr_eval_string("{login}"),lr_eval_string("{fullresponse}"));
	lr_end_transaction("api_1_0_invite_accept", LR_AUTO);
	
	return 0;
}
