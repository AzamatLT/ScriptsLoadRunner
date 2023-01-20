api_2_0_info_serviceAvailableList()
{

	web_reg_save_param_ex("ParamName=response", "LB={", "RB=}",	LAST);
	web_reg_save_param_ex("ParamName=fullresponse", "LB=", "RB=",	LAST);
    web_add_cookie("token={token}; domain={endpoint}");
//	web_reg_find("Text=availableServices", LAST );

	lr_start_transaction("api_2_0_info_serviceAvailableList");
	web_url("serviceAvailable",
	"URL=http://{endpoint}/api/2.0/info/serviceAvailableList?ctn={login}",
	"Resource=0",
	"RecContentType=text/html",
	"Mode=HTML",
	LAST );

	//checkResult("api_1_0_info_serviceAvailableList",lr_eval_string("{response}"),lr_eval_string("{token}"),lr_eval_string("{login}"),lr_eval_string("{fullresponse}"));
	lr_end_transaction("api_2_0_info_serviceAvailableList", LR_AUTO);
	
	return 0;
}
