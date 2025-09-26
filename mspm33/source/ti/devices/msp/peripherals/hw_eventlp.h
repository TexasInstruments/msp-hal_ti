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

#ifndef ti_devices_msp_peripherals_hw_eventlp__include
#define ti_devices_msp_peripherals_hw_eventlp__include

/* Filename: hw_eventlp.h */
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
* EVENTLP Registers
******************************************************************************/
#define EVENTLP_IMPEXPCFG_IMPORT_OFS             ((uint32_t)0x00002200U)
#define EVENTLP_IMPEXPCFG_EXPORT_OFS             ((uint32_t)0x00002000U)
#define EVENTLP_IMPEXPCFG_OFS                    ((uint32_t)0x00002000U)
#define EVENTLP_SECCFG_CPU_CONNECT_OFS           ((uint32_t)0x00001300U)
#define EVENTLP_SECCFG_IMPORT_OFS                ((uint32_t)0x00001280U)
#define EVENTLP_SECCFG_EXPORT_OFS                ((uint32_t)0x00001200U)
#define EVENTLP_SECCFG_FPUB_OFS                  ((uint32_t)0x00001180U)
#define EVENTLP_SECCFG_FSUB_OFS                  ((uint32_t)0x00001100U)
#define EVENTLP_SECCFG_OFS                       ((uint32_t)0x00001000U)
#define EVENTLP_PUBCFG_CPU_CONNECT_OFS           ((uint32_t)0x00000900U)
#define EVENTLP_PUBCFG_IMPORT_OFS                ((uint32_t)0x00000700U)
#define EVENTLP_PUBCFG_EXPORT_OFS                ((uint32_t)0x00000500U)
#define EVENTLP_PUBCFG_FPUB_OFS                  ((uint32_t)0x00000300U)
#define EVENTLP_PUBCFG_FSUB_OFS                  ((uint32_t)0x00000100U)
#define EVENTLP_PUBCFG_OFS                       ((uint32_t)0x00000000U)


/** @addtogroup EVENTLP_IMPEXPCFG_IMPORT
  @{
*/

typedef struct {
  __IO uint32_t PORT;                              /* !< (@ 0x00002200) Import channel ID registe */
} EVENTLP_IMPEXPCFG_IMPORT_Regs;

/*@}*/ /* end of group EVENTLP_IMPEXPCFG_IMPORT */

/** @addtogroup EVENTLP_IMPEXPCFG_EXPORT
  @{
*/

typedef struct {
  __IO uint32_t PORT;                              /* !< (@ 0x00002000) Export channel ID register */
} EVENTLP_IMPEXPCFG_EXPORT_Regs;

/*@}*/ /* end of group EVENTLP_IMPEXPCFG_EXPORT */

/** @addtogroup EVENTLP_IMPEXPCFG
  @{
*/

typedef struct {
  EVENTLP_IMPEXPCFG_EXPORT_Regs  EXPORT;                            /* !< (@ 0x00002000) */
       uint32_t RESERVED0[127];
  EVENTLP_IMPEXPCFG_IMPORT_Regs  IMPORT;                            /* !< (@ 0x00002200) */
} EVENTLP_IMPEXPCFG_Regs;

/*@}*/ /* end of group EVENTLP_IMPEXPCFG */

/** @addtogroup EVENTLP_SECCFG_CPU_CONNECT
  @{
*/

typedef struct {
  __IO uint8_t CPU_NUM;                           /* !< (@ 0x00001300) CPU connect register */
} EVENTLP_SECCFG_CPU_CONNECT_Regs;

/*@}*/ /* end of group EVENTLP_SECCFG_CPU_CONNECT */

/** @addtogroup EVENTLP_SECCFG_IMPORT
  @{
*/

typedef struct {
  __IO uint8_t PORT;                              /* !< (@ 0x00001280) Import channel ID registe */
} EVENTLP_SECCFG_IMPORT_Regs;

/*@}*/ /* end of group EVENTLP_SECCFG_IMPORT */

/** @addtogroup EVENTLP_SECCFG_EXPORT
  @{
*/

typedef struct {
  __IO uint8_t PORT;                              /* !< (@ 0x00001200) Export channel ID register */
} EVENTLP_SECCFG_EXPORT_Regs;

/*@}*/ /* end of group EVENTLP_SECCFG_EXPORT */

/** @addtogroup EVENTLP_SECCFG_FPUB
  @{
*/

typedef struct {
  __IO uint8_t PORT;                              /* !< (@ 0x00001180) Publisher channel ID register */
} EVENTLP_SECCFG_FPUB_Regs;

/*@}*/ /* end of group EVENTLP_SECCFG_FPUB */

/** @addtogroup EVENTLP_SECCFG_FSUB
  @{
*/

typedef struct {
  __IO uint8_t PORT;                              /* !< (@ 0x00001100) Subscriber channel ID register */
} EVENTLP_SECCFG_FSUB_Regs;

/*@}*/ /* end of group EVENTLP_SECCFG_FSUB */

/** @addtogroup EVENTLP_SECCFG
  @{
*/

typedef struct {
       uint32_t RESERVED0[62];
  __I  uint32_t DESC_EX;                           /* !< (@ 0x000010F8) Extended Module Description */
  __I  uint32_t DESC;                              /* !< (@ 0x000010FC) Module Description */
  EVENTLP_SECCFG_FSUB_Regs  FSUB;                              /* !< (@ 0x00001100) */
       uint32_t RESERVED1[32];
  EVENTLP_SECCFG_FPUB_Regs  FPUB;                              /* !< (@ 0x00001180) */
       uint32_t RESERVED2[32];
  EVENTLP_SECCFG_EXPORT_Regs  EXPORT;                            /* !< (@ 0x00001200) */
       uint8_t  RESERVED3[127];
  EVENTLP_SECCFG_IMPORT_Regs  IMPORT;                            /* !< (@ 0x00001280) */
       uint8_t  RESERVED4[127];
  EVENTLP_SECCFG_CPU_CONNECT_Regs  CPU_CONNECT;                       /* !< (@ 0x00001300) */
       uint32_t RESERVED5[64];
  __IO uint8_t CTL;                               /* !< (@ 0x00001400) Event Manager control register */
} EVENTLP_SECCFG_Regs;

/*@}*/ /* end of group EVENTLP_SECCFG */

/** @addtogroup EVENTLP_PUBCFG_CPU_CONNECT
  @{
*/

typedef struct {
  __IO uint32_t CPU_NUM;                           /* !< (@ 0x00000900) CPU connect register */
} EVENTLP_PUBCFG_CPU_CONNECT_Regs;

/*@}*/ /* end of group EVENTLP_PUBCFG_CPU_CONNECT */

/** @addtogroup EVENTLP_PUBCFG_IMPORT
  @{
*/

typedef struct {
  __IO uint32_t PORT;                              /* !< (@ 0x00000700) Import channel ID registe */
} EVENTLP_PUBCFG_IMPORT_Regs;

/*@}*/ /* end of group EVENTLP_PUBCFG_IMPORT */

/** @addtogroup EVENTLP_PUBCFG_EXPORT
  @{
*/

typedef struct {
  __IO uint32_t PORT;                              /* !< (@ 0x00000500) Export channel ID register */
} EVENTLP_PUBCFG_EXPORT_Regs;

/*@}*/ /* end of group EVENTLP_PUBCFG_EXPORT */

/** @addtogroup EVENTLP_PUBCFG_FPUB
  @{
*/

typedef struct {
  __IO uint32_t PORT;                              /* !< (@ 0x00000300) Publisher channel ID register */
} EVENTLP_PUBCFG_FPUB_Regs;

/*@}*/ /* end of group EVENTLP_PUBCFG_FPUB */

/** @addtogroup EVENTLP_PUBCFG_FSUB
  @{
*/

typedef struct {
  __IO uint32_t PORT;                              /* !< (@ 0x00000100) Subscriber channel ID register */
} EVENTLP_PUBCFG_FSUB_Regs;

/*@}*/ /* end of group EVENTLP_PUBCFG_FSUB */

/** @addtogroup EVENTLP_PUBCFG
  @{
*/

typedef struct {
       uint32_t RESERVED0[62];
  __I  uint32_t DESC_EX;                           /* !< (@ 0x000000F8) Extended Module Description */
  __I  uint32_t DESC;                              /* !< (@ 0x000000FC) Module Description */
  EVENTLP_PUBCFG_FSUB_Regs  FSUB;                              /* !< (@ 0x00000100) */
       uint32_t RESERVED1[128];
  EVENTLP_PUBCFG_FPUB_Regs  FPUB;                              /* !< (@ 0x00000300) */
       uint32_t RESERVED2[128];
  EVENTLP_PUBCFG_EXPORT_Regs  EXPORT;                            /* !< (@ 0x00000500) */
       uint32_t RESERVED3[127];
  EVENTLP_PUBCFG_IMPORT_Regs  IMPORT;                            /* !< (@ 0x00000700) */
       uint32_t RESERVED4[127];
  EVENTLP_PUBCFG_CPU_CONNECT_Regs  CPU_CONNECT;                       /* !< (@ 0x00000900) */
} EVENTLP_PUBCFG_Regs;

/*@}*/ /* end of group EVENTLP_PUBCFG */

/** @addtogroup EVENTLP
  @{
*/

typedef struct {
  EVENTLP_PUBCFG_Regs  PUBCFG;                            /* !< (@ 0x00000000) */
       uint32_t RESERVED0[448];
  EVENTLP_SECCFG_Regs  SECCFG;                            /* !< (@ 0x00001000) */
       uint8_t  RESERVED1[3071];
  EVENTLP_IMPEXPCFG_Regs  IMPEXPCFG;                         /* !< (@ 0x00002000) */
} EVENTLP_Regs;

/*@}*/ /* end of group EVENTLP */



#if defined ( __CC_ARM )
#pragma no_anon_unions
#endif

/******************************************************************************
* EVENTLP Register Control Bits
******************************************************************************/

/* EVENTLP_IMPEXPCFG_IMPORT_PORT Bits */
/* EVENTLP_IMPEXPCFG_IMPORT_PORT[CHANID] Bits */
#define EVENTLP_IMPEXPCFG_IMPORT_PORT_CHANID_OFS (0)                             /* !< CHANID Offset */
#define EVENTLP_IMPEXPCFG_IMPORT_PORT_CHANID_MASK ((uint32_t)0x000000FFU)         /* !< Channel ID for import side to
                                                                                    connect to */
#define EVENTLP_IMPEXPCFG_IMPORT_PORT_CHANID_MINIMUM ((uint32_t)0x00000000U)         /* !< Minimum value -- 0 has no effect */
#define EVENTLP_IMPEXPCFG_IMPORT_PORT_CHANID_MAXIMUM ((uint32_t)0x000000FFU)         /* !< Maximum value -- check your device
                                                                                    datasheet for actual maximum */

/* EVENTLP_IMPEXPCFG_EXPORT_PORT Bits */
/* EVENTLP_IMPEXPCFG_EXPORT_PORT[CHANID] Bits */
#define EVENTLP_IMPEXPCFG_EXPORT_PORT_CHANID_OFS (0)                             /* !< CHANID Offset */
#define EVENTLP_IMPEXPCFG_EXPORT_PORT_CHANID_MASK ((uint32_t)0x000000FFU)         /* !< Channel ID for import side to
                                                                                    connect to */
#define EVENTLP_IMPEXPCFG_EXPORT_PORT_CHANID_MINIMUM ((uint32_t)0x00000000U)         /* !< Minimum value -- 0 has no effect */
#define EVENTLP_IMPEXPCFG_EXPORT_PORT_CHANID_MAXIMUM ((uint32_t)0x000000FFU)         /* !< Maximum value -- check your device
                                                                                    datasheet for actual maximum */

/* EVENTLP_SECCFG_CPU_NUM Bits */

/* EVENTLP_SECCFG_IMPORT_PORT Bits */
/* EVENTLP_SECCFG_IMPORT_PORT[CHANID] Bits */
#define EVENTLP_SECCFG_IMPORT_PORT_CHANID_OFS    (0)                             /* !< CHANID Offset */
#define EVENTLP_SECCFG_IMPORT_PORT_CHANID_MASK   ((uint8_t)0x000000FFU)          /* !< Channel ID for import side to
                                                                                    connect to */
#define EVENTLP_SECCFG_IMPORT_PORT_CHANID_MINIMUM ((uint8_t)0x00000000U)          /* !< Minimum value -- 0 has no effect */
#define EVENTLP_SECCFG_IMPORT_PORT_CHANID_MAXIMUM ((uint8_t)0x000000FFU)          /* !< Maximum value -- check your device
                                                                                    datasheet for actual maximum */

/* EVENTLP_SECCFG_EXPORT_PORT Bits */
/* EVENTLP_SECCFG_EXPORT_PORT[CHANID] Bits */
#define EVENTLP_SECCFG_EXPORT_PORT_CHANID_OFS    (0)                             /* !< CHANID Offset */
#define EVENTLP_SECCFG_EXPORT_PORT_CHANID_MASK   ((uint8_t)0x000000FFU)          /* !< Channel ID for export side to
                                                                                    connect to */
#define EVENTLP_SECCFG_EXPORT_PORT_CHANID_MINIMUM ((uint8_t)0x00000000U)          /* !< Minimum value -- 0 has no effect */
#define EVENTLP_SECCFG_EXPORT_PORT_CHANID_MAXIMUM ((uint8_t)0x000000FFU)          /* !< Maximum value -- check your device
                                                                                    datasheet for actual maximum */

/* EVENTLP_SECCFG_FPUB_PORT Bits */
/* EVENTLP_SECCFG_FPUB_PORT[CHANID] Bits */
#define EVENTLP_SECCFG_FPUB_PORT_CHANID_OFS      (0)                             /* !< CHANID Offset */
#define EVENTLP_SECCFG_FPUB_PORT_CHANID_MASK     ((uint8_t)0x000000FFU)          /* !< Channel ID for publisher to connect
                                                                                    to */
#define EVENTLP_SECCFG_FPUB_PORT_CHANID_MINIMUM  ((uint8_t)0x00000000U)          /* !< Minimum value -- 0 has no effect */
#define EVENTLP_SECCFG_FPUB_PORT_CHANID_MAXIMUM  ((uint8_t)0x000000FFU)          /* !< Maximum value -- check your device
                                                                                    datasheet for actual maximum */

/* EVENTLP_SECCFG_FSUB_PORT Bits */
/* EVENTLP_SECCFG_FSUB_PORT[CHANID] Bits */
#define EVENTLP_SECCFG_FSUB_PORT_CHANID_OFS      (0)                             /* !< CHANID Offset */
#define EVENTLP_SECCFG_FSUB_PORT_CHANID_MASK     ((uint8_t)0x000000FFU)          /* !< Channel ID for subscriber to
                                                                                    connect to */
#define EVENTLP_SECCFG_FSUB_PORT_CHANID_MINIMUM  ((uint8_t)0x00000000U)          /* !< Minimum value -- 0 has no effect */
#define EVENTLP_SECCFG_FSUB_PORT_CHANID_MAXIMUM  ((uint8_t)0x000000FFU)          /* !< Maximum value -- check your device
                                                                                    datasheet for actual maximum */

/* EVENTLP_SECCFG_DESC_EX Bits */
/* EVENTLP_SECCFG_DESC_EX[NUM_SINGLE_CHANNEL] Bits */
#define EVENTLP_SECCFG_DESC_EX_NUM_SINGLE_CHANNEL_OFS (0)                             /* !< NUM_SINGLE_CHANNEL Offset */
#define EVENTLP_SECCFG_DESC_EX_NUM_SINGLE_CHANNEL_MASK ((uint32_t)0x000000FFU)         /* !< Number of single channels contained
                                                                                    in this instance of event manager */
/* EVENTLP_SECCFG_DESC_EX[NUM_DUAL_CHANNEL] Bits */
#define EVENTLP_SECCFG_DESC_EX_NUM_DUAL_CHANNEL_OFS (8)                             /* !< NUM_DUAL_CHANNEL Offset */
#define EVENTLP_SECCFG_DESC_EX_NUM_DUAL_CHANNEL_MASK ((uint32_t)0x0000FF00U)         /* !< Number of dual channels contained
                                                                                    in this instance of event manager */
/* EVENTLP_SECCFG_DESC_EX[NUM_EXPORT] Bits */
#define EVENTLP_SECCFG_DESC_EX_NUM_EXPORT_OFS    (24)                            /* !< NUM_EXPORT Offset */
#define EVENTLP_SECCFG_DESC_EX_NUM_EXPORT_MASK   ((uint32_t)0xFF000000U)         /* !< Number of export ports available in
                                                                                    this EventManager instantiation */
/* EVENTLP_SECCFG_DESC_EX[NUM_IMPORT] Bits */
#define EVENTLP_SECCFG_DESC_EX_NUM_IMPORT_OFS    (16)                            /* !< NUM_IMPORT Offset */
#define EVENTLP_SECCFG_DESC_EX_NUM_IMPORT_MASK   ((uint32_t)0x00FF0000U)         /* !< Number of import ports available in
                                                                                    this EventManager instantiation */

/* EVENTLP_SECCFG_DESC Bits */
/* EVENTLP_SECCFG_DESC[MINREV] Bits */
#define EVENTLP_SECCFG_DESC_MINREV_OFS           (0)                             /* !< MINREV Offset */
#define EVENTLP_SECCFG_DESC_MINREV_MASK          ((uint32_t)0x0000000FU)         /* !< Minor rev of the IP */
#define EVENTLP_SECCFG_DESC_MINREV_MINIMUM       ((uint32_t)0x00000000U)         /* !< Smallest value */
#define EVENTLP_SECCFG_DESC_MINREV_MAXIMUM       ((uint32_t)0x0000000FU)         /* !< Highest possible value */
/* EVENTLP_SECCFG_DESC[MAJREV] Bits */
#define EVENTLP_SECCFG_DESC_MAJREV_OFS           (4)                             /* !< MAJREV Offset */
#define EVENTLP_SECCFG_DESC_MAJREV_MASK          ((uint32_t)0x000000F0U)         /* !< Major rev of the IP */
#define EVENTLP_SECCFG_DESC_MAJREV_MINIMUM       ((uint32_t)0x00000000U)         /* !< Smallest value */
#define EVENTLP_SECCFG_DESC_MAJREV_MAXIMUM       ((uint32_t)0x000000F0U)         /* !< Highest possible value */
/* EVENTLP_SECCFG_DESC[INSTNUM] Bits */
#define EVENTLP_SECCFG_DESC_INSTNUM_OFS          (8)                             /* !< INSTNUM Offset */
#define EVENTLP_SECCFG_DESC_INSTNUM_MASK         ((uint32_t)0x00000F00U)         /* !< Instance Number within the device.
                                                                                    This will be a parameter to the RTL
                                                                                    for modules that can have multiple
                                                                                    instances */
#define EVENTLP_SECCFG_DESC_INSTNUM_MINIMUM      ((uint32_t)0x00000000U)         /* !< Smallest value */
#define EVENTLP_SECCFG_DESC_INSTNUM_MAXIMUM      ((uint32_t)0x00000F00U)         /* !< Highest possible value */
/* EVENTLP_SECCFG_DESC[FEATUREVER] Bits */
#define EVENTLP_SECCFG_DESC_FEATUREVER_OFS       (12)                            /* !< FEATUREVER Offset */
#define EVENTLP_SECCFG_DESC_FEATUREVER_MASK      ((uint32_t)0x0000F000U)         /* !< Feature Set for the module
                                                                                    *instance* */
#define EVENTLP_SECCFG_DESC_FEATUREVER_MINIMUM   ((uint32_t)0x00000000U)         /* !< Smallest value */
#define EVENTLP_SECCFG_DESC_FEATUREVER_MAXIMUM   ((uint32_t)0x0000F000U)         /* !< Highest possible value */
/* EVENTLP_SECCFG_DESC[MODULEID] Bits */
#define EVENTLP_SECCFG_DESC_MODULEID_OFS         (16)                            /* !< MODULEID Offset */
#define EVENTLP_SECCFG_DESC_MODULEID_MASK        ((uint32_t)0xFFFF0000U)         /* !< Module identification contains a
                                                                                    unique peripheral identification
                                                                                    number. The assignments are
                                                                                    maintained in a central database for
                                                                                    all of the platform modules to ensure
                                                                                    uniqueness. */
#define EVENTLP_SECCFG_DESC_MODULEID_MINIMUM     ((uint32_t)0x00000000U)         /* !< Smallest value */
#define EVENTLP_SECCFG_DESC_MODULEID_MAXIMUM     ((uint32_t)0xFFFF0000U)         /* !< Highest possible value */

/* EVENTLP_CTL Bits */
/* EVENTLP_CTL[OVRWR_EN] Bits */
#define EVENTLP_CTL_OVRWR_EN_OFS                 (0)                             /* !< OVRWR_EN Offset */
#define EVENTLP_CTL_OVRWR_EN_MASK                ((uint8_t)0x0000000FU)          /* !< Enable overwrite of config even if
                                                                                    resources are already configured. By
                                                                                    default, a configuration cannot be
                                                                                    overwritten. */
#define EVENTLP_CTL_OVRWR_EN_DISABLE             ((uint8_t)0x00000005U)          /* !< Overwrite is disabled. Mode is same
                                                                                    as in UNASG aperture. */
#define EVENTLP_CTL_OVRWR_EN_ENABLED             ((uint8_t)0x0000000AU)          /* !< Ovewrite is enabled */

/* EVENTLP_PUBCFG_CPU_NUM Bits */

/* EVENTLP_PUBCFG_IMPORT_PORT Bits */
/* EVENTLP_PUBCFG_IMPORT_PORT[CHANID] Bits */
#define EVENTLP_PUBCFG_IMPORT_PORT_CHANID_OFS    (0)                             /* !< CHANID Offset */
#define EVENTLP_PUBCFG_IMPORT_PORT_CHANID_MASK   ((uint32_t)0x000000FFU)         /* !< Channel ID for import side to
                                                                                    connect to */
#define EVENTLP_PUBCFG_IMPORT_PORT_CHANID_MINIMUM ((uint32_t)0x00000000U)         /* !< Minimum value -- 0 has no effect */
#define EVENTLP_PUBCFG_IMPORT_PORT_CHANID_MAXIMUM ((uint32_t)0x000000FFU)         /* !< Maximum value -- check your device
                                                                                    datasheet for actual maximum */

/* EVENTLP_PUBCFG_EXPORT_PORT Bits */
/* EVENTLP_PUBCFG_EXPORT_PORT[CHANID] Bits */
#define EVENTLP_PUBCFG_EXPORT_PORT_CHANID_OFS    (0)                             /* !< CHANID Offset */
#define EVENTLP_PUBCFG_EXPORT_PORT_CHANID_MASK   ((uint32_t)0x000000FFU)         /* !< Channel ID for export side to
                                                                                    connect to */
#define EVENTLP_PUBCFG_EXPORT_PORT_CHANID_MINIMUM ((uint32_t)0x00000000U)         /* !< Minimum value -- 0 has no effect */
#define EVENTLP_PUBCFG_EXPORT_PORT_CHANID_MAXIMUM ((uint32_t)0x000000FFU)         /* !< Maximum value -- check your device
                                                                                    datasheet for actual maximum */

/* EVENTLP_PUBCFG_FPUB_PORT Bits */
/* EVENTLP_PUBCFG_FPUB_PORT[CHANID] Bits */
#define EVENTLP_PUBCFG_FPUB_PORT_CHANID_OFS      (0)                             /* !< CHANID Offset */
#define EVENTLP_PUBCFG_FPUB_PORT_CHANID_MASK     ((uint32_t)0x000000FFU)         /* !< Channel ID for publisher to connect
                                                                                    to */
#define EVENTLP_PUBCFG_FPUB_PORT_CHANID_MINIMUM  ((uint32_t)0x00000000U)         /* !< Minimum value -- 0 has no effect */
#define EVENTLP_PUBCFG_FPUB_PORT_CHANID_MAXIMUM  ((uint32_t)0x000000FFU)         /* !< Maximum value -- check your device
                                                                                    datasheet for actual maximum */

/* EVENTLP_PUBCFG_FSUB_PORT Bits */
/* EVENTLP_PUBCFG_FSUB_PORT[CHANID] Bits */
#define EVENTLP_PUBCFG_FSUB_PORT_CHANID_OFS      (0)                             /* !< CHANID Offset */
#define EVENTLP_PUBCFG_FSUB_PORT_CHANID_MASK     ((uint32_t)0x000000FFU)         /* !< Channel ID for subscriber to
                                                                                    connect to */
#define EVENTLP_PUBCFG_FSUB_PORT_CHANID_MINIMUM  ((uint32_t)0x00000000U)         /* !< Minimum value -- 0 has no effect */
#define EVENTLP_PUBCFG_FSUB_PORT_CHANID_MAXIMUM  ((uint32_t)0x000000FFU)         /* !< Maximum value -- check your device
                                                                                    datasheet for actual maximum */

/* EVENTLP_PUBCFG_DESC_EX Bits */
/* EVENTLP_PUBCFG_DESC_EX[NUM_SINGLE_CHANNEL] Bits */
#define EVENTLP_PUBCFG_DESC_EX_NUM_SINGLE_CHANNEL_OFS (0)                             /* !< NUM_SINGLE_CHANNEL Offset */
#define EVENTLP_PUBCFG_DESC_EX_NUM_SINGLE_CHANNEL_MASK ((uint32_t)0x000000FFU)         /* !< Number of single channels contained
                                                                                    in this instance of event manager */
/* EVENTLP_PUBCFG_DESC_EX[NUM_DUAL_CHANNEL] Bits */
#define EVENTLP_PUBCFG_DESC_EX_NUM_DUAL_CHANNEL_OFS (8)                             /* !< NUM_DUAL_CHANNEL Offset */
#define EVENTLP_PUBCFG_DESC_EX_NUM_DUAL_CHANNEL_MASK ((uint32_t)0x0000FF00U)         /* !< Number of dual channels contained
                                                                                    in this instance of event manager */
/* EVENTLP_PUBCFG_DESC_EX[NUM_IMPORT] Bits */
#define EVENTLP_PUBCFG_DESC_EX_NUM_IMPORT_OFS    (16)                            /* !< NUM_IMPORT Offset */
#define EVENTLP_PUBCFG_DESC_EX_NUM_IMPORT_MASK   ((uint32_t)0x00FF0000U)         /* !< Number of import ports available in
                                                                                    this EventManager instantiation */
/* EVENTLP_PUBCFG_DESC_EX[NUM_EXPORT] Bits */
#define EVENTLP_PUBCFG_DESC_EX_NUM_EXPORT_OFS    (24)                            /* !< NUM_EXPORT Offset */
#define EVENTLP_PUBCFG_DESC_EX_NUM_EXPORT_MASK   ((uint32_t)0xFF000000U)         /* !< Number of export ports available in
                                                                                    this EventManager instantiation */

/* EVENTLP_PUBCFG_DESC Bits */
/* EVENTLP_PUBCFG_DESC[MINREV] Bits */
#define EVENTLP_PUBCFG_DESC_MINREV_OFS           (0)                             /* !< MINREV Offset */
#define EVENTLP_PUBCFG_DESC_MINREV_MASK          ((uint32_t)0x0000000FU)         /* !< Minor rev of the IP */
#define EVENTLP_PUBCFG_DESC_MINREV_MINIMUM       ((uint32_t)0x00000000U)         /* !< Smallest value */
#define EVENTLP_PUBCFG_DESC_MINREV_MAXIMUM       ((uint32_t)0x0000000FU)         /* !< Highest possible value */
/* EVENTLP_PUBCFG_DESC[MAJREV] Bits */
#define EVENTLP_PUBCFG_DESC_MAJREV_OFS           (4)                             /* !< MAJREV Offset */
#define EVENTLP_PUBCFG_DESC_MAJREV_MASK          ((uint32_t)0x000000F0U)         /* !< Major rev of the IP */
#define EVENTLP_PUBCFG_DESC_MAJREV_MINIMUM       ((uint32_t)0x00000000U)         /* !< Smallest value */
#define EVENTLP_PUBCFG_DESC_MAJREV_MAXIMUM       ((uint32_t)0x000000F0U)         /* !< Highest possible value */
/* EVENTLP_PUBCFG_DESC[INSTNUM] Bits */
#define EVENTLP_PUBCFG_DESC_INSTNUM_OFS          (8)                             /* !< INSTNUM Offset */
#define EVENTLP_PUBCFG_DESC_INSTNUM_MASK         ((uint32_t)0x00000F00U)         /* !< Instance Number within the device.
                                                                                    This will be a parameter to the RTL
                                                                                    for modules that can have multiple
                                                                                    instances */
#define EVENTLP_PUBCFG_DESC_INSTNUM_MINIMUM      ((uint32_t)0x00000000U)         /* !< Smallest value */
#define EVENTLP_PUBCFG_DESC_INSTNUM_MAXIMUM      ((uint32_t)0x00000F00U)         /* !< Highest possible value */
/* EVENTLP_PUBCFG_DESC[FEATUREVER] Bits */
#define EVENTLP_PUBCFG_DESC_FEATUREVER_OFS       (12)                            /* !< FEATUREVER Offset */
#define EVENTLP_PUBCFG_DESC_FEATUREVER_MASK      ((uint32_t)0x0000F000U)         /* !< Feature Set for the module
                                                                                    *instance* */
#define EVENTLP_PUBCFG_DESC_FEATUREVER_MINIMUM   ((uint32_t)0x00000000U)         /* !< Smallest value */
#define EVENTLP_PUBCFG_DESC_FEATUREVER_MAXIMUM   ((uint32_t)0x0000F000U)         /* !< Highest possible value */
/* EVENTLP_PUBCFG_DESC[MODULEID] Bits */
#define EVENTLP_PUBCFG_DESC_MODULEID_OFS         (16)                            /* !< MODULEID Offset */
#define EVENTLP_PUBCFG_DESC_MODULEID_MASK        ((uint32_t)0xFFFF0000U)         /* !< Module identification contains a
                                                                                    unique peripheral identification
                                                                                    number. The assignments are
                                                                                    maintained in a central database for
                                                                                    all of the platform modules to ensure
                                                                                    uniqueness. */
#define EVENTLP_PUBCFG_DESC_MODULEID_MINIMUM     ((uint32_t)0x00000000U)         /* !< Smallest value */
#define EVENTLP_PUBCFG_DESC_MODULEID_MAXIMUM     ((uint32_t)0xFFFF0000U)         /* !< Highest possible value */


#ifdef __cplusplus
}
#endif

#endif /* ti_devices_msp_peripherals_hw_eventlp__include */

