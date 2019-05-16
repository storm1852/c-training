#include<stdio.h>
#include<ctype.h>

// convert string to double
double atof(char s[]);
double atof(char s[])
{
	double val,power;
	int i, sign;
	for (i = 0; isspace(s[i]); i++)
	{
		/* code */
	}
	sign = s[i] == '-' ? -1 : 1;
	if(s[i]=='+' || s[i] == '-')
		i++;
	for (val = 0.0; isdigit(s[i]); i++)
	{
		val = 10.0 * val + (s[i] - '0');
	}
	if(s[i] == '.')
		i++;
	for (power = 1.0; isdigit(s[i]); i++)
	{
		val =10.0 * val + (s[i] - '0');
		power *=10;		
	}
	printf("%d\t%f\t%f",i,val,power);
	return sign * val / power;
}

int main()
{
	double sum , atof(char[]);
	char line[100];
	//char p[5] ="125.5";
	sum =0 ;
	//printf("\t%g\n",sum+=atof(p) );

	// array with 4 elements
	double a[4] = {10.1, 5.2, 13.3, 0.5};
	double *p;
	int i;
	p = a;
	printf("Array values using pointer: \n");
	for (i = 0; i < 4; ++i)
	{
		printf("*(p+%d) : %f\n",i, *(p+i) );
	}

	printf("Array values using arr as address: \n");
	for (i = 0; i < 4; i++)
	{
		printf("*(a+%d) : %f\n",i,*(a+i) );
	}
	return 0;
}