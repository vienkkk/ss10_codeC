#include <stdio.h>

int main() {
	int a[100];
	int n;
	printf("Nhap so phan tu ");
	scanf("%d",&n);
	for(int i=0; i<n; i++) {
		printf("Them phan tu %d ",i);
		scanf("%d",&a[i]);
	} 
	for(int i=0; i<n; i++) {
		for(int j=0;j<n-1;j++){
			if(a[j]>a[j+1]){
			int temp=a[j];
			a[j] = a[j+1]; 
			a[j+1]=temp	;
		}
		} 
	}
	for(int i=0; i<n; i++) {
		printf("%d ",a[i]);
	}

	return 0;
}
