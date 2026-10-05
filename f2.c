#include<stdio.h>
int main(){
factorial();
}
	void factorial(){
		int i, x,y=1;
	printf("enter  number to find its factorial");
 scanf("%d",&x);
 for(i=x;i>0;i--){
 	y*=i;
 }
 printf("the result is %d",y);
	}
	
