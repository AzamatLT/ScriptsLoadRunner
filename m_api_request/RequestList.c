RequestList(int version) {

	lr_start_transaction("pool_get_hash");

	web_reg_save_param_ex("ParamName=hash_qouted",
		                    "LB=<urlQuote>",
		                    "RB=</urlQuote>",
		                   LAST);
		
	//для V1.0 - login, requestId, type, subType, status, needFileSize
	//для V2.0 - login, requestId, type, subType, status, dateFrom.
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
         	"		<concat>{login}</concat>" 
      		"	</ws:getHashByConcat>"
   			"</soapenv:Body>"
			"</soapenv:Envelope>",
	        LAST); //serviceName={SocToAdd}&ctn={login}
	        
	lr_end_transaction("pool_get_hash", LR_AUTO);
	
	web_reg_save_param_ex("ParamName=response", "LB={", "RB=}",	LAST);
	web_reg_save_param_ex("ParamName=fullresponse", "LB=", "RB=",	LAST);
    //web_add_cookie("token={token}; domain={endpoint}");
    web_add_cookie("token={systoken}; domain={endpoint}");

	if (version == 20) {

		lr_start_transaction("api_2_0_request_list");
	
		web_add_header("X-API-Version", "2");
		web_add_header("Content-Type", "application/json; charset=utf-8");
	
	    web_custom_request("api_2_0_request_list", 
			"URL=http://{endpoint}/api/2.0/request/list?hash={hash_qouted}&login={login}", //&userType=Mobile
			"Method=PUT", 
			"Resource=0", 
			"RecContentType=application/json", 
			"Referer=", 
			"Snapshot=t25.inf", 
			"Mode=HTML", 
			"Body={}",
			LAST);
	
		checkResult("api_2_0_request_list",lr_eval_string("{response}"),"",lr_eval_string("{login}"),lr_eval_string("{fullresponse}"));
		
	} else if (version == 10) {

		lr_start_transaction("api_1_0_request_list");
	
		web_add_header("X-API-Version", "1");
		web_add_header("Content-Type", "application/json; charset=utf-8");
	
	    web_custom_request("api_1_0_request_list", 
			"URL=http://{endpoint}/api/1.0/request/list?hash={hash_qouted}&login={login}", //&userType=Mobile
			"Method=PUT", 
			"Resource=0", 
			"RecContentType=application/json", 
			"Referer=", 
			"Snapshot=t25.inf", 
			"Mode=HTML", 
			"Body={}",
			LAST);
	
		checkResult("api_1_0_request_list",lr_eval_string("{response}"),"",lr_eval_string("{login}"),lr_eval_string("{fullresponse}"));

	} else {

		lr_start_transaction("api_request_list");
	
		web_add_header("X-API-Version", "1");
		web_add_header("Content-Type", "application/json; charset=utf-8");
	
	    web_custom_request("api_request_list", 
			"URL=http://{endpoint}/api/request/list?hash={hash_qouted}&login={login}", //&userType=Mobile
			"Method=PUT", 
			"Resource=0", 
			"RecContentType=application/json", 
			"Referer=", 
			"Snapshot=t25.inf", 
			"Mode=HTML", 
			"Body={}",
			LAST);
	
		checkResult("api_request_list",lr_eval_string("{response}"),"",lr_eval_string("{login}"),lr_eval_string("{fullresponse}"));
		//lr_end_transaction("api_request_list", LR_AUTO);

	}
	return 0;

}
