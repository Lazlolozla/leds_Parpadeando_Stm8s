# Parpadeo de múltiples LEDs en STM8S

**Descripción:**

Este proyecto demuestra cómo configurar todos los pines del puerto D de un microcontrolador STM8S como salidas digitales y hacerlos parpadear simultáneamente. Es un ejemplo básico para iniciarse en la programación de microcontroladores STM8S.

**Funcionamiento:**

1. **Configuración de pines:** Todos los pines del puerto D se configuran como salidas digitales.
2. **Bucle principal:** 
   * Se apagan todos los LEDs.
   * Se espera un tiempo determinado.
   * Se encienden todos los LEDs.
   * Se espera otro tiempo determinado.
   * Se repite el proceso indefinidamente.

**Hardware:**

* Microcontrolador STM8S (especificar el modelo si lo conoces)
* LEDs conectados a los pines del puerto D
* Resistencias limitadoras de corriente para los LEDs

**Software:**

* Lenguaje de programación: C
* Entorno de desarrollo: (Especificar el entorno que utilizas)

**Cómo ejecutar:**

1. Cargar el código en el microcontrolador utilizando un programador adecuado.
2. Conectar la alimentación al microcontrolador.
3. Los LEDs conectados al puerto D deberían comenzar a parpadear.

**Código:**

```c
#include "stm8s.h"

// Función de retardo
void retardo(int r){
    int i;
    for(i = 0; i < r; i++){}
    }

int main() {
    
    // Configurar pin LED como salida
     
        PD_DDR |=  (1<< 1)|(1<<2)|(1<< 3)| (1<<4)| (1<<5)| (1<<6);
        PD_CR1 |= (1<< 1)|(1<<2)|(1<< 3)| (1<<4)| (1<<5)| (1<<6);
     
    while (1) {
        // Parpadeo leds
        
        PD_ODR &= ~( (1<< 1)|(1<<2)|(1<< 3)| (1<<4)| (1<<5)| (1<<6) );
        retardo(32000);
        PD_ODR |= (1<< 1)|(1<<2)|(1<< 3)| (1<<4)| (1<<5)| (1<<6);
        retardo(32000);
      
    }
}
