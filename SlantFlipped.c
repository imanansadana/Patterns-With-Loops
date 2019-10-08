#include<stdio.h>

void main(){
	int i,j,k;
	for(i=0;i<=10;i++)
	{ 
		for(j=i;j<=10;j++){
			printf(" ");
	}
			for(k=1;k<=i;k++){
			printf("*");
	}
		printf("\n");
	}
}
