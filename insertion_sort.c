#include<stdio.h>

void printarray(int *a ,int n){
	int i;
	printf("After sorting : ");
	for(i=0;i<n;i++)
		printf("%d, ",a[i]);
}

void insertion(int *a, int n){
	int i,j,key;
	for(i=1;i<n;i++){
		key=a[i];
		j=i-1;
		while(j>=0 && a[j]>key){
			a[j+1]=a[j];
			j--;	
		}
		a[j+1]=key;
	}
}
	
int main(){
	int a[10],n,i;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	printf("Enter %d element ",n);
	for (i=0;i<n;i++)
		scanf("%d",&a[i]);
	insertion(a,n);
	printarray(a,n);
	
	return 0;
}


