#include<stdio.h>

void add_new(int *a,int n);
void deletion(int *a,int n);

int main(){
int n,i,a[100], ch;

printf("Enter the size of array:");
scanf("%d",&n);
printf("Enter the %d element of array: ",n);
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    }
    
printf("press 1 for insertion \n");
printf("press 2 for deletion \n");
scanf("%d",&ch);

switch(ch){
case 1:{
add_new(&a,n);
break;
}

case 2:{
deletion(&a,n);
break;
}

default :{
printf ("Enter valid no");
break;
}
}

return 0;
}


void add_new(int *a,int n){
int i,new,p,k;

printf("Enter the new element :");
scanf("%d",&new);
printf("Enter the position of array and add last position (enter 0):");
scanf ("%d",&p);
if(p==0)
k=p;
else
p=p-1;
    if (k==0){
    for(i=n-1;i>=p;i--){
         if(i==n-1){
           a[i+1]=new;
           }
            a[i]=a[i];
         }
     }
        
    else {
    for(i=n-1;i>=p;i--){
         a[i+1]=a[i];
            if(i==p){
            a[i]=new;
            }
        }
    }
printf ("After insertion of array: ");
    for(i=0;i<=n;i++){
    printf("%d\n",a[i]);
    }
}



void deletion (int *a,int n){
int p,i;

printf("Enter the delete position:");
scanf ("%d",&p);
    for(i=p-1;i<n;i++){
    
        a[i]=a[i+1];
        
    }
printf ("After insertion of array: ");
    for(i=0;i<n-1;i++){
    printf("%d\n",a[i]);
    }

}


