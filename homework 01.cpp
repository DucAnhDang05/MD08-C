#include<stdio.h>
int main(){
	int n;
	printf("Nhap so phan tu cua mang: ");
	scanf("%d",&n);
	float number[n];
	for(int i=0;i<n;i++){
		printf("number [%d] = ",i);
		scanf("%f",&number[i]);
	}
	float max=number[1],min=number[2];
	for (int i=0;i<n;i++){
		max=(max<number[i])?number[i]:max;
		min=(min>number[i])?number[i]:min;
	}
	printf("So lon nhat cua mang la: %.2f\n",max);
	printf("So nho nhat cua mang la: %.2f\n",min);
}
