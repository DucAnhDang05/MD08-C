#include<stdio.h>
int main(){
	int n;
	printf("Nhap so phan tu cua mang: ");
	scanf("%d",&n);
	float number[n];
	for(int i=0;i<sizeof(number)/sizeof(float);i++){
		printf("Nhap vao number[%d]= ",i);
		scanf("%f",&number[i]);
	}
	float sum=0;
	for(int i=0;i<sizeof(number)/sizeof(float);i++){
		sum+=number[i];
	}
	float avg=sum/(sizeof(number)/sizeof(float));
	printf("Trung binh cong la: %.2f\n",avg);
}
