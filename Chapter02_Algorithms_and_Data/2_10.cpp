#include <iostream>
#include <vector>

bool check_uniqueness(std::vector <int> P)
{
	for( unsigned int i{0}; i < P.size(); ++i)
	{
		for( unsigned int j{++i}; j < P.size(); ++j)
		{
			if( P[i] == P[j] )
			{
				return false;
			}
		}
	}
	return true;	
}

void output_vec(std::vector <int> vec)
{
	for(unsigned int i {0}; i < vec.size(); ++i)
	{
		std::cout << vec[i] << " ";
	}
	std::cout << std::endl;
}

int main()
{	
	int N;
	std::vector <int> P {1,2,3,4,5,6,7,8,9};

	bool unique_vec = check_uniqueness(P);
	if(unique_vec == false)
	{
		std::cout << std::boolalpha << unique_vec << std::endl;
	}
	output_vec(P);

	return 0;
}
