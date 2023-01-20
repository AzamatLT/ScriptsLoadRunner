changePP()
{
	if (pool_get_hash(lr_eval_string("{ppCTN}{ppTarif}")) == 0) {

		web_reg_save_param("response", "LB=", "RB=", LAST);

		web_reg_find("Text=<requestId>", LAST);
		//web_add_header("X-API-Sec-Token", "3JfL2pAVEKy60dd3LpXSTdp8XHWv3pG=");  //временно дл€ 45 релиза
		web_add_header("X-API-Sec-Token", "16A7665A159997FCE95B9D5F9B026EEA");

		//отладка на стенде фанка
		//ѕринцип формировани€ входных данных:
		//передаетс€ ctn и pricePlan, на который нужно изменить тариф у данного номера,
		//при этом pricePlan - допустимое значение дл€ текущего тарифа 
		//(смотреть select to_price_plan FROM price_plan_change_valid WHERE from_price_plan LIKE 'текущий тариф')
		//hash вычисл€етс€ по параметрам: ctn,pricePlan (берем фолсовый хеш MEDVED)  ctn+SECOND ,tp MEDVED 


    	lr_start_transaction("B2B_api_SubscriberService_changePP");
		web_custom_request("changePP",
    	"URL=http://{endpoint}/api/SubscriberService",
	//--	"URL=http://dev-slr01.vimpelcom.ru:57001/api/SubscriberService",
		//"URL=http://usssweb-pl03.vimpelcom.ru:81/api/SubscriberService",
		"Method=POST", 
		"EncType=text/xml"
		"TargetFrame="
		"Resource=0", 
		"Referer=", 
		"Body=<?xml version=\"1.0\" encoding=\"ISO-8859-1\"?><soapenv:Envelope xmlns:soapenv=\"http://schemas.xmlsoap.org/soap/envelope/"
				"\" xmlns:urn=\"urn:uss-wsapi:Subscriber\"><soapenv:Header/><soapenv:Body><urn:changePP>"
		
				"<token>{systoken}</token>"
		    	"<hash>{hmacSha1}</hash>"// OG6g6BfrJVdMk36%2FyG%2BWH0ES8tM%3D     MEDVED false{hmacSha1}
				"<ctn>{ppCTN}</ctn>"
				"<pricePlan>{ppTarif}</pricePlan>"//SECOND -/- V1SMX01
				"</urn:changePP></soapenv:Body></soapenv:Envelope>", 
		LAST ); 
    	//--		"<token>16A7665A159997FCE95B9D5F9B026EEA</token>"

		if (lr_get_transaction_status ("B2B_api_SubscriberService_changePP") == LR_FAIL) {

			error_message_to_log("API_b2b_SubscriberService", 
							 "B2B_api_SubscriberService_changePP", 
							 lr_eval_string("{login}"), 
							 lr_eval_string(""), 
							 lr_eval_string("{systoken}"), 
							 lr_eval_string("{response}"), 
							 "",
							 "");
			lr_end_transaction("B2B_api_SubscriberService_changePP",LR_FAIL);
		} else {
			lr_end_transaction("B2B_api_SubscriberService_changePP",LR_AUTO);
		}
	}
	return 0;
}
