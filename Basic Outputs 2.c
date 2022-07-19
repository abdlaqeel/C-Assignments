/* compile with  "gcc q2.c -o q2" ouput with ./q2 16 */

#include <stdio.h>
#include <stdlib.h>
int main(int argc , char* argv[]){
    int input = atoi(argv[1]);   /* takes an input for the number*/
    for(int i = 1; i <= input; i++)
    if(i%5==0 && i%3 == 0)
    printf("threefive\n");  /* checks if the entered number matches the condition*/
    else if(i%5 == 0)       /* if it matches condition then changes the output in the required way*/
    printf("five\n");
    else if(i%3 == 0)
    printf("three\n");
    else
    printf("%d\n", i);
    return 0;
}