#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>
#include "LaborkaConfig.h"
#ifdef USE_TRIGONOMETRY_DEGREE

#include <trygonometria.h>
#else
	#include<cmath>
#endif

int main() 
{
	double degree=45;
	double s;
	#ifdef USE_TRIGONOMETRY_DEGREE
		s = degreemath::sin(degree);
	#else
		s = sin(M_PI/4.0);
	#endif
	std::cout << "sin(45) = "<< s << std::endl;

	#ifdef USE_TRIGONOMETRY_DEGREE
		s=degreemath::cos(degree);
	#else
		s = cos(M_PI/4.0);
	#endif
	std::cout << "cos(45) = "<< s << std::endl;
	
	#ifdef USE_TRIGONOMETRY_DEGREE
		s=degreemath::tan(degree);
	#else
		s = tan(M_PI/4.0);
	#endif
	std::cout << "tan(45) = "<< s << std::endl;
	
	#ifdef USE_TRIGONOMETRY_DEGREE
		s=degreemath::ctan(degree);
	#else
		s = 1/tan(M_PI/4.0);
	#endif
	std::cout << "ctg(45) = "<< s << std::endl;

	system("pause");
		
	return 0; 
}