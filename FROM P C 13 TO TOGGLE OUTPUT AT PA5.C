#include "stm32f4xx.h"
int main(void) {
/*1. Enable GPIOA clock by Writing 1 to bit0 of AHB1ENR*/
RCC->AHB1ENR |=(1U<<0);
/*2. Enable GPIOC clock by writing 1 to bit2 of AHB1ENR*/
RCC->AHB1ENR |=(1U<<2);
 /*3. Set PA5 to output mode by writing 1 to bit10 of
 MODER*/
