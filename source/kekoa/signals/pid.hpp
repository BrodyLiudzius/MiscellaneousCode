//      project: https://github.com/BrodyLiudzius/MiscellaneousCode
//         file: pid.hpp
//       author: Brody Liudzius
//      license: MIT License
//  description: This file implements PID control loops


#ifndef KEKOA_PID_HPP_INCLUDED
#define KEKOA_PID_HPP_INCLUDED




namespace Kekoa {

	template <typename T, typename U>
	U UpdatePID(T &_prevState, const T &_processVariable, const T &_processDerivative, const T &_setpoint, const T &_setpointDerivative, const T &_K) {
		// complete PID calculation, update _prevState var
		// return summed PID terms as a single float
	}
}


#endif //KEKOA_PID_HPP_INCLUDED