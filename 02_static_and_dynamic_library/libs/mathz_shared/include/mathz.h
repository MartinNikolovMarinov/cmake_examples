#pragma once

#include "mathz_exports.h"

namespace mathz {

struct MATHZ_LIBRARY_EXPORT vect3 {
	int x, y, z;

	vect3();
};

MATHZ_LIBRARY_EXPORT float add(float a, float b);

} // namespace mathz

