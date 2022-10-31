#include <iostream>
#include <string.h>
#include "misaligned.h"

int main() {
    int result = printColorMap();
    assert(result == 25);
    assert(strcmp("Black|Orange",(findMajorColor(2) + "|" + findMinorColor(1)).c_str())==0);
    std::cout << "All is well )\n";
    return 0;
}