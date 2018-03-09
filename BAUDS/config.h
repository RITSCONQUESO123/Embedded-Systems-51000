#ifndef CONFIG_H
#define	CONFIG_H


#include <xc.h> // include processor files - each processor file is guarded.
#include"globalDefinitions.h"

void wait_ms(unsigned int);
void configPIC();
void initUSART(long);
char transmitUSART(char);
//void USART_TXS(const char);
char recieveUSART();

#endif	
