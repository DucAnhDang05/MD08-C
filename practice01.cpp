#include<stdio.h>
int main(){
	int number[5];
	for(int i=0;i<5;i++){
		printf("number[%d]= ",i);
		scanf("%d",&number[i]);
	}
	printf("Gia tri cac phan tu trong mang: \n");
	for(int i=0;i<5;i++){
		printf("%d\t",number[i]);
	}	
}
