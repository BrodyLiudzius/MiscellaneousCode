#      project: https://github.com/BrodyLiudzius/MiscellaneousCode
#         file: makefile
#       author: Brody Liudzius
#      license: MIT License
#  description: This makefile is for building tests (in the ./tests folder) to test library modules.
#               It uses g++ in a Windows environment to build the project.



#### CONFIG OPTIONS:

# Compiler
CXX = g++
CXX_FLAGS = -Wpedantic -O3 -std=c++20

INCLUDE_DIRECTORIES = source tests build
HEADER_FILES = $(wildcard source/kekoa/**/*.hpp)
MAIN_FILE = tests\main.cpp

TARGET_FILE = build\test.exe




#### COMMANDS:

.PHONY: all
all: $(TARGET_FILE)

$(TARGET_FILE): $(HEADER_FILES) $(MAIN_FILE)
	$(CXX) $(CXX_FLAGS) -o $(TARGET_FILE) $(MAIN_FILE)

.PHONY: run
run: $(TARGET_FILE)
	./$(TARGET_FILE)

.PHONY: clean
clean:
	del $(TARGET_FILE)