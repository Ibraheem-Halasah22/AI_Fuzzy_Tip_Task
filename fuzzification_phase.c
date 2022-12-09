#include "fuzzification_phase.h"


#define D_RANCID 6
#define C_RANCID 3

#define A_DELICIOUS 4
#define B_DELICIOUS 7

#define C_POOR 0
#define C_GOOD 5
#define C_EXCELLENT 10

#define SIGMA 1.7

float gaussian_function(float x, float sigma, float c) {
    return pow(M_E,
               -pow(x - c, 2) / (pow(sigma, 2) * 2));
}

float rancid(float food) {
    if (food <= C_RANCID) return 1;
    else if (food >= D_RANCID) return 0;
    else return (D_RANCID - food) / (D_RANCID - C_RANCID);
}

float delicious(float food) {
    if (food <= A_DELICIOUS) return 0;
    else if (food >= B_DELICIOUS) return 1;
    else return (food - A_DELICIOUS) / (B_DELICIOUS - A_DELICIOUS);
}

float poor(float service) {
    return gaussian_function(service, SIGMA, C_POOR);
}

float good(float service) {
    return gaussian_function(service, SIGMA, C_GOOD);
}

float excellent(float service) {
    return gaussian_function(service, SIGMA, C_EXCELLENT);
}