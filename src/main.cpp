#include <iostream>
#include <trygonometria.h>
int main() 
{
	double s=degreemath::sin(45);
	std::cout << "sin(45) = "<< s << std::endl;

	s=degreemath::cos(45);
	std::cout << "cos(45) = "<< s << std::endl;
	
	s=degreemath::tan(45);
	std::cout << "tan(45) = "<< s << std::endl;
	
	s=degreemath::ctan(45);
	std::cout << "ctg(45) = "<< s << std::endl;

	system("pause");
		
	return 0; 
}