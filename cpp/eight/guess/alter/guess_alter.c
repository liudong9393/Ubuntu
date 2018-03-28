/*更改后内容，优化guess.c程序*/
#include <stdio.h>

int main(void){
	int guess = 1;
	char response;
	printf("Pick an integer from 1 to 100,I will try to guess");
	printf("it,\nif it is wrong.\n");
	printf("Uh...is your number %d\n", guess);
	while((response = getchar()) != 'y'){
		if(response == 'n'){
			printf("Well,then,is it %d\n",++guess);
		}else{
			printf("Sorry,I understand only y or n");
		}
		while(getchar() != '\n'){
			continue;
		}
	}
	

	printf("I knew I could do it!\n");

	return 0;
}



