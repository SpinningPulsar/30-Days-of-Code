#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";

    
    // Declare second integer, double, and String variables.
    int integer;
    double double_var;
    char strings[1000];
    // Read and save an integer, double, and String to your variables.
    scanf("%d %f %s",&integer,&double_var,&strings);
    // Print the sum of both integer variables on a new line.
    integer+=i;
    printf("%d\n",integer);
    // Print the sum of the double variables on a new line.
    double_var=d+double_var;
    printf("%f \n",double_var);
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    printf("%s %s",s,strings);
    return 0;
}