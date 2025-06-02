#ifndef KEKOA_VECTOR_HPP_INCLUDED
#define KEKOA_VECTOR_HPP_INCLUDED


#include <cmath> // std::sqrt
#include <type_traits> // static_assert, std::is_arithmetic

#include "float.hpp"
#include "int.hpp"


namespace Kekoa {

	////// Vector Type Definitions

	template <typename T>
	struct vec2 {
		static_assert(std::is_arithmetic<T>::value, "vec2 must have an arithmetic type.");
		T x, y;
	};
	template <typename T>
	struct vec3 {
		static_assert(std::is_arithmetic<T>::value, "vec3 must have an arithmetic type.");
		T x, y, z;
	};
	template <typename T>
	struct vec4 {
		static_assert(std::is_arithmetic<T>::value, "vec4 must have an arithmetic type.");
		T x, y, z, w;
	};




	////// Function Declarations


	//// Element-wise Operations


	// Element-Wise Multiplication
	template <typename T>
	inline constexpr vec2<T> ElementMultiply(const vec2<T> &_lhs, const vec2<T> &_rhs) {
    	return vec2<T>{_lhs.x*_rhs.x, _lhs.y*_rhs.y};
	}
	template <typename T>
	inline constexpr vec3<T> ElementMultiply(const vec3<T> &_lhs, const vec3<T> &_rhs) {
    	return vec3<T>{_lhs.x*_rhs.x, _lhs.y*_rhs.y, _lhs.z*_rhs.z};
	}
	template <typename T>
	inline constexpr vec4<T> ElementMultiply(const vec4<T> &_lhs, const vec4<T> &_rhs) {
    	return vec4<T>{_lhs.x*_rhs.x, _lhs.y*_rhs.y, _lhs.z*_rhs.z, _lhs.w*_rhs.w};
	}

	// Element-Wise Division
	template <typename T>
	inline constexpr vec2<T> ElementDivision(const vec2<T> &_lhs, const vec2<T> &_rhs) {
    	return vec2<T>{_lhs.x / _rhs.x, _lhs.y / _rhs.y};
	}
	template <typename T>
	inline constexpr vec3<T> ElementDivision(const vec3<T> &_lhs, const vec3<T> &_rhs) {
    	return vec3<T>{_lhs.x / _rhs.x, _lhs.y / _rhs.y, _lhs.z / _rhs.z};
	}
	template <typename T>
	inline constexpr vec4<T> ElementDivision(const vec4<T> &_lhs, const vec4<T> &_rhs) {
    	return vec4<T>{_lhs.x / _rhs.x, _lhs.y / _rhs.y, _lhs.z / _rhs.z, _lhs.w / _rhs.w};
	}


	//// Vector Operations


	// Vector Addition
	template <typename T>
	inline constexpr vec2<T> Add(const vec2<T> &_lhs, const vec2<T> &_rhs) {
    	return vec2<T>{_lhs.x + _rhs.x, _lhs.y + _rhs.y};
	}
	template <typename T>
	inline constexpr vec3<T> Add(const vec3<T> &_lhs, const vec3<T> &_rhs) {
    	return vec3<T>{_lhs.x + _rhs.x, _lhs.y + _rhs.y, _lhs.z + _rhs.z};
	}
	template <typename T>
	inline constexpr vec4<T> Add(const vec4<T> &_lhs, const vec4<T> &_rhs) {
    	return vec4<T>{_lhs.x + _rhs.x, _lhs.y + _rhs.y, _lhs.z + _rhs.z, , _lhs.w + _rhs.w};
	}

	// Vector Subtraction
	template <typename T>
	inline constexpr vec2<T> Subtract(const vec2<T> &_lhs, const vec2<T> &_rhs) {
    	return vec2<T>{_lhs.x - _rhs.x, _lhs.y - _rhs.y};
	}
	template <typename T>
	inline constexpr vec3<T> Subtract(const vec3<T> &_lhs, const vec3<T> &_rhs) {
    	return vec3<T>{_lhs.x - _rhs.x, _lhs.y - _rhs.y, _lhs.z - _rhs.z};
	}
	template <typename T>
	inline constexpr vec4<T> Subtract(const vec4<T> &_lhs, const vec4<T> &_rhs) {
    	return vec4<T>{_lhs.x - _rhs.x, _lhs.y - _rhs.y, _lhs.z - _rhs.z, , _lhs.w - _rhs.w};
	}

	// Dot Product
	template <typename T>
	inline constexpr T DotProduct(const vec2<T> &_lhs, const vec2<T> &_rhs) {
    	return _lhs.x*_rhs.x + _lhs.y*_rhs.y;
	}
	template <typename T>
	inline constexpr T DotProduct(const vec3<T> &_lhs, const vec3<T> &_rhs) {
    	return _lhs.x*_rhs.x + _lhs.y*_rhs.y + _lhs.z*_rhs.z;
	}
	template <typename T>
	inline constexpr T DotProduct(const vec4<T> &_lhs, const vec4<T> &_rhs) {
    	return _lhs.x*_rhs.x + _lhs.y*_rhs.y + _lhs.z*_rhs.z + _lhs.w*_rhs.w;
	}
	

	// Cross Product
	template <typename T>
	inline constexpr vec3<T> CrossProduct(const vec3<T> &_lhs, const vec3<T> &_rhs) {
		return vec3<T>{_lhs.y*_rhs.z - _lhs.z*_rhs.y, _lhs.z*_rhs.x - _lhs.x*_rhs.z, _lhs.x*_rhs.y - _lhs.y*_rhs.x};
	}

	// Vector Magnitude
	template <typename T>
	inline constexpr T Magnitude(const vec2<T> &_vec) {
    	return std::sqrt(DotProduct(_vec, _vec));
	}
	template <typename T>
	inline constexpr T Magnitude(const vec3<T> &_vec) {
    	return std::sqrt(DotProduct(_vec, _vec));
	}
	template <typename T>
	inline constexpr T Magnitude(const vec4<T> &_vec) {
    	return std::sqrt(DotProduct(_vec, _vec));
	}

	// Normalize

	// Dot Product

	// Cross Product

	

}


#endif //KEKOA_VECTOR_HPP_INCLUDED