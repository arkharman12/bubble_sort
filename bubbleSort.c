//bubble.c
//famous bubble sort
//implement the swap algorithm with pointers

#include <stdio.h>
#define MAX 9
 
//function prototypes
void printValues();
void sort();
void swap(int*, int*);
 
int values[] = {7, 3, 9, 4, 6, 1, 2, 8, 5};
 
int main() {
  printf("Before: \n");
  printValues();
  sort();
  printf("\nAfter: \n");
  printValues();
 
  return(0);
} // end main
 
void printValues(){
  printf("[");
  //Looping through each value of the array
  //Prints each sorted integer 
  for(int i = 0; i < MAX; i++) {
    printf("%d ", values[i]);
  }
  printf("]\n");
} // end printValues
 
void sort() {
  //Using these two variables for counting in loops
  int i, j;
  //Outer for loop for iterating over each value
  for(i = 0; i < MAX-1; i++) {
    //Nested for loop for value comparisons
    for(j = 0; j < MAX-1; j++) {
      // If the first value is bigger than the
      //second value, swap will occur
      if(values[j] > values[j+1]) {
        swap(&values[j], &values[j+1]);
        //calling this function for the current status
	      //of the array
        printValues();
      }
    }
  }
} // end sort
 
void swap(int* a, int* b) {
  // Storing the value of the one variable to the 
  // other with the help temp variable and pointers(*)
  int temporary = *a;
  *a = *b;
  *b = temporary;
} // end swap

