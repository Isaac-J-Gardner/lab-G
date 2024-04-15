#include <stdio.h>
#include <stdlib.h>
#include "task_g.h"

int main(void) {

    // Your code below here
    int scan = 0;
    double numbers[20];
    double max_val;
    FILE *fptr;
    
    fptr = fopen("numbers.txt", "r");

    if (fptr != NULL){
        for(int i = 0; i < 20; i++){
            scan = fscanf(fptr, "%lf", &numbers[i]);
            if (scan != 1){
                return 1;
            }
        }
    }

	find_max_less_than_10(numbers, 20, &max_val);

    if(max_val == 0){
        printf("Error!");
        return 1;
    }
    printf("max = %lf", max_val);


    return 0;
}