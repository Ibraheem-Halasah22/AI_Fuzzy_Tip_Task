#ifndef UNTITLED1_FUZZIFICATION_PHASE_H
#define UNTITLED1_FUZZIFICATION_PHASE_H

#include <math.h>

#define D_RANCID 6
#define C_RANCID 3

#define A_DELICIOUS 4
#define B_DELICIOUS 7

#define C_POOR 0
#define C_GOOD 5
#define C_EXCELLENT 10

#define SIGMA 1.7

float gaussian_function(float x, float sigma, float c);

float rancid(float food);

float delicious(float food);

float poor(float service);

float good(float service);

float excellent(float service);

#endif

