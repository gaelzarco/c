// Header
#include <stdio.h>

void fn2() {
  
}

// Main Entrypoint; `int` is return type of main
int main() {
  // Integer data types
  int x = 1; // 4 bytes -2 bill to 2 bill
  short y = 0; // 2 bytes -32 thou to 32 thou
  char z = 'f'; // 1 bytes -127 to 128 *can be number or character
  long whatever = 100; // 4 bytes *not really used anymore 
  long long whatev = 0; // 8 bytes 64-bit integer

  // Floating point (decimals)
  float w = 1.5f; // 4 bytes
  double q = 1.5; // 8 bytes *not very common

  float w2 = w + 2;
  
  // Reference notes for more information
  char *str = "Phrases of character are assigned in this way";

  // int is variable type
  int a = 10;

  printf("%d", a);
  printf("Hello World!");

  // Programs must return a 1 or 0
  return 0;
}
