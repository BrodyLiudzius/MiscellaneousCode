#include "test/test.hpp"
#include <iostream>

using namespace Kekoa::Test;


// MODULES TO TEST

// MATH
#include "math/int.hpp"
//#include "math/float.hpp"
//#include "math/vector.hpp"


int main () {
	Assert(Equal(1, 1));
	Assert(Equal(1, 3));
}