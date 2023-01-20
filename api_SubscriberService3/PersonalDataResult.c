PersonalDataResult()
{

	web_reg_save_param("response", "LB=", "RB=", LAST);

	lr_start_transaction("B2B_api_SubscriberService_PersonalDataResult");
	web_custom_request("PersonalDataResult", "Method=POST",  "TargetFrame=", "Resource=0", "Referer=", 
	"URL=http://{endpoint}/api/SubscriberService", 
	"Body=<?xml version=\"1.0\" encoding=\"ISO-8859-1\"?><soapenv:Envelope xmlns:soapenv=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:urn=\"urn:uss-wsapi:Subscriber\"><soapenv:Header/><soapenv:Body><urn:personalDataResult><!--Optional:--><token>{token}</token><!--Optional:--><hash></hash><!--Optional:--><login></login><!--Optional:--><request_id>{PDRreqid}</request_id><!--Optional:--><page></page><!--Optional:--><recordsPerPage></recordsPerPage></urn:personalDataResult></soapenv:Body></soapenv:Envelope>", 
	LAST ); 

	if (lr_get_transaction_status ("B2B_api_SubscriberService_PersonalDataResult") == LR_FAIL) {
		error_message_to_log("API_b2b_SubscriberService", 
							 "B2B_api_SubscriberService_PersonalDataResult", 
							 lr_eval_string("{login}"), 
							 lr_eval_string(""), 
							 lr_eval_string("{token}"), 
							 lr_eval_string("{response}"), 
							 "",
							 "");
		lr_end_transaction("B2B_api_SubscriberService_PersonalDataResult",LR_FAIL);
	} else {
		lr_end_transaction("B2B_api_SubscriberService_PersonalDataResult",LR_AUTO);
	}

	return 0;
}
