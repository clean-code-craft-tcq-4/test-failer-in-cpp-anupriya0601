#include <iostream>
#include "alerter.h"

int main() {
    alertInCelcius(400.5);
    assert(alertFailureCount==1);
    alertInCelcius(303.6);
    assert(alertFailureCount==1);
    std::cout << alertFailureCount << " alerts failed.\n";
    std::cout << "All is well \n";
    return 0;
}