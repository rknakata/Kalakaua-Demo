/*
FizzBuzz Programming Interview Question

Write a short program that prints each number from 1 to 100 on a new line. 

For each multiple of 3, print "Fizz" instead of the number. 

For each multiple of 5, print "Buzz" instead of the number. 

For numbers which are multiples of both 3 and 5, print "FizzBuzz" instead of the number.
*/

#include<stdio.h>
void main() // main is the function where the program will always start running from
{
  int i; // i is a variable that can hold integers which are whole numbers
  for(i = 1; i<=100; i++)// this is a for loop that runs the code inside of its brackets 100 times
  {
    if(i%3 != 0 && i%5 != 0){ // if the remainder of i divided by 3 is not equal to 0 and thee remainder of i divided by 5 is not equal to 0
      printf("%d\n", i);  // prints the number
    }
    if(i%3 == 0 && i%5 != 0){ // if the remainder of i divided by 3 is not equa$
      printf("Fizz\n");  // prints the number
    }
    if(i%5 == 0 && i%3 != 0){ // if the remainder of i divided by 3 is not equa$
      printf("Buzz\n");  // prints the number
    }
    if(i%3 == 0 && i%5 == 0){ // if the remainder of i divided by 3 is not equa$
      printf("FizzBuzz\n");  // prints the number
    }
  }
}
