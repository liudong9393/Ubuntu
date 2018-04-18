#include <stdio.h>

//#define MONTHS 12


int main(void){
	const int day[] = {31,28,31,30,31,30,31,31,30,31,30,31};
	int index;

	for(index = 0; index < sizeof day / sizeof day[0];index++){
		printf("Month %d has %2d.\n",index +1,day[index]);
	}
	return 0;
}