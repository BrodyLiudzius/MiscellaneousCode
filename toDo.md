# To Do List

## Code Tasks
- Add support to `platform.hpp` for:
	- Compilers:
		- Intel C++ compiler
		- IBM XL C/C++
	- Operating Systems:
		- Unix
		- BSD
		- MacOS
	- Architectures:
		- ARM
		- Intel x86
		- AMD x86
- Update `int.hpp`/`float.hpp`:
	- Detect float widths via defines as a generic fallback. Platform/library detection should only be for nonstandard types included on those respective platforms
- Add time benchmarking functions in the test module
- Check POD requirements for vector.hpp