#include <cassert>
#include <iostream>

int sum_two(int a, int b);

int main() {
    // Test 1
    assert(sum_two(3, 4) == 7);
    // Test 2
    assert(sum_two(0, 0) == 0);
    // Test 3
    assert(sum_two(-5, 5) == 0);

    std::cout << "✅ All C++ tests passed." << std::endl;
    return 0;
}
