#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int * randomize(int,int,int);
int * randomize(int size,int start,int end)
{
	int *a;
	a = malloc(size * sizeof(int));
	srand((unsigned)time( NULL ) );
	for (int i = 0; i < size; ++i)
	{
		a[i] = rand() % (end-start+1)+start;
		printf("random %d-th: %d\n",i,a[i]);
	}
	return a;
}
int main()
{
	int *res;
	res = randomize(5,5,15);
	//int size = sizeof(*res)/sizeof(res[0]);
	//printf("sizeof res: %lu\n", sizeof(*res));
	for (int i = 0; i < 5; ++i)
	{
		printf("result %d-th: %d\n",i,res[i]);
	}
}