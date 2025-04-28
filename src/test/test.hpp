#ifndef TEST_H_INCLUDED
#define TEST_H_INCLUDED

#include <format>
#include <iostream>
#include <string>

namespace Kekoa::Test {

	#define USE_ANSI_COLORS

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
		#ifdef USE_ANSI_COLORS
			std::cout << (_result.passed ? std::format("\033[32mAssertion succeded {}\033[0m\n", _result.message) : std::format("\033[31mAssertion FAILED {}\033[0m\n", _result.message));
		#else
			std::cout << (_result.passed ? std::format("Assertion succeded {}\n", _result.message) : std::format("Assertion FAILED {}\n", _result.message));
		#endif
	}

}

#endif //TEST_H_INCLUDED