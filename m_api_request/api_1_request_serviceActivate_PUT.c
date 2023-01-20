api_1_request_serviceActivate_PUT()
{
	int rnd_serviceActivate = atoi(lr_eval_string("{rnd_serviceActivate}"));
	int elemCnt,i,SocDoesntExist;
    char SocForDelIndex[2];
	char SocForDel[15];
	char SocForAdd[15];


// 202/205 ���� ������� �� ������ 1.0

if (rnd_serviceActivate > 3) {
	
	// ����� ������ ��������� �����

	web_reg_save_param("socToAdd","LB=\"name\":\"", "RB=\"", LAST );
	web_reg_save_param("AddSOC", "LB=\"name\":\"", "RB=\"", "ORD=All", LAST );

	api_2_0_info_serviceAvailableList();   

	// ���� �������� ������ �������
	if (strcmp(lr_eval_string("{AddSOC_count}"), "0") > 0) {
	
        //����� ������ � ������, ������� ����� ���������� ��� ���������� 
		elemCnt = atoi(lr_eval_string("{AddSOC_count}")); 
		i=1; SocDoesntExist=1;
		while (i<=elemCnt) {
			sprintf(SocForAdd, "{AddSOC_%d}", i);
			lr_save_string(lr_eval_string(SocForAdd),"SocToAdd");
			SocDoesntExist = api_1_0_info_conflict(lr_eval_string("{SocToAdd}"));
			if (SocDoesntExist ==0) { break;}
			i++;
		}

		//���� ��� ��� ���������� ���������� - ���������
		if (SocDoesntExist == 0) {
			

			web_reg_save_param_ex("ParamName=response", "LB={", "RB=}",	LAST);
			web_reg_save_param_ex("ParamName=fullresponse", "LB=", "RB=",	LAST);
			web_reg_save_param_ex("ParamName=reqid_serviceActivate", "LB=\"requestId\":", "RB=}", LAST);
			web_add_cookie("token={token}; domain={endpoint}" );
			web_add_header("Content-Type", "application/json; charset=utf-8");

			lr_start_transaction("api_1_request_serviceActivate_PUT");
            web_custom_request("api_1_request_serviceActivate_PUT", 
							   "URL=http://{endpoint}/api/1.0/request/serviceActivate?serviceName={SocToAdd}&ctn={login}", 
							   "Method=PUT", 
							   "Resource=0", 
							   "RecContentType=application/json", 
							   "Referer=", 
							   "Snapshot=t25.inf", 
							   "Mode=HTML", 
							   "Body=",
							   LAST);
			
			checkResult("api_1_request_serviceActivate_PUT",lr_eval_string("{response}"),lr_eval_string("{token}"),lr_eval_string("{login}"),lr_eval_string("{fullresponse}"));
			lr_end_transaction("api_1_request_serviceActivate_PUT", LR_AUTO);
		}
		// ���� SOC ��� ���������� �� ������
		else {
			lr_error_message("\nDate = %s "
							 "Transaction \"%s\" SOC for serviceActivate cannot find "
							 "Login = %s "
							 "Token = %s "
							 "Response was - %s",
							 lr_eval_string("{Date}"),
							 "api_1_request_serviceActivate_PUT",
							 lr_eval_string("{login}"),
							 lr_eval_string("{token}"),
							 lr_eval_string("{fullresponse}"));
		}
	}
	// ���� ������ ��������� ����� �� �������
	else
	{
					lr_error_message("\nDate = %s "
							 "Transaction \"%s\" serviceAvailableList for serviceActivate cannot find "
							 "Login = %s "
							 "Token = %s "
							 "Response was - %s",
							 lr_eval_string("{Date}"),
							 "api_1_request_serviceActivate_PUT",
							 lr_eval_string("{login}"),
							 lr_eval_string("{token}"),
							 lr_eval_string("{fullresponse}"));
	}

// 3/205 ������� ��� �������� ������
} else {

		// ����� ������ ��������� �����

	web_reg_save_param("socToAdd","LB=\"name\":\"", "RB=\"", LAST );
	web_reg_save_param("AddSOC", "LB=\"name\":\"", "RB=\"", "ORD=All", LAST );

	api_2_0_info_serviceAvailableList();   

	// ���� �������� ������ �������
	if (strcmp(lr_eval_string("{AddSOC_count}"), "0") > 0) {
	
        //����� ������ � ������, ������� ����� ���������� ��� ���������� 
		elemCnt = atoi(lr_eval_string("{AddSOC_count}")); 
		i=1; SocDoesntExist=1;
		while (i<=elemCnt) {
			sprintf(SocForAdd, "{AddSOC_%d}", i);
			lr_save_string(lr_eval_string(SocForAdd),"SocToAdd");
			SocDoesntExist = api_1_0_info_conflict(lr_eval_string("{SocToAdd}"));
			if (SocDoesntExist ==0) { break;}
			i++;
		}

		//���� ��� ��� ���������� ���������� - ���������
		if (SocDoesntExist == 0) {
			

			web_reg_save_param_ex("ParamName=response", "LB={", "RB=}",	LAST);
			web_reg_save_param_ex("ParamName=fullresponse", "LB=", "RB=",	LAST);
			web_reg_save_param_ex("ParamName=reqid_serviceActivate", "LB=\"requestId\":", "RB=}", LAST);
			web_add_cookie("token={token}; domain={endpoint}");
			web_add_header("Content-Type", "application/json; charset=utf-8");

			lr_start_transaction("api_request_serviceActivate_PUT");
            web_custom_request("api_1_request_serviceActivate_PUT", 
							   "URL=http://{endpoint}/api/request/serviceActivate?serviceName={SocToAdd}&ctn={login}", 
							   "Method=PUT", 
							   "Resource=0", 
							   "RecContentType=application/json", 
							   "Referer=", 
							   "Snapshot=t25.inf", 
							   "Mode=HTML", 
							   "Body=",
							   LAST);
			
			checkResult("api_request_serviceActivate_PUT",lr_eval_string("{response}"),lr_eval_string("{token}"),lr_eval_string("{login}"),lr_eval_string("{fullresponse}"));
			lr_end_transaction("api_request_serviceActivate_PUT", LR_AUTO);
		}
		// ���� SOC ��� ���������� �� ������
		else {
			lr_error_message("\nDate = %s "
							 "Transaction \"%s\" SOC for serviceActivate cannot find "
							 "Login = %s "
							 "Token = %s "
							 "Response was - %s",
							 lr_eval_string("{Date}"),
							 "api_request_serviceActivate_PUT",
							 lr_eval_string("{login}"),
							 lr_eval_string("{token}"),
							 lr_eval_string("{fullresponse}"));
		}
	}
	// ���� ������ ��������� ����� �� �������
	else
	{
					lr_error_message("\nDate = %s "
							 "Transaction \"%s\" serviceAvailableList for serviceActivate cannot find "
							 "Login = %s "
							 "Token = %s "
							 "Response was - %s",
							 lr_eval_string("{Date}"),
							 "api_request_serviceActivate_PUT",
							 lr_eval_string("{login}"),
							 lr_eval_string("{token}"),
							 lr_eval_string("{fullresponse}"));
	}

}
	return 0;
}
