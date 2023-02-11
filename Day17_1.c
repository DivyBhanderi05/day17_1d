#include<stdio.h>

main(){
	
	int i , n ;
	
	
	printf("Enter Value : ");
	scanf("%d",&n);
	
	int age[n];
	
	for(i = 0 ; i<n ; i++){
		printf("value of [%d] : ",i);
		scanf("%d",&age[i]);
	}
	for(i=0 ; i<n ; i++){
		printf("answer :- %d\n",age[i]);
	}
}
