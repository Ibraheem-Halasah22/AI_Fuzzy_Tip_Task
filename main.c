#include <stdio.h>
//#include
#include "tip_fuzzy_system.h"
#include "stdbool.h"

int main() {
    bool x=true;
    char choice;
    int food, service;
    printf("Welcome to fuzzy tip system!!!\n");
    do{
        printf("Do you want more calculations?[y/n]");

        scanf(" %c", &choice);
        if(choice == 'y'){

            printf("please enter the value of the food:");
            scanf(" %d", &food);
            printf("please enter the value of the service:");
            scanf(" %d", &service);
            printf("\n");
            printf("The tip value is %f\n", tip_fuzzy_system(food, service));
        } else x=false;
    }while(x);
    return 0;
}
