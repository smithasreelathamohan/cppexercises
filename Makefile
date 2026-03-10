.PHONY: all clean run-all

# Compiler
CXX = g++
CXXFLAGS = -g -std=c++17 -Wall

# Source and Executables
SRC = $(wildcard src/*/*/*.cpp)

# Output folder for binaries
BUILD = build
EXE = $(patsubst src/%.cpp,$(BUILD)/%.exe,$(SRC))

# Default target: build all executables
all: $(EXE)

# Build rule for any .cpp -> .exe
$(BUILD)/%.exe: src/%.cpp
	powershell -Command "if (!(Test-Path '$(dir $@)')) { New-Item -ItemType Directory -Path '$(dir $@)' -Force | Out-Null }"
	$(CXX) $(CXXFLAGS) $< -o $@

# Clean all executables
clean:
	rm -rf $(BUILD)