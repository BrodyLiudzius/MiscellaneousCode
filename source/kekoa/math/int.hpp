#ifndef KEOKA_INT_HPP_INCLUDED
#define KEOKA_INT_HPP_INCLUDED

// #toDo:
// - Consider adding fast types as included in <cstdint>
// - 


// Include cstdint if available
#if defined(__has_include)
	#if __has_include(<cstdint>)
		#include <cstdint>
		#define __KEKOA_USE_CSTDINT
	#endif
#endif


namespace Kekoa {
	
	#if defined(__KEKOA_USE_CSTDINT) // If Standard Library Integers Available
		typedef int8_t   i8  ;
		typedef int16_t  i16 ;
		typedef int32_t  i32 ;
		typedef int64_t  i64 ;
		typedef int64_t  i128; // Fall back to 64 bit #toDo

		typedef uint8_t   u8  ;
		typedef uint16_t  u16 ;
		typedef uint32_t  u32 ;
		typedef uint64_t  u64 ;
		typedef uint64_t  u128; // Fall back to 64 bit #toDo
	#else // Fallback: C++ Native Types
		typedef signed char           i8  ;
		typedef signed short int      i16 ;
		typedef signed long int       i32 ;
		typedef signed long long int  i64 ;
		typedef signed long long int  i128;

		typedef unsigned char           u8  ;
		typedef unsigned short int      u16 ;
		typedef unsigned long int       u32 ;
		typedef unsigned long long int  u64 ;
		typedef unsigned long long int  u128;
	#endif




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


#endif //KEOKA_INT_HPP_INCLUDED