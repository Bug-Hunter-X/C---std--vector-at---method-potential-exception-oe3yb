# C++ std::vector at() method potential exception
This example demonstrates a potential issue when using the at() method of the std::vector container in C++.  The at() method provides bounds checking, which is generally good practice, but it can lead to exceptions if not handled properly.  The example shows how an out-of-bounds index can cause an exception.  The solution demonstrates how to use a safer approach (size() check) to prevent unexpected exceptions.