// Defines from the MSVC as provided by Visual Studio Build Tools 2022
// Retrieved from the Microsoft website: https://learn.microsoft.com/en-us/cpp/preprocessor/predefined-macros?view=msvc-170


// Standard Predefined Macros
#define __cplusplus
#define __DATE__
#define __FILE__
#define __LINE__
#define __STDC__
#define __STDC_HOSTED__
#define __STDC_NO_ATOMICS__
#define __STDC_NO_COMPLEX__
#define __STDC_NO_THREADS__
#define __STDC_NO_VLA__
#define __STDC_VERSION__
#define __STDCPP_DEFAULT_NEW_ALIGNMENT__
#define __STDCPP_THREADS__
#define __TIME__


// Microsoft-Specific Predefined Macros
#define __ARM_ARCH // Defined as an integer literal that represents the ARM architecture version. The value is defined as 8 for the Armv8-A architecture. For 8.1 and onwards, the value is scaled for minor versions, such as X.Y, by using the formula X * 100 + Y as defined by the ARM C language extension. For example, for Armv8.1, __ARM_ARCH is 8 * 100 + 1 or 801. To set the ARM architecture version, see /arch (ARM64). This macro was introduced in Visual Studio 2022 version 17.10.
#define __ATOM__ // Defined as 1 when the /favor:ATOM compiler option is set and the compiler target is x86 or x64. Otherwise, undefined.
#define __AVX__ // Defined as 1 when the /arch:AVX, /arch:AVX2, /arch:AVX512 or /arch:AVX10.1 compiler options are set and the compiler target is x86 or x64. Otherwise, undefined.
#define __AVX2__ // Defined as 1 when the /arch:AVX2, /arch:AVX512 or /arch:AVX10.1 compiler option is set and the compiler target is x86 or x64. Otherwise, undefined.
#define __AVX512BW__ // Defined as 1 when the /arch:AVX512 or /arch:AVX10.1 compiler option is set and the compiler target is x86 or x64. Otherwise, undefined.
#define __AVX512CD__ // Defined as 1 when the /arch:AVX512 or /arch:AVX10.1 compiler option is set and the compiler target is x86 or x64. Otherwise, undefined.
#define __AVX512DQ__ // Defined as 1 when the /arch:AVX512 or /arch:AVX10.1 compiler option is set and the compiler target is x86 or x64. Otherwise, undefined.
#define __AVX512F__ // Defined as 1 when the /arch:AVX512 or /arch:AVX10.1 compiler option is set and the compiler target is x86 or x64. Otherwise, undefined.
#define __AVX512VL__ // Defined as 1 when the /arch:AVX512 or /arch:AVX10.1 compiler option is set and the compiler target is x86 or x64. Otherwise, undefined.
#define __AVX10_VER__ // Defined as an integer that represents version of AVX10 when the /arch:AVX10.1 compiler option is set and the compiler target is x86 or x64. Otherwise, undefined.
#define _CHAR_UNSIGNED // Defined as 1 if the default char type is unsigned. This value is defined when the /J (Default char type is unsigned) compiler option is set. Otherwise, undefined.
#define __CLR_VER // Defined as an integer literal that represents the version of the Common Language Runtime (CLR) used to compile the app. Th
#define _CONTROL_FLOW_GUARD // Defined as 1 when the /guard:cf (Enable Control Flow Guard) compiler option is set. Otherwise, undefined.
#define __COUNTER__ // Expands to an integer literal that starts at 0. The value increments by 1 every time it's used in a source file, or in included headers of the source file. __COUNTER__ remembers its state when you use precompiled headers. This macro is always defined.
#define __cplusplus_cli // Defined as the integer literal value 200406 when compiled as C++ and a /clr compiler option is set. Otherwise, undefined. When defined, __cplusplus_cli is in effect throughout the translation unit.
#define __cplusplus_winrt // Defined as the integer literal value 201009 when compiled as C++ and the /ZW (Windows Runtime Compilation) compiler option is set. Otherwise, undefined.
#define _CPPRTTI // Defined as 1 if the /GR (Enable Run-Time Type Information) compiler option is set. Otherwise, undefined.
#define _CPPUNWIND // Defined as 1 if one or more of the /GX (Enable Exception Handling), /clr (Common Language Runtime Compilation), or /EH (Exception Handling Model) compiler options are set. Otherwise, undefined.
#define _DEBUG // Defined as 1 when the /LDd, /MDd, or /MTd compiler option is set. Otherwise, undefined.
#define _DLL // Defined as 1 when the /MD or /MDd (Multithreaded DLL) compiler option is set. Otherwise, undefined.
#define __FUNCDNAME__ // Defined as a string literal that contains the decorated name of the enclosing function. The macro is defined only within a function. The __FUNCDNAME__ macro isn't expanded if you use the /EP or /P compiler option.
#define __FUNCSIG__ // Defined as a string literal that contains the signature of the enclosing function. The macro is defined only within a function. The __FUNCSIG__ macro isn't expanded if you use the /EP or /P compiler option. When compiled for a 64-bit target, the calling convention is __cdecl by default. For an example of usage, see the __FUNCDNAME__ macro.
#define __FUNCTION__ // Defined as a string literal that contains the undecorated name of the enclosing function. The macro is defined only within a function. The __FUNCTION__ macro isn't expanded if you use the /EP or /P compiler option. For an example of usage, see the __FUNCDNAME__ macro.
#define _INTEGRAL_MAX_BITS // Defined as the integer literal value 64, the maximum size (in bits) for a non-vector integral type. This macro is always defined.
#define __INTELLISENSE__ // Defined as 1 during an IntelliSense compiler pass in the Visual Studio IDE. Otherwise, undefined. You can use this macro to guard code the IntelliSense compiler doesn't understand, or use it to toggle between the build and IntelliSense compiler. For more information, see Troubleshooting Tips for IntelliSense Slowness.
#define _ISO_VOLATILE // Defined as 1 if the /volatile:iso compiler option is set. Otherwise, undefined.
#define _KERNEL_MODE // Defined as 1 if the /kernel (Create Kernel Mode Binary) compiler option is set. Otherwise, undefined.
#define _M_AMD64 // Defined as the integer literal value 100 for compilations that target x64 processors or ARM64EC. Otherwise, undefined.
#define _M_ARM // Defined as the integer literal value 7 for compilations that target ARM processors. Undefined for ARM64, ARM64EC, and other targets.
#define _M_ARM_ARMV7VE // Defined as 1 when the /arch:ARMv7VE compiler option is set for compilations that target ARM processors. Otherwise, undefined.
#define _M_ARM_FP // Defined as an integer literal value that indicates which /arch compiler option was set for ARM processor targets. Otherwise, undefined. A value in the range 30-39 if no /arch ARM option was specified, indicating the default architecture for ARM was set (VFPv3). A value in the range 40-49 if /arch:VFPv4 was set. For more information, see /arch (ARM).
#define _M_ARM64 // Defined as 1 for compilations that target ARM64. Otherwise, undefined.
#define _M_ARM64EC // Defined as 1 for compilations that target ARM64EC. Otherwise, undefined.
#define _M_CEE // Defined as 001 if any /clr (Common Language Runtime Compilation) compiler option is set. Otherwise, undefined.
#define _M_CEE_PURE // Deprecated beginning in Visual Studio 2015. Defined as 001 if the /clr:pure compiler option is set. Otherwise, undefined.
#define _M_CEE_SAFE // Deprecated beginning in Visual Studio 2015. Defined as 001 if the /clr:safe compiler option is set. Otherwise, undefined.
#define _M_FP_CONTRACT // Available beginning in Visual Studio 2022. Defined as 1 if the /fp:contract or /fp:fast compiler option is set. Otherwise, undefined.
#define _M_FP_EXCEPT // Defined as 1 if the /fp:except or /fp:strict compiler option is set. Otherwise, undefined.
#define _M_FP_FAST // Defined as 1 if the /fp:fast compiler option is set. Otherwise, undefined.
#define _M_FP_PRECISE // Defined as 1 if the /fp:precise compiler option is set. Otherwise, undefined.
#define _M_FP_STRICT // Defined as 1 if the /fp:strict compiler option is set. Otherwise, undefined.
#define _M_IX86 // Defined as the integer literal value 600 for compilations that target x86 processors. This macro isn't defined for x64 or ARM compilation targets.
#define _M_IX86_FP // Defined as an integer literal value that indicates the /arch compiler option that was set, or the default. This macro is always defined when the compilation target is an x86 processor. Otherwise, undefined. When defined, the value is: 0 if the /arch:IA32 compiler option was set. 1 if the /arch:SSE compiler option was set. 2 if the /arch:SSE2, /arch:AVX, /arch:AVX2, /arch:AVX512 or /arch:AVX10.1 compiler option was set. This value is the default if an /arch compiler option wasn't specified. When /arch:AVX is specified, the macro __AVX__ is also defined. When /arch:AVX2 is specified, both __AVX__ and __AVX2__ are also defined. When /arch:AVX512 is specified, __AVX__, __AVX2__, __AVX512BW__, __AVX512CD__, __AVX512DQ__, __AVX512F__, and __AVX512VL__ are also defined. When /arch:AVX10.1 is specified, __AVX__, __AVX2__, __AVX512BW__, __AVX512CD__, __AVX512DQ__, __AVX512F__, __AVX512VL__ and __AVX10_VER__ are also defined. For more information, see /arch (x86).
#define _M_X64 // Defined as the integer literal value 100 for compilations that target x64 processors or ARM64EC. Otherwise, undefined.
#define _MANAGED // Defined as 1 when the /clr compiler option is set. Otherwise, undefined.
#define _MSC_BUILD // Defined as an integer literal that contains the revision number element of the compiler's version number. The revision number is the last element of the period-delimited version number. For example, if the version number of the Microsoft C/C++ compiler is 15.00.20706.01, the _MSC_BUILD macro is 1. This macro is always defined.
#define _MSC_EXTENSIONS // Defined as 1 if the on-by-default /Ze (Enable Language Extensions) compiler option is set. Otherwise, undefined.
#define _MSC_FULL_VER // Defined as an integer literal that encodes the major, minor, and build number elements of the compiler's version number. The major number is the first element of the period-delimited version number, the minor number is the second element, and the build number is the third element. For example, if the Microsoft C/C++ compiler version is 19.39.33519, _MSC_FULL_VER is 193933519. Enter cl /? at the command line to view the compiler's version number. This macro is always defined. For more information about compiler versioning, see C++ compiler versioning and specifically Service releases starting with Visual Studio 2017 for more information about Visual Studio 2019 16.8, 16.9, 16.10 and 16.11, which require _MSC_FULL_VER to tell them apart.
#define _MSC_VER // Defined as an integer literal that encodes the major and minor number elements of the compiler's version number. The major number is the first element of the period-delimited version number and the minor number is the second element. For example, if the version number of the Microsoft C/C++ compiler is 17.00.51106.1, the value of _MSC_VER is 1700. Enter cl /? at the command line to view the compiler's version number. This macro is always defined.
#define _MSVC_LANG // Defined as an integer literal that specifies the C++ language standard targeted by the compiler. Only code compiled as C++ sets it. The macro is the integer literal value 201402L by default, or when the /std:c++14 compiler option is specified. The macro is set to 201703L if the /std:c++17 compiler option is specified. The macro is set to 202002L if the /std:c++20 compiler option is specified. It's set to a higher, unspecified value when the /std:c++latest option is specified. Otherwise, the macro is undefined. The _MSVC_LANG macro and /std (Specify language standard version) compiler options are available beginning in Visual Studio 2015 Update 3.
#define __MSVC_RUNTIME_CHECKS // Defined as 1 when one of the /RTC compiler options is set. Otherwise, undefined.
#define _MSVC_TRADITIONAL // Available beginning with Visual Studio 2017 version 15.8: Defined as 0 when the preprocessor conformance mode /experimental:preprocessor compiler option is set. Defined as 1 by default, or when the /experimental:preprocessor- compiler option is set, to indicate the traditional preprocessor is in use. Available beginning with Visual Studio 2019 version 16.5: Defined as 0 when the preprocessor conformance mode /Zc:preprocessor compiler option is set. Defined as 1 by default, or when the /Zc:preprocessor- compiler option is set, to indicate the traditional preprocessor is in use (essentially, /Zc:preprocessor replaces the deprecated /experimental:preprocessor).
#define _MT // Defined as 1 when /MD or /MDd (Multithreaded DLL) or /MT or /MTd (Multithreaded) is specified. Otherwise, undefined.
#define _NATIVE_WCHAR_T_DEFINED // Defined as 1 when the /Zc:wchar_t compiler option is set. Otherwise, undefined.
#define _OPENMP // Defined as integer literal 200203, if the /openmp (Enable OpenMP 2.0 Support) compiler option is set. This value represents the date of the OpenMP specification implemented by MSVC. Otherwise, undefined.
#define _PREFAST_ // Defined as 1 when the /analyze compiler option is set. Otherwise, undefined.
#define __SANITIZE_ADDRESS__ // Available beginning with Visual Studio 2019 version 16.9. Defined as 1 when the /fsanitize=address compiler option is set. Otherwise, undefined.
#define __TIMESTAMP__ // Defined as a string literal that contains the date and time of the last modification of the current source file, in the abbreviated, constant length form returned by the CRT asctime function, for example, Fri 19 Aug 13:32:58 2016. This macro is always defined.
#define _VC_NODEFAULTLIB // Defined as 1 when the /Zl (Omit Default Library Name) compiler option is set. Otherwise, undefined.
#define _WCHAR_T_DEFINED // Defined as 1 when the default /Zc:wchar_t compiler option is set. The _WCHAR_T_DEFINED macro is defined but has no value if the /Zc:wchar_t- compiler option is set, and wchar_t is defined in a system header file included in your project. Otherwise, undefined.
#define _WIN32 // Defined as 1 when the compilation target is 32-bit ARM, 64-bit ARM, x86, or x64. Otherwise, undefined.
#define _WIN64 // Defined as 1 when the compilation target is 64-bit ARM or x64. Otherwise, undefined.
#define _WINRT_DLL // Defined as 1 when compiled as C++ and both /ZW (Windows Runtime Compilation) and /LD or /LDd compiler options are set. Otherwise, undefined.