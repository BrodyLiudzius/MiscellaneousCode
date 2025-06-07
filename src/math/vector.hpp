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

		inline constexpr vec2<T>& operator = (const vec2<T> &_vec) {
			if (this != &_vec) {
				x = _vec.x;
				y = _vec.y;
			}
			return *this;
		}
		inline constexpr vec2<T>& operator += (const vec2<T> &_vec) {
			if (this != &_vec) {
				x += _vec.x;
				y += _vec.y;
			}
			return *this;
		}
		inline constexpr vec2<T>& operator -= (const vec2<T> &_vec) {
			if (this != &_vec) {
				x -= _vec.x;
				y -= _vec.y;
			}
			return *this;
		}

		inline constexpr vec2<T>& operator *= (const T &_scalar) {
			if (this != &_scalar) {
				x *= _scalar;
				y *= _scalar;
			}
			return *this;
		}
		inline constexpr vec2<T>& operator /= (const T &_scalar) {
			if (this != &_scalar) {
				x /= _scalar;
				y /= _scalar;
			}
			return *this;
		}
	};
	template <typename T>
	struct vec3 {
		static_assert(std::is_arithmetic<T>::value, "vec3 must have an arithmetic type.");
		T x, y, z;

		inline constexpr vec3<T>& operator = (const vec3<T> &_vec) {
			if (this != &_vec) {
				x = _vec.x;
				y = _vec.y;
				z = _vec.z;
			}
			return *this;
		}
		inline constexpr vec3<T>& operator += (const vec3<T> &_vec) {
			if (this != &_vec) {
				x += _vec.x;
				y += _vec.y;
				z += _vec.z;
			}
			return *this;
		}
		inline constexpr vec3<T>& operator -= (const vec3<T> &_vec) {
			if (this != &_vec) {
				x -= _vec.x;
				y -= _vec.y;
				z -= _vec.z;
			}
			return *this;
		}

		inline constexpr vec3<T>& operator *= (const T &_scalar) {
			if (this != &_scalar) {
				x *= _scalar;
				y *= _scalar;
				z *= _scalar;
			}
			return *this;
		}
		inline constexpr vec3<T>& operator /= (const T &_scalar) {
			if (this != &_scalar) {
				x /= _scalar;
				y /= _scalar;
				z /= _scalar;
			}
			return *this;
		}
	};
	template <typename T>
	struct vec4 {
		static_assert(std::is_arithmetic<T>::value, "vec4 must have an arithmetic type.");
		T x, y, z, w;

		inline constexpr vec4<T>& operator = (const vec4<T> &_vec) {
			if (this != &_vec) {
				x = _vec.x;
				y = _vec.y;
				z = _vec.z;
				w = _vec.w;
			}
			return *this;
		}
		inline constexpr vec4<T>& operator += (const vec4<T> &_vec) {
			if (this != &_vec) {
				x += _vec.x;
				y += _vec.y;
				z += _vec.z;
				w += _vec.w;
			}
			return *this;
		}
		inline constexpr vec4<T>& operator -= (const vec4<T> &_vec) {
			if (this != &_vec) {
				x -= _vec.x;
				y -= _vec.y;
				z -= _vec.z;
				w -= _vec.w;
			}
			return *this;
		}

		inline constexpr vec4<T>& operator *= (const T &_scalar) {
			if (this != &_scalar) {
				x *= _scalar;
				y *= _scalar;
				z *= _scalar;
				w *= _scalar;
			}
			return *this;
		}
		inline constexpr vec4<T>& operator /= (const T &_scalar) {
			if (this != &_scalar) {
				x /= _scalar;
				y /= _scalar;
				z /= _scalar;
				w /= _scalar;
			}
			return *this;
		}
	};


	////// Function Declarations


	//// Scalar Operations

	// Scalar Multiplication
	template <typename T>
	inline constexpr vec2<T> ScalarMultiply(const vec2<T> &_vec, const T &_scalar) {
		return vec2<T>{_vec.x*_scalar, _vec.y*_scalar};
	}
	template <typename T>
	inline constexpr vec3<T> ScalarMultiply(const vec3<T> &_vec, const T &_scalar) {
		return vec3<T>{_vec.x*_scalar, _vec.y*_scalar, _vec.z*_scalar};
	}
	template <typename T>
	inline constexpr vec4<T> ScalarMultiply(const vec4<T> &_vec, const T &_scalar) {
		return vec4<T>{_vec.x*_scalar, _vec.y*_scalar, _vec.z*_scalar, _vec.w*_scalar};
	}

	// Scalar Division
	template <typename T>
	inline constexpr vec2<T> ScalarDivide(const vec2<T> &_vec, const T &_scalar) {
		return vec2<T>{_vec.x/_scalar, _vec.y/_scalar};
	}
	template <typename T>
	inline constexpr vec3<T> ScalarDivide(const vec3<T> &_vec, const T &_scalar) {
		return vec3<T>{_vec.x/_scalar, _vec.y/_scalar, _vec.z/_scalar};
	}
	template <typename T>
	inline constexpr vec4<T> ScalarDivide(const vec4<T> &_vec, const T &_scalar) {
		return vec4<T>{_vec.x/_scalar, _vec.y/_scalar, _vec.z/_scalar, _vec.w/_scalar};
	}

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
    	return vec4<T>{_lhs.x + _rhs.x, _lhs.y + _rhs.y, _lhs.z + _rhs.z, _lhs.w + _rhs.w};
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
    	return vec4<T>{_lhs.x - _rhs.x, _lhs.y - _rhs.y, _lhs.z - _rhs.z, _lhs.w - _rhs.w};
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
	template <typename T>
	inline constexpr vec2<T> Normalize(const vec2<T> &_vec) {
		return ScalarDivide(_vec, Magnitude(_vec));
	}
	template <typename T>
	inline constexpr vec3<T> Normalize(const vec3<T> &_vec) {
		return ScalarDivide(_vec, Magnitude(_vec));
	}
	template <typename T>
	inline constexpr vec4<T> Normalize(const vec4<T> &_vec) {
		return ScalarDivide(_vec, Magnitude(_vec));
	}


	//// Operator Overloading

	
	// Arithmetic Operators

	// Addition Operator
	template <typename T>
	inline constexpr vec2<T> operator + (const vec2<T> &_lhs, const vec2<T> &_rhs) {
		return Add(_lhs, _rhs);
	}
	template <typename T>
	inline constexpr vec3<T> operator + (const vec3<T> &_lhs, const vec3<T> &_rhs) {
		return Add(_lhs, _rhs);
	}
	template <typename T>
	inline constexpr vec4<T> operator + (const vec4<T> &_lhs, const vec4<T> &_rhs) {
		return Add(_lhs, _rhs);
	}

	// Subtraction Operator
	template <typename T>
	inline constexpr vec2<T> operator - (const vec2<T> &_lhs, const vec2<T> &_rhs) {
		return Subtract(_lhs, _rhs);
	}
	template <typename T>
	inline constexpr vec3<T> operator - (const vec3<T> &_lhs, const vec3<T> &_rhs) {
		return Subtract(_lhs, _rhs);
	}
	template <typename T>
	inline constexpr vec4<T> operator - (const vec4<T> &_lhs, const vec4<T> &_rhs) {
		return Subtract(_lhs, _rhs);
	}

	// (Scalar) Multiplication Operator
	template <typename T>
	inline constexpr vec2<T> operator * (const vec2<T> &_vec, const T &_scalar) {
		return ScalarMultiply(_vec, _scalar);
	}
	template <typename T>
	inline constexpr vec3<T> operator * (const vec3<T> &_vec, const T &_scalar) {
		return ScalarMultiply(_vec, _scalar);
	}
	template <typename T>
	inline constexpr vec4<T> operator * (const vec4<T> &_vec, const T &_scalar) {
		return ScalarMultiply(_vec, _scalar);
	}
	
	template <typename T>
	inline constexpr vec2<T> operator * (const T &_scalar, const vec2<T> &_vec) {
		return ScalarMultiply(_vec, _scalar);
	}
	template <typename T>
	inline constexpr vec3<T> operator * (const T &_scalar, const vec3<T> &_vec) {
		return ScalarMultiply(_vec, _scalar);
	}
	template <typename T>
	inline constexpr vec4<T> operator * (const T &_scalar, const vec4<T> &_vec) {
		return ScalarMultiply(_vec, _scalar);
	}

	// (Scalar) Division Operator
	template <typename T>
	inline constexpr vec2<T> operator / (const vec2<T> &_vec, const T &_scalar) {
		return ScalarDivide(_vec, _scalar);
	}
	template <typename T>
	inline constexpr vec3<T> operator / (const vec3<T> &_vec, const T &_scalar) {
		return ScalarDivide(_vec, _scalar);
	}
	template <typename T>
	inline constexpr vec4<T> operator / (const vec4<T> &_vec, const T &_scalar) {
		return ScalarDivide(_vec, _scalar);
	}
	
	template <typename T>
	inline constexpr vec2<T> operator / (const T &_scalar, const vec2<T> &_vec) {
		return ScalarDivide(_vec, _scalar);
	}
	template <typename T>
	inline constexpr vec3<T> operator / (const T &_scalar, const vec3<T> &_vec) {
		return ScalarDivide(_vec, _scalar);
	}
	template <typename T>
	inline constexpr vec4<T> operator / (const T &_scalar, const vec4<T> &_vec) {
		return ScalarDivide(_vec, _scalar);
	}


	// Relational Operators


	// Equal To Operator
	template <typename T>
	inline constexpr bool operator == (const vec2<T> &_lhs, const vec2<T> &_rhs) {
		return (_lhs.x == _rhs.x) && (_lhs.y == _rhs.y);
	}
	template <typename T>
	inline constexpr bool operator == (const vec3<T> &_lhs, const vec3<T> &_rhs) {
		return (_lhs.x == _rhs.x) && (_lhs.y == _rhs.y) && (_lhs.z == _rhs.z);
	}
	template <typename T>
	inline constexpr bool operator == (const vec4<T> &_lhs, const vec4<T> &_rhs) {
		return (_lhs.x == _rhs.x) && (_lhs.y == _rhs.y) && (_lhs.z == _rhs.z) && (_lhs.w == _rhs.w);
	}

	// Not Equal Operator
	template <typename T>
	inline constexpr bool operator != (const vec2<T> &_lhs, const vec2<T> &_rhs) {
		return (_lhs.x != _rhs.x) || (_lhs.y != _rhs.y);
	}
	template <typename T>
	inline constexpr bool operator != (const vec3<T> &_lhs, const vec3<T> &_rhs) {
		return (_lhs.x != _rhs.x) || (_lhs.y != _rhs.y) || (_lhs.z != _rhs.z);
	}
	template <typename T>
	inline constexpr bool operator != (const vec4<T> &_lhs, const vec4<T> &_rhs) {
		return (_lhs.x != _rhs.x) || (_lhs.y != _rhs.y) || (_lhs.z != _rhs.z) || (_lhs.w != _rhs.w);
	}

}


#endif //KEKOA_VECTOR_HPP_INCLUDED