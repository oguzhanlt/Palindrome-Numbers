#include <stdio.h>

int main(){
	/* determine whether given integer is palindrome or not 
	1001 palindrome
	1234 not
	*/
	
	int n;
	int reversed=0;
	int remainder;
	int number;
	printf("Enter an integer");
	scanf("%d", &n);
	number=n;
	while(n!=0){
		remainder = n%10; // this will give us the last digit of a number 1234 >> 4
		reversed = reversed*10 + remainder;
		n=n/10;
	}
	if(number==reversed){
		printf("%d is palindrome", number);
	}
	else{
		printf("%d is not palindrome", number);
	}
	
	return 0;
}
