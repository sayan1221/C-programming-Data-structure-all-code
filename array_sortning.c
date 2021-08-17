#include<stdio.h>

int main(){
    int a[100],n,i,s;
// enter element order by a->z or z->a
    printf("Enter the size:");
        scanf("%d",&n);
    printf("Enter Element:");
          for(i=1;i<=n;i++){
          scanf("%d",&a[i]);
        }    
        
   for(i=1;i<=n;i++){
   for(int j=i+1;j<=n;j++){
       if(a[i]>a[j]){
      int t=a[j];
       a[j]=a[i];    
       a[i]=t;
      }
    }
  }
   for(i=1;i<=n;i++){
    printf ("After (ascding) shorting :%d  \n",a[i]);
   }

for(i=1;i<=n;i++){
   for(int j=i+1;j<=n;j++){
       if(a[i]<a[j]){
      int t=a[j];
       a[j]=a[i];    
       a[i]=t;
      }
    }
  }
   for(i=1;i<=n;i++){
    printf ("After (descending) shorting :%d  \n",a[i]);
   }



 return 0;
}
    

    