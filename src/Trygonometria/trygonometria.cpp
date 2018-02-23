#include "trygonometria.h"
#include <cmath>
double degreemath::sin(double degree) {
	//zamiana stopni na radiany: pi radianów = 180 stopni
	double radian=degree*3.14/180;
	return std::sin(radian); //funkcja biblioteczna z piku <cmath>
}

double degreemath::cos(double degree) {
	//zamiana stopni na radiany: pi radianów = 180 stopni
	double radian=degree*3.14/180;
	return std::cos(radian); //funkcja biblioteczna z piku <cmath>
}

double degreemath::tan(double degree) {
	//zamiana stopni na radiany: pi radianów = 180 stopni
	double radian=degree*3.14/180;
	return std::tan(radian); //funkcja biblioteczna z piku <cmath>
}

double degreemath::ctan(double degree) {
	//zamiana stopni na radiany: pi radianów = 180 stopni
	double radian=degree*3.14/180;
	return 1/std::tan(radian); //funkcja biblioteczna z piku <cmath>
}
//i tak dalej