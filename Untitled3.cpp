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
	for(int i=i;i<n;i++){
		int temp=a[i];
		int j=i-1;
		while(j>=0&&a[j]>temp){
			a[j+1]=a[j];
			j=j-1; 
		} 
		a[j+1]=temp;	 
	}
		for(int i=0; i<n; i++) {
		printf("%d ",a[i]);
	}

	return 0;
}
