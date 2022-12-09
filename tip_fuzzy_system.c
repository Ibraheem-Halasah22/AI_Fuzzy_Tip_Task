#include "tip_fuzzy_system.h"
float tip_fuzzy_system(float food, float service){
    float rancid_v = rancid(food);
    float delicious_v = delicious(food);

    float poor_v = poor(service);
    float good_v = good(service);
    float excellent_v = excellent(service);

    return deffuzed(
            cheap_rule(poor_v, rancid_v),
            avg_rule(good_v),
            generous_rule(excellent_v, delicious_v)
            );
}
