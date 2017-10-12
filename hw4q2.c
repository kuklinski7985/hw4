#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
//1.
#define SET_EQUAL(a,b) (a=(uint8_t)b)
/* parentheses around the b varible like (a=(uint8_t)(b)) would unsure
   that b always gets evaluated first*/


//2.
#define SQUARE(a) (a*a)
/*macro arguements should be put in parentheses like ((a)*(a)) to avoid
  issues like SQUARE(x+2) -> expanded to (x+2*x+2) which gives an answer
of 41 and not the expected 255 */

  /*possible issue that SQUARE does not change the 
value of x when it is squared, must be assigned to a
variable*/

//3.
#define BASE 16
#define OFFSET 10+BASE
int8_t var = OFFSET*2;

/*order of operations gives a different value than what is expected 
  Issue can be fixed by defining OFFSET as (10+BASE)*/


void main(){
  printf("Homework #4, Question 2 - Andrew Kuklinski\n\n");

  uint8_t x = 5;
  uint16_t y = 13;

  printf("x = %d | y = %d\n",x,y);
  SET_EQUAL(x,y);
  printf("After SET_EQUAL: x = %d | y = %d\n",x,y);

  printf("x = %d | y = %d\n\n",x,y);
  uint8_t z = SQUARE(x+2);
  printf("X after SQUARE = %d\n",z);


  printf("base  = %d\n", BASE);

  printf("Offset = %d\n",OFFSET);
  printf("var = %d\n",var);
  
  
  return;

}
