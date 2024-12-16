#include<stdio.h>
int main(){
	printf("enter the number:");
	int number;
	scanf("%d",&number);
	int i=1;
	while(i<=number){
		if(i%2==0){
			printf("%d\n",i);
		}
	}
	i++;
}
