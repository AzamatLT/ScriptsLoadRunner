api_1_0_invite_income()
{

	web_reg_save_param_ex("ParamName=response", "LB={", "RB=}",	LAST);
	web_reg_save_param_ex("ParamName=fullresponse", "LB=", "RB=",	LAST);
    web_add_cookie("token={token}; domain={endpoint}");

	lr_start_transaction("api_1_0_invite_income");
	web_url("invite_income",
		"URL=http://{endpoint}/api/1.0/invite/income?ctn={login}&hash={hash}",
		"Resource=1",
		"RecContentType=text/html",
		"Referer=",
		"Mode=HTML",
		LAST);

	checkResult("api_1_0_invite_income",lr_eval_string("{response}"),lr_eval_string("{token}"),lr_eval_string("{login}"),lr_eval_string("{fullresponse}"));
	lr_end_transaction("api_1_0_invite_income", LR_AUTO);
	
	return 0;
}
