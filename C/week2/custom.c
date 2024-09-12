#include <stdio.h>
#include <cs50.h>

int age(int birth_y, int newer_y);

int main(void){
    int result=0, y_birth=0;

    printf("You will be %iyo.\n", age(result, y_birth));
}

int age(int birth_y, int newer_y){
    int results;
    char approval = get_char("Hey, are you ready to know how old you wil be in 10, 20, maybe 50 years ?! ");
    if (approval == 'y' || approval == 'Y')
    {
        birth_y = get_int("Enter your year of birth: ");
        newer_y = get_int("Enter a new year to make the calculation: ");
        results = newer_y - birth_y;
        return results;
    }
    else {
        printf("Fair enough, have a good one :)\n");
        return 0;
    }
}
//TODO!! fix bug where display "you will be 0yo." when saying no


