Action()
{
	char* block_name;
	char* metod1 = "api_1_sdb_info";
	char* metod2 = "api_2_sdb_info"; 

	block_name = lr_get_attrib_string("block");

	if(strcmp(block_name, metod1)==0) {
			api_1_sdb_info();
	} else 
		if(strcmp(block_name, metod2)==0) {
			api_2_sdb_info();
	}else {
		lr_error_message("api_sdb_info no block");
		lr_exit(LR_EXIT_ACTION_AND_CONTINUE, LR_AUTO);
	}
	return 0;
}

