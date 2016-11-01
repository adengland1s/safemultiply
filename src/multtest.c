#include<stdio.h>
#include<limits.h>
#include<stdint.h>


long long int safe_multiply(long int number1, long int number2)
{
	long long int value = 0;
	value = number1 * number2;
	return value;
	
}

int main()
{
	#ifdef MULTTEST1
	/* safe_multiply secure test #1 2 positive numbers*/
	
	test = safe_multiply(20, 30);
	if(test == 600)
	{
		printf("The first test passed. Value: %llu \n", test);
	}
	else
	{
		printf("The first test failed. \n");
	}
	#endif

	#ifdef MULTTEST2
	/* safe_multiply secure test #2 1 negative number 1 positive number*/
	
	test = safe_multiply(-20,30);
	if (test == -600)
	{
		printf("The second test passed. Value: %llu \n", test);
	}
	else
	{
		printf("The second test failed. \n");
	}
	#endif
	
	#ifdef MULTTEST3
	/* safe_multiply secure test #3 1 positive number 1 negative number*/

	test = safe_multiply(20,-30);
	if (test == -600)
	{
		printf("The third test passed. Value: %llu \n", test);
	}
	else
	{
		printf("The third test failed. \n");
	}
	#endif
	
	#ifdef MULTTEST4
	/* safe_multiply secure test #4 2 negative numbers*/

	test = safe_multiply(-20,-30);
	if (test == 600)
	{
		printf("The fourth test passed. Value: %llu \n", test);
	}
	else
	{
		printf("The fourth test failed. \n");
	}
	#endif
	
	#ifdef MULTTEST5
	/* safe_multiply secure test #5 between MIN and MAX*/
	
	int64_t test = (int64_t) number1 * (int64_t) number2;
	if(test >= INT_MIN $$ test <= INT_MAX)
	{
		printf("The fifth test passed. Value: %llu \n", test);
	}
	else
	{
		printf("The fifth test failed. \n");
	}

	#endif

	return 0;
	
}

