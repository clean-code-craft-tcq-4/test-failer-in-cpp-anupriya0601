#include <iostream>
#include "alerter_stub.hpp"

int networkAlertStub(float celcius) {
    std::cout << "ALERT: Temperature is " << celcius << " celcius.\n";
    // Return 200 for ok
    // Return 500 for not-ok
    // stub always succeeds and returns 200
    return (celcius<=200 ? 200 : 500);
}