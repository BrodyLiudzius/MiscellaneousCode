#ifndef VECTOR_HPP_INCLUDED
#define VECTOR_HPP_INCLUDED

#include <cmath>

#include "float.hpp"
#include "int.hpp"


namespace Kekoa {
	
	// 2-Vector Types
	struct vec2_f16_t  {f16_t  x, y;};
	struct vec2_f32_t  {f32_t  x, y;};
	struct vec2_f64_t  {f64_t  x, y;};
	struct vec2_f128_t {f128_t x, y;};

	// 3-Vector Types
	struct vec3_f16_t  {f16_t  x, y, z;};
	struct vec3_f32_t  {f32_t  x, y, z;};
	struct vec3_f64_t  {f64_t  x, y, z;};
	struct vec3_f128_t {f128_t x, y, z;};

	// 4-Vector Types
	struct vec4_f16_t  {f16_t  x, y, z, w;};
	struct vec4_f32_t  {f32_t  x, y, z, w;};
	struct vec4_f64_t  {f64_t  x, y, z, w;};
	struct vec4_f128_t {f128_t x, y, z, w;};




	// Vector Addition
	vec2_f16_t 

	// Vector Subtraction


	// Dot Product


	// Cross Product


	// Element-Wise Multiplication


	// Element-Wise Division


	// Magnitude
	f16_t  Magnitude(const vec2_f16_t  &_vec) {return std::sqrt(_vec.x*_vec.x + _vec.y*_vec.y);}
	f32_t  Magnitude(const vec2_f32_t  &_vec) {return std::sqrt(_vec.x*_vec.x + _vec.y*_vec.y);}
	f64_t  Magnitude(const vec2_f64_t  &_vec) {return std::sqrt(_vec.x*_vec.x + _vec.y*_vec.y);}
	f128_t Magnitude(const vec2_f128_t &_vec) {return std::sqrt(_vec.x*_vec.x + _vec.y*_vec.y);}
	
	f16_t  Magnitude(const vec3_f16_t  &_vec) {return std::sqrt(_vec.x*_vec.x + _vec.y*_vec.y + _vec.z*_vec.z);}
	f32_t  Magnitude(const vec3_f32_t  &_vec) {return std::sqrt(_vec.x*_vec.x + _vec.y*_vec.y + _vec.z*_vec.z);}
	f64_t  Magnitude(const vec3_f64_t  &_vec) {return std::sqrt(_vec.x*_vec.x + _vec.y*_vec.y + _vec.z*_vec.z);}
	f128_t Magnitude(const vec3_f128_t &_vec) {return std::sqrt(_vec.x*_vec.x + _vec.y*_vec.y + _vec.z*_vec.z);}

	f16_t  Magnitude(const vec4_f16_t  &_vec) {return std::sqrt(_vec.x*_vec.x + _vec.y*_vec.y + _vec.z*_vec.z + _vec.w*_vec.w);}
	f32_t  Magnitude(const vec4_f32_t  &_vec) {return std::sqrt(_vec.x*_vec.x + _vec.y*_vec.y + _vec.z*_vec.z + _vec.w*_vec.w);}
	f64_t  Magnitude(const vec4_f64_t  &_vec) {return std::sqrt(_vec.x*_vec.x + _vec.y*_vec.y + _vec.z*_vec.z + _vec.w*_vec.w);}
	f128_t Magnitude(const vec4_f128_t &_vec) {return std::sqrt(_vec.x*_vec.x + _vec.y*_vec.y + _vec.z*_vec.z + _vec.w*_vec.w);}
	
	// Normalize
	vec2_f16_t Normalize(const vec2_f16_t &_vec) {
		f16_t magnitude = Magnitude(_vec);
		return vec2_f16_t{_vec.x/magnitude, _vec.y/magnitude};
	}
	vec2_f32_t Normalize(const vec2_f32_t &_vec) {
		f32_t magnitude = Magnitude(_vec);
		return vec2_f32_t{_vec.x/magnitude, _vec.y/magnitude};
	}
	vec2_f64_t Normalize(const vec2_f64_t &_vec) {
		f64_t magnitude = Magnitude(_vec);
		return vec2_f64_t{_vec.x/magnitude, _vec.y/magnitude};
	}
	vec2_f128_t Normalize(const vec2_f128_t &_vec) {
		f128_t magnitude = Magnitude(_vec);
		return vec2_f128_t{_vec.x/magnitude, _vec.y/magnitude};
	}

	vec3_f16_t Normalize(const vec3_f16_t &_vec) {
		f16_t magnitude = Magnitude(_vec);
		return vec3_f16_t{_vec.x/magnitude, _vec.y/magnitude, _vec.z/magnitude};
	}
	vec3_f32_t Normalize(const vec3_f32_t &_vec) {
		f32_t magnitude = Magnitude(_vec);
		return vec3_f32_t{_vec.x/magnitude, _vec.y/magnitude, _vec.z/magnitude};
	}
	vec3_f64_t Normalize(const vec3_f64_t &_vec) {
		f64_t magnitude = Magnitude(_vec);
		return vec3_f64_t{_vec.x/magnitude, _vec.y/magnitude, _vec.z/magnitude};
	}
	vec3_f128_t Normalize(const vec3_f128_t &_vec) {
		f128_t magnitude = Magnitude(_vec);
		return vec3_f128_t{_vec.x/magnitude, _vec.y/magnitude, _vec.z/magnitude};
	}

	vec4_f16_t Normalize(const vec4_f16_t &_vec) {
		f16_t magnitude = Magnitude(_vec);
		return vec4_f16_t{_vec.x/magnitude, _vec.y/magnitude, _vec.z/magnitude, _vec.w/magnitude};
	}
	vec4_f32_t Normalize(const vec4_f32_t &_vec) {
		f32_t magnitude = Magnitude(_vec);
		return vec4_f32_t{_vec.x/magnitude, _vec.y/magnitude, _vec.z/magnitude, _vec.w/magnitude};
	}
	vec4_f64_t Normalize(const vec4_f64_t &_vec) {
		f64_t magnitude = Magnitude(_vec);
		return vec4_f64_t{_vec.x/magnitude, _vec.y/magnitude, _vec.z/magnitude, _vec.w/magnitude};
	}
	vec4_f128_t Normalize(const vec4_f128_t &_vec) {
		f128_t magnitude = Magnitude(_vec);
		return vec4_f128_t{_vec.x/magnitude, _vec.y/magnitude, _vec.z/magnitude, _vec.w/magnitude};
	}

}


#endif //VECTOR_HPP_INCLUDED