#include <stdio.h>
#define SIZE 500000

int findK(int *partArr, int n, int len)
{
	int sumN = n * (n + 1) / 2; 
	int sumF = 0; 

	for (int i = 0; i < len; i++)
		sumF += partArr[i];
	return sumN - sumF;
}

int main(int argc, char **argv)
{
	int n, len, k;
	int partArr[SIZE];

	scanf("%d", &n);
	len = n - 1;
	for (int i = 0; i < len; i++)
		scanf("%d", &partArr[i]);
	k = findK(partArr, n, len);
	printf("K = %d\n", k);
}
