#include "sapi.h"        // <= Biblioteca sAPI
#include "Main_camara.h"
#include "LCD_camara.h"

//deberia programar el main, donde solamente haya una MEF, 
//dentro de un while infinito actualizando la pantalla actual



 
 int main ()
{
   boardInit();
   
   while (1)
   {

	
	switch (pantalla_f)
   	{
   	case BIENVENIDO:

   		Enviar_Pantalla(BIENVENIDO);

   		break;

   	case  PANTALLA_PRINCIPAL_TEMP:

   		Enviar_Pantalla( PANTALLA_PRINCIPAL_TEMP);

    break;


   	case PANTALLA_PRINCIPAL_SD:
   	      Enviar_Pantalla(PANTALLA_PRINCIPAL_SD);

    break;

   	case RETIRAR_SD:

   		  Enviar_Pantalla(RETIRAR_SD);
    break;

	case CONFIGURAR_TEMP:

   		  Enviar_Pantalla(CONFIGURAR_TEMP);
    break;

	case CONTROLANDO:

   		  Enviar_Pantalla(CONTROLANDO);
    break;

   	}

   }

   return 0;
}
 
 
 
 
