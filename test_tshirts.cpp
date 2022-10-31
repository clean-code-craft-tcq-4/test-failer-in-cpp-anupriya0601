#include <iostream>
#include "tshirts.h"

int main() {
    assert(size(38) == 'S');
    assert(size(39) == 'M');
    assert(size(40) == 'M');
    assert(size(41) == 'M');
    assert(size(42) == 'L');
    std::cout << "All is well\n";
    return 0;
}