Action()
{
	//  api type 60

	lr_start_transaction("USSRP_API_TYPE_60");

	web_reg_find("Fail=Found", "Search=Body", "Text=error", LAST);
//	web_reg_find("Fail=NotFound", "Search=Body", "Text=success", LAST);
	web_reg_find("Fail=NotFound","Search=Body",
				 "Text=\xD0\xBF\xD1\x80\xD0\xB8\xD0\xBD\xD1\x8F\xD1\x82\xD0\xB0",
				 LAST);
	web_reg_save_param("var_RESPONSE", "LB=", "RB=", "Search=All",LAST );

    web_url("ussdRequest", 
		//"URL=http://dev-slr01.vimpelcom.ru:57001/rp/servlet/ivrRequest?BNumber=5553535&ANumber=9683721311",
		//--"URL=http://dev-slr01.vimpelcom.ru:57001/rp/servlet/ussdHttpServlet?ussd=7786583&msisdn=9683721320",
		"URL=http://{host_rp}/servlet/ussdHttpServlet?ussd=7786583&msisdn=9683721320",
			
        "Resource=0", 
		"Referer=", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);

	if (lr_get_transaction_status ("USSRP_API_TYPE_60") == LR_FAIL) {
        lr_error_message("APITYPE_60 error on login - %s; var_RESPONSE_usages = <%s>",lr_eval_string("{ctn_id}"),lr_eval_string("{var_RESPONSE}")); 
	}

	lr_end_transaction("USSRP_API_TYPE_60",LR_AUTO);

	return 0;
}
