#include <stdio.h>
#include <stdlib.h>
void main1()
{
	int i;
	for(i=1;i<10;i++)
		printf("\nSquare of %d is %d",i,squarer(i));
		
}
	squarer(int x)
{
	int j;
	j = x*x;
	return(j);
}
