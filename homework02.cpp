#include<stdio.h>
int main(){
	int row,col;
	int sum=0;
	printf("Nhap so dong va so cot cua mien: ");
	scanf("%d %d",&row,&col);
	int number[row][col];
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			printf("number[%d][%d]= ",i,j);
			scanf("%d",&number[i][j]);
		}
	}
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			if(number[i][j]%2==0){
				printf("%d\n",number[i][j]);
				sum+=number[i][j];
			}
		}
	}
	printf("Tong cac so chan la: %d\n ",sum);
}
