//      project: https://github.com/BrodyLiudzius/MiscellaneousCode
//         file: test.hpp
//       author: Brody Liudzius
//      license: MIT License
//  description: This file adds functions for code testing and verification

#ifndef KEKOA_TEST_H_INCLUDED
#define KEKOA_TEST_H_INCLUDED


#include <format>
#include <iostream>
#include <string>
#include <array>


#define KEKOA_TEST_USE_ANSI_COLORS


namespace Kekoa::Test {

	struct result {
		bool passed;
		std::string message;
	};

	template <typename T>
	result Equal(T _testVal, T _expected) {
		return _testVal == _expected ? result{true, ""} : result{false, std::format("values not equal: expected \'{}\', got \'{}\'", _expected, _testVal)};
	}

	template <typename T>
	result NotEqual(T _testVal, T _expected) {
		return _testVal == _expected ? result{false, std::format("values were equal: got \'{}\' which was equal to \'{}\'", _testVal, _expected)} : result{true, ""};
	}

	void Assert(result _result) {
		#ifdef KEKOA_TEST_USE_ANSI_COLORS
			std::cout << (_result.passed ? std::format("\033[32mAssertion succeded {}\033[0m\n", _result.message) : std::format("\033[31mAssertion FAILED {}\033[0m\n", _result.message));
		#else
			std::cout << (_result.passed ? std::format("Assertion succeded {}\n", _result.message) : std::format("Assertion FAILED {}\n", _result.message));
		#endif
	}

	template<std::size_t _size>
	void Assert(const std::array<result, _size> &_results) {
		bool passed = true;
		for (result res : _results)
			if (!res.passed) {
				#ifdef KEKOA_TEST_USE_ANSI_COLORS
					std::cout << std::format("\033[31mAssertion FAILED {}\033[0m\n", res.message);
				#else
					std::cout << std::format("Assertion FAILED {}\n", res.message);
				#endif
				passed = false;
			}
		if (passed)
			#ifdef KEKOA_TEST_USE_ANSI_COLORS
				std::cout << std::format("\033[32mAll {} assertions succeded\033[0m\n", _size);
			#else
				std::cout << std::format("All {} assertions succeded {}\n", _size);
			#endif
		
	}

	inline constexpr void Heading(std::string _headingText, int _headingLevel = 0) {
		switch (_headingLevel) {
		default:
			std::cout << _headingText << "\n";
			break;
		}
	}

}


#endif //KEKOA_TEST_H_INCLUDED