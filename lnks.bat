@echo off
ECHO linking: build/test.o
ECHO -Lib: lib/static
ECHO -libs: sdatastructures
ECHO making bin/test-static ...
g++ build/test.o -Llib/static -lsdatastructures -o bin/test-static