// This file is a "Hello, world!" in C++ language by GCC for wandbox.
#include <iostream>
#include <cstdlib>

template <typename T>
T // return type
next_term(T x) 
{
    if (x % 2 == 0) {
        return x / 2;
    } else { 
        return 3*x + 1;
    }
}


template <typename T>
T
chain_length(T x)
{
    T n = 0;
    while (1 < x) {
        x = next_term(x);
        n++;
    }
    return n;
}



template <typename T>
T
hailstone(T n = 1000000)
{
    T max_x = 0;
    T max_len = 0;
    for (T x = 0; x < n; x++) {
        T len = chain_length(x);
        if (max_len < len) {
            max_len = len;
            max_x = x;
        }
    }
    return max_x;
}




int main()
{
    std::cout << "Hello, Wandbox!   " << hailstone<unsigned int>() << std::endl;
    std::cout << sizeof(int) << std::endl;
}

// GCC reference:
//   https://gcc.gnu.org/

// C++ language references:
//   https://cppreference.com/
//   https://isocpp.org/
//   http://www.open-std.org/jtc1/sc22/wg21/

// Boost libraries references:
//   https://www.boost.org/doc/
