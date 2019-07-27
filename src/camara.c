

#include "sapi.h"        // <= Biblioteca sAPI
#include "Main_camara.h"
#include "LCD_camara.h"
#include "camara.h"





int estado_camara;
 

void Inicializar_Camara (void)
{
   estado_camara = MOSTRANDO_BIENVENIDO;

   pantalla_f = 0;

   return;

}


void camara (void)

{
   if(estado_camara > ESTADO_MAXIMO_CAMARA) Inicializar_Camara();

   switch (estado_camara) {
   case MOSTRANDO_BIENVENIDO:

      //hacer retardo3 segundos
      pantalla_f = BIENVENIDO;

      break;

   case CONTROLANDO:


      break;

   case RETIRAR_SD:


      break;



   }//llave switch maestro

   return;


}//llave funcion