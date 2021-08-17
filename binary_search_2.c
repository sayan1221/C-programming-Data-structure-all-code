#include<stdio.h>
int binary_search(int a[],int beg,int end,int sr){
	int mid;
	if(end>=beg){
		mid=(beg+end)/2;
		if(a[mid]==sr){
			return mid+1;
		}
		else if(a[mid]<sr){
			return binary_search(a,mid+1,end,sr);
		}
		else{
			return binary_search(a,beg,mid-1,sr);
		}
	}
	return -1;
}

int main(){
	int n,a[20],i;
		int sr,p=-1;
	printf("Enter size :");
	scanf("%d",&n);
	printf("Enter element :");
		for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	//printf("Display list : ");
	printf("Enter data what you want to search :");
	scanf("%d",&sr);
	p=binary_search(a,0,n-1,sr);
	if(p!=-1)
		printf("%d is found at position %d :",sr,p);
	else
		printf("%d is not found",sr);	
	return 0;
}


