#include<stdio.h>

int sort_check(int a[],int b, int x){
	int i;
	for (i=b;i<x;i++){
    	if (a[i]<a[i+1])
    		continue;
    	else{
    		return 0;
    		break;
		}
	}
	return 1;
}

// marge sort start :-
void mergeSort(int a[], int beg, int end){  
    int mid;  
    if(beg<end){  
        mid = (beg+end)/2;  
        mergeSort(a,beg,mid);  
        mergeSort(a,mid+1,end);  
        merge(a,beg,mid,end);  
    }  
}  
void merge(int a[], int beg, int mid, int end){  
    int i=beg,j=mid+1,k,index = beg;  
    int temp[10];  
    while(i<=mid && j<=end){  
        if(a[i]<a[j]){  
            temp[index] = a[i];  
            i = i+1;  
        }  
        else{  
            temp[index] = a[j];  
            j = j+1;   
        }  
        index++;  
    }  
    if(i>mid){  
        while(j<=end){  
            temp[index] = a[j];  
            index++;  
            j++;  
        }  
    }  
    else{  
        while(i<=mid){  
            temp[index] = a[i];  
            index++;  
            i++;  
        }  
    }  
    k = beg;  
    while(k<index){  
        a[k]=temp[k];  
        k++;  
    }  
}  

// marge sort end :-

// quick sort start :-

int partition(int a[], int beg, int end){  
    int left, right, temp, loc, flag;     
    loc = left = beg;  
    right = end;  
    flag = 0;  
    while(flag != 1){  
        while((a[loc] <= a[right]) && (loc!=right))  
        right--;  
        if(loc==right)  
        flag =1;  
        else if(a[loc]>a[right]){  
            temp = a[loc];  
            a[loc] = a[right];  
            a[right] = temp;  
            loc = right;  
        }  
        if(flag!=1){  
            while((a[loc] >= a[left]) && (loc!=left))  
            left++;  
            if(loc==left)  
            flag =1;  
            else if(a[loc] <a[left]){  
                temp = a[loc];  
                a[loc] = a[left];  
                a[left] = temp;  
                loc = left;  
            }  
        }  
    }  
    return loc;  
}  

void quickSort(int a[], int beg, int end){  
    int loc;  
    if(beg<end){  
        loc = partition(a, beg, end);  
        quickSort(a, beg, loc-1);  
        quickSort(a, loc+1, end);  
    }  
}  

// quick sort end :-



void main (){  
    int a[10],a1[10],a2[10];
    int i,x,z,y,f,n;
    printf("Enter size of array :");
    scanf("%d",&n);
    x=n/2;
    printf("Enter the element of array :");
    for (i=1;i<=n;i++)
    	scanf("%d",&a[i]);
    	
	for (i=1;i<=x;i++)
    	a1[i]=a[i];
    z=sort_check(a1,1,x);
    printf("z= %d \n",z);
    
    for (i=x+1;i<=n;i++)
    	a2[i]=a[i];
    y=sort_check(a2,x+1,n);
    printf("y= %d ",y);
    
    if(z==1 && y==1){
    	f=sort_check(a,1,n);
		if(f==1)
			printf("This is sorted array : ");
		for (i=1;i<=n;i++)
    		printf(" %d\t",a[i]);
	}	/*
	else if (z==1 && y==0){
		quickSort(a2,x+1,n);  
		printf("Using quick sort :\n");
    	printf("\n The sorted array is: \n");  
    	for (i=1;i<=x;i++)
    		printf(" %d\t", a1[i]);
		for(i=x+1;i<n;i++)  
    		printf(" %d\t", a2[i]);
	}
	else if (z==0 && y==1){
		quickSort(a1,1,x);  
		printf("Using quick sort :\n");
    	printf("\n The sorted array is: \n");  
    	for(i=1;i<x;i++)  
    		printf(" %d\t", a1[i]);
    	for (i=1;i<=x;i++)
    		printf(" %d\t", a2[i]);
	}
	else {
		mergeSort(a,1,n);  
		printf("Using marge sort :");
    	printf("printing the sorted elements");  
    	for(i=1;i<=n;i++)
        	printf("\n%d\n",a[i]);
	}	*/
	return 0;
}



