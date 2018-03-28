#include <stdio.h>


int main(){
	int guess = 1;
	printf("Pick an internet from 1 to 100.I will try to guess\n");

	printf("\n");
	printf("it.\nRespond with a y if my guess is right and with\n");
	printf("\nan n if it is wrong.\n");
	printf("Uh... is your number %d?\n",guess);
	while(getchar() != 'y'){/*获取用户响应并和ｙ比较*/
		printf("Well.then,is it %d\n",++guess);

	}

	printf("I knew I could do it\n");


	 
	return 0;
}





