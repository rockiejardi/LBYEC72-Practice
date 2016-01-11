#include <stdio.h>
#include <stdlib.h>

#define PI 3.14159

int main()
{
	float a;
	float r;
	printf("Enter Radius:");
	scanf("%f", &r);
	
	a= r*r*PI;
	printf("\n Area: %f", a);
	return 0;
	
}
