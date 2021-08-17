#include<stdio.h>

int binary(int *a,int n,int se){
int f,l,i,mid,x=0;
 f=1;
 l=n;
   for(i=1;i<n;i++){
       mid=(f+l)/2;
       if(a[mid]==se){
       printf("%d is found at position %d",se,mid);
       break;
       }
            else if(a[mid]<se){
            f=mid+1;
            }
            else if(a[mid]>se){
                l=mid-1;
                }
    }
        if(f>l){
        printf("%d is not found",se);
        }
  return 0;
}  

int main(){
    int a[100],n,i,s;
// enter element order by a->z or z->a
    printf("Enter the size:");
        scanf("%d",&n);
    printf("Enter Element:");
        for(i=1;i<=n;i++){
        scanf("%d",&a[i]);
        }            
    printf("Enter search element");
        scanf("%d",&s);
    binary(&a,n,s);
    return 0;
    }
    

    
