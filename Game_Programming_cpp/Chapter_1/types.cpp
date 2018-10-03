#include <iostream>
#include <limits.h>
int main()
{
	signed short int int_MIN = std::numeric_limits<short>::min();												// short integers used for small scale arithemtic numbers.
	signed short int int_MAX = std::numeric_limits<short>::max();												// Useful to help reduce memory used, if high scale arithmetic isn't necesarry.  

	unsigned short int U_S_int_MIN = std::numeric_limits<unsigned short>::min();								// Same as above, except no negative values can be used. 
	unsigned short int U_S_int_MAX = std::numeric_limits<unsigned short>::max();								// rather than having negative, it scales to a higher postive by double. 

	signed int normal_int_MIN = std::numeric_limits<int>::min();												// Normal integer scaled from lowest negative value.
	signed int normal_int_MAX = std::numeric_limits<int>::max();												// To highest positive value. 

	unsigned int u_normal_int_MIN = std::numeric_limits<unsigned int>::min();									// Unsigned integers start from 0
	unsigned int u_normal_int_MAX = std::numeric_limits<unsigned int>::max();									// scale to (int(max) * 2) + 1. 

	signed long int s_long_int_MIN = std::numeric_limits<long>::min();											// TIP: COMPILER DEPENDENT! LONG INT will always be the same size as an INT
	signed long int s_long_int_MAX = std::numeric_limits<long>::max();											// but, it can be bigger depending on machine and compiler architecture. In my case, it's the same. 

	unsigned long int u_long_int_MIN = std::numeric_limits<unsigned long>::min();								// ...
	unsigned long int u_long_int_MAX = std::numeric_limits<unsigned long>::max();								// Maximum long size, can differ depending on above statement. 

	float normal_float_MIN = std::numeric_limits<float>::lowest();													// Max and minimum size of floating point numbers. 
	float normal_float_MAX = std::numeric_limits<float>::max();													// ...

	double normal_double_MIN = std::numeric_limits<double>::lowest();												// Max and min double sizes. 
	double normal_double_MAX = std::numeric_limits<double>::max();												// ... 

	long double l_double_MIN = std::numeric_limits<long double>::lowest();											// ...
	long double l_double_MAX = std::numeric_limits<long double>::max();											// ...

	signed int normal_c_MIN = std::numeric_limits<char>::lowest();													// Gets the ASCII table total value, this ranges from -127 to 127. 
	signed int normal_c_MAX = std::numeric_limits<char>::max();													// Can change signed int to char to see actual characters. 



	std::cout << "Signed Short Int Minimum: " << int_MIN << std::endl;
	std::cout << "Signed Short Int Maximum: " << int_MAX << std::endl << std::endl;

	std::cout << "Unsigned Short Int Minimum: " << U_S_int_MIN << std::endl;
	std::cout << "Unsigned Short Int Maximum: " << U_S_int_MAX << std::endl << std::endl;

	std::cout << "Signed INT minimum: " << normal_int_MIN << std::endl;
	std::cout << "Signed INT maximum: " << normal_int_MAX << std::endl << std::endl;

	std::cout << "Unsigned INT minimum: " << u_normal_int_MIN << std::endl;
	std::cout << "Unsigned INT maximum: " << u_normal_int_MAX << std::endl << std::endl;

	std::cout << "Signed LONG INT minimum: " << s_long_int_MIN << std::endl;
	std::cout << "Signed LONG INT maximum: " << s_long_int_MAX << std::endl << std::endl;

	std::cout << "Unsigned LONG INT minimum: " << u_long_int_MIN << std::endl;
	std::cout << "Unsigned LONG INT maximum: " << u_long_int_MAX << std::endl << std::endl;

	std::cout << "FLOAT MINIMUM: " << normal_float_MIN << std::endl;
	std::cout << "FLOAT MAXIMUM: " << normal_float_MAX << std::endl << std::endl;

	std::cout << "DOUBLE MINIMUM: " << normal_double_MIN << std::endl;
	std::cout << "DOUBLE MAXIMUM: " << normal_double_MAX << std::endl << std::endl;

	std::cout << "LONG DOUBLE MINIMUM: " << l_double_MIN << std::endl;
	std::cout << "LONG DOUBLE MAXIMUM: " << l_double_MAX << std::endl << std::endl;

	std::cout << "CHAR MIN: " << normal_c_MIN << std::endl;
	std::cout << "CHAR MAX: " << normal_c_MAX << std::endl << std::endl;


	getchar();
	return 0;
}