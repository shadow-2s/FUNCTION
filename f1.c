#include<stdio.h>
void addition(){
int x,y,sum;
printf("enter two number\n");
scanf("%d %d",&x,&y);
sum=x+y;
printf("The sum of two number is %d\n",sum);
}
void subtraction(){
int x,y,r;
printf("enter two number\n");
scanf("%d %d",&x,&y);
r=x-y;
printf("The of subtraction two number is %d\n",r);
}
void multiplication(){
int x,y,p;
printf("enter two number\n");
scanf("%d %d",&x,&y);
p=x*y;
printf("The product of two number is %d\n",p);
}

int main(){
addition();
subtraction();
multiplication();
}


