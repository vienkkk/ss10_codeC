#include <stdio.h>

int main(){
	int a[100];
	int n,b;
	printf("Nhap so phan tu ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("Them phan tu %d ",i);
		scanf("%d",&a[i]); 
	} 
	printf("Phan tu can tim ");
	scanf("%d",&b); 
	for(int i=0;i<n;i++){
		if(b==a[i]){
			printf("vi tri %d",i)
			break; 
		} 
	} 
	
	return 0; 
} 
