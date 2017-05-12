#include <stdio.h>
#include <stdlib.h>

#include <editline/readline.h>
//#include <editline/history.h>

int main(int argc, char** argv) {

	/* Print Version and Exit Information */
	puts("Lispant Version 0.0.1");
	puts("Press Ctrl+c to Exit\n");

	/* In a never ending loop */
	while (1){
	
		/* Output our prompt and get input */
		char * input = readline("lispant> ");

		/* Add input to history */
		add_history(input);

		/* Echo input back to user */
		printf("No you're a %s\n", input);

		/* Free retrieved input from memory */
		free(input);
	}

	return 0;
}
