#include "stm32f4xx.h"
int main(void) {
/*1. Enable GPIOA clock by Writing 1 to bit0 of AHB1ENR*/
RCC->AHB1ENR |=(1U<<0);
/*2. Enable GPIOC clock by writing 1 to bit2 of AHB1ENR*/
RCC->AHB1ENR |=(1U<<2);
 /*3. Set PA5 to output mode by writing 1 to bit10 of
 MODER*/
 GPIOA->MODER |=(1U<<10);
 /*4. Set PC13 to input mode by writing 0 to bit26 and
 bit27 of MODER*/
 GPIOC->MODER |=(0U<<26);
 GPIOC->MODER |=(0U<<27);
 while (1) {
 /*5. Check if input is high by checking if bit13 is 1*/
 if(GPIOA->IDR & (1U<<13)) {
 /*6. Turn off PA5 by writing 0 to bit5 of ODR*/
 GPIOA->ODR &=~(1U<<5);
 }
 else{
 /*7. Turn on PA5 by writing 1 to bit5 of ODR */
