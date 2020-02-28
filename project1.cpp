#include<stdio.h>
int main(){
	int a=1;
	int b=2;
	printf("value of a %d \n",a);
	printf("value of b %d\n\n",b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("new value of a %d \n",a);
	printf("new value of b %d",b);
	return 0;
}
