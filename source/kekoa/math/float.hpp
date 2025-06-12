//      project: https://github.com/BrodyLiudzius/MiscellaneousCode
//         file: float.hpp
//       author: Brody Liudzius
//      license: MIT License
//  description: This file adds aliases for floating point types of varying widths


// #toDo:
// - Add <stdfloat> types
// - Consider f80 type for x86_64 80 bit types


#ifndef KEKOA_FLOAT_HPP_INCLUDED
#define KEKOA_FLOAT_HPP_INCLUDED


#include <type_traits> // static_assert


#define KEKOA_ENFORCE_FLOAT_SIZES
// #define KEKOA_ENFORCE_F16_SIZE
// #define KEKOA_ENFORCE_F128_SIZE


namespace Kekoa {

	
	//// Float Aliases

	// Check Environment
	#if defined(__arm__) || defined(__aarch64__)  // ARM Environment
		// Relevant links:
		//   https://gcc.gnu.org/onlinedocs/gcc/Half-Precision.html
		//   https://developer.arm.com/documentation/102284/6-16-2LTS/armclang-Reference/Other-Compiler-specific-Features/Half-precision-floating-point-data-types
		typedef _Float16     f16 ; // Requires GNU compiler option `-mfp16-format=ieee` or `-mfp16-format=alternative`
		typedef float        f32 ;
		typedef double       f64 ;
		typedef long double  f128; // Fall back to 64 bit
	// #elif defined(__has_include)
	// 	#if __has_include(<stdfloat>)
	// 		#include <stdfloat>
	// 	#endif
	#else // Fallback: C++ Native Types
		typedef float        f16 ; // Fall back to 32 bit
		typedef float        f32 ; //  32 bit on most platforms
		typedef double       f64 ; //  64 bit on most platforms
		typedef long double  f128; // Fall back to 64  or 80 bit
	#endif // Check environment




	//// Enforcing Float Sizes

	#ifdef KEKOA_ENFORCE_FLOAT_SIZES
		#ifdef KEKOA_ENFORCE_F16_SIZE
		static_assert(sizeof(f16)  == 2,  "f16 is not 16 bits");
		#endif //KEKOA_ENFORCE_F16_SIZE
		static_assert(sizeof(f32)  == 4,  "f32 is not 32 bits");
		static_assert(sizeof(f64)  == 8,  "f64 is not 64 bits");
		#ifdef KEKOA_ENFORCE_F128_SIZE
		static_assert(sizeof(f128) == 16, "f128 is not 128 bits");
		#endif //KEKOA_ENFORCE_F128_SIZE
	#endif //KEKOA_ENFORCE_FLOAT_SIZES

}


#endif //KEKOA_FLOAT_HPP_INCLUDED