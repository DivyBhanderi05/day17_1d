#include<stdio.h>

main(){
	int a[] = {10,20,30,40,50,60,70,80,90};
	int length;
	
	length = sizeof(a)/sizeof(int);
	
	printf("%d",length);
	
}
