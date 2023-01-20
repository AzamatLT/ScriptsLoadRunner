PrepaidDetail()
{
	//{startDate} = 2019-09-29
	//hashDate = 20190923000000

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
         	"		<concat>{login}{startY}{startM}{startD}000000{endY}{endM}{endD}000000{reportType}</concat>" //ctn, startDate, endDate, reportType, emailSendInd
      		"	</ws:getHashByConcat>"
   			"</soapenv:Body>"
			"</soapenv:Envelope>",
	        LAST);
	        
	lr_end_transaction("pool_get_hash", LR_AUTO);
		
	
	web_reg_save_param_ex("ParamName=response", "LB={", "RB=}",	LAST);
	web_reg_save_param_ex("ParamName=fullresponse", "LB=", "RB=",	LAST);
    //web_add_cookie("token={token}; domain={endpoint}");
    web_add_cookie("token={systoken}; domain={endpoint}");
	web_add_header("Content-Type", "application/json; charset=utf-8");
	web_add_header("Impersonation-Context", "main-login=\"{login}\"");

	web_reg_save_param_ex("ParamName=reqid_prepaidDetail", "LB=\"requestId\":", "RB=}", LAST);

	lr_start_transaction("api_1_0_request_prepaidDetail");

    web_custom_request("api_1_0_request_prepaidDetail", 
		"URL=http://{endpoint}/api/request/prepaidDetail?hash={hash_qouted}&ctn={login}&startDate={startDate}&endDate={endDate}&reportType={reportType}", //&userType=Mobile
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		LAST);

	checkResult("api_1_0_request_prepaidDetail",lr_eval_string("{response}"),"",lr_eval_string("{login}"),lr_eval_string("{fullresponse}"));

	return 0;
}
