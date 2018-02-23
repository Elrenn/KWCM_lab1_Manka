#include <LaborkaConfig.h>
#include <iostream>

#ifdef USE_TRIGONOMETRY_DEGREE
	#include "trygonometria.h"
#else
	#include <cmath>
#endif


int main()
{
	double angle = 90;
	double angle_rad = angle*3.14/180.0;

	#ifdef USE_TRIGONOMETRY_DEGREE
		std::cout << degreemath::sin(angle) << std::endl;
		std::cout << degreemath::cos(angle) << std::endl;
		std::cout << degreemath::tan(angle) << std::endl;
		std::cout << degreemath::ctg(angle) << std::endl;
	#else	
		std::cout << sin(angle_rad) << std::endl;
		std::cout << cos(angle_rad) << std::endl;
		std::cout << tan(angle_rad) << std::endl;
		std::cout << 1/tan(angle_rad) << std::endl;
	#endif
	
	return 0;
}