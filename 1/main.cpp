#include <iostream>
#include <cmath>
#include <vector>

#ifdef USE_DOUBLE
using T = double;
#else
using T = float;
#endif

int main() {
    const size_t N = 10000000;
    std::vector<T> a(N);
    
    for (size_t i = 0; i < N; ++i)
        a[i] = std::sin(2.0 * 3.141592653589793 * i / N);
    
    T sum = 0;
    for (T x : a) sum += x;
    
    std::cout << sum << std::endl;
}