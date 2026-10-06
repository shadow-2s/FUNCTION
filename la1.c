#include<stdio.h>
int add(int x,int y){
int sum;
sum=x+y;
return sum;
}
int subtraction(int x,int y){
int r;
r=x-y;
return r;
}
int multiplication(int x, int y){
int p;
p=x*y;
return p;
}

int main(){
	int x,y;
	printf("enter two number\n");
   	scanf("%d %d",&x,&y);
   	
    int res3 = subtraction(x,y);
    int res2 = add(x,y);
	int res1 = multiplication(x, y);
	printf("The product of two number is %d\n",res1);
	printf("The addition of two number is %d\n",res2);
	printf("The subtraction of two number is %d\n",res3);
	return 0;
}


