cd emscripten
ls
cd 1.34.1
em++ tests/multiply.cpp --js-library tests/multiply_js.js -o multiply.js -s NO_EXIT_RUNTIME=1
