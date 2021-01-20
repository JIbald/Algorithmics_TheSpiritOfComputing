// write algorithms that compute N!, given a non-negative integer N
#include <iostream>

void outputSolution ( int n, int solution )
{
	std::cout << "the factorial of " << n << " is " << solution << "." << std::endl;
}	

int factorial ( int n )
{
	if ( n > 1 )
	{
 		return  n * factorial(n-1);
	}
	else
	{
		return 1;
	}
}

int main()
{
	int n;
	int solution {1};
	std::cout << "Enter non-negative integer to compute its factorial: " << std::endl;
	std::cin >> n;
	
	if( n < 0 )
	{
		std::cout << "Please do not enter negative integers." << std::endl;
		return 0;
	}
	else if( n == 0 )
	{
		solution = 1;
	}	
	else if( n == 1 )
	{
		solution = 1;
	}
	else
	{
		solution = factorial(n);
	}

	outputSolution( n, solution);
	return 0;
}
