#include <iostream>
#include <assert.h>

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
            std::cout << i * 5 + j << " | " << findMajorColor(i) << " | " << findMinorColor(j) << "\n";
        }
    }
    return i * j;
}
