#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
	int a, b; 
	scanf("%d %d", &a, &b); 
	if (a >= 0 && b >= 0)
	{
		int x = a * b; ;
			
		printf("%d", x);
	}
	else
	{
		printf("Wrong Number! Pls Reenter");
	}

}