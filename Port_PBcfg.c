 /******************************************************************************
 *
 * Module: Port
 *
 * File Name: Port_PBcfg.c
 *
 * Description: Post Build Configuration Source file for TM4C123GH6PM Microcontroller - Port Driver
 *
 * Author: Mustafa Elsayad
 ******************************************************************************/

#include "Port.h"

/*
 * Module Version 1.0.0
 */
#define PORT_PBCFG_SW_MAJOR_VERSION              (1U)
#define PORT_PBCFG_SW_MINOR_VERSION              (0U)
#define PORT_PBCFG_SW_PATCH_VERSION              (0U)

/*
 * AUTOSAR Version 4.0.3
 */
#define PORT_PBCFG_AR_RELEASE_MAJOR_VERSION     (4U)
#define PORT_PBCFG_AR_RELEASE_MINOR_VERSION     (0U)
#define PORT_PBCFG_AR_RELEASE_PATCH_VERSION     (3U)

/* AUTOSAR Version checking between Port_PBcfg.c and Port.h files */
#if ((PORT_PBCFG_AR_RELEASE_MAJOR_VERSION != PORT_AR_RELEASE_MAJOR_VERSION)\
 ||  (PORT_PBCFG_AR_RELEASE_MINOR_VERSION != PORT_AR_RELEASE_MINOR_VERSION)\
 ||  (PORT_PBCFG_AR_RELEASE_PATCH_VERSION != PORT_AR_RELEASE_PATCH_VERSION))
  #error "The AR version of PBcfg.c does not match the expected version"
#endif

/* Software Version checking between Port_PBcfg.c and Port.h files */
#if ((PORT_PBCFG_SW_MAJOR_VERSION != PORT_SW_MAJOR_VERSION)\
 ||  (PORT_PBCFG_SW_MINOR_VERSION != PORT_SW_MINOR_VERSION)\
 ||  (PORT_PBCFG_SW_PATCH_VERSION != PORT_SW_PATCH_VERSION))
  #error "The SW version of PBcfg.c does not match the expected version"
#endif

/* PB structure used with Port_Init API */
const Port_ConfigType Port_Configuration = 
{
PortConf_PORT_A,PortConf_PORT_A_PIN_0,PORT_PIN_IN,PORT_PIN_LEVEL_LOW,OFF,PORT_PIN_MODE_DIO,STD_ON,STD_ON,
PortConf_PORT_A,PortConf_PORT_A_PIN_1,PORT_PIN_IN,PORT_PIN_LEVEL_LOW,OFF,PORT_PIN_MODE_DIO,STD_ON,STD_ON,
PortConf_PORT_A,PortConf_PORT_A_PIN_2,PORT_PIN_IN,PORT_PIN_LEVEL_LOW,OFF,PORT_PIN_MODE_DIO,STD_ON,STD_ON,
PortConf_PORT_A,PortConf_PORT_A_PIN_3,PORT_PIN_IN,PORT_PIN_LEVEL_LOW,OFF,PORT_PIN_MODE_DIO,STD_ON,STD_ON,
PortConf_PORT_A,PortConf_PORT_A_PIN_4,PORT_PIN_IN,PORT_PIN_LEVEL_LOW,OFF,PORT_PIN_MODE_DIO,STD_ON,STD_ON,
PortConf_PORT_A,PortConf_PORT_A_PIN_5,PORT_PIN_IN,PORT_PIN_LEVEL_LOW,OFF,PORT_PIN_MODE_DIO,STD_ON,STD_ON,
PortConf_PORT_A,PortConf_PORT_A_PIN_6,PORT_PIN_IN,PORT_PIN_LEVEL_LOW,OFF,PORT_PIN_MODE_DIO,STD_OFF,STD_OFF,
PortConf_PORT_A,PortConf_PORT_A_PIN_7,PORT_PIN_IN,PORT_PIN_LEVEL_LOW,OFF,PORT_PIN_MODE_DIO,STD_ON,STD_ON,

PortConf_PORT_B,PortConf_PORT_B_PIN_0,PORT_PIN_IN,PORT_PIN_LEVEL_LOW,OFF,PORT_PIN_MODE_DIO,STD_ON,STD_ON,
PortConf_PORT_B,PortConf_PORT_B_PIN_1,PORT_PIN_IN,PORT_PIN_LEVEL_LOW,OFF,PORT_PIN_MODE_DIO,STD_ON,STD_ON,
PortConf_PORT_B,PortConf_PORT_B_PIN_2,PORT_PIN_IN,PORT_PIN_LEVEL_LOW,OFF,PORT_PIN_MODE_DIO,STD_ON,STD_ON,
PortConf_PORT_B,PortConf_PORT_B_PIN_3,PORT_PIN_IN,PORT_PIN_LEVEL_LOW,OFF,PORT_PIN_MODE_DIO,STD_ON,STD_ON,
PortConf_PORT_B,PortConf_PORT_B_PIN_4,PORT_PIN_IN,PORT_PIN_LEVEL_LOW,OFF,PORT_PIN_MODE_DIO,STD_ON,STD_ON,
PortConf_PORT_B,PortConf_PORT_B_PIN_5,PORT_PIN_IN,PORT_PIN_LEVEL_LOW,OFF,PORT_PIN_MODE_DIO,STD_ON,STD_ON,
PortConf_PORT_B,PortConf_PORT_B_PIN_6,PORT_PIN_IN,PORT_PIN_LEVEL_LOW,OFF,PORT_PIN_MODE_DIO,STD_ON,STD_ON,
PortConf_PORT_B,PortConf_PORT_B_PIN_7,PORT_PIN_IN,PORT_PIN_LEVEL_LOW,OFF,PORT_PIN_MODE_DIO,STD_ON,STD_ON,

PortConf_PORT_C,PortConf_PORT_C_PIN_0,PORT_PIN_IN,PORT_PIN_LEVEL_LOW,OFF,PORT_PIN_MODE_DIO,STD_ON,STD_ON,
PortConf_PORT_C,PortConf_PORT_C_PIN_1,PORT_PIN_IN,PORT_PIN_LEVEL_LOW,OFF,PORT_PIN_MODE_DIO,STD_ON,STD_ON,
PortConf_PORT_C,PortConf_PORT_C_PIN_2,PORT_PIN_IN,PORT_PIN_LEVEL_LOW,OFF,PORT_PIN_MODE_DIO,STD_ON,STD_ON,
PortConf_PORT_C,PortConf_PORT_C_PIN_3,PORT_PIN_IN,PORT_PIN_LEVEL_LOW,OFF,PORT_PIN_MODE_DIO,STD_ON,STD_ON,
PortConf_PORT_C,PortConf_PORT_C_PIN_4,PORT_PIN_IN,PORT_PIN_LEVEL_LOW,OFF,PORT_PIN_MODE_DIO,STD_ON,STD_ON,
PortConf_PORT_C,PortConf_PORT_C_PIN_5,PORT_PIN_IN,PORT_PIN_LEVEL_LOW,OFF,PORT_PIN_MODE_DIO,STD_ON,STD_ON,
PortConf_PORT_C,PortConf_PORT_C_PIN_6,PORT_PIN_IN,PORT_PIN_LEVEL_LOW,OFF,PORT_PIN_MODE_DIO,STD_ON,STD_ON,
PortConf_PORT_C,PortConf_PORT_C_PIN_7,PORT_PIN_IN,PORT_PIN_LEVEL_LOW,OFF,PORT_PIN_MODE_DIO,STD_ON,STD_ON,

PortConf_PORT_D,PortConf_PORT_D_PIN_0,PORT_PIN_IN,PORT_PIN_LEVEL_LOW,OFF,PORT_PIN_MODE_DIO,STD_ON,STD_ON,
PortConf_PORT_D,PortConf_PORT_D_PIN_1,PORT_PIN_IN,PORT_PIN_LEVEL_LOW,OFF,PORT_PIN_MODE_DIO,STD_ON,STD_ON,
PortConf_PORT_D,PortConf_PORT_D_PIN_2,PORT_PIN_IN,PORT_PIN_LEVEL_LOW,OFF,PORT_PIN_MODE_DIO,STD_ON,STD_ON,
PortConf_PORT_D,PortConf_PORT_D_PIN_3,PORT_PIN_IN,PORT_PIN_LEVEL_LOW,OFF,PORT_PIN_MODE_DIO,STD_ON,STD_ON,
PortConf_PORT_D,PortConf_PORT_D_PIN_4,PORT_PIN_IN,PORT_PIN_LEVEL_LOW,OFF,PORT_PIN_MODE_DIO,STD_ON,STD_ON,
PortConf_PORT_D,PortConf_PORT_D_PIN_5,PORT_PIN_IN,PORT_PIN_LEVEL_LOW,OFF,PORT_PIN_MODE_DIO,STD_ON,STD_ON,
PortConf_PORT_D,PortConf_PORT_D_PIN_6,PORT_PIN_IN,PORT_PIN_LEVEL_LOW,OFF,PORT_PIN_MODE_DIO,STD_ON,STD_ON,
PortConf_PORT_D,PortConf_PORT_D_PIN_7,PORT_PIN_IN,PORT_PIN_LEVEL_LOW,OFF,PORT_PIN_MODE_DIO,STD_ON,STD_ON,

PortConf_PORT_E,PortConf_PORT_E_PIN_0,PORT_PIN_IN,PORT_PIN_LEVEL_LOW,OFF,PORT_PIN_MODE_DIO,STD_ON,STD_ON,
PortConf_PORT_E,PortConf_PORT_E_PIN_1,PORT_PIN_IN,PORT_PIN_LEVEL_LOW,OFF,PORT_PIN_MODE_DIO,STD_ON,STD_ON,
PortConf_PORT_E,PortConf_PORT_E_PIN_2,PORT_PIN_IN,PORT_PIN_LEVEL_LOW,OFF,PORT_PIN_MODE_DIO,STD_ON,STD_ON,
PortConf_PORT_E,PortConf_PORT_E_PIN_3,PORT_PIN_IN,PORT_PIN_LEVEL_LOW,OFF,PORT_PIN_MODE_DIO,STD_ON,STD_ON,
PortConf_PORT_E,PortConf_PORT_E_PIN_4,PORT_PIN_IN,PORT_PIN_LEVEL_LOW,OFF,PORT_PIN_MODE_DIO,STD_ON,STD_ON,
PortConf_PORT_E,PortConf_PORT_E_PIN_5,PORT_PIN_IN,PORT_PIN_LEVEL_LOW,OFF,PORT_PIN_MODE_DIO,STD_ON,STD_ON,

PortConf_PORT_F,PortConf_PORT_F_PIN_0,PORT_PIN_IN,PORT_PIN_LEVEL_LOW,OFF,PORT_PIN_MODE_DIO,STD_ON,STD_ON,
PortConf_PORT_F,PortConf_PORT_F_PIN_1,PORT_PIN_OUT,PORT_PIN_LEVEL_LOW,OFF,PORT_PIN_MODE_DIO,STD_OFF,STD_OFF, /*LED_1*/
PortConf_PORT_F,PortConf_PORT_F_PIN_2,PORT_PIN_IN,PORT_PIN_LEVEL_LOW,OFF,PORT_PIN_MODE_DIO,STD_ON,STD_ON,
PortConf_PORT_F,PortConf_PORT_F_PIN_3,PORT_PIN_IN,PORT_PIN_LEVEL_LOW,OFF,PORT_PIN_MODE_DIO,STD_ON,STD_ON,
PortConf_PORT_F,PortConf_PORT_F_PIN_4,PORT_PIN_IN,PORT_PIN_LEVEL_LOW,PULL_UP,PORT_PIN_MODE_DIO,STD_ON,STD_ON,/*SW1*/
};

