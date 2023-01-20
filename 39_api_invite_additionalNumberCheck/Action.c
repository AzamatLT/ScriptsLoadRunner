Action()
{
 //   int i = atoi(lr_eval_string("{var_Random10000}"));

	double time_elapsed;
	merc_timer_handle_t timer;

	timer = lr_start_timer();

	api_invite_additionalNumberCheck();

	lr_free_parameter("login");
	lr_free_parameter("token");
	lr_free_parameter("hash");
	lr_free_parameter("login_extra");
	lr_free_parameter("response");
	lr_free_parameter("fullresponse");


	 time_elapsed = lr_end_timer(timer);

	return 0;
}
