#include <cs50.h>
#include <stdio.h>

void calculate_height(int height);

int main(void){
    int h = get_int("Input height: ");
    calculate_height(h);
}

void calculate_height(int height){
    for (int i=0; i<height; i++){
        printf("#\n");
    }
}
