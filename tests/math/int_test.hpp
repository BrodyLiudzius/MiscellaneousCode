#ifndef KEKOA_TEST_INT_HPP_INCLUDED
#define KEKOA_TEST_INT_HPP_INCLUDED


#include <iostream>

#include "kekoa/test/test.hpp"
#include "kekoa/math/int.hpp"

using namespace Kekoa::Test;


static void Test_Int_Declare () {

	Heading("Declaring Integers");

	Kekoa::i8 _i8 = 1;
	Kekoa::i16 _i16 = 2;
	Kekoa::i32 _i32 = 3;
	Kekoa::i64 _i64 = 4;
	Kekoa::i128 _i128 = 5;

	

}


#endif //KEKOA_TEST_INT_HPP_INCLUDED