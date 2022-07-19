/* run using gcc q3.c and the ./a.out*/
#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
   int g=0; //g stores the number of points calculated
   int a[30], b[30]; //arrays for x and y coordinates
   int distance = 0; //stores distance between points
   FILE *file = fopen("points.csv", "r"); //takes values and inputs from file

   while(fscanf(file, "%d, %d", &a[g],&b[g])== 2){
       g++; //incrementer
   }
   int i=0; 
   for(i=1;i<g;i++){
       //check to see if there is a value to be used in calculation on both sides
       if ((a[i] == a[i-1])|| (b[i] == b[i-1])) {  //formula to calcuate distanbce

           int dist = sqrt(pow((a[i] - a[i-1]), 2) + pow((b[i] - b[i-1]), 2));

           printf("%d, %d - %d, %d : %d\n", a[i-1], b[i-1], a[i], b[i], dist);
           distance += dist; 
       }
   }
   printf("Total path: %d", distance); //final print statement in required format
   //would have used /n to take output to another line but cant figure due to short of time
   return 0;
}