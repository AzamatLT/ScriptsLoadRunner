Readme()
{
	/* ������ ������ ��� ������ �� ���������� ��������� ��������, �������� �� ������� ���� ���� ����*/
/*
��������� �������  getCTNInfoList:
��������� ������ - USSAPIB2B_auth (/api/AuthService)
���� ����� �� �������, ��������� ���������� �������
���� ����� �������, �������� � ��� ������ - USSAPIB2B_getCTNInfoList (/api/SubscriberService)
��������� ��� ������ USSAPIB2B_getCTNInfoList ������� ���������, �� ������ "<statusDate>"
*/
/*
��������� �������  b2bapi_auth_unbilledcalls:
��������� ������ - USSAPIB2B_auth (/api/AuthService)
���� ����� �� �������, ��������� ���������� �������
���� ����� �������, �������� � ��� ������ ������������ ������� - USSAPIB2B_UNBILLEDCALLSLIST (/api/SubscriberService)
��������� ��� ������ ������������ ������� ������ �������� �����, �� ������ "<callDate>"
*/
/*
��������� �������  b2bapi_auth_getServicesList:
��������� ������ - USSAPIB2B_auth (/api/AuthService)
���� ����� �� �������, ��������� ���������� �������
���� ����� �������, �������� � ��� ������ ������������ ����� - USSAPIB2B_GETSERVICESLIST (/api/SubscriberService)
��������� ��� ������ ������ ������������ ����� ������ �������� �����, �� ������ "serviceId"
*/
/*
��������� �������  getUnbilledBalances:
��������� ������ - USSAPIB2B_auth (/api/AuthService)
���� ����� �� �������, ��������� ���������� �������
���� ����� �������, �������� � ��� ������ ����������� ����� �������� �� ������� ������ �������� (��������) - getUnbilledBalances (/api/SubscriberService)
��������� ��� ������ ����������� ����� �������� �� ������� ������ �������� (��������) ������� ���������, �� ������ "<rc>"
*/
/*
��������� �������  b2bapi_auth_getPaymentList:
��������� ������ - USSAPIB2B_auth (/api/AuthService)
���� ����� �� �������, ��������� ���������� �������
���� ����� �������, �������� � ��� ������ ������ �������� - USSAPIB2B_getPaymentList (/api/SubscriberService)
��������� ��� ������ ������ �������� ������ �������� �����, �� ������ "<ns0:getPaymentListResponse"
*/
/*
��������� �������  getRequestList:
��������� ������ - USSAPIB2B_auth (/api/AuthService)
���� ����� �� �������, ��������� ���������� �������
���� ����� �������, �������� � ��� ������ - USSAPIB2B_getRequestList (/api/SubscriberService)
��������� ��� ������ USSAPIB2B_getRequestList ������� ���������, �� ������ "<requestList>"
*/
/*
��������� �������  b2bapi_auth_addDelSOC:
��������� ������ - USSAPIB2B_auth (/api/AuthService)
���� ����� �� �������, ��������� ���������� �������
���� ����� �������, �������� � ��� ������ ��������� ������ ��������� ����� - USSAPIB2C_serviceAvailable (/api/1.0/info/serviceAvailableList)
	���� � ������ ������� �������� ������, ��������� ��� �����������, �������� ������ ����������� ������ - USSAPIB2B_ADDSOC (/api/SubscriberService)
	��������� ��� ������ �� ����������� ������� �����������, �� ������ "<return>"
��������� ����� � ���� � �������� ������ ��������� ������ ������������ ����� - USSAPIB2C_serviceList (/api/1.0/info/serviceList)
	���� � ������ ������� �������� ������, ��������� ��� ����������, �������� ������ ���������� ������ - USSAPIB2B_DELSOC (/api/SubscriberService)
	��������� ��� ������ �� ���������� ������� �����������, �� ������ "<return>"
*/
/*
��������� �������  getSIMList:
��������� ������ - USSAPIB2B_auth (/api/AuthService)
���� ����� �� �������, ��������� ���������� �������
���� ����� �������, �������� � ��� ������ ��������� ������ SIM-�����/IMSI ��� BAN - USSAPIB2B_getSIMList (/api/SubscriberService)
��������� ��� ������ ��������� ������ SIM-�����/IMSI ��� BAN ������� ���������, �� ������ "serialNumber"
*/
/*
��������� �������  b2bapi_auth_replaceSIM:
��������� ������ - USSAPIB2B_auth (/api/AuthService)
���� ����� �� �������, ��������� ���������� �������
���� ����� �������, �������� � ��� ������ ������ SIM - USSAPIB2B_replaceSIM (/api/SubscriberService)
��������� ��� ������ ������ SIM ������ �������� �����, �� ������ "<return>"
*/
/*
��������� �������  b2bapi_auth_suspendCTN:
��������� ������ - USSAPIB2B_auth (/api/AuthService)
���� ����� �� �������, ��������� ���������� �������
���� ����� �������, �������� � ��� ������ ���������� ������ - USSAPIB2B_SUSPENDCTN (/api/SubscriberService)
��������� ��� ������ ���������� ������ ������ �������� �����, �� ������ "<return>"
*/
	return 0;
}
