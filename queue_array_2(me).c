#include<stdio.h>
int f=-1,r=-1;
int qu[10];

void insert(){
int n;
printf("Enter data:");
scanf("%d",&n);
if(f==-1 && r==-1){
        f=0;
        r=0;
    }
else{
      r=r+1;
    }
      qu[r]=n;
printf("%d is insert \n",qu[r]);
}


void delete(){
int x;
if(f==-1 || f>r){
    printf("Empty queue");
    return;
 }
else{
    x=qu[f];
    if(f==r){
        r=-1;
        f=-1;
    }
    else{
        f=f+1;
        }
    }
printf("%d is delete \n",x);       
}  

    
void display(){
int x;
if(r==-1){
    printf("Empty queue");
    }
else{
    for(x=f;x<=r;x++){
        printf("%d\n",qu[x]);
        }
    }
}


void main(){
int ch=0;

while(ch!=4){
	printf("Enter your choice :\n");
    printf(" 1 - Insert \t");
    printf(" 2 - Delete \t");
    printf(" 3 - Display \t");
    printf(" 4 - Exit \t ::");
    scanf("%d",&ch);
switch (ch){
case 1:{
    insert();
    break;
    }
case 2:{
    delete();
    break;
    }
case 3:{
    display();
    break;
    }
case 4:{
    printf("BYE BYE");
    break;
    }
default:{
    printf("Enter valid input");
    }    
  }   
}
}
