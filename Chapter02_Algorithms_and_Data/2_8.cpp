// Show how to simulate a "while-do" loop by conditional statements and a recursive procedure

#include <iostream>
#include <vector>

void recursive(int numLoops, int count)
{
	if( count <= numLoops )
	{
		std::cout << "count: " << count << std::endl;
		recursive(numLoops, ++count);
	}
	else
	{
		return;
	}
}

int main()
{
	
	unsigned int numLoops {3};
	while( numLoops != 0 )
	{
		for( unsigned int i{1}; i <= numLoops; ++i)
		{
			std::cout << "count: " << i << std::endl;
		}
		numLoops = 0;
	}
	
	recursive(3, 1);

	return 0;
}
