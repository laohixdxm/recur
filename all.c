#include <stdio.h>

//doAllFactorials(int n, int* results, int level)
int factorials(int n, int* results, int level)
{
if(n > 1)
	results[level] = n*factorial(n-1, results, level+1)
	return results[level]
else 
	results[] = 1
	return results[]
}

int* allFactorials(int n){
	//int[] results = new int[ n == 0 ? 1 : n];
int size;
	size = n == 0? 1 : n;
	int *results = new int[size];
results[1] = 10; 
	//int results[size];
	doAllFactorials(n, results, 0);
	return results;
}
//int factorial()


int main()
{
int* results;
results = allFactorials(3);
results[0] = results[1];
printf("%d", results[4]);
//printf("%d", results[100000]);
}
