
/*==================[inlcusiones]============================================*/

#include "sapi.h"        // <= Biblioteca sAPI
#include "Main_camara.h"

// Definir caracteres personalizados: https://omerk.github.io/lcdchargen/

// Caracter personalizado carita feliz :)
const char smile[8] = {
   0b00000000,
   0b00001010,
   0b00001010,
   0b00001010,
   0b00000000,
   0b00010001,
   0b00001110,
   0b00000000,
};

// Caracter personalizado letra e
const char e_char[8] = {
   0b01110,
   0b10000,
   0b10000,
   0b01100,
   0b01000,
   0b10000,
   0b10001,
   0b01110
};

// Caracter personalizado letra r
const char r_char[8] = {
   0b00000,
   0b00000,
   0b00000,
   0b01110,
   0b01000,
   0b01000,
   0b01000,
   0b01000
};

// Caracter personalizado letra i
const char i_char[8] = {
   0b00000,
   0b00100,
   0b00000,
   0b00100,
   0b00100,
   0b00100,
   0b00100,
   0b00110
};

// Caracter personalizado letra c
const char c_char[8] = {
   0b00000,
   0b00000,
   0b00000,
   0b00110,
   0b01000,
   0b01000,
   0b01001,
   0b00110
};

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

// Viento
const char vieChar[8] = {
   0b00111,
   0b11100,
   0b00000,
   0b00111,
   0b11100,
   0b00000,
   0b00111,
   0b11100
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


void Enviar_Pantalla(uint16_t pantalla)
{

   switch (pantalla) {
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



   } // llave el switch

   return;

}//llave enviar_pantalla