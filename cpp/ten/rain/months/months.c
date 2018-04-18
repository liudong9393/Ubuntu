#include <stdio.h>

#define MONTHS	12

int main(void){
	const int days[MONTHS][2] = {{31},{28,29},{31},{30},{31},{30},{31},{31},{30},{31},{30},{31}};
	int i,j,year;

	scanf("%d",&year);
	for(i = 0;i < MONTHS;i++){
		if(i == 1 && (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)){
			j = 1;
		}else{
			j = 0;
		}
		printf("%2d %d\n",i+1,days[i][j]);
	}
	return 0;
}