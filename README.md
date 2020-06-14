# LinuxPlayground_CodeCoverage
Very simple code coverage example


clang++ -fprofile-instr-generate -fcoverage-mapping src/Calculator.cpp src/main.cpp -o playground
clang++ -fprofile-instr-generate -fcoverage-mapping src/Calculator.cpp test/CalculatorTest.cpp test/main.cpp -o unitTest -lpthread -lgtest -lgmock


LLVM_PROFILE_FILE="playground.profraw" ./unitTest


llvm-profdata merge -sparse playground.profraw -o playground.profdata

llvm-cov report ./unitTest -instr-profile=playground.profdata
llvm-cov show -format=html ./unitTest -instr-profile=playground.profdata > index.html
