
/*
 * Factorial
 */

 #include <stdio.h>

 int main( void ) {
    long f[20];
    f[0] = 1;
    long storage;
    /*
    Code to compute the factorial of each array index
    Print your final answer
    */

    for (int k=1; k<20; k++)
    {
      storage = f[0];
      for (int i=k-1; i>0; i--)
      {
         storage = storage * i;
      }
      f[k] = k * storage;
      printf("%i!=%ld\n", k, f[k]);
    }

    return 0;
 }
