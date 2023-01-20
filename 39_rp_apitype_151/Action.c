Action()
{
	int i_login = atoi(lr_eval_string("{var_Random100}"));

	if ( i_login <= 53) {lr_save_string(lr_eval_string("{ctn13}"),"login"); // chance = 53% - 13
	 }
	 else if (i_login <= 60) {
		 lr_save_string(lr_eval_string("{login_lego}"),"login"); //chance = 7% - lego
	 }
	 else {
		 lr_save_string(lr_eval_string("{ctn105}"),"login"); //chance = 40% - post
	 }
//ctn105

	//Запрос баланса *102#

	web_reg_find("Fail=Found", "Search=Body", "Text=error", LAST);
	web_reg_find("Fail=NotFound","Search=Body",
				 "Text=\xD0\xBF\xD1\x80\xD0\xB8\xD0\xBD\xD1\x8F\xD1\x82\xD0\xB0",
				 LAST);
	web_reg_save_param("var_RESPONSE", "LB=", "RB=", "Search=All",LAST );

    lr_start_transaction("USSRP_API_TYPE_151");	

	web_url("ivrRequest", 
		"URL=http://{host_rp}/servlet/ussdHttpServlet?ussd=102&msisdn={login}", 
		//"URL=http://mn-web04:37001/uss/servlet/ivrRequest?BNumber={BNUMBER}&ANumber=?",
		"Resource=0", 
		"Referer=", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);

 

	if (lr_get_transaction_status ("USSRP_API_TYPE_151") == LR_FAIL) {
        lr_error_message("APITYPE_151 error on login - %s; var_RESPONSE_usages = <%s>",lr_eval_string("{login}"),lr_eval_string("{var_RESPONSE}")); 
	}

	lr_end_transaction("USSRP_API_TYPE_151",LR_AUTO);

    return 0;
}
