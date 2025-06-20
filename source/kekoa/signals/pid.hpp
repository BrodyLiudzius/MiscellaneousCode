//      project: https://github.com/BrodyLiudzius/MiscellaneousCode
//         file: pid.hpp
//       author: Brody Liudzius
//      license: MIT License
//  description: This file implements PID control loops


#ifndef KEKOA_PID_HPP_INCLUDED
#define KEKOA_PID_HPP_INCLUDED


namespace Kekoa {

	// template <typename T, typename U>
	// U UpdatePID(T &_prevState, const T &_processVariable, const T &_processDerivative, const T &_setpoint, const T &_setpointDerivative, const T &_K) {
	// 	// complete PID calculation, update _prevState var
	// 	// return summed PID terms as a single float
	// }


	// Maybe consider a PID class so that PID state variables can be kept internal and setpoint changes can be intercepted via a getter


	template <typename T>
	class PIDController {
		



		void SetSetpoint();
		void GetSetpoint();

		void SetConstants();
		void GetConstants();


		T Update(T _dt, T _processVar); // Return the control variable, add overloads for supplying processVar derivative and/or integral as well as setpoint derivative

	};

}


#endif //KEKOA_PID_HPP_INCLUDED