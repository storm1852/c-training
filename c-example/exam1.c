#include<stdio.h>
#include<stdlib.h>
int a =10;
int *b = &a;
int main()
{
printf("start \n C professional\n");
printf("%d - %d\n",b,sizeof(b));
b = malloc(3 * sizeof(char));
printf("%d - %d\n",b,sizeof(b));
b = malloc(3 * sizeof(char));
printf("%d - %d\n",b,sizeof(b));
char *c = malloc(3 * sizeof(char));
char* a;
a = malloc(200*sizeof(char));
return 0;
}