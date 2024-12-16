#include<stdio.h>
int main(){
	printf("enter the number:");
	int num,digit,count=0;
	scanf("%d",&num);
	for(;num>0;){
		digit=num%10;
		num=num/10;
	count++;
	}
	printf("%d",count);
}
