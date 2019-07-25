/*=============================================================================
 * Copyright (c) 2019, Juan Pablo Catoggio <electrosaab@hotmail.com>
 * All rights reserved.
 * License: bsd-3-clause (see LICENSE.txt)
 * Date: 2019/07/15
 * Version: v001
 *===========================================================================*/
//DEFINES (PREGUNTAR EN DONDE VAN CORRECTAMENTE)
#define BIENVENIDO                0
#define PANTALLA_PRINCIPAL_TEMP   1
#define PANTALLA_PRINCIPAL_SD     2
#define CONFIGURAR_TEMP           3
#define RETIRAR_SD                4
#define CONTROLANDO               5 


/*=====[Avoid multiple inclusion - begin]====================================*/

#ifndef __CAMARA_H__
#define __CAMARA_H__

/*=====[Inclusions of public function dependencies]==========================*/

#include <stdint.h>
#include <stddef.h>
#include "LCD_camara.h"
/*=====[C++ - begin]=========================================================*/

#ifdef __cplusplus
extern "C" {
#endif

/*=====[Definition macros of public constants]===============================*/

/*=====[Public function-like macros]=========================================*/

/*=====[Definitions of public data types]====================================*/

/*=====[Prototypes (declarations) of public functions]=======================*/

/*=====[Prototypes (declarations) of public interrupt functions]=============*/

/*=====[C++ - end]===========================================================*/

#ifdef __cplusplus
}
#endif

/*=====[Avoid multiple inclusion - end]======================================*/

#endif /* __CAMARA_H__ */
