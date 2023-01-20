addSharedNumberDOL()
{
	if (pool_get_hash(lr_eval_string("{ctn1}{ctn1}")) == 0) {

		web_reg_save_param("response", "LB=", "RB=", LAST);

		web_reg_find("Text=<requestId>", LAST);
		//web_add_header("X-API-Sec-Token", "3JfL2pAVEKy60dd3LpXSTdp8XHWv3pG=");  //�������� ��� 45 ������
		web_add_header("X-API-Sec-Token", "C4B8EDDA1D0D8A44FF5B04193F5B91D3");

		//������� �� ������ �����
		//������� ������������ ������� ������:
        //  1. ������� ctn
		//	2. ��������� ������ �������, �������� ������: SUBS_SO_HW12M_MSK_RUR ��� SUBS_SO_HW8M_MSK_RUR
		//     ��� ������ �� ���������: HWX1
		//	   �����: SUBS_SO_HWX1_RUR
		//  3. �������� ���: VIPHW12M ��� VIPHW8M
		//hash ����������� �� ����������: ctnFrom,ctnTo,checkAddNumberRegistration (����� �������� ��� MEDVED)


    	lr_start_transaction("B2B_api_SubscriberService_addSharedNumberDOL");
		web_custom_request("addSharedNumberDOL",
   	//--	"URL=http://usssweb-pl03:29003/api/SubscriberService",
		"URL=http://{endpoint}/api/SubscriberService",
	//--	"URL=http://usssweb-pl03.vimpelcom.ru:81/api/SubscriberService",
		"Method=POST", 
		"EncType=text/xml"
		"TargetFrame="
		"Resource=0", 
		"Referer=", 
		"Body=<?xml version=\"1.0\" encoding=\"ISO-8859-1\"?><soapenv:Envelope xmlns:soapenv=\"http://schemas.xmlsoap.org/soap/envelope/"
				"\" xmlns:urn=\"urn:uss-wsapi:Subscriber\"><soapenv:Header/><soapenv:Body><urn:addSharedNumberDOL>"
			
				"<token>{systoken}</token>"
		        "<hash>{hmacSha1}</hash>"
				"<ctnFrom>{ctn1}</ctnFrom>"
				"<ctnTo>{ctn1}</ctnTo>"  
				"<checkAddNumberRegistration>true</checkAddNumberRegistration>"
				"</urn:addSharedNumberDOL></soapenv:Body></soapenv:Envelope>", 
		LAST ); 
    	//--	"<token>C4B8EDDA1D0D8A44FF5B04193F5B91D3</token>"
    	//--	"<hash>7mfelvQrbU4AnxNekddQfQ2Fs+o=</hash>"// MEDVED false
    	//--	"<hash>{hasher}</hash>"
		   		//--"<hash>Z932T03vyHBkJzLgOjAyC6m7QoU=</hash>"

		if (lr_get_transaction_status ("B2B_api_SubscriberService_addSharedNumberDOL") == LR_FAIL) {

			error_message_to_log("API_b2b_SubscriberService", 
							 "B2B_api_SubscriberService_addSharedNumberDOL", 
							 lr_eval_string("{login}"), 
							 lr_eval_string(""), 
							 lr_eval_string("{systoken}"), 
							 lr_eval_string("{response}"), 
							 "",
							 "");
			lr_end_transaction("B2B_api_SubscriberService_addSharedNumberDOL",LR_FAIL);
		} else {
			lr_end_transaction("B2B_api_SubscriberService_addSharedNumberDOL",LR_AUTO);
		}
	}
	return 0;
}
