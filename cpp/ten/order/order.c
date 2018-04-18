#include <stdio.h>

int datas[2] = {100,200};
int moredatas[2] = {300,400};

int main(void){
	int *p1,*p2,*p3;
	p1 = p2 = datas;
	p3 = moredatas;

	printf("*p1 = %d,*p2 = %d,*p3 = %d\n",*p1,*p2,*p3);
	printf("*p1++ = %d,*++p2 = %d,(*p3)++ = %d\n",*p1++,*++p2,(*p3)++);
	printf("*p1 = %d,*p2 = %d,*p3 = %d\n",*p1,*p2,*p3);
	return 0;
}