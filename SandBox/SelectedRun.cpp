#include <iostream>	
#include <cmath>

unsigned countBits(unsigned int number)
{	
	// log function in base 2
	// take only integer part
	return (int)log2(number)+1;
}

// Driven program	
int main()
{
	unsigned int num = 65;
    std::cout<<countBits(num)<<'\n';
	return 0;
}