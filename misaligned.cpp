#include <iostream>
#include <assert.h>
#include <string.h>

std::string findMajorColor(int x) {
    const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
    return majorColor[x];
}

std::string findMinorColor(int x) {
    const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
    return minorColor[x];
}

int printColorMap() {
    int i = 0, j = 0;
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            std::cout << i * 5 + j << " | " << findMajorColor(i) << " | " << findMinorColor(i) << "\n";
        }
    }
    return i * j;
}

int main() {
    int result = printColorMap();
    assert(result == 25);
    assert(strcmp("Black|Orange",(findMajorColor(2) + "|" + findMinorColor(2)).c_str())==0);
    std::cout << "All is well (maybe!)\n";
    return 0;
}