/**
 * @file - hw4q3.c
 * @brief - declaration of struct memory overlay for homework 4, question 3
 * @author - Andrew Kuklinski
 * @date - 10-13-2017
 **/

#include <stdio.h>

//peripheral base address
#define PWMmoduleBase  ((uint32_t)0x8000000)

//sets the address of the timer status register wrt an offset
#define timer_status_base (PWMmoduleBase + 0x00000020)

//sets the variable pointer TIMERSTATUS with PWM_module type
#define TIMERSTATUS ((PWM_module*) timer_status_base)

#define __IO (volatile)
#define __I (volatile const)

int main(){
  /*struct overlay of peripheral memory region.  Matches exactly the structure of the peripheral registers*/
  typedef struct {

    __IO uint16_t TCTL;
    __IO uint16_t TCCTL[7];
    __IO uint16_t TCR;
    __IO uint16_t TCCR0[7];
    __IO uint16_t TSTAT;
    //reserverd memory space for unused memory locations
    uint16_t RESERVED0[6];
    __IO uint16_t TIV[7];

  } PWM_module;

  //assigns value to the specified register using set up timerstatus variable
  TIMERSTATUS-> TSTAT = 0x0101;  //random value, register strucutre unknown
  return 0;
}
