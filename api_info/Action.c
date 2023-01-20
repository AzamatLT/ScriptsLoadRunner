Action()
{
	int i_tarif = atoi(lr_eval_string("{tarif_Random100}")); 
	int j = atoi(lr_eval_string("{var_random100k}"));
	char* block_name;
	char* genAnalyticId = "GenAnalyticId";
	char* paymentsHistory_10 = "PaymentsHistory_1_0";
	char* paymentsHistory = "PaymentsHistory";
	char* targetedOffers = "TargetedOffers";
	char* upsellPricePlan = "UpsellPricePlan";
	char* api_2_0_pricePlanAvailableList = "PricePlanAvailableList_2_0";
	char* api_1_0_pricePlanAvailableList = "PricePlanAvailableList_1_0";
	char* autoPayment_10 = "AutoPayment_1_0";
	char* autoPayment = "AutoPayment";
	//char* pcl = "Pcl";
	char* unpaidInvoice = "UnpaidInvoice";
	char* tickets = "Tickets";
	char* nrtbcBalance = "NrtbcBalance";
	char* unbilledCalls = "UnbilledCalls";
	char* debtList = "DebtList";
	char* deposits = "Deposits";
	char* convergentRequestParams = "ConvergentRequestParams";
	char* loginConsolidation = "LoginConsolidation";
	char* portation = "Portation";
	char* fairUsage = "FairUsage";
	char* targetedOffersHistory = "TargetedOffersHistory";
	char* billPeriods = "BillPeriods";
	char* nlpInfo = "NlpInfo";
	char* onlineBillDetail = "OnlineBillDetail";
	char* onlineBillDetail_10 = "OnlineBillDetail_1_0";
	char* onlineBillDetail_20 = "OnlineBillDetail_2_0";
	char* convergentActivatonStatus = "ConvergentActivatonStatus";
	char* sebInvitation = "SebInvitation";
	char* inviteCreate = "InviteCreate";

	//Auth_B2C();
	
	block_name = lr_get_attrib_string("block");

	
	if(strcmp(block_name, genAnalyticId)==0) {
		GenAnalyticId();
	} else if(strcmp(block_name, paymentsHistory_10)==0) {
		PaymentsHistory(10);
	} else if(strcmp(block_name, paymentsHistory)==0) {
		PaymentsHistory(0);
	} else if(strcmp(block_name, targetedOffers)==0) {
		
		if ( i_tarif <= 40) {lr_save_string(lr_eval_string("{smart}"),"ctn"); } // 40% - smart
     else {	lr_save_string(lr_eval_string("{ctn_post_target}"),"ctn");}                      //60% i_tarif
		
		TargetedOffers();
	} else if(strcmp(block_name, upsellPricePlan)==0) {
		
		
     if ( i_tarif <= 40) {lr_save_string(lr_eval_string("{smart}"),"ctn"); } // 40% - smart
     else {	lr_save_string(lr_eval_string("{ctn_post_target}"),"ctn");}                      //60% i_tarif 



			api_2_0_PricePlanAvailableList();

			UpsellPricePlan();

	} else if(strcmp(block_name, api_2_0_pricePlanAvailableList)==0) {

	

	if ( i_tarif <= 40) {lr_save_string(lr_eval_string("{smart}"),"ctn"); } // 40% - smart
     else {	lr_save_string(lr_eval_string("{login_sub}"),"ctn");}                      //60% i_tarif

		api_2_0_PricePlanAvailableList();
		
	} else if(strcmp(block_name, api_1_0_pricePlanAvailableList)==0) {

		
		//lr_error_message("api_info use upsellPricePlan");
		//lr_exit(LR_EXIT_ACTION_AND_CONTINUE, LR_AUTO);
if ( i_tarif <= 40) {lr_save_string(lr_eval_string("{smart}"),"ctn"); } // 40% - smart
else {													//60% i_tarif
	lr_save_string(lr_eval_string("{login_sub}"),"ctn");}

		api_1_0_PricePlanAvailableList();

	} else if(strcmp(block_name, autoPayment_10)==0) {
		AutoPayment(10);
	} else if(strcmp(block_name, autoPayment)==0) {
		AutoPayment(0);
	/*} else if(strcmp(block_name, pcl)==0) {
		Pcl();
	}*/ 
	} else if(strcmp(block_name, unpaidInvoice)==0) {
		UnpaidInvoice();
	} else if(strcmp(block_name, tickets)==0) {
		Tickets();
	} else if(strcmp(block_name, nrtbcBalance)==0) {
		NrtbcBalance();
	} else if(strcmp(block_name, unbilledCalls)==0) {
		UnbilledCalls();
	} else if(strcmp(block_name, debtList)==0) {
		DebtList();
	} else if(strcmp(block_name, deposits)==0) {
		Deposits();
	} else if(strcmp(block_name, convergentRequestParams)==0) {
		//CreateConvergentRequest();
		ConvergentRequestParams();
	} else if(strcmp(block_name, loginConsolidation)==0) {
		LoginConsolidation();
	} else if(strcmp(block_name, portation)==0) {
		Portation();
	} else if(strcmp(block_name, fairUsage)==0) {
		FairUsage();
	} else if(strcmp(block_name, targetedOffersHistory)==0) {
		TargetedOffersHistory();
	} else if(strcmp(block_name, billPeriods)==0) {
		BillPeriods();
	} else if(strcmp(block_name, nlpInfo)==0) {
		NlpInfo();
	} else if(strcmp(block_name, onlineBillDetail)==0) {
		OnlineBillDetail(0);
	} else if(strcmp(block_name, onlineBillDetail_10)==0) {
		OnlineBillDetail(10);
	} else if(strcmp(block_name, onlineBillDetail_20)==0) {
		OnlineBillDetail(20);
	} else if(strcmp(block_name, convergentActivatonStatus)==0) {
		ConvergentActivatonStatus();
	} else if(strcmp(block_name, sebInvitation)==0) {
		InviteCreate();
		SebInvitation();
	} else if(strcmp(block_name, inviteCreate)==0) {
		InviteCreate();
	} else {
		lr_error_message("api_info no block");
		lr_exit(LR_EXIT_ACTION_AND_CONTINUE, LR_AUTO);
	}
	
	return 0;
}
