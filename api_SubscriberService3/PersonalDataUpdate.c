PersonalDataUpdate()
{

	char *utf1 = "*����� �������� �����;*����� ��������;*�����������;*����� ���������;*��� ���������;*���� ������;��� �����;��� ������������� ��������� ��������;�������� ������������ ��;*���� ��������;����� ������������ �����;���� ������ ������������ �����;���� �������� ������������ �����;�������� �����������;*���;��������;*�������;����� ��������;*���;���;�����;������ ������;*������ ��� ������;������ ������;������ �����;*������ ��� ��;*������ ���������� �����;������ ��� �����;������ �����;������ ����� ����;������ ��� ��������;������ ����� ��������;������ ��� ���������;������ ����� ���������;������ �����������;������ ���� ��;������� ������;*������� ��� ������;������� ������;������� �����;*������� ��� ��;*������� ���������� �����;������� ��� �����;������� �����;������� ����� ����;������� ��� ��������;������� ����� ��������;������� ��� ���������;������� ����� ���������;������� �����������;������� ���� ��;&#x0d;&#x0a";
	//;{ban};;
	char *utf2 = "RUS;7888123466;1;03.01.2000;����� ������ �� ������ ������ �� ������ �������;770064;;13.04.1990;;;;;����;��������;������;������;M;;;121351;RUS;;�����������;�.;������;��.;���������;17;;;��.;13;;;121351;RUS;;�����������;�.;������;��.;���������;17;;;��.;13;;";

	web_reg_save_param("response", "LB=", "RB=", LAST);
	web_reg_save_param("request_id","LB=_id>", "RB=<", LAST );

    lr_convert_string_encoding(utf1, LR_ENC_SYSTEM_LOCALE, LR_ENC_UTF8, "utf1");
	lr_convert_string_encoding(utf2, LR_ENC_SYSTEM_LOCALE, LR_ENC_UTF8, "utf2");

	lr_save_string(lr_eval_string("{utf1}"),"utf1");
	lr_save_string(lr_eval_string("{utf2}"),"utf2");

	lr_start_transaction("B2B_api_SubscriberService_PersonalDataUpdate");
	web_custom_request("PersonalDataUpdate", "Method=POST","EncType=text/xml", "TargetFrame=", "Resource=0", "Referer=", 
	"URL=http://{endpoint}/api/SubscriberService", 
	"Body=<soapenv:Envelope xmlns:soapenv=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:urn=\"urn:uss-wsapi:Subscriber\"><soapenv:Header/><soapenv:Body><urn:personalDataUpdate><token>{token}</token><data>{utf1};{ban};;{utf2}</data></urn:personalDataUpdate></soapenv:Body></soapenv:Envelope>",
	LAST ); 

	if (lr_get_transaction_status ("B2B_api_SubscriberService_PersonalDataUpdate") == LR_FAIL) {
		error_message_to_log("API_b2b_SubscriberService", 
							 "B2B_api_SubscriberService_PersonalDataUpdate", 
							 lr_eval_string("{login}"), 
							 lr_eval_string(""), 
							 lr_eval_string("{ban}"), 
							 lr_eval_string("{token}"), 
							 lr_eval_string("{request_id}"),
							 lr_eval_string("PersonalDataUpdate"), 
							 lr_eval_string("{response}"), 
							 "",
							 "");
		lr_end_transaction("B2B_api_SubscriberService_PersonalDataUpdate",LR_FAIL);
	} else {
		lr_end_transaction("B2B_api_SubscriberService_PersonalDataUpdate",LR_AUTO);
	}

//	sleep(4000);
//	PersonalDataResult(); ��������� � ���� - � ����� ������, ����� ������ ����� ������������

	return 0;
}
