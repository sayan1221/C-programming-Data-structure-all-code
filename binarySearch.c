#include<stdio.h>    
int binarySearch(int a[], int beg, int end, int item){  
    int mid;  
    if(end >= beg)   
    {     
        mid = (beg + end)/2; //{10,20,30,40,50,60,70,80,90,100} 
        if(a[mid] == item){  // n=10,beg=0,end=9,item=70,mid=4 //beg=5,end=9,mid=7,a[mid]=80
            return mid+1;  //beg=5,end=6,mid=5
        }  					//beg=6,end=6,mid=6
        else if(a[mid] < item){  
            return binarySearch(a,mid+1,end,item);  
        }  
        else{  
            return binarySearch(a,beg,mid-1,item);  
        }  
      
    }  
    return -1;   
}

void main ()  
{  
    int arr[100];// = {16, 19, 20, 23, 45, 56, 78, 90, 96, 100};  
    int n,i;
    printf("Enter size :-");
    scanf("%d",&n);
    printf("Enter value:");
    for(i=0;i<n;i++){
    	scanf("%d",&arr[i]);
	}
	printf("Display List:-\n");
	for(i=0;i<n;i++)
		printf("%d\t",arr[i]);
	int item, location=-1;   
    printf("\nEnter the item which you want to search :");  
    scanf("%d",&item);  
    location = binarySearch(arr, 0, n-1, item);  
    if(location != -1)   
    {  
        printf("Item found at location %d",location);  
    }  
    else  
    {  
        printf("Item not found");  
    }  
}   
  
