#include <stdio.h>

int factorial(int n, int level)
{
int res;
printf("factorial %d\n", n);
//level++;
printf("level %d\n", level);
if(n == 1)
{
printf("factorial %d return\n", n);

	return 1;
}
else 
{
res = n*factorial(n-1, ++level);
printf("factorial %d return\n", n);

	return res;
}

}

int main(int argc, char* argv[])
{
int res;
int level = 0;
  res = factorial(atoi(argv[1]), ++level);
printf("res %d\n", res);
}
