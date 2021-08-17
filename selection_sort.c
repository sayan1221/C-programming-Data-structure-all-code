#include<stdio.h>
int main(){
	int i,j,n,a[100],t,min;
	printf("Enter size :");
		scanf("%d",&n);
		printf("Enter element :");
		for(i=1;i<=n;i++){
			scanf("%d",&a[i]);
		}
			for(i=1;i<n;i++){
					for(j=i+1;j<=n;j++){
						min=i;
						if(a[min]>a[j]){
							min=j;
						}
						t=a[i];
						a[i]=a[min];
						a[min]=t;
					}
			}
			printf("order list -----\n");
				for(i=1;i<=n;i++){
					printf("%d ",a[i]);
				}
	return 0;
}

