## Basics principals of the C programing language.

C is a programming language around since the 70's. It use a complicated synthax, using curly brackets, parenthesis, semi-columns, etc...
C has the advantages of being blazing fast, fairly low level on hardware & easy to understand (once you figure stuff out). One downside of such power is that it require you to understand how a computer work: You have to manage your RAM yourself. There is no Garbage collector & the program will always assume that the human behind the screen will always input something right.
(for example: If you want to ask permission using 'y' or 'n' char. C will not accept 'Y' or 'N' or 'H'. He will just ignore you and quit the program.)

C utilize multiple priciples:
- Functions.
- Variables.
- Conditionals. (or boolean)
- Loops.
- Operator & Abstraction.

Functions are fairly easy, it the basics (like, you can't run a program without the function 'int main()' in C)
Variables 
Conditional are pretty much straight forwards: "if(this is true), then... else if(this is not true), then... else, then...". Thrilled to learn more about those.
Loops are not that hard either, there is 3 types of loops:
  - While
  - For
  - Do-While
I have only seen 'while' and 'for' for now, 'for' has the advantage of initializing a variable directly, exemple:
for loop with initialized int i variable:
#include <stdio.h>

int main()                              //Main functions of our program<br/>
{
    for(int i = 0; i <= 10; i++)        //"for (initialize variable type 'int', name "i", value "0". Conditional "if 'i' is less or equal to '10', then 'i++'" (i++ means increments 'i')<br/>
    {
      printf("%i\n", i);                //"printf" or "Print Function", "%i" is used to print and integer (number), "\n" is used to get line after an integer is printed, i is the variable to get the integer from.<br/>
    }
    return 0;                           //return 0 if the program went well, return 1 otherwise. (could have used "int main(void) but meh...<br/>
}<br/>

C may be complicated at first, but honestly not that much. I will continue to learn it even after my CS50x certificate.
