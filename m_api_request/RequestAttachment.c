RequestAttachment()
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
         	"		<concat>{reqid_prepaidDetail}</concat>" //ctn, serviceName, effDate, expDate, campId, subgroupId, channelType
      		"	</ws:getHashByConcat>"
   			"</soapenv:Body>"
			"</soapenv:Envelope>",
	        LAST); //serviceName={SocToAdd}&ctn={login}
	        
	lr_end_transaction("pool_get_hash", LR_AUTO);
		
	
	web_reg_save_param_ex("ParamName=response", "LB={", "RB=}",	LAST);
	web_reg_save_param_ex("ParamName=fullresponse", "LB=", "RB=",	LAST);

    //web_add_cookie("token={token}; domain={endpoint}");
    web_add_cookie("token={systoken}; domain={endpoint}");
	
	lr_start_transaction("api_1_0_request_requestAttachment");

	web_add_header("Content-Type", "application/zip; charset=utf-8");

    web_custom_request("api_1_0_request_requestAttachment", 
		"URL=http://{endpoint}/api/1.0/request/requestAttachment?requestId={reqid_prepaidDetail}&hash={hash_qouted}", //&userType=Mobile
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		LAST);

	checkResult200("api_1_0_request_requestAttachment",lr_eval_string("{response}"),"",lr_eval_string("{login}"),lr_eval_string("{fullresponse}"));

	return 0;
}


