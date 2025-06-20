//      project: https://github.com/BrodyLiudzius/MiscellaneousCode
//         file: platform.hpp
//       author: Brody Liudzius
//      license: MIT License
//  description: This file is for determining the platform/environment
//               including target architecture, OS, and compiler


#ifndef KEOKA_PLATFORM_HPP_INCLUDED
#define KEOKA_PLATFORM_HPP_INCLUDED


// Check compiler

// Check OS
#if defined(_WIN32) || defined(WIN32) || defined(__WIN32) || defined(__WIN32__)
	#define KEKOA_WINDOWS
	#if defined(_WIN64) || defined(WIN64) | defined(__WIN64) || defined(__WIN64__)
		#define KEKOA_WINDOWS_64_BIT
	#else
		#define KEKOA_WINDOWS_32_BIT
	#endif
#endif

// Check Architecture

// Check C++ version


#endif //KEOKA_PLATFORM_HPP_INCLUDED