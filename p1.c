#include<stdio.h>

int fact(int a){


   if (a<=1){
   	return 1;
   }
   else{
   	return a*fact(a-1);
   }
}
int main(){
	
	int y;
	
	printf("enter value:- ");
	scanf("%d",&y);
	
	printf("%d",fact(y));
	
	return 0;
}
	
	
	

