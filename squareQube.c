#include <stdio.h>
#include <math.h>

int main()
{
	int n;
	int i;
	printf("Enter the value of n:");
	scanf("%d",&n);
	printf("\n Results from 1 to %d:\n",n);
	for(i = 1;i <= n; ++i)
{
if (i %2 ==0){

printf("Even: %d^3 = %.0f|n",i,pow(i,3));
}
else{
	printf("odd: %d^2 =%.0f\n",i,pow(i,2));

	}	
	printf("Press any key to continue..\n");
	getch();}
	return 0;}
