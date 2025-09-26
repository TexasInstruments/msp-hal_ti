/*****************************************************************************

  Copyright (C) 2025 Texas Instruments Incorporated - http://www.ti.com/ 

  Redistribution and use in source and binary forms, with or without 
  modification, are permitted provided that the following conditions 
  are met:

   Redistributions of source code must retain the above copyright 
   notice, this list of conditions and the following disclaimer.

   Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the 
   documentation and/or other materials provided with the   
   distribution.

   Neither the name of Texas Instruments Incorporated nor the names of
   its contributors may be used to endorse or promote products derived
   from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS 
  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT 
  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
  A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT 
  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, 
  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT 
  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT 
  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE 
  OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

*****************************************************************************/

#ifndef ti_devices_msp_peripherals_hw_eventmanager__include
#define ti_devices_msp_peripherals_hw_eventmanager__include

/* Filename: hw_eventmanager.h */
/* Revised: 2025-04-09 13:57:08 */
/* Revision: f4602b816b1643a266cc7aae6be755d35f394359 */

#ifndef __CORTEX_M
  #ifdef __cplusplus
    #define __I  volatile        /*!< Defines 'read only' permissions */
  #else
    #define __I  volatile const  /*!< Defines 'read only' permissions */
  #endif
  #define __O  volatile          /*!< Defines 'write only' permissions */
  #define __IO  volatile         /*!< Defines 'read / write' permissions */

  /* following defines should be used for structure members */
  #define __IM  volatile const   /*! Defines 'read only' structure member permissions */
  #define __OM  volatile         /*! Defines 'write only' structure member permissions */
  #define __IOM  volatile        /*! Defines 'read / write' structure member permissions */
#endif

/* Use standard integer types with explicit width */
#include <stdint.h>

#ifdef __cplusplus
 extern "C" {
#endif

#if defined ( __CC_ARM )
#pragma anon_unions
#endif

/******************************************************************************
* EVENTMANAGER Registers
******************************************************************************/
#define EVENTMANAGER_IMPEXPCFG_IMPORT_OFS        ((uint32_t)0x00002200U)
#define EVENTMANAGER_IMPEXPCFG_EXPORT_OFS        ((uint32_t)0x00002000U)
#define EVENTMANAGER_IMPEXPCFG_OFS               ((uint32_t)0x00002000U)
#define EVENTMANAGER_SECCFG_CPU_CONNECT_OFS      ((uint32_t)0x00001300U)
#define EVENTMANAGER_SECCFG_IMPORT_OFS           ((uint32_t)0x00001280U)
#define EVENTMANAGER_SECCFG_EXPORT_OFS           ((uint32_t)0x00001200U)
#define EVENTMANAGER_SECCFG_FPUB_OFS             ((uint32_t)0x00001180U)
#define EVENTMANAGER_SECCFG_FSUB_OFS             ((uint32_t)0x00001100U)
#define EVENTMANAGER_SECCFG_OFS                  ((uint32_t)0x00001000U)
#define EVENTMANAGER_PUBCFG_CPU_CONNECT_OFS      ((uint32_t)0x00000900U)
#define EVENTMANAGER_PUBCFG_IMPORT_OFS           ((uint32_t)0x00000700U)
#define EVENTMANAGER_PUBCFG_EXPORT_OFS           ((uint32_t)0x00000500U)
#define EVENTMANAGER_PUBCFG_FPUB_OFS             ((uint32_t)0x00000300U)
#define EVENTMANAGER_PUBCFG_FSUB_OFS             ((uint32_t)0x00000100U)
#define EVENTMANAGER_PUBCFG_OFS                  ((uint32_t)0x00000000U)


/** @addtogroup EVENTMANAGER_IMPEXPCFG_IMPORT
  @{
*/

typedef struct {
  __IO uint32_t PORT;                              /* !< (@ 0x00002200) Import channel ID registe */
} EVENTMANAGER_IMPEXPCFG_IMPORT_Regs;

/*@}*/ /* end of group EVENTMANAGER_IMPEXPCFG_IMPORT */

/** @addtogroup EVENTMANAGER_IMPEXPCFG_EXPORT
  @{
*/

typedef struct {
  __IO uint32_t PORT;                              /* !< (@ 0x00002000) Export channel ID register */
} EVENTMANAGER_IMPEXPCFG_EXPORT_Regs;

/*@}*/ /* end of group EVENTMANAGER_IMPEXPCFG_EXPORT */

/** @addtogroup EVENTMANAGER_IMPEXPCFG
  @{
*/

typedef struct {
  EVENTMANAGER_IMPEXPCFG_EXPORT_Regs  EXPORT[128];                       /* !< (@ 0x00002000) */
  EVENTMANAGER_IMPEXPCFG_IMPORT_Regs  IMPORT[128];                       /* !< (@ 0x00002200) */
} EVENTMANAGER_IMPEXPCFG_Regs;

/*@}*/ /* end of group EVENTMANAGER_IMPEXPCFG */

/** @addtogroup EVENTMANAGER_SECCFG_CPU_CONNECT
  @{
*/

typedef struct {
  __IO uint8_t CPU_NUM[256];                      /* !< (@ 0x00001300) CPU connect register */
} EVENTMANAGER_SECCFG_CPU_CONNECT_Regs;

/*@}*/ /* end of group EVENTMANAGER_SECCFG_CPU_CONNECT */

/** @addtogroup EVENTMANAGER_SECCFG_IMPORT
  @{
*/

typedef struct {
  __IO uint8_t PORT[128];                         /* !< (@ 0x00001280) Import channel ID registe */
} EVENTMANAGER_SECCFG_IMPORT_Regs;

/*@}*/ /* end of group EVENTMANAGER_SECCFG_IMPORT */

/** @addtogroup EVENTMANAGER_SECCFG_EXPORT
  @{
*/

typedef struct {
  __IO uint8_t PORT[128];                         /* !< (@ 0x00001200) Export channel ID register */
} EVENTMANAGER_SECCFG_EXPORT_Regs;

/*@}*/ /* end of group EVENTMANAGER_SECCFG_EXPORT */

/** @addtogroup EVENTMANAGER_SECCFG_FPUB
  @{
*/

typedef struct {
  __IO uint8_t PORT[128];                         /* !< (@ 0x00001180) Publisher channel ID register */
} EVENTMANAGER_SECCFG_FPUB_Regs;

/*@}*/ /* end of group EVENTMANAGER_SECCFG_FPUB */

/** @addtogroup EVENTMANAGER_SECCFG_FSUB
  @{
*/

typedef struct {
  __IO uint8_t PORT[128];                         /* !< (@ 0x00001100) Subscriber channel ID register */
} EVENTMANAGER_SECCFG_FSUB_Regs;

/*@}*/ /* end of group EVENTMANAGER_SECCFG_FSUB */

/** @addtogroup EVENTMANAGER_SECCFG
  @{
*/

typedef struct {
       uint32_t RESERVED0[62];
  __I  uint32_t DESC_EX;                           /* !< (@ 0x000010F8) Extended Module Description */
  __I  uint32_t DESC;                              /* !< (@ 0x000010FC) Module Description */
  EVENTMANAGER_SECCFG_FSUB_Regs  FSUB;                              /* !< (@ 0x00001100) */
  EVENTMANAGER_SECCFG_FPUB_Regs  FPUB;                              /* !< (@ 0x00001180) */
  EVENTMANAGER_SECCFG_EXPORT_Regs  EXPORT;                            /* !< (@ 0x00001200) */
  EVENTMANAGER_SECCFG_IMPORT_Regs  IMPORT;                            /* !< (@ 0x00001280) */
  EVENTMANAGER_SECCFG_CPU_CONNECT_Regs  CPU_CONNECT;                       /* !< (@ 0x00001300) */
  __IO uint8_t CTL;                               /* !< (@ 0x00001400) Event Manager control register */
} EVENTMANAGER_SECCFG_Regs;

/*@}*/ /* end of group EVENTMANAGER_SECCFG */

/** @addtogroup EVENTMANAGER_PUBCFG_CPU_CONNECT
  @{
*/

typedef struct {
  __IO uint32_t CPU_NUM[256];                      /* !< (@ 0x00000900) CPU connect register */
} EVENTMANAGER_PUBCFG_CPU_CONNECT_Regs;

/*@}*/ /* end of group EVENTMANAGER_PUBCFG_CPU_CONNECT */

/** @addtogroup EVENTMANAGER_PUBCFG_IMPORT
  @{
*/

typedef struct {
  __IO uint32_t PORT[128];                         /* !< (@ 0x00000700) Import channel ID registe */
} EVENTMANAGER_PUBCFG_IMPORT_Regs;

/*@}*/ /* end of group EVENTMANAGER_PUBCFG_IMPORT */

/** @addtogroup EVENTMANAGER_PUBCFG_EXPORT
  @{
*/

typedef struct {
  __IO uint32_t PORT[128];                         /* !< (@ 0x00000500) Export channel ID register */
} EVENTMANAGER_PUBCFG_EXPORT_Regs;

/*@}*/ /* end of group EVENTMANAGER_PUBCFG_EXPORT */

/** @addtogroup EVENTMANAGER_PUBCFG_FPUB
  @{
*/

typedef struct {
  __IO uint32_t PORT[128];                         /* !< (@ 0x00000300) Publisher channel ID register */
} EVENTMANAGER_PUBCFG_FPUB_Regs;

/*@}*/ /* end of group EVENTMANAGER_PUBCFG_FPUB */

/** @addtogroup EVENTMANAGER_PUBCFG_FSUB
  @{
*/

typedef struct {
  __IO uint32_t PORT[128];                         /* !< (@ 0x00000100) Subscriber channel ID register */
} EVENTMANAGER_PUBCFG_FSUB_Regs;

/*@}*/ /* end of group EVENTMANAGER_PUBCFG_FSUB */

/** @addtogroup EVENTMANAGER_PUBCFG
  @{
*/

typedef struct {
       uint32_t RESERVED0[62];
  __I  uint32_t DESC_EX;                           /* !< (@ 0x000000F8) Extended Module Description */
  __I  uint32_t DESC;                              /* !< (@ 0x000000FC) Module Description */
  EVENTMANAGER_PUBCFG_FSUB_Regs  FSUB;                              /* !< (@ 0x00000100) */
  EVENTMANAGER_PUBCFG_FPUB_Regs  FPUB;                              /* !< (@ 0x00000300) */
  EVENTMANAGER_PUBCFG_EXPORT_Regs  EXPORT;                            /* !< (@ 0x00000500) */
  EVENTMANAGER_PUBCFG_IMPORT_Regs  IMPORT;                            /* !< (@ 0x00000700) */
  EVENTMANAGER_PUBCFG_CPU_CONNECT_Regs  CPU_CONNECT;                       /* !< (@ 0x00000900) */
} EVENTMANAGER_PUBCFG_Regs;

/*@}*/ /* end of group EVENTMANAGER_PUBCFG */

/** @addtogroup EVENTMANAGER
  @{
*/

typedef struct {
  EVENTMANAGER_PUBCFG_Regs  PUBCFG;                            /* !< (@ 0x00000000) */
       uint32_t RESERVED0[192];
  EVENTMANAGER_SECCFG_Regs  SECCFG;                            /* !< (@ 0x00001000) */
       uint8_t  RESERVED1[3071];
  EVENTMANAGER_IMPEXPCFG_Regs  IMPEXPCFG;                         /* !< (@ 0x00002000) */
} EVENTMANAGER_Regs;

/*@}*/ /* end of group EVENTMANAGER */



#if defined ( __CC_ARM )
#pragma no_anon_unions
#endif

/******************************************************************************
* EVENTMANAGER Register Control Bits
******************************************************************************/

/* EVENTMANAGER_IMPEXPCFG_IMPORT_PORT Bits */
/* EVENTMANAGER_IMPEXPCFG_IMPORT_PORT[CHANID] Bits */
#define EVENTMANAGER_IMPEXPCFG_IMPORT_PORT_CHANID_OFS (0)                             /* !< CHANID Offset */
#define EVENTMANAGER_IMPEXPCFG_IMPORT_PORT_CHANID_MASK ((uint32_t)0x000000FFU)         /* !< Channel ID for import side to
                                                                                    connect to */
#define EVENTMANAGER_IMPEXPCFG_IMPORT_PORT_CHANID_MINIMUM ((uint32_t)0x00000000U)         /* !< Minimum value -- 0 has no effect */
#define EVENTMANAGER_IMPEXPCFG_IMPORT_PORT_CHANID_MAXIMUM ((uint32_t)0x000000FFU)         /* !< Maximum value -- check your device
                                                                                    datasheet for actual maximum */

/* EVENTMANAGER_IMPEXPCFG_EXPORT_PORT Bits */
/* EVENTMANAGER_IMPEXPCFG_EXPORT_PORT[CHANID] Bits */
#define EVENTMANAGER_IMPEXPCFG_EXPORT_PORT_CHANID_OFS (0)                             /* !< CHANID Offset */
#define EVENTMANAGER_IMPEXPCFG_EXPORT_PORT_CHANID_MASK ((uint32_t)0x000000FFU)         /* !< Channel ID for import side to
                                                                                    connect to */
#define EVENTMANAGER_IMPEXPCFG_EXPORT_PORT_CHANID_MINIMUM ((uint32_t)0x00000000U)         /* !< Minimum value -- 0 has no effect */
#define EVENTMANAGER_IMPEXPCFG_EXPORT_PORT_CHANID_MAXIMUM ((uint32_t)0x000000FFU)         /* !< Maximum value -- check your device
                                                                                    datasheet for actual maximum */

/* EVENTMANAGER_SECCFG_CPU_NUM Bits */
/* EVENTMANAGER_SECCFG_CPU_NUM[NWPW_CONN] Bits */
#define EVENTMANAGER_SECCFG_CPU_NUM_NWPW_CONN_OFS (0)                             /* !< NWPW_CONN Offset */
#define EVENTMANAGER_SECCFG_CPU_NUM_NWPW_CONN_MASK ((uint8_t)0x00000001U)          /* !< NWPW connect bit. */
#define EVENTMANAGER_SECCFG_CPU_NUM_NWPW_CONN_UNCONNECTED ((uint8_t)0x00000000U)          /* !< The CPU is not connected. */
#define EVENTMANAGER_SECCFG_CPU_NUM_NWPW_CONN_CONNECTED ((uint8_t)0x00000001U)          /* !< The CPU is connected. */
/* EVENTMANAGER_SECCFG_CPU_NUM[CPUSS0_CONN] Bits */
#define EVENTMANAGER_SECCFG_CPU_NUM_CPUSS0_CONN_OFS (1)                             /* !< CPUSS0_CONN Offset */
#define EVENTMANAGER_SECCFG_CPU_NUM_CPUSS0_CONN_MASK ((uint8_t)0x00000002U)          /* !< CPUSS0 connect bit. */
#define EVENTMANAGER_SECCFG_CPU_NUM_CPUSS0_CONN_UNCONNECTED ((uint8_t)0x00000000U)          /* !< The CPU is not connected. */
#define EVENTMANAGER_SECCFG_CPU_NUM_CPUSS0_CONN_CONNECTED ((uint8_t)0x00000002U)          /* !< The CPU is connected. */
/* EVENTMANAGER_SECCFG_CPU_NUM[CPUSS1_CONN] Bits */
#define EVENTMANAGER_SECCFG_CPU_NUM_CPUSS1_CONN_OFS (2)                             /* !< CPUSS1_CONN Offset */
#define EVENTMANAGER_SECCFG_CPU_NUM_CPUSS1_CONN_MASK ((uint8_t)0x00000004U)          /* !< CPUSS1 connect bit. */
#define EVENTMANAGER_SECCFG_CPU_NUM_CPUSS1_CONN_UNCONNECTED ((uint8_t)0x00000000U)          /* !< The CPU is not connected. */
#define EVENTMANAGER_SECCFG_CPU_NUM_CPUSS1_CONN_CONNECTED ((uint8_t)0x00000004U)          /* !< The CPU is connected. */
/* EVENTMANAGER_SECCFG_CPU_NUM[CPUSS2_CONN] Bits */
#define EVENTMANAGER_SECCFG_CPU_NUM_CPUSS2_CONN_OFS (3)                             /* !< CPUSS2_CONN Offset */
#define EVENTMANAGER_SECCFG_CPU_NUM_CPUSS2_CONN_MASK ((uint8_t)0x00000008U)          /* !< CPUSS2 connect bit. */
#define EVENTMANAGER_SECCFG_CPU_NUM_CPUSS2_CONN_UNCONNECTED ((uint8_t)0x00000000U)          /* !< The CPU is not connected. */
#define EVENTMANAGER_SECCFG_CPU_NUM_CPUSS2_CONN_CONNECTED ((uint8_t)0x00000008U)          /* !< The CPU is connected. */
/* EVENTMANAGER_SECCFG_CPU_NUM[CPUSS3_CONN] Bits */
#define EVENTMANAGER_SECCFG_CPU_NUM_CPUSS3_CONN_OFS (4)                             /* !< CPUSS3_CONN Offset */
#define EVENTMANAGER_SECCFG_CPU_NUM_CPUSS3_CONN_MASK ((uint8_t)0x00000010U)          /* !< CPUSS3 connect bit. */
#define EVENTMANAGER_SECCFG_CPU_NUM_CPUSS3_CONN_UNCONNECTED ((uint8_t)0x00000000U)          /* !< The CPU is not connected. */
#define EVENTMANAGER_SECCFG_CPU_NUM_CPUSS3_CONN_CONNECTED ((uint8_t)0x00000010U)          /* !< The CPU is connected. */
/* EVENTMANAGER_SECCFG_CPU_NUM[CPUSS4_CONN] Bits */
#define EVENTMANAGER_SECCFG_CPU_NUM_CPUSS4_CONN_OFS (5)                             /* !< CPUSS4_CONN Offset */
#define EVENTMANAGER_SECCFG_CPU_NUM_CPUSS4_CONN_MASK ((uint8_t)0x00000020U)          /* !< CPUSS4 connect bit. */
#define EVENTMANAGER_SECCFG_CPU_NUM_CPUSS4_CONN_UNCONNECTED ((uint8_t)0x00000000U)          /* !< The CPU is not connected. */
#define EVENTMANAGER_SECCFG_CPU_NUM_CPUSS4_CONN_CONNECTED ((uint8_t)0x00000020U)          /* !< The CPU is connected. */
/* EVENTMANAGER_SECCFG_CPU_NUM[CPUSS5_CONN] Bits */
#define EVENTMANAGER_SECCFG_CPU_NUM_CPUSS5_CONN_OFS (6)                             /* !< CPUSS5_CONN Offset */
#define EVENTMANAGER_SECCFG_CPU_NUM_CPUSS5_CONN_MASK ((uint8_t)0x00000040U)          /* !< CPUSS5 connect bit. */
#define EVENTMANAGER_SECCFG_CPU_NUM_CPUSS5_CONN_UNCONNECTED ((uint8_t)0x00000000U)          /* !< The CPU is not connected. */
#define EVENTMANAGER_SECCFG_CPU_NUM_CPUSS5_CONN_CONNECTED ((uint8_t)0x00000040U)          /* !< The CPU is connected. */
/* EVENTMANAGER_SECCFG_CPU_NUM[CPUSS6_CONN] Bits */
#define EVENTMANAGER_SECCFG_CPU_NUM_CPUSS6_CONN_OFS (7)                             /* !< CPUSS6_CONN Offset */
#define EVENTMANAGER_SECCFG_CPU_NUM_CPUSS6_CONN_MASK ((uint8_t)0x00000080U)          /* !< CPUSS6 connect bit. */
#define EVENTMANAGER_SECCFG_CPU_NUM_CPUSS6_CONN_UNCONNECTED ((uint8_t)0x00000000U)          /* !< The CPU is not connected. */
#define EVENTMANAGER_SECCFG_CPU_NUM_CPUSS6_CONN_CONNECTED ((uint8_t)0x00000080U)          /* !< The CPU is connected. */

/* EVENTMANAGER_SECCFG_IMPORT_PORT Bits */
/* EVENTMANAGER_SECCFG_IMPORT_PORT[CHANID] Bits */
#define EVENTMANAGER_SECCFG_IMPORT_PORT_CHANID_OFS (0)                             /* !< CHANID Offset */
#define EVENTMANAGER_SECCFG_IMPORT_PORT_CHANID_MASK ((uint8_t)0x000000FFU)          /* !< Channel ID for import side to
                                                                                    connect to */
#define EVENTMANAGER_SECCFG_IMPORT_PORT_CHANID_MINIMUM ((uint8_t)0x00000000U)          /* !< Minimum value -- 0 has no effect */
#define EVENTMANAGER_SECCFG_IMPORT_PORT_CHANID_MAXIMUM ((uint8_t)0x000000FFU)          /* !< Maximum value -- check your device
                                                                                    datasheet for actual maximum */

/* EVENTMANAGER_SECCFG_EXPORT_PORT Bits */
/* EVENTMANAGER_SECCFG_EXPORT_PORT[CHANID] Bits */
#define EVENTMANAGER_SECCFG_EXPORT_PORT_CHANID_OFS (0)                             /* !< CHANID Offset */
#define EVENTMANAGER_SECCFG_EXPORT_PORT_CHANID_MASK ((uint8_t)0x000000FFU)          /* !< Channel ID for export side to
                                                                                    connect to */
#define EVENTMANAGER_SECCFG_EXPORT_PORT_CHANID_MINIMUM ((uint8_t)0x00000000U)          /* !< Minimum value -- 0 has no effect */
#define EVENTMANAGER_SECCFG_EXPORT_PORT_CHANID_MAXIMUM ((uint8_t)0x000000FFU)          /* !< Maximum value -- check your device
                                                                                    datasheet for actual maximum */

/* EVENTMANAGER_SECCFG_FPUB_PORT Bits */
/* EVENTMANAGER_SECCFG_FPUB_PORT[CHANID] Bits */
#define EVENTMANAGER_SECCFG_FPUB_PORT_CHANID_OFS (0)                             /* !< CHANID Offset */
#define EVENTMANAGER_SECCFG_FPUB_PORT_CHANID_MASK ((uint8_t)0x000000FFU)          /* !< Channel ID for publisher to connect
                                                                                    to */
#define EVENTMANAGER_SECCFG_FPUB_PORT_CHANID_MINIMUM ((uint8_t)0x00000000U)          /* !< Minimum value -- 0 has no effect */
#define EVENTMANAGER_SECCFG_FPUB_PORT_CHANID_MAXIMUM ((uint8_t)0x000000FFU)          /* !< Maximum value -- check your device
                                                                                    datasheet for actual maximum */

/* EVENTMANAGER_SECCFG_FSUB_PORT Bits */
/* EVENTMANAGER_SECCFG_FSUB_PORT[CHANID] Bits */
#define EVENTMANAGER_SECCFG_FSUB_PORT_CHANID_OFS (0)                             /* !< CHANID Offset */
#define EVENTMANAGER_SECCFG_FSUB_PORT_CHANID_MASK ((uint8_t)0x000000FFU)          /* !< Channel ID for subscriber to
                                                                                    connect to */
#define EVENTMANAGER_SECCFG_FSUB_PORT_CHANID_MINIMUM ((uint8_t)0x00000000U)          /* !< Minimum value -- 0 has no effect */
#define EVENTMANAGER_SECCFG_FSUB_PORT_CHANID_MAXIMUM ((uint8_t)0x000000FFU)          /* !< Maximum value -- check your device
                                                                                    datasheet for actual maximum */

/* EVENTMANAGER_SECCFG_DESC_EX Bits */
/* EVENTMANAGER_SECCFG_DESC_EX[NUM_SINGLE_CHANNEL] Bits */
#define EVENTMANAGER_SECCFG_DESC_EX_NUM_SINGLE_CHANNEL_OFS (0)                             /* !< NUM_SINGLE_CHANNEL Offset */
#define EVENTMANAGER_SECCFG_DESC_EX_NUM_SINGLE_CHANNEL_MASK ((uint32_t)0x000000FFU)         /* !< Number of single channels contained
                                                                                    in this instance of event manager */
/* EVENTMANAGER_SECCFG_DESC_EX[NUM_DUAL_CHANNEL] Bits */
#define EVENTMANAGER_SECCFG_DESC_EX_NUM_DUAL_CHANNEL_OFS (8)                             /* !< NUM_DUAL_CHANNEL Offset */
#define EVENTMANAGER_SECCFG_DESC_EX_NUM_DUAL_CHANNEL_MASK ((uint32_t)0x0000FF00U)         /* !< Number of dual channels contained
                                                                                    in this instance of event manager */
/* EVENTMANAGER_SECCFG_DESC_EX[NUM_EXPORT] Bits */
#define EVENTMANAGER_SECCFG_DESC_EX_NUM_EXPORT_OFS (24)                            /* !< NUM_EXPORT Offset */
#define EVENTMANAGER_SECCFG_DESC_EX_NUM_EXPORT_MASK ((uint32_t)0xFF000000U)         /* !< Number of export ports available in
                                                                                    this EventManager instantiation */
/* EVENTMANAGER_SECCFG_DESC_EX[NUM_IMPORT] Bits */
#define EVENTMANAGER_SECCFG_DESC_EX_NUM_IMPORT_OFS (16)                            /* !< NUM_IMPORT Offset */
#define EVENTMANAGER_SECCFG_DESC_EX_NUM_IMPORT_MASK ((uint32_t)0x00FF0000U)         /* !< Number of import ports available in
                                                                                    this EventManager instantiation */

/* EVENTMANAGER_SECCFG_DESC Bits */
/* EVENTMANAGER_SECCFG_DESC[MINREV] Bits */
#define EVENTMANAGER_SECCFG_DESC_MINREV_OFS      (0)                             /* !< MINREV Offset */
#define EVENTMANAGER_SECCFG_DESC_MINREV_MASK     ((uint32_t)0x0000000FU)         /* !< Minor rev of the IP */
#define EVENTMANAGER_SECCFG_DESC_MINREV_MINIMUM  ((uint32_t)0x00000000U)         /* !< Smallest value */
#define EVENTMANAGER_SECCFG_DESC_MINREV_MAXIMUM  ((uint32_t)0x0000000FU)         /* !< Highest possible value */
/* EVENTMANAGER_SECCFG_DESC[MAJREV] Bits */
#define EVENTMANAGER_SECCFG_DESC_MAJREV_OFS      (4)                             /* !< MAJREV Offset */
#define EVENTMANAGER_SECCFG_DESC_MAJREV_MASK     ((uint32_t)0x000000F0U)         /* !< Major rev of the IP */
#define EVENTMANAGER_SECCFG_DESC_MAJREV_MINIMUM  ((uint32_t)0x00000000U)         /* !< Smallest value */
#define EVENTMANAGER_SECCFG_DESC_MAJREV_MAXIMUM  ((uint32_t)0x000000F0U)         /* !< Highest possible value */
/* EVENTMANAGER_SECCFG_DESC[INSTNUM] Bits */
#define EVENTMANAGER_SECCFG_DESC_INSTNUM_OFS     (8)                             /* !< INSTNUM Offset */
#define EVENTMANAGER_SECCFG_DESC_INSTNUM_MASK    ((uint32_t)0x00000F00U)         /* !< Instance Number within the device.
                                                                                    This will be a parameter to the RTL
                                                                                    for modules that can have multiple
                                                                                    instances */
#define EVENTMANAGER_SECCFG_DESC_INSTNUM_MINIMUM ((uint32_t)0x00000000U)         /* !< Smallest value */
#define EVENTMANAGER_SECCFG_DESC_INSTNUM_MAXIMUM ((uint32_t)0x00000F00U)         /* !< Highest possible value */
/* EVENTMANAGER_SECCFG_DESC[FEATUREVER] Bits */
#define EVENTMANAGER_SECCFG_DESC_FEATUREVER_OFS  (12)                            /* !< FEATUREVER Offset */
#define EVENTMANAGER_SECCFG_DESC_FEATUREVER_MASK ((uint32_t)0x0000F000U)         /* !< Feature Set for the module
                                                                                    *instance* */
#define EVENTMANAGER_SECCFG_DESC_FEATUREVER_MINIMUM ((uint32_t)0x00000000U)         /* !< Smallest value */
#define EVENTMANAGER_SECCFG_DESC_FEATUREVER_MAXIMUM ((uint32_t)0x0000F000U)         /* !< Highest possible value */
/* EVENTMANAGER_SECCFG_DESC[MODULEID] Bits */
#define EVENTMANAGER_SECCFG_DESC_MODULEID_OFS    (16)                            /* !< MODULEID Offset */
#define EVENTMANAGER_SECCFG_DESC_MODULEID_MASK   ((uint32_t)0xFFFF0000U)         /* !< Module identification contains a
                                                                                    unique peripheral identification
                                                                                    number. The assignments are
                                                                                    maintained in a central database for
                                                                                    all of the platform modules to ensure
                                                                                    uniqueness. */
#define EVENTMANAGER_SECCFG_DESC_MODULEID_MINIMUM ((uint32_t)0x00000000U)         /* !< Smallest value */
#define EVENTMANAGER_SECCFG_DESC_MODULEID_MAXIMUM ((uint32_t)0xFFFF0000U)         /* !< Highest possible value */

/* EVENTMANAGER_CTL Bits */
/* EVENTMANAGER_CTL[OVRWR_EN] Bits */
#define EVENTMANAGER_CTL_OVRWR_EN_OFS            (0)                             /* !< OVRWR_EN Offset */
#define EVENTMANAGER_CTL_OVRWR_EN_MASK           ((uint8_t)0x0000000FU)          /* !< Enable overwrite of config even if
                                                                                    resources are already configured. By
                                                                                    default, a configuration cannot be
                                                                                    overwritten. */
#define EVENTMANAGER_CTL_OVRWR_EN_DISABLE        ((uint8_t)0x00000005U)          /* !< Overwrite is disabled. Mode is same
                                                                                    as in UNASG aperture. */
#define EVENTMANAGER_CTL_OVRWR_EN_ENABLED        ((uint8_t)0x0000000AU)          /* !< Ovewrite is enabled */

/* EVENTMANAGER_PUBCFG_CPU_NUM Bits */
/* EVENTMANAGER_PUBCFG_CPU_NUM[NWPW_CONN] Bits */
#define EVENTMANAGER_PUBCFG_CPU_NUM_NWPW_CONN_OFS (0)                             /* !< NWPW_CONN Offset */
#define EVENTMANAGER_PUBCFG_CPU_NUM_NWPW_CONN_MASK ((uint32_t)0x00000001U)         /* !< NWPW connect bit. */
#define EVENTMANAGER_PUBCFG_CPU_NUM_NWPW_CONN_UNCONNECTED ((uint32_t)0x00000000U)         /* !< The CPU is not connected. */
#define EVENTMANAGER_PUBCFG_CPU_NUM_NWPW_CONN_CONNECTED ((uint32_t)0x00000001U)         /* !< The CPU is connected. */
/* EVENTMANAGER_PUBCFG_CPU_NUM[CPUSS0_CONN] Bits */
#define EVENTMANAGER_PUBCFG_CPU_NUM_CPUSS0_CONN_OFS (1)                             /* !< CPUSS0_CONN Offset */
#define EVENTMANAGER_PUBCFG_CPU_NUM_CPUSS0_CONN_MASK ((uint32_t)0x00000002U)         /* !< CPUSS0 connect bit. */
#define EVENTMANAGER_PUBCFG_CPU_NUM_CPUSS0_CONN_UNCONNECTED ((uint32_t)0x00000000U)         /* !< The CPU is not connected. */
#define EVENTMANAGER_PUBCFG_CPU_NUM_CPUSS0_CONN_CONNECTED ((uint32_t)0x00000002U)         /* !< The CPU is connected. */
/* EVENTMANAGER_PUBCFG_CPU_NUM[CPUSS1_CONN] Bits */
#define EVENTMANAGER_PUBCFG_CPU_NUM_CPUSS1_CONN_OFS (2)                             /* !< CPUSS1_CONN Offset */
#define EVENTMANAGER_PUBCFG_CPU_NUM_CPUSS1_CONN_MASK ((uint32_t)0x00000004U)         /* !< CPUSS1 connect bit. */
#define EVENTMANAGER_PUBCFG_CPU_NUM_CPUSS1_CONN_UNCONNECTED ((uint32_t)0x00000000U)         /* !< The CPU is not connected. */
#define EVENTMANAGER_PUBCFG_CPU_NUM_CPUSS1_CONN_CONNECTED ((uint32_t)0x00000004U)         /* !< The CPU is connected. */
/* EVENTMANAGER_PUBCFG_CPU_NUM[CPUSS2_CONN] Bits */
#define EVENTMANAGER_PUBCFG_CPU_NUM_CPUSS2_CONN_OFS (3)                             /* !< CPUSS2_CONN Offset */
#define EVENTMANAGER_PUBCFG_CPU_NUM_CPUSS2_CONN_MASK ((uint32_t)0x00000008U)         /* !< CPUSS2 connect bit. */
#define EVENTMANAGER_PUBCFG_CPU_NUM_CPUSS2_CONN_UNCONNECTED ((uint32_t)0x00000000U)         /* !< The CPU is not connected. */
#define EVENTMANAGER_PUBCFG_CPU_NUM_CPUSS2_CONN_CONNECTED ((uint32_t)0x00000008U)         /* !< The CPU is connected. */
/* EVENTMANAGER_PUBCFG_CPU_NUM[CPUSS3_CONN] Bits */
#define EVENTMANAGER_PUBCFG_CPU_NUM_CPUSS3_CONN_OFS (4)                             /* !< CPUSS3_CONN Offset */
#define EVENTMANAGER_PUBCFG_CPU_NUM_CPUSS3_CONN_MASK ((uint32_t)0x00000010U)         /* !< CPUSS3 connect bit. */
#define EVENTMANAGER_PUBCFG_CPU_NUM_CPUSS3_CONN_UNCONNECTED ((uint32_t)0x00000000U)         /* !< The CPU is not connected. */
#define EVENTMANAGER_PUBCFG_CPU_NUM_CPUSS3_CONN_CONNECTED ((uint32_t)0x00000010U)         /* !< The CPU is connected. */
/* EVENTMANAGER_PUBCFG_CPU_NUM[CPUSS4_CONN] Bits */
#define EVENTMANAGER_PUBCFG_CPU_NUM_CPUSS4_CONN_OFS (5)                             /* !< CPUSS4_CONN Offset */
#define EVENTMANAGER_PUBCFG_CPU_NUM_CPUSS4_CONN_MASK ((uint32_t)0x00000020U)         /* !< CPUSS4 connect bit. */
#define EVENTMANAGER_PUBCFG_CPU_NUM_CPUSS4_CONN_UNCONNECTED ((uint32_t)0x00000000U)         /* !< The CPU is not connected. */
#define EVENTMANAGER_PUBCFG_CPU_NUM_CPUSS4_CONN_CONNECTED ((uint32_t)0x00000020U)         /* !< The CPU is connected. */
/* EVENTMANAGER_PUBCFG_CPU_NUM[CPUSS5_CONN] Bits */
#define EVENTMANAGER_PUBCFG_CPU_NUM_CPUSS5_CONN_OFS (6)                             /* !< CPUSS5_CONN Offset */
#define EVENTMANAGER_PUBCFG_CPU_NUM_CPUSS5_CONN_MASK ((uint32_t)0x00000040U)         /* !< CPUSS5 connect bit. */
#define EVENTMANAGER_PUBCFG_CPU_NUM_CPUSS5_CONN_UNCONNECTED ((uint32_t)0x00000000U)         /* !< The CPU is not connected. */
#define EVENTMANAGER_PUBCFG_CPU_NUM_CPUSS5_CONN_CONNECTED ((uint32_t)0x00000040U)         /* !< The CPU is connected. */
/* EVENTMANAGER_PUBCFG_CPU_NUM[CPUSS6_CONN] Bits */
#define EVENTMANAGER_PUBCFG_CPU_NUM_CPUSS6_CONN_OFS (7)                             /* !< CPUSS6_CONN Offset */
#define EVENTMANAGER_PUBCFG_CPU_NUM_CPUSS6_CONN_MASK ((uint32_t)0x00000080U)         /* !< CPUSS6 connect bit. */
#define EVENTMANAGER_PUBCFG_CPU_NUM_CPUSS6_CONN_UNCONNECTED ((uint32_t)0x00000000U)         /* !< The CPU is not connected. */
#define EVENTMANAGER_PUBCFG_CPU_NUM_CPUSS6_CONN_CONNECTED ((uint32_t)0x00000080U)         /* !< The CPU is connected. */

/* EVENTMANAGER_PUBCFG_IMPORT_PORT Bits */
/* EVENTMANAGER_PUBCFG_IMPORT_PORT[CHANID] Bits */
#define EVENTMANAGER_PUBCFG_IMPORT_PORT_CHANID_OFS (0)                             /* !< CHANID Offset */
#define EVENTMANAGER_PUBCFG_IMPORT_PORT_CHANID_MASK ((uint32_t)0x000000FFU)         /* !< Channel ID for import side to
                                                                                    connect to */
#define EVENTMANAGER_PUBCFG_IMPORT_PORT_CHANID_MINIMUM ((uint32_t)0x00000000U)         /* !< Minimum value -- 0 has no effect */
#define EVENTMANAGER_PUBCFG_IMPORT_PORT_CHANID_MAXIMUM ((uint32_t)0x000000FFU)         /* !< Maximum value -- check your device
                                                                                    datasheet for actual maximum */

/* EVENTMANAGER_PUBCFG_EXPORT_PORT Bits */
/* EVENTMANAGER_PUBCFG_EXPORT_PORT[CHANID] Bits */
#define EVENTMANAGER_PUBCFG_EXPORT_PORT_CHANID_OFS (0)                             /* !< CHANID Offset */
#define EVENTMANAGER_PUBCFG_EXPORT_PORT_CHANID_MASK ((uint32_t)0x000000FFU)         /* !< Channel ID for export side to
                                                                                    connect to */
#define EVENTMANAGER_PUBCFG_EXPORT_PORT_CHANID_MINIMUM ((uint32_t)0x00000000U)         /* !< Minimum value -- 0 has no effect */
#define EVENTMANAGER_PUBCFG_EXPORT_PORT_CHANID_MAXIMUM ((uint32_t)0x000000FFU)         /* !< Maximum value -- check your device
                                                                                    datasheet for actual maximum */

/* EVENTMANAGER_PUBCFG_FPUB_PORT Bits */
/* EVENTMANAGER_PUBCFG_FPUB_PORT[CHANID] Bits */
#define EVENTMANAGER_PUBCFG_FPUB_PORT_CHANID_OFS (0)                             /* !< CHANID Offset */
#define EVENTMANAGER_PUBCFG_FPUB_PORT_CHANID_MASK ((uint32_t)0x000000FFU)         /* !< Channel ID for publisher to connect
                                                                                    to */
#define EVENTMANAGER_PUBCFG_FPUB_PORT_CHANID_MINIMUM ((uint32_t)0x00000000U)         /* !< Minimum value -- 0 has no effect */
#define EVENTMANAGER_PUBCFG_FPUB_PORT_CHANID_MAXIMUM ((uint32_t)0x000000FFU)         /* !< Maximum value -- check your device
                                                                                    datasheet for actual maximum */

/* EVENTMANAGER_PUBCFG_FSUB_PORT Bits */
/* EVENTMANAGER_PUBCFG_FSUB_PORT[CHANID] Bits */
#define EVENTMANAGER_PUBCFG_FSUB_PORT_CHANID_OFS (0)                             /* !< CHANID Offset */
#define EVENTMANAGER_PUBCFG_FSUB_PORT_CHANID_MASK ((uint32_t)0x000000FFU)         /* !< Channel ID for subscriber to
                                                                                    connect to */
#define EVENTMANAGER_PUBCFG_FSUB_PORT_CHANID_MINIMUM ((uint32_t)0x00000000U)         /* !< Minimum value -- 0 has no effect */
#define EVENTMANAGER_PUBCFG_FSUB_PORT_CHANID_MAXIMUM ((uint32_t)0x000000FFU)         /* !< Maximum value -- check your device
                                                                                    datasheet for actual maximum */

/* EVENTMANAGER_PUBCFG_DESC_EX Bits */
/* EVENTMANAGER_PUBCFG_DESC_EX[NUM_SINGLE_CHANNEL] Bits */
#define EVENTMANAGER_PUBCFG_DESC_EX_NUM_SINGLE_CHANNEL_OFS (0)                             /* !< NUM_SINGLE_CHANNEL Offset */
#define EVENTMANAGER_PUBCFG_DESC_EX_NUM_SINGLE_CHANNEL_MASK ((uint32_t)0x000000FFU)         /* !< Number of single channels contained
                                                                                    in this instance of event manager */
/* EVENTMANAGER_PUBCFG_DESC_EX[NUM_DUAL_CHANNEL] Bits */
#define EVENTMANAGER_PUBCFG_DESC_EX_NUM_DUAL_CHANNEL_OFS (8)                             /* !< NUM_DUAL_CHANNEL Offset */
#define EVENTMANAGER_PUBCFG_DESC_EX_NUM_DUAL_CHANNEL_MASK ((uint32_t)0x0000FF00U)         /* !< Number of dual channels contained
                                                                                    in this instance of event manager */
/* EVENTMANAGER_PUBCFG_DESC_EX[NUM_IMPORT] Bits */
#define EVENTMANAGER_PUBCFG_DESC_EX_NUM_IMPORT_OFS (16)                            /* !< NUM_IMPORT Offset */
#define EVENTMANAGER_PUBCFG_DESC_EX_NUM_IMPORT_MASK ((uint32_t)0x00FF0000U)         /* !< Number of import ports available in
                                                                                    this EventManager instantiation */
/* EVENTMANAGER_PUBCFG_DESC_EX[NUM_EXPORT] Bits */
#define EVENTMANAGER_PUBCFG_DESC_EX_NUM_EXPORT_OFS (24)                            /* !< NUM_EXPORT Offset */
#define EVENTMANAGER_PUBCFG_DESC_EX_NUM_EXPORT_MASK ((uint32_t)0xFF000000U)         /* !< Number of export ports available in
                                                                                    this EventManager instantiation */

/* EVENTMANAGER_PUBCFG_DESC Bits */
/* EVENTMANAGER_PUBCFG_DESC[MINREV] Bits */
#define EVENTMANAGER_PUBCFG_DESC_MINREV_OFS      (0)                             /* !< MINREV Offset */
#define EVENTMANAGER_PUBCFG_DESC_MINREV_MASK     ((uint32_t)0x0000000FU)         /* !< Minor rev of the IP */
#define EVENTMANAGER_PUBCFG_DESC_MINREV_MINIMUM  ((uint32_t)0x00000000U)         /* !< Smallest value */
#define EVENTMANAGER_PUBCFG_DESC_MINREV_MAXIMUM  ((uint32_t)0x0000000FU)         /* !< Highest possible value */
/* EVENTMANAGER_PUBCFG_DESC[MAJREV] Bits */
#define EVENTMANAGER_PUBCFG_DESC_MAJREV_OFS      (4)                             /* !< MAJREV Offset */
#define EVENTMANAGER_PUBCFG_DESC_MAJREV_MASK     ((uint32_t)0x000000F0U)         /* !< Major rev of the IP */
#define EVENTMANAGER_PUBCFG_DESC_MAJREV_MINIMUM  ((uint32_t)0x00000000U)         /* !< Smallest value */
#define EVENTMANAGER_PUBCFG_DESC_MAJREV_MAXIMUM  ((uint32_t)0x000000F0U)         /* !< Highest possible value */
/* EVENTMANAGER_PUBCFG_DESC[INSTNUM] Bits */
#define EVENTMANAGER_PUBCFG_DESC_INSTNUM_OFS     (8)                             /* !< INSTNUM Offset */
#define EVENTMANAGER_PUBCFG_DESC_INSTNUM_MASK    ((uint32_t)0x00000F00U)         /* !< Instance Number within the device.
                                                                                    This will be a parameter to the RTL
                                                                                    for modules that can have multiple
                                                                                    instances */
#define EVENTMANAGER_PUBCFG_DESC_INSTNUM_MINIMUM ((uint32_t)0x00000000U)         /* !< Smallest value */
#define EVENTMANAGER_PUBCFG_DESC_INSTNUM_MAXIMUM ((uint32_t)0x00000F00U)         /* !< Highest possible value */
/* EVENTMANAGER_PUBCFG_DESC[FEATUREVER] Bits */
#define EVENTMANAGER_PUBCFG_DESC_FEATUREVER_OFS  (12)                            /* !< FEATUREVER Offset */
#define EVENTMANAGER_PUBCFG_DESC_FEATUREVER_MASK ((uint32_t)0x0000F000U)         /* !< Feature Set for the module
                                                                                    *instance* */
#define EVENTMANAGER_PUBCFG_DESC_FEATUREVER_MINIMUM ((uint32_t)0x00000000U)         /* !< Smallest value */
#define EVENTMANAGER_PUBCFG_DESC_FEATUREVER_MAXIMUM ((uint32_t)0x0000F000U)         /* !< Highest possible value */
/* EVENTMANAGER_PUBCFG_DESC[MODULEID] Bits */
#define EVENTMANAGER_PUBCFG_DESC_MODULEID_OFS    (16)                            /* !< MODULEID Offset */
#define EVENTMANAGER_PUBCFG_DESC_MODULEID_MASK   ((uint32_t)0xFFFF0000U)         /* !< Module identification contains a
                                                                                    unique peripheral identification
                                                                                    number. The assignments are
                                                                                    maintained in a central database for
                                                                                    all of the platform modules to ensure
                                                                                    uniqueness. */
#define EVENTMANAGER_PUBCFG_DESC_MODULEID_MINIMUM ((uint32_t)0x00000000U)         /* !< Smallest value */
#define EVENTMANAGER_PUBCFG_DESC_MODULEID_MAXIMUM ((uint32_t)0xFFFF0000U)         /* !< Highest possible value */


#ifdef __cplusplus
}
#endif

#endif /* ti_devices_msp_peripherals_hw_eventmanager__include */

