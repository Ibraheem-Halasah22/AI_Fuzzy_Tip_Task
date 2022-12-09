
#include "rule_eval.h"

float cheap_rule(float poor, float rancid){
    return fmax(poor, rancid);
}
float avg_rule(float good){
    return good;
}
float generous_rule(float excellent, float delicious){
    return fmax(excellent, delicious);
}
