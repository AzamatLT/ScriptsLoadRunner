Action_check_dat()
{
    
	int i=3;
// C:\beework\automatedtesting\usss\_scripts\_dat\23_b2c_seb_invite_income_hash_260.dat
// extraCTN

// C:\beework\automatedtesting\usss\_scripts\_dat\23_b2c_seb_invite_list_hash_260.dat
// mainCTN


	//int i=1;
// C:\beework\automatedtesting\usss\_scripts\_dat\23_b2c_seb_invite_create_invite_accept_hash_20.dat
// create_mainCTN


	lr_save_string(lr_eval_string("{system_token}"),"token");
	//auth(); // закомменчен, т.к. в качестве авторизации используем hash + системный токен

	lr_start_transaction("TMP_api_b2c_invite");

	if (i > 2) {
		
        lr_save_string(lr_eval_string("{extraCTN}"),"login");
		lr_save_string(lr_eval_string("{extraCTN_hash}"),"hash");
 		api_1_0_invite_income();

        
		lr_save_string(lr_eval_string("{mainCTN}"),"login");
		lr_save_string(lr_eval_string("{mainCTN_hash}"),"hash");
		api_1_0_invite_list();

		}

		
		if (i <= 2) {

		lr_save_string(lr_eval_string("{create_mainCTN}"),"login");
		lr_save_string(lr_eval_string("{create_mainCTN_hash}"),"hash");
		lr_save_string(lr_eval_string("{create_extraCTN}"),"login_extra");
		api_1_0_invite_create();

		lr_save_string(lr_eval_string("{accept_mainCTN_hash}"),"hash");
		api_1_0_invite_accept();

		}


	lr_end_transaction("TMP_api_b2c_invite", LR_AUTO);

	return 0;
}
