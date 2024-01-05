/* C Program to reverse a given integer number and check whether it is a palindrome or not. */
#include <stdio.h>
int main()
{
	int n, rev = 0, rem, num;
	printf("Enter a number: ");
	scanf("%d", &n);
	num = n;
	while (n != 0)
	{
		rem = n % 10;
		rev = rev * 10 + rem;
		n = n / 10;
	}
	printf("The reverse of %d is %d", num, rev);
	if (num == rev)
		printf("\n The given Number %d is Palindrome", num);
	else
		printf("\n The given Number %d is not Palindrome", num);
	return 0;
}
