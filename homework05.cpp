#include<stdio.h>
#include<stdlib.h>
int main(){
	int n;
	printf("Nhap vao so phan tu cua mang: ");
	scanf("%d",&n);
	float oldNumber[n];
	for(int i=0;i<n;i++){
		printf("number[%d]= ",i);
		scanf("%f",&oldNumber[i]);
	}
	int updateIndex;
	float newNumber[n],updateValue;
	printf("Nhap vi tri can sua: ");
	scanf("%d",&updateIndex);
	if(updateIndex>=n){
		printf("Khong hop le");
		exit(0);
	}
	printf("Sua thanh: ");
	scanf("%f",&updateValue);
	for(int i=0;i<n;i++){
		if(i==updateIndex){
				newNumber[i]=updateValue;
		}else{
			newNumber[i]=oldNumber[i];
		}
		printf("number[%d]=%.1f\n",i,newNumber[i]);
	}
	
}
