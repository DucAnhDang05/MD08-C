#include<stdio.h>
int main(){
	int row,col;
	printf("Nhap vao so dong cua mang: ");
	scanf("%d",&row);
	printf("Nhap vao so cot cua mang: ");
	scanf("%d",&col);
	int number[row][col];
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			printf("number[%d][%d]=",i,j);
			scanf("%d",&number[i][j]);
		}
	}
	printf("Gia tri cac phan tu la: \n");
	for (int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			printf("%d\n",number[i][j]);
		}
	}
}
