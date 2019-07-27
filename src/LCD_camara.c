
/*==================[inlcusiones]============================================*/

#include "sapi.h"        // <= Biblioteca sAPI
#include "Main_camara.h"
#include "LCD_camara.h"

// Definir caracteres personalizados: https://omerk.github.io/lcdchargen/
//DEFINES (PREGUNTAR EN DONDE VAN CORRECTAMENTE)

/*typedef enum {
   BIENVENIDO,
   PANTALLA_PRINCIPAL_TEMP,
   PANTALLA_PRINCIPAL_SD,
   RETIRAR_SD,
   CONFIGURAR_TEMP,
   CONTROLANDO
} estado_t;

estado_t varDeEstado;
*/


//Temperatura - Termometro
const char tempChar[8] = {
   0b01110,
   0b01010,
   0b01010,
   0b01110,
   0b01110,
   0b10111,
   0b11111,
   0b01110
};

// Humedad - Gota
const char humChar[8] = {
   0b00100,
   0b00100,
   0b01110,
   0b10111,
   0b10111,
   0b10011,
   0b01110,
   0b00000
};


// Simbolo grados
const char graChar[8] = {
   0b01110,
   0b01010,
   0b01110,
   0b00000,
   0b00000,
   0b00000,
   0b00000,
   0b00000
};

char tempString[] = "25";
char humString[] = "50";
char vieString[] = "10";


void Enviar_Pantalla(int varDeEstado)
{

   switch (varDeEstado) {
   case BIENVENIDO:


      lcdGoToXY( 0, 0 ); // Poner cursor en 0, 0
      lcdSendStringRaw("     FELICIDADES    " );
      lcdGoToXY( 0, 1 );
      lcdSendStringRaw("        PARA        " );
      lcdGoToXY( 0, 2 );
      lcdSendStringRaw("         MI         " );
      lcdGoToXY( 0, 3 );
      lcdSendStringRaw("      CONTADORA     ");
      //lcdData(0);

      // lcdData(1);

      // lcdData(2);
      break;

   case PANTALLA_PRINCIPAL_TEMP:
      lcdClear(); // Borrar la pantalla
      lcdGoToXY( 0, 0 );
      lcdSendStringRaw( "pantalla a" );

      break;

   case PANTALLA_PRINCIPAL_SD:
      lcdClear(); // Borrar la pantalla
      lcdGoToXY( 0, 0 );
      lcdSendStringRaw( "pantalla a" );

      break;

   case RETIRAR_SD:
      lcdClear(); // Borrar la pantalla
      lcdGoToXY( 0, 0 );
      lcdSendStringRaw( "pantalla a" );
      break;


 case CONFIGURAR_TEMP:
      lcdClear(); // Borrar la pantalla
      lcdGoToXY( 0, 0 );
      lcdSendStringRaw( "pantalla a" );
      break;

 case CONTROLANDO:
      lcdClear(); // Borrar la pantalla
      lcdGoToXY( 0, 0 );
      lcdSendStringRaw( "pantalla a" );
      break;


   } // llave el switch

   return;

}//llave enviar_pantalla