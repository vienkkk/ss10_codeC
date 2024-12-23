#include <stdio.h>

int main() {
	int n;
	int a[100];
	printf("Nhap so phan tu ");
	scanf("%d",&n);
	for(int i=0; i<n; i++) {
		printf("Nhap phan tu %d ",i);
		scanf("%d",&a[i]);
	}
	for(int i=0; i<n; i++) {
		int min=i;
		for(int j=i+1; j<n; j++) {
			if(a[j]<a[min]) {
				min=j;
			}
		}
		int temp=a[min];
		a[min]=a[i];
		a[i]=temp;
	}

	for(int i=0; i<n; i++) {
		printf("%d ",a[i]);
	}

	return 0;
}
