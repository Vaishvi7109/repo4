#include<stdio.h>
int main(){
	printf("enter the number:");
	int num,digit,sum=0;
	scanf("%d",&num);
	while(num>0){
		digit=num%10;
		num=num/10;
		sum=sum+digit;
	}
	printf("%d",sum);
}
