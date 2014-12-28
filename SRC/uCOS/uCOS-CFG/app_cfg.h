/*
*********************************************************************************************************
*                                              EXAMPLE CODE
*
*                          (c) Copyright 2003-2006; Micrium, Inc.; Weston, FL
*
*               All rights reserved.  Protected by international copyright laws.
*               Knowledge of the source code may NOT be used to develop a similar product.
*               Please help us continue to provide the Embedded community with the finest
*               software available.  Your honesty is greatly appreciated.
*********************************************************************************************************
*/

/*
*********************************************************************************************************
*
*                                       APPLICATION CONFIGURATION
*
*                                              NXP LPC2138
*                                                on the
*                                     IAR LPC2138-SK Evaluation Board
*
* Filename      : app_cfg.h
* Version       : V1.00
* Programmer(s) : JJL
*********************************************************************************************************
*/

#ifndef  __APP_CFG_H__
#define  __APP_CFG_H__

/*
*********************************************************************************************************
*                                       ADDITIONAL uC/MODULE ENABLES
*********************************************************************************************************
*/

#define  uC_LCD_MODULE                   DEF_ENABLED            /* DEF_ENABLED = Present, DEF_DISABLED = Not Present        */
#define  uC_PROBE_OS_PLUGIN              DEF_ENABLED
#define  uC_PROBE_COM_MODULE             DEF_ENABLED

/*
*********************************************************************************************************
*                                            TASK PRIORITIES
*********************************************************************************************************
*/

#define  APP_TASK_START_PRIO                   5
#define  APP_TASK_USER_IF_PRIO                 6
#define  APP_TASK_KBD_PRIO                     7

#define  OS_PROBE_TASK_PRIO                    8
#define  OS_PROBE_TASK_ID                      8

#define  APP_TASK_PROBE_STR_PRIO               9

#define  OS_TASK_TMR_PRIO              (OS_LOWEST_PRIO - 2)

/*
*********************************************************************************************************
*                                            TASK STACK SIZES
*********************************************************************************************************
*/

#define  APP_TASK_START_STK_SIZE             256
#define  APP_TASK_USER_IF_STK_SIZE           256
#define  APP_TASK_KBD_STK_SIZE               256

#define  OS_PROBE_TASK_STK_SIZE              256

#define  APP_TASK_PROBE_STR_STK_SIZE         256

/*
*********************************************************************************************************
*                               uC/Probe plug-in for uC/OS-II CONFIGURATION
*********************************************************************************************************
*/

#define  OS_PROBE_TASK                         1                /* Task will be created for uC/Probe OS Plug-In             */
#define  OS_PROBE_TMR_32_BITS                  1                /* uC/Probe OS Plug-In timer is a 32-bit timer              */
#define  OS_PROBE_HOOKS_EN                     1                /* Hooks to update OS_TCB profiling members will be included*/

/*
*********************************************************************************************************
*                                          uC/LCD CONFIGURATION
*********************************************************************************************************
*/

#define  DISP_BUS_WIDTH                        4                /* LCD controller is accessed with a 4 bit bus              */

/*
*********************************************************************************************************
*                                      uC/OS-II DCC CONFIGURATION
*********************************************************************************************************
*/

#define  OS_CPU_ARM_DCC_EN                     0




#endif
