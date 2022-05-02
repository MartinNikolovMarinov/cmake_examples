#include "mathz.h"
#include "some.h"

#include <stdio.h>
#include <string>

int main()
{
	mathz::vect3 v3;
	v3.x = 100;
	v3.y = 200;
	float a = v3.x;
	float b = v3.y;
	printf("%f + %f = %f\n", a, b, mathz::add(a, b));
	std::string word = some::word();
	printf("some word %s\n", word.c_str());
	return 0;
}
