ConvergentRequestParams()
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
         	//"		<concat>360145384512345</concat>" //accountNumber, ctn, houseId, flat, requestId, tokenSms
         	//"		<concat>9649995845</concat>"
         	//"		<concat>45</concat>"
         	"		<concat>0895947936</concat>"
      		"	</ws:getHashByConcat>"
   			"</soapenv:Body>"
			"</soapenv:Envelope>",
	        LAST); 
	        
	lr_end_transaction("pool_get_hash", LR_AUTO);
	
	
	web_reg_save_param_ex("ParamName=response", "LB={", "RB=}",	LAST);
	//web_add_cookie("token={token}; domain={endpoint}");
	web_add_cookie("token={systoken}; domain={endpoint}");
	web_add_header("Usss-Language", "ru_RU");

	lr_start_transaction("api_1_0_info_convergentRequestParams");
		
	web_url("api_1_0_info_convergentRequestParams",
		//"URL=http://{endpoint}/api/1.0/info/convergentRequestParams?hash={hash_qouted}&requestId=3601453846&tokenSms=12345",
		//"URL=http://{endpoint}/api/1.0/info/convergentRequestParams?hash={hash_qouted}&ctn=9649995845",
		//"URL=http://{endpoint}/api/1.0/info/convergentRequestParams?hash={hash_qouted}&houseId=4&flat=5",
		"URL=http://{endpoint}/api/1.0/info/convergentRequestParams?hash={hash_qouted}&accountNumber=0895947936",
		"Resource=1",
		"RecContentType=text/html",
		"Referer=",
		"Mode=HTML",
		LAST);
	
	checkResult("api_1_0_info_convergentRequestParams", lr_eval_string("{response}"), lr_eval_string("{token}"), lr_eval_string("{postpaid_ban}"), "");
	
	return 0;
}
