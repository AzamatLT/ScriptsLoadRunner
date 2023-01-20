InviteCreate()
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
         	"		<concat>{MainCTN}SEB_SHARE</concat>" //ctnMain, type	
      		"	</ws:getHashByConcat>"
   			"</soapenv:Body>"
			"</soapenv:Envelope>",
	        LAST); 
	        
	lr_end_transaction("pool_get_hash", LR_AUTO);
	
	
	web_reg_save_param_ex("ParamName=response", "LB={", "RB=}",	LAST);
	//web_reg_save_param_ex("ParamName=fullresponse", "LB=", "RB=",	LAST);
    //web_add_cookie("token={token}; domain={endpoint}");
    web_add_header("Content-Type", "application/json; charset=utf-8");
    web_add_cookie("token={systoken}; domain={endpoint}");

	lr_start_transaction("api_1_0_invite_create_PUT");
	web_custom_request("invite_create",
		"URL=http://{endpoint}/api/1.0/invite/create?hash={hash_qouted}&ctnMain={MainCTN}&type=SEB_SHARE",
		"Method=PUT",
		"TargetFrame=",
		"Resource=0",
		"Referer=",
		"Body={\"ctnExtras\": [\"{SubCTN}\"]}",
		LAST );

	checkResult("api_1_0_invite_create_PUT", lr_eval_string("{response}"), lr_eval_string("{token}"), lr_eval_string("{MainCTN} + {SubCTN}"), "");
	
	return 0;
}
