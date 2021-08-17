#include<stdio.h>

int swap(x,y){
int t;
    t=x;
    x=y;
    y=t;
   return x,y; 
  }


int partition(int a[],int l,int h){
 int i=l,j=h;
 int pivot=a[l];
while(i<j){
do{
    i++;
    } while(a[i]<=pivot);
do{
    j--;
    }while(a[j]>pivot);
if(i<j){
swap(a[i],a[j]);
}
}
swap(a[l],a[j]);
return j;
}


void quick_sort(int a[],int l,int h){
int j;
if(l<h)
    j=partition(l,h);
    quick_sort(l,j-1);
    quick_sort(j+1,h);
}


int main(){
int l,h,a[20],n,i;
    printf("Enter size of array:");
    scanf("%d",&n);
    printf("Enter an array:");
        for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        }
    for(i=0;i<n;i++){    
    if(i==0)
    l=i;
    if(i<n)
    h=i;
    }
    quick_sort(a,l,h);
   return 0;
  }   

    
