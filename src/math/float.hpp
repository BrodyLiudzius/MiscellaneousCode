#ifndef FLOAT_HPP_INCLUDED
#define FLOAT_HPP_INCLUDED

/*
Float types are currently not guaranteed to have the specified width and
mostly serve as placeholders for now
*/

namespace Kekoa {

	#ifdef __arm__ // Check environment
		typedef float f16_t; // will be a 32-bit float
		typedef float f32_t;
		typedef double f64_t;
		typedef long double f128_t; // will be 64-bit float
	#else
		typedef float f16_t; // width not guaranteed
		typedef float f32_t; // width not guaranteed
		typedef double f64_t; // width not guaranteed
		typedef long double f128_t; // width not guaranteed
	#endif // Check environment

}

#endif //FLOAT_HPP_INCLUDED