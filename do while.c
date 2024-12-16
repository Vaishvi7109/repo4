 #include<stdio.h>
int main(){
	int choice=2;
	for (;choice!=0;){
	
		printf("enter 1 for item 1\n");
		printf("enter 2 for item 2\n");
		printf("enter 3 for item 3\n");
		printf("enter 0 for exit\n");
		printf("enter your choice:");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("item 1 ordered succesfully\n");
				break;
			case 2:
				printf("item 2 ordered succesfully\n");
				break;
			case 3:
				printf("item 3 ordered succesfully\n");
				break;
			case 0:
				printf("exited succesfully\n");
				break;
			default:
				printf("invalid choice\n");
				
	}
	}
}
	//while (choice!=0);

