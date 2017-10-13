#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
//1.
#define SET_EQUAL(a,b) (a=(uint8_t)b)

//2.
#define SQUARE(a) (a*a)

//3.
#define BASE 16
#define OFFSET 10+BASE
int8_t var = OFFSET*2;

void main(){
  printf("Homework #4, Question 2 - Andrew Kuklinski\n\n");

  uint8_t x = 5;
  uint16_t y = 13;

  printf("variable x and y are assigned\n");
  printf("x = %d | y = %d\n",x,y);
  SET_EQUAL(x,y);
  printf("SET_EQUAL macro is called\n");
  printf("After SET_EQUAL: x = %d | y = %d\n",x,y);

  printf("x = %d | y = %d\n\n",x,y);
  uint8_t z = SQUARE(x+2);
  printf("X after SQUARE = %d\n",z);


  printf("base  = %d\n", BASE);

  printf("Offset = %d\n",OFFSET);
  printf("var = %d\n",var);
  
  
  return;

}
