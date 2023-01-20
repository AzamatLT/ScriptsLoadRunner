CreateConvergentRequest()
{
	lr_start_transaction("pool_get_hash");

	web_reg_save_param_ex("ParamName=hash_qouted",
		                    "LB=<urlQuote>",
		                    "RB=</urlQuote>",
		                   LAST);
		
	web_custom_request("GetHashValue",
			"URL={HashGen_ServerPath}",
			"Method=POST",
	        "Resource=0",
	        "Referer=",
	        "EncType=text/xml; charset=UTF-8",
	        "Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?>"
	        "<soapenv:Envelope xmlns:soapenv=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:ws=\"http://ws.hashgen.bellintegrator.ru/\">"
   			"<soapenv:Header/>"
   			"<soapenv:Body>"
      		"	<ws:getHashByConcat>"
         	"		<concat>FTTB/0897985714</concat>" //login
      		"	</ws:getHashByConcat>"
   			"</soapenv:Body>"
			"</soapenv:Envelope>",
	        LAST); 
	        
	lr_end_transaction("pool_get_hash", LR_AUTO);
	
	
	web_reg_save_param_ex("ParamName=response", "LB={", "RB=}",	LAST);
	//web_add_cookie("token={token}; domain={endpoint}");
	web_add_cookie("token={systoken}; domain={endpoint}");
	web_add_header("Usss-Language", "ru_RU");

	lr_start_transaction("api_1_0_request_createConvergentRequest");
	
	//"requestId":3601453839}
		
	web_custom_request("api_1_0_request_createConvergentRequest",
		"URL=http://{endpoint}/api/1.0/request/createConvergentRequest?hash={hash_qouted}&login=FTTB/0897985714",
		"Method=PUT", 
		"Resource=1",
		"EncType=application/json", 
		"Referer=",
		"Mode=HTML",
		"Body="
		"{"
		"  \"servicesFttb\": ["
		"    {"
		"      \"serviceId\": \"{service_id}\","
		"      \"inPreset\": true"
		"    }"
		"  ],"
		" \"mobileCtnInfo\": ["
		"    {"
		"      \"ctn\": \"9649995845\""
		"    }"
		"  ],"
		"  \"presetId\": \"{preset_id}\","
		"  \"pricePlanConv\": \"FTTB/0897985714\","
		"  \"phone\": \"9649995845\","
		"  \"cityId\": \"58\","
		"  \"streetId\": \"3\","
		"  \"houseId\": \"4\","
		"  \"flat\": \"5\""
		"}",
		LAST);
	
	checkResult("api_1_0_request_createConvergentRequest", lr_eval_string("{response}"), lr_eval_string("{token}"), lr_eval_string("?"), "");
	
	/*
	select * from ecr6_fttb_users where convergence_ctn is not null;
	SELECT * FROM INAC_PRESET_PARAM WHERE PS_PRESET_SERV = 'PS00035' and ps_usss_visible=1 ORDER BY PS_SERV_TYPE;
	SELECT * FROM INAC_SERVICES_PARAM isp WHERE isp.ID_SERVICE = 'PS00035';
	SELECT S_CITY FROM INAC_SERVICES WHERE S_ID = 'PS00035';
	 */
	
	return 0;
}
