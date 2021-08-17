#include<stdio.h>
int main(){
	int n,a[10],i,j,t,se,po=0,x=0;
	printf("Enter the size of array :");
	scanf("%d",&n);
	printf("Enter %d element :",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("ENter the search element :");
	scanf("%d",&se);
	for(i=0;i<n;i++){
		if(a[i]==se){
			po=i;
			x=1;
			break;
		}
	}
	if(x==1){
		printf("\n %d is present at the position %d",se,po+1);
	}
	else
		printf("%d is not present in this array ",se);
		
	return 0;
}
