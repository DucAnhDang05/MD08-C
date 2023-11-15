#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,sum;
	printf("Nhap so phan tu cua mang: ");
	scanf("%d",&n);
	float number[n];
	for(int i=0;i<n;i++){
		printf("number[%d]= ",i);
		scanf("%f",&number[i]);
	}
	do{
	int choice;
	printf("1. Tim so\n");
	printf("2. Thoat\n");
	printf("Lua chon cua ban la: ");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			int findNumber;
			printf("Nhap so can tim: ");
			scanf("%d",&findNumber);
			for(int i=0;i<n;i++){
				if(number[i]==findNumber){
					printf("So can tim o vi tri so %d cua mang \n",i);
					sum+=findNumber;
					printf("Tong cac so da tim la: %d\n",sum);
				}
			}
			break;
		case 2:
			exit(0);
	}
}while("Chon 1 hoac 2");
}
