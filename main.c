#include <stdio.h>
#include "tip_fuzzy_system.h"
#include "stdbool.h"

int main() {
    printf("Welcome to fuzzy tip system!!!\n");
    while(true){
        printf("Do you want more calculations?[y/n]");
        char choice;
        scanf("%c", &choice);
        if(choice == 'y'){
            int food, service;
            printf("please enter the value of the food:");
            scanf("%d", &food);
            printf("please enter the value of the service:");
            scanf("%d", &service);
            printf("The tip value is %f\n", tip_fuzzy_system(food, service));
        }
        else break;

    }
    return 0;
}
