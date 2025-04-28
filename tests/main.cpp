#include "test/test.hpp"
#include <iostream>

using namespace Kekoa::Test;

int main () {
	Assert(Equal(1, 1));
	Assert(Equal(1, 3));
}