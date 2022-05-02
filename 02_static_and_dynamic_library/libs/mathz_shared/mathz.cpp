#include "mathz.h"

namespace mathz {

vect3::vect3() : x(0), y(0), z(0) {}

// Export a single global function
float add(float a, float b) {
	return a + b;
}

}
