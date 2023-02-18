#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints last digit of number
 * Return: 0 Success
 */
int main(void)
{
int n;
int nm;
srand(time(0));
n = rand() - RAND_MAX / 2;
nm = n % 10;
printf("Last digit of %d is %d ", n, nm);
if (nm > 5)
{
	printf("and is greater than 5\n");
}
else if (nm == 0)
{
	printf("and is 0\n");
}
else if ((nm < 6) != 0)
{
	printf("and is less than 6 and not 0\n");
}
return (0);
}
