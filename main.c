#include<stdio.h>
#include "fct.h"

int main(){
	
	/*
	* programme principal
	*/
	int a = 3;
	int b = 6;

	int res = mult(a,b);

	printf("%d * %d = %d\n",a,b,res);

	return 0;
}