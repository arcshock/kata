### Overview
This log is for the issues and gotchas that come up during the kata.

### 2017-12-03

#### Build
* Using .hpp instead of .cpp gave - 
```
user@user-lubuntu:~/workspace/kata/com/codekata/binary_chop/c++$ g++ --std=c++14 -I Catch2/single_include/ chop.cpp chop.hpp test_binary_chop.hpp 
/usr/lib/gcc/x86_64-linux-gnu/6/../../../x86_64-linux-gnu/Scrt1.o: In function `_start':
(.text+0x20): undefined reference to `main'
collect2: error: ld returned 1 exit status
```

From [Catch documentation](https://github.com/catchorg/Catch2/blob/master/docs/tutorial.md#scaling-up):
```
The requirement is that the following block of code (or equivalent):

#define CATCH_CONFIG_MAIN
#include "catch.hpp"

appears in exactly one source file. Use as many additional cpp files (or whatever you call your implementation files) as you need for your tests, partitioned however makes most sense for your way of working. Each additional file need only #include "catch.hpp" - do not repeat the #define!
```

Looks like I need to brush up on the build process.