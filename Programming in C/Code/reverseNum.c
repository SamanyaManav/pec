#include <stdio.h>
int main()
{
int num;
printf("Enter the number: ");
scanf("%d",&num);
printf("The reverse of %d is : ",num);
printf("%d",num%10);
num=num/10;
printf("%d",num%10);
num=num/10;
printf("%d",num%10);
num=num/10;
printf("%d",num%10);
scanf("%d",&num);
return(1);
}
