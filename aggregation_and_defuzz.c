#define CHEAP_K 5
#define AVG_K 15
#define GENEROUS_K 25

float deffuzed(float cheap, float avg, float generous){
    return (cheap * CHEAP_K + avg * AVG_K + generous * GENEROUS_K) / (cheap + avg + generous);
}