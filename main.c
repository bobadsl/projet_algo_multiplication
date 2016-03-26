#include<stdio.h>
#include "fct.h"

int main(){
	
	/*
	* programme principal
	*/
	int a;

	printf("Donnez une valeur pour a ? ");
	scanf("%d",&a);

	int b;
	printf("Donnez une valeur pour b ? ");
	scanf("%d",&b);

	int res = mult(a,b);

	printf("%d * %d = %d\n",a,b,res);

	return 0;
}