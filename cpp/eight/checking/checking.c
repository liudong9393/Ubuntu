#include <stdio.h>
#include <stdbool.h>
//确认输入了一个整数
int get_int(void);
//确认范围的上下界是否有效
bool bad_limits(int begin, int end, int low, int high   );
//计算从a到b之间的整数平方和
double sum_squares(int a,int b);

int main(void){
	const int MIN = -1000;//范围上界限制
	const int MAX = 1000;//范围下界限制
	int start;//范围上界
	int stop;//范围下界
	double answer;
	
	printf("This program computes the sum of the squares of integers in a range./n"
		"The lower bound should not be less than -1000 and\n"
		"the upper bound should not be more than +1000.\n"
		"Enter the limits(enter 0 for both limits to quit):\n"
		"lower limit:");
	start = get_int();
	printf("upper limit:");
	stop = get_int();
	while(start != 0 || stop != 0){
		if(bad_limits(start, stop,MIN,MAX)){
			printf("Please try again.\n");
		}	
		else{
			answer = sum_squares(start,stop);
			printf("The sum of the squares of the integers ");		
			printf("from %d to %d is %g \n",start, stop ,answer);
		}
		printf("Enter the limits (enter 0 for both limits to quit):\n");
		printf("lower limit:");
		start = get_int();
		printf("upper limit:");
		stop = get_int();
	}



	
	return 0;
}
int get_int(void){
	int input;
	char ch;
	
	while(scanf("%d", &input) != 1){
		while((ch = getchar()) != '\n'){
			putchar(ch);
		}
		printf("is not an integer.\n"
			"Please enter an integer value,such as 25,-178,or3:");
	}

	return input;
}
double sum_squares(int a ,int b){
	double total = 0;
	int i;

	for(i = a;i <= b;i++){
		total +=i*i;
	}
	return total;
}
bool bad_limits(int begin ,int end, int low, int high ){
	bool not_good = false;
	if(begin > end){
		printf("%d isn`t smaller than %d.\n",begin, end);	
		not_good = true;
	}
	if(begin < low || end < low){
		printf("%d isn`t smaller than %d.\n",begin, end);	
		not_good = true;
	}
	if(begin > high ||end >high){
		printf("%d isn`t smaller than %d.\n",begin, end);	
		not_good = true;
	}
	return not_good;
}






