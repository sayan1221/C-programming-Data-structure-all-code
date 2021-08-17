#include<stdio.h>
int main(){
	int ar[10],i,j,n,t;
	printf("Enter size :");
	scanf("%d",&n);
	printf("Enter %d element :",n);
	for(i=0;i<n;i++){
		scanf("%d",&ar[i]);
	}
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(ar[i]>ar[j]){
				t=ar[i];
				ar[i]=ar[j];
				ar[j]=t;
			}
		}
	}
	printf("After shorting list : \n");
	for(i=0;i<n;i++)
		printf("%d, ",ar[i]);
	return 0;
}


