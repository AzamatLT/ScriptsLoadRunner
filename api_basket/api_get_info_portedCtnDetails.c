api_get_info_portedCtnDetails()
{
	int result;

	web_reg_save_param_ex("ParamName=response", "LB={", "RB=}",	LAST);
	web_reg_save_param_ex("ParamName=fullresponse", "LB=", "RB=",	LAST);
	web_add_cookie("token={sysTokenPL}; domain={endpoint}");
    web_add_header("Content-Type", "application/json");
	web_add_header("X-API-Version", "1");

	lr_start_transaction("api_get_info_portedCtnDetails");

	web_custom_request("api_get_info_portedCtnDetails",
		"Method=GET",
		"URL=http://{endpoint}/api/info/portedCtnDetails?ctn={ctn4ported}&periodStart=2019-04-11&periodEnd=2019-07-10&hash={webhash4ported}",
		"Resource=1",
		"RecContentType=text/html",
		LAST);

	result = checkResult("api_get_info_portedCtnDetails",
				lr_eval_string("{response}"),
				lr_eval_string("{ctn4ported}"),
				lr_eval_string("{fullresponse}"));
	lr_end_transaction("api_get_info_portedCtnDetails", LR_AUTO);
    
	return result;
}
