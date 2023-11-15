#include<stdio.h>
int main(){
	int n;
	printf("Nhap so phan tu cua mang: ");
	scanf("%d",&n);
	float oldNumber[n];
	for(int i=0;i<n;i++){
		printf("number [%d] = ",i);
		scanf("%f",&oldNumber[i]);
	}
	int deleteIndex;
	printf("Nhap vi tri can xoa: ");
	scanf("%d",&deleteIndex);
	float newNumber[n-1];
	
	for(int i=0;i<n-1;i++){
		if(i<deleteIndex){
			newNumber[i]=oldNumber[i];
		}else if(i>=deleteIndex){
			newNumber[i]=oldNumber[i+1];
		}
		printf("newNumber[%d]=%.1f\n",i,newNumber[i]);
	}
}
