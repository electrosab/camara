/*=============================================================================
 * Copyright (c) 2019, Juan Pablo Catoggio <electrosaab@hotmail.com>
 * All rights reserved.
 * License: bsd-3-clause (see LICENSE.txt)
 * Date: 2019/07/24
 *===========================================================================*/

 /*==================[inlcusiones]============================================*/

#include "sapi.h"// <= Biblioteca sAPI
#include "Main_camara.h"

/*==================[definiciones y macros]==================================*/

//#define UART_SELECTED   UART_GPIO
//#define UART_SELECTED   UART_485
#define UART_SELECTED   UART_USB
//#define UART_SELECTED   UART_ENET
//#define UART_SELECTED   UART_232

/*==================[definiciones de datos internos]=========================*/

CONSOLE_PRINT_ENABLE

/*==================[definiciones de datos externos]=========================*/

/*==================[declaraciones de funciones internas]====================*/

/*==================[declaraciones de funciones externas]====================*/

/*==================[funcion principal]======================================*/

void Enviar_Pantalla ();
uint8_t pantalla_f=0;

int main( void )
{

   // ---------- CONFIGURACIONES ------------------------------

   // Inicializar y configurar la plataforma
   boardConfig();

   // Inicializar UART_USB como salida de consola
   consolePrintConfigUart( UART_USB, 115200 );

   // Inicializar LCD de 16x2 (caracteres x lineas) con cada caracter de 5x2 pixeles
   lcdInit( 20, 4, 5, 8 ); //cambiar el 20 por cantidad de caracteres horizontalmente. y el 4 filas

   // Cargar el caracter a CGRAM
   // El primer parametro es el codigo del caracter (0 a 7).
   // El segundo es el puntero donde se guarda el bitmap (el array declarado
   // anteriormente)

   // ---------- REPETIR POR SIEMPRE --------------------------
   while (TRUE) {

      //------------------------------------------------------------
      // Switch que escanea la variuable pantala_f para ver que pantalla
      // hay que mostrar y llama a la función Enviar pantalla
      //-------------------------------------------------------------


      switch (pantalla_f) {
      case BIENVENIDO:

         Enviar_Pantalla(BIENVENIDO);

         break;

      case PANTALLA_PRINCIPAL_TEMP:

         Enviar_Pantalla(PANTALLA_PRINCIPAL_TEMP);

         break;

      case PANTALLA_PRINCIPAL_SD:

         Enviar_Pantalla(PANTALLA_PRINCIPAL_SD);

         break;
      case CONFIGURAR_TEMP:
         Enviar_Pantalla(CONFIGURAR_TEMP);

         break;
      case RETIRAR_SD:
         Enviar_Pantalla(RETIRAR_SD);

         break;
      case CONTROLANDO:

         Enviar_Pantalla(CONTROLANDO);
         break;



      }

   }

   // NO DEBE LLEGAR NUNCA AQUI, debido a que a este programa se ejecuta
   // directamente sobre un microcontroladore y no es llamado por ningun
   // Sistema Operativo, como en el caso de un programa para PC.
   return 0;
}

/*==================[definiciones de funciones internas]=====================*/

/*==================[definiciones de funciones externas]=====================*/

/*==================[fin del archivo]========================================*/
