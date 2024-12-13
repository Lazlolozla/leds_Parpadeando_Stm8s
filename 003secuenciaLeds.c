/* Creado por [Andrés] el mar 10 de dic del 2024 a las 11:29:59
 * 
 * CST
 * Proyecto: 003secuenciaLeds
 * Descripción: [Tu descripción]
 */

#include "stm8s.h"

// Función de retardo
void retardo(int r){
    int i;
    for(i = 0; i < r; i++){}
    }

int main() {
    
    // Configurar pin LED como salida
     
        PD_DDR |=  (1<< 1)|(1<<2)|(1<< 3)| (1<<4)| (1<<5)| (1<<6);
        PD_CR1 |= (1<< 1)|(1<<2)|(1<< 3)| (1<<4)| (1<<5)| (1<<6);
     
    while (1) {
        // Parpadeo leds
        
        PD_ODR &= ~( (1<< 1)|(1<<2)|(1<< 3)| (1<<4)| (1<<5)| (1<<6) );
        retardo(32000);
        PD_ODR |= (1<< 1)|(1<<2)|(1<< 3)| (1<<4)| (1<<5)| (1<<6);
        retardo(32000);
      
    }
}
