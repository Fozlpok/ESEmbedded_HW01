#include <stdio.h>
#include <stdlib.h>

int plus(int a, int b) { return a + b; }
int minus(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }
int divided(int a, int b) { return a / b; }

int (*a[4]) (int x, int y);

int main()
{
	int result;//set variable
  	int i, j, tep;
	a[0] = plus; 
  	a[1] = minus; 
  	a[2] = multiply;
  	a[3] = divided;
	result = (*a[tep]) (i, j);
	
	printf("Enter two numbers: ");
  	scanf("%d %d", &i, &j);
  
  	printf("0: plus, 1: minus, 2: multiply, 3: divided\n");
  	do {
    	printf("enter number of operation: ");
    	scanf("%d", &tep);
  	} while(tep<0 || tep>3);

  	result = (*a[tep]) (i, j);
  	printf("%d", result);

 	return 0;
}
