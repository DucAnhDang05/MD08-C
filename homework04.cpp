#include<stdio.h>
int main(){
	int n;
	printf("Nhap vao so phan tu cua mang: ");
	scanf("%d",&n);
	float oldNumber[n];
	for(int i=0;i<n;i++){
		printf("number[%d]= ",i);
		scanf("%f",&oldNumber[i]);
	}
	int addIndex;
	float newNumber[n+1],addNumber;
	printf("Nhap so can them: ");
	scanf("%f",&addNumber);
	printf("Nhap vi tri can them: ");
	scanf("%d",&addIndex);
	for(int i=0;i<n+1;i++){
		if(i<addIndex){
			newNumber[i]=oldNumber[i];
		}else if(i==addIndex){
			newNumber[i]=addNumber;
		}else if(i>addIndex){
			newNumber[i]=oldNumber[i-1];
		}
	}
	for(int i=0;i<=n;i++){
		printf("Number[%d]=%.1f\n",i,newNumber[i]);
	}
}
