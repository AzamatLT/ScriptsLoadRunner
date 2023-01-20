api_info_1_onlineBillDetail()
{
	web_reg_save_param_ex("ParamName=response", "LB={", "RB=}",	LAST);
	web_reg_save_param_ex("ParamName=fullresponse", "LB=", "RB=",	LAST);
	web_add_cookie("token={token}; domain={endpoint}");
	web_add_header("Usss-Language", "ru_RU");

	lr_start_transaction("api_info_1_onlineBillDetail");

	web_custom_request("api_info_1_onlineBillDetail",
					   "URL=http://{endpoint}/api/1.0/info/onlineBillDetail?ctn={login}&periodStart={startdate}&periodEnd={enddate}",
					   "Method=GET", 
					   "Resource=0", 
					   "RecContentType=application/json", 
					   "Referer=", 
					   "Snapshot=t25.inf", 
					   "Mode=HTML", 
					   LAST);

	lr_end_transaction("api_info_1_onlineBillDetail", LR_AUTO);

	return 0;

}
