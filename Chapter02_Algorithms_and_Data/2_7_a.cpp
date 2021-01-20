// write algorithms that compute N! given a non-negative integer N
// a) using iteration statements

#include <iostream>
#include <vector>

void outputSolution ( int n, int solution )
{
	std::cout << "the factorial of " << n << " is " << solution << "." << std::endl;
}	

int main()
{
	int n;
	std::cout << "Enter a positive integer to compute its factorial: ";
	std::cin >> n;
	std::cout << std::endl;

	int solution;
	if( n == 0 || n == 1 )
	{
		solution = 1;
	}
	else
	{
		solution = n;
		// fill up vecFactorial
		for ( int i{1}; i < n; ++i )
		{	
			solution *= i;
		}
	}		

	outputSolution(n, solution);
	return 0;
}
		
