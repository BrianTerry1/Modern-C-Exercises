#include <stdio.h>

int print_prime_factors(int N){
  /*
  Can't use dynamic array size so instead need to pre-judge size of array.
  On a basic level, #(prime factors of N) cannot be greater than half of all
  elements so set arr to have size N/2 if N is even and N+1/2 is N is odd. 
  
  May double back on this to check if there is a better upper bound.
  */
  if (N % 2 == 0){ //N is even
    int arr[N/2];
  } else { //N is odd
    int arr[(N+1)/2];
  }

  /*
  Implement algorithm described at https://www.geeksforgeeks.org/prime-factor/

  n.b. I didn't peak at the C++ implementation - for better or worse.
  */

  //Step 1: While n is divisible by 2, print 2 and divide n by 2.

  if (N % 2){
    arr[0] = 2;

    while (N % 2 == 0) {
      N = N / 2;
    }
  } //N must now be odd.

int main() {

  return 0;
}
