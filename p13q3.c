#include<stdio.h>

int ways(int n);

int main(){
	int n;
	printf("Enter the ways: ");
	scanf("%d", &n);
	if(n<0){
		printf("Can't enter negative numbers\n");
		return 0;
	}
	printf("Ways are: %d ", ways(n));	
}

int ways(int n){
	if(n==0){
		return 1;
	}
	if(n==1){
		return 1;
	}
	if(n==2){
		return 2;
	}
	return ways(n-1)+ways(n-2)+ways(n-3);
}
