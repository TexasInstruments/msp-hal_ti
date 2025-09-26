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

#ifndef ti_devices_msp_peripherals_hw_iomux_m33c1__include
#define ti_devices_msp_peripherals_hw_iomux_m33c1__include

/* Filename: hw_iomux_m33c1.h */
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
* IOMUX_M33C1 Registers
******************************************************************************/
#define IOMUX_M33C1_UNASSIGNED_MMR_REGION_OFS    ((uint32_t)0x00001000U)
#define IOMUX_M33C1_SECCFG_MMR_REGION_OFS        ((uint32_t)0x00000000U)


/** @addtogroup IOMUX_M33C1_UNASSIGNED_MMR_REGION
  @{
*/

typedef struct {
       uint32_t RESERVED0[576];
  __IO uint32_t DTBENA;                            /* !< (@ 0x00001900) DTBENA Register */
       uint32_t RESERVED1[2];
  __IO uint32_t DTBBUSSEL;                         /* !< (@ 0x0000190C) DTBBUSSEL Register */
  __IO uint32_t DTBOUTSEL0;                        /* !< (@ 0x00001910) DTBOUSEL0 Register */
  __IO uint32_t DTBOUTSEL1;                        /* !< (@ 0x00001914) DTBOUSEL1 Register */
  __IO uint32_t DTBOUTSEL2;                        /* !< (@ 0x00001918) DTBOUSEL2 Register */
  __IO uint32_t DTBOUTSEL3;                        /* !< (@ 0x0000191C) DTBOUSEL3 Register */
  __IO uint32_t DTBOUTSEL4;                        /* !< (@ 0x00001920) DTBOUSEL4 Register */
  __IO uint32_t DTBOUTSEL5;                        /* !< (@ 0x00001924) DTBOUSEL5 Register */
  __IO uint32_t DTBOUTSEL6;                        /* !< (@ 0x00001928) DTBOUSEL6 Register */
  __IO uint32_t DTBOUTSEL7;                        /* !< (@ 0x0000192C) DTBOUSEL7 Register */
       uint32_t RESERVED2[24];
  __IO uint32_t DTBDIR0;                           /* !< (@ 0x00001990) DTBDIR Register */
  __IO uint32_t DTBDIR1;                           /* !< (@ 0x00001994) DTBDIR Register */
  __IO uint32_t DTBDIR2;                           /* !< (@ 0x00001998) DTBDIR Register */
  __IO uint32_t DTBDIR3;                           /* !< (@ 0x0000199C) DTBDIR Register */
  __IO uint32_t DTBDIR4;                           /* !< (@ 0x000019A0) DTBDIR Register */
  __IO uint32_t DTBDIR5;                           /* !< (@ 0x000019A4) DTBDIR Register */
  __IO uint32_t DTBDIR6;                           /* !< (@ 0x000019A8) DTBDIR Register */
  __IO uint32_t DTBDIR7;                           /* !< (@ 0x000019AC) DTBDIR Register */
} IOMUX_M33C1_UNASSIGNED_MMR_REGION_Regs;

/*@}*/ /* end of group IOMUX_M33C1_UNASSIGNED_MMR_REGION */

/** @addtogroup IOMUX_M33C1_SECCFG_MMR_REGION
  @{
*/

typedef struct {
       uint32_t RESERVED0;
  __IO uint32_t PINCM1;                            /* !< (@ 0x00000004) Pin Control Management Register in SECCFG region */
  __IO uint32_t PINCM2;                            /* !< (@ 0x00000008) Pin Control Management Register in SECCFG region */
  __IO uint32_t PINCM3;                            /* !< (@ 0x0000000C) Pin Control Management Register in SECCFG region */
  __IO uint32_t PINCM4;                            /* !< (@ 0x00000010) Pin Control Management Register in SECCFG region */
  __IO uint32_t PINCM5;                            /* !< (@ 0x00000014) Pin Control Management Register in SECCFG region */
       uint32_t RESERVED1;
  __IO uint32_t PINCM7;                            /* !< (@ 0x0000001C) Pin Control Management Register in SECCFG region */
  __IO uint32_t PINCM8;                            /* !< (@ 0x00000020) Pin Control Management Register in SECCFG region */
  __IO uint32_t PINCM9;                            /* !< (@ 0x00000024) Pin Control Management Register in SECCFG region */
  __IO uint32_t PINCM10;                           /* !< (@ 0x00000028) Pin Control Management Register in SECCFG region */
  __IO uint32_t PINCM11;                           /* !< (@ 0x0000002C) Pin Control Management Register in SECCFG region */
  __IO uint32_t PINCM12;                           /* !< (@ 0x00000030) Pin Control Management Register in SECCFG region */
  __IO uint32_t PINCM13;                           /* !< (@ 0x00000034) Pin Control Management Register in SECCFG region */
  __IO uint32_t PINCM14;                           /* !< (@ 0x00000038) Pin Control Management Register in SECCFG region */
  __IO uint32_t PINCM15;                           /* !< (@ 0x0000003C) Pin Control Management Register in SECCFG region */
  __IO uint32_t PINCM16;                           /* !< (@ 0x00000040) Pin Control Management Register in SECCFG region */
  __IO uint32_t PINCM17;                           /* !< (@ 0x00000044) Pin Control Management Register in SECCFG region */
  __IO uint32_t PINCM18;                           /* !< (@ 0x00000048) Pin Control Management Register in SECCFG region */
  __IO uint32_t PINCM19;                           /* !< (@ 0x0000004C) Pin Control Management Register in SECCFG region */
  __IO uint32_t PINCM20;                           /* !< (@ 0x00000050) Pin Control Management Register in SECCFG region */
  __IO uint32_t PINCM21;                           /* !< (@ 0x00000054) Pin Control Management Register in SECCFG region */
  __IO uint32_t PINCM22;                           /* !< (@ 0x00000058) Pin Control Management Register in SECCFG region */
  __IO uint32_t PINCM23;                           /* !< (@ 0x0000005C) Pin Control Management Register in SECCFG region */
  __IO uint32_t PINCM24;                           /* !< (@ 0x00000060) Pin Control Management Register in SECCFG region */
  __IO uint32_t PINCM25;                           /* !< (@ 0x00000064) Pin Control Management Register in SECCFG region */
  __IO uint32_t PINCM26;                           /* !< (@ 0x00000068) Pin Control Management Register in SECCFG region */
  __IO uint32_t PINCM27;                           /* !< (@ 0x0000006C) Pin Control Management Register in SECCFG region */
  __IO uint32_t PINCM28;                           /* !< (@ 0x00000070) Pin Control Management Register in SECCFG region */
  __IO uint32_t PINCM29;                           /* !< (@ 0x00000074) Pin Control Management Register in SECCFG region */
  __IO uint32_t PINCM30;                           /* !< (@ 0x00000078) Pin Control Management Register in SECCFG region */
  __IO uint32_t PINCM31;                           /* !< (@ 0x0000007C) Pin Control Management Register in SECCFG region */
  __IO uint32_t PINCM32;                           /* !< (@ 0x00000080) Pin Control Management Register in SECCFG region */
  __IO uint32_t PINCM33;                           /* !< (@ 0x00000084) Pin Control Management Register in SECCFG region */
  __IO uint32_t PINCM34;                           /* !< (@ 0x00000088) Pin Control Management Register in SECCFG region */
  __IO uint32_t PINCM35;                           /* !< (@ 0x0000008C) Pin Control Management Register in SECCFG region */
  __IO uint32_t PINCM36;                           /* !< (@ 0x00000090) Pin Control Management Register in SECCFG region */
  __IO uint32_t PINCM37;                           /* !< (@ 0x00000094) Pin Control Management Register in SECCFG region */
  __IO uint32_t PINCM38;                           /* !< (@ 0x00000098) Pin Control Management Register in SECCFG region */
  __IO uint32_t PINCM39;                           /* !< (@ 0x0000009C) Pin Control Management Register in SECCFG region */
  __IO uint32_t PINCM40;                           /* !< (@ 0x000000A0) Pin Control Management Register in SECCFG region */
  __IO uint32_t PINCM41;                           /* !< (@ 0x000000A4) Pin Control Management Register in SECCFG region */
  __IO uint32_t PINCM42;                           /* !< (@ 0x000000A8) Pin Control Management Register in SECCFG region */
  __IO uint32_t PINCM43;                           /* !< (@ 0x000000AC) Pin Control Management Register in SECCFG region */
  __IO uint32_t PINCM44;                           /* !< (@ 0x000000B0) Pin Control Management Register in SECCFG region */
  __IO uint32_t PINCM45;                           /* !< (@ 0x000000B4) Pin Control Management Register in SECCFG region */
  __IO uint32_t PINCM46;                           /* !< (@ 0x000000B8) Pin Control Management Register in SECCFG region */
  __IO uint32_t PINCM47;                           /* !< (@ 0x000000BC) Pin Control Management Register in SECCFG region */
  __IO uint32_t PINCM48;                           /* !< (@ 0x000000C0) Pin Control Management Register in SECCFG region */
  __IO uint32_t PINCM49;                           /* !< (@ 0x000000C4) Pin Control Management Register in SECCFG region */
  __IO uint32_t PINCM50;                           /* !< (@ 0x000000C8) Pin Control Management Register in SECCFG region */
  __IO uint32_t PINCM51;                           /* !< (@ 0x000000CC) Pin Control Management Register in SECCFG region */
  __IO uint32_t PINCM52;                           /* !< (@ 0x000000D0) Pin Control Management Register in SECCFG region */
  __IO uint32_t PINCM53;                           /* !< (@ 0x000000D4) Pin Control Management Register in SECCFG region */
  __IO uint32_t PINCM54;                           /* !< (@ 0x000000D8) Pin Control Management Register in SECCFG region */
  __IO uint32_t PINCM55;                           /* !< (@ 0x000000DC) Pin Control Management Register in SECCFG region */
  __IO uint32_t PINCM56;                           /* !< (@ 0x000000E0) Pin Control Management Register in SECCFG region */
  __IO uint32_t PINCM57;                           /* !< (@ 0x000000E4) Pin Control Management Register in SECCFG region */
  __IO uint32_t PINCM58;                           /* !< (@ 0x000000E8) Pin Control Management Register in SECCFG region */
  __IO uint32_t PINCM59;                           /* !< (@ 0x000000EC) Pin Control Management Register in SECCFG region */
  __IO uint32_t PINCM60;                           /* !< (@ 0x000000F0) Pin Control Management Register in SECCFG region */
  __IO uint32_t PINCM61;                           /* !< (@ 0x000000F4) Pin Control Management Register in SECCFG region */
  __IO uint32_t PINCM62;                           /* !< (@ 0x000000F8) Pin Control Management Register in SECCFG region */
  __IO uint32_t PINCM63;                           /* !< (@ 0x000000FC) Pin Control Management Register in SECCFG region */
  __IO uint32_t PINCM64;                           /* !< (@ 0x00000100) Pin Control Management Register in SECCFG region */
  __IO uint32_t PINCM65;                           /* !< (@ 0x00000104) Pin Control Management Register in SECCFG region */
  __IO uint32_t PINCM66;                           /* !< (@ 0x00000108) Pin Control Management Register in SECCFG region */
  __IO uint32_t PINCM67;                           /* !< (@ 0x0000010C) Pin Control Management Register in SECCFG region */
  __IO uint32_t PINCM68;                           /* !< (@ 0x00000110) Pin Control Management Register in SECCFG region */
  __IO uint32_t PINCM69;                           /* !< (@ 0x00000114) Pin Control Management Register in SECCFG region */
  __IO uint32_t PINCM70;                           /* !< (@ 0x00000118) Pin Control Management Register in SECCFG region */
  __IO uint32_t PINCM71;                           /* !< (@ 0x0000011C) Pin Control Management Register in SECCFG region */
  __IO uint32_t PINCM72;                           /* !< (@ 0x00000120) Pin Control Management Register in SECCFG region */
  __IO uint32_t PINCM73;                           /* !< (@ 0x00000124) Pin Control Management Register in SECCFG region */
  __IO uint32_t PINCM74;                           /* !< (@ 0x00000128) Pin Control Management Register in SECCFG region */
  __IO uint32_t PINCM75;                           /* !< (@ 0x0000012C) Pin Control Management Register in SECCFG region */
  __IO uint32_t PINCM76;                           /* !< (@ 0x00000130) Pin Control Management Register in SECCFG region */
  __IO uint32_t PINCM77;                           /* !< (@ 0x00000134) Pin Control Management Register in SECCFG region */
  __IO uint32_t PINCM78;                           /* !< (@ 0x00000138) Pin Control Management Register in SECCFG region */
  __IO uint32_t PINCM79;                           /* !< (@ 0x0000013C) Pin Control Management Register in SECCFG region */
  __IO uint32_t PINCM80;                           /* !< (@ 0x00000140) Pin Control Management Register in SECCFG region */
  __IO uint32_t PINCM81;                           /* !< (@ 0x00000144) Pin Control Management Register in SECCFG region */
  __IO uint32_t PINCM82;                           /* !< (@ 0x00000148) Pin Control Management Register in SECCFG region */
  __IO uint32_t PINCM83;                           /* !< (@ 0x0000014C) Pin Control Management Register in SECCFG region */
  __IO uint32_t PINCM84;                           /* !< (@ 0x00000150) Pin Control Management Register in SECCFG region */
  __IO uint32_t PINCM85;                           /* !< (@ 0x00000154) Pin Control Management Register in SECCFG region */
  __IO uint32_t PINCM86;                           /* !< (@ 0x00000158) Pin Control Management Register in SECCFG region */
  __IO uint32_t PINCM87;                           /* !< (@ 0x0000015C) Pin Control Management Register in SECCFG region */
  __IO uint32_t PINCM88;                           /* !< (@ 0x00000160) Pin Control Management Register in SECCFG region */
  __IO uint32_t PINCM89;                           /* !< (@ 0x00000164) Pin Control Management Register in SECCFG region */
  __IO uint32_t PINCM90;                           /* !< (@ 0x00000168) Pin Control Management Register in SECCFG region */
  __IO uint32_t PINCM91;                           /* !< (@ 0x0000016C) Pin Control Management Register in SECCFG region */
  __IO uint32_t PINCM92;                           /* !< (@ 0x00000170) Pin Control Management Register in SECCFG region */
  __IO uint32_t PINCM93;                           /* !< (@ 0x00000174) Pin Control Management Register in SECCFG region */
  __IO uint32_t PINCM94;                           /* !< (@ 0x00000178) Pin Control Management Register in SECCFG region */
} IOMUX_M33C1_SECCFG_MMR_REGION_Regs;

/*@}*/ /* end of group IOMUX_M33C1_SECCFG_MMR_REGION */

/** @addtogroup IOMUX_M33C1
  @{
*/

typedef struct {
  IOMUX_M33C1_SECCFG_MMR_REGION_Regs  SECCFG_MMR_REGION;                 /* !< (@ 0x00000000) SECCFG register region */
       uint32_t RESERVED0[929];
  IOMUX_M33C1_UNASSIGNED_MMR_REGION_Regs  UNASSIGNED_MMR_REGION;             /* !< (@ 0x00001000) UNASSIGNED register region */
} IOMUX_M33C1_Regs;

/*@}*/ /* end of group IOMUX_M33C1 */



#if defined ( __CC_ARM )
#pragma no_anon_unions
#endif

/******************************************************************************
* IOMUX_M33C1 Register Control Bits
******************************************************************************/

/* IOMUX_M33C1_DTBENA Bits */
/* IOMUX_M33C1_DTBENA[ENABLE] Bits */
#define IOMUX_M33C1_DTBENA_ENABLE_OFS            (0)                             /* !< ENABLE Offset */
#define IOMUX_M33C1_DTBENA_ENABLE_MASK           ((uint32_t)0x000000FFU)         /* !< Enable bits */

/* IOMUX_M33C1_DTBBUSSEL Bits */
/* IOMUX_M33C1_DTBBUSSEL[SEL] Bits */
#define IOMUX_M33C1_DTBBUSSEL_SEL_OFS            (0)                             /* !< SEL Offset */
#define IOMUX_M33C1_DTBBUSSEL_SEL_MASK           ((uint32_t)0x00000001U)         /* !< DTB mode select */

/* IOMUX_M33C1_DTBOUTSEL0 Bits */
/* IOMUX_M33C1_DTBOUTSEL0[SELECT] Bits */
#define IOMUX_M33C1_DTBOUTSEL0_SELECT_OFS        (0)                             /* !< SELECT Offset */
#define IOMUX_M33C1_DTBOUTSEL0_SELECT_MASK       ((uint32_t)0x0000007FU)         /* !< Select bits */
#define IOMUX_M33C1_DTBOUTSEL0_SELECT_NONE       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_DTBOUTSEL0_SELECT_TRNG       ((uint32_t)0x00000001U)
#define IOMUX_M33C1_DTBOUTSEL0_SELECT_LFSS       ((uint32_t)0x00000002U)
#define IOMUX_M33C1_DTBOUTSEL0_SELECT_GPIO0      ((uint32_t)0x00000003U)
#define IOMUX_M33C1_DTBOUTSEL0_SELECT_GPIO1      ((uint32_t)0x00000004U)
#define IOMUX_M33C1_DTBOUTSEL0_SELECT_GPIO2      ((uint32_t)0x00000005U)
#define IOMUX_M33C1_DTBOUTSEL0_SELECT_ADCMODEL_M33_WRAP0 ((uint32_t)0x00000006U)
#define IOMUX_M33C1_DTBOUTSEL0_SELECT_ADCMODEL_M33_WRAP1 ((uint32_t)0x00000007U)
#define IOMUX_M33C1_DTBOUTSEL0_SELECT_WUC        ((uint32_t)0x00000008U)
#define IOMUX_M33C1_DTBOUTSEL0_SELECT_I2S0       ((uint32_t)0x00000009U)
#define IOMUX_M33C1_DTBOUTSEL0_SELECT_I2S1       ((uint32_t)0x0000000AU)
#define IOMUX_M33C1_DTBOUTSEL0_SELECT_GPTIMER16BADV4CC1 ((uint32_t)0x0000000BU)
#define IOMUX_M33C1_DTBOUTSEL0_SELECT_GPTIMER16BADV4CC0 ((uint32_t)0x0000000CU)
#define IOMUX_M33C1_DTBOUTSEL0_SELECT_GPTIMER16B2CCLP0 ((uint32_t)0x0000000DU)
#define IOMUX_M33C1_DTBOUTSEL0_SELECT_GPTIMER16B2CCLP1 ((uint32_t)0x0000000EU)
#define IOMUX_M33C1_DTBOUTSEL0_SELECT_GPTIMER16B2CCLP2 ((uint32_t)0x0000000FU)
#define IOMUX_M33C1_DTBOUTSEL0_SELECT_GPTIMER16B2CCLP3 ((uint32_t)0x00000010U)
#define IOMUX_M33C1_DTBOUTSEL0_SELECT_GPTIMER16B2CCQEILP0 ((uint32_t)0x00000011U)
#define IOMUX_M33C1_DTBOUTSEL0_SELECT_GPTIMER16B2CCQEILP1 ((uint32_t)0x00000012U)
#define IOMUX_M33C1_DTBOUTSEL0_SELECT_GPTIMER32B2CC0 ((uint32_t)0x00000013U)
#define IOMUX_M33C1_DTBOUTSEL0_SELECT_NVMNW      ((uint32_t)0x00000014U)
#define IOMUX_M33C1_DTBOUTSEL0_SELECT_QSPI       ((uint32_t)0x00000015U)
#define IOMUX_M33C1_DTBOUTSEL0_SELECT_SYSCTL     ((uint32_t)0x00000016U)
#define IOMUX_M33C1_DTBOUTSEL0_SELECT_ANACOMP0   ((uint32_t)0x00000017U)
#define IOMUX_M33C1_DTBOUTSEL0_SELECT_SPGSS0     ((uint32_t)0x00000018U)
#define IOMUX_M33C1_DTBOUTSEL0_SELECT_SPGSS1     ((uint32_t)0x00000019U)
#define IOMUX_M33C1_DTBOUTSEL0_SELECT_SPGSS2     ((uint32_t)0x0000001AU)
#define IOMUX_M33C1_DTBOUTSEL0_SELECT_MCPUSS     ((uint32_t)0x0000001BU)
#define IOMUX_M33C1_DTBOUTSEL0_SELECT_MCAN0      ((uint32_t)0x0000001CU)
#define IOMUX_M33C1_DTBOUTSEL0_SELECT_MCAN1      ((uint32_t)0x0000001DU)
#define IOMUX_M33C1_DTBOUTSEL0_SELECT_DMA0       ((uint32_t)0x0000001EU)
#define IOMUX_M33C1_DTBOUTSEL0_SELECT_DMA1       ((uint32_t)0x0000001FU)
#define IOMUX_M33C1_DTBOUTSEL0_SELECT_ANACOMP1   ((uint32_t)0x00000020U)
#define IOMUX_M33C1_DTBOUTSEL0_SELECT_FRI        ((uint32_t)0x00000021U)

/* IOMUX_M33C1_DTBOUTSEL1 Bits */
/* IOMUX_M33C1_DTBOUTSEL1[SELECT] Bits */
#define IOMUX_M33C1_DTBOUTSEL1_SELECT_OFS        (0)                             /* !< SELECT Offset */
#define IOMUX_M33C1_DTBOUTSEL1_SELECT_MASK       ((uint32_t)0x0000007FU)         /* !< Select bits */
#define IOMUX_M33C1_DTBOUTSEL1_SELECT_NONE       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_DTBOUTSEL1_SELECT_TRNG       ((uint32_t)0x00000001U)
#define IOMUX_M33C1_DTBOUTSEL1_SELECT_LFSS       ((uint32_t)0x00000002U)
#define IOMUX_M33C1_DTBOUTSEL1_SELECT_GPIO0      ((uint32_t)0x00000003U)
#define IOMUX_M33C1_DTBOUTSEL1_SELECT_GPIO1      ((uint32_t)0x00000004U)
#define IOMUX_M33C1_DTBOUTSEL1_SELECT_GPIO2      ((uint32_t)0x00000005U)
#define IOMUX_M33C1_DTBOUTSEL1_SELECT_ADCMODEL_M33_WRAP0 ((uint32_t)0x00000006U)
#define IOMUX_M33C1_DTBOUTSEL1_SELECT_ADCMODEL_M33_WRAP1 ((uint32_t)0x00000007U)
#define IOMUX_M33C1_DTBOUTSEL1_SELECT_WUC        ((uint32_t)0x00000008U)
#define IOMUX_M33C1_DTBOUTSEL1_SELECT_I2S0       ((uint32_t)0x00000009U)
#define IOMUX_M33C1_DTBOUTSEL1_SELECT_I2S1       ((uint32_t)0x0000000AU)
#define IOMUX_M33C1_DTBOUTSEL1_SELECT_GPTIMER16BADV4CC1 ((uint32_t)0x0000000BU)
#define IOMUX_M33C1_DTBOUTSEL1_SELECT_GPTIMER16BADV4CC0 ((uint32_t)0x0000000CU)
#define IOMUX_M33C1_DTBOUTSEL1_SELECT_GPTIMER16B2CCLP0 ((uint32_t)0x0000000DU)
#define IOMUX_M33C1_DTBOUTSEL1_SELECT_GPTIMER16B2CCLP1 ((uint32_t)0x0000000EU)
#define IOMUX_M33C1_DTBOUTSEL1_SELECT_GPTIMER16B2CCLP2 ((uint32_t)0x0000000FU)
#define IOMUX_M33C1_DTBOUTSEL1_SELECT_GPTIMER16B2CCLP3 ((uint32_t)0x00000010U)
#define IOMUX_M33C1_DTBOUTSEL1_SELECT_GPTIMER16B2CCQEILP0 ((uint32_t)0x00000011U)
#define IOMUX_M33C1_DTBOUTSEL1_SELECT_GPTIMER16B2CCQEILP1 ((uint32_t)0x00000012U)
#define IOMUX_M33C1_DTBOUTSEL1_SELECT_GPTIMER32B2CC0 ((uint32_t)0x00000013U)
#define IOMUX_M33C1_DTBOUTSEL1_SELECT_NVMNW      ((uint32_t)0x00000014U)
#define IOMUX_M33C1_DTBOUTSEL1_SELECT_QSPI       ((uint32_t)0x00000015U)
#define IOMUX_M33C1_DTBOUTSEL1_SELECT_SYSCTL     ((uint32_t)0x00000016U)
#define IOMUX_M33C1_DTBOUTSEL1_SELECT_ANACOMP0   ((uint32_t)0x00000017U)
#define IOMUX_M33C1_DTBOUTSEL1_SELECT_SPGSS0     ((uint32_t)0x00000018U)
#define IOMUX_M33C1_DTBOUTSEL1_SELECT_SPGSS1     ((uint32_t)0x00000019U)
#define IOMUX_M33C1_DTBOUTSEL1_SELECT_SPGSS2     ((uint32_t)0x0000001AU)
#define IOMUX_M33C1_DTBOUTSEL1_SELECT_MCPUSS     ((uint32_t)0x0000001BU)
#define IOMUX_M33C1_DTBOUTSEL1_SELECT_MCAN0      ((uint32_t)0x0000001CU)
#define IOMUX_M33C1_DTBOUTSEL1_SELECT_MCAN1      ((uint32_t)0x0000001DU)
#define IOMUX_M33C1_DTBOUTSEL1_SELECT_DMA0       ((uint32_t)0x0000001EU)
#define IOMUX_M33C1_DTBOUTSEL1_SELECT_DMA1       ((uint32_t)0x0000001FU)
#define IOMUX_M33C1_DTBOUTSEL1_SELECT_ANACOMP1   ((uint32_t)0x00000020U)
#define IOMUX_M33C1_DTBOUTSEL1_SELECT_FRI        ((uint32_t)0x00000021U)

/* IOMUX_M33C1_DTBOUTSEL2 Bits */
/* IOMUX_M33C1_DTBOUTSEL2[SELECT] Bits */
#define IOMUX_M33C1_DTBOUTSEL2_SELECT_OFS        (0)                             /* !< SELECT Offset */
#define IOMUX_M33C1_DTBOUTSEL2_SELECT_MASK       ((uint32_t)0x0000007FU)         /* !< Select bits */
#define IOMUX_M33C1_DTBOUTSEL2_SELECT_NONE       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_DTBOUTSEL2_SELECT_TRNG       ((uint32_t)0x00000001U)
#define IOMUX_M33C1_DTBOUTSEL2_SELECT_LFSS       ((uint32_t)0x00000002U)
#define IOMUX_M33C1_DTBOUTSEL2_SELECT_GPIO0      ((uint32_t)0x00000003U)
#define IOMUX_M33C1_DTBOUTSEL2_SELECT_GPIO1      ((uint32_t)0x00000004U)
#define IOMUX_M33C1_DTBOUTSEL2_SELECT_GPIO2      ((uint32_t)0x00000005U)
#define IOMUX_M33C1_DTBOUTSEL2_SELECT_ADCMODEL_M33_WRAP0 ((uint32_t)0x00000006U)
#define IOMUX_M33C1_DTBOUTSEL2_SELECT_ADCMODEL_M33_WRAP1 ((uint32_t)0x00000007U)
#define IOMUX_M33C1_DTBOUTSEL2_SELECT_WUC        ((uint32_t)0x00000008U)
#define IOMUX_M33C1_DTBOUTSEL2_SELECT_I2S0       ((uint32_t)0x00000009U)
#define IOMUX_M33C1_DTBOUTSEL2_SELECT_I2S1       ((uint32_t)0x0000000AU)
#define IOMUX_M33C1_DTBOUTSEL2_SELECT_GPTIMER16BADV4CC1 ((uint32_t)0x0000000BU)
#define IOMUX_M33C1_DTBOUTSEL2_SELECT_GPTIMER16BADV4CC0 ((uint32_t)0x0000000CU)
#define IOMUX_M33C1_DTBOUTSEL2_SELECT_GPTIMER16B2CCLP0 ((uint32_t)0x0000000DU)
#define IOMUX_M33C1_DTBOUTSEL2_SELECT_GPTIMER16B2CCLP1 ((uint32_t)0x0000000EU)
#define IOMUX_M33C1_DTBOUTSEL2_SELECT_GPTIMER16B2CCLP2 ((uint32_t)0x0000000FU)
#define IOMUX_M33C1_DTBOUTSEL2_SELECT_GPTIMER16B2CCLP3 ((uint32_t)0x00000010U)
#define IOMUX_M33C1_DTBOUTSEL2_SELECT_GPTIMER16B2CCQEILP0 ((uint32_t)0x00000011U)
#define IOMUX_M33C1_DTBOUTSEL2_SELECT_GPTIMER16B2CCQEILP1 ((uint32_t)0x00000012U)
#define IOMUX_M33C1_DTBOUTSEL2_SELECT_GPTIMER32B2CC0 ((uint32_t)0x00000013U)
#define IOMUX_M33C1_DTBOUTSEL2_SELECT_NVMNW      ((uint32_t)0x00000014U)
#define IOMUX_M33C1_DTBOUTSEL2_SELECT_QSPI       ((uint32_t)0x00000015U)
#define IOMUX_M33C1_DTBOUTSEL2_SELECT_SYSCTL     ((uint32_t)0x00000016U)
#define IOMUX_M33C1_DTBOUTSEL2_SELECT_ANACOMP0   ((uint32_t)0x00000017U)
#define IOMUX_M33C1_DTBOUTSEL2_SELECT_SPGSS0     ((uint32_t)0x00000018U)
#define IOMUX_M33C1_DTBOUTSEL2_SELECT_SPGSS1     ((uint32_t)0x00000019U)
#define IOMUX_M33C1_DTBOUTSEL2_SELECT_SPGSS2     ((uint32_t)0x0000001AU)
#define IOMUX_M33C1_DTBOUTSEL2_SELECT_MCPUSS     ((uint32_t)0x0000001BU)
#define IOMUX_M33C1_DTBOUTSEL2_SELECT_MCAN0      ((uint32_t)0x0000001CU)
#define IOMUX_M33C1_DTBOUTSEL2_SELECT_MCAN1      ((uint32_t)0x0000001DU)
#define IOMUX_M33C1_DTBOUTSEL2_SELECT_DMA0       ((uint32_t)0x0000001EU)
#define IOMUX_M33C1_DTBOUTSEL2_SELECT_DMA1       ((uint32_t)0x0000001FU)
#define IOMUX_M33C1_DTBOUTSEL2_SELECT_ANACOMP1   ((uint32_t)0x00000020U)
#define IOMUX_M33C1_DTBOUTSEL2_SELECT_FRI        ((uint32_t)0x00000021U)

/* IOMUX_M33C1_DTBOUTSEL3 Bits */
/* IOMUX_M33C1_DTBOUTSEL3[SELECT] Bits */
#define IOMUX_M33C1_DTBOUTSEL3_SELECT_OFS        (0)                             /* !< SELECT Offset */
#define IOMUX_M33C1_DTBOUTSEL3_SELECT_MASK       ((uint32_t)0x0000007FU)         /* !< Select bits */
#define IOMUX_M33C1_DTBOUTSEL3_SELECT_NONE       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_DTBOUTSEL3_SELECT_TRNG       ((uint32_t)0x00000001U)
#define IOMUX_M33C1_DTBOUTSEL3_SELECT_LFSS       ((uint32_t)0x00000002U)
#define IOMUX_M33C1_DTBOUTSEL3_SELECT_GPIO0      ((uint32_t)0x00000003U)
#define IOMUX_M33C1_DTBOUTSEL3_SELECT_GPIO1      ((uint32_t)0x00000004U)
#define IOMUX_M33C1_DTBOUTSEL3_SELECT_GPIO2      ((uint32_t)0x00000005U)
#define IOMUX_M33C1_DTBOUTSEL3_SELECT_ADCMODEL_M33_WRAP0 ((uint32_t)0x00000006U)
#define IOMUX_M33C1_DTBOUTSEL3_SELECT_ADCMODEL_M33_WRAP1 ((uint32_t)0x00000007U)
#define IOMUX_M33C1_DTBOUTSEL3_SELECT_WUC        ((uint32_t)0x00000008U)
#define IOMUX_M33C1_DTBOUTSEL3_SELECT_I2S0       ((uint32_t)0x00000009U)
#define IOMUX_M33C1_DTBOUTSEL3_SELECT_I2S1       ((uint32_t)0x0000000AU)
#define IOMUX_M33C1_DTBOUTSEL3_SELECT_GPTIMER16BADV4CC1 ((uint32_t)0x0000000BU)
#define IOMUX_M33C1_DTBOUTSEL3_SELECT_GPTIMER16BADV4CC0 ((uint32_t)0x0000000CU)
#define IOMUX_M33C1_DTBOUTSEL3_SELECT_GPTIMER16B2CCLP0 ((uint32_t)0x0000000DU)
#define IOMUX_M33C1_DTBOUTSEL3_SELECT_GPTIMER16B2CCLP1 ((uint32_t)0x0000000EU)
#define IOMUX_M33C1_DTBOUTSEL3_SELECT_GPTIMER16B2CCLP2 ((uint32_t)0x0000000FU)
#define IOMUX_M33C1_DTBOUTSEL3_SELECT_GPTIMER16B2CCLP3 ((uint32_t)0x00000010U)
#define IOMUX_M33C1_DTBOUTSEL3_SELECT_GPTIMER16B2CCQEILP0 ((uint32_t)0x00000011U)
#define IOMUX_M33C1_DTBOUTSEL3_SELECT_GPTIMER16B2CCQEILP1 ((uint32_t)0x00000012U)
#define IOMUX_M33C1_DTBOUTSEL3_SELECT_GPTIMER32B2CC0 ((uint32_t)0x00000013U)
#define IOMUX_M33C1_DTBOUTSEL3_SELECT_NVMNW      ((uint32_t)0x00000014U)
#define IOMUX_M33C1_DTBOUTSEL3_SELECT_QSPI       ((uint32_t)0x00000015U)
#define IOMUX_M33C1_DTBOUTSEL3_SELECT_SYSCTL     ((uint32_t)0x00000016U)
#define IOMUX_M33C1_DTBOUTSEL3_SELECT_ANACOMP0   ((uint32_t)0x00000017U)
#define IOMUX_M33C1_DTBOUTSEL3_SELECT_SPGSS0     ((uint32_t)0x00000018U)
#define IOMUX_M33C1_DTBOUTSEL3_SELECT_SPGSS1     ((uint32_t)0x00000019U)
#define IOMUX_M33C1_DTBOUTSEL3_SELECT_SPGSS2     ((uint32_t)0x0000001AU)
#define IOMUX_M33C1_DTBOUTSEL3_SELECT_MCPUSS     ((uint32_t)0x0000001BU)
#define IOMUX_M33C1_DTBOUTSEL3_SELECT_MCAN0      ((uint32_t)0x0000001CU)
#define IOMUX_M33C1_DTBOUTSEL3_SELECT_MCAN1      ((uint32_t)0x0000001DU)
#define IOMUX_M33C1_DTBOUTSEL3_SELECT_DMA0       ((uint32_t)0x0000001EU)
#define IOMUX_M33C1_DTBOUTSEL3_SELECT_DMA1       ((uint32_t)0x0000001FU)
#define IOMUX_M33C1_DTBOUTSEL3_SELECT_ANACOMP1   ((uint32_t)0x00000020U)
#define IOMUX_M33C1_DTBOUTSEL3_SELECT_FRI        ((uint32_t)0x00000021U)

/* IOMUX_M33C1_DTBOUTSEL4 Bits */
/* IOMUX_M33C1_DTBOUTSEL4[SELECT] Bits */
#define IOMUX_M33C1_DTBOUTSEL4_SELECT_OFS        (0)                             /* !< SELECT Offset */
#define IOMUX_M33C1_DTBOUTSEL4_SELECT_MASK       ((uint32_t)0x0000007FU)         /* !< Select bits */
#define IOMUX_M33C1_DTBOUTSEL4_SELECT_NONE       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_DTBOUTSEL4_SELECT_TRNG       ((uint32_t)0x00000001U)
#define IOMUX_M33C1_DTBOUTSEL4_SELECT_LFSS       ((uint32_t)0x00000002U)
#define IOMUX_M33C1_DTBOUTSEL4_SELECT_GPIO0      ((uint32_t)0x00000003U)
#define IOMUX_M33C1_DTBOUTSEL4_SELECT_GPIO1      ((uint32_t)0x00000004U)
#define IOMUX_M33C1_DTBOUTSEL4_SELECT_GPIO2      ((uint32_t)0x00000005U)
#define IOMUX_M33C1_DTBOUTSEL4_SELECT_ADCMODEL_M33_WRAP0 ((uint32_t)0x00000006U)
#define IOMUX_M33C1_DTBOUTSEL4_SELECT_ADCMODEL_M33_WRAP1 ((uint32_t)0x00000007U)
#define IOMUX_M33C1_DTBOUTSEL4_SELECT_WUC        ((uint32_t)0x00000008U)
#define IOMUX_M33C1_DTBOUTSEL4_SELECT_I2S0       ((uint32_t)0x00000009U)
#define IOMUX_M33C1_DTBOUTSEL4_SELECT_I2S1       ((uint32_t)0x0000000AU)
#define IOMUX_M33C1_DTBOUTSEL4_SELECT_GPTIMER16BADV4CC1 ((uint32_t)0x0000000BU)
#define IOMUX_M33C1_DTBOUTSEL4_SELECT_GPTIMER16BADV4CC0 ((uint32_t)0x0000000CU)
#define IOMUX_M33C1_DTBOUTSEL4_SELECT_GPTIMER16B2CCLP0 ((uint32_t)0x0000000DU)
#define IOMUX_M33C1_DTBOUTSEL4_SELECT_GPTIMER16B2CCLP1 ((uint32_t)0x0000000EU)
#define IOMUX_M33C1_DTBOUTSEL4_SELECT_GPTIMER16B2CCLP2 ((uint32_t)0x0000000FU)
#define IOMUX_M33C1_DTBOUTSEL4_SELECT_GPTIMER16B2CCLP3 ((uint32_t)0x00000010U)
#define IOMUX_M33C1_DTBOUTSEL4_SELECT_GPTIMER16B2CCQEILP0 ((uint32_t)0x00000011U)
#define IOMUX_M33C1_DTBOUTSEL4_SELECT_GPTIMER16B2CCQEILP1 ((uint32_t)0x00000012U)
#define IOMUX_M33C1_DTBOUTSEL4_SELECT_GPTIMER32B2CC0 ((uint32_t)0x00000013U)
#define IOMUX_M33C1_DTBOUTSEL4_SELECT_NVMNW      ((uint32_t)0x00000014U)
#define IOMUX_M33C1_DTBOUTSEL4_SELECT_QSPI       ((uint32_t)0x00000015U)
#define IOMUX_M33C1_DTBOUTSEL4_SELECT_SYSCTL     ((uint32_t)0x00000016U)
#define IOMUX_M33C1_DTBOUTSEL4_SELECT_ANACOMP0   ((uint32_t)0x00000017U)
#define IOMUX_M33C1_DTBOUTSEL4_SELECT_SPGSS0     ((uint32_t)0x00000018U)
#define IOMUX_M33C1_DTBOUTSEL4_SELECT_SPGSS1     ((uint32_t)0x00000019U)
#define IOMUX_M33C1_DTBOUTSEL4_SELECT_SPGSS2     ((uint32_t)0x0000001AU)
#define IOMUX_M33C1_DTBOUTSEL4_SELECT_MCPUSS     ((uint32_t)0x0000001BU)
#define IOMUX_M33C1_DTBOUTSEL4_SELECT_MCAN0      ((uint32_t)0x0000001CU)
#define IOMUX_M33C1_DTBOUTSEL4_SELECT_MCAN1      ((uint32_t)0x0000001DU)
#define IOMUX_M33C1_DTBOUTSEL4_SELECT_DMA0       ((uint32_t)0x0000001EU)
#define IOMUX_M33C1_DTBOUTSEL4_SELECT_DMA1       ((uint32_t)0x0000001FU)
#define IOMUX_M33C1_DTBOUTSEL4_SELECT_ANACOMP1   ((uint32_t)0x00000020U)
#define IOMUX_M33C1_DTBOUTSEL4_SELECT_FRI        ((uint32_t)0x00000021U)

/* IOMUX_M33C1_DTBOUTSEL5 Bits */
/* IOMUX_M33C1_DTBOUTSEL5[SELECT] Bits */
#define IOMUX_M33C1_DTBOUTSEL5_SELECT_OFS        (0)                             /* !< SELECT Offset */
#define IOMUX_M33C1_DTBOUTSEL5_SELECT_MASK       ((uint32_t)0x0000007FU)         /* !< Select bits */
#define IOMUX_M33C1_DTBOUTSEL5_SELECT_NONE       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_DTBOUTSEL5_SELECT_TRNG       ((uint32_t)0x00000001U)
#define IOMUX_M33C1_DTBOUTSEL5_SELECT_LFSS       ((uint32_t)0x00000002U)
#define IOMUX_M33C1_DTBOUTSEL5_SELECT_GPIO0      ((uint32_t)0x00000003U)
#define IOMUX_M33C1_DTBOUTSEL5_SELECT_GPIO1      ((uint32_t)0x00000004U)
#define IOMUX_M33C1_DTBOUTSEL5_SELECT_GPIO2      ((uint32_t)0x00000005U)
#define IOMUX_M33C1_DTBOUTSEL5_SELECT_ADCMODEL_M33_WRAP0 ((uint32_t)0x00000006U)
#define IOMUX_M33C1_DTBOUTSEL5_SELECT_ADCMODEL_M33_WRAP1 ((uint32_t)0x00000007U)
#define IOMUX_M33C1_DTBOUTSEL5_SELECT_WUC        ((uint32_t)0x00000008U)
#define IOMUX_M33C1_DTBOUTSEL5_SELECT_I2S0       ((uint32_t)0x00000009U)
#define IOMUX_M33C1_DTBOUTSEL5_SELECT_I2S1       ((uint32_t)0x0000000AU)
#define IOMUX_M33C1_DTBOUTSEL5_SELECT_GPTIMER16BADV4CC1 ((uint32_t)0x0000000BU)
#define IOMUX_M33C1_DTBOUTSEL5_SELECT_GPTIMER16BADV4CC0 ((uint32_t)0x0000000CU)
#define IOMUX_M33C1_DTBOUTSEL5_SELECT_GPTIMER16B2CCLP0 ((uint32_t)0x0000000DU)
#define IOMUX_M33C1_DTBOUTSEL5_SELECT_GPTIMER16B2CCLP1 ((uint32_t)0x0000000EU)
#define IOMUX_M33C1_DTBOUTSEL5_SELECT_GPTIMER16B2CCLP2 ((uint32_t)0x0000000FU)
#define IOMUX_M33C1_DTBOUTSEL5_SELECT_GPTIMER16B2CCLP3 ((uint32_t)0x00000010U)
#define IOMUX_M33C1_DTBOUTSEL5_SELECT_GPTIMER16B2CCQEILP0 ((uint32_t)0x00000011U)
#define IOMUX_M33C1_DTBOUTSEL5_SELECT_GPTIMER16B2CCQEILP1 ((uint32_t)0x00000012U)
#define IOMUX_M33C1_DTBOUTSEL5_SELECT_GPTIMER32B2CC0 ((uint32_t)0x00000013U)
#define IOMUX_M33C1_DTBOUTSEL5_SELECT_NVMNW      ((uint32_t)0x00000014U)
#define IOMUX_M33C1_DTBOUTSEL5_SELECT_QSPI       ((uint32_t)0x00000015U)
#define IOMUX_M33C1_DTBOUTSEL5_SELECT_SYSCTL     ((uint32_t)0x00000016U)
#define IOMUX_M33C1_DTBOUTSEL5_SELECT_ANACOMP0   ((uint32_t)0x00000017U)
#define IOMUX_M33C1_DTBOUTSEL5_SELECT_SPGSS0     ((uint32_t)0x00000018U)
#define IOMUX_M33C1_DTBOUTSEL5_SELECT_SPGSS1     ((uint32_t)0x00000019U)
#define IOMUX_M33C1_DTBOUTSEL5_SELECT_SPGSS2     ((uint32_t)0x0000001AU)
#define IOMUX_M33C1_DTBOUTSEL5_SELECT_MCPUSS     ((uint32_t)0x0000001BU)
#define IOMUX_M33C1_DTBOUTSEL5_SELECT_MCAN0      ((uint32_t)0x0000001CU)
#define IOMUX_M33C1_DTBOUTSEL5_SELECT_MCAN1      ((uint32_t)0x0000001DU)
#define IOMUX_M33C1_DTBOUTSEL5_SELECT_DMA0       ((uint32_t)0x0000001EU)
#define IOMUX_M33C1_DTBOUTSEL5_SELECT_DMA1       ((uint32_t)0x0000001FU)
#define IOMUX_M33C1_DTBOUTSEL5_SELECT_ANACOMP1   ((uint32_t)0x00000020U)
#define IOMUX_M33C1_DTBOUTSEL5_SELECT_FRI        ((uint32_t)0x00000021U)

/* IOMUX_M33C1_DTBOUTSEL6 Bits */
/* IOMUX_M33C1_DTBOUTSEL6[SELECT] Bits */
#define IOMUX_M33C1_DTBOUTSEL6_SELECT_OFS        (0)                             /* !< SELECT Offset */
#define IOMUX_M33C1_DTBOUTSEL6_SELECT_MASK       ((uint32_t)0x0000007FU)         /* !< Select bits */
#define IOMUX_M33C1_DTBOUTSEL6_SELECT_NONE       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_DTBOUTSEL6_SELECT_TRNG       ((uint32_t)0x00000001U)
#define IOMUX_M33C1_DTBOUTSEL6_SELECT_LFSS       ((uint32_t)0x00000002U)
#define IOMUX_M33C1_DTBOUTSEL6_SELECT_GPIO0      ((uint32_t)0x00000003U)
#define IOMUX_M33C1_DTBOUTSEL6_SELECT_GPIO1      ((uint32_t)0x00000004U)
#define IOMUX_M33C1_DTBOUTSEL6_SELECT_GPIO2      ((uint32_t)0x00000005U)
#define IOMUX_M33C1_DTBOUTSEL6_SELECT_ADCMODEL_M33_WRAP0 ((uint32_t)0x00000006U)
#define IOMUX_M33C1_DTBOUTSEL6_SELECT_ADCMODEL_M33_WRAP1 ((uint32_t)0x00000007U)
#define IOMUX_M33C1_DTBOUTSEL6_SELECT_WUC        ((uint32_t)0x00000008U)
#define IOMUX_M33C1_DTBOUTSEL6_SELECT_I2S0       ((uint32_t)0x00000009U)
#define IOMUX_M33C1_DTBOUTSEL6_SELECT_I2S1       ((uint32_t)0x0000000AU)
#define IOMUX_M33C1_DTBOUTSEL6_SELECT_GPTIMER16BADV4CC1 ((uint32_t)0x0000000BU)
#define IOMUX_M33C1_DTBOUTSEL6_SELECT_GPTIMER16BADV4CC0 ((uint32_t)0x0000000CU)
#define IOMUX_M33C1_DTBOUTSEL6_SELECT_GPTIMER16B2CCLP0 ((uint32_t)0x0000000DU)
#define IOMUX_M33C1_DTBOUTSEL6_SELECT_GPTIMER16B2CCLP1 ((uint32_t)0x0000000EU)
#define IOMUX_M33C1_DTBOUTSEL6_SELECT_GPTIMER16B2CCLP2 ((uint32_t)0x0000000FU)
#define IOMUX_M33C1_DTBOUTSEL6_SELECT_GPTIMER16B2CCLP3 ((uint32_t)0x00000010U)
#define IOMUX_M33C1_DTBOUTSEL6_SELECT_GPTIMER16B2CCQEILP0 ((uint32_t)0x00000011U)
#define IOMUX_M33C1_DTBOUTSEL6_SELECT_GPTIMER16B2CCQEILP1 ((uint32_t)0x00000012U)
#define IOMUX_M33C1_DTBOUTSEL6_SELECT_GPTIMER32B2CC0 ((uint32_t)0x00000013U)
#define IOMUX_M33C1_DTBOUTSEL6_SELECT_NVMNW      ((uint32_t)0x00000014U)
#define IOMUX_M33C1_DTBOUTSEL6_SELECT_QSPI       ((uint32_t)0x00000015U)
#define IOMUX_M33C1_DTBOUTSEL6_SELECT_SYSCTL     ((uint32_t)0x00000016U)
#define IOMUX_M33C1_DTBOUTSEL6_SELECT_ANACOMP0   ((uint32_t)0x00000017U)
#define IOMUX_M33C1_DTBOUTSEL6_SELECT_SPGSS0     ((uint32_t)0x00000018U)
#define IOMUX_M33C1_DTBOUTSEL6_SELECT_SPGSS1     ((uint32_t)0x00000019U)
#define IOMUX_M33C1_DTBOUTSEL6_SELECT_SPGSS2     ((uint32_t)0x0000001AU)
#define IOMUX_M33C1_DTBOUTSEL6_SELECT_MCPUSS     ((uint32_t)0x0000001BU)
#define IOMUX_M33C1_DTBOUTSEL6_SELECT_MCAN0      ((uint32_t)0x0000001CU)
#define IOMUX_M33C1_DTBOUTSEL6_SELECT_MCAN1      ((uint32_t)0x0000001DU)
#define IOMUX_M33C1_DTBOUTSEL6_SELECT_DMA0       ((uint32_t)0x0000001EU)
#define IOMUX_M33C1_DTBOUTSEL6_SELECT_DMA1       ((uint32_t)0x0000001FU)
#define IOMUX_M33C1_DTBOUTSEL6_SELECT_ANACOMP1   ((uint32_t)0x00000020U)
#define IOMUX_M33C1_DTBOUTSEL6_SELECT_FRI        ((uint32_t)0x00000021U)

/* IOMUX_M33C1_DTBOUTSEL7 Bits */
/* IOMUX_M33C1_DTBOUTSEL7[SELECT] Bits */
#define IOMUX_M33C1_DTBOUTSEL7_SELECT_OFS        (0)                             /* !< SELECT Offset */
#define IOMUX_M33C1_DTBOUTSEL7_SELECT_MASK       ((uint32_t)0x0000007FU)         /* !< Select bits */
#define IOMUX_M33C1_DTBOUTSEL7_SELECT_NONE       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_DTBOUTSEL7_SELECT_TRNG       ((uint32_t)0x00000001U)
#define IOMUX_M33C1_DTBOUTSEL7_SELECT_LFSS       ((uint32_t)0x00000002U)
#define IOMUX_M33C1_DTBOUTSEL7_SELECT_GPIO0      ((uint32_t)0x00000003U)
#define IOMUX_M33C1_DTBOUTSEL7_SELECT_GPIO1      ((uint32_t)0x00000004U)
#define IOMUX_M33C1_DTBOUTSEL7_SELECT_GPIO2      ((uint32_t)0x00000005U)
#define IOMUX_M33C1_DTBOUTSEL7_SELECT_ADCMODEL_M33_WRAP0 ((uint32_t)0x00000006U)
#define IOMUX_M33C1_DTBOUTSEL7_SELECT_ADCMODEL_M33_WRAP1 ((uint32_t)0x00000007U)
#define IOMUX_M33C1_DTBOUTSEL7_SELECT_WUC        ((uint32_t)0x00000008U)
#define IOMUX_M33C1_DTBOUTSEL7_SELECT_I2S0       ((uint32_t)0x00000009U)
#define IOMUX_M33C1_DTBOUTSEL7_SELECT_I2S1       ((uint32_t)0x0000000AU)
#define IOMUX_M33C1_DTBOUTSEL7_SELECT_GPTIMER16BADV4CC1 ((uint32_t)0x0000000BU)
#define IOMUX_M33C1_DTBOUTSEL7_SELECT_GPTIMER16BADV4CC0 ((uint32_t)0x0000000CU)
#define IOMUX_M33C1_DTBOUTSEL7_SELECT_GPTIMER16B2CCLP0 ((uint32_t)0x0000000DU)
#define IOMUX_M33C1_DTBOUTSEL7_SELECT_GPTIMER16B2CCLP1 ((uint32_t)0x0000000EU)
#define IOMUX_M33C1_DTBOUTSEL7_SELECT_GPTIMER16B2CCLP2 ((uint32_t)0x0000000FU)
#define IOMUX_M33C1_DTBOUTSEL7_SELECT_GPTIMER16B2CCLP3 ((uint32_t)0x00000010U)
#define IOMUX_M33C1_DTBOUTSEL7_SELECT_GPTIMER16B2CCQEILP0 ((uint32_t)0x00000011U)
#define IOMUX_M33C1_DTBOUTSEL7_SELECT_GPTIMER16B2CCQEILP1 ((uint32_t)0x00000012U)
#define IOMUX_M33C1_DTBOUTSEL7_SELECT_GPTIMER32B2CC0 ((uint32_t)0x00000013U)
#define IOMUX_M33C1_DTBOUTSEL7_SELECT_NVMNW      ((uint32_t)0x00000014U)
#define IOMUX_M33C1_DTBOUTSEL7_SELECT_QSPI       ((uint32_t)0x00000015U)
#define IOMUX_M33C1_DTBOUTSEL7_SELECT_SYSCTL     ((uint32_t)0x00000016U)
#define IOMUX_M33C1_DTBOUTSEL7_SELECT_ANACOMP0   ((uint32_t)0x00000017U)
#define IOMUX_M33C1_DTBOUTSEL7_SELECT_SPGSS0     ((uint32_t)0x00000018U)
#define IOMUX_M33C1_DTBOUTSEL7_SELECT_SPGSS1     ((uint32_t)0x00000019U)
#define IOMUX_M33C1_DTBOUTSEL7_SELECT_SPGSS2     ((uint32_t)0x0000001AU)
#define IOMUX_M33C1_DTBOUTSEL7_SELECT_MCPUSS     ((uint32_t)0x0000001BU)
#define IOMUX_M33C1_DTBOUTSEL7_SELECT_MCAN0      ((uint32_t)0x0000001CU)
#define IOMUX_M33C1_DTBOUTSEL7_SELECT_MCAN1      ((uint32_t)0x0000001DU)
#define IOMUX_M33C1_DTBOUTSEL7_SELECT_DMA0       ((uint32_t)0x0000001EU)
#define IOMUX_M33C1_DTBOUTSEL7_SELECT_DMA1       ((uint32_t)0x0000001FU)
#define IOMUX_M33C1_DTBOUTSEL7_SELECT_ANACOMP1   ((uint32_t)0x00000020U)
#define IOMUX_M33C1_DTBOUTSEL7_SELECT_FRI        ((uint32_t)0x00000021U)

/* IOMUX_M33C1_DTBDIR0 Bits */
/* IOMUX_M33C1_DTBDIR0[DIR] Bits */
#define IOMUX_M33C1_DTBDIR0_DIR_OFS              (0)                             /* !< DIR Offset */
#define IOMUX_M33C1_DTBDIR0_DIR_MASK             ((uint32_t)0x00000001U)         /* !< DTB direction bit, 0: DTB OUTPUT
                                                                                    enable, 1: DTB INPUT enable */
#define IOMUX_M33C1_DTBDIR0_DIR_OUT              ((uint32_t)0x00000000U)
#define IOMUX_M33C1_DTBDIR0_DIR_IN               ((uint32_t)0x00000001U)

/* IOMUX_M33C1_DTBDIR1 Bits */
/* IOMUX_M33C1_DTBDIR1[DIR] Bits */
#define IOMUX_M33C1_DTBDIR1_DIR_OFS              (0)                             /* !< DIR Offset */
#define IOMUX_M33C1_DTBDIR1_DIR_MASK             ((uint32_t)0x00000001U)         /* !< DTB direction bit, 0: DTB OUTPUT
                                                                                    enable, 1: DTB INPUT enable */
#define IOMUX_M33C1_DTBDIR1_DIR_OUT              ((uint32_t)0x00000000U)
#define IOMUX_M33C1_DTBDIR1_DIR_IN               ((uint32_t)0x00000001U)

/* IOMUX_M33C1_DTBDIR2 Bits */
/* IOMUX_M33C1_DTBDIR2[DIR] Bits */
#define IOMUX_M33C1_DTBDIR2_DIR_OFS              (0)                             /* !< DIR Offset */
#define IOMUX_M33C1_DTBDIR2_DIR_MASK             ((uint32_t)0x00000001U)         /* !< DTB direction bit, 0: DTB OUTPUT
                                                                                    enable, 1: DTB INPUT enable */
#define IOMUX_M33C1_DTBDIR2_DIR_OUT              ((uint32_t)0x00000000U)
#define IOMUX_M33C1_DTBDIR2_DIR_IN               ((uint32_t)0x00000001U)

/* IOMUX_M33C1_DTBDIR3 Bits */
/* IOMUX_M33C1_DTBDIR3[DIR] Bits */
#define IOMUX_M33C1_DTBDIR3_DIR_OFS              (0)                             /* !< DIR Offset */
#define IOMUX_M33C1_DTBDIR3_DIR_MASK             ((uint32_t)0x00000001U)         /* !< DTB direction bit, 0: DTB OUTPUT
                                                                                    enable, 1: DTB INPUT enable */
#define IOMUX_M33C1_DTBDIR3_DIR_OUT              ((uint32_t)0x00000000U)
#define IOMUX_M33C1_DTBDIR3_DIR_IN               ((uint32_t)0x00000001U)

/* IOMUX_M33C1_DTBDIR4 Bits */
/* IOMUX_M33C1_DTBDIR4[DIR] Bits */
#define IOMUX_M33C1_DTBDIR4_DIR_OFS              (0)                             /* !< DIR Offset */
#define IOMUX_M33C1_DTBDIR4_DIR_MASK             ((uint32_t)0x00000001U)         /* !< DTB direction bit, 0: DTB OUTPUT
                                                                                    enable, 1: DTB INPUT enable */
#define IOMUX_M33C1_DTBDIR4_DIR_OUT              ((uint32_t)0x00000000U)
#define IOMUX_M33C1_DTBDIR4_DIR_IN               ((uint32_t)0x00000001U)

/* IOMUX_M33C1_DTBDIR5 Bits */
/* IOMUX_M33C1_DTBDIR5[DIR] Bits */
#define IOMUX_M33C1_DTBDIR5_DIR_OFS              (0)                             /* !< DIR Offset */
#define IOMUX_M33C1_DTBDIR5_DIR_MASK             ((uint32_t)0x00000001U)         /* !< DTB direction bit, 0: DTB OUTPUT
                                                                                    enable, 1: DTB INPUT enable */
#define IOMUX_M33C1_DTBDIR5_DIR_OUT              ((uint32_t)0x00000000U)
#define IOMUX_M33C1_DTBDIR5_DIR_IN               ((uint32_t)0x00000001U)

/* IOMUX_M33C1_DTBDIR6 Bits */
/* IOMUX_M33C1_DTBDIR6[DIR] Bits */
#define IOMUX_M33C1_DTBDIR6_DIR_OFS              (0)                             /* !< DIR Offset */
#define IOMUX_M33C1_DTBDIR6_DIR_MASK             ((uint32_t)0x00000001U)         /* !< DTB direction bit, 0: DTB OUTPUT
                                                                                    enable, 1: DTB INPUT enable */
#define IOMUX_M33C1_DTBDIR6_DIR_OUT              ((uint32_t)0x00000000U)
#define IOMUX_M33C1_DTBDIR6_DIR_IN               ((uint32_t)0x00000001U)

/* IOMUX_M33C1_DTBDIR7 Bits */
/* IOMUX_M33C1_DTBDIR7[DIR] Bits */
#define IOMUX_M33C1_DTBDIR7_DIR_OFS              (0)                             /* !< DIR Offset */
#define IOMUX_M33C1_DTBDIR7_DIR_MASK             ((uint32_t)0x00000001U)         /* !< DTB direction bit, 0: DTB OUTPUT
                                                                                    enable, 1: DTB INPUT enable */
#define IOMUX_M33C1_DTBDIR7_DIR_OUT              ((uint32_t)0x00000000U)
#define IOMUX_M33C1_DTBDIR7_DIR_IN               ((uint32_t)0x00000001U)

/* IOMUX_M33C1_PINCM1 Bits */
/* IOMUX_M33C1_PINCM1[WCOMP] Bits */
#define IOMUX_M33C1_PINCM1_WCOMP_OFS             (28)                            /* !< WCOMP Offset */
#define IOMUX_M33C1_PINCM1_WCOMP_MASK            ((uint32_t)0x10000000U)         /* !< Wakeup Compare Value bit */
#define IOMUX_M33C1_PINCM1_WCOMP_MATCH0          ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM1_WCOMP_MATCH1          ((uint32_t)0x10000000U)
/* IOMUX_M33C1_PINCM1[WUEN] Bits */
#define IOMUX_M33C1_PINCM1_WUEN_OFS              (27)                            /* !< WUEN Offset */
#define IOMUX_M33C1_PINCM1_WUEN_MASK             ((uint32_t)0x08000000U)         /* !< Wakeup Enable bit */
#define IOMUX_M33C1_PINCM1_WUEN_DISABLE          ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM1_WUEN_ENABLE           ((uint32_t)0x08000000U)
/* IOMUX_M33C1_PINCM1[INV] Bits */
#define IOMUX_M33C1_PINCM1_INV_OFS               (26)                            /* !< INV Offset */
#define IOMUX_M33C1_PINCM1_INV_MASK              ((uint32_t)0x04000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM1_INV_DISABLE           ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM1_INV_ENABLE            ((uint32_t)0x04000000U)
/* IOMUX_M33C1_PINCM1[Z1] Bits */
#define IOMUX_M33C1_PINCM1_Z1_OFS                (25)                            /* !< Z1 Offset */
#define IOMUX_M33C1_PINCM1_Z1_MASK               ((uint32_t)0x02000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM1_Z1_DISABLE            ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM1_Z1_ENABLE             ((uint32_t)0x02000000U)
/* IOMUX_M33C1_PINCM1[INENA] Bits */
#define IOMUX_M33C1_PINCM1_INENA_OFS             (18)                            /* !< INENA Offset */
#define IOMUX_M33C1_PINCM1_INENA_MASK            ((uint32_t)0x00040000U)         /* !< bit */
#define IOMUX_M33C1_PINCM1_INENA_PADCORE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM1_INENA_CORE0           ((uint32_t)0x00040000U)
/* IOMUX_M33C1_PINCM1[PIPU] Bits */
#define IOMUX_M33C1_PINCM1_PIPU_OFS              (17)                            /* !< PIPU Offset */
#define IOMUX_M33C1_PINCM1_PIPU_MASK             ((uint32_t)0x00020000U)         /* !< bit */
#define IOMUX_M33C1_PINCM1_PIPU_DISABLE          ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM1_PIPU_ENABLE           ((uint32_t)0x00020000U)
/* IOMUX_M33C1_PINCM1[PIPD] Bits */
#define IOMUX_M33C1_PINCM1_PIPD_OFS              (16)                            /* !< PIPD Offset */
#define IOMUX_M33C1_PINCM1_PIPD_MASK             ((uint32_t)0x00010000U)         /* !< bit */
#define IOMUX_M33C1_PINCM1_PIPD_DISABLE          ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM1_PIPD_ENABLE           ((uint32_t)0x00010000U)
/* IOMUX_M33C1_PINCM1[WAKESTATE] Bits */
#define IOMUX_M33C1_PINCM1_WAKESTATE_OFS         (13)                            /* !< WAKESTATE Offset */
#define IOMUX_M33C1_PINCM1_WAKESTATE_MASK        ((uint32_t)0x00002000U)         /* !< bit */
/* IOMUX_M33C1_PINCM1[PC] Bits */
#define IOMUX_M33C1_PINCM1_PC_OFS                (7)                             /* !< PC Offset */
#define IOMUX_M33C1_PINCM1_PC_MASK               ((uint32_t)0x00000080U)         /* !< bit */
#define IOMUX_M33C1_PINCM1_PC_UNCONNECTED        ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM1_PC_CONNECTED          ((uint32_t)0x00000080U)
/* IOMUX_M33C1_PINCM1[PF] Bits */
#define IOMUX_M33C1_PINCM1_PF_OFS                (0)                             /* !< PF Offset */
#define IOMUX_M33C1_PINCM1_PF_MASK               ((uint32_t)0x00000007U)         /* !< bit */
#define IOMUX_M33C1_PINCM1_PF_UNCONNECTED        ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM1_PF_GPIO0_DIO00        ((uint32_t)0x00000001U)
#define IOMUX_M33C1_PINCM1_PF_GPTIMER16BADV4CC0_FAULT1 ((uint32_t)0x00000002U)
#define IOMUX_M33C1_PINCM1_PF_SPGSS0_U1_SDA_TX   ((uint32_t)0x00000003U)
#define IOMUX_M33C1_PINCM1_PF_SPGSS2_U2_SCLK_SCL_RX ((uint32_t)0x00000004U)
#define IOMUX_M33C1_PINCM1_PF_SPGSS1_U4_TX       ((uint32_t)0x00000005U)
#define IOMUX_M33C1_PINCM1_PF_SPGSS1_U2_SDA      ((uint32_t)0x00000006U)

/* IOMUX_M33C1_PINCM2 Bits */
/* IOMUX_M33C1_PINCM2[WCOMP] Bits */
#define IOMUX_M33C1_PINCM2_WCOMP_OFS             (28)                            /* !< WCOMP Offset */
#define IOMUX_M33C1_PINCM2_WCOMP_MASK            ((uint32_t)0x10000000U)         /* !< Wakeup Compare Value bit */
#define IOMUX_M33C1_PINCM2_WCOMP_MATCH0          ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM2_WCOMP_MATCH1          ((uint32_t)0x10000000U)
/* IOMUX_M33C1_PINCM2[WUEN] Bits */
#define IOMUX_M33C1_PINCM2_WUEN_OFS              (27)                            /* !< WUEN Offset */
#define IOMUX_M33C1_PINCM2_WUEN_MASK             ((uint32_t)0x08000000U)         /* !< Wakeup Enable bit */
#define IOMUX_M33C1_PINCM2_WUEN_DISABLE          ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM2_WUEN_ENABLE           ((uint32_t)0x08000000U)
/* IOMUX_M33C1_PINCM2[INV] Bits */
#define IOMUX_M33C1_PINCM2_INV_OFS               (26)                            /* !< INV Offset */
#define IOMUX_M33C1_PINCM2_INV_MASK              ((uint32_t)0x04000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM2_INV_DISABLE           ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM2_INV_ENABLE            ((uint32_t)0x04000000U)
/* IOMUX_M33C1_PINCM2[Z1] Bits */
#define IOMUX_M33C1_PINCM2_Z1_OFS                (25)                            /* !< Z1 Offset */
#define IOMUX_M33C1_PINCM2_Z1_MASK               ((uint32_t)0x02000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM2_Z1_DISABLE            ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM2_Z1_ENABLE             ((uint32_t)0x02000000U)
/* IOMUX_M33C1_PINCM2[INENA] Bits */
#define IOMUX_M33C1_PINCM2_INENA_OFS             (18)                            /* !< INENA Offset */
#define IOMUX_M33C1_PINCM2_INENA_MASK            ((uint32_t)0x00040000U)         /* !< bit */
#define IOMUX_M33C1_PINCM2_INENA_PADCORE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM2_INENA_CORE0           ((uint32_t)0x00040000U)
/* IOMUX_M33C1_PINCM2[PIPU] Bits */
#define IOMUX_M33C1_PINCM2_PIPU_OFS              (17)                            /* !< PIPU Offset */
#define IOMUX_M33C1_PINCM2_PIPU_MASK             ((uint32_t)0x00020000U)         /* !< bit */
#define IOMUX_M33C1_PINCM2_PIPU_DISABLE          ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM2_PIPU_ENABLE           ((uint32_t)0x00020000U)
/* IOMUX_M33C1_PINCM2[PIPD] Bits */
#define IOMUX_M33C1_PINCM2_PIPD_OFS              (16)                            /* !< PIPD Offset */
#define IOMUX_M33C1_PINCM2_PIPD_MASK             ((uint32_t)0x00010000U)         /* !< bit */
#define IOMUX_M33C1_PINCM2_PIPD_DISABLE          ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM2_PIPD_ENABLE           ((uint32_t)0x00010000U)
/* IOMUX_M33C1_PINCM2[WAKESTATE] Bits */
#define IOMUX_M33C1_PINCM2_WAKESTATE_OFS         (13)                            /* !< WAKESTATE Offset */
#define IOMUX_M33C1_PINCM2_WAKESTATE_MASK        ((uint32_t)0x00002000U)         /* !< bit */
/* IOMUX_M33C1_PINCM2[PC] Bits */
#define IOMUX_M33C1_PINCM2_PC_OFS                (7)                             /* !< PC Offset */
#define IOMUX_M33C1_PINCM2_PC_MASK               ((uint32_t)0x00000080U)         /* !< bit */
#define IOMUX_M33C1_PINCM2_PC_UNCONNECTED        ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM2_PC_CONNECTED          ((uint32_t)0x00000080U)
/* IOMUX_M33C1_PINCM2[PF] Bits */
#define IOMUX_M33C1_PINCM2_PF_OFS                (0)                             /* !< PF Offset */
#define IOMUX_M33C1_PINCM2_PF_MASK               ((uint32_t)0x0000000FU)         /* !< bit */
#define IOMUX_M33C1_PINCM2_PF_UNCONNECTED        ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM2_PF_GPIO0_DIO01        ((uint32_t)0x00000001U)
#define IOMUX_M33C1_PINCM2_PF_GPTIMER16BADV4CC1_FAULT0 ((uint32_t)0x00000002U)
#define IOMUX_M33C1_PINCM2_PF_SPGSS0_U1_SCL_RX   ((uint32_t)0x00000003U)
#define IOMUX_M33C1_PINCM2_PF_SPGSS2_U2_PICO_SDA_TX ((uint32_t)0x00000004U)
#define IOMUX_M33C1_PINCM2_PF_SPGSS1_U4_RX       ((uint32_t)0x00000005U)
#define IOMUX_M33C1_PINCM2_PF_SPGSS1_U2_SCL      ((uint32_t)0x00000006U)
#define IOMUX_M33C1_PINCM2_PF_GPTIMER16B2CCQEILP0_IDX ((uint32_t)0x00000007U)
#define IOMUX_M33C1_PINCM2_PF_GPTIMER16BADV4CC0_CCP1 ((uint32_t)0x00000008U)

/* IOMUX_M33C1_PINCM3 Bits */
/* IOMUX_M33C1_PINCM3[WCOMP] Bits */
#define IOMUX_M33C1_PINCM3_WCOMP_OFS             (28)                            /* !< WCOMP Offset */
#define IOMUX_M33C1_PINCM3_WCOMP_MASK            ((uint32_t)0x10000000U)         /* !< Wakeup Compare Value bit */
#define IOMUX_M33C1_PINCM3_WCOMP_MATCH0          ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM3_WCOMP_MATCH1          ((uint32_t)0x10000000U)
/* IOMUX_M33C1_PINCM3[WUEN] Bits */
#define IOMUX_M33C1_PINCM3_WUEN_OFS              (27)                            /* !< WUEN Offset */
#define IOMUX_M33C1_PINCM3_WUEN_MASK             ((uint32_t)0x08000000U)         /* !< Wakeup Enable bit */
#define IOMUX_M33C1_PINCM3_WUEN_DISABLE          ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM3_WUEN_ENABLE           ((uint32_t)0x08000000U)
/* IOMUX_M33C1_PINCM3[INV] Bits */
#define IOMUX_M33C1_PINCM3_INV_OFS               (26)                            /* !< INV Offset */
#define IOMUX_M33C1_PINCM3_INV_MASK              ((uint32_t)0x04000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM3_INV_DISABLE           ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM3_INV_ENABLE            ((uint32_t)0x04000000U)
/* IOMUX_M33C1_PINCM3[Z1] Bits */
#define IOMUX_M33C1_PINCM3_Z1_OFS                (25)                            /* !< Z1 Offset */
#define IOMUX_M33C1_PINCM3_Z1_MASK               ((uint32_t)0x02000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM3_Z1_DISABLE            ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM3_Z1_ENABLE             ((uint32_t)0x02000000U)
/* IOMUX_M33C1_PINCM3[DRV] Bits */
#define IOMUX_M33C1_PINCM3_DRV_OFS               (20)                            /* !< DRV Offset */
#define IOMUX_M33C1_PINCM3_DRV_MASK              ((uint32_t)0x00100000U)         /* !< bit */
#define IOMUX_M33C1_PINCM3_DRV_DRIVEVALUE0       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM3_DRV_DRIVEVALUE1       ((uint32_t)0x00100000U)
/* IOMUX_M33C1_PINCM3[INENA] Bits */
#define IOMUX_M33C1_PINCM3_INENA_OFS             (18)                            /* !< INENA Offset */
#define IOMUX_M33C1_PINCM3_INENA_MASK            ((uint32_t)0x00040000U)         /* !< bit */
#define IOMUX_M33C1_PINCM3_INENA_PADCORE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM3_INENA_CORE0           ((uint32_t)0x00040000U)
/* IOMUX_M33C1_PINCM3[PIPU] Bits */
#define IOMUX_M33C1_PINCM3_PIPU_OFS              (17)                            /* !< PIPU Offset */
#define IOMUX_M33C1_PINCM3_PIPU_MASK             ((uint32_t)0x00020000U)         /* !< bit */
#define IOMUX_M33C1_PINCM3_PIPU_DISABLE          ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM3_PIPU_ENABLE           ((uint32_t)0x00020000U)
/* IOMUX_M33C1_PINCM3[PIPD] Bits */
#define IOMUX_M33C1_PINCM3_PIPD_OFS              (16)                            /* !< PIPD Offset */
#define IOMUX_M33C1_PINCM3_PIPD_MASK             ((uint32_t)0x00010000U)         /* !< bit */
#define IOMUX_M33C1_PINCM3_PIPD_DISABLE          ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM3_PIPD_ENABLE           ((uint32_t)0x00010000U)
/* IOMUX_M33C1_PINCM3[WAKESTATE] Bits */
#define IOMUX_M33C1_PINCM3_WAKESTATE_OFS         (13)                            /* !< WAKESTATE Offset */
#define IOMUX_M33C1_PINCM3_WAKESTATE_MASK        ((uint32_t)0x00002000U)         /* !< bit */
/* IOMUX_M33C1_PINCM3[PC] Bits */
#define IOMUX_M33C1_PINCM3_PC_OFS                (7)                             /* !< PC Offset */
#define IOMUX_M33C1_PINCM3_PC_MASK               ((uint32_t)0x00000080U)         /* !< bit */
#define IOMUX_M33C1_PINCM3_PC_UNCONNECTED        ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM3_PC_CONNECTED          ((uint32_t)0x00000080U)
/* IOMUX_M33C1_PINCM3[PF] Bits */
#define IOMUX_M33C1_PINCM3_PF_OFS                (0)                             /* !< PF Offset */
#define IOMUX_M33C1_PINCM3_PF_MASK               ((uint32_t)0x00000007U)         /* !< bit */
#define IOMUX_M33C1_PINCM3_PF_UNCONNECTED        ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM3_PF_GPIO0_DIO28        ((uint32_t)0x00000001U)
#define IOMUX_M33C1_PINCM3_PF_GPTIMER16BADV4CC0_FAULT0 ((uint32_t)0x00000002U)
#define IOMUX_M33C1_PINCM3_PF_SPGSS0_U1_SDA_TX   ((uint32_t)0x00000003U)
#define IOMUX_M33C1_PINCM3_PF_SPGSS2_U2_CS0_CTS  ((uint32_t)0x00000004U)
#define IOMUX_M33C1_PINCM3_PF_SPGSS1_U4_TX       ((uint32_t)0x00000005U)
#define IOMUX_M33C1_PINCM3_PF_SPGSS1_U2_SDA      ((uint32_t)0x00000006U)

/* IOMUX_M33C1_PINCM4 Bits */
/* IOMUX_M33C1_PINCM4[WCOMP] Bits */
#define IOMUX_M33C1_PINCM4_WCOMP_OFS             (28)                            /* !< WCOMP Offset */
#define IOMUX_M33C1_PINCM4_WCOMP_MASK            ((uint32_t)0x10000000U)         /* !< Wakeup Compare Value bit */
#define IOMUX_M33C1_PINCM4_WCOMP_MATCH0          ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM4_WCOMP_MATCH1          ((uint32_t)0x10000000U)
/* IOMUX_M33C1_PINCM4[WUEN] Bits */
#define IOMUX_M33C1_PINCM4_WUEN_OFS              (27)                            /* !< WUEN Offset */
#define IOMUX_M33C1_PINCM4_WUEN_MASK             ((uint32_t)0x08000000U)         /* !< Wakeup Enable bit */
#define IOMUX_M33C1_PINCM4_WUEN_DISABLE          ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM4_WUEN_ENABLE           ((uint32_t)0x08000000U)
/* IOMUX_M33C1_PINCM4[INV] Bits */
#define IOMUX_M33C1_PINCM4_INV_OFS               (26)                            /* !< INV Offset */
#define IOMUX_M33C1_PINCM4_INV_MASK              ((uint32_t)0x04000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM4_INV_DISABLE           ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM4_INV_ENABLE            ((uint32_t)0x04000000U)
/* IOMUX_M33C1_PINCM4[Z1] Bits */
#define IOMUX_M33C1_PINCM4_Z1_OFS                (25)                            /* !< Z1 Offset */
#define IOMUX_M33C1_PINCM4_Z1_MASK               ((uint32_t)0x02000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM4_Z1_DISABLE            ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM4_Z1_ENABLE             ((uint32_t)0x02000000U)
/* IOMUX_M33C1_PINCM4[INENA] Bits */
#define IOMUX_M33C1_PINCM4_INENA_OFS             (18)                            /* !< INENA Offset */
#define IOMUX_M33C1_PINCM4_INENA_MASK            ((uint32_t)0x00040000U)         /* !< bit */
#define IOMUX_M33C1_PINCM4_INENA_PADCORE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM4_INENA_CORE0           ((uint32_t)0x00040000U)
/* IOMUX_M33C1_PINCM4[PIPU] Bits */
#define IOMUX_M33C1_PINCM4_PIPU_OFS              (17)                            /* !< PIPU Offset */
#define IOMUX_M33C1_PINCM4_PIPU_MASK             ((uint32_t)0x00020000U)         /* !< bit */
#define IOMUX_M33C1_PINCM4_PIPU_DISABLE          ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM4_PIPU_ENABLE           ((uint32_t)0x00020000U)
/* IOMUX_M33C1_PINCM4[PIPD] Bits */
#define IOMUX_M33C1_PINCM4_PIPD_OFS              (16)                            /* !< PIPD Offset */
#define IOMUX_M33C1_PINCM4_PIPD_MASK             ((uint32_t)0x00010000U)         /* !< bit */
#define IOMUX_M33C1_PINCM4_PIPD_DISABLE          ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM4_PIPD_ENABLE           ((uint32_t)0x00010000U)
/* IOMUX_M33C1_PINCM4[PC] Bits */
#define IOMUX_M33C1_PINCM4_PC_OFS                (7)                             /* !< PC Offset */
#define IOMUX_M33C1_PINCM4_PC_MASK               ((uint32_t)0x00000080U)         /* !< bit */
#define IOMUX_M33C1_PINCM4_PC_UNCONNECTED        ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM4_PC_CONNECTED          ((uint32_t)0x00000080U)
/* IOMUX_M33C1_PINCM4[PF] Bits */
#define IOMUX_M33C1_PINCM4_PF_OFS                (0)                             /* !< PF Offset */
#define IOMUX_M33C1_PINCM4_PF_MASK               ((uint32_t)0x00000007U)         /* !< bit */
#define IOMUX_M33C1_PINCM4_PF_UNCONNECTED        ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM4_PF_GPIO0_DIO29        ((uint32_t)0x00000001U)
#define IOMUX_M33C1_PINCM4_PF_GPTIMER16B2CCLP2_CCP0 ((uint32_t)0x00000002U)
#define IOMUX_M33C1_PINCM4_PF_GPTIMER16BADV4CC1_FAULT1 ((uint32_t)0x00000003U)
#define IOMUX_M33C1_PINCM4_PF_SPGSS2_U2_POCI_RTS ((uint32_t)0x00000004U)
#define IOMUX_M33C1_PINCM4_PF_SPGSS1_U4_RTS      ((uint32_t)0x00000005U)
#define IOMUX_M33C1_PINCM4_PF_SPGSS0_U2_SCL_RX   ((uint32_t)0x00000006U)
#define IOMUX_M33C1_PINCM4_PF_SPGSS1_U3_SCL      ((uint32_t)0x00000007U)

/* IOMUX_M33C1_PINCM5 Bits */
/* IOMUX_M33C1_PINCM5[WCOMP] Bits */
#define IOMUX_M33C1_PINCM5_WCOMP_OFS             (28)                            /* !< WCOMP Offset */
#define IOMUX_M33C1_PINCM5_WCOMP_MASK            ((uint32_t)0x10000000U)         /* !< Wakeup Compare Value bit */
#define IOMUX_M33C1_PINCM5_WCOMP_MATCH0          ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM5_WCOMP_MATCH1          ((uint32_t)0x10000000U)
/* IOMUX_M33C1_PINCM5[WUEN] Bits */
#define IOMUX_M33C1_PINCM5_WUEN_OFS              (27)                            /* !< WUEN Offset */
#define IOMUX_M33C1_PINCM5_WUEN_MASK             ((uint32_t)0x08000000U)         /* !< Wakeup Enable bit */
#define IOMUX_M33C1_PINCM5_WUEN_DISABLE          ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM5_WUEN_ENABLE           ((uint32_t)0x08000000U)
/* IOMUX_M33C1_PINCM5[INV] Bits */
#define IOMUX_M33C1_PINCM5_INV_OFS               (26)                            /* !< INV Offset */
#define IOMUX_M33C1_PINCM5_INV_MASK              ((uint32_t)0x04000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM5_INV_DISABLE           ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM5_INV_ENABLE            ((uint32_t)0x04000000U)
/* IOMUX_M33C1_PINCM5[Z1] Bits */
#define IOMUX_M33C1_PINCM5_Z1_OFS                (25)                            /* !< Z1 Offset */
#define IOMUX_M33C1_PINCM5_Z1_MASK               ((uint32_t)0x02000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM5_Z1_DISABLE            ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM5_Z1_ENABLE             ((uint32_t)0x02000000U)
/* IOMUX_M33C1_PINCM5[INENA] Bits */
#define IOMUX_M33C1_PINCM5_INENA_OFS             (18)                            /* !< INENA Offset */
#define IOMUX_M33C1_PINCM5_INENA_MASK            ((uint32_t)0x00040000U)         /* !< bit */
#define IOMUX_M33C1_PINCM5_INENA_PADCORE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM5_INENA_CORE0           ((uint32_t)0x00040000U)
/* IOMUX_M33C1_PINCM5[PIPU] Bits */
#define IOMUX_M33C1_PINCM5_PIPU_OFS              (17)                            /* !< PIPU Offset */
#define IOMUX_M33C1_PINCM5_PIPU_MASK             ((uint32_t)0x00020000U)         /* !< bit */
#define IOMUX_M33C1_PINCM5_PIPU_DISABLE          ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM5_PIPU_ENABLE           ((uint32_t)0x00020000U)
/* IOMUX_M33C1_PINCM5[PIPD] Bits */
#define IOMUX_M33C1_PINCM5_PIPD_OFS              (16)                            /* !< PIPD Offset */
#define IOMUX_M33C1_PINCM5_PIPD_MASK             ((uint32_t)0x00010000U)         /* !< bit */
#define IOMUX_M33C1_PINCM5_PIPD_DISABLE          ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM5_PIPD_ENABLE           ((uint32_t)0x00010000U)
/* IOMUX_M33C1_PINCM5[PC] Bits */
#define IOMUX_M33C1_PINCM5_PC_OFS                (7)                             /* !< PC Offset */
#define IOMUX_M33C1_PINCM5_PC_MASK               ((uint32_t)0x00000080U)         /* !< bit */
#define IOMUX_M33C1_PINCM5_PC_UNCONNECTED        ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM5_PC_CONNECTED          ((uint32_t)0x00000080U)
/* IOMUX_M33C1_PINCM5[PF] Bits */
#define IOMUX_M33C1_PINCM5_PF_OFS                (0)                             /* !< PF Offset */
#define IOMUX_M33C1_PINCM5_PF_MASK               ((uint32_t)0x00000007U)         /* !< bit */
#define IOMUX_M33C1_PINCM5_PF_UNCONNECTED        ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM5_PF_GPIO0_DIO30        ((uint32_t)0x00000001U)
#define IOMUX_M33C1_PINCM5_PF_GPTIMER16B2CCLP2_CCP1 ((uint32_t)0x00000002U)
#define IOMUX_M33C1_PINCM5_PF_GPTIMER16BADV4CC0_FAULT2 ((uint32_t)0x00000003U)
#define IOMUX_M33C1_PINCM5_PF_SPGSS1_U4_CTS      ((uint32_t)0x00000005U)
#define IOMUX_M33C1_PINCM5_PF_SPGSS0_U2_SDA_TX   ((uint32_t)0x00000006U)
#define IOMUX_M33C1_PINCM5_PF_SPGSS1_U3_SDA      ((uint32_t)0x00000007U)

/* IOMUX_M33C1_PINCM7 Bits */
/* IOMUX_M33C1_PINCM7[WCOMP] Bits */
#define IOMUX_M33C1_PINCM7_WCOMP_OFS             (28)                            /* !< WCOMP Offset */
#define IOMUX_M33C1_PINCM7_WCOMP_MASK            ((uint32_t)0x10000000U)         /* !< Wakeup Compare Value bit */
#define IOMUX_M33C1_PINCM7_WCOMP_MATCH0          ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM7_WCOMP_MATCH1          ((uint32_t)0x10000000U)
/* IOMUX_M33C1_PINCM7[WUEN] Bits */
#define IOMUX_M33C1_PINCM7_WUEN_OFS              (27)                            /* !< WUEN Offset */
#define IOMUX_M33C1_PINCM7_WUEN_MASK             ((uint32_t)0x08000000U)         /* !< Wakeup Enable bit */
#define IOMUX_M33C1_PINCM7_WUEN_DISABLE          ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM7_WUEN_ENABLE           ((uint32_t)0x08000000U)
/* IOMUX_M33C1_PINCM7[INV] Bits */
#define IOMUX_M33C1_PINCM7_INV_OFS               (26)                            /* !< INV Offset */
#define IOMUX_M33C1_PINCM7_INV_MASK              ((uint32_t)0x04000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM7_INV_DISABLE           ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM7_INV_ENABLE            ((uint32_t)0x04000000U)
/* IOMUX_M33C1_PINCM7[Z1] Bits */
#define IOMUX_M33C1_PINCM7_Z1_OFS                (25)                            /* !< Z1 Offset */
#define IOMUX_M33C1_PINCM7_Z1_MASK               ((uint32_t)0x02000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM7_Z1_DISABLE            ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM7_Z1_ENABLE             ((uint32_t)0x02000000U)
/* IOMUX_M33C1_PINCM7[INENA] Bits */
#define IOMUX_M33C1_PINCM7_INENA_OFS             (18)                            /* !< INENA Offset */
#define IOMUX_M33C1_PINCM7_INENA_MASK            ((uint32_t)0x00040000U)         /* !< bit */
#define IOMUX_M33C1_PINCM7_INENA_PADCORE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM7_INENA_CORE0           ((uint32_t)0x00040000U)
/* IOMUX_M33C1_PINCM7[PIPU] Bits */
#define IOMUX_M33C1_PINCM7_PIPU_OFS              (17)                            /* !< PIPU Offset */
#define IOMUX_M33C1_PINCM7_PIPU_MASK             ((uint32_t)0x00020000U)         /* !< bit */
#define IOMUX_M33C1_PINCM7_PIPU_DISABLE          ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM7_PIPU_ENABLE           ((uint32_t)0x00020000U)
/* IOMUX_M33C1_PINCM7[PIPD] Bits */
#define IOMUX_M33C1_PINCM7_PIPD_OFS              (16)                            /* !< PIPD Offset */
#define IOMUX_M33C1_PINCM7_PIPD_MASK             ((uint32_t)0x00010000U)         /* !< bit */
#define IOMUX_M33C1_PINCM7_PIPD_DISABLE          ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM7_PIPD_ENABLE           ((uint32_t)0x00010000U)
/* IOMUX_M33C1_PINCM7[PC] Bits */
#define IOMUX_M33C1_PINCM7_PC_OFS                (7)                             /* !< PC Offset */
#define IOMUX_M33C1_PINCM7_PC_MASK               ((uint32_t)0x00000080U)         /* !< bit */
#define IOMUX_M33C1_PINCM7_PC_UNCONNECTED        ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM7_PC_CONNECTED          ((uint32_t)0x00000080U)
/* IOMUX_M33C1_PINCM7[PF] Bits */
#define IOMUX_M33C1_PINCM7_PF_OFS                (0)                             /* !< PF Offset */
#define IOMUX_M33C1_PINCM7_PF_MASK               ((uint32_t)0x00000007U)         /* !< bit */
#define IOMUX_M33C1_PINCM7_PF_UNCONNECTED        ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM7_PF_GPIO0_DIO02        ((uint32_t)0x00000001U)
#define IOMUX_M33C1_PINCM7_PF_GPTIMER16B2CCQEILP0_CCP1 ((uint32_t)0x00000002U)
#define IOMUX_M33C1_PINCM7_PF_GPTIMER16BADV4CC0_CCP1 ((uint32_t)0x00000003U)
#define IOMUX_M33C1_PINCM7_PF_SPGSS1_U4_RX       ((uint32_t)0x00000004U)
#define IOMUX_M33C1_PINCM7_PF_SPGSS1_U0_CS0      ((uint32_t)0x00000005U)
#define IOMUX_M33C1_PINCM7_PF_SPGSS2_U0_POCI_RTS ((uint32_t)0x00000006U)
#define IOMUX_M33C1_PINCM7_PF_SPGSS2_U2_POCI_RTS ((uint32_t)0x00000007U)

/* IOMUX_M33C1_PINCM8 Bits */
/* IOMUX_M33C1_PINCM8[WCOMP] Bits */
#define IOMUX_M33C1_PINCM8_WCOMP_OFS             (28)                            /* !< WCOMP Offset */
#define IOMUX_M33C1_PINCM8_WCOMP_MASK            ((uint32_t)0x10000000U)         /* !< Wakeup Compare Value bit */
#define IOMUX_M33C1_PINCM8_WCOMP_MATCH0          ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM8_WCOMP_MATCH1          ((uint32_t)0x10000000U)
/* IOMUX_M33C1_PINCM8[WUEN] Bits */
#define IOMUX_M33C1_PINCM8_WUEN_OFS              (27)                            /* !< WUEN Offset */
#define IOMUX_M33C1_PINCM8_WUEN_MASK             ((uint32_t)0x08000000U)         /* !< Wakeup Enable bit */
#define IOMUX_M33C1_PINCM8_WUEN_DISABLE          ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM8_WUEN_ENABLE           ((uint32_t)0x08000000U)
/* IOMUX_M33C1_PINCM8[INV] Bits */
#define IOMUX_M33C1_PINCM8_INV_OFS               (26)                            /* !< INV Offset */
#define IOMUX_M33C1_PINCM8_INV_MASK              ((uint32_t)0x04000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM8_INV_DISABLE           ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM8_INV_ENABLE            ((uint32_t)0x04000000U)
/* IOMUX_M33C1_PINCM8[Z1] Bits */
#define IOMUX_M33C1_PINCM8_Z1_OFS                (25)                            /* !< Z1 Offset */
#define IOMUX_M33C1_PINCM8_Z1_MASK               ((uint32_t)0x02000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM8_Z1_DISABLE            ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM8_Z1_ENABLE             ((uint32_t)0x02000000U)
/* IOMUX_M33C1_PINCM8[INENA] Bits */
#define IOMUX_M33C1_PINCM8_INENA_OFS             (18)                            /* !< INENA Offset */
#define IOMUX_M33C1_PINCM8_INENA_MASK            ((uint32_t)0x00040000U)         /* !< bit */
#define IOMUX_M33C1_PINCM8_INENA_PADCORE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM8_INENA_CORE0           ((uint32_t)0x00040000U)
/* IOMUX_M33C1_PINCM8[PIPU] Bits */
#define IOMUX_M33C1_PINCM8_PIPU_OFS              (17)                            /* !< PIPU Offset */
#define IOMUX_M33C1_PINCM8_PIPU_MASK             ((uint32_t)0x00020000U)         /* !< bit */
#define IOMUX_M33C1_PINCM8_PIPU_DISABLE          ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM8_PIPU_ENABLE           ((uint32_t)0x00020000U)
/* IOMUX_M33C1_PINCM8[PIPD] Bits */
#define IOMUX_M33C1_PINCM8_PIPD_OFS              (16)                            /* !< PIPD Offset */
#define IOMUX_M33C1_PINCM8_PIPD_MASK             ((uint32_t)0x00010000U)         /* !< bit */
#define IOMUX_M33C1_PINCM8_PIPD_DISABLE          ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM8_PIPD_ENABLE           ((uint32_t)0x00010000U)
/* IOMUX_M33C1_PINCM8[PC] Bits */
#define IOMUX_M33C1_PINCM8_PC_OFS                (7)                             /* !< PC Offset */
#define IOMUX_M33C1_PINCM8_PC_MASK               ((uint32_t)0x00000080U)         /* !< bit */
#define IOMUX_M33C1_PINCM8_PC_UNCONNECTED        ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM8_PC_CONNECTED          ((uint32_t)0x00000080U)
/* IOMUX_M33C1_PINCM8[PF] Bits */
#define IOMUX_M33C1_PINCM8_PF_OFS                (0)                             /* !< PF Offset */
#define IOMUX_M33C1_PINCM8_PF_MASK               ((uint32_t)0x00000007U)         /* !< bit */
#define IOMUX_M33C1_PINCM8_PF_UNCONNECTED        ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM8_PF_GPIO0_DIO03        ((uint32_t)0x00000001U)
#define IOMUX_M33C1_PINCM8_PF_GPTIMER16B2CCQEILP0_CCP0 ((uint32_t)0x00000002U)
#define IOMUX_M33C1_PINCM8_PF_GPTIMER16BADV4CC0_CCP1 ((uint32_t)0x00000003U)
#define IOMUX_M33C1_PINCM8_PF_SPGSS0_U2_SDA_TX   ((uint32_t)0x00000004U)
#define IOMUX_M33C1_PINCM8_PF_SPGSS1_U0_CS1      ((uint32_t)0x00000005U)
#define IOMUX_M33C1_PINCM8_PF_ANACOMP1_OUT       ((uint32_t)0x00000006U)
#define IOMUX_M33C1_PINCM8_PF_SPGSS1_U3_SDA      ((uint32_t)0x00000007U)

/* IOMUX_M33C1_PINCM9 Bits */
/* IOMUX_M33C1_PINCM9[WCOMP] Bits */
#define IOMUX_M33C1_PINCM9_WCOMP_OFS             (28)                            /* !< WCOMP Offset */
#define IOMUX_M33C1_PINCM9_WCOMP_MASK            ((uint32_t)0x10000000U)         /* !< Wakeup Compare Value bit */
#define IOMUX_M33C1_PINCM9_WCOMP_MATCH0          ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM9_WCOMP_MATCH1          ((uint32_t)0x10000000U)
/* IOMUX_M33C1_PINCM9[WUEN] Bits */
#define IOMUX_M33C1_PINCM9_WUEN_OFS              (27)                            /* !< WUEN Offset */
#define IOMUX_M33C1_PINCM9_WUEN_MASK             ((uint32_t)0x08000000U)         /* !< Wakeup Enable bit */
#define IOMUX_M33C1_PINCM9_WUEN_DISABLE          ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM9_WUEN_ENABLE           ((uint32_t)0x08000000U)
/* IOMUX_M33C1_PINCM9[INV] Bits */
#define IOMUX_M33C1_PINCM9_INV_OFS               (26)                            /* !< INV Offset */
#define IOMUX_M33C1_PINCM9_INV_MASK              ((uint32_t)0x04000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM9_INV_DISABLE           ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM9_INV_ENABLE            ((uint32_t)0x04000000U)
/* IOMUX_M33C1_PINCM9[Z1] Bits */
#define IOMUX_M33C1_PINCM9_Z1_OFS                (25)                            /* !< Z1 Offset */
#define IOMUX_M33C1_PINCM9_Z1_MASK               ((uint32_t)0x02000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM9_Z1_DISABLE            ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM9_Z1_ENABLE             ((uint32_t)0x02000000U)
/* IOMUX_M33C1_PINCM9[INENA] Bits */
#define IOMUX_M33C1_PINCM9_INENA_OFS             (18)                            /* !< INENA Offset */
#define IOMUX_M33C1_PINCM9_INENA_MASK            ((uint32_t)0x00040000U)         /* !< bit */
#define IOMUX_M33C1_PINCM9_INENA_PADCORE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM9_INENA_CORE0           ((uint32_t)0x00040000U)
/* IOMUX_M33C1_PINCM9[PIPU] Bits */
#define IOMUX_M33C1_PINCM9_PIPU_OFS              (17)                            /* !< PIPU Offset */
#define IOMUX_M33C1_PINCM9_PIPU_MASK             ((uint32_t)0x00020000U)         /* !< bit */
#define IOMUX_M33C1_PINCM9_PIPU_DISABLE          ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM9_PIPU_ENABLE           ((uint32_t)0x00020000U)
/* IOMUX_M33C1_PINCM9[PIPD] Bits */
#define IOMUX_M33C1_PINCM9_PIPD_OFS              (16)                            /* !< PIPD Offset */
#define IOMUX_M33C1_PINCM9_PIPD_MASK             ((uint32_t)0x00010000U)         /* !< bit */
#define IOMUX_M33C1_PINCM9_PIPD_DISABLE          ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM9_PIPD_ENABLE           ((uint32_t)0x00010000U)
/* IOMUX_M33C1_PINCM9[PC] Bits */
#define IOMUX_M33C1_PINCM9_PC_OFS                (7)                             /* !< PC Offset */
#define IOMUX_M33C1_PINCM9_PC_MASK               ((uint32_t)0x00000080U)         /* !< bit */
#define IOMUX_M33C1_PINCM9_PC_UNCONNECTED        ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM9_PC_CONNECTED          ((uint32_t)0x00000080U)
/* IOMUX_M33C1_PINCM9[PF] Bits */
#define IOMUX_M33C1_PINCM9_PF_OFS                (0)                             /* !< PF Offset */
#define IOMUX_M33C1_PINCM9_PF_MASK               ((uint32_t)0x00000007U)         /* !< bit */
#define IOMUX_M33C1_PINCM9_PF_UNCONNECTED        ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM9_PF_GPIO0_DIO04        ((uint32_t)0x00000001U)
#define IOMUX_M33C1_PINCM9_PF_SYSCTL_LFCLKIN     ((uint32_t)0x00000002U)
#define IOMUX_M33C1_PINCM9_PF_GPTIMER16BADV4CC0_CCP1_CMPL ((uint32_t)0x00000003U)
#define IOMUX_M33C1_PINCM9_PF_SPGSS0_U2_SCL_RX   ((uint32_t)0x00000004U)
#define IOMUX_M33C1_PINCM9_PF_SPGSS1_U0_POCI     ((uint32_t)0x00000005U)
#define IOMUX_M33C1_PINCM9_PF_SPGSS2_U0_CS0_CTS  ((uint32_t)0x00000006U)
#define IOMUX_M33C1_PINCM9_PF_SPGSS1_U3_SCL      ((uint32_t)0x00000007U)

/* IOMUX_M33C1_PINCM10 Bits */
/* IOMUX_M33C1_PINCM10[WCOMP] Bits */
#define IOMUX_M33C1_PINCM10_WCOMP_OFS            (28)                            /* !< WCOMP Offset */
#define IOMUX_M33C1_PINCM10_WCOMP_MASK           ((uint32_t)0x10000000U)         /* !< Wakeup Compare Value bit */
#define IOMUX_M33C1_PINCM10_WCOMP_MATCH0         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM10_WCOMP_MATCH1         ((uint32_t)0x10000000U)
/* IOMUX_M33C1_PINCM10[WUEN] Bits */
#define IOMUX_M33C1_PINCM10_WUEN_OFS             (27)                            /* !< WUEN Offset */
#define IOMUX_M33C1_PINCM10_WUEN_MASK            ((uint32_t)0x08000000U)         /* !< Wakeup Enable bit */
#define IOMUX_M33C1_PINCM10_WUEN_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM10_WUEN_ENABLE          ((uint32_t)0x08000000U)
/* IOMUX_M33C1_PINCM10[INV] Bits */
#define IOMUX_M33C1_PINCM10_INV_OFS              (26)                            /* !< INV Offset */
#define IOMUX_M33C1_PINCM10_INV_MASK             ((uint32_t)0x04000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM10_INV_DISABLE          ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM10_INV_ENABLE           ((uint32_t)0x04000000U)
/* IOMUX_M33C1_PINCM10[Z1] Bits */
#define IOMUX_M33C1_PINCM10_Z1_OFS               (25)                            /* !< Z1 Offset */
#define IOMUX_M33C1_PINCM10_Z1_MASK              ((uint32_t)0x02000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM10_Z1_DISABLE           ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM10_Z1_ENABLE            ((uint32_t)0x02000000U)
/* IOMUX_M33C1_PINCM10[INENA] Bits */
#define IOMUX_M33C1_PINCM10_INENA_OFS            (18)                            /* !< INENA Offset */
#define IOMUX_M33C1_PINCM10_INENA_MASK           ((uint32_t)0x00040000U)         /* !< bit */
#define IOMUX_M33C1_PINCM10_INENA_PADCORE        ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM10_INENA_CORE0          ((uint32_t)0x00040000U)
/* IOMUX_M33C1_PINCM10[PIPU] Bits */
#define IOMUX_M33C1_PINCM10_PIPU_OFS             (17)                            /* !< PIPU Offset */
#define IOMUX_M33C1_PINCM10_PIPU_MASK            ((uint32_t)0x00020000U)         /* !< bit */
#define IOMUX_M33C1_PINCM10_PIPU_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM10_PIPU_ENABLE          ((uint32_t)0x00020000U)
/* IOMUX_M33C1_PINCM10[PIPD] Bits */
#define IOMUX_M33C1_PINCM10_PIPD_OFS             (16)                            /* !< PIPD Offset */
#define IOMUX_M33C1_PINCM10_PIPD_MASK            ((uint32_t)0x00010000U)         /* !< bit */
#define IOMUX_M33C1_PINCM10_PIPD_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM10_PIPD_ENABLE          ((uint32_t)0x00010000U)
/* IOMUX_M33C1_PINCM10[PC] Bits */
#define IOMUX_M33C1_PINCM10_PC_OFS               (7)                             /* !< PC Offset */
#define IOMUX_M33C1_PINCM10_PC_MASK              ((uint32_t)0x00000080U)         /* !< bit */
#define IOMUX_M33C1_PINCM10_PC_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM10_PC_CONNECTED         ((uint32_t)0x00000080U)
/* IOMUX_M33C1_PINCM10[PF] Bits */
#define IOMUX_M33C1_PINCM10_PF_OFS               (0)                             /* !< PF Offset */
#define IOMUX_M33C1_PINCM10_PF_MASK              ((uint32_t)0x00000007U)         /* !< bit */
#define IOMUX_M33C1_PINCM10_PF_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM10_PF_GPIO0_DIO05       ((uint32_t)0x00000001U)
#define IOMUX_M33C1_PINCM10_PF_GPTIMER16B2CCLP2_CCP0 ((uint32_t)0x00000002U)
#define IOMUX_M33C1_PINCM10_PF_GPTIMER16B2CCLP0_CCP0 ((uint32_t)0x00000003U)
#define IOMUX_M33C1_PINCM10_PF_SPGSS1_U0_PICO    ((uint32_t)0x00000005U)

/* IOMUX_M33C1_PINCM11 Bits */
/* IOMUX_M33C1_PINCM11[WCOMP] Bits */
#define IOMUX_M33C1_PINCM11_WCOMP_OFS            (28)                            /* !< WCOMP Offset */
#define IOMUX_M33C1_PINCM11_WCOMP_MASK           ((uint32_t)0x10000000U)         /* !< Wakeup Compare Value bit */
#define IOMUX_M33C1_PINCM11_WCOMP_MATCH0         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM11_WCOMP_MATCH1         ((uint32_t)0x10000000U)
/* IOMUX_M33C1_PINCM11[WUEN] Bits */
#define IOMUX_M33C1_PINCM11_WUEN_OFS             (27)                            /* !< WUEN Offset */
#define IOMUX_M33C1_PINCM11_WUEN_MASK            ((uint32_t)0x08000000U)         /* !< Wakeup Enable bit */
#define IOMUX_M33C1_PINCM11_WUEN_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM11_WUEN_ENABLE          ((uint32_t)0x08000000U)
/* IOMUX_M33C1_PINCM11[INV] Bits */
#define IOMUX_M33C1_PINCM11_INV_OFS              (26)                            /* !< INV Offset */
#define IOMUX_M33C1_PINCM11_INV_MASK             ((uint32_t)0x04000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM11_INV_DISABLE          ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM11_INV_ENABLE           ((uint32_t)0x04000000U)
/* IOMUX_M33C1_PINCM11[Z1] Bits */
#define IOMUX_M33C1_PINCM11_Z1_OFS               (25)                            /* !< Z1 Offset */
#define IOMUX_M33C1_PINCM11_Z1_MASK              ((uint32_t)0x02000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM11_Z1_DISABLE           ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM11_Z1_ENABLE            ((uint32_t)0x02000000U)
/* IOMUX_M33C1_PINCM11[INENA] Bits */
#define IOMUX_M33C1_PINCM11_INENA_OFS            (18)                            /* !< INENA Offset */
#define IOMUX_M33C1_PINCM11_INENA_MASK           ((uint32_t)0x00040000U)         /* !< bit */
#define IOMUX_M33C1_PINCM11_INENA_PADCORE        ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM11_INENA_CORE0          ((uint32_t)0x00040000U)
/* IOMUX_M33C1_PINCM11[PIPU] Bits */
#define IOMUX_M33C1_PINCM11_PIPU_OFS             (17)                            /* !< PIPU Offset */
#define IOMUX_M33C1_PINCM11_PIPU_MASK            ((uint32_t)0x00020000U)         /* !< bit */
#define IOMUX_M33C1_PINCM11_PIPU_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM11_PIPU_ENABLE          ((uint32_t)0x00020000U)
/* IOMUX_M33C1_PINCM11[PIPD] Bits */
#define IOMUX_M33C1_PINCM11_PIPD_OFS             (16)                            /* !< PIPD Offset */
#define IOMUX_M33C1_PINCM11_PIPD_MASK            ((uint32_t)0x00010000U)         /* !< bit */
#define IOMUX_M33C1_PINCM11_PIPD_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM11_PIPD_ENABLE          ((uint32_t)0x00010000U)
/* IOMUX_M33C1_PINCM11[PC] Bits */
#define IOMUX_M33C1_PINCM11_PC_OFS               (7)                             /* !< PC Offset */
#define IOMUX_M33C1_PINCM11_PC_MASK              ((uint32_t)0x00000080U)         /* !< bit */
#define IOMUX_M33C1_PINCM11_PC_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM11_PC_CONNECTED         ((uint32_t)0x00000080U)
/* IOMUX_M33C1_PINCM11[PF] Bits */
#define IOMUX_M33C1_PINCM11_PF_OFS               (0)                             /* !< PF Offset */
#define IOMUX_M33C1_PINCM11_PF_MASK              ((uint32_t)0x00000007U)         /* !< bit */
#define IOMUX_M33C1_PINCM11_PF_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM11_PF_GPIO0_DIO06       ((uint32_t)0x00000001U)
#define IOMUX_M33C1_PINCM11_PF_GPTIMER16B2CCLP2_CCP1 ((uint32_t)0x00000002U)
#define IOMUX_M33C1_PINCM11_PF_SYSCTL_HFCLKIN    ((uint32_t)0x00000003U)
#define IOMUX_M33C1_PINCM11_PF_GPTIMER16BADV4CC0_CCP2_CMPL ((uint32_t)0x00000004U)
#define IOMUX_M33C1_PINCM11_PF_SPGSS1_U0_SCLK    ((uint32_t)0x00000005U)
#define IOMUX_M33C1_PINCM11_PF_GPTIMER16B2CCLP0_CCP1 ((uint32_t)0x00000006U)

/* IOMUX_M33C1_PINCM12 Bits */
/* IOMUX_M33C1_PINCM12[WCOMP] Bits */
#define IOMUX_M33C1_PINCM12_WCOMP_OFS            (28)                            /* !< WCOMP Offset */
#define IOMUX_M33C1_PINCM12_WCOMP_MASK           ((uint32_t)0x10000000U)         /* !< Wakeup Compare Value bit */
#define IOMUX_M33C1_PINCM12_WCOMP_MATCH0         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM12_WCOMP_MATCH1         ((uint32_t)0x10000000U)
/* IOMUX_M33C1_PINCM12[WUEN] Bits */
#define IOMUX_M33C1_PINCM12_WUEN_OFS             (27)                            /* !< WUEN Offset */
#define IOMUX_M33C1_PINCM12_WUEN_MASK            ((uint32_t)0x08000000U)         /* !< Wakeup Enable bit */
#define IOMUX_M33C1_PINCM12_WUEN_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM12_WUEN_ENABLE          ((uint32_t)0x08000000U)
/* IOMUX_M33C1_PINCM12[INV] Bits */
#define IOMUX_M33C1_PINCM12_INV_OFS              (26)                            /* !< INV Offset */
#define IOMUX_M33C1_PINCM12_INV_MASK             ((uint32_t)0x04000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM12_INV_DISABLE          ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM12_INV_ENABLE           ((uint32_t)0x04000000U)
/* IOMUX_M33C1_PINCM12[Z1] Bits */
#define IOMUX_M33C1_PINCM12_Z1_OFS               (25)                            /* !< Z1 Offset */
#define IOMUX_M33C1_PINCM12_Z1_MASK              ((uint32_t)0x02000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM12_Z1_DISABLE           ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM12_Z1_ENABLE            ((uint32_t)0x02000000U)
/* IOMUX_M33C1_PINCM12[INENA] Bits */
#define IOMUX_M33C1_PINCM12_INENA_OFS            (18)                            /* !< INENA Offset */
#define IOMUX_M33C1_PINCM12_INENA_MASK           ((uint32_t)0x00040000U)         /* !< bit */
#define IOMUX_M33C1_PINCM12_INENA_PADCORE        ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM12_INENA_CORE0          ((uint32_t)0x00040000U)
/* IOMUX_M33C1_PINCM12[PIPU] Bits */
#define IOMUX_M33C1_PINCM12_PIPU_OFS             (17)                            /* !< PIPU Offset */
#define IOMUX_M33C1_PINCM12_PIPU_MASK            ((uint32_t)0x00020000U)         /* !< bit */
#define IOMUX_M33C1_PINCM12_PIPU_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM12_PIPU_ENABLE          ((uint32_t)0x00020000U)
/* IOMUX_M33C1_PINCM12[PIPD] Bits */
#define IOMUX_M33C1_PINCM12_PIPD_OFS             (16)                            /* !< PIPD Offset */
#define IOMUX_M33C1_PINCM12_PIPD_MASK            ((uint32_t)0x00010000U)         /* !< bit */
#define IOMUX_M33C1_PINCM12_PIPD_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM12_PIPD_ENABLE          ((uint32_t)0x00010000U)
/* IOMUX_M33C1_PINCM12[PC] Bits */
#define IOMUX_M33C1_PINCM12_PC_OFS               (7)                             /* !< PC Offset */
#define IOMUX_M33C1_PINCM12_PC_MASK              ((uint32_t)0x00000080U)         /* !< bit */
#define IOMUX_M33C1_PINCM12_PC_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM12_PC_CONNECTED         ((uint32_t)0x00000080U)
/* IOMUX_M33C1_PINCM12[PF] Bits */
#define IOMUX_M33C1_PINCM12_PF_OFS               (0)                             /* !< PF Offset */
#define IOMUX_M33C1_PINCM12_PF_MASK              ((uint32_t)0x00000007U)         /* !< bit */
#define IOMUX_M33C1_PINCM12_PF_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM12_PF_GPIO1_DIO00       ((uint32_t)0x00000001U)
#define IOMUX_M33C1_PINCM12_PF_SPGSS0_U1_SDA_TX  ((uint32_t)0x00000002U)
#define IOMUX_M33C1_PINCM12_PF_GPTIMER16B2CCLP1_CCP0 ((uint32_t)0x00000003U)
#define IOMUX_M33C1_PINCM12_PF_SPGSS1_U4_TX      ((uint32_t)0x00000004U)
#define IOMUX_M33C1_PINCM12_PF_GPTIMER16BADV4CC1_CCP2 ((uint32_t)0x00000005U)

/* IOMUX_M33C1_PINCM13 Bits */
/* IOMUX_M33C1_PINCM13[WCOMP] Bits */
#define IOMUX_M33C1_PINCM13_WCOMP_OFS            (28)                            /* !< WCOMP Offset */
#define IOMUX_M33C1_PINCM13_WCOMP_MASK           ((uint32_t)0x10000000U)         /* !< Wakeup Compare Value bit */
#define IOMUX_M33C1_PINCM13_WCOMP_MATCH0         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM13_WCOMP_MATCH1         ((uint32_t)0x10000000U)
/* IOMUX_M33C1_PINCM13[WUEN] Bits */
#define IOMUX_M33C1_PINCM13_WUEN_OFS             (27)                            /* !< WUEN Offset */
#define IOMUX_M33C1_PINCM13_WUEN_MASK            ((uint32_t)0x08000000U)         /* !< Wakeup Enable bit */
#define IOMUX_M33C1_PINCM13_WUEN_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM13_WUEN_ENABLE          ((uint32_t)0x08000000U)
/* IOMUX_M33C1_PINCM13[INV] Bits */
#define IOMUX_M33C1_PINCM13_INV_OFS              (26)                            /* !< INV Offset */
#define IOMUX_M33C1_PINCM13_INV_MASK             ((uint32_t)0x04000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM13_INV_DISABLE          ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM13_INV_ENABLE           ((uint32_t)0x04000000U)
/* IOMUX_M33C1_PINCM13[Z1] Bits */
#define IOMUX_M33C1_PINCM13_Z1_OFS               (25)                            /* !< Z1 Offset */
#define IOMUX_M33C1_PINCM13_Z1_MASK              ((uint32_t)0x02000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM13_Z1_DISABLE           ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM13_Z1_ENABLE            ((uint32_t)0x02000000U)
/* IOMUX_M33C1_PINCM13[INENA] Bits */
#define IOMUX_M33C1_PINCM13_INENA_OFS            (18)                            /* !< INENA Offset */
#define IOMUX_M33C1_PINCM13_INENA_MASK           ((uint32_t)0x00040000U)         /* !< bit */
#define IOMUX_M33C1_PINCM13_INENA_PADCORE        ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM13_INENA_CORE0          ((uint32_t)0x00040000U)
/* IOMUX_M33C1_PINCM13[PIPU] Bits */
#define IOMUX_M33C1_PINCM13_PIPU_OFS             (17)                            /* !< PIPU Offset */
#define IOMUX_M33C1_PINCM13_PIPU_MASK            ((uint32_t)0x00020000U)         /* !< bit */
#define IOMUX_M33C1_PINCM13_PIPU_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM13_PIPU_ENABLE          ((uint32_t)0x00020000U)
/* IOMUX_M33C1_PINCM13[PIPD] Bits */
#define IOMUX_M33C1_PINCM13_PIPD_OFS             (16)                            /* !< PIPD Offset */
#define IOMUX_M33C1_PINCM13_PIPD_MASK            ((uint32_t)0x00010000U)         /* !< bit */
#define IOMUX_M33C1_PINCM13_PIPD_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM13_PIPD_ENABLE          ((uint32_t)0x00010000U)
/* IOMUX_M33C1_PINCM13[PC] Bits */
#define IOMUX_M33C1_PINCM13_PC_OFS               (7)                             /* !< PC Offset */
#define IOMUX_M33C1_PINCM13_PC_MASK              ((uint32_t)0x00000080U)         /* !< bit */
#define IOMUX_M33C1_PINCM13_PC_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM13_PC_CONNECTED         ((uint32_t)0x00000080U)
/* IOMUX_M33C1_PINCM13[PF] Bits */
#define IOMUX_M33C1_PINCM13_PF_OFS               (0)                             /* !< PF Offset */
#define IOMUX_M33C1_PINCM13_PF_MASK              ((uint32_t)0x00000007U)         /* !< bit */
#define IOMUX_M33C1_PINCM13_PF_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM13_PF_GPIO1_DIO01       ((uint32_t)0x00000001U)
#define IOMUX_M33C1_PINCM13_PF_SPGSS0_U1_SCL_RX  ((uint32_t)0x00000002U)
#define IOMUX_M33C1_PINCM13_PF_GPTIMER16B2CCLP1_CCP1 ((uint32_t)0x00000003U)
#define IOMUX_M33C1_PINCM13_PF_SPGSS1_U4_RX      ((uint32_t)0x00000004U)
#define IOMUX_M33C1_PINCM13_PF_GPTIMER16BADV4CC1_CCP2_CMPL ((uint32_t)0x00000005U)

/* IOMUX_M33C1_PINCM14 Bits */
/* IOMUX_M33C1_PINCM14[WCOMP] Bits */
#define IOMUX_M33C1_PINCM14_WCOMP_OFS            (28)                            /* !< WCOMP Offset */
#define IOMUX_M33C1_PINCM14_WCOMP_MASK           ((uint32_t)0x10000000U)         /* !< Wakeup Compare Value bit */
#define IOMUX_M33C1_PINCM14_WCOMP_MATCH0         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM14_WCOMP_MATCH1         ((uint32_t)0x10000000U)
/* IOMUX_M33C1_PINCM14[WUEN] Bits */
#define IOMUX_M33C1_PINCM14_WUEN_OFS             (27)                            /* !< WUEN Offset */
#define IOMUX_M33C1_PINCM14_WUEN_MASK            ((uint32_t)0x08000000U)         /* !< Wakeup Enable bit */
#define IOMUX_M33C1_PINCM14_WUEN_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM14_WUEN_ENABLE          ((uint32_t)0x08000000U)
/* IOMUX_M33C1_PINCM14[INV] Bits */
#define IOMUX_M33C1_PINCM14_INV_OFS              (26)                            /* !< INV Offset */
#define IOMUX_M33C1_PINCM14_INV_MASK             ((uint32_t)0x04000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM14_INV_DISABLE          ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM14_INV_ENABLE           ((uint32_t)0x04000000U)
/* IOMUX_M33C1_PINCM14[Z1] Bits */
#define IOMUX_M33C1_PINCM14_Z1_OFS               (25)                            /* !< Z1 Offset */
#define IOMUX_M33C1_PINCM14_Z1_MASK              ((uint32_t)0x02000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM14_Z1_DISABLE           ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM14_Z1_ENABLE            ((uint32_t)0x02000000U)
/* IOMUX_M33C1_PINCM14[INENA] Bits */
#define IOMUX_M33C1_PINCM14_INENA_OFS            (18)                            /* !< INENA Offset */
#define IOMUX_M33C1_PINCM14_INENA_MASK           ((uint32_t)0x00040000U)         /* !< bit */
#define IOMUX_M33C1_PINCM14_INENA_PADCORE        ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM14_INENA_CORE0          ((uint32_t)0x00040000U)
/* IOMUX_M33C1_PINCM14[PIPU] Bits */
#define IOMUX_M33C1_PINCM14_PIPU_OFS             (17)                            /* !< PIPU Offset */
#define IOMUX_M33C1_PINCM14_PIPU_MASK            ((uint32_t)0x00020000U)         /* !< bit */
#define IOMUX_M33C1_PINCM14_PIPU_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM14_PIPU_ENABLE          ((uint32_t)0x00020000U)
/* IOMUX_M33C1_PINCM14[PIPD] Bits */
#define IOMUX_M33C1_PINCM14_PIPD_OFS             (16)                            /* !< PIPD Offset */
#define IOMUX_M33C1_PINCM14_PIPD_MASK            ((uint32_t)0x00010000U)         /* !< bit */
#define IOMUX_M33C1_PINCM14_PIPD_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM14_PIPD_ENABLE          ((uint32_t)0x00010000U)
/* IOMUX_M33C1_PINCM14[PC] Bits */
#define IOMUX_M33C1_PINCM14_PC_OFS               (7)                             /* !< PC Offset */
#define IOMUX_M33C1_PINCM14_PC_MASK              ((uint32_t)0x00000080U)         /* !< bit */
#define IOMUX_M33C1_PINCM14_PC_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM14_PC_CONNECTED         ((uint32_t)0x00000080U)
/* IOMUX_M33C1_PINCM14[PF] Bits */
#define IOMUX_M33C1_PINCM14_PF_OFS               (0)                             /* !< PF Offset */
#define IOMUX_M33C1_PINCM14_PF_MASK              ((uint32_t)0x00000007U)         /* !< bit */
#define IOMUX_M33C1_PINCM14_PF_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM14_PF_GPIO0_DIO07       ((uint32_t)0x00000001U)
#define IOMUX_M33C1_PINCM14_PF_GPTIMER16B2CCLP3_CCP1 ((uint32_t)0x00000002U)
#define IOMUX_M33C1_PINCM14_PF_SYSCTL_CLK_OUT    ((uint32_t)0x00000003U)
#define IOMUX_M33C1_PINCM14_PF_ANACOMP0_OUT      ((uint32_t)0x00000004U)
#define IOMUX_M33C1_PINCM14_PF_GPTIMER16BADV4CC0_CCP2 ((uint32_t)0x00000005U)
#define IOMUX_M33C1_PINCM14_PF_I2S0_WCLK         ((uint32_t)0x00000006U)

/* IOMUX_M33C1_PINCM15 Bits */
/* IOMUX_M33C1_PINCM15[WCOMP] Bits */
#define IOMUX_M33C1_PINCM15_WCOMP_OFS            (28)                            /* !< WCOMP Offset */
#define IOMUX_M33C1_PINCM15_WCOMP_MASK           ((uint32_t)0x10000000U)         /* !< Wakeup Compare Value bit */
#define IOMUX_M33C1_PINCM15_WCOMP_MATCH0         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM15_WCOMP_MATCH1         ((uint32_t)0x10000000U)
/* IOMUX_M33C1_PINCM15[WUEN] Bits */
#define IOMUX_M33C1_PINCM15_WUEN_OFS             (27)                            /* !< WUEN Offset */
#define IOMUX_M33C1_PINCM15_WUEN_MASK            ((uint32_t)0x08000000U)         /* !< Wakeup Enable bit */
#define IOMUX_M33C1_PINCM15_WUEN_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM15_WUEN_ENABLE          ((uint32_t)0x08000000U)
/* IOMUX_M33C1_PINCM15[INV] Bits */
#define IOMUX_M33C1_PINCM15_INV_OFS              (26)                            /* !< INV Offset */
#define IOMUX_M33C1_PINCM15_INV_MASK             ((uint32_t)0x04000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM15_INV_DISABLE          ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM15_INV_ENABLE           ((uint32_t)0x04000000U)
/* IOMUX_M33C1_PINCM15[Z1] Bits */
#define IOMUX_M33C1_PINCM15_Z1_OFS               (25)                            /* !< Z1 Offset */
#define IOMUX_M33C1_PINCM15_Z1_MASK              ((uint32_t)0x02000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM15_Z1_DISABLE           ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM15_Z1_ENABLE            ((uint32_t)0x02000000U)
/* IOMUX_M33C1_PINCM15[INENA] Bits */
#define IOMUX_M33C1_PINCM15_INENA_OFS            (18)                            /* !< INENA Offset */
#define IOMUX_M33C1_PINCM15_INENA_MASK           ((uint32_t)0x00040000U)         /* !< bit */
#define IOMUX_M33C1_PINCM15_INENA_PADCORE        ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM15_INENA_CORE0          ((uint32_t)0x00040000U)
/* IOMUX_M33C1_PINCM15[PIPU] Bits */
#define IOMUX_M33C1_PINCM15_PIPU_OFS             (17)                            /* !< PIPU Offset */
#define IOMUX_M33C1_PINCM15_PIPU_MASK            ((uint32_t)0x00020000U)         /* !< bit */
#define IOMUX_M33C1_PINCM15_PIPU_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM15_PIPU_ENABLE          ((uint32_t)0x00020000U)
/* IOMUX_M33C1_PINCM15[PIPD] Bits */
#define IOMUX_M33C1_PINCM15_PIPD_OFS             (16)                            /* !< PIPD Offset */
#define IOMUX_M33C1_PINCM15_PIPD_MASK            ((uint32_t)0x00010000U)         /* !< bit */
#define IOMUX_M33C1_PINCM15_PIPD_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM15_PIPD_ENABLE          ((uint32_t)0x00010000U)
/* IOMUX_M33C1_PINCM15[PC] Bits */
#define IOMUX_M33C1_PINCM15_PC_OFS               (7)                             /* !< PC Offset */
#define IOMUX_M33C1_PINCM15_PC_MASK              ((uint32_t)0x00000080U)         /* !< bit */
#define IOMUX_M33C1_PINCM15_PC_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM15_PC_CONNECTED         ((uint32_t)0x00000080U)
/* IOMUX_M33C1_PINCM15[PF] Bits */
#define IOMUX_M33C1_PINCM15_PF_OFS               (0)                             /* !< PF Offset */
#define IOMUX_M33C1_PINCM15_PF_MASK              ((uint32_t)0x00000007U)         /* !< bit */
#define IOMUX_M33C1_PINCM15_PF_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM15_PF_GPIO1_DIO02       ((uint32_t)0x00000001U)
#define IOMUX_M33C1_PINCM15_PF_GPTIMER16B2CCLP2_CCP0 ((uint32_t)0x00000002U)
#define IOMUX_M33C1_PINCM15_PF_GPTIMER16BADV4CC0_CCP3 ((uint32_t)0x00000003U)
#define IOMUX_M33C1_PINCM15_PF_SPGSS2_U0_CS0_CTS ((uint32_t)0x00000004U)
#define IOMUX_M33C1_PINCM15_PF_SPGSS0_U2_SCL_RX  ((uint32_t)0x00000005U)
#define IOMUX_M33C1_PINCM15_PF_SPGSS1_U3_SCL     ((uint32_t)0x00000006U)

/* IOMUX_M33C1_PINCM16 Bits */
/* IOMUX_M33C1_PINCM16[WCOMP] Bits */
#define IOMUX_M33C1_PINCM16_WCOMP_OFS            (28)                            /* !< WCOMP Offset */
#define IOMUX_M33C1_PINCM16_WCOMP_MASK           ((uint32_t)0x10000000U)         /* !< Wakeup Compare Value bit */
#define IOMUX_M33C1_PINCM16_WCOMP_MATCH0         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM16_WCOMP_MATCH1         ((uint32_t)0x10000000U)
/* IOMUX_M33C1_PINCM16[WUEN] Bits */
#define IOMUX_M33C1_PINCM16_WUEN_OFS             (27)                            /* !< WUEN Offset */
#define IOMUX_M33C1_PINCM16_WUEN_MASK            ((uint32_t)0x08000000U)         /* !< Wakeup Enable bit */
#define IOMUX_M33C1_PINCM16_WUEN_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM16_WUEN_ENABLE          ((uint32_t)0x08000000U)
/* IOMUX_M33C1_PINCM16[INV] Bits */
#define IOMUX_M33C1_PINCM16_INV_OFS              (26)                            /* !< INV Offset */
#define IOMUX_M33C1_PINCM16_INV_MASK             ((uint32_t)0x04000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM16_INV_DISABLE          ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM16_INV_ENABLE           ((uint32_t)0x04000000U)
/* IOMUX_M33C1_PINCM16[Z1] Bits */
#define IOMUX_M33C1_PINCM16_Z1_OFS               (25)                            /* !< Z1 Offset */
#define IOMUX_M33C1_PINCM16_Z1_MASK              ((uint32_t)0x02000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM16_Z1_DISABLE           ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM16_Z1_ENABLE            ((uint32_t)0x02000000U)
/* IOMUX_M33C1_PINCM16[INENA] Bits */
#define IOMUX_M33C1_PINCM16_INENA_OFS            (18)                            /* !< INENA Offset */
#define IOMUX_M33C1_PINCM16_INENA_MASK           ((uint32_t)0x00040000U)         /* !< bit */
#define IOMUX_M33C1_PINCM16_INENA_PADCORE        ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM16_INENA_CORE0          ((uint32_t)0x00040000U)
/* IOMUX_M33C1_PINCM16[PIPU] Bits */
#define IOMUX_M33C1_PINCM16_PIPU_OFS             (17)                            /* !< PIPU Offset */
#define IOMUX_M33C1_PINCM16_PIPU_MASK            ((uint32_t)0x00020000U)         /* !< bit */
#define IOMUX_M33C1_PINCM16_PIPU_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM16_PIPU_ENABLE          ((uint32_t)0x00020000U)
/* IOMUX_M33C1_PINCM16[PIPD] Bits */
#define IOMUX_M33C1_PINCM16_PIPD_OFS             (16)                            /* !< PIPD Offset */
#define IOMUX_M33C1_PINCM16_PIPD_MASK            ((uint32_t)0x00010000U)         /* !< bit */
#define IOMUX_M33C1_PINCM16_PIPD_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM16_PIPD_ENABLE          ((uint32_t)0x00010000U)
/* IOMUX_M33C1_PINCM16[PC] Bits */
#define IOMUX_M33C1_PINCM16_PC_OFS               (7)                             /* !< PC Offset */
#define IOMUX_M33C1_PINCM16_PC_MASK              ((uint32_t)0x00000080U)         /* !< bit */
#define IOMUX_M33C1_PINCM16_PC_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM16_PC_CONNECTED         ((uint32_t)0x00000080U)
/* IOMUX_M33C1_PINCM16[PF] Bits */
#define IOMUX_M33C1_PINCM16_PF_OFS               (0)                             /* !< PF Offset */
#define IOMUX_M33C1_PINCM16_PF_MASK              ((uint32_t)0x00000007U)         /* !< bit */
#define IOMUX_M33C1_PINCM16_PF_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM16_PF_GPIO1_DIO03       ((uint32_t)0x00000001U)
#define IOMUX_M33C1_PINCM16_PF_GPTIMER16B2CCLP2_CCP1 ((uint32_t)0x00000002U)
#define IOMUX_M33C1_PINCM16_PF_GPTIMER16BADV4CC0_CCP3_CMPL ((uint32_t)0x00000003U)
#define IOMUX_M33C1_PINCM16_PF_SPGSS2_U0_POCI_RTS ((uint32_t)0x00000004U)
#define IOMUX_M33C1_PINCM16_PF_SPGSS0_U2_SDA_TX  ((uint32_t)0x00000005U)
#define IOMUX_M33C1_PINCM16_PF_SPGSS1_U3_SDA     ((uint32_t)0x00000006U)

/* IOMUX_M33C1_PINCM17 Bits */
/* IOMUX_M33C1_PINCM17[WCOMP] Bits */
#define IOMUX_M33C1_PINCM17_WCOMP_OFS            (28)                            /* !< WCOMP Offset */
#define IOMUX_M33C1_PINCM17_WCOMP_MASK           ((uint32_t)0x10000000U)         /* !< Wakeup Compare Value bit */
#define IOMUX_M33C1_PINCM17_WCOMP_MATCH0         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM17_WCOMP_MATCH1         ((uint32_t)0x10000000U)
/* IOMUX_M33C1_PINCM17[WUEN] Bits */
#define IOMUX_M33C1_PINCM17_WUEN_OFS             (27)                            /* !< WUEN Offset */
#define IOMUX_M33C1_PINCM17_WUEN_MASK            ((uint32_t)0x08000000U)         /* !< Wakeup Enable bit */
#define IOMUX_M33C1_PINCM17_WUEN_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM17_WUEN_ENABLE          ((uint32_t)0x08000000U)
/* IOMUX_M33C1_PINCM17[INV] Bits */
#define IOMUX_M33C1_PINCM17_INV_OFS              (26)                            /* !< INV Offset */
#define IOMUX_M33C1_PINCM17_INV_MASK             ((uint32_t)0x04000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM17_INV_DISABLE          ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM17_INV_ENABLE           ((uint32_t)0x04000000U)
/* IOMUX_M33C1_PINCM17[Z1] Bits */
#define IOMUX_M33C1_PINCM17_Z1_OFS               (25)                            /* !< Z1 Offset */
#define IOMUX_M33C1_PINCM17_Z1_MASK              ((uint32_t)0x02000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM17_Z1_DISABLE           ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM17_Z1_ENABLE            ((uint32_t)0x02000000U)
/* IOMUX_M33C1_PINCM17[INENA] Bits */
#define IOMUX_M33C1_PINCM17_INENA_OFS            (18)                            /* !< INENA Offset */
#define IOMUX_M33C1_PINCM17_INENA_MASK           ((uint32_t)0x00040000U)         /* !< bit */
#define IOMUX_M33C1_PINCM17_INENA_PADCORE        ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM17_INENA_CORE0          ((uint32_t)0x00040000U)
/* IOMUX_M33C1_PINCM17[PIPU] Bits */
#define IOMUX_M33C1_PINCM17_PIPU_OFS             (17)                            /* !< PIPU Offset */
#define IOMUX_M33C1_PINCM17_PIPU_MASK            ((uint32_t)0x00020000U)         /* !< bit */
#define IOMUX_M33C1_PINCM17_PIPU_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM17_PIPU_ENABLE          ((uint32_t)0x00020000U)
/* IOMUX_M33C1_PINCM17[PIPD] Bits */
#define IOMUX_M33C1_PINCM17_PIPD_OFS             (16)                            /* !< PIPD Offset */
#define IOMUX_M33C1_PINCM17_PIPD_MASK            ((uint32_t)0x00010000U)         /* !< bit */
#define IOMUX_M33C1_PINCM17_PIPD_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM17_PIPD_ENABLE          ((uint32_t)0x00010000U)
/* IOMUX_M33C1_PINCM17[PC] Bits */
#define IOMUX_M33C1_PINCM17_PC_OFS               (7)                             /* !< PC Offset */
#define IOMUX_M33C1_PINCM17_PC_MASK              ((uint32_t)0x00000080U)         /* !< bit */
#define IOMUX_M33C1_PINCM17_PC_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM17_PC_CONNECTED         ((uint32_t)0x00000080U)
/* IOMUX_M33C1_PINCM17[PF] Bits */
#define IOMUX_M33C1_PINCM17_PF_OFS               (0)                             /* !< PF Offset */
#define IOMUX_M33C1_PINCM17_PF_MASK              ((uint32_t)0x00000007U)         /* !< bit */
#define IOMUX_M33C1_PINCM17_PF_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM17_PF_GPIO1_DIO04       ((uint32_t)0x00000001U)
#define IOMUX_M33C1_PINCM17_PF_GPTIMER16BADV4CC0_CCP2 ((uint32_t)0x00000002U)
#define IOMUX_M33C1_PINCM17_PF_SPGSS0_U2_SDA_TX  ((uint32_t)0x00000003U)
#define IOMUX_M33C1_PINCM17_PF_SPGSS1_U5_CS0_CTS ((uint32_t)0x00000004U)
#define IOMUX_M33C1_PINCM17_PF_SPGSS2_U0_PICO_SDA_TX ((uint32_t)0x00000005U)

/* IOMUX_M33C1_PINCM18 Bits */
/* IOMUX_M33C1_PINCM18[WCOMP] Bits */
#define IOMUX_M33C1_PINCM18_WCOMP_OFS            (28)                            /* !< WCOMP Offset */
#define IOMUX_M33C1_PINCM18_WCOMP_MASK           ((uint32_t)0x10000000U)         /* !< Wakeup Compare Value bit */
#define IOMUX_M33C1_PINCM18_WCOMP_MATCH0         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM18_WCOMP_MATCH1         ((uint32_t)0x10000000U)
/* IOMUX_M33C1_PINCM18[WUEN] Bits */
#define IOMUX_M33C1_PINCM18_WUEN_OFS             (27)                            /* !< WUEN Offset */
#define IOMUX_M33C1_PINCM18_WUEN_MASK            ((uint32_t)0x08000000U)         /* !< Wakeup Enable bit */
#define IOMUX_M33C1_PINCM18_WUEN_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM18_WUEN_ENABLE          ((uint32_t)0x08000000U)
/* IOMUX_M33C1_PINCM18[INV] Bits */
#define IOMUX_M33C1_PINCM18_INV_OFS              (26)                            /* !< INV Offset */
#define IOMUX_M33C1_PINCM18_INV_MASK             ((uint32_t)0x04000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM18_INV_DISABLE          ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM18_INV_ENABLE           ((uint32_t)0x04000000U)
/* IOMUX_M33C1_PINCM18[Z1] Bits */
#define IOMUX_M33C1_PINCM18_Z1_OFS               (25)                            /* !< Z1 Offset */
#define IOMUX_M33C1_PINCM18_Z1_MASK              ((uint32_t)0x02000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM18_Z1_DISABLE           ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM18_Z1_ENABLE            ((uint32_t)0x02000000U)
/* IOMUX_M33C1_PINCM18[DRV] Bits */
#define IOMUX_M33C1_PINCM18_DRV_OFS              (20)                            /* !< DRV Offset */
#define IOMUX_M33C1_PINCM18_DRV_MASK             ((uint32_t)0x00100000U)         /* !< bit */
#define IOMUX_M33C1_PINCM18_DRV_DRIVEVALUE0      ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM18_DRV_DRIVEVALUE1      ((uint32_t)0x00100000U)
/* IOMUX_M33C1_PINCM18[INENA] Bits */
#define IOMUX_M33C1_PINCM18_INENA_OFS            (18)                            /* !< INENA Offset */
#define IOMUX_M33C1_PINCM18_INENA_MASK           ((uint32_t)0x00040000U)         /* !< bit */
#define IOMUX_M33C1_PINCM18_INENA_PADCORE        ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM18_INENA_CORE0          ((uint32_t)0x00040000U)
/* IOMUX_M33C1_PINCM18[PIPU] Bits */
#define IOMUX_M33C1_PINCM18_PIPU_OFS             (17)                            /* !< PIPU Offset */
#define IOMUX_M33C1_PINCM18_PIPU_MASK            ((uint32_t)0x00020000U)         /* !< bit */
#define IOMUX_M33C1_PINCM18_PIPU_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM18_PIPU_ENABLE          ((uint32_t)0x00020000U)
/* IOMUX_M33C1_PINCM18[PIPD] Bits */
#define IOMUX_M33C1_PINCM18_PIPD_OFS             (16)                            /* !< PIPD Offset */
#define IOMUX_M33C1_PINCM18_PIPD_MASK            ((uint32_t)0x00010000U)         /* !< bit */
#define IOMUX_M33C1_PINCM18_PIPD_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM18_PIPD_ENABLE          ((uint32_t)0x00010000U)
/* IOMUX_M33C1_PINCM18[PC] Bits */
#define IOMUX_M33C1_PINCM18_PC_OFS               (7)                             /* !< PC Offset */
#define IOMUX_M33C1_PINCM18_PC_MASK              ((uint32_t)0x00000080U)         /* !< bit */
#define IOMUX_M33C1_PINCM18_PC_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM18_PC_CONNECTED         ((uint32_t)0x00000080U)
/* IOMUX_M33C1_PINCM18[PF] Bits */
#define IOMUX_M33C1_PINCM18_PF_OFS               (0)                             /* !< PF Offset */
#define IOMUX_M33C1_PINCM18_PF_MASK              ((uint32_t)0x00000007U)         /* !< bit */
#define IOMUX_M33C1_PINCM18_PF_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM18_PF_GPIO1_DIO05       ((uint32_t)0x00000001U)
#define IOMUX_M33C1_PINCM18_PF_GPTIMER16BADV4CC0_CCP2_CMPL ((uint32_t)0x00000002U)
#define IOMUX_M33C1_PINCM18_PF_SPGSS0_U2_SCL_RX  ((uint32_t)0x00000003U)
#define IOMUX_M33C1_PINCM18_PF_SPGSS1_U5_POCI_RTS ((uint32_t)0x00000004U)
#define IOMUX_M33C1_PINCM18_PF_SPGSS2_U0_POCI_RTS ((uint32_t)0x00000005U)
#define IOMUX_M33C1_PINCM18_PF_SPGSS1_U0_POCI    ((uint32_t)0x00000006U)

/* IOMUX_M33C1_PINCM19 Bits */
/* IOMUX_M33C1_PINCM19[WCOMP] Bits */
#define IOMUX_M33C1_PINCM19_WCOMP_OFS            (28)                            /* !< WCOMP Offset */
#define IOMUX_M33C1_PINCM19_WCOMP_MASK           ((uint32_t)0x10000000U)         /* !< Wakeup Compare Value bit */
#define IOMUX_M33C1_PINCM19_WCOMP_MATCH0         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM19_WCOMP_MATCH1         ((uint32_t)0x10000000U)
/* IOMUX_M33C1_PINCM19[WUEN] Bits */
#define IOMUX_M33C1_PINCM19_WUEN_OFS             (27)                            /* !< WUEN Offset */
#define IOMUX_M33C1_PINCM19_WUEN_MASK            ((uint32_t)0x08000000U)         /* !< Wakeup Enable bit */
#define IOMUX_M33C1_PINCM19_WUEN_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM19_WUEN_ENABLE          ((uint32_t)0x08000000U)
/* IOMUX_M33C1_PINCM19[INV] Bits */
#define IOMUX_M33C1_PINCM19_INV_OFS              (26)                            /* !< INV Offset */
#define IOMUX_M33C1_PINCM19_INV_MASK             ((uint32_t)0x04000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM19_INV_DISABLE          ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM19_INV_ENABLE           ((uint32_t)0x04000000U)
/* IOMUX_M33C1_PINCM19[Z1] Bits */
#define IOMUX_M33C1_PINCM19_Z1_OFS               (25)                            /* !< Z1 Offset */
#define IOMUX_M33C1_PINCM19_Z1_MASK              ((uint32_t)0x02000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM19_Z1_DISABLE           ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM19_Z1_ENABLE            ((uint32_t)0x02000000U)
/* IOMUX_M33C1_PINCM19[DRV] Bits */
#define IOMUX_M33C1_PINCM19_DRV_OFS              (20)                            /* !< DRV Offset */
#define IOMUX_M33C1_PINCM19_DRV_MASK             ((uint32_t)0x00100000U)         /* !< bit */
#define IOMUX_M33C1_PINCM19_DRV_DRIVEVALUE0      ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM19_DRV_DRIVEVALUE1      ((uint32_t)0x00100000U)
/* IOMUX_M33C1_PINCM19[INENA] Bits */
#define IOMUX_M33C1_PINCM19_INENA_OFS            (18)                            /* !< INENA Offset */
#define IOMUX_M33C1_PINCM19_INENA_MASK           ((uint32_t)0x00040000U)         /* !< bit */
#define IOMUX_M33C1_PINCM19_INENA_PADCORE        ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM19_INENA_CORE0          ((uint32_t)0x00040000U)
/* IOMUX_M33C1_PINCM19[PIPU] Bits */
#define IOMUX_M33C1_PINCM19_PIPU_OFS             (17)                            /* !< PIPU Offset */
#define IOMUX_M33C1_PINCM19_PIPU_MASK            ((uint32_t)0x00020000U)         /* !< bit */
#define IOMUX_M33C1_PINCM19_PIPU_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM19_PIPU_ENABLE          ((uint32_t)0x00020000U)
/* IOMUX_M33C1_PINCM19[PIPD] Bits */
#define IOMUX_M33C1_PINCM19_PIPD_OFS             (16)                            /* !< PIPD Offset */
#define IOMUX_M33C1_PINCM19_PIPD_MASK            ((uint32_t)0x00010000U)         /* !< bit */
#define IOMUX_M33C1_PINCM19_PIPD_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM19_PIPD_ENABLE          ((uint32_t)0x00010000U)
/* IOMUX_M33C1_PINCM19[PC] Bits */
#define IOMUX_M33C1_PINCM19_PC_OFS               (7)                             /* !< PC Offset */
#define IOMUX_M33C1_PINCM19_PC_MASK              ((uint32_t)0x00000080U)         /* !< bit */
#define IOMUX_M33C1_PINCM19_PC_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM19_PC_CONNECTED         ((uint32_t)0x00000080U)
/* IOMUX_M33C1_PINCM19[PF] Bits */
#define IOMUX_M33C1_PINCM19_PF_OFS               (0)                             /* !< PF Offset */
#define IOMUX_M33C1_PINCM19_PF_MASK              ((uint32_t)0x0000000FU)         /* !< bit */
#define IOMUX_M33C1_PINCM19_PF_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM19_PF_GPIO0_DIO08       ((uint32_t)0x00000001U)
#define IOMUX_M33C1_PINCM19_PF_GPTIMER16BADV4CC0_CCP0 ((uint32_t)0x00000002U)
#define IOMUX_M33C1_PINCM19_PF_GPTIMER16BADV4CC1_CCP0 ((uint32_t)0x00000003U)
#define IOMUX_M33C1_PINCM19_PF_SPGSS0_U1_RTS     ((uint32_t)0x00000004U)
#define IOMUX_M33C1_PINCM19_PF_SPGSS0_U2_SDA_TX  ((uint32_t)0x00000005U)
#define IOMUX_M33C1_PINCM19_PF_SPGSS1_U0_SCLK    ((uint32_t)0x00000006U)
#define IOMUX_M33C1_PINCM19_PF_SPGSS1_U4_RTS     ((uint32_t)0x00000007U)
#define IOMUX_M33C1_PINCM19_PF_I2S0_WCLK         ((uint32_t)0x00000008U)

/* IOMUX_M33C1_PINCM20 Bits */
/* IOMUX_M33C1_PINCM20[WCOMP] Bits */
#define IOMUX_M33C1_PINCM20_WCOMP_OFS            (28)                            /* !< WCOMP Offset */
#define IOMUX_M33C1_PINCM20_WCOMP_MASK           ((uint32_t)0x10000000U)         /* !< Wakeup Compare Value bit */
#define IOMUX_M33C1_PINCM20_WCOMP_MATCH0         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM20_WCOMP_MATCH1         ((uint32_t)0x10000000U)
/* IOMUX_M33C1_PINCM20[WUEN] Bits */
#define IOMUX_M33C1_PINCM20_WUEN_OFS             (27)                            /* !< WUEN Offset */
#define IOMUX_M33C1_PINCM20_WUEN_MASK            ((uint32_t)0x08000000U)         /* !< Wakeup Enable bit */
#define IOMUX_M33C1_PINCM20_WUEN_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM20_WUEN_ENABLE          ((uint32_t)0x08000000U)
/* IOMUX_M33C1_PINCM20[INV] Bits */
#define IOMUX_M33C1_PINCM20_INV_OFS              (26)                            /* !< INV Offset */
#define IOMUX_M33C1_PINCM20_INV_MASK             ((uint32_t)0x04000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM20_INV_DISABLE          ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM20_INV_ENABLE           ((uint32_t)0x04000000U)
/* IOMUX_M33C1_PINCM20[Z1] Bits */
#define IOMUX_M33C1_PINCM20_Z1_OFS               (25)                            /* !< Z1 Offset */
#define IOMUX_M33C1_PINCM20_Z1_MASK              ((uint32_t)0x02000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM20_Z1_DISABLE           ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM20_Z1_ENABLE            ((uint32_t)0x02000000U)
/* IOMUX_M33C1_PINCM20[DRV] Bits */
#define IOMUX_M33C1_PINCM20_DRV_OFS              (20)                            /* !< DRV Offset */
#define IOMUX_M33C1_PINCM20_DRV_MASK             ((uint32_t)0x00100000U)         /* !< bit */
#define IOMUX_M33C1_PINCM20_DRV_DRIVEVALUE0      ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM20_DRV_DRIVEVALUE1      ((uint32_t)0x00100000U)
/* IOMUX_M33C1_PINCM20[INENA] Bits */
#define IOMUX_M33C1_PINCM20_INENA_OFS            (18)                            /* !< INENA Offset */
#define IOMUX_M33C1_PINCM20_INENA_MASK           ((uint32_t)0x00040000U)         /* !< bit */
#define IOMUX_M33C1_PINCM20_INENA_PADCORE        ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM20_INENA_CORE0          ((uint32_t)0x00040000U)
/* IOMUX_M33C1_PINCM20[PIPU] Bits */
#define IOMUX_M33C1_PINCM20_PIPU_OFS             (17)                            /* !< PIPU Offset */
#define IOMUX_M33C1_PINCM20_PIPU_MASK            ((uint32_t)0x00020000U)         /* !< bit */
#define IOMUX_M33C1_PINCM20_PIPU_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM20_PIPU_ENABLE          ((uint32_t)0x00020000U)
/* IOMUX_M33C1_PINCM20[PIPD] Bits */
#define IOMUX_M33C1_PINCM20_PIPD_OFS             (16)                            /* !< PIPD Offset */
#define IOMUX_M33C1_PINCM20_PIPD_MASK            ((uint32_t)0x00010000U)         /* !< bit */
#define IOMUX_M33C1_PINCM20_PIPD_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM20_PIPD_ENABLE          ((uint32_t)0x00010000U)
/* IOMUX_M33C1_PINCM20[PC] Bits */
#define IOMUX_M33C1_PINCM20_PC_OFS               (7)                             /* !< PC Offset */
#define IOMUX_M33C1_PINCM20_PC_MASK              ((uint32_t)0x00000080U)         /* !< bit */
#define IOMUX_M33C1_PINCM20_PC_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM20_PC_CONNECTED         ((uint32_t)0x00000080U)
/* IOMUX_M33C1_PINCM20[PF] Bits */
#define IOMUX_M33C1_PINCM20_PF_OFS               (0)                             /* !< PF Offset */
#define IOMUX_M33C1_PINCM20_PF_MASK              ((uint32_t)0x0000000FU)         /* !< bit */
#define IOMUX_M33C1_PINCM20_PF_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM20_PF_GPIO0_DIO09       ((uint32_t)0x00000001U)
#define IOMUX_M33C1_PINCM20_PF_GPTIMER16BADV4CC0_CCP0_CMPL ((uint32_t)0x00000002U)
#define IOMUX_M33C1_PINCM20_PF_LFSS_RTC_OUT      ((uint32_t)0x00000003U)
#define IOMUX_M33C1_PINCM20_PF_SPGSS0_U1_CTS     ((uint32_t)0x00000004U)
#define IOMUX_M33C1_PINCM20_PF_SPGSS0_U2_SCL_RX  ((uint32_t)0x00000005U)
#define IOMUX_M33C1_PINCM20_PF_SPGSS1_U0_PICO    ((uint32_t)0x00000006U)
#define IOMUX_M33C1_PINCM20_PF_SPGSS1_U4_CTS     ((uint32_t)0x00000007U)
#define IOMUX_M33C1_PINCM20_PF_SYSCTL_CLK_OUT    ((uint32_t)0x00000008U)
#define IOMUX_M33C1_PINCM20_PF_I2S0_MCLK         ((uint32_t)0x00000009U)
#define IOMUX_M33C1_PINCM20_PF_DFTSS_TDO         ((uint32_t)0x0000000AU)

/* IOMUX_M33C1_PINCM21 Bits */
/* IOMUX_M33C1_PINCM21[WCOMP] Bits */
#define IOMUX_M33C1_PINCM21_WCOMP_OFS            (28)                            /* !< WCOMP Offset */
#define IOMUX_M33C1_PINCM21_WCOMP_MASK           ((uint32_t)0x10000000U)         /* !< Wakeup Compare Value bit */
#define IOMUX_M33C1_PINCM21_WCOMP_MATCH0         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM21_WCOMP_MATCH1         ((uint32_t)0x10000000U)
/* IOMUX_M33C1_PINCM21[WUEN] Bits */
#define IOMUX_M33C1_PINCM21_WUEN_OFS             (27)                            /* !< WUEN Offset */
#define IOMUX_M33C1_PINCM21_WUEN_MASK            ((uint32_t)0x08000000U)         /* !< Wakeup Enable bit */
#define IOMUX_M33C1_PINCM21_WUEN_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM21_WUEN_ENABLE          ((uint32_t)0x08000000U)
/* IOMUX_M33C1_PINCM21[INV] Bits */
#define IOMUX_M33C1_PINCM21_INV_OFS              (26)                            /* !< INV Offset */
#define IOMUX_M33C1_PINCM21_INV_MASK             ((uint32_t)0x04000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM21_INV_DISABLE          ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM21_INV_ENABLE           ((uint32_t)0x04000000U)
/* IOMUX_M33C1_PINCM21[Z1] Bits */
#define IOMUX_M33C1_PINCM21_Z1_OFS               (25)                            /* !< Z1 Offset */
#define IOMUX_M33C1_PINCM21_Z1_MASK              ((uint32_t)0x02000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM21_Z1_DISABLE           ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM21_Z1_ENABLE            ((uint32_t)0x02000000U)
/* IOMUX_M33C1_PINCM21[DRV] Bits */
#define IOMUX_M33C1_PINCM21_DRV_OFS              (20)                            /* !< DRV Offset */
#define IOMUX_M33C1_PINCM21_DRV_MASK             ((uint32_t)0x00100000U)         /* !< bit */
#define IOMUX_M33C1_PINCM21_DRV_DRIVEVALUE0      ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM21_DRV_DRIVEVALUE1      ((uint32_t)0x00100000U)
/* IOMUX_M33C1_PINCM21[INENA] Bits */
#define IOMUX_M33C1_PINCM21_INENA_OFS            (18)                            /* !< INENA Offset */
#define IOMUX_M33C1_PINCM21_INENA_MASK           ((uint32_t)0x00040000U)         /* !< bit */
#define IOMUX_M33C1_PINCM21_INENA_PADCORE        ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM21_INENA_CORE0          ((uint32_t)0x00040000U)
/* IOMUX_M33C1_PINCM21[PIPU] Bits */
#define IOMUX_M33C1_PINCM21_PIPU_OFS             (17)                            /* !< PIPU Offset */
#define IOMUX_M33C1_PINCM21_PIPU_MASK            ((uint32_t)0x00020000U)         /* !< bit */
#define IOMUX_M33C1_PINCM21_PIPU_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM21_PIPU_ENABLE          ((uint32_t)0x00020000U)
/* IOMUX_M33C1_PINCM21[PIPD] Bits */
#define IOMUX_M33C1_PINCM21_PIPD_OFS             (16)                            /* !< PIPD Offset */
#define IOMUX_M33C1_PINCM21_PIPD_MASK            ((uint32_t)0x00010000U)         /* !< bit */
#define IOMUX_M33C1_PINCM21_PIPD_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM21_PIPD_ENABLE          ((uint32_t)0x00010000U)
/* IOMUX_M33C1_PINCM21[WAKESTATE] Bits */
#define IOMUX_M33C1_PINCM21_WAKESTATE_OFS        (13)                            /* !< WAKESTATE Offset */
#define IOMUX_M33C1_PINCM21_WAKESTATE_MASK       ((uint32_t)0x00002000U)         /* !< bit */
/* IOMUX_M33C1_PINCM21[PC] Bits */
#define IOMUX_M33C1_PINCM21_PC_OFS               (7)                             /* !< PC Offset */
#define IOMUX_M33C1_PINCM21_PC_MASK              ((uint32_t)0x00000080U)         /* !< bit */
#define IOMUX_M33C1_PINCM21_PC_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM21_PC_CONNECTED         ((uint32_t)0x00000080U)
/* IOMUX_M33C1_PINCM21[PF] Bits */
#define IOMUX_M33C1_PINCM21_PF_OFS               (0)                             /* !< PF Offset */
#define IOMUX_M33C1_PINCM21_PF_MASK              ((uint32_t)0x0000000FU)         /* !< bit */
#define IOMUX_M33C1_PINCM21_PF_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM21_PF_GPIO0_DIO10       ((uint32_t)0x00000001U)
#define IOMUX_M33C1_PINCM21_PF_GPTIMER32B2CC0_CCP0 ((uint32_t)0x00000002U)
#define IOMUX_M33C1_PINCM21_PF_GPTIMER16BADV4CC0_CCP2 ((uint32_t)0x00000003U)
#define IOMUX_M33C1_PINCM21_PF_SPGSS0_U1_SDA_TX  ((uint32_t)0x00000004U)
#define IOMUX_M33C1_PINCM21_PF_SPGSS1_U0_POCI    ((uint32_t)0x00000005U)
#define IOMUX_M33C1_PINCM21_PF_SPGSS1_U2_SDA     ((uint32_t)0x00000006U)
#define IOMUX_M33C1_PINCM21_PF_SPGSS1_U4_TX      ((uint32_t)0x00000007U)
#define IOMUX_M33C1_PINCM21_PF_SPGSS2_U0_SCLK_SCL_RX ((uint32_t)0x00000008U)

/* IOMUX_M33C1_PINCM22 Bits */
/* IOMUX_M33C1_PINCM22[WCOMP] Bits */
#define IOMUX_M33C1_PINCM22_WCOMP_OFS            (28)                            /* !< WCOMP Offset */
#define IOMUX_M33C1_PINCM22_WCOMP_MASK           ((uint32_t)0x10000000U)         /* !< Wakeup Compare Value bit */
#define IOMUX_M33C1_PINCM22_WCOMP_MATCH0         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM22_WCOMP_MATCH1         ((uint32_t)0x10000000U)
/* IOMUX_M33C1_PINCM22[WUEN] Bits */
#define IOMUX_M33C1_PINCM22_WUEN_OFS             (27)                            /* !< WUEN Offset */
#define IOMUX_M33C1_PINCM22_WUEN_MASK            ((uint32_t)0x08000000U)         /* !< Wakeup Enable bit */
#define IOMUX_M33C1_PINCM22_WUEN_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM22_WUEN_ENABLE          ((uint32_t)0x08000000U)
/* IOMUX_M33C1_PINCM22[INV] Bits */
#define IOMUX_M33C1_PINCM22_INV_OFS              (26)                            /* !< INV Offset */
#define IOMUX_M33C1_PINCM22_INV_MASK             ((uint32_t)0x04000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM22_INV_DISABLE          ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM22_INV_ENABLE           ((uint32_t)0x04000000U)
/* IOMUX_M33C1_PINCM22[Z1] Bits */
#define IOMUX_M33C1_PINCM22_Z1_OFS               (25)                            /* !< Z1 Offset */
#define IOMUX_M33C1_PINCM22_Z1_MASK              ((uint32_t)0x02000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM22_Z1_DISABLE           ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM22_Z1_ENABLE            ((uint32_t)0x02000000U)
/* IOMUX_M33C1_PINCM22[DRV] Bits */
#define IOMUX_M33C1_PINCM22_DRV_OFS              (20)                            /* !< DRV Offset */
#define IOMUX_M33C1_PINCM22_DRV_MASK             ((uint32_t)0x00100000U)         /* !< bit */
#define IOMUX_M33C1_PINCM22_DRV_DRIVEVALUE0      ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM22_DRV_DRIVEVALUE1      ((uint32_t)0x00100000U)
/* IOMUX_M33C1_PINCM22[INENA] Bits */
#define IOMUX_M33C1_PINCM22_INENA_OFS            (18)                            /* !< INENA Offset */
#define IOMUX_M33C1_PINCM22_INENA_MASK           ((uint32_t)0x00040000U)         /* !< bit */
#define IOMUX_M33C1_PINCM22_INENA_PADCORE        ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM22_INENA_CORE0          ((uint32_t)0x00040000U)
/* IOMUX_M33C1_PINCM22[PIPU] Bits */
#define IOMUX_M33C1_PINCM22_PIPU_OFS             (17)                            /* !< PIPU Offset */
#define IOMUX_M33C1_PINCM22_PIPU_MASK            ((uint32_t)0x00020000U)         /* !< bit */
#define IOMUX_M33C1_PINCM22_PIPU_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM22_PIPU_ENABLE          ((uint32_t)0x00020000U)
/* IOMUX_M33C1_PINCM22[PIPD] Bits */
#define IOMUX_M33C1_PINCM22_PIPD_OFS             (16)                            /* !< PIPD Offset */
#define IOMUX_M33C1_PINCM22_PIPD_MASK            ((uint32_t)0x00010000U)         /* !< bit */
#define IOMUX_M33C1_PINCM22_PIPD_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM22_PIPD_ENABLE          ((uint32_t)0x00010000U)
/* IOMUX_M33C1_PINCM22[WAKESTATE] Bits */
#define IOMUX_M33C1_PINCM22_WAKESTATE_OFS        (13)                            /* !< WAKESTATE Offset */
#define IOMUX_M33C1_PINCM22_WAKESTATE_MASK       ((uint32_t)0x00002000U)         /* !< bit */
/* IOMUX_M33C1_PINCM22[PC] Bits */
#define IOMUX_M33C1_PINCM22_PC_OFS               (7)                             /* !< PC Offset */
#define IOMUX_M33C1_PINCM22_PC_MASK              ((uint32_t)0x00000080U)         /* !< bit */
#define IOMUX_M33C1_PINCM22_PC_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM22_PC_CONNECTED         ((uint32_t)0x00000080U)
/* IOMUX_M33C1_PINCM22[PF] Bits */
#define IOMUX_M33C1_PINCM22_PF_OFS               (0)                             /* !< PF Offset */
#define IOMUX_M33C1_PINCM22_PF_MASK              ((uint32_t)0x0000000FU)         /* !< bit */
#define IOMUX_M33C1_PINCM22_PF_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM22_PF_GPIO0_DIO11       ((uint32_t)0x00000001U)
#define IOMUX_M33C1_PINCM22_PF_GPTIMER16BADV4CC1_CCP0_CMPL ((uint32_t)0x00000002U)
#define IOMUX_M33C1_PINCM22_PF_GPTIMER16BADV4CC0_CCP2_CMPL ((uint32_t)0x00000003U)
#define IOMUX_M33C1_PINCM22_PF_SPGSS0_U1_SCL_RX  ((uint32_t)0x00000004U)
#define IOMUX_M33C1_PINCM22_PF_SPGSS1_U0_SCLK    ((uint32_t)0x00000005U)
#define IOMUX_M33C1_PINCM22_PF_SPGSS1_U2_SCL     ((uint32_t)0x00000006U)
#define IOMUX_M33C1_PINCM22_PF_SPGSS1_U4_RX      ((uint32_t)0x00000007U)
#define IOMUX_M33C1_PINCM22_PF_ANACOMP0_OUT      ((uint32_t)0x00000008U)

/* IOMUX_M33C1_PINCM23 Bits */
/* IOMUX_M33C1_PINCM23[WCOMP] Bits */
#define IOMUX_M33C1_PINCM23_WCOMP_OFS            (28)                            /* !< WCOMP Offset */
#define IOMUX_M33C1_PINCM23_WCOMP_MASK           ((uint32_t)0x10000000U)         /* !< Wakeup Compare Value bit */
#define IOMUX_M33C1_PINCM23_WCOMP_MATCH0         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM23_WCOMP_MATCH1         ((uint32_t)0x10000000U)
/* IOMUX_M33C1_PINCM23[WUEN] Bits */
#define IOMUX_M33C1_PINCM23_WUEN_OFS             (27)                            /* !< WUEN Offset */
#define IOMUX_M33C1_PINCM23_WUEN_MASK            ((uint32_t)0x08000000U)         /* !< Wakeup Enable bit */
#define IOMUX_M33C1_PINCM23_WUEN_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM23_WUEN_ENABLE          ((uint32_t)0x08000000U)
/* IOMUX_M33C1_PINCM23[INV] Bits */
#define IOMUX_M33C1_PINCM23_INV_OFS              (26)                            /* !< INV Offset */
#define IOMUX_M33C1_PINCM23_INV_MASK             ((uint32_t)0x04000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM23_INV_DISABLE          ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM23_INV_ENABLE           ((uint32_t)0x04000000U)
/* IOMUX_M33C1_PINCM23[Z1] Bits */
#define IOMUX_M33C1_PINCM23_Z1_OFS               (25)                            /* !< Z1 Offset */
#define IOMUX_M33C1_PINCM23_Z1_MASK              ((uint32_t)0x02000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM23_Z1_DISABLE           ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM23_Z1_ENABLE            ((uint32_t)0x02000000U)
/* IOMUX_M33C1_PINCM23[DRV] Bits */
#define IOMUX_M33C1_PINCM23_DRV_OFS              (20)                            /* !< DRV Offset */
#define IOMUX_M33C1_PINCM23_DRV_MASK             ((uint32_t)0x00100000U)         /* !< bit */
#define IOMUX_M33C1_PINCM23_DRV_DRIVEVALUE0      ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM23_DRV_DRIVEVALUE1      ((uint32_t)0x00100000U)
/* IOMUX_M33C1_PINCM23[INENA] Bits */
#define IOMUX_M33C1_PINCM23_INENA_OFS            (18)                            /* !< INENA Offset */
#define IOMUX_M33C1_PINCM23_INENA_MASK           ((uint32_t)0x00040000U)         /* !< bit */
#define IOMUX_M33C1_PINCM23_INENA_PADCORE        ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM23_INENA_CORE0          ((uint32_t)0x00040000U)
/* IOMUX_M33C1_PINCM23[PIPU] Bits */
#define IOMUX_M33C1_PINCM23_PIPU_OFS             (17)                            /* !< PIPU Offset */
#define IOMUX_M33C1_PINCM23_PIPU_MASK            ((uint32_t)0x00020000U)         /* !< bit */
#define IOMUX_M33C1_PINCM23_PIPU_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM23_PIPU_ENABLE          ((uint32_t)0x00020000U)
/* IOMUX_M33C1_PINCM23[PIPD] Bits */
#define IOMUX_M33C1_PINCM23_PIPD_OFS             (16)                            /* !< PIPD Offset */
#define IOMUX_M33C1_PINCM23_PIPD_MASK            ((uint32_t)0x00010000U)         /* !< bit */
#define IOMUX_M33C1_PINCM23_PIPD_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM23_PIPD_ENABLE          ((uint32_t)0x00010000U)
/* IOMUX_M33C1_PINCM23[PC] Bits */
#define IOMUX_M33C1_PINCM23_PC_OFS               (7)                             /* !< PC Offset */
#define IOMUX_M33C1_PINCM23_PC_MASK              ((uint32_t)0x00000080U)         /* !< bit */
#define IOMUX_M33C1_PINCM23_PC_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM23_PC_CONNECTED         ((uint32_t)0x00000080U)
/* IOMUX_M33C1_PINCM23[PF] Bits */
#define IOMUX_M33C1_PINCM23_PF_OFS               (0)                             /* !< PF Offset */
#define IOMUX_M33C1_PINCM23_PF_MASK              ((uint32_t)0x0000000FU)         /* !< bit */
#define IOMUX_M33C1_PINCM23_PF_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM23_PF_GPIO1_DIO06       ((uint32_t)0x00000001U)
#define IOMUX_M33C1_PINCM23_PF_GPTIMER16B2CCLP2_CCP0 ((uint32_t)0x00000002U)
#define IOMUX_M33C1_PINCM23_PF_GPTIMER16BADV4CC1_CCP0 ((uint32_t)0x00000003U)
#define IOMUX_M33C1_PINCM23_PF_I2S1_AD0          ((uint32_t)0x00000004U)
#define IOMUX_M33C1_PINCM23_PF_SPGSS0_U2_SDA_TX  ((uint32_t)0x00000005U)
#define IOMUX_M33C1_PINCM23_PF_SPGSS1_U4_CTS     ((uint32_t)0x00000006U)
#define IOMUX_M33C1_PINCM23_PF_SPGSS1_U0_CS1     ((uint32_t)0x00000007U)
#define IOMUX_M33C1_PINCM23_PF_MCAN1_CANRX       ((uint32_t)0x00000009U)

/* IOMUX_M33C1_PINCM24 Bits */
/* IOMUX_M33C1_PINCM24[WCOMP] Bits */
#define IOMUX_M33C1_PINCM24_WCOMP_OFS            (28)                            /* !< WCOMP Offset */
#define IOMUX_M33C1_PINCM24_WCOMP_MASK           ((uint32_t)0x10000000U)         /* !< Wakeup Compare Value bit */
#define IOMUX_M33C1_PINCM24_WCOMP_MATCH0         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM24_WCOMP_MATCH1         ((uint32_t)0x10000000U)
/* IOMUX_M33C1_PINCM24[WUEN] Bits */
#define IOMUX_M33C1_PINCM24_WUEN_OFS             (27)                            /* !< WUEN Offset */
#define IOMUX_M33C1_PINCM24_WUEN_MASK            ((uint32_t)0x08000000U)         /* !< Wakeup Enable bit */
#define IOMUX_M33C1_PINCM24_WUEN_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM24_WUEN_ENABLE          ((uint32_t)0x08000000U)
/* IOMUX_M33C1_PINCM24[INV] Bits */
#define IOMUX_M33C1_PINCM24_INV_OFS              (26)                            /* !< INV Offset */
#define IOMUX_M33C1_PINCM24_INV_MASK             ((uint32_t)0x04000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM24_INV_DISABLE          ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM24_INV_ENABLE           ((uint32_t)0x04000000U)
/* IOMUX_M33C1_PINCM24[Z1] Bits */
#define IOMUX_M33C1_PINCM24_Z1_OFS               (25)                            /* !< Z1 Offset */
#define IOMUX_M33C1_PINCM24_Z1_MASK              ((uint32_t)0x02000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM24_Z1_DISABLE           ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM24_Z1_ENABLE            ((uint32_t)0x02000000U)
/* IOMUX_M33C1_PINCM24[DRV] Bits */
#define IOMUX_M33C1_PINCM24_DRV_OFS              (20)                            /* !< DRV Offset */
#define IOMUX_M33C1_PINCM24_DRV_MASK             ((uint32_t)0x00100000U)         /* !< bit */
#define IOMUX_M33C1_PINCM24_DRV_DRIVEVALUE0      ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM24_DRV_DRIVEVALUE1      ((uint32_t)0x00100000U)
/* IOMUX_M33C1_PINCM24[INENA] Bits */
#define IOMUX_M33C1_PINCM24_INENA_OFS            (18)                            /* !< INENA Offset */
#define IOMUX_M33C1_PINCM24_INENA_MASK           ((uint32_t)0x00040000U)         /* !< bit */
#define IOMUX_M33C1_PINCM24_INENA_PADCORE        ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM24_INENA_CORE0          ((uint32_t)0x00040000U)
/* IOMUX_M33C1_PINCM24[PIPU] Bits */
#define IOMUX_M33C1_PINCM24_PIPU_OFS             (17)                            /* !< PIPU Offset */
#define IOMUX_M33C1_PINCM24_PIPU_MASK            ((uint32_t)0x00020000U)         /* !< bit */
#define IOMUX_M33C1_PINCM24_PIPU_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM24_PIPU_ENABLE          ((uint32_t)0x00020000U)
/* IOMUX_M33C1_PINCM24[PIPD] Bits */
#define IOMUX_M33C1_PINCM24_PIPD_OFS             (16)                            /* !< PIPD Offset */
#define IOMUX_M33C1_PINCM24_PIPD_MASK            ((uint32_t)0x00010000U)         /* !< bit */
#define IOMUX_M33C1_PINCM24_PIPD_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM24_PIPD_ENABLE          ((uint32_t)0x00010000U)
/* IOMUX_M33C1_PINCM24[PC] Bits */
#define IOMUX_M33C1_PINCM24_PC_OFS               (7)                             /* !< PC Offset */
#define IOMUX_M33C1_PINCM24_PC_MASK              ((uint32_t)0x00000080U)         /* !< bit */
#define IOMUX_M33C1_PINCM24_PC_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM24_PC_CONNECTED         ((uint32_t)0x00000080U)
/* IOMUX_M33C1_PINCM24[PF] Bits */
#define IOMUX_M33C1_PINCM24_PF_OFS               (0)                             /* !< PF Offset */
#define IOMUX_M33C1_PINCM24_PF_MASK              ((uint32_t)0x0000000FU)         /* !< bit */
#define IOMUX_M33C1_PINCM24_PF_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM24_PF_GPIO1_DIO07       ((uint32_t)0x00000001U)
#define IOMUX_M33C1_PINCM24_PF_GPTIMER16B2CCLP2_CCP1 ((uint32_t)0x00000002U)
#define IOMUX_M33C1_PINCM24_PF_GPTIMER16B2CCQEILP1_CCP0 ((uint32_t)0x00000003U)
#define IOMUX_M33C1_PINCM24_PF_GPTIMER16BADV4CC1_CCP0_CMPL ((uint32_t)0x00000004U)
#define IOMUX_M33C1_PINCM24_PF_I2S1_AD1          ((uint32_t)0x00000005U)
#define IOMUX_M33C1_PINCM24_PF_SPGSS0_U2_SCL_RX  ((uint32_t)0x00000006U)
#define IOMUX_M33C1_PINCM24_PF_SPGSS1_U4_RTS     ((uint32_t)0x00000007U)
#define IOMUX_M33C1_PINCM24_PF_SPGSS1_U5_POCI_RTS ((uint32_t)0x00000008U)
#define IOMUX_M33C1_PINCM24_PF_MCAN1_CANTX       ((uint32_t)0x00000009U)

/* IOMUX_M33C1_PINCM25 Bits */
/* IOMUX_M33C1_PINCM25[WCOMP] Bits */
#define IOMUX_M33C1_PINCM25_WCOMP_OFS            (28)                            /* !< WCOMP Offset */
#define IOMUX_M33C1_PINCM25_WCOMP_MASK           ((uint32_t)0x10000000U)         /* !< Wakeup Compare Value bit */
#define IOMUX_M33C1_PINCM25_WCOMP_MATCH0         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM25_WCOMP_MATCH1         ((uint32_t)0x10000000U)
/* IOMUX_M33C1_PINCM25[WUEN] Bits */
#define IOMUX_M33C1_PINCM25_WUEN_OFS             (27)                            /* !< WUEN Offset */
#define IOMUX_M33C1_PINCM25_WUEN_MASK            ((uint32_t)0x08000000U)         /* !< Wakeup Enable bit */
#define IOMUX_M33C1_PINCM25_WUEN_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM25_WUEN_ENABLE          ((uint32_t)0x08000000U)
/* IOMUX_M33C1_PINCM25[INV] Bits */
#define IOMUX_M33C1_PINCM25_INV_OFS              (26)                            /* !< INV Offset */
#define IOMUX_M33C1_PINCM25_INV_MASK             ((uint32_t)0x04000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM25_INV_DISABLE          ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM25_INV_ENABLE           ((uint32_t)0x04000000U)
/* IOMUX_M33C1_PINCM25[Z1] Bits */
#define IOMUX_M33C1_PINCM25_Z1_OFS               (25)                            /* !< Z1 Offset */
#define IOMUX_M33C1_PINCM25_Z1_MASK              ((uint32_t)0x02000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM25_Z1_DISABLE           ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM25_Z1_ENABLE            ((uint32_t)0x02000000U)
/* IOMUX_M33C1_PINCM25[INENA] Bits */
#define IOMUX_M33C1_PINCM25_INENA_OFS            (18)                            /* !< INENA Offset */
#define IOMUX_M33C1_PINCM25_INENA_MASK           ((uint32_t)0x00040000U)         /* !< bit */
#define IOMUX_M33C1_PINCM25_INENA_PADCORE        ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM25_INENA_CORE0          ((uint32_t)0x00040000U)
/* IOMUX_M33C1_PINCM25[PIPU] Bits */
#define IOMUX_M33C1_PINCM25_PIPU_OFS             (17)                            /* !< PIPU Offset */
#define IOMUX_M33C1_PINCM25_PIPU_MASK            ((uint32_t)0x00020000U)         /* !< bit */
#define IOMUX_M33C1_PINCM25_PIPU_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM25_PIPU_ENABLE          ((uint32_t)0x00020000U)
/* IOMUX_M33C1_PINCM25[PIPD] Bits */
#define IOMUX_M33C1_PINCM25_PIPD_OFS             (16)                            /* !< PIPD Offset */
#define IOMUX_M33C1_PINCM25_PIPD_MASK            ((uint32_t)0x00010000U)         /* !< bit */
#define IOMUX_M33C1_PINCM25_PIPD_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM25_PIPD_ENABLE          ((uint32_t)0x00010000U)
/* IOMUX_M33C1_PINCM25[PC] Bits */
#define IOMUX_M33C1_PINCM25_PC_OFS               (7)                             /* !< PC Offset */
#define IOMUX_M33C1_PINCM25_PC_MASK              ((uint32_t)0x00000080U)         /* !< bit */
#define IOMUX_M33C1_PINCM25_PC_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM25_PC_CONNECTED         ((uint32_t)0x00000080U)
/* IOMUX_M33C1_PINCM25[PF] Bits */
#define IOMUX_M33C1_PINCM25_PF_OFS               (0)                             /* !< PF Offset */
#define IOMUX_M33C1_PINCM25_PF_MASK              ((uint32_t)0x0000000FU)         /* !< bit */
#define IOMUX_M33C1_PINCM25_PF_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM25_PF_GPIO1_DIO08       ((uint32_t)0x00000001U)
#define IOMUX_M33C1_PINCM25_PF_GPTIMER16B2CCQEILP1_IDX ((uint32_t)0x00000002U)
#define IOMUX_M33C1_PINCM25_PF_ANACOMP1_OUT      ((uint32_t)0x00000003U)
#define IOMUX_M33C1_PINCM25_PF_GPTIMER16BADV4CC1_FAULT1 ((uint32_t)0x00000004U)
#define IOMUX_M33C1_PINCM25_PF_I2S1_WCLK         ((uint32_t)0x00000005U)
#define IOMUX_M33C1_PINCM25_PF_SPGSS0_U2_CTS     ((uint32_t)0x00000006U)
#define IOMUX_M33C1_PINCM25_PF_SPGSS1_U5_SCLK_SCL_RX ((uint32_t)0x00000007U)
#define IOMUX_M33C1_PINCM25_PF_SPGSS1_U5_PICO_SDA_TX ((uint32_t)0x00000008U)

/* IOMUX_M33C1_PINCM26 Bits */
/* IOMUX_M33C1_PINCM26[WCOMP] Bits */
#define IOMUX_M33C1_PINCM26_WCOMP_OFS            (28)                            /* !< WCOMP Offset */
#define IOMUX_M33C1_PINCM26_WCOMP_MASK           ((uint32_t)0x10000000U)         /* !< Wakeup Compare Value bit */
#define IOMUX_M33C1_PINCM26_WCOMP_MATCH0         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM26_WCOMP_MATCH1         ((uint32_t)0x10000000U)
/* IOMUX_M33C1_PINCM26[WUEN] Bits */
#define IOMUX_M33C1_PINCM26_WUEN_OFS             (27)                            /* !< WUEN Offset */
#define IOMUX_M33C1_PINCM26_WUEN_MASK            ((uint32_t)0x08000000U)         /* !< Wakeup Enable bit */
#define IOMUX_M33C1_PINCM26_WUEN_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM26_WUEN_ENABLE          ((uint32_t)0x08000000U)
/* IOMUX_M33C1_PINCM26[INV] Bits */
#define IOMUX_M33C1_PINCM26_INV_OFS              (26)                            /* !< INV Offset */
#define IOMUX_M33C1_PINCM26_INV_MASK             ((uint32_t)0x04000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM26_INV_DISABLE          ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM26_INV_ENABLE           ((uint32_t)0x04000000U)
/* IOMUX_M33C1_PINCM26[Z1] Bits */
#define IOMUX_M33C1_PINCM26_Z1_OFS               (25)                            /* !< Z1 Offset */
#define IOMUX_M33C1_PINCM26_Z1_MASK              ((uint32_t)0x02000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM26_Z1_DISABLE           ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM26_Z1_ENABLE            ((uint32_t)0x02000000U)
/* IOMUX_M33C1_PINCM26[DRV] Bits */
#define IOMUX_M33C1_PINCM26_DRV_OFS              (20)                            /* !< DRV Offset */
#define IOMUX_M33C1_PINCM26_DRV_MASK             ((uint32_t)0x00100000U)         /* !< bit */
#define IOMUX_M33C1_PINCM26_DRV_DRIVEVALUE0      ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM26_DRV_DRIVEVALUE1      ((uint32_t)0x00100000U)
/* IOMUX_M33C1_PINCM26[INENA] Bits */
#define IOMUX_M33C1_PINCM26_INENA_OFS            (18)                            /* !< INENA Offset */
#define IOMUX_M33C1_PINCM26_INENA_MASK           ((uint32_t)0x00040000U)         /* !< bit */
#define IOMUX_M33C1_PINCM26_INENA_PADCORE        ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM26_INENA_CORE0          ((uint32_t)0x00040000U)
/* IOMUX_M33C1_PINCM26[PIPU] Bits */
#define IOMUX_M33C1_PINCM26_PIPU_OFS             (17)                            /* !< PIPU Offset */
#define IOMUX_M33C1_PINCM26_PIPU_MASK            ((uint32_t)0x00020000U)         /* !< bit */
#define IOMUX_M33C1_PINCM26_PIPU_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM26_PIPU_ENABLE          ((uint32_t)0x00020000U)
/* IOMUX_M33C1_PINCM26[PIPD] Bits */
#define IOMUX_M33C1_PINCM26_PIPD_OFS             (16)                            /* !< PIPD Offset */
#define IOMUX_M33C1_PINCM26_PIPD_MASK            ((uint32_t)0x00010000U)         /* !< bit */
#define IOMUX_M33C1_PINCM26_PIPD_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM26_PIPD_ENABLE          ((uint32_t)0x00010000U)
/* IOMUX_M33C1_PINCM26[PC] Bits */
#define IOMUX_M33C1_PINCM26_PC_OFS               (7)                             /* !< PC Offset */
#define IOMUX_M33C1_PINCM26_PC_MASK              ((uint32_t)0x00000080U)         /* !< bit */
#define IOMUX_M33C1_PINCM26_PC_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM26_PC_CONNECTED         ((uint32_t)0x00000080U)
/* IOMUX_M33C1_PINCM26[PF] Bits */
#define IOMUX_M33C1_PINCM26_PF_OFS               (0)                             /* !< PF Offset */
#define IOMUX_M33C1_PINCM26_PF_MASK              ((uint32_t)0x00000007U)         /* !< bit */
#define IOMUX_M33C1_PINCM26_PF_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM26_PF_GPIO1_DIO09       ((uint32_t)0x00000001U)
#define IOMUX_M33C1_PINCM26_PF_GPTIMER16B2CCQEILP1_CCP1 ((uint32_t)0x00000002U)
#define IOMUX_M33C1_PINCM26_PF_GPTIMER16BADV4CC0_CCP0_CMPL ((uint32_t)0x00000003U)
#define IOMUX_M33C1_PINCM26_PF_I2S1_BCLK         ((uint32_t)0x00000004U)
#define IOMUX_M33C1_PINCM26_PF_SPGSS0_U2_RTS     ((uint32_t)0x00000005U)
#define IOMUX_M33C1_PINCM26_PF_SPGSS1_U5_PICO_SDA_TX ((uint32_t)0x00000006U)
#define IOMUX_M33C1_PINCM26_PF_SPGSS1_U5_SCLK_SCL_RX ((uint32_t)0x00000007U)

/* IOMUX_M33C1_PINCM27 Bits */
/* IOMUX_M33C1_PINCM27[WCOMP] Bits */
#define IOMUX_M33C1_PINCM27_WCOMP_OFS            (28)                            /* !< WCOMP Offset */
#define IOMUX_M33C1_PINCM27_WCOMP_MASK           ((uint32_t)0x10000000U)         /* !< Wakeup Compare Value bit */
#define IOMUX_M33C1_PINCM27_WCOMP_MATCH0         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM27_WCOMP_MATCH1         ((uint32_t)0x10000000U)
/* IOMUX_M33C1_PINCM27[WUEN] Bits */
#define IOMUX_M33C1_PINCM27_WUEN_OFS             (27)                            /* !< WUEN Offset */
#define IOMUX_M33C1_PINCM27_WUEN_MASK            ((uint32_t)0x08000000U)         /* !< Wakeup Enable bit */
#define IOMUX_M33C1_PINCM27_WUEN_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM27_WUEN_ENABLE          ((uint32_t)0x08000000U)
/* IOMUX_M33C1_PINCM27[INV] Bits */
#define IOMUX_M33C1_PINCM27_INV_OFS              (26)                            /* !< INV Offset */
#define IOMUX_M33C1_PINCM27_INV_MASK             ((uint32_t)0x04000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM27_INV_DISABLE          ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM27_INV_ENABLE           ((uint32_t)0x04000000U)
/* IOMUX_M33C1_PINCM27[Z1] Bits */
#define IOMUX_M33C1_PINCM27_Z1_OFS               (25)                            /* !< Z1 Offset */
#define IOMUX_M33C1_PINCM27_Z1_MASK              ((uint32_t)0x02000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM27_Z1_DISABLE           ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM27_Z1_ENABLE            ((uint32_t)0x02000000U)
/* IOMUX_M33C1_PINCM27[INENA] Bits */
#define IOMUX_M33C1_PINCM27_INENA_OFS            (18)                            /* !< INENA Offset */
#define IOMUX_M33C1_PINCM27_INENA_MASK           ((uint32_t)0x00040000U)         /* !< bit */
#define IOMUX_M33C1_PINCM27_INENA_PADCORE        ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM27_INENA_CORE0          ((uint32_t)0x00040000U)
/* IOMUX_M33C1_PINCM27[PIPU] Bits */
#define IOMUX_M33C1_PINCM27_PIPU_OFS             (17)                            /* !< PIPU Offset */
#define IOMUX_M33C1_PINCM27_PIPU_MASK            ((uint32_t)0x00020000U)         /* !< bit */
#define IOMUX_M33C1_PINCM27_PIPU_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM27_PIPU_ENABLE          ((uint32_t)0x00020000U)
/* IOMUX_M33C1_PINCM27[PIPD] Bits */
#define IOMUX_M33C1_PINCM27_PIPD_OFS             (16)                            /* !< PIPD Offset */
#define IOMUX_M33C1_PINCM27_PIPD_MASK            ((uint32_t)0x00010000U)         /* !< bit */
#define IOMUX_M33C1_PINCM27_PIPD_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM27_PIPD_ENABLE          ((uint32_t)0x00010000U)
/* IOMUX_M33C1_PINCM27[PC] Bits */
#define IOMUX_M33C1_PINCM27_PC_OFS               (7)                             /* !< PC Offset */
#define IOMUX_M33C1_PINCM27_PC_MASK              ((uint32_t)0x00000080U)         /* !< bit */
#define IOMUX_M33C1_PINCM27_PC_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM27_PC_CONNECTED         ((uint32_t)0x00000080U)
/* IOMUX_M33C1_PINCM27[PF] Bits */
#define IOMUX_M33C1_PINCM27_PF_OFS               (0)                             /* !< PF Offset */
#define IOMUX_M33C1_PINCM27_PF_MASK              ((uint32_t)0x0000000FU)         /* !< bit */
#define IOMUX_M33C1_PINCM27_PF_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM27_PF_GPIO1_DIO10       ((uint32_t)0x00000001U)
#define IOMUX_M33C1_PINCM27_PF_GPTIMER16B2CCLP2_CCP0 ((uint32_t)0x00000002U)
#define IOMUX_M33C1_PINCM27_PF_GPTIMER16B2CCLP0_CCP0 ((uint32_t)0x00000003U)
#define IOMUX_M33C1_PINCM27_PF_I2S1_MCLK         ((uint32_t)0x00000004U)
#define IOMUX_M33C1_PINCM27_PF_SPGSS2_U1_PICO_SDA_TX ((uint32_t)0x00000005U)
#define IOMUX_M33C1_PINCM27_PF_GPTIMER16BADV4CC1_CCP1 ((uint32_t)0x00000006U)
#define IOMUX_M33C1_PINCM27_PF_I2S0_WCLK         ((uint32_t)0x00000008U)

/* IOMUX_M33C1_PINCM28 Bits */
/* IOMUX_M33C1_PINCM28[WCOMP] Bits */
#define IOMUX_M33C1_PINCM28_WCOMP_OFS            (28)                            /* !< WCOMP Offset */
#define IOMUX_M33C1_PINCM28_WCOMP_MASK           ((uint32_t)0x10000000U)         /* !< Wakeup Compare Value bit */
#define IOMUX_M33C1_PINCM28_WCOMP_MATCH0         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM28_WCOMP_MATCH1         ((uint32_t)0x10000000U)
/* IOMUX_M33C1_PINCM28[WUEN] Bits */
#define IOMUX_M33C1_PINCM28_WUEN_OFS             (27)                            /* !< WUEN Offset */
#define IOMUX_M33C1_PINCM28_WUEN_MASK            ((uint32_t)0x08000000U)         /* !< Wakeup Enable bit */
#define IOMUX_M33C1_PINCM28_WUEN_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM28_WUEN_ENABLE          ((uint32_t)0x08000000U)
/* IOMUX_M33C1_PINCM28[INV] Bits */
#define IOMUX_M33C1_PINCM28_INV_OFS              (26)                            /* !< INV Offset */
#define IOMUX_M33C1_PINCM28_INV_MASK             ((uint32_t)0x04000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM28_INV_DISABLE          ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM28_INV_ENABLE           ((uint32_t)0x04000000U)
/* IOMUX_M33C1_PINCM28[Z1] Bits */
#define IOMUX_M33C1_PINCM28_Z1_OFS               (25)                            /* !< Z1 Offset */
#define IOMUX_M33C1_PINCM28_Z1_MASK              ((uint32_t)0x02000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM28_Z1_DISABLE           ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM28_Z1_ENABLE            ((uint32_t)0x02000000U)
/* IOMUX_M33C1_PINCM28[INENA] Bits */
#define IOMUX_M33C1_PINCM28_INENA_OFS            (18)                            /* !< INENA Offset */
#define IOMUX_M33C1_PINCM28_INENA_MASK           ((uint32_t)0x00040000U)         /* !< bit */
#define IOMUX_M33C1_PINCM28_INENA_PADCORE        ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM28_INENA_CORE0          ((uint32_t)0x00040000U)
/* IOMUX_M33C1_PINCM28[PIPU] Bits */
#define IOMUX_M33C1_PINCM28_PIPU_OFS             (17)                            /* !< PIPU Offset */
#define IOMUX_M33C1_PINCM28_PIPU_MASK            ((uint32_t)0x00020000U)         /* !< bit */
#define IOMUX_M33C1_PINCM28_PIPU_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM28_PIPU_ENABLE          ((uint32_t)0x00020000U)
/* IOMUX_M33C1_PINCM28[PIPD] Bits */
#define IOMUX_M33C1_PINCM28_PIPD_OFS             (16)                            /* !< PIPD Offset */
#define IOMUX_M33C1_PINCM28_PIPD_MASK            ((uint32_t)0x00010000U)         /* !< bit */
#define IOMUX_M33C1_PINCM28_PIPD_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM28_PIPD_ENABLE          ((uint32_t)0x00010000U)
/* IOMUX_M33C1_PINCM28[PC] Bits */
#define IOMUX_M33C1_PINCM28_PC_OFS               (7)                             /* !< PC Offset */
#define IOMUX_M33C1_PINCM28_PC_MASK              ((uint32_t)0x00000080U)         /* !< bit */
#define IOMUX_M33C1_PINCM28_PC_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM28_PC_CONNECTED         ((uint32_t)0x00000080U)
/* IOMUX_M33C1_PINCM28[PF] Bits */
#define IOMUX_M33C1_PINCM28_PF_OFS               (0)                             /* !< PF Offset */
#define IOMUX_M33C1_PINCM28_PF_MASK              ((uint32_t)0x0000000FU)         /* !< bit */
#define IOMUX_M33C1_PINCM28_PF_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM28_PF_GPIO1_DIO11       ((uint32_t)0x00000001U)
#define IOMUX_M33C1_PINCM28_PF_GPTIMER16B2CCLP2_CCP1 ((uint32_t)0x00000002U)
#define IOMUX_M33C1_PINCM28_PF_SYSCTL_CLK_OUT    ((uint32_t)0x00000003U)
#define IOMUX_M33C1_PINCM28_PF_GPTIMER16B2CCLP0_CCP1 ((uint32_t)0x00000004U)
#define IOMUX_M33C1_PINCM28_PF_SPGSS2_U1_SCLK_SCL_RX ((uint32_t)0x00000005U)
#define IOMUX_M33C1_PINCM28_PF_GPTIMER16BADV4CC1_CCP1_CMPL ((uint32_t)0x00000006U)
#define IOMUX_M33C1_PINCM28_PF_I2S0_BCLK         ((uint32_t)0x00000008U)

/* IOMUX_M33C1_PINCM29 Bits */
/* IOMUX_M33C1_PINCM29[WCOMP] Bits */
#define IOMUX_M33C1_PINCM29_WCOMP_OFS            (28)                            /* !< WCOMP Offset */
#define IOMUX_M33C1_PINCM29_WCOMP_MASK           ((uint32_t)0x10000000U)         /* !< Wakeup Compare Value bit */
#define IOMUX_M33C1_PINCM29_WCOMP_MATCH0         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM29_WCOMP_MATCH1         ((uint32_t)0x10000000U)
/* IOMUX_M33C1_PINCM29[WUEN] Bits */
#define IOMUX_M33C1_PINCM29_WUEN_OFS             (27)                            /* !< WUEN Offset */
#define IOMUX_M33C1_PINCM29_WUEN_MASK            ((uint32_t)0x08000000U)         /* !< Wakeup Enable bit */
#define IOMUX_M33C1_PINCM29_WUEN_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM29_WUEN_ENABLE          ((uint32_t)0x08000000U)
/* IOMUX_M33C1_PINCM29[INV] Bits */
#define IOMUX_M33C1_PINCM29_INV_OFS              (26)                            /* !< INV Offset */
#define IOMUX_M33C1_PINCM29_INV_MASK             ((uint32_t)0x04000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM29_INV_DISABLE          ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM29_INV_ENABLE           ((uint32_t)0x04000000U)
/* IOMUX_M33C1_PINCM29[Z1] Bits */
#define IOMUX_M33C1_PINCM29_Z1_OFS               (25)                            /* !< Z1 Offset */
#define IOMUX_M33C1_PINCM29_Z1_MASK              ((uint32_t)0x02000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM29_Z1_DISABLE           ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM29_Z1_ENABLE            ((uint32_t)0x02000000U)
/* IOMUX_M33C1_PINCM29[INENA] Bits */
#define IOMUX_M33C1_PINCM29_INENA_OFS            (18)                            /* !< INENA Offset */
#define IOMUX_M33C1_PINCM29_INENA_MASK           ((uint32_t)0x00040000U)         /* !< bit */
#define IOMUX_M33C1_PINCM29_INENA_PADCORE        ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM29_INENA_CORE0          ((uint32_t)0x00040000U)
/* IOMUX_M33C1_PINCM29[PIPU] Bits */
#define IOMUX_M33C1_PINCM29_PIPU_OFS             (17)                            /* !< PIPU Offset */
#define IOMUX_M33C1_PINCM29_PIPU_MASK            ((uint32_t)0x00020000U)         /* !< bit */
#define IOMUX_M33C1_PINCM29_PIPU_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM29_PIPU_ENABLE          ((uint32_t)0x00020000U)
/* IOMUX_M33C1_PINCM29[PIPD] Bits */
#define IOMUX_M33C1_PINCM29_PIPD_OFS             (16)                            /* !< PIPD Offset */
#define IOMUX_M33C1_PINCM29_PIPD_MASK            ((uint32_t)0x00010000U)         /* !< bit */
#define IOMUX_M33C1_PINCM29_PIPD_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM29_PIPD_ENABLE          ((uint32_t)0x00010000U)
/* IOMUX_M33C1_PINCM29[PC] Bits */
#define IOMUX_M33C1_PINCM29_PC_OFS               (7)                             /* !< PC Offset */
#define IOMUX_M33C1_PINCM29_PC_MASK              ((uint32_t)0x00000080U)         /* !< bit */
#define IOMUX_M33C1_PINCM29_PC_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM29_PC_CONNECTED         ((uint32_t)0x00000080U)
/* IOMUX_M33C1_PINCM29[PF] Bits */
#define IOMUX_M33C1_PINCM29_PF_OFS               (0)                             /* !< PF Offset */
#define IOMUX_M33C1_PINCM29_PF_MASK              ((uint32_t)0x0000000FU)         /* !< bit */
#define IOMUX_M33C1_PINCM29_PF_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM29_PF_GPIO1_DIO12       ((uint32_t)0x00000001U)
#define IOMUX_M33C1_PINCM29_PF_GPTIMER16BADV4CC0_FAULT1 ((uint32_t)0x00000002U)
#define IOMUX_M33C1_PINCM29_PF_SPGSS1_U5_PICO_SDA_TX ((uint32_t)0x00000003U)
#define IOMUX_M33C1_PINCM29_PF_SPGSS2_U1_CS0_CTS ((uint32_t)0x00000004U)
#define IOMUX_M33C1_PINCM29_PF_I2S0_AD0          ((uint32_t)0x00000008U)

/* IOMUX_M33C1_PINCM30 Bits */
/* IOMUX_M33C1_PINCM30[WCOMP] Bits */
#define IOMUX_M33C1_PINCM30_WCOMP_OFS            (28)                            /* !< WCOMP Offset */
#define IOMUX_M33C1_PINCM30_WCOMP_MASK           ((uint32_t)0x10000000U)         /* !< Wakeup Compare Value bit */
#define IOMUX_M33C1_PINCM30_WCOMP_MATCH0         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM30_WCOMP_MATCH1         ((uint32_t)0x10000000U)
/* IOMUX_M33C1_PINCM30[WUEN] Bits */
#define IOMUX_M33C1_PINCM30_WUEN_OFS             (27)                            /* !< WUEN Offset */
#define IOMUX_M33C1_PINCM30_WUEN_MASK            ((uint32_t)0x08000000U)         /* !< Wakeup Enable bit */
#define IOMUX_M33C1_PINCM30_WUEN_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM30_WUEN_ENABLE          ((uint32_t)0x08000000U)
/* IOMUX_M33C1_PINCM30[INV] Bits */
#define IOMUX_M33C1_PINCM30_INV_OFS              (26)                            /* !< INV Offset */
#define IOMUX_M33C1_PINCM30_INV_MASK             ((uint32_t)0x04000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM30_INV_DISABLE          ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM30_INV_ENABLE           ((uint32_t)0x04000000U)
/* IOMUX_M33C1_PINCM30[Z1] Bits */
#define IOMUX_M33C1_PINCM30_Z1_OFS               (25)                            /* !< Z1 Offset */
#define IOMUX_M33C1_PINCM30_Z1_MASK              ((uint32_t)0x02000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM30_Z1_DISABLE           ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM30_Z1_ENABLE            ((uint32_t)0x02000000U)
/* IOMUX_M33C1_PINCM30[INENA] Bits */
#define IOMUX_M33C1_PINCM30_INENA_OFS            (18)                            /* !< INENA Offset */
#define IOMUX_M33C1_PINCM30_INENA_MASK           ((uint32_t)0x00040000U)         /* !< bit */
#define IOMUX_M33C1_PINCM30_INENA_PADCORE        ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM30_INENA_CORE0          ((uint32_t)0x00040000U)
/* IOMUX_M33C1_PINCM30[PIPU] Bits */
#define IOMUX_M33C1_PINCM30_PIPU_OFS             (17)                            /* !< PIPU Offset */
#define IOMUX_M33C1_PINCM30_PIPU_MASK            ((uint32_t)0x00020000U)         /* !< bit */
#define IOMUX_M33C1_PINCM30_PIPU_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM30_PIPU_ENABLE          ((uint32_t)0x00020000U)
/* IOMUX_M33C1_PINCM30[PIPD] Bits */
#define IOMUX_M33C1_PINCM30_PIPD_OFS             (16)                            /* !< PIPD Offset */
#define IOMUX_M33C1_PINCM30_PIPD_MASK            ((uint32_t)0x00010000U)         /* !< bit */
#define IOMUX_M33C1_PINCM30_PIPD_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM30_PIPD_ENABLE          ((uint32_t)0x00010000U)
/* IOMUX_M33C1_PINCM30[PC] Bits */
#define IOMUX_M33C1_PINCM30_PC_OFS               (7)                             /* !< PC Offset */
#define IOMUX_M33C1_PINCM30_PC_MASK              ((uint32_t)0x00000080U)         /* !< bit */
#define IOMUX_M33C1_PINCM30_PC_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM30_PC_CONNECTED         ((uint32_t)0x00000080U)
/* IOMUX_M33C1_PINCM30[PF] Bits */
#define IOMUX_M33C1_PINCM30_PF_OFS               (0)                             /* !< PF Offset */
#define IOMUX_M33C1_PINCM30_PF_MASK              ((uint32_t)0x0000000FU)         /* !< bit */
#define IOMUX_M33C1_PINCM30_PF_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM30_PF_GPIO1_DIO13       ((uint32_t)0x00000001U)
#define IOMUX_M33C1_PINCM30_PF_GPTIMER32B2CC0_CCP0 ((uint32_t)0x00000002U)
#define IOMUX_M33C1_PINCM30_PF_GPTIMER16BADV4CC0_CCP1_CMPL ((uint32_t)0x00000003U)
#define IOMUX_M33C1_PINCM30_PF_SPGSS1_U5_SCLK_SCL_RX ((uint32_t)0x00000004U)
#define IOMUX_M33C1_PINCM30_PF_SPGSS2_U1_POCI_RTS ((uint32_t)0x00000005U)
#define IOMUX_M33C1_PINCM30_PF_QSPI_CS2_MISO2    ((uint32_t)0x00000006U)
#define IOMUX_M33C1_PINCM30_PF_I2S0_AD1          ((uint32_t)0x00000008U)

/* IOMUX_M33C1_PINCM31 Bits */
/* IOMUX_M33C1_PINCM31[WCOMP] Bits */
#define IOMUX_M33C1_PINCM31_WCOMP_OFS            (28)                            /* !< WCOMP Offset */
#define IOMUX_M33C1_PINCM31_WCOMP_MASK           ((uint32_t)0x10000000U)         /* !< Wakeup Compare Value bit */
#define IOMUX_M33C1_PINCM31_WCOMP_MATCH0         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM31_WCOMP_MATCH1         ((uint32_t)0x10000000U)
/* IOMUX_M33C1_PINCM31[WUEN] Bits */
#define IOMUX_M33C1_PINCM31_WUEN_OFS             (27)                            /* !< WUEN Offset */
#define IOMUX_M33C1_PINCM31_WUEN_MASK            ((uint32_t)0x08000000U)         /* !< Wakeup Enable bit */
#define IOMUX_M33C1_PINCM31_WUEN_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM31_WUEN_ENABLE          ((uint32_t)0x08000000U)
/* IOMUX_M33C1_PINCM31[INV] Bits */
#define IOMUX_M33C1_PINCM31_INV_OFS              (26)                            /* !< INV Offset */
#define IOMUX_M33C1_PINCM31_INV_MASK             ((uint32_t)0x04000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM31_INV_DISABLE          ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM31_INV_ENABLE           ((uint32_t)0x04000000U)
/* IOMUX_M33C1_PINCM31[Z1] Bits */
#define IOMUX_M33C1_PINCM31_Z1_OFS               (25)                            /* !< Z1 Offset */
#define IOMUX_M33C1_PINCM31_Z1_MASK              ((uint32_t)0x02000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM31_Z1_DISABLE           ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM31_Z1_ENABLE            ((uint32_t)0x02000000U)
/* IOMUX_M33C1_PINCM31[INENA] Bits */
#define IOMUX_M33C1_PINCM31_INENA_OFS            (18)                            /* !< INENA Offset */
#define IOMUX_M33C1_PINCM31_INENA_MASK           ((uint32_t)0x00040000U)         /* !< bit */
#define IOMUX_M33C1_PINCM31_INENA_PADCORE        ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM31_INENA_CORE0          ((uint32_t)0x00040000U)
/* IOMUX_M33C1_PINCM31[PIPU] Bits */
#define IOMUX_M33C1_PINCM31_PIPU_OFS             (17)                            /* !< PIPU Offset */
#define IOMUX_M33C1_PINCM31_PIPU_MASK            ((uint32_t)0x00020000U)         /* !< bit */
#define IOMUX_M33C1_PINCM31_PIPU_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM31_PIPU_ENABLE          ((uint32_t)0x00020000U)
/* IOMUX_M33C1_PINCM31[PIPD] Bits */
#define IOMUX_M33C1_PINCM31_PIPD_OFS             (16)                            /* !< PIPD Offset */
#define IOMUX_M33C1_PINCM31_PIPD_MASK            ((uint32_t)0x00010000U)         /* !< bit */
#define IOMUX_M33C1_PINCM31_PIPD_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM31_PIPD_ENABLE          ((uint32_t)0x00010000U)
/* IOMUX_M33C1_PINCM31[PC] Bits */
#define IOMUX_M33C1_PINCM31_PC_OFS               (7)                             /* !< PC Offset */
#define IOMUX_M33C1_PINCM31_PC_MASK              ((uint32_t)0x00000080U)         /* !< bit */
#define IOMUX_M33C1_PINCM31_PC_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM31_PC_CONNECTED         ((uint32_t)0x00000080U)
/* IOMUX_M33C1_PINCM31[PF] Bits */
#define IOMUX_M33C1_PINCM31_PF_OFS               (0)                             /* !< PF Offset */
#define IOMUX_M33C1_PINCM31_PF_MASK              ((uint32_t)0x0000000FU)         /* !< bit */
#define IOMUX_M33C1_PINCM31_PF_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM31_PF_GPIO1_DIO14       ((uint32_t)0x00000001U)
#define IOMUX_M33C1_PINCM31_PF_GPTIMER16B2CCQEILP0_IDX ((uint32_t)0x00000002U)
#define IOMUX_M33C1_PINCM31_PF_GPTIMER32B2CC0_CCP1 ((uint32_t)0x00000003U)
#define IOMUX_M33C1_PINCM31_PF_GPTIMER16BADV4CC0_CCP0 ((uint32_t)0x00000004U)
#define IOMUX_M33C1_PINCM31_PF_QSPI_CS0          ((uint32_t)0x00000006U)
#define IOMUX_M33C1_PINCM31_PF_SPGSS1_U5_POCI_RTS ((uint32_t)0x00000007U)
#define IOMUX_M33C1_PINCM31_PF_I2S0_MCLK         ((uint32_t)0x00000008U)

/* IOMUX_M33C1_PINCM32 Bits */
/* IOMUX_M33C1_PINCM32[WCOMP] Bits */
#define IOMUX_M33C1_PINCM32_WCOMP_OFS            (28)                            /* !< WCOMP Offset */
#define IOMUX_M33C1_PINCM32_WCOMP_MASK           ((uint32_t)0x10000000U)         /* !< Wakeup Compare Value bit */
#define IOMUX_M33C1_PINCM32_WCOMP_MATCH0         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM32_WCOMP_MATCH1         ((uint32_t)0x10000000U)
/* IOMUX_M33C1_PINCM32[WUEN] Bits */
#define IOMUX_M33C1_PINCM32_WUEN_OFS             (27)                            /* !< WUEN Offset */
#define IOMUX_M33C1_PINCM32_WUEN_MASK            ((uint32_t)0x08000000U)         /* !< Wakeup Enable bit */
#define IOMUX_M33C1_PINCM32_WUEN_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM32_WUEN_ENABLE          ((uint32_t)0x08000000U)
/* IOMUX_M33C1_PINCM32[INV] Bits */
#define IOMUX_M33C1_PINCM32_INV_OFS              (26)                            /* !< INV Offset */
#define IOMUX_M33C1_PINCM32_INV_MASK             ((uint32_t)0x04000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM32_INV_DISABLE          ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM32_INV_ENABLE           ((uint32_t)0x04000000U)
/* IOMUX_M33C1_PINCM32[Z1] Bits */
#define IOMUX_M33C1_PINCM32_Z1_OFS               (25)                            /* !< Z1 Offset */
#define IOMUX_M33C1_PINCM32_Z1_MASK              ((uint32_t)0x02000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM32_Z1_DISABLE           ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM32_Z1_ENABLE            ((uint32_t)0x02000000U)
/* IOMUX_M33C1_PINCM32[DRV] Bits */
#define IOMUX_M33C1_PINCM32_DRV_OFS              (20)                            /* !< DRV Offset */
#define IOMUX_M33C1_PINCM32_DRV_MASK             ((uint32_t)0x00100000U)         /* !< bit */
#define IOMUX_M33C1_PINCM32_DRV_DRIVEVALUE0      ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM32_DRV_DRIVEVALUE1      ((uint32_t)0x00100000U)
/* IOMUX_M33C1_PINCM32[INENA] Bits */
#define IOMUX_M33C1_PINCM32_INENA_OFS            (18)                            /* !< INENA Offset */
#define IOMUX_M33C1_PINCM32_INENA_MASK           ((uint32_t)0x00040000U)         /* !< bit */
#define IOMUX_M33C1_PINCM32_INENA_PADCORE        ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM32_INENA_CORE0          ((uint32_t)0x00040000U)
/* IOMUX_M33C1_PINCM32[PIPU] Bits */
#define IOMUX_M33C1_PINCM32_PIPU_OFS             (17)                            /* !< PIPU Offset */
#define IOMUX_M33C1_PINCM32_PIPU_MASK            ((uint32_t)0x00020000U)         /* !< bit */
#define IOMUX_M33C1_PINCM32_PIPU_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM32_PIPU_ENABLE          ((uint32_t)0x00020000U)
/* IOMUX_M33C1_PINCM32[PIPD] Bits */
#define IOMUX_M33C1_PINCM32_PIPD_OFS             (16)                            /* !< PIPD Offset */
#define IOMUX_M33C1_PINCM32_PIPD_MASK            ((uint32_t)0x00010000U)         /* !< bit */
#define IOMUX_M33C1_PINCM32_PIPD_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM32_PIPD_ENABLE          ((uint32_t)0x00010000U)
/* IOMUX_M33C1_PINCM32[PC] Bits */
#define IOMUX_M33C1_PINCM32_PC_OFS               (7)                             /* !< PC Offset */
#define IOMUX_M33C1_PINCM32_PC_MASK              ((uint32_t)0x00000080U)         /* !< bit */
#define IOMUX_M33C1_PINCM32_PC_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM32_PC_CONNECTED         ((uint32_t)0x00000080U)
/* IOMUX_M33C1_PINCM32[PF] Bits */
#define IOMUX_M33C1_PINCM32_PF_OFS               (0)                             /* !< PF Offset */
#define IOMUX_M33C1_PINCM32_PF_MASK              ((uint32_t)0x0000000FU)         /* !< bit */
#define IOMUX_M33C1_PINCM32_PF_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM32_PF_GPIO1_DIO15       ((uint32_t)0x00000001U)
#define IOMUX_M33C1_PINCM32_PF_GPTIMER16B2CCLP3_CCP0 ((uint32_t)0x00000002U)
#define IOMUX_M33C1_PINCM32_PF_GPTIMER16B2CCQEILP0_CCP0 ((uint32_t)0x00000003U)
#define IOMUX_M33C1_PINCM32_PF_GPTIMER16BADV4CC1_CCP3 ((uint32_t)0x00000004U)
#define IOMUX_M33C1_PINCM32_PF_I2S0_MCLK         ((uint32_t)0x00000005U)
#define IOMUX_M33C1_PINCM32_PF_QSPI_IO3          ((uint32_t)0x00000006U)
#define IOMUX_M33C1_PINCM32_PF_SPGSS2_U0_PICO_SDA_TX ((uint32_t)0x00000007U)
#define IOMUX_M33C1_PINCM32_PF_SPGSS1_U4_TX      ((uint32_t)0x00000008U)

/* IOMUX_M33C1_PINCM33 Bits */
/* IOMUX_M33C1_PINCM33[WCOMP] Bits */
#define IOMUX_M33C1_PINCM33_WCOMP_OFS            (28)                            /* !< WCOMP Offset */
#define IOMUX_M33C1_PINCM33_WCOMP_MASK           ((uint32_t)0x10000000U)         /* !< Wakeup Compare Value bit */
#define IOMUX_M33C1_PINCM33_WCOMP_MATCH0         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM33_WCOMP_MATCH1         ((uint32_t)0x10000000U)
/* IOMUX_M33C1_PINCM33[WUEN] Bits */
#define IOMUX_M33C1_PINCM33_WUEN_OFS             (27)                            /* !< WUEN Offset */
#define IOMUX_M33C1_PINCM33_WUEN_MASK            ((uint32_t)0x08000000U)         /* !< Wakeup Enable bit */
#define IOMUX_M33C1_PINCM33_WUEN_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM33_WUEN_ENABLE          ((uint32_t)0x08000000U)
/* IOMUX_M33C1_PINCM33[INV] Bits */
#define IOMUX_M33C1_PINCM33_INV_OFS              (26)                            /* !< INV Offset */
#define IOMUX_M33C1_PINCM33_INV_MASK             ((uint32_t)0x04000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM33_INV_DISABLE          ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM33_INV_ENABLE           ((uint32_t)0x04000000U)
/* IOMUX_M33C1_PINCM33[Z1] Bits */
#define IOMUX_M33C1_PINCM33_Z1_OFS               (25)                            /* !< Z1 Offset */
#define IOMUX_M33C1_PINCM33_Z1_MASK              ((uint32_t)0x02000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM33_Z1_DISABLE           ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM33_Z1_ENABLE            ((uint32_t)0x02000000U)
/* IOMUX_M33C1_PINCM33[DRV] Bits */
#define IOMUX_M33C1_PINCM33_DRV_OFS              (20)                            /* !< DRV Offset */
#define IOMUX_M33C1_PINCM33_DRV_MASK             ((uint32_t)0x00100000U)         /* !< bit */
#define IOMUX_M33C1_PINCM33_DRV_DRIVEVALUE0      ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM33_DRV_DRIVEVALUE1      ((uint32_t)0x00100000U)
/* IOMUX_M33C1_PINCM33[INENA] Bits */
#define IOMUX_M33C1_PINCM33_INENA_OFS            (18)                            /* !< INENA Offset */
#define IOMUX_M33C1_PINCM33_INENA_MASK           ((uint32_t)0x00040000U)         /* !< bit */
#define IOMUX_M33C1_PINCM33_INENA_PADCORE        ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM33_INENA_CORE0          ((uint32_t)0x00040000U)
/* IOMUX_M33C1_PINCM33[PIPU] Bits */
#define IOMUX_M33C1_PINCM33_PIPU_OFS             (17)                            /* !< PIPU Offset */
#define IOMUX_M33C1_PINCM33_PIPU_MASK            ((uint32_t)0x00020000U)         /* !< bit */
#define IOMUX_M33C1_PINCM33_PIPU_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM33_PIPU_ENABLE          ((uint32_t)0x00020000U)
/* IOMUX_M33C1_PINCM33[PIPD] Bits */
#define IOMUX_M33C1_PINCM33_PIPD_OFS             (16)                            /* !< PIPD Offset */
#define IOMUX_M33C1_PINCM33_PIPD_MASK            ((uint32_t)0x00010000U)         /* !< bit */
#define IOMUX_M33C1_PINCM33_PIPD_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM33_PIPD_ENABLE          ((uint32_t)0x00010000U)
/* IOMUX_M33C1_PINCM33[PC] Bits */
#define IOMUX_M33C1_PINCM33_PC_OFS               (7)                             /* !< PC Offset */
#define IOMUX_M33C1_PINCM33_PC_MASK              ((uint32_t)0x00000080U)         /* !< bit */
#define IOMUX_M33C1_PINCM33_PC_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM33_PC_CONNECTED         ((uint32_t)0x00000080U)
/* IOMUX_M33C1_PINCM33[PF] Bits */
#define IOMUX_M33C1_PINCM33_PF_OFS               (0)                             /* !< PF Offset */
#define IOMUX_M33C1_PINCM33_PF_MASK              ((uint32_t)0x0000000FU)         /* !< bit */
#define IOMUX_M33C1_PINCM33_PF_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM33_PF_GPIO1_DIO16       ((uint32_t)0x00000001U)
#define IOMUX_M33C1_PINCM33_PF_GPTIMER16B2CCLP3_CCP1 ((uint32_t)0x00000002U)
#define IOMUX_M33C1_PINCM33_PF_GPTIMER16B2CCQEILP0_CCP1 ((uint32_t)0x00000003U)
#define IOMUX_M33C1_PINCM33_PF_GPTIMER16BADV4CC1_CCP3_CMPL ((uint32_t)0x00000004U)
#define IOMUX_M33C1_PINCM33_PF_I2S0_WCLK         ((uint32_t)0x00000005U)
#define IOMUX_M33C1_PINCM33_PF_QSPI_SCLK         ((uint32_t)0x00000006U)
#define IOMUX_M33C1_PINCM33_PF_SPGSS2_U0_SCLK_SCL_RX ((uint32_t)0x00000007U)
#define IOMUX_M33C1_PINCM33_PF_SPGSS1_U4_RX      ((uint32_t)0x00000008U)

/* IOMUX_M33C1_PINCM34 Bits */
/* IOMUX_M33C1_PINCM34[WCOMP] Bits */
#define IOMUX_M33C1_PINCM34_WCOMP_OFS            (28)                            /* !< WCOMP Offset */
#define IOMUX_M33C1_PINCM34_WCOMP_MASK           ((uint32_t)0x10000000U)         /* !< Wakeup Compare Value bit */
#define IOMUX_M33C1_PINCM34_WCOMP_MATCH0         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM34_WCOMP_MATCH1         ((uint32_t)0x10000000U)
/* IOMUX_M33C1_PINCM34[WUEN] Bits */
#define IOMUX_M33C1_PINCM34_WUEN_OFS             (27)                            /* !< WUEN Offset */
#define IOMUX_M33C1_PINCM34_WUEN_MASK            ((uint32_t)0x08000000U)         /* !< Wakeup Enable bit */
#define IOMUX_M33C1_PINCM34_WUEN_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM34_WUEN_ENABLE          ((uint32_t)0x08000000U)
/* IOMUX_M33C1_PINCM34[INV] Bits */
#define IOMUX_M33C1_PINCM34_INV_OFS              (26)                            /* !< INV Offset */
#define IOMUX_M33C1_PINCM34_INV_MASK             ((uint32_t)0x04000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM34_INV_DISABLE          ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM34_INV_ENABLE           ((uint32_t)0x04000000U)
/* IOMUX_M33C1_PINCM34[Z1] Bits */
#define IOMUX_M33C1_PINCM34_Z1_OFS               (25)                            /* !< Z1 Offset */
#define IOMUX_M33C1_PINCM34_Z1_MASK              ((uint32_t)0x02000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM34_Z1_DISABLE           ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM34_Z1_ENABLE            ((uint32_t)0x02000000U)
/* IOMUX_M33C1_PINCM34[DRV] Bits */
#define IOMUX_M33C1_PINCM34_DRV_OFS              (20)                            /* !< DRV Offset */
#define IOMUX_M33C1_PINCM34_DRV_MASK             ((uint32_t)0x00100000U)         /* !< bit */
#define IOMUX_M33C1_PINCM34_DRV_DRIVEVALUE0      ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM34_DRV_DRIVEVALUE1      ((uint32_t)0x00100000U)
/* IOMUX_M33C1_PINCM34[INENA] Bits */
#define IOMUX_M33C1_PINCM34_INENA_OFS            (18)                            /* !< INENA Offset */
#define IOMUX_M33C1_PINCM34_INENA_MASK           ((uint32_t)0x00040000U)         /* !< bit */
#define IOMUX_M33C1_PINCM34_INENA_PADCORE        ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM34_INENA_CORE0          ((uint32_t)0x00040000U)
/* IOMUX_M33C1_PINCM34[PIPU] Bits */
#define IOMUX_M33C1_PINCM34_PIPU_OFS             (17)                            /* !< PIPU Offset */
#define IOMUX_M33C1_PINCM34_PIPU_MASK            ((uint32_t)0x00020000U)         /* !< bit */
#define IOMUX_M33C1_PINCM34_PIPU_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM34_PIPU_ENABLE          ((uint32_t)0x00020000U)
/* IOMUX_M33C1_PINCM34[PIPD] Bits */
#define IOMUX_M33C1_PINCM34_PIPD_OFS             (16)                            /* !< PIPD Offset */
#define IOMUX_M33C1_PINCM34_PIPD_MASK            ((uint32_t)0x00010000U)         /* !< bit */
#define IOMUX_M33C1_PINCM34_PIPD_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM34_PIPD_ENABLE          ((uint32_t)0x00010000U)
/* IOMUX_M33C1_PINCM34[PC] Bits */
#define IOMUX_M33C1_PINCM34_PC_OFS               (7)                             /* !< PC Offset */
#define IOMUX_M33C1_PINCM34_PC_MASK              ((uint32_t)0x00000080U)         /* !< bit */
#define IOMUX_M33C1_PINCM34_PC_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM34_PC_CONNECTED         ((uint32_t)0x00000080U)
/* IOMUX_M33C1_PINCM34[PF] Bits */
#define IOMUX_M33C1_PINCM34_PF_OFS               (0)                             /* !< PF Offset */
#define IOMUX_M33C1_PINCM34_PF_MASK              ((uint32_t)0x0000000FU)         /* !< bit */
#define IOMUX_M33C1_PINCM34_PF_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM34_PF_GPIO0_DIO12       ((uint32_t)0x00000001U)
#define IOMUX_M33C1_PINCM34_PF_MCAN0_CANTX       ((uint32_t)0x00000002U)
#define IOMUX_M33C1_PINCM34_PF_GPTIMER16B2CCLP0_CCP0 ((uint32_t)0x00000003U)
#define IOMUX_M33C1_PINCM34_PF_SYSCTL_FCC_IN     ((uint32_t)0x00000004U)
#define IOMUX_M33C1_PINCM34_PF_I2S0_BCLK         ((uint32_t)0x00000005U)
#define IOMUX_M33C1_PINCM34_PF_QSPI_MOSI         ((uint32_t)0x00000006U)
#define IOMUX_M33C1_PINCM34_PF_SPGSS1_U5_CS0_CTS ((uint32_t)0x00000007U)
#define IOMUX_M33C1_PINCM34_PF_GPTIMER16BADV4CC1_CCP1 ((uint32_t)0x00000008U)

/* IOMUX_M33C1_PINCM35 Bits */
/* IOMUX_M33C1_PINCM35[WCOMP] Bits */
#define IOMUX_M33C1_PINCM35_WCOMP_OFS            (28)                            /* !< WCOMP Offset */
#define IOMUX_M33C1_PINCM35_WCOMP_MASK           ((uint32_t)0x10000000U)         /* !< Wakeup Compare Value bit */
#define IOMUX_M33C1_PINCM35_WCOMP_MATCH0         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM35_WCOMP_MATCH1         ((uint32_t)0x10000000U)
/* IOMUX_M33C1_PINCM35[WUEN] Bits */
#define IOMUX_M33C1_PINCM35_WUEN_OFS             (27)                            /* !< WUEN Offset */
#define IOMUX_M33C1_PINCM35_WUEN_MASK            ((uint32_t)0x08000000U)         /* !< Wakeup Enable bit */
#define IOMUX_M33C1_PINCM35_WUEN_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM35_WUEN_ENABLE          ((uint32_t)0x08000000U)
/* IOMUX_M33C1_PINCM35[INV] Bits */
#define IOMUX_M33C1_PINCM35_INV_OFS              (26)                            /* !< INV Offset */
#define IOMUX_M33C1_PINCM35_INV_MASK             ((uint32_t)0x04000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM35_INV_DISABLE          ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM35_INV_ENABLE           ((uint32_t)0x04000000U)
/* IOMUX_M33C1_PINCM35[Z1] Bits */
#define IOMUX_M33C1_PINCM35_Z1_OFS               (25)                            /* !< Z1 Offset */
#define IOMUX_M33C1_PINCM35_Z1_MASK              ((uint32_t)0x02000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM35_Z1_DISABLE           ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM35_Z1_ENABLE            ((uint32_t)0x02000000U)
/* IOMUX_M33C1_PINCM35[DRV] Bits */
#define IOMUX_M33C1_PINCM35_DRV_OFS              (20)                            /* !< DRV Offset */
#define IOMUX_M33C1_PINCM35_DRV_MASK             ((uint32_t)0x00100000U)         /* !< bit */
#define IOMUX_M33C1_PINCM35_DRV_DRIVEVALUE0      ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM35_DRV_DRIVEVALUE1      ((uint32_t)0x00100000U)
/* IOMUX_M33C1_PINCM35[INENA] Bits */
#define IOMUX_M33C1_PINCM35_INENA_OFS            (18)                            /* !< INENA Offset */
#define IOMUX_M33C1_PINCM35_INENA_MASK           ((uint32_t)0x00040000U)         /* !< bit */
#define IOMUX_M33C1_PINCM35_INENA_PADCORE        ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM35_INENA_CORE0          ((uint32_t)0x00040000U)
/* IOMUX_M33C1_PINCM35[PIPU] Bits */
#define IOMUX_M33C1_PINCM35_PIPU_OFS             (17)                            /* !< PIPU Offset */
#define IOMUX_M33C1_PINCM35_PIPU_MASK            ((uint32_t)0x00020000U)         /* !< bit */
#define IOMUX_M33C1_PINCM35_PIPU_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM35_PIPU_ENABLE          ((uint32_t)0x00020000U)
/* IOMUX_M33C1_PINCM35[PIPD] Bits */
#define IOMUX_M33C1_PINCM35_PIPD_OFS             (16)                            /* !< PIPD Offset */
#define IOMUX_M33C1_PINCM35_PIPD_MASK            ((uint32_t)0x00010000U)         /* !< bit */
#define IOMUX_M33C1_PINCM35_PIPD_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM35_PIPD_ENABLE          ((uint32_t)0x00010000U)
/* IOMUX_M33C1_PINCM35[PC] Bits */
#define IOMUX_M33C1_PINCM35_PC_OFS               (7)                             /* !< PC Offset */
#define IOMUX_M33C1_PINCM35_PC_MASK              ((uint32_t)0x00000080U)         /* !< bit */
#define IOMUX_M33C1_PINCM35_PC_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM35_PC_CONNECTED         ((uint32_t)0x00000080U)
/* IOMUX_M33C1_PINCM35[PF] Bits */
#define IOMUX_M33C1_PINCM35_PF_OFS               (0)                             /* !< PF Offset */
#define IOMUX_M33C1_PINCM35_PF_MASK              ((uint32_t)0x0000000FU)         /* !< bit */
#define IOMUX_M33C1_PINCM35_PF_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM35_PF_GPIO0_DIO13       ((uint32_t)0x00000001U)
#define IOMUX_M33C1_PINCM35_PF_MCAN0_CANRX       ((uint32_t)0x00000002U)
#define IOMUX_M33C1_PINCM35_PF_GPTIMER16B2CCLP0_CCP1 ((uint32_t)0x00000003U)
#define IOMUX_M33C1_PINCM35_PF_GPTIMER16BADV4CC1_FAULT1 ((uint32_t)0x00000004U)
#define IOMUX_M33C1_PINCM35_PF_I2S0_AD0          ((uint32_t)0x00000005U)
#define IOMUX_M33C1_PINCM35_PF_QSPI_IO2          ((uint32_t)0x00000006U)
#define IOMUX_M33C1_PINCM35_PF_SPGSS1_U5_SCLK_SCL_RX ((uint32_t)0x00000007U)
#define IOMUX_M33C1_PINCM35_PF_SPGSS1_U5_POCI_RTS ((uint32_t)0x00000008U)
#define IOMUX_M33C1_PINCM35_PF_SPGSS1_U4_TX      ((uint32_t)0x00000009U)

/* IOMUX_M33C1_PINCM36 Bits */
/* IOMUX_M33C1_PINCM36[WCOMP] Bits */
#define IOMUX_M33C1_PINCM36_WCOMP_OFS            (28)                            /* !< WCOMP Offset */
#define IOMUX_M33C1_PINCM36_WCOMP_MASK           ((uint32_t)0x10000000U)         /* !< Wakeup Compare Value bit */
#define IOMUX_M33C1_PINCM36_WCOMP_MATCH0         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM36_WCOMP_MATCH1         ((uint32_t)0x10000000U)
/* IOMUX_M33C1_PINCM36[WUEN] Bits */
#define IOMUX_M33C1_PINCM36_WUEN_OFS             (27)                            /* !< WUEN Offset */
#define IOMUX_M33C1_PINCM36_WUEN_MASK            ((uint32_t)0x08000000U)         /* !< Wakeup Enable bit */
#define IOMUX_M33C1_PINCM36_WUEN_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM36_WUEN_ENABLE          ((uint32_t)0x08000000U)
/* IOMUX_M33C1_PINCM36[INV] Bits */
#define IOMUX_M33C1_PINCM36_INV_OFS              (26)                            /* !< INV Offset */
#define IOMUX_M33C1_PINCM36_INV_MASK             ((uint32_t)0x04000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM36_INV_DISABLE          ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM36_INV_ENABLE           ((uint32_t)0x04000000U)
/* IOMUX_M33C1_PINCM36[Z1] Bits */
#define IOMUX_M33C1_PINCM36_Z1_OFS               (25)                            /* !< Z1 Offset */
#define IOMUX_M33C1_PINCM36_Z1_MASK              ((uint32_t)0x02000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM36_Z1_DISABLE           ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM36_Z1_ENABLE            ((uint32_t)0x02000000U)
/* IOMUX_M33C1_PINCM36[DRV] Bits */
#define IOMUX_M33C1_PINCM36_DRV_OFS              (20)                            /* !< DRV Offset */
#define IOMUX_M33C1_PINCM36_DRV_MASK             ((uint32_t)0x00100000U)         /* !< bit */
#define IOMUX_M33C1_PINCM36_DRV_DRIVEVALUE0      ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM36_DRV_DRIVEVALUE1      ((uint32_t)0x00100000U)
/* IOMUX_M33C1_PINCM36[INENA] Bits */
#define IOMUX_M33C1_PINCM36_INENA_OFS            (18)                            /* !< INENA Offset */
#define IOMUX_M33C1_PINCM36_INENA_MASK           ((uint32_t)0x00040000U)         /* !< bit */
#define IOMUX_M33C1_PINCM36_INENA_PADCORE        ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM36_INENA_CORE0          ((uint32_t)0x00040000U)
/* IOMUX_M33C1_PINCM36[PIPU] Bits */
#define IOMUX_M33C1_PINCM36_PIPU_OFS             (17)                            /* !< PIPU Offset */
#define IOMUX_M33C1_PINCM36_PIPU_MASK            ((uint32_t)0x00020000U)         /* !< bit */
#define IOMUX_M33C1_PINCM36_PIPU_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM36_PIPU_ENABLE          ((uint32_t)0x00020000U)
/* IOMUX_M33C1_PINCM36[PIPD] Bits */
#define IOMUX_M33C1_PINCM36_PIPD_OFS             (16)                            /* !< PIPD Offset */
#define IOMUX_M33C1_PINCM36_PIPD_MASK            ((uint32_t)0x00010000U)         /* !< bit */
#define IOMUX_M33C1_PINCM36_PIPD_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM36_PIPD_ENABLE          ((uint32_t)0x00010000U)
/* IOMUX_M33C1_PINCM36[PC] Bits */
#define IOMUX_M33C1_PINCM36_PC_OFS               (7)                             /* !< PC Offset */
#define IOMUX_M33C1_PINCM36_PC_MASK              ((uint32_t)0x00000080U)         /* !< bit */
#define IOMUX_M33C1_PINCM36_PC_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM36_PC_CONNECTED         ((uint32_t)0x00000080U)
/* IOMUX_M33C1_PINCM36[PF] Bits */
#define IOMUX_M33C1_PINCM36_PF_OFS               (0)                             /* !< PF Offset */
#define IOMUX_M33C1_PINCM36_PF_MASK              ((uint32_t)0x0000000FU)         /* !< bit */
#define IOMUX_M33C1_PINCM36_PF_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM36_PF_GPIO0_DIO14       ((uint32_t)0x00000001U)
#define IOMUX_M33C1_PINCM36_PF_SYSCTL_CLK_OUT    ((uint32_t)0x00000002U)
#define IOMUX_M33C1_PINCM36_PF_GPTIMER16BADV4CC1_CCP1_CMPL ((uint32_t)0x00000003U)
#define IOMUX_M33C1_PINCM36_PF_GPTIMER16BADV4CC0_CCP3 ((uint32_t)0x00000004U)
#define IOMUX_M33C1_PINCM36_PF_I2S0_AD1          ((uint32_t)0x00000005U)
#define IOMUX_M33C1_PINCM36_PF_QSPI_MISO         ((uint32_t)0x00000006U)
#define IOMUX_M33C1_PINCM36_PF_SPGSS0_U1_CTS     ((uint32_t)0x00000007U)
#define IOMUX_M33C1_PINCM36_PF_SPGSS1_U5_PICO_SDA_TX ((uint32_t)0x00000008U)
#define IOMUX_M33C1_PINCM36_PF_SPGSS1_U4_RX      ((uint32_t)0x00000009U)

/* IOMUX_M33C1_PINCM37 Bits */
/* IOMUX_M33C1_PINCM37[WCOMP] Bits */
#define IOMUX_M33C1_PINCM37_WCOMP_OFS            (28)                            /* !< WCOMP Offset */
#define IOMUX_M33C1_PINCM37_WCOMP_MASK           ((uint32_t)0x10000000U)         /* !< Wakeup Compare Value bit */
#define IOMUX_M33C1_PINCM37_WCOMP_MATCH0         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM37_WCOMP_MATCH1         ((uint32_t)0x10000000U)
/* IOMUX_M33C1_PINCM37[WUEN] Bits */
#define IOMUX_M33C1_PINCM37_WUEN_OFS             (27)                            /* !< WUEN Offset */
#define IOMUX_M33C1_PINCM37_WUEN_MASK            ((uint32_t)0x08000000U)         /* !< Wakeup Enable bit */
#define IOMUX_M33C1_PINCM37_WUEN_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM37_WUEN_ENABLE          ((uint32_t)0x08000000U)
/* IOMUX_M33C1_PINCM37[INV] Bits */
#define IOMUX_M33C1_PINCM37_INV_OFS              (26)                            /* !< INV Offset */
#define IOMUX_M33C1_PINCM37_INV_MASK             ((uint32_t)0x04000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM37_INV_DISABLE          ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM37_INV_ENABLE           ((uint32_t)0x04000000U)
/* IOMUX_M33C1_PINCM37[Z1] Bits */
#define IOMUX_M33C1_PINCM37_Z1_OFS               (25)                            /* !< Z1 Offset */
#define IOMUX_M33C1_PINCM37_Z1_MASK              ((uint32_t)0x02000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM37_Z1_DISABLE           ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM37_Z1_ENABLE            ((uint32_t)0x02000000U)
/* IOMUX_M33C1_PINCM37[INENA] Bits */
#define IOMUX_M33C1_PINCM37_INENA_OFS            (18)                            /* !< INENA Offset */
#define IOMUX_M33C1_PINCM37_INENA_MASK           ((uint32_t)0x00040000U)         /* !< bit */
#define IOMUX_M33C1_PINCM37_INENA_PADCORE        ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM37_INENA_CORE0          ((uint32_t)0x00040000U)
/* IOMUX_M33C1_PINCM37[PIPU] Bits */
#define IOMUX_M33C1_PINCM37_PIPU_OFS             (17)                            /* !< PIPU Offset */
#define IOMUX_M33C1_PINCM37_PIPU_MASK            ((uint32_t)0x00020000U)         /* !< bit */
#define IOMUX_M33C1_PINCM37_PIPU_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM37_PIPU_ENABLE          ((uint32_t)0x00020000U)
/* IOMUX_M33C1_PINCM37[PIPD] Bits */
#define IOMUX_M33C1_PINCM37_PIPD_OFS             (16)                            /* !< PIPD Offset */
#define IOMUX_M33C1_PINCM37_PIPD_MASK            ((uint32_t)0x00010000U)         /* !< bit */
#define IOMUX_M33C1_PINCM37_PIPD_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM37_PIPD_ENABLE          ((uint32_t)0x00010000U)
/* IOMUX_M33C1_PINCM37[PC] Bits */
#define IOMUX_M33C1_PINCM37_PC_OFS               (7)                             /* !< PC Offset */
#define IOMUX_M33C1_PINCM37_PC_MASK              ((uint32_t)0x00000080U)         /* !< bit */
#define IOMUX_M33C1_PINCM37_PC_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM37_PC_CONNECTED         ((uint32_t)0x00000080U)
/* IOMUX_M33C1_PINCM37[PF] Bits */
#define IOMUX_M33C1_PINCM37_PF_OFS               (0)                             /* !< PF Offset */
#define IOMUX_M33C1_PINCM37_PF_MASK              ((uint32_t)0x0000000FU)         /* !< bit */
#define IOMUX_M33C1_PINCM37_PF_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM37_PF_GPIO0_DIO15       ((uint32_t)0x00000001U)
#define IOMUX_M33C1_PINCM37_PF_GPTIMER16B2CCQEILP0_IDX ((uint32_t)0x00000002U)
#define IOMUX_M33C1_PINCM37_PF_GPTIMER16BADV4CC0_CCP2 ((uint32_t)0x00000003U)
#define IOMUX_M33C1_PINCM37_PF_SPGSS0_U2_SCL_RX  ((uint32_t)0x00000004U)
#define IOMUX_M33C1_PINCM37_PF_SPGSS1_U3_SCL     ((uint32_t)0x00000006U)
#define IOMUX_M33C1_PINCM37_PF_SPGSS0_U1_RTS     ((uint32_t)0x00000007U)
#define IOMUX_M33C1_PINCM37_PF_I2S0_WCLK         ((uint32_t)0x00000008U)

/* IOMUX_M33C1_PINCM38 Bits */
/* IOMUX_M33C1_PINCM38[WCOMP] Bits */
#define IOMUX_M33C1_PINCM38_WCOMP_OFS            (28)                            /* !< WCOMP Offset */
#define IOMUX_M33C1_PINCM38_WCOMP_MASK           ((uint32_t)0x10000000U)         /* !< Wakeup Compare Value bit */
#define IOMUX_M33C1_PINCM38_WCOMP_MATCH0         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM38_WCOMP_MATCH1         ((uint32_t)0x10000000U)
/* IOMUX_M33C1_PINCM38[WUEN] Bits */
#define IOMUX_M33C1_PINCM38_WUEN_OFS             (27)                            /* !< WUEN Offset */
#define IOMUX_M33C1_PINCM38_WUEN_MASK            ((uint32_t)0x08000000U)         /* !< Wakeup Enable bit */
#define IOMUX_M33C1_PINCM38_WUEN_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM38_WUEN_ENABLE          ((uint32_t)0x08000000U)
/* IOMUX_M33C1_PINCM38[INV] Bits */
#define IOMUX_M33C1_PINCM38_INV_OFS              (26)                            /* !< INV Offset */
#define IOMUX_M33C1_PINCM38_INV_MASK             ((uint32_t)0x04000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM38_INV_DISABLE          ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM38_INV_ENABLE           ((uint32_t)0x04000000U)
/* IOMUX_M33C1_PINCM38[Z1] Bits */
#define IOMUX_M33C1_PINCM38_Z1_OFS               (25)                            /* !< Z1 Offset */
#define IOMUX_M33C1_PINCM38_Z1_MASK              ((uint32_t)0x02000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM38_Z1_DISABLE           ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM38_Z1_ENABLE            ((uint32_t)0x02000000U)
/* IOMUX_M33C1_PINCM38[INENA] Bits */
#define IOMUX_M33C1_PINCM38_INENA_OFS            (18)                            /* !< INENA Offset */
#define IOMUX_M33C1_PINCM38_INENA_MASK           ((uint32_t)0x00040000U)         /* !< bit */
#define IOMUX_M33C1_PINCM38_INENA_PADCORE        ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM38_INENA_CORE0          ((uint32_t)0x00040000U)
/* IOMUX_M33C1_PINCM38[PIPU] Bits */
#define IOMUX_M33C1_PINCM38_PIPU_OFS             (17)                            /* !< PIPU Offset */
#define IOMUX_M33C1_PINCM38_PIPU_MASK            ((uint32_t)0x00020000U)         /* !< bit */
#define IOMUX_M33C1_PINCM38_PIPU_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM38_PIPU_ENABLE          ((uint32_t)0x00020000U)
/* IOMUX_M33C1_PINCM38[PIPD] Bits */
#define IOMUX_M33C1_PINCM38_PIPD_OFS             (16)                            /* !< PIPD Offset */
#define IOMUX_M33C1_PINCM38_PIPD_MASK            ((uint32_t)0x00010000U)         /* !< bit */
#define IOMUX_M33C1_PINCM38_PIPD_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM38_PIPD_ENABLE          ((uint32_t)0x00010000U)
/* IOMUX_M33C1_PINCM38[PC] Bits */
#define IOMUX_M33C1_PINCM38_PC_OFS               (7)                             /* !< PC Offset */
#define IOMUX_M33C1_PINCM38_PC_MASK              ((uint32_t)0x00000080U)         /* !< bit */
#define IOMUX_M33C1_PINCM38_PC_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM38_PC_CONNECTED         ((uint32_t)0x00000080U)
/* IOMUX_M33C1_PINCM38[PF] Bits */
#define IOMUX_M33C1_PINCM38_PF_OFS               (0)                             /* !< PF Offset */
#define IOMUX_M33C1_PINCM38_PF_MASK              ((uint32_t)0x00000007U)         /* !< bit */
#define IOMUX_M33C1_PINCM38_PF_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM38_PF_GPIO0_DIO16       ((uint32_t)0x00000001U)
#define IOMUX_M33C1_PINCM38_PF_GPTIMER16BADV4CC0_CCP2_CMPL ((uint32_t)0x00000002U)
#define IOMUX_M33C1_PINCM38_PF_SYSCTL_FCC_IN     ((uint32_t)0x00000003U)
#define IOMUX_M33C1_PINCM38_PF_SPGSS0_U2_SDA_TX  ((uint32_t)0x00000004U)
#define IOMUX_M33C1_PINCM38_PF_SPGSS1_U5_POCI_RTS ((uint32_t)0x00000005U)
#define IOMUX_M33C1_PINCM38_PF_SPGSS1_U3_SDA     ((uint32_t)0x00000006U)
#define IOMUX_M33C1_PINCM38_PF_QSPI_CS3_CD_MISO3 ((uint32_t)0x00000007U)

/* IOMUX_M33C1_PINCM39 Bits */
/* IOMUX_M33C1_PINCM39[WCOMP] Bits */
#define IOMUX_M33C1_PINCM39_WCOMP_OFS            (28)                            /* !< WCOMP Offset */
#define IOMUX_M33C1_PINCM39_WCOMP_MASK           ((uint32_t)0x10000000U)         /* !< Wakeup Compare Value bit */
#define IOMUX_M33C1_PINCM39_WCOMP_MATCH0         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM39_WCOMP_MATCH1         ((uint32_t)0x10000000U)
/* IOMUX_M33C1_PINCM39[WUEN] Bits */
#define IOMUX_M33C1_PINCM39_WUEN_OFS             (27)                            /* !< WUEN Offset */
#define IOMUX_M33C1_PINCM39_WUEN_MASK            ((uint32_t)0x08000000U)         /* !< Wakeup Enable bit */
#define IOMUX_M33C1_PINCM39_WUEN_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM39_WUEN_ENABLE          ((uint32_t)0x08000000U)
/* IOMUX_M33C1_PINCM39[INV] Bits */
#define IOMUX_M33C1_PINCM39_INV_OFS              (26)                            /* !< INV Offset */
#define IOMUX_M33C1_PINCM39_INV_MASK             ((uint32_t)0x04000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM39_INV_DISABLE          ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM39_INV_ENABLE           ((uint32_t)0x04000000U)
/* IOMUX_M33C1_PINCM39[Z1] Bits */
#define IOMUX_M33C1_PINCM39_Z1_OFS               (25)                            /* !< Z1 Offset */
#define IOMUX_M33C1_PINCM39_Z1_MASK              ((uint32_t)0x02000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM39_Z1_DISABLE           ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM39_Z1_ENABLE            ((uint32_t)0x02000000U)
/* IOMUX_M33C1_PINCM39[INENA] Bits */
#define IOMUX_M33C1_PINCM39_INENA_OFS            (18)                            /* !< INENA Offset */
#define IOMUX_M33C1_PINCM39_INENA_MASK           ((uint32_t)0x00040000U)         /* !< bit */
#define IOMUX_M33C1_PINCM39_INENA_PADCORE        ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM39_INENA_CORE0          ((uint32_t)0x00040000U)
/* IOMUX_M33C1_PINCM39[PIPU] Bits */
#define IOMUX_M33C1_PINCM39_PIPU_OFS             (17)                            /* !< PIPU Offset */
#define IOMUX_M33C1_PINCM39_PIPU_MASK            ((uint32_t)0x00020000U)         /* !< bit */
#define IOMUX_M33C1_PINCM39_PIPU_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM39_PIPU_ENABLE          ((uint32_t)0x00020000U)
/* IOMUX_M33C1_PINCM39[PIPD] Bits */
#define IOMUX_M33C1_PINCM39_PIPD_OFS             (16)                            /* !< PIPD Offset */
#define IOMUX_M33C1_PINCM39_PIPD_MASK            ((uint32_t)0x00010000U)         /* !< bit */
#define IOMUX_M33C1_PINCM39_PIPD_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM39_PIPD_ENABLE          ((uint32_t)0x00010000U)
/* IOMUX_M33C1_PINCM39[WAKESTATE] Bits */
#define IOMUX_M33C1_PINCM39_WAKESTATE_OFS        (13)                            /* !< WAKESTATE Offset */
#define IOMUX_M33C1_PINCM39_WAKESTATE_MASK       ((uint32_t)0x00002000U)         /* !< bit */
/* IOMUX_M33C1_PINCM39[PC] Bits */
#define IOMUX_M33C1_PINCM39_PC_OFS               (7)                             /* !< PC Offset */
#define IOMUX_M33C1_PINCM39_PC_MASK              ((uint32_t)0x00000080U)         /* !< bit */
#define IOMUX_M33C1_PINCM39_PC_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM39_PC_CONNECTED         ((uint32_t)0x00000080U)
/* IOMUX_M33C1_PINCM39[PF] Bits */
#define IOMUX_M33C1_PINCM39_PF_OFS               (0)                             /* !< PF Offset */
#define IOMUX_M33C1_PINCM39_PF_MASK              ((uint32_t)0x00000007U)         /* !< bit */
#define IOMUX_M33C1_PINCM39_PF_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM39_PF_GPIO0_DIO17       ((uint32_t)0x00000001U)
#define IOMUX_M33C1_PINCM39_PF_GPTIMER16B2CCLP3_CCP0 ((uint32_t)0x00000002U)
#define IOMUX_M33C1_PINCM39_PF_GPTIMER16BADV4CC0_CCP3 ((uint32_t)0x00000003U)
#define IOMUX_M33C1_PINCM39_PF_SPGSS0_U2_SDA_TX  ((uint32_t)0x00000004U)
#define IOMUX_M33C1_PINCM39_PF_SPGSS1_U5_SCLK_SCL_RX ((uint32_t)0x00000005U)

/* IOMUX_M33C1_PINCM40 Bits */
/* IOMUX_M33C1_PINCM40[WCOMP] Bits */
#define IOMUX_M33C1_PINCM40_WCOMP_OFS            (28)                            /* !< WCOMP Offset */
#define IOMUX_M33C1_PINCM40_WCOMP_MASK           ((uint32_t)0x10000000U)         /* !< Wakeup Compare Value bit */
#define IOMUX_M33C1_PINCM40_WCOMP_MATCH0         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM40_WCOMP_MATCH1         ((uint32_t)0x10000000U)
/* IOMUX_M33C1_PINCM40[WUEN] Bits */
#define IOMUX_M33C1_PINCM40_WUEN_OFS             (27)                            /* !< WUEN Offset */
#define IOMUX_M33C1_PINCM40_WUEN_MASK            ((uint32_t)0x08000000U)         /* !< Wakeup Enable bit */
#define IOMUX_M33C1_PINCM40_WUEN_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM40_WUEN_ENABLE          ((uint32_t)0x08000000U)
/* IOMUX_M33C1_PINCM40[INV] Bits */
#define IOMUX_M33C1_PINCM40_INV_OFS              (26)                            /* !< INV Offset */
#define IOMUX_M33C1_PINCM40_INV_MASK             ((uint32_t)0x04000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM40_INV_DISABLE          ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM40_INV_ENABLE           ((uint32_t)0x04000000U)
/* IOMUX_M33C1_PINCM40[Z1] Bits */
#define IOMUX_M33C1_PINCM40_Z1_OFS               (25)                            /* !< Z1 Offset */
#define IOMUX_M33C1_PINCM40_Z1_MASK              ((uint32_t)0x02000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM40_Z1_DISABLE           ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM40_Z1_ENABLE            ((uint32_t)0x02000000U)
/* IOMUX_M33C1_PINCM40[INENA] Bits */
#define IOMUX_M33C1_PINCM40_INENA_OFS            (18)                            /* !< INENA Offset */
#define IOMUX_M33C1_PINCM40_INENA_MASK           ((uint32_t)0x00040000U)         /* !< bit */
#define IOMUX_M33C1_PINCM40_INENA_PADCORE        ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM40_INENA_CORE0          ((uint32_t)0x00040000U)
/* IOMUX_M33C1_PINCM40[PIPU] Bits */
#define IOMUX_M33C1_PINCM40_PIPU_OFS             (17)                            /* !< PIPU Offset */
#define IOMUX_M33C1_PINCM40_PIPU_MASK            ((uint32_t)0x00020000U)         /* !< bit */
#define IOMUX_M33C1_PINCM40_PIPU_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM40_PIPU_ENABLE          ((uint32_t)0x00020000U)
/* IOMUX_M33C1_PINCM40[PIPD] Bits */
#define IOMUX_M33C1_PINCM40_PIPD_OFS             (16)                            /* !< PIPD Offset */
#define IOMUX_M33C1_PINCM40_PIPD_MASK            ((uint32_t)0x00010000U)         /* !< bit */
#define IOMUX_M33C1_PINCM40_PIPD_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM40_PIPD_ENABLE          ((uint32_t)0x00010000U)
/* IOMUX_M33C1_PINCM40[WAKESTATE] Bits */
#define IOMUX_M33C1_PINCM40_WAKESTATE_OFS        (13)                            /* !< WAKESTATE Offset */
#define IOMUX_M33C1_PINCM40_WAKESTATE_MASK       ((uint32_t)0x00002000U)         /* !< bit */
/* IOMUX_M33C1_PINCM40[PC] Bits */
#define IOMUX_M33C1_PINCM40_PC_OFS               (7)                             /* !< PC Offset */
#define IOMUX_M33C1_PINCM40_PC_MASK              ((uint32_t)0x00000080U)         /* !< bit */
#define IOMUX_M33C1_PINCM40_PC_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM40_PC_CONNECTED         ((uint32_t)0x00000080U)
/* IOMUX_M33C1_PINCM40[PF] Bits */
#define IOMUX_M33C1_PINCM40_PF_OFS               (0)                             /* !< PF Offset */
#define IOMUX_M33C1_PINCM40_PF_MASK              ((uint32_t)0x00000007U)         /* !< bit */
#define IOMUX_M33C1_PINCM40_PF_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM40_PF_GPIO0_DIO18       ((uint32_t)0x00000001U)
#define IOMUX_M33C1_PINCM40_PF_GPTIMER16BADV4CC0_CCP3_CMPL ((uint32_t)0x00000002U)
#define IOMUX_M33C1_PINCM40_PF_I2S0_WCLK         ((uint32_t)0x00000003U)
#define IOMUX_M33C1_PINCM40_PF_SPGSS0_U2_SCL_RX  ((uint32_t)0x00000004U)
#define IOMUX_M33C1_PINCM40_PF_SPGSS1_U5_PICO_SDA_TX ((uint32_t)0x00000005U)
#define IOMUX_M33C1_PINCM40_PF_SPGSS2_U0_CS0_CTS ((uint32_t)0x00000006U)
#define IOMUX_M33C1_PINCM40_PF_QSPI_CS1_MISO1    ((uint32_t)0x00000007U)

/* IOMUX_M33C1_PINCM41 Bits */
/* IOMUX_M33C1_PINCM41[WCOMP] Bits */
#define IOMUX_M33C1_PINCM41_WCOMP_OFS            (28)                            /* !< WCOMP Offset */
#define IOMUX_M33C1_PINCM41_WCOMP_MASK           ((uint32_t)0x10000000U)         /* !< Wakeup Compare Value bit */
#define IOMUX_M33C1_PINCM41_WCOMP_MATCH0         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM41_WCOMP_MATCH1         ((uint32_t)0x10000000U)
/* IOMUX_M33C1_PINCM41[WUEN] Bits */
#define IOMUX_M33C1_PINCM41_WUEN_OFS             (27)                            /* !< WUEN Offset */
#define IOMUX_M33C1_PINCM41_WUEN_MASK            ((uint32_t)0x08000000U)         /* !< Wakeup Enable bit */
#define IOMUX_M33C1_PINCM41_WUEN_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM41_WUEN_ENABLE          ((uint32_t)0x08000000U)
/* IOMUX_M33C1_PINCM41[INV] Bits */
#define IOMUX_M33C1_PINCM41_INV_OFS              (26)                            /* !< INV Offset */
#define IOMUX_M33C1_PINCM41_INV_MASK             ((uint32_t)0x04000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM41_INV_DISABLE          ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM41_INV_ENABLE           ((uint32_t)0x04000000U)
/* IOMUX_M33C1_PINCM41[Z1] Bits */
#define IOMUX_M33C1_PINCM41_Z1_OFS               (25)                            /* !< Z1 Offset */
#define IOMUX_M33C1_PINCM41_Z1_MASK              ((uint32_t)0x02000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM41_Z1_DISABLE           ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM41_Z1_ENABLE            ((uint32_t)0x02000000U)
/* IOMUX_M33C1_PINCM41[INENA] Bits */
#define IOMUX_M33C1_PINCM41_INENA_OFS            (18)                            /* !< INENA Offset */
#define IOMUX_M33C1_PINCM41_INENA_MASK           ((uint32_t)0x00040000U)         /* !< bit */
#define IOMUX_M33C1_PINCM41_INENA_PADCORE        ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM41_INENA_CORE0          ((uint32_t)0x00040000U)
/* IOMUX_M33C1_PINCM41[PIPU] Bits */
#define IOMUX_M33C1_PINCM41_PIPU_OFS             (17)                            /* !< PIPU Offset */
#define IOMUX_M33C1_PINCM41_PIPU_MASK            ((uint32_t)0x00020000U)         /* !< bit */
#define IOMUX_M33C1_PINCM41_PIPU_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM41_PIPU_ENABLE          ((uint32_t)0x00020000U)
/* IOMUX_M33C1_PINCM41[PIPD] Bits */
#define IOMUX_M33C1_PINCM41_PIPD_OFS             (16)                            /* !< PIPD Offset */
#define IOMUX_M33C1_PINCM41_PIPD_MASK            ((uint32_t)0x00010000U)         /* !< bit */
#define IOMUX_M33C1_PINCM41_PIPD_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM41_PIPD_ENABLE          ((uint32_t)0x00010000U)
/* IOMUX_M33C1_PINCM41[PC] Bits */
#define IOMUX_M33C1_PINCM41_PC_OFS               (7)                             /* !< PC Offset */
#define IOMUX_M33C1_PINCM41_PC_MASK              ((uint32_t)0x00000080U)         /* !< bit */
#define IOMUX_M33C1_PINCM41_PC_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM41_PC_CONNECTED         ((uint32_t)0x00000080U)
/* IOMUX_M33C1_PINCM41[PF] Bits */
#define IOMUX_M33C1_PINCM41_PF_OFS               (0)                             /* !< PF Offset */
#define IOMUX_M33C1_PINCM41_PF_MASK              ((uint32_t)0x00000007U)         /* !< bit */
#define IOMUX_M33C1_PINCM41_PF_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM41_PF_GPIO0_DIO19       ((uint32_t)0x00000001U)
#define IOMUX_M33C1_PINCM41_PF_DEBUGSS_SWDIO     ((uint32_t)0x00000002U)
#define IOMUX_M33C1_PINCM41_PF_SPGSS1_U2_SDA     ((uint32_t)0x00000003U)
#define IOMUX_M33C1_PINCM41_PF_SPGSS1_U4_TX      ((uint32_t)0x00000004U)

/* IOMUX_M33C1_PINCM42 Bits */
/* IOMUX_M33C1_PINCM42[WCOMP] Bits */
#define IOMUX_M33C1_PINCM42_WCOMP_OFS            (28)                            /* !< WCOMP Offset */
#define IOMUX_M33C1_PINCM42_WCOMP_MASK           ((uint32_t)0x10000000U)         /* !< Wakeup Compare Value bit */
#define IOMUX_M33C1_PINCM42_WCOMP_MATCH0         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM42_WCOMP_MATCH1         ((uint32_t)0x10000000U)
/* IOMUX_M33C1_PINCM42[WUEN] Bits */
#define IOMUX_M33C1_PINCM42_WUEN_OFS             (27)                            /* !< WUEN Offset */
#define IOMUX_M33C1_PINCM42_WUEN_MASK            ((uint32_t)0x08000000U)         /* !< Wakeup Enable bit */
#define IOMUX_M33C1_PINCM42_WUEN_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM42_WUEN_ENABLE          ((uint32_t)0x08000000U)
/* IOMUX_M33C1_PINCM42[INV] Bits */
#define IOMUX_M33C1_PINCM42_INV_OFS              (26)                            /* !< INV Offset */
#define IOMUX_M33C1_PINCM42_INV_MASK             ((uint32_t)0x04000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM42_INV_DISABLE          ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM42_INV_ENABLE           ((uint32_t)0x04000000U)
/* IOMUX_M33C1_PINCM42[Z1] Bits */
#define IOMUX_M33C1_PINCM42_Z1_OFS               (25)                            /* !< Z1 Offset */
#define IOMUX_M33C1_PINCM42_Z1_MASK              ((uint32_t)0x02000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM42_Z1_DISABLE           ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM42_Z1_ENABLE            ((uint32_t)0x02000000U)
/* IOMUX_M33C1_PINCM42[INENA] Bits */
#define IOMUX_M33C1_PINCM42_INENA_OFS            (18)                            /* !< INENA Offset */
#define IOMUX_M33C1_PINCM42_INENA_MASK           ((uint32_t)0x00040000U)         /* !< bit */
#define IOMUX_M33C1_PINCM42_INENA_PADCORE        ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM42_INENA_CORE0          ((uint32_t)0x00040000U)
/* IOMUX_M33C1_PINCM42[PIPU] Bits */
#define IOMUX_M33C1_PINCM42_PIPU_OFS             (17)                            /* !< PIPU Offset */
#define IOMUX_M33C1_PINCM42_PIPU_MASK            ((uint32_t)0x00020000U)         /* !< bit */
#define IOMUX_M33C1_PINCM42_PIPU_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM42_PIPU_ENABLE          ((uint32_t)0x00020000U)
/* IOMUX_M33C1_PINCM42[PIPD] Bits */
#define IOMUX_M33C1_PINCM42_PIPD_OFS             (16)                            /* !< PIPD Offset */
#define IOMUX_M33C1_PINCM42_PIPD_MASK            ((uint32_t)0x00010000U)         /* !< bit */
#define IOMUX_M33C1_PINCM42_PIPD_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM42_PIPD_ENABLE          ((uint32_t)0x00010000U)
/* IOMUX_M33C1_PINCM42[PC] Bits */
#define IOMUX_M33C1_PINCM42_PC_OFS               (7)                             /* !< PC Offset */
#define IOMUX_M33C1_PINCM42_PC_MASK              ((uint32_t)0x00000080U)         /* !< bit */
#define IOMUX_M33C1_PINCM42_PC_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM42_PC_CONNECTED         ((uint32_t)0x00000080U)
/* IOMUX_M33C1_PINCM42[PF] Bits */
#define IOMUX_M33C1_PINCM42_PF_OFS               (0)                             /* !< PF Offset */
#define IOMUX_M33C1_PINCM42_PF_MASK              ((uint32_t)0x00000007U)         /* !< bit */
#define IOMUX_M33C1_PINCM42_PF_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM42_PF_GPIO0_DIO20       ((uint32_t)0x00000001U)
#define IOMUX_M33C1_PINCM42_PF_DEBUGSS_SWCLK     ((uint32_t)0x00000002U)
#define IOMUX_M33C1_PINCM42_PF_SPGSS1_U2_SCL     ((uint32_t)0x00000003U)
#define IOMUX_M33C1_PINCM42_PF_SPGSS1_U4_RX      ((uint32_t)0x00000004U)

/* IOMUX_M33C1_PINCM43 Bits */
/* IOMUX_M33C1_PINCM43[WCOMP] Bits */
#define IOMUX_M33C1_PINCM43_WCOMP_OFS            (28)                            /* !< WCOMP Offset */
#define IOMUX_M33C1_PINCM43_WCOMP_MASK           ((uint32_t)0x10000000U)         /* !< Wakeup Compare Value bit */
#define IOMUX_M33C1_PINCM43_WCOMP_MATCH0         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM43_WCOMP_MATCH1         ((uint32_t)0x10000000U)
/* IOMUX_M33C1_PINCM43[WUEN] Bits */
#define IOMUX_M33C1_PINCM43_WUEN_OFS             (27)                            /* !< WUEN Offset */
#define IOMUX_M33C1_PINCM43_WUEN_MASK            ((uint32_t)0x08000000U)         /* !< Wakeup Enable bit */
#define IOMUX_M33C1_PINCM43_WUEN_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM43_WUEN_ENABLE          ((uint32_t)0x08000000U)
/* IOMUX_M33C1_PINCM43[INV] Bits */
#define IOMUX_M33C1_PINCM43_INV_OFS              (26)                            /* !< INV Offset */
#define IOMUX_M33C1_PINCM43_INV_MASK             ((uint32_t)0x04000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM43_INV_DISABLE          ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM43_INV_ENABLE           ((uint32_t)0x04000000U)
/* IOMUX_M33C1_PINCM43[Z1] Bits */
#define IOMUX_M33C1_PINCM43_Z1_OFS               (25)                            /* !< Z1 Offset */
#define IOMUX_M33C1_PINCM43_Z1_MASK              ((uint32_t)0x02000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM43_Z1_DISABLE           ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM43_Z1_ENABLE            ((uint32_t)0x02000000U)
/* IOMUX_M33C1_PINCM43[INENA] Bits */
#define IOMUX_M33C1_PINCM43_INENA_OFS            (18)                            /* !< INENA Offset */
#define IOMUX_M33C1_PINCM43_INENA_MASK           ((uint32_t)0x00040000U)         /* !< bit */
#define IOMUX_M33C1_PINCM43_INENA_PADCORE        ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM43_INENA_CORE0          ((uint32_t)0x00040000U)
/* IOMUX_M33C1_PINCM43[PIPU] Bits */
#define IOMUX_M33C1_PINCM43_PIPU_OFS             (17)                            /* !< PIPU Offset */
#define IOMUX_M33C1_PINCM43_PIPU_MASK            ((uint32_t)0x00020000U)         /* !< bit */
#define IOMUX_M33C1_PINCM43_PIPU_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM43_PIPU_ENABLE          ((uint32_t)0x00020000U)
/* IOMUX_M33C1_PINCM43[PIPD] Bits */
#define IOMUX_M33C1_PINCM43_PIPD_OFS             (16)                            /* !< PIPD Offset */
#define IOMUX_M33C1_PINCM43_PIPD_MASK            ((uint32_t)0x00010000U)         /* !< bit */
#define IOMUX_M33C1_PINCM43_PIPD_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM43_PIPD_ENABLE          ((uint32_t)0x00010000U)
/* IOMUX_M33C1_PINCM43[PC] Bits */
#define IOMUX_M33C1_PINCM43_PC_OFS               (7)                             /* !< PC Offset */
#define IOMUX_M33C1_PINCM43_PC_MASK              ((uint32_t)0x00000080U)         /* !< bit */
#define IOMUX_M33C1_PINCM43_PC_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM43_PC_CONNECTED         ((uint32_t)0x00000080U)
/* IOMUX_M33C1_PINCM43[PF] Bits */
#define IOMUX_M33C1_PINCM43_PF_OFS               (0)                             /* !< PF Offset */
#define IOMUX_M33C1_PINCM43_PF_MASK              ((uint32_t)0x00000007U)         /* !< bit */
#define IOMUX_M33C1_PINCM43_PF_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM43_PF_GPIO1_DIO17       ((uint32_t)0x00000001U)
#define IOMUX_M33C1_PINCM43_PF_GPTIMER16BADV4CC0_CCP2 ((uint32_t)0x00000002U)
#define IOMUX_M33C1_PINCM43_PF_SPGSS2_U0_PICO_SDA_TX ((uint32_t)0x00000003U)
#define IOMUX_M33C1_PINCM43_PF_SPGSS1_U0_PICO    ((uint32_t)0x00000004U)

/* IOMUX_M33C1_PINCM44 Bits */
/* IOMUX_M33C1_PINCM44[WCOMP] Bits */
#define IOMUX_M33C1_PINCM44_WCOMP_OFS            (28)                            /* !< WCOMP Offset */
#define IOMUX_M33C1_PINCM44_WCOMP_MASK           ((uint32_t)0x10000000U)         /* !< Wakeup Compare Value bit */
#define IOMUX_M33C1_PINCM44_WCOMP_MATCH0         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM44_WCOMP_MATCH1         ((uint32_t)0x10000000U)
/* IOMUX_M33C1_PINCM44[WUEN] Bits */
#define IOMUX_M33C1_PINCM44_WUEN_OFS             (27)                            /* !< WUEN Offset */
#define IOMUX_M33C1_PINCM44_WUEN_MASK            ((uint32_t)0x08000000U)         /* !< Wakeup Enable bit */
#define IOMUX_M33C1_PINCM44_WUEN_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM44_WUEN_ENABLE          ((uint32_t)0x08000000U)
/* IOMUX_M33C1_PINCM44[INV] Bits */
#define IOMUX_M33C1_PINCM44_INV_OFS              (26)                            /* !< INV Offset */
#define IOMUX_M33C1_PINCM44_INV_MASK             ((uint32_t)0x04000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM44_INV_DISABLE          ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM44_INV_ENABLE           ((uint32_t)0x04000000U)
/* IOMUX_M33C1_PINCM44[Z1] Bits */
#define IOMUX_M33C1_PINCM44_Z1_OFS               (25)                            /* !< Z1 Offset */
#define IOMUX_M33C1_PINCM44_Z1_MASK              ((uint32_t)0x02000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM44_Z1_DISABLE           ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM44_Z1_ENABLE            ((uint32_t)0x02000000U)
/* IOMUX_M33C1_PINCM44[INENA] Bits */
#define IOMUX_M33C1_PINCM44_INENA_OFS            (18)                            /* !< INENA Offset */
#define IOMUX_M33C1_PINCM44_INENA_MASK           ((uint32_t)0x00040000U)         /* !< bit */
#define IOMUX_M33C1_PINCM44_INENA_PADCORE        ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM44_INENA_CORE0          ((uint32_t)0x00040000U)
/* IOMUX_M33C1_PINCM44[PIPU] Bits */
#define IOMUX_M33C1_PINCM44_PIPU_OFS             (17)                            /* !< PIPU Offset */
#define IOMUX_M33C1_PINCM44_PIPU_MASK            ((uint32_t)0x00020000U)         /* !< bit */
#define IOMUX_M33C1_PINCM44_PIPU_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM44_PIPU_ENABLE          ((uint32_t)0x00020000U)
/* IOMUX_M33C1_PINCM44[PIPD] Bits */
#define IOMUX_M33C1_PINCM44_PIPD_OFS             (16)                            /* !< PIPD Offset */
#define IOMUX_M33C1_PINCM44_PIPD_MASK            ((uint32_t)0x00010000U)         /* !< bit */
#define IOMUX_M33C1_PINCM44_PIPD_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM44_PIPD_ENABLE          ((uint32_t)0x00010000U)
/* IOMUX_M33C1_PINCM44[PC] Bits */
#define IOMUX_M33C1_PINCM44_PC_OFS               (7)                             /* !< PC Offset */
#define IOMUX_M33C1_PINCM44_PC_MASK              ((uint32_t)0x00000080U)         /* !< bit */
#define IOMUX_M33C1_PINCM44_PC_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM44_PC_CONNECTED         ((uint32_t)0x00000080U)
/* IOMUX_M33C1_PINCM44[PF] Bits */
#define IOMUX_M33C1_PINCM44_PF_OFS               (0)                             /* !< PF Offset */
#define IOMUX_M33C1_PINCM44_PF_MASK              ((uint32_t)0x00000007U)         /* !< bit */
#define IOMUX_M33C1_PINCM44_PF_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM44_PF_GPIO1_DIO18       ((uint32_t)0x00000001U)
#define IOMUX_M33C1_PINCM44_PF_GPTIMER16BADV4CC0_CCP2_CMPL ((uint32_t)0x00000002U)
#define IOMUX_M33C1_PINCM44_PF_SPGSS2_U0_SCLK_SCL_RX ((uint32_t)0x00000003U)
#define IOMUX_M33C1_PINCM44_PF_SPGSS1_U0_SCLK    ((uint32_t)0x00000004U)

/* IOMUX_M33C1_PINCM45 Bits */
/* IOMUX_M33C1_PINCM45[WCOMP] Bits */
#define IOMUX_M33C1_PINCM45_WCOMP_OFS            (28)                            /* !< WCOMP Offset */
#define IOMUX_M33C1_PINCM45_WCOMP_MASK           ((uint32_t)0x10000000U)         /* !< Wakeup Compare Value bit */
#define IOMUX_M33C1_PINCM45_WCOMP_MATCH0         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM45_WCOMP_MATCH1         ((uint32_t)0x10000000U)
/* IOMUX_M33C1_PINCM45[WUEN] Bits */
#define IOMUX_M33C1_PINCM45_WUEN_OFS             (27)                            /* !< WUEN Offset */
#define IOMUX_M33C1_PINCM45_WUEN_MASK            ((uint32_t)0x08000000U)         /* !< Wakeup Enable bit */
#define IOMUX_M33C1_PINCM45_WUEN_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM45_WUEN_ENABLE          ((uint32_t)0x08000000U)
/* IOMUX_M33C1_PINCM45[INV] Bits */
#define IOMUX_M33C1_PINCM45_INV_OFS              (26)                            /* !< INV Offset */
#define IOMUX_M33C1_PINCM45_INV_MASK             ((uint32_t)0x04000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM45_INV_DISABLE          ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM45_INV_ENABLE           ((uint32_t)0x04000000U)
/* IOMUX_M33C1_PINCM45[Z1] Bits */
#define IOMUX_M33C1_PINCM45_Z1_OFS               (25)                            /* !< Z1 Offset */
#define IOMUX_M33C1_PINCM45_Z1_MASK              ((uint32_t)0x02000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM45_Z1_DISABLE           ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM45_Z1_ENABLE            ((uint32_t)0x02000000U)
/* IOMUX_M33C1_PINCM45[INENA] Bits */
#define IOMUX_M33C1_PINCM45_INENA_OFS            (18)                            /* !< INENA Offset */
#define IOMUX_M33C1_PINCM45_INENA_MASK           ((uint32_t)0x00040000U)         /* !< bit */
#define IOMUX_M33C1_PINCM45_INENA_PADCORE        ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM45_INENA_CORE0          ((uint32_t)0x00040000U)
/* IOMUX_M33C1_PINCM45[PIPU] Bits */
#define IOMUX_M33C1_PINCM45_PIPU_OFS             (17)                            /* !< PIPU Offset */
#define IOMUX_M33C1_PINCM45_PIPU_MASK            ((uint32_t)0x00020000U)         /* !< bit */
#define IOMUX_M33C1_PINCM45_PIPU_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM45_PIPU_ENABLE          ((uint32_t)0x00020000U)
/* IOMUX_M33C1_PINCM45[PIPD] Bits */
#define IOMUX_M33C1_PINCM45_PIPD_OFS             (16)                            /* !< PIPD Offset */
#define IOMUX_M33C1_PINCM45_PIPD_MASK            ((uint32_t)0x00010000U)         /* !< bit */
#define IOMUX_M33C1_PINCM45_PIPD_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM45_PIPD_ENABLE          ((uint32_t)0x00010000U)
/* IOMUX_M33C1_PINCM45[PC] Bits */
#define IOMUX_M33C1_PINCM45_PC_OFS               (7)                             /* !< PC Offset */
#define IOMUX_M33C1_PINCM45_PC_MASK              ((uint32_t)0x00000080U)         /* !< bit */
#define IOMUX_M33C1_PINCM45_PC_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM45_PC_CONNECTED         ((uint32_t)0x00000080U)
/* IOMUX_M33C1_PINCM45[PF] Bits */
#define IOMUX_M33C1_PINCM45_PF_OFS               (0)                             /* !< PF Offset */
#define IOMUX_M33C1_PINCM45_PF_MASK              ((uint32_t)0x00000007U)         /* !< bit */
#define IOMUX_M33C1_PINCM45_PF_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM45_PF_GPIO1_DIO19       ((uint32_t)0x00000001U)
#define IOMUX_M33C1_PINCM45_PF_GPTIMER16B2CCLP3_CCP1 ((uint32_t)0x00000002U)
#define IOMUX_M33C1_PINCM45_PF_GPTIMER16BADV4CC1_CCP2 ((uint32_t)0x00000003U)
#define IOMUX_M33C1_PINCM45_PF_SPGSS1_U0_POCI    ((uint32_t)0x00000004U)
#define IOMUX_M33C1_PINCM45_PF_SPGSS0_U1_CTS     ((uint32_t)0x00000005U)

/* IOMUX_M33C1_PINCM46 Bits */
/* IOMUX_M33C1_PINCM46[WCOMP] Bits */
#define IOMUX_M33C1_PINCM46_WCOMP_OFS            (28)                            /* !< WCOMP Offset */
#define IOMUX_M33C1_PINCM46_WCOMP_MASK           ((uint32_t)0x10000000U)         /* !< Wakeup Compare Value bit */
#define IOMUX_M33C1_PINCM46_WCOMP_MATCH0         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM46_WCOMP_MATCH1         ((uint32_t)0x10000000U)
/* IOMUX_M33C1_PINCM46[WUEN] Bits */
#define IOMUX_M33C1_PINCM46_WUEN_OFS             (27)                            /* !< WUEN Offset */
#define IOMUX_M33C1_PINCM46_WUEN_MASK            ((uint32_t)0x08000000U)         /* !< Wakeup Enable bit */
#define IOMUX_M33C1_PINCM46_WUEN_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM46_WUEN_ENABLE          ((uint32_t)0x08000000U)
/* IOMUX_M33C1_PINCM46[INV] Bits */
#define IOMUX_M33C1_PINCM46_INV_OFS              (26)                            /* !< INV Offset */
#define IOMUX_M33C1_PINCM46_INV_MASK             ((uint32_t)0x04000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM46_INV_DISABLE          ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM46_INV_ENABLE           ((uint32_t)0x04000000U)
/* IOMUX_M33C1_PINCM46[Z1] Bits */
#define IOMUX_M33C1_PINCM46_Z1_OFS               (25)                            /* !< Z1 Offset */
#define IOMUX_M33C1_PINCM46_Z1_MASK              ((uint32_t)0x02000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM46_Z1_DISABLE           ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM46_Z1_ENABLE            ((uint32_t)0x02000000U)
/* IOMUX_M33C1_PINCM46[INENA] Bits */
#define IOMUX_M33C1_PINCM46_INENA_OFS            (18)                            /* !< INENA Offset */
#define IOMUX_M33C1_PINCM46_INENA_MASK           ((uint32_t)0x00040000U)         /* !< bit */
#define IOMUX_M33C1_PINCM46_INENA_PADCORE        ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM46_INENA_CORE0          ((uint32_t)0x00040000U)
/* IOMUX_M33C1_PINCM46[PIPU] Bits */
#define IOMUX_M33C1_PINCM46_PIPU_OFS             (17)                            /* !< PIPU Offset */
#define IOMUX_M33C1_PINCM46_PIPU_MASK            ((uint32_t)0x00020000U)         /* !< bit */
#define IOMUX_M33C1_PINCM46_PIPU_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM46_PIPU_ENABLE          ((uint32_t)0x00020000U)
/* IOMUX_M33C1_PINCM46[PIPD] Bits */
#define IOMUX_M33C1_PINCM46_PIPD_OFS             (16)                            /* !< PIPD Offset */
#define IOMUX_M33C1_PINCM46_PIPD_MASK            ((uint32_t)0x00010000U)         /* !< bit */
#define IOMUX_M33C1_PINCM46_PIPD_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM46_PIPD_ENABLE          ((uint32_t)0x00010000U)
/* IOMUX_M33C1_PINCM46[PC] Bits */
#define IOMUX_M33C1_PINCM46_PC_OFS               (7)                             /* !< PC Offset */
#define IOMUX_M33C1_PINCM46_PC_MASK              ((uint32_t)0x00000080U)         /* !< bit */
#define IOMUX_M33C1_PINCM46_PC_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM46_PC_CONNECTED         ((uint32_t)0x00000080U)
/* IOMUX_M33C1_PINCM46[PF] Bits */
#define IOMUX_M33C1_PINCM46_PF_OFS               (0)                             /* !< PF Offset */
#define IOMUX_M33C1_PINCM46_PF_MASK              ((uint32_t)0x00000007U)         /* !< bit */
#define IOMUX_M33C1_PINCM46_PF_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM46_PF_GPIO0_DIO21       ((uint32_t)0x00000001U)
#define IOMUX_M33C1_PINCM46_PF_GPTIMER16B2CCLP2_CCP0 ((uint32_t)0x00000002U)
#define IOMUX_M33C1_PINCM46_PF_GPTIMER16BADV4CC0_CCP0 ((uint32_t)0x00000003U)
#define IOMUX_M33C1_PINCM46_PF_I2S0_AD0          ((uint32_t)0x00000004U)
#define IOMUX_M33C1_PINCM46_PF_SPGSS0_U2_CTS     ((uint32_t)0x00000005U)
#define IOMUX_M33C1_PINCM46_PF_SPGSS2_U0_PICO_SDA_TX ((uint32_t)0x00000006U)
#define IOMUX_M33C1_PINCM46_PF_SPGSS2_U1_CS0_CTS ((uint32_t)0x00000007U)

/* IOMUX_M33C1_PINCM47 Bits */
/* IOMUX_M33C1_PINCM47[WCOMP] Bits */
#define IOMUX_M33C1_PINCM47_WCOMP_OFS            (28)                            /* !< WCOMP Offset */
#define IOMUX_M33C1_PINCM47_WCOMP_MASK           ((uint32_t)0x10000000U)         /* !< Wakeup Compare Value bit */
#define IOMUX_M33C1_PINCM47_WCOMP_MATCH0         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM47_WCOMP_MATCH1         ((uint32_t)0x10000000U)
/* IOMUX_M33C1_PINCM47[WUEN] Bits */
#define IOMUX_M33C1_PINCM47_WUEN_OFS             (27)                            /* !< WUEN Offset */
#define IOMUX_M33C1_PINCM47_WUEN_MASK            ((uint32_t)0x08000000U)         /* !< Wakeup Enable bit */
#define IOMUX_M33C1_PINCM47_WUEN_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM47_WUEN_ENABLE          ((uint32_t)0x08000000U)
/* IOMUX_M33C1_PINCM47[INV] Bits */
#define IOMUX_M33C1_PINCM47_INV_OFS              (26)                            /* !< INV Offset */
#define IOMUX_M33C1_PINCM47_INV_MASK             ((uint32_t)0x04000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM47_INV_DISABLE          ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM47_INV_ENABLE           ((uint32_t)0x04000000U)
/* IOMUX_M33C1_PINCM47[Z1] Bits */
#define IOMUX_M33C1_PINCM47_Z1_OFS               (25)                            /* !< Z1 Offset */
#define IOMUX_M33C1_PINCM47_Z1_MASK              ((uint32_t)0x02000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM47_Z1_DISABLE           ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM47_Z1_ENABLE            ((uint32_t)0x02000000U)
/* IOMUX_M33C1_PINCM47[DRV] Bits */
#define IOMUX_M33C1_PINCM47_DRV_OFS              (20)                            /* !< DRV Offset */
#define IOMUX_M33C1_PINCM47_DRV_MASK             ((uint32_t)0x00100000U)         /* !< bit */
#define IOMUX_M33C1_PINCM47_DRV_DRIVEVALUE0      ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM47_DRV_DRIVEVALUE1      ((uint32_t)0x00100000U)
/* IOMUX_M33C1_PINCM47[INENA] Bits */
#define IOMUX_M33C1_PINCM47_INENA_OFS            (18)                            /* !< INENA Offset */
#define IOMUX_M33C1_PINCM47_INENA_MASK           ((uint32_t)0x00040000U)         /* !< bit */
#define IOMUX_M33C1_PINCM47_INENA_PADCORE        ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM47_INENA_CORE0          ((uint32_t)0x00040000U)
/* IOMUX_M33C1_PINCM47[PIPU] Bits */
#define IOMUX_M33C1_PINCM47_PIPU_OFS             (17)                            /* !< PIPU Offset */
#define IOMUX_M33C1_PINCM47_PIPU_MASK            ((uint32_t)0x00020000U)         /* !< bit */
#define IOMUX_M33C1_PINCM47_PIPU_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM47_PIPU_ENABLE          ((uint32_t)0x00020000U)
/* IOMUX_M33C1_PINCM47[PIPD] Bits */
#define IOMUX_M33C1_PINCM47_PIPD_OFS             (16)                            /* !< PIPD Offset */
#define IOMUX_M33C1_PINCM47_PIPD_MASK            ((uint32_t)0x00010000U)         /* !< bit */
#define IOMUX_M33C1_PINCM47_PIPD_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM47_PIPD_ENABLE          ((uint32_t)0x00010000U)
/* IOMUX_M33C1_PINCM47[PC] Bits */
#define IOMUX_M33C1_PINCM47_PC_OFS               (7)                             /* !< PC Offset */
#define IOMUX_M33C1_PINCM47_PC_MASK              ((uint32_t)0x00000080U)         /* !< bit */
#define IOMUX_M33C1_PINCM47_PC_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM47_PC_CONNECTED         ((uint32_t)0x00000080U)
/* IOMUX_M33C1_PINCM47[PF] Bits */
#define IOMUX_M33C1_PINCM47_PF_OFS               (0)                             /* !< PF Offset */
#define IOMUX_M33C1_PINCM47_PF_MASK              ((uint32_t)0x0000000FU)         /* !< bit */
#define IOMUX_M33C1_PINCM47_PF_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM47_PF_GPIO0_DIO22       ((uint32_t)0x00000001U)
#define IOMUX_M33C1_PINCM47_PF_GPTIMER16B2CCLP2_CCP1 ((uint32_t)0x00000002U)
#define IOMUX_M33C1_PINCM47_PF_GPTIMER16BADV4CC0_CCP0_CMPL ((uint32_t)0x00000003U)
#define IOMUX_M33C1_PINCM47_PF_I2S0_BCLK         ((uint32_t)0x00000004U)
#define IOMUX_M33C1_PINCM47_PF_SYSCTL_CLK_OUT    ((uint32_t)0x00000005U)
#define IOMUX_M33C1_PINCM47_PF_SPGSS2_U0_SCLK_SCL_RX ((uint32_t)0x00000006U)
#define IOMUX_M33C1_PINCM47_PF_SPGSS2_U1_POCI_RTS ((uint32_t)0x00000007U)
#define IOMUX_M33C1_PINCM47_PF_SPGSS0_U2_RTS     ((uint32_t)0x00000008U)
#define IOMUX_M33C1_PINCM47_PF_DFTSS_TDI         ((uint32_t)0x00000009U)

/* IOMUX_M33C1_PINCM48 Bits */
/* IOMUX_M33C1_PINCM48[WCOMP] Bits */
#define IOMUX_M33C1_PINCM48_WCOMP_OFS            (28)                            /* !< WCOMP Offset */
#define IOMUX_M33C1_PINCM48_WCOMP_MASK           ((uint32_t)0x10000000U)         /* !< Wakeup Compare Value bit */
#define IOMUX_M33C1_PINCM48_WCOMP_MATCH0         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM48_WCOMP_MATCH1         ((uint32_t)0x10000000U)
/* IOMUX_M33C1_PINCM48[WUEN] Bits */
#define IOMUX_M33C1_PINCM48_WUEN_OFS             (27)                            /* !< WUEN Offset */
#define IOMUX_M33C1_PINCM48_WUEN_MASK            ((uint32_t)0x08000000U)         /* !< Wakeup Enable bit */
#define IOMUX_M33C1_PINCM48_WUEN_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM48_WUEN_ENABLE          ((uint32_t)0x08000000U)
/* IOMUX_M33C1_PINCM48[INV] Bits */
#define IOMUX_M33C1_PINCM48_INV_OFS              (26)                            /* !< INV Offset */
#define IOMUX_M33C1_PINCM48_INV_MASK             ((uint32_t)0x04000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM48_INV_DISABLE          ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM48_INV_ENABLE           ((uint32_t)0x04000000U)
/* IOMUX_M33C1_PINCM48[Z1] Bits */
#define IOMUX_M33C1_PINCM48_Z1_OFS               (25)                            /* !< Z1 Offset */
#define IOMUX_M33C1_PINCM48_Z1_MASK              ((uint32_t)0x02000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM48_Z1_DISABLE           ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM48_Z1_ENABLE            ((uint32_t)0x02000000U)
/* IOMUX_M33C1_PINCM48[INENA] Bits */
#define IOMUX_M33C1_PINCM48_INENA_OFS            (18)                            /* !< INENA Offset */
#define IOMUX_M33C1_PINCM48_INENA_MASK           ((uint32_t)0x00040000U)         /* !< bit */
#define IOMUX_M33C1_PINCM48_INENA_PADCORE        ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM48_INENA_CORE0          ((uint32_t)0x00040000U)
/* IOMUX_M33C1_PINCM48[PIPU] Bits */
#define IOMUX_M33C1_PINCM48_PIPU_OFS             (17)                            /* !< PIPU Offset */
#define IOMUX_M33C1_PINCM48_PIPU_MASK            ((uint32_t)0x00020000U)         /* !< bit */
#define IOMUX_M33C1_PINCM48_PIPU_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM48_PIPU_ENABLE          ((uint32_t)0x00020000U)
/* IOMUX_M33C1_PINCM48[PIPD] Bits */
#define IOMUX_M33C1_PINCM48_PIPD_OFS             (16)                            /* !< PIPD Offset */
#define IOMUX_M33C1_PINCM48_PIPD_MASK            ((uint32_t)0x00010000U)         /* !< bit */
#define IOMUX_M33C1_PINCM48_PIPD_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM48_PIPD_ENABLE          ((uint32_t)0x00010000U)
/* IOMUX_M33C1_PINCM48[PC] Bits */
#define IOMUX_M33C1_PINCM48_PC_OFS               (7)                             /* !< PC Offset */
#define IOMUX_M33C1_PINCM48_PC_MASK              ((uint32_t)0x00000080U)         /* !< bit */
#define IOMUX_M33C1_PINCM48_PC_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM48_PC_CONNECTED         ((uint32_t)0x00000080U)
/* IOMUX_M33C1_PINCM48[PF] Bits */
#define IOMUX_M33C1_PINCM48_PF_OFS               (0)                             /* !< PF Offset */
#define IOMUX_M33C1_PINCM48_PF_MASK              ((uint32_t)0x00000007U)         /* !< bit */
#define IOMUX_M33C1_PINCM48_PF_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM48_PF_GPIO1_DIO20       ((uint32_t)0x00000001U)
#define IOMUX_M33C1_PINCM48_PF_GPTIMER32B2CC0_CCP0 ((uint32_t)0x00000002U)
#define IOMUX_M33C1_PINCM48_PF_GPTIMER16BADV4CC0_CCP1 ((uint32_t)0x00000003U)
#define IOMUX_M33C1_PINCM48_PF_GPTIMER16BADV4CC1_CCP2_CMPL ((uint32_t)0x00000004U)
#define IOMUX_M33C1_PINCM48_PF_I2S1_AD0          ((uint32_t)0x00000005U)
#define IOMUX_M33C1_PINCM48_PF_SPGSS1_U0_CS2     ((uint32_t)0x00000006U)

/* IOMUX_M33C1_PINCM49 Bits */
/* IOMUX_M33C1_PINCM49[WCOMP] Bits */
#define IOMUX_M33C1_PINCM49_WCOMP_OFS            (28)                            /* !< WCOMP Offset */
#define IOMUX_M33C1_PINCM49_WCOMP_MASK           ((uint32_t)0x10000000U)         /* !< Wakeup Compare Value bit */
#define IOMUX_M33C1_PINCM49_WCOMP_MATCH0         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM49_WCOMP_MATCH1         ((uint32_t)0x10000000U)
/* IOMUX_M33C1_PINCM49[WUEN] Bits */
#define IOMUX_M33C1_PINCM49_WUEN_OFS             (27)                            /* !< WUEN Offset */
#define IOMUX_M33C1_PINCM49_WUEN_MASK            ((uint32_t)0x08000000U)         /* !< Wakeup Enable bit */
#define IOMUX_M33C1_PINCM49_WUEN_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM49_WUEN_ENABLE          ((uint32_t)0x08000000U)
/* IOMUX_M33C1_PINCM49[INV] Bits */
#define IOMUX_M33C1_PINCM49_INV_OFS              (26)                            /* !< INV Offset */
#define IOMUX_M33C1_PINCM49_INV_MASK             ((uint32_t)0x04000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM49_INV_DISABLE          ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM49_INV_ENABLE           ((uint32_t)0x04000000U)
/* IOMUX_M33C1_PINCM49[Z1] Bits */
#define IOMUX_M33C1_PINCM49_Z1_OFS               (25)                            /* !< Z1 Offset */
#define IOMUX_M33C1_PINCM49_Z1_MASK              ((uint32_t)0x02000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM49_Z1_DISABLE           ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM49_Z1_ENABLE            ((uint32_t)0x02000000U)
/* IOMUX_M33C1_PINCM49[INENA] Bits */
#define IOMUX_M33C1_PINCM49_INENA_OFS            (18)                            /* !< INENA Offset */
#define IOMUX_M33C1_PINCM49_INENA_MASK           ((uint32_t)0x00040000U)         /* !< bit */
#define IOMUX_M33C1_PINCM49_INENA_PADCORE        ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM49_INENA_CORE0          ((uint32_t)0x00040000U)
/* IOMUX_M33C1_PINCM49[PIPU] Bits */
#define IOMUX_M33C1_PINCM49_PIPU_OFS             (17)                            /* !< PIPU Offset */
#define IOMUX_M33C1_PINCM49_PIPU_MASK            ((uint32_t)0x00020000U)         /* !< bit */
#define IOMUX_M33C1_PINCM49_PIPU_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM49_PIPU_ENABLE          ((uint32_t)0x00020000U)
/* IOMUX_M33C1_PINCM49[PIPD] Bits */
#define IOMUX_M33C1_PINCM49_PIPD_OFS             (16)                            /* !< PIPD Offset */
#define IOMUX_M33C1_PINCM49_PIPD_MASK            ((uint32_t)0x00010000U)         /* !< bit */
#define IOMUX_M33C1_PINCM49_PIPD_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM49_PIPD_ENABLE          ((uint32_t)0x00010000U)
/* IOMUX_M33C1_PINCM49[PC] Bits */
#define IOMUX_M33C1_PINCM49_PC_OFS               (7)                             /* !< PC Offset */
#define IOMUX_M33C1_PINCM49_PC_MASK              ((uint32_t)0x00000080U)         /* !< bit */
#define IOMUX_M33C1_PINCM49_PC_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM49_PC_CONNECTED         ((uint32_t)0x00000080U)
/* IOMUX_M33C1_PINCM49[PF] Bits */
#define IOMUX_M33C1_PINCM49_PF_OFS               (0)                             /* !< PF Offset */
#define IOMUX_M33C1_PINCM49_PF_MASK              ((uint32_t)0x00000007U)         /* !< bit */
#define IOMUX_M33C1_PINCM49_PF_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM49_PF_GPIO1_DIO21       ((uint32_t)0x00000001U)
#define IOMUX_M33C1_PINCM49_PF_GPTIMER16B2CCQEILP0_CCP0 ((uint32_t)0x00000002U)
#define IOMUX_M33C1_PINCM49_PF_MCAN1_CANTX       ((uint32_t)0x00000003U)
#define IOMUX_M33C1_PINCM49_PF_GPTIMER16BADV4CC1_CCP3 ((uint32_t)0x00000004U)
#define IOMUX_M33C1_PINCM49_PF_I2S1_AD1          ((uint32_t)0x00000005U)
#define IOMUX_M33C1_PINCM49_PF_SPGSS2_U3_SCL_RX  ((uint32_t)0x00000006U)

/* IOMUX_M33C1_PINCM50 Bits */
/* IOMUX_M33C1_PINCM50[WCOMP] Bits */
#define IOMUX_M33C1_PINCM50_WCOMP_OFS            (28)                            /* !< WCOMP Offset */
#define IOMUX_M33C1_PINCM50_WCOMP_MASK           ((uint32_t)0x10000000U)         /* !< Wakeup Compare Value bit */
#define IOMUX_M33C1_PINCM50_WCOMP_MATCH0         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM50_WCOMP_MATCH1         ((uint32_t)0x10000000U)
/* IOMUX_M33C1_PINCM50[WUEN] Bits */
#define IOMUX_M33C1_PINCM50_WUEN_OFS             (27)                            /* !< WUEN Offset */
#define IOMUX_M33C1_PINCM50_WUEN_MASK            ((uint32_t)0x08000000U)         /* !< Wakeup Enable bit */
#define IOMUX_M33C1_PINCM50_WUEN_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM50_WUEN_ENABLE          ((uint32_t)0x08000000U)
/* IOMUX_M33C1_PINCM50[INV] Bits */
#define IOMUX_M33C1_PINCM50_INV_OFS              (26)                            /* !< INV Offset */
#define IOMUX_M33C1_PINCM50_INV_MASK             ((uint32_t)0x04000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM50_INV_DISABLE          ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM50_INV_ENABLE           ((uint32_t)0x04000000U)
/* IOMUX_M33C1_PINCM50[Z1] Bits */
#define IOMUX_M33C1_PINCM50_Z1_OFS               (25)                            /* !< Z1 Offset */
#define IOMUX_M33C1_PINCM50_Z1_MASK              ((uint32_t)0x02000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM50_Z1_DISABLE           ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM50_Z1_ENABLE            ((uint32_t)0x02000000U)
/* IOMUX_M33C1_PINCM50[INENA] Bits */
#define IOMUX_M33C1_PINCM50_INENA_OFS            (18)                            /* !< INENA Offset */
#define IOMUX_M33C1_PINCM50_INENA_MASK           ((uint32_t)0x00040000U)         /* !< bit */
#define IOMUX_M33C1_PINCM50_INENA_PADCORE        ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM50_INENA_CORE0          ((uint32_t)0x00040000U)
/* IOMUX_M33C1_PINCM50[PIPU] Bits */
#define IOMUX_M33C1_PINCM50_PIPU_OFS             (17)                            /* !< PIPU Offset */
#define IOMUX_M33C1_PINCM50_PIPU_MASK            ((uint32_t)0x00020000U)         /* !< bit */
#define IOMUX_M33C1_PINCM50_PIPU_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM50_PIPU_ENABLE          ((uint32_t)0x00020000U)
/* IOMUX_M33C1_PINCM50[PIPD] Bits */
#define IOMUX_M33C1_PINCM50_PIPD_OFS             (16)                            /* !< PIPD Offset */
#define IOMUX_M33C1_PINCM50_PIPD_MASK            ((uint32_t)0x00010000U)         /* !< bit */
#define IOMUX_M33C1_PINCM50_PIPD_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM50_PIPD_ENABLE          ((uint32_t)0x00010000U)
/* IOMUX_M33C1_PINCM50[PC] Bits */
#define IOMUX_M33C1_PINCM50_PC_OFS               (7)                             /* !< PC Offset */
#define IOMUX_M33C1_PINCM50_PC_MASK              ((uint32_t)0x00000080U)         /* !< bit */
#define IOMUX_M33C1_PINCM50_PC_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM50_PC_CONNECTED         ((uint32_t)0x00000080U)
/* IOMUX_M33C1_PINCM50[PF] Bits */
#define IOMUX_M33C1_PINCM50_PF_OFS               (0)                             /* !< PF Offset */
#define IOMUX_M33C1_PINCM50_PF_MASK              ((uint32_t)0x00000007U)         /* !< bit */
#define IOMUX_M33C1_PINCM50_PF_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM50_PF_GPIO1_DIO22       ((uint32_t)0x00000001U)
#define IOMUX_M33C1_PINCM50_PF_GPTIMER16B2CCQEILP0_CCP1 ((uint32_t)0x00000002U)
#define IOMUX_M33C1_PINCM50_PF_MCAN1_CANRX       ((uint32_t)0x00000003U)
#define IOMUX_M33C1_PINCM50_PF_GPTIMER16BADV4CC1_CCP3_CMPL ((uint32_t)0x00000004U)
#define IOMUX_M33C1_PINCM50_PF_I2S1_WCLK         ((uint32_t)0x00000005U)
#define IOMUX_M33C1_PINCM50_PF_SPGSS2_U3_SDA_TX  ((uint32_t)0x00000006U)
#define IOMUX_M33C1_PINCM50_PF_SPGSS1_U5_PICO_SDA_TX ((uint32_t)0x00000007U)

/* IOMUX_M33C1_PINCM51 Bits */
/* IOMUX_M33C1_PINCM51[WCOMP] Bits */
#define IOMUX_M33C1_PINCM51_WCOMP_OFS            (28)                            /* !< WCOMP Offset */
#define IOMUX_M33C1_PINCM51_WCOMP_MASK           ((uint32_t)0x10000000U)         /* !< Wakeup Compare Value bit */
#define IOMUX_M33C1_PINCM51_WCOMP_MATCH0         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM51_WCOMP_MATCH1         ((uint32_t)0x10000000U)
/* IOMUX_M33C1_PINCM51[WUEN] Bits */
#define IOMUX_M33C1_PINCM51_WUEN_OFS             (27)                            /* !< WUEN Offset */
#define IOMUX_M33C1_PINCM51_WUEN_MASK            ((uint32_t)0x08000000U)         /* !< Wakeup Enable bit */
#define IOMUX_M33C1_PINCM51_WUEN_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM51_WUEN_ENABLE          ((uint32_t)0x08000000U)
/* IOMUX_M33C1_PINCM51[INV] Bits */
#define IOMUX_M33C1_PINCM51_INV_OFS              (26)                            /* !< INV Offset */
#define IOMUX_M33C1_PINCM51_INV_MASK             ((uint32_t)0x04000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM51_INV_DISABLE          ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM51_INV_ENABLE           ((uint32_t)0x04000000U)
/* IOMUX_M33C1_PINCM51[Z1] Bits */
#define IOMUX_M33C1_PINCM51_Z1_OFS               (25)                            /* !< Z1 Offset */
#define IOMUX_M33C1_PINCM51_Z1_MASK              ((uint32_t)0x02000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM51_Z1_DISABLE           ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM51_Z1_ENABLE            ((uint32_t)0x02000000U)
/* IOMUX_M33C1_PINCM51[INENA] Bits */
#define IOMUX_M33C1_PINCM51_INENA_OFS            (18)                            /* !< INENA Offset */
#define IOMUX_M33C1_PINCM51_INENA_MASK           ((uint32_t)0x00040000U)         /* !< bit */
#define IOMUX_M33C1_PINCM51_INENA_PADCORE        ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM51_INENA_CORE0          ((uint32_t)0x00040000U)
/* IOMUX_M33C1_PINCM51[PIPU] Bits */
#define IOMUX_M33C1_PINCM51_PIPU_OFS             (17)                            /* !< PIPU Offset */
#define IOMUX_M33C1_PINCM51_PIPU_MASK            ((uint32_t)0x00020000U)         /* !< bit */
#define IOMUX_M33C1_PINCM51_PIPU_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM51_PIPU_ENABLE          ((uint32_t)0x00020000U)
/* IOMUX_M33C1_PINCM51[PIPD] Bits */
#define IOMUX_M33C1_PINCM51_PIPD_OFS             (16)                            /* !< PIPD Offset */
#define IOMUX_M33C1_PINCM51_PIPD_MASK            ((uint32_t)0x00010000U)         /* !< bit */
#define IOMUX_M33C1_PINCM51_PIPD_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM51_PIPD_ENABLE          ((uint32_t)0x00010000U)
/* IOMUX_M33C1_PINCM51[PC] Bits */
#define IOMUX_M33C1_PINCM51_PC_OFS               (7)                             /* !< PC Offset */
#define IOMUX_M33C1_PINCM51_PC_MASK              ((uint32_t)0x00000080U)         /* !< bit */
#define IOMUX_M33C1_PINCM51_PC_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM51_PC_CONNECTED         ((uint32_t)0x00000080U)
/* IOMUX_M33C1_PINCM51[PF] Bits */
#define IOMUX_M33C1_PINCM51_PF_OFS               (0)                             /* !< PF Offset */
#define IOMUX_M33C1_PINCM51_PF_MASK              ((uint32_t)0x00000007U)         /* !< bit */
#define IOMUX_M33C1_PINCM51_PF_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM51_PF_GPIO1_DIO23       ((uint32_t)0x00000001U)
#define IOMUX_M33C1_PINCM51_PF_GPTIMER16B2CCLP1_CCP0 ((uint32_t)0x00000004U)
#define IOMUX_M33C1_PINCM51_PF_I2S1_BCLK         ((uint32_t)0x00000005U)
#define IOMUX_M33C1_PINCM51_PF_SPGSS2_U3_CTS     ((uint32_t)0x00000006U)
#define IOMUX_M33C1_PINCM51_PF_SPGSS1_U5_SCLK_SCL_RX ((uint32_t)0x00000007U)

/* IOMUX_M33C1_PINCM52 Bits */
/* IOMUX_M33C1_PINCM52[WCOMP] Bits */
#define IOMUX_M33C1_PINCM52_WCOMP_OFS            (28)                            /* !< WCOMP Offset */
#define IOMUX_M33C1_PINCM52_WCOMP_MASK           ((uint32_t)0x10000000U)         /* !< Wakeup Compare Value bit */
#define IOMUX_M33C1_PINCM52_WCOMP_MATCH0         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM52_WCOMP_MATCH1         ((uint32_t)0x10000000U)
/* IOMUX_M33C1_PINCM52[WUEN] Bits */
#define IOMUX_M33C1_PINCM52_WUEN_OFS             (27)                            /* !< WUEN Offset */
#define IOMUX_M33C1_PINCM52_WUEN_MASK            ((uint32_t)0x08000000U)         /* !< Wakeup Enable bit */
#define IOMUX_M33C1_PINCM52_WUEN_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM52_WUEN_ENABLE          ((uint32_t)0x08000000U)
/* IOMUX_M33C1_PINCM52[INV] Bits */
#define IOMUX_M33C1_PINCM52_INV_OFS              (26)                            /* !< INV Offset */
#define IOMUX_M33C1_PINCM52_INV_MASK             ((uint32_t)0x04000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM52_INV_DISABLE          ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM52_INV_ENABLE           ((uint32_t)0x04000000U)
/* IOMUX_M33C1_PINCM52[Z1] Bits */
#define IOMUX_M33C1_PINCM52_Z1_OFS               (25)                            /* !< Z1 Offset */
#define IOMUX_M33C1_PINCM52_Z1_MASK              ((uint32_t)0x02000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM52_Z1_DISABLE           ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM52_Z1_ENABLE            ((uint32_t)0x02000000U)
/* IOMUX_M33C1_PINCM52[INENA] Bits */
#define IOMUX_M33C1_PINCM52_INENA_OFS            (18)                            /* !< INENA Offset */
#define IOMUX_M33C1_PINCM52_INENA_MASK           ((uint32_t)0x00040000U)         /* !< bit */
#define IOMUX_M33C1_PINCM52_INENA_PADCORE        ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM52_INENA_CORE0          ((uint32_t)0x00040000U)
/* IOMUX_M33C1_PINCM52[PIPU] Bits */
#define IOMUX_M33C1_PINCM52_PIPU_OFS             (17)                            /* !< PIPU Offset */
#define IOMUX_M33C1_PINCM52_PIPU_MASK            ((uint32_t)0x00020000U)         /* !< bit */
#define IOMUX_M33C1_PINCM52_PIPU_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM52_PIPU_ENABLE          ((uint32_t)0x00020000U)
/* IOMUX_M33C1_PINCM52[PIPD] Bits */
#define IOMUX_M33C1_PINCM52_PIPD_OFS             (16)                            /* !< PIPD Offset */
#define IOMUX_M33C1_PINCM52_PIPD_MASK            ((uint32_t)0x00010000U)         /* !< bit */
#define IOMUX_M33C1_PINCM52_PIPD_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM52_PIPD_ENABLE          ((uint32_t)0x00010000U)
/* IOMUX_M33C1_PINCM52[PC] Bits */
#define IOMUX_M33C1_PINCM52_PC_OFS               (7)                             /* !< PC Offset */
#define IOMUX_M33C1_PINCM52_PC_MASK              ((uint32_t)0x00000080U)         /* !< bit */
#define IOMUX_M33C1_PINCM52_PC_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM52_PC_CONNECTED         ((uint32_t)0x00000080U)
/* IOMUX_M33C1_PINCM52[PF] Bits */
#define IOMUX_M33C1_PINCM52_PF_OFS               (0)                             /* !< PF Offset */
#define IOMUX_M33C1_PINCM52_PF_MASK              ((uint32_t)0x00000007U)         /* !< bit */
#define IOMUX_M33C1_PINCM52_PF_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM52_PF_GPIO1_DIO24       ((uint32_t)0x00000001U)
#define IOMUX_M33C1_PINCM52_PF_GPTIMER32B2CC0_CCP1 ((uint32_t)0x00000002U)
#define IOMUX_M33C1_PINCM52_PF_GPTIMER16BADV4CC1_FAULT2 ((uint32_t)0x00000003U)
#define IOMUX_M33C1_PINCM52_PF_GPTIMER16B2CCLP1_CCP1 ((uint32_t)0x00000004U)
#define IOMUX_M33C1_PINCM52_PF_I2S1_MCLK         ((uint32_t)0x00000005U)
#define IOMUX_M33C1_PINCM52_PF_SPGSS2_U3_RTS     ((uint32_t)0x00000006U)
#define IOMUX_M33C1_PINCM52_PF_SPGSS1_U0_CS3     ((uint32_t)0x00000007U)

/* IOMUX_M33C1_PINCM53 Bits */
/* IOMUX_M33C1_PINCM53[WCOMP] Bits */
#define IOMUX_M33C1_PINCM53_WCOMP_OFS            (28)                            /* !< WCOMP Offset */
#define IOMUX_M33C1_PINCM53_WCOMP_MASK           ((uint32_t)0x10000000U)         /* !< Wakeup Compare Value bit */
#define IOMUX_M33C1_PINCM53_WCOMP_MATCH0         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM53_WCOMP_MATCH1         ((uint32_t)0x10000000U)
/* IOMUX_M33C1_PINCM53[WUEN] Bits */
#define IOMUX_M33C1_PINCM53_WUEN_OFS             (27)                            /* !< WUEN Offset */
#define IOMUX_M33C1_PINCM53_WUEN_MASK            ((uint32_t)0x08000000U)         /* !< Wakeup Enable bit */
#define IOMUX_M33C1_PINCM53_WUEN_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM53_WUEN_ENABLE          ((uint32_t)0x08000000U)
/* IOMUX_M33C1_PINCM53[INV] Bits */
#define IOMUX_M33C1_PINCM53_INV_OFS              (26)                            /* !< INV Offset */
#define IOMUX_M33C1_PINCM53_INV_MASK             ((uint32_t)0x04000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM53_INV_DISABLE          ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM53_INV_ENABLE           ((uint32_t)0x04000000U)
/* IOMUX_M33C1_PINCM53[Z1] Bits */
#define IOMUX_M33C1_PINCM53_Z1_OFS               (25)                            /* !< Z1 Offset */
#define IOMUX_M33C1_PINCM53_Z1_MASK              ((uint32_t)0x02000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM53_Z1_DISABLE           ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM53_Z1_ENABLE            ((uint32_t)0x02000000U)
/* IOMUX_M33C1_PINCM53[INENA] Bits */
#define IOMUX_M33C1_PINCM53_INENA_OFS            (18)                            /* !< INENA Offset */
#define IOMUX_M33C1_PINCM53_INENA_MASK           ((uint32_t)0x00040000U)         /* !< bit */
#define IOMUX_M33C1_PINCM53_INENA_PADCORE        ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM53_INENA_CORE0          ((uint32_t)0x00040000U)
/* IOMUX_M33C1_PINCM53[PIPU] Bits */
#define IOMUX_M33C1_PINCM53_PIPU_OFS             (17)                            /* !< PIPU Offset */
#define IOMUX_M33C1_PINCM53_PIPU_MASK            ((uint32_t)0x00020000U)         /* !< bit */
#define IOMUX_M33C1_PINCM53_PIPU_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM53_PIPU_ENABLE          ((uint32_t)0x00020000U)
/* IOMUX_M33C1_PINCM53[PIPD] Bits */
#define IOMUX_M33C1_PINCM53_PIPD_OFS             (16)                            /* !< PIPD Offset */
#define IOMUX_M33C1_PINCM53_PIPD_MASK            ((uint32_t)0x00010000U)         /* !< bit */
#define IOMUX_M33C1_PINCM53_PIPD_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM53_PIPD_ENABLE          ((uint32_t)0x00010000U)
/* IOMUX_M33C1_PINCM53[PC] Bits */
#define IOMUX_M33C1_PINCM53_PC_OFS               (7)                             /* !< PC Offset */
#define IOMUX_M33C1_PINCM53_PC_MASK              ((uint32_t)0x00000080U)         /* !< bit */
#define IOMUX_M33C1_PINCM53_PC_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM53_PC_CONNECTED         ((uint32_t)0x00000080U)
/* IOMUX_M33C1_PINCM53[PF] Bits */
#define IOMUX_M33C1_PINCM53_PF_OFS               (0)                             /* !< PF Offset */
#define IOMUX_M33C1_PINCM53_PF_MASK              ((uint32_t)0x0000000FU)         /* !< bit */
#define IOMUX_M33C1_PINCM53_PF_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM53_PF_GPIO0_DIO23       ((uint32_t)0x00000001U)
#define IOMUX_M33C1_PINCM53_PF_GPTIMER16BADV4CC0_CCP3 ((uint32_t)0x00000002U)
#define IOMUX_M33C1_PINCM53_PF_I2S0_WCLK         ((uint32_t)0x00000003U)
#define IOMUX_M33C1_PINCM53_PF_SPGSS2_U0_PICO_SDA_TX ((uint32_t)0x00000004U)
#define IOMUX_M33C1_PINCM53_PF_SPGSS1_U5_CS0_CTS ((uint32_t)0x00000005U)
#define IOMUX_M33C1_PINCM53_PF_SPGSS1_U0_CS3     ((uint32_t)0x00000006U)
#define IOMUX_M33C1_PINCM53_PF_SPGSS2_U1_SCLK_SCL_RX ((uint32_t)0x00000007U)
#define IOMUX_M33C1_PINCM53_PF_GPTIMER16B2CCLP0_CCP0 ((uint32_t)0x00000009U)

/* IOMUX_M33C1_PINCM54 Bits */
/* IOMUX_M33C1_PINCM54[WCOMP] Bits */
#define IOMUX_M33C1_PINCM54_WCOMP_OFS            (28)                            /* !< WCOMP Offset */
#define IOMUX_M33C1_PINCM54_WCOMP_MASK           ((uint32_t)0x10000000U)         /* !< Wakeup Compare Value bit */
#define IOMUX_M33C1_PINCM54_WCOMP_MATCH0         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM54_WCOMP_MATCH1         ((uint32_t)0x10000000U)
/* IOMUX_M33C1_PINCM54[WUEN] Bits */
#define IOMUX_M33C1_PINCM54_WUEN_OFS             (27)                            /* !< WUEN Offset */
#define IOMUX_M33C1_PINCM54_WUEN_MASK            ((uint32_t)0x08000000U)         /* !< Wakeup Enable bit */
#define IOMUX_M33C1_PINCM54_WUEN_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM54_WUEN_ENABLE          ((uint32_t)0x08000000U)
/* IOMUX_M33C1_PINCM54[INV] Bits */
#define IOMUX_M33C1_PINCM54_INV_OFS              (26)                            /* !< INV Offset */
#define IOMUX_M33C1_PINCM54_INV_MASK             ((uint32_t)0x04000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM54_INV_DISABLE          ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM54_INV_ENABLE           ((uint32_t)0x04000000U)
/* IOMUX_M33C1_PINCM54[Z1] Bits */
#define IOMUX_M33C1_PINCM54_Z1_OFS               (25)                            /* !< Z1 Offset */
#define IOMUX_M33C1_PINCM54_Z1_MASK              ((uint32_t)0x02000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM54_Z1_DISABLE           ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM54_Z1_ENABLE            ((uint32_t)0x02000000U)
/* IOMUX_M33C1_PINCM54[INENA] Bits */
#define IOMUX_M33C1_PINCM54_INENA_OFS            (18)                            /* !< INENA Offset */
#define IOMUX_M33C1_PINCM54_INENA_MASK           ((uint32_t)0x00040000U)         /* !< bit */
#define IOMUX_M33C1_PINCM54_INENA_PADCORE        ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM54_INENA_CORE0          ((uint32_t)0x00040000U)
/* IOMUX_M33C1_PINCM54[PIPU] Bits */
#define IOMUX_M33C1_PINCM54_PIPU_OFS             (17)                            /* !< PIPU Offset */
#define IOMUX_M33C1_PINCM54_PIPU_MASK            ((uint32_t)0x00020000U)         /* !< bit */
#define IOMUX_M33C1_PINCM54_PIPU_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM54_PIPU_ENABLE          ((uint32_t)0x00020000U)
/* IOMUX_M33C1_PINCM54[PIPD] Bits */
#define IOMUX_M33C1_PINCM54_PIPD_OFS             (16)                            /* !< PIPD Offset */
#define IOMUX_M33C1_PINCM54_PIPD_MASK            ((uint32_t)0x00010000U)         /* !< bit */
#define IOMUX_M33C1_PINCM54_PIPD_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM54_PIPD_ENABLE          ((uint32_t)0x00010000U)
/* IOMUX_M33C1_PINCM54[PC] Bits */
#define IOMUX_M33C1_PINCM54_PC_OFS               (7)                             /* !< PC Offset */
#define IOMUX_M33C1_PINCM54_PC_MASK              ((uint32_t)0x00000080U)         /* !< bit */
#define IOMUX_M33C1_PINCM54_PC_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM54_PC_CONNECTED         ((uint32_t)0x00000080U)
/* IOMUX_M33C1_PINCM54[PF] Bits */
#define IOMUX_M33C1_PINCM54_PF_OFS               (0)                             /* !< PF Offset */
#define IOMUX_M33C1_PINCM54_PF_MASK              ((uint32_t)0x0000000FU)         /* !< bit */
#define IOMUX_M33C1_PINCM54_PF_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM54_PF_GPIO0_DIO24       ((uint32_t)0x00000001U)
#define IOMUX_M33C1_PINCM54_PF_GPTIMER16BADV4CC0_CCP3_CMPL ((uint32_t)0x00000002U)
#define IOMUX_M33C1_PINCM54_PF_I2S0_AD1          ((uint32_t)0x00000003U)
#define IOMUX_M33C1_PINCM54_PF_SPGSS2_U0_SCLK_SCL_RX ((uint32_t)0x00000004U)
#define IOMUX_M33C1_PINCM54_PF_SPGSS1_U5_POCI_RTS ((uint32_t)0x00000005U)
#define IOMUX_M33C1_PINCM54_PF_SPGSS1_U0_CS2     ((uint32_t)0x00000006U)
#define IOMUX_M33C1_PINCM54_PF_SPGSS2_U1_PICO_SDA_TX ((uint32_t)0x00000007U)
#define IOMUX_M33C1_PINCM54_PF_GPTIMER32B2CC0_CCP1 ((uint32_t)0x00000008U)
#define IOMUX_M33C1_PINCM54_PF_GPTIMER16B2CCLP0_CCP1 ((uint32_t)0x00000009U)

/* IOMUX_M33C1_PINCM55 Bits */
/* IOMUX_M33C1_PINCM55[WCOMP] Bits */
#define IOMUX_M33C1_PINCM55_WCOMP_OFS            (28)                            /* !< WCOMP Offset */
#define IOMUX_M33C1_PINCM55_WCOMP_MASK           ((uint32_t)0x10000000U)         /* !< Wakeup Compare Value bit */
#define IOMUX_M33C1_PINCM55_WCOMP_MATCH0         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM55_WCOMP_MATCH1         ((uint32_t)0x10000000U)
/* IOMUX_M33C1_PINCM55[WUEN] Bits */
#define IOMUX_M33C1_PINCM55_WUEN_OFS             (27)                            /* !< WUEN Offset */
#define IOMUX_M33C1_PINCM55_WUEN_MASK            ((uint32_t)0x08000000U)         /* !< Wakeup Enable bit */
#define IOMUX_M33C1_PINCM55_WUEN_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM55_WUEN_ENABLE          ((uint32_t)0x08000000U)
/* IOMUX_M33C1_PINCM55[INV] Bits */
#define IOMUX_M33C1_PINCM55_INV_OFS              (26)                            /* !< INV Offset */
#define IOMUX_M33C1_PINCM55_INV_MASK             ((uint32_t)0x04000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM55_INV_DISABLE          ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM55_INV_ENABLE           ((uint32_t)0x04000000U)
/* IOMUX_M33C1_PINCM55[Z1] Bits */
#define IOMUX_M33C1_PINCM55_Z1_OFS               (25)                            /* !< Z1 Offset */
#define IOMUX_M33C1_PINCM55_Z1_MASK              ((uint32_t)0x02000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM55_Z1_DISABLE           ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM55_Z1_ENABLE            ((uint32_t)0x02000000U)
/* IOMUX_M33C1_PINCM55[DRV] Bits */
#define IOMUX_M33C1_PINCM55_DRV_OFS              (20)                            /* !< DRV Offset */
#define IOMUX_M33C1_PINCM55_DRV_MASK             ((uint32_t)0x00100000U)         /* !< bit */
#define IOMUX_M33C1_PINCM55_DRV_DRIVEVALUE0      ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM55_DRV_DRIVEVALUE1      ((uint32_t)0x00100000U)
/* IOMUX_M33C1_PINCM55[INENA] Bits */
#define IOMUX_M33C1_PINCM55_INENA_OFS            (18)                            /* !< INENA Offset */
#define IOMUX_M33C1_PINCM55_INENA_MASK           ((uint32_t)0x00040000U)         /* !< bit */
#define IOMUX_M33C1_PINCM55_INENA_PADCORE        ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM55_INENA_CORE0          ((uint32_t)0x00040000U)
/* IOMUX_M33C1_PINCM55[PIPU] Bits */
#define IOMUX_M33C1_PINCM55_PIPU_OFS             (17)                            /* !< PIPU Offset */
#define IOMUX_M33C1_PINCM55_PIPU_MASK            ((uint32_t)0x00020000U)         /* !< bit */
#define IOMUX_M33C1_PINCM55_PIPU_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM55_PIPU_ENABLE          ((uint32_t)0x00020000U)
/* IOMUX_M33C1_PINCM55[PIPD] Bits */
#define IOMUX_M33C1_PINCM55_PIPD_OFS             (16)                            /* !< PIPD Offset */
#define IOMUX_M33C1_PINCM55_PIPD_MASK            ((uint32_t)0x00010000U)         /* !< bit */
#define IOMUX_M33C1_PINCM55_PIPD_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM55_PIPD_ENABLE          ((uint32_t)0x00010000U)
/* IOMUX_M33C1_PINCM55[PC] Bits */
#define IOMUX_M33C1_PINCM55_PC_OFS               (7)                             /* !< PC Offset */
#define IOMUX_M33C1_PINCM55_PC_MASK              ((uint32_t)0x00000080U)         /* !< bit */
#define IOMUX_M33C1_PINCM55_PC_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM55_PC_CONNECTED         ((uint32_t)0x00000080U)
/* IOMUX_M33C1_PINCM55[PF] Bits */
#define IOMUX_M33C1_PINCM55_PF_OFS               (0)                             /* !< PF Offset */
#define IOMUX_M33C1_PINCM55_PF_MASK              ((uint32_t)0x00000007U)         /* !< bit */
#define IOMUX_M33C1_PINCM55_PF_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM55_PF_GPIO0_DIO25       ((uint32_t)0x00000001U)
#define IOMUX_M33C1_PINCM55_PF_GPTIMER16BADV4CC0_CCP1_CMPL ((uint32_t)0x00000002U)
#define IOMUX_M33C1_PINCM55_PF_I2S0_AD0          ((uint32_t)0x00000003U)
#define IOMUX_M33C1_PINCM55_PF_SPGSS1_U5_SCLK_SCL_RX ((uint32_t)0x00000004U)
#define IOMUX_M33C1_PINCM55_PF_SPGSS2_U2_SCLK_SCL_RX ((uint32_t)0x00000005U)
#define IOMUX_M33C1_PINCM55_PF_SPGSS2_U0_POCI_RTS ((uint32_t)0x00000006U)

/* IOMUX_M33C1_PINCM56 Bits */
/* IOMUX_M33C1_PINCM56[WCOMP] Bits */
#define IOMUX_M33C1_PINCM56_WCOMP_OFS            (28)                            /* !< WCOMP Offset */
#define IOMUX_M33C1_PINCM56_WCOMP_MASK           ((uint32_t)0x10000000U)         /* !< Wakeup Compare Value bit */
#define IOMUX_M33C1_PINCM56_WCOMP_MATCH0         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM56_WCOMP_MATCH1         ((uint32_t)0x10000000U)
/* IOMUX_M33C1_PINCM56[WUEN] Bits */
#define IOMUX_M33C1_PINCM56_WUEN_OFS             (27)                            /* !< WUEN Offset */
#define IOMUX_M33C1_PINCM56_WUEN_MASK            ((uint32_t)0x08000000U)         /* !< Wakeup Enable bit */
#define IOMUX_M33C1_PINCM56_WUEN_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM56_WUEN_ENABLE          ((uint32_t)0x08000000U)
/* IOMUX_M33C1_PINCM56[INV] Bits */
#define IOMUX_M33C1_PINCM56_INV_OFS              (26)                            /* !< INV Offset */
#define IOMUX_M33C1_PINCM56_INV_MASK             ((uint32_t)0x04000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM56_INV_DISABLE          ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM56_INV_ENABLE           ((uint32_t)0x04000000U)
/* IOMUX_M33C1_PINCM56[Z1] Bits */
#define IOMUX_M33C1_PINCM56_Z1_OFS               (25)                            /* !< Z1 Offset */
#define IOMUX_M33C1_PINCM56_Z1_MASK              ((uint32_t)0x02000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM56_Z1_DISABLE           ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM56_Z1_ENABLE            ((uint32_t)0x02000000U)
/* IOMUX_M33C1_PINCM56[INENA] Bits */
#define IOMUX_M33C1_PINCM56_INENA_OFS            (18)                            /* !< INENA Offset */
#define IOMUX_M33C1_PINCM56_INENA_MASK           ((uint32_t)0x00040000U)         /* !< bit */
#define IOMUX_M33C1_PINCM56_INENA_PADCORE        ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM56_INENA_CORE0          ((uint32_t)0x00040000U)
/* IOMUX_M33C1_PINCM56[PIPU] Bits */
#define IOMUX_M33C1_PINCM56_PIPU_OFS             (17)                            /* !< PIPU Offset */
#define IOMUX_M33C1_PINCM56_PIPU_MASK            ((uint32_t)0x00020000U)         /* !< bit */
#define IOMUX_M33C1_PINCM56_PIPU_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM56_PIPU_ENABLE          ((uint32_t)0x00020000U)
/* IOMUX_M33C1_PINCM56[PIPD] Bits */
#define IOMUX_M33C1_PINCM56_PIPD_OFS             (16)                            /* !< PIPD Offset */
#define IOMUX_M33C1_PINCM56_PIPD_MASK            ((uint32_t)0x00010000U)         /* !< bit */
#define IOMUX_M33C1_PINCM56_PIPD_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM56_PIPD_ENABLE          ((uint32_t)0x00010000U)
/* IOMUX_M33C1_PINCM56[PC] Bits */
#define IOMUX_M33C1_PINCM56_PC_OFS               (7)                             /* !< PC Offset */
#define IOMUX_M33C1_PINCM56_PC_MASK              ((uint32_t)0x00000080U)         /* !< bit */
#define IOMUX_M33C1_PINCM56_PC_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM56_PC_CONNECTED         ((uint32_t)0x00000080U)
/* IOMUX_M33C1_PINCM56[PF] Bits */
#define IOMUX_M33C1_PINCM56_PF_OFS               (0)                             /* !< PF Offset */
#define IOMUX_M33C1_PINCM56_PF_MASK              ((uint32_t)0x00000007U)         /* !< bit */
#define IOMUX_M33C1_PINCM56_PF_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM56_PF_GPIO1_DIO25       ((uint32_t)0x00000001U)
#define IOMUX_M33C1_PINCM56_PF_GPTIMER16BADV4CC0_FAULT2 ((uint32_t)0x00000002U)
#define IOMUX_M33C1_PINCM56_PF_I2S0_BCLK         ((uint32_t)0x00000003U)
#define IOMUX_M33C1_PINCM56_PF_SPGSS0_U1_CTS     ((uint32_t)0x00000004U)

/* IOMUX_M33C1_PINCM57 Bits */
/* IOMUX_M33C1_PINCM57[WCOMP] Bits */
#define IOMUX_M33C1_PINCM57_WCOMP_OFS            (28)                            /* !< WCOMP Offset */
#define IOMUX_M33C1_PINCM57_WCOMP_MASK           ((uint32_t)0x10000000U)         /* !< Wakeup Compare Value bit */
#define IOMUX_M33C1_PINCM57_WCOMP_MATCH0         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM57_WCOMP_MATCH1         ((uint32_t)0x10000000U)
/* IOMUX_M33C1_PINCM57[WUEN] Bits */
#define IOMUX_M33C1_PINCM57_WUEN_OFS             (27)                            /* !< WUEN Offset */
#define IOMUX_M33C1_PINCM57_WUEN_MASK            ((uint32_t)0x08000000U)         /* !< Wakeup Enable bit */
#define IOMUX_M33C1_PINCM57_WUEN_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM57_WUEN_ENABLE          ((uint32_t)0x08000000U)
/* IOMUX_M33C1_PINCM57[INV] Bits */
#define IOMUX_M33C1_PINCM57_INV_OFS              (26)                            /* !< INV Offset */
#define IOMUX_M33C1_PINCM57_INV_MASK             ((uint32_t)0x04000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM57_INV_DISABLE          ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM57_INV_ENABLE           ((uint32_t)0x04000000U)
/* IOMUX_M33C1_PINCM57[Z1] Bits */
#define IOMUX_M33C1_PINCM57_Z1_OFS               (25)                            /* !< Z1 Offset */
#define IOMUX_M33C1_PINCM57_Z1_MASK              ((uint32_t)0x02000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM57_Z1_DISABLE           ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM57_Z1_ENABLE            ((uint32_t)0x02000000U)
/* IOMUX_M33C1_PINCM57[INENA] Bits */
#define IOMUX_M33C1_PINCM57_INENA_OFS            (18)                            /* !< INENA Offset */
#define IOMUX_M33C1_PINCM57_INENA_MASK           ((uint32_t)0x00040000U)         /* !< bit */
#define IOMUX_M33C1_PINCM57_INENA_PADCORE        ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM57_INENA_CORE0          ((uint32_t)0x00040000U)
/* IOMUX_M33C1_PINCM57[PIPU] Bits */
#define IOMUX_M33C1_PINCM57_PIPU_OFS             (17)                            /* !< PIPU Offset */
#define IOMUX_M33C1_PINCM57_PIPU_MASK            ((uint32_t)0x00020000U)         /* !< bit */
#define IOMUX_M33C1_PINCM57_PIPU_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM57_PIPU_ENABLE          ((uint32_t)0x00020000U)
/* IOMUX_M33C1_PINCM57[PIPD] Bits */
#define IOMUX_M33C1_PINCM57_PIPD_OFS             (16)                            /* !< PIPD Offset */
#define IOMUX_M33C1_PINCM57_PIPD_MASK            ((uint32_t)0x00010000U)         /* !< bit */
#define IOMUX_M33C1_PINCM57_PIPD_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM57_PIPD_ENABLE          ((uint32_t)0x00010000U)
/* IOMUX_M33C1_PINCM57[PC] Bits */
#define IOMUX_M33C1_PINCM57_PC_OFS               (7)                             /* !< PC Offset */
#define IOMUX_M33C1_PINCM57_PC_MASK              ((uint32_t)0x00000080U)         /* !< bit */
#define IOMUX_M33C1_PINCM57_PC_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM57_PC_CONNECTED         ((uint32_t)0x00000080U)
/* IOMUX_M33C1_PINCM57[PF] Bits */
#define IOMUX_M33C1_PINCM57_PF_OFS               (0)                             /* !< PF Offset */
#define IOMUX_M33C1_PINCM57_PF_MASK              ((uint32_t)0x00000007U)         /* !< bit */
#define IOMUX_M33C1_PINCM57_PF_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM57_PF_GPIO1_DIO26       ((uint32_t)0x00000001U)
#define IOMUX_M33C1_PINCM57_PF_GPTIMER16B2CCLP2_CCP0 ((uint32_t)0x00000002U)
#define IOMUX_M33C1_PINCM57_PF_I2S0_MCLK         ((uint32_t)0x00000003U)
#define IOMUX_M33C1_PINCM57_PF_SPGSS0_U1_RTS     ((uint32_t)0x00000004U)

/* IOMUX_M33C1_PINCM58 Bits */
/* IOMUX_M33C1_PINCM58[WCOMP] Bits */
#define IOMUX_M33C1_PINCM58_WCOMP_OFS            (28)                            /* !< WCOMP Offset */
#define IOMUX_M33C1_PINCM58_WCOMP_MASK           ((uint32_t)0x10000000U)         /* !< Wakeup Compare Value bit */
#define IOMUX_M33C1_PINCM58_WCOMP_MATCH0         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM58_WCOMP_MATCH1         ((uint32_t)0x10000000U)
/* IOMUX_M33C1_PINCM58[WUEN] Bits */
#define IOMUX_M33C1_PINCM58_WUEN_OFS             (27)                            /* !< WUEN Offset */
#define IOMUX_M33C1_PINCM58_WUEN_MASK            ((uint32_t)0x08000000U)         /* !< Wakeup Enable bit */
#define IOMUX_M33C1_PINCM58_WUEN_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM58_WUEN_ENABLE          ((uint32_t)0x08000000U)
/* IOMUX_M33C1_PINCM58[INV] Bits */
#define IOMUX_M33C1_PINCM58_INV_OFS              (26)                            /* !< INV Offset */
#define IOMUX_M33C1_PINCM58_INV_MASK             ((uint32_t)0x04000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM58_INV_DISABLE          ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM58_INV_ENABLE           ((uint32_t)0x04000000U)
/* IOMUX_M33C1_PINCM58[Z1] Bits */
#define IOMUX_M33C1_PINCM58_Z1_OFS               (25)                            /* !< Z1 Offset */
#define IOMUX_M33C1_PINCM58_Z1_MASK              ((uint32_t)0x02000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM58_Z1_DISABLE           ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM58_Z1_ENABLE            ((uint32_t)0x02000000U)
/* IOMUX_M33C1_PINCM58[INENA] Bits */
#define IOMUX_M33C1_PINCM58_INENA_OFS            (18)                            /* !< INENA Offset */
#define IOMUX_M33C1_PINCM58_INENA_MASK           ((uint32_t)0x00040000U)         /* !< bit */
#define IOMUX_M33C1_PINCM58_INENA_PADCORE        ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM58_INENA_CORE0          ((uint32_t)0x00040000U)
/* IOMUX_M33C1_PINCM58[PIPU] Bits */
#define IOMUX_M33C1_PINCM58_PIPU_OFS             (17)                            /* !< PIPU Offset */
#define IOMUX_M33C1_PINCM58_PIPU_MASK            ((uint32_t)0x00020000U)         /* !< bit */
#define IOMUX_M33C1_PINCM58_PIPU_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM58_PIPU_ENABLE          ((uint32_t)0x00020000U)
/* IOMUX_M33C1_PINCM58[PIPD] Bits */
#define IOMUX_M33C1_PINCM58_PIPD_OFS             (16)                            /* !< PIPD Offset */
#define IOMUX_M33C1_PINCM58_PIPD_MASK            ((uint32_t)0x00010000U)         /* !< bit */
#define IOMUX_M33C1_PINCM58_PIPD_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM58_PIPD_ENABLE          ((uint32_t)0x00010000U)
/* IOMUX_M33C1_PINCM58[PC] Bits */
#define IOMUX_M33C1_PINCM58_PC_OFS               (7)                             /* !< PC Offset */
#define IOMUX_M33C1_PINCM58_PC_MASK              ((uint32_t)0x00000080U)         /* !< bit */
#define IOMUX_M33C1_PINCM58_PC_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM58_PC_CONNECTED         ((uint32_t)0x00000080U)
/* IOMUX_M33C1_PINCM58[PF] Bits */
#define IOMUX_M33C1_PINCM58_PF_OFS               (0)                             /* !< PF Offset */
#define IOMUX_M33C1_PINCM58_PF_MASK              ((uint32_t)0x00000003U)         /* !< bit */
#define IOMUX_M33C1_PINCM58_PF_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM58_PF_GPIO1_DIO27       ((uint32_t)0x00000001U)
#define IOMUX_M33C1_PINCM58_PF_GPTIMER16B2CCLP2_CCP1 ((uint32_t)0x00000002U)

/* IOMUX_M33C1_PINCM59 Bits */
/* IOMUX_M33C1_PINCM59[WCOMP] Bits */
#define IOMUX_M33C1_PINCM59_WCOMP_OFS            (28)                            /* !< WCOMP Offset */
#define IOMUX_M33C1_PINCM59_WCOMP_MASK           ((uint32_t)0x10000000U)         /* !< Wakeup Compare Value bit */
#define IOMUX_M33C1_PINCM59_WCOMP_MATCH0         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM59_WCOMP_MATCH1         ((uint32_t)0x10000000U)
/* IOMUX_M33C1_PINCM59[WUEN] Bits */
#define IOMUX_M33C1_PINCM59_WUEN_OFS             (27)                            /* !< WUEN Offset */
#define IOMUX_M33C1_PINCM59_WUEN_MASK            ((uint32_t)0x08000000U)         /* !< Wakeup Enable bit */
#define IOMUX_M33C1_PINCM59_WUEN_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM59_WUEN_ENABLE          ((uint32_t)0x08000000U)
/* IOMUX_M33C1_PINCM59[INV] Bits */
#define IOMUX_M33C1_PINCM59_INV_OFS              (26)                            /* !< INV Offset */
#define IOMUX_M33C1_PINCM59_INV_MASK             ((uint32_t)0x04000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM59_INV_DISABLE          ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM59_INV_ENABLE           ((uint32_t)0x04000000U)
/* IOMUX_M33C1_PINCM59[Z1] Bits */
#define IOMUX_M33C1_PINCM59_Z1_OFS               (25)                            /* !< Z1 Offset */
#define IOMUX_M33C1_PINCM59_Z1_MASK              ((uint32_t)0x02000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM59_Z1_DISABLE           ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM59_Z1_ENABLE            ((uint32_t)0x02000000U)
/* IOMUX_M33C1_PINCM59[INENA] Bits */
#define IOMUX_M33C1_PINCM59_INENA_OFS            (18)                            /* !< INENA Offset */
#define IOMUX_M33C1_PINCM59_INENA_MASK           ((uint32_t)0x00040000U)         /* !< bit */
#define IOMUX_M33C1_PINCM59_INENA_PADCORE        ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM59_INENA_CORE0          ((uint32_t)0x00040000U)
/* IOMUX_M33C1_PINCM59[PIPU] Bits */
#define IOMUX_M33C1_PINCM59_PIPU_OFS             (17)                            /* !< PIPU Offset */
#define IOMUX_M33C1_PINCM59_PIPU_MASK            ((uint32_t)0x00020000U)         /* !< bit */
#define IOMUX_M33C1_PINCM59_PIPU_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM59_PIPU_ENABLE          ((uint32_t)0x00020000U)
/* IOMUX_M33C1_PINCM59[PIPD] Bits */
#define IOMUX_M33C1_PINCM59_PIPD_OFS             (16)                            /* !< PIPD Offset */
#define IOMUX_M33C1_PINCM59_PIPD_MASK            ((uint32_t)0x00010000U)         /* !< bit */
#define IOMUX_M33C1_PINCM59_PIPD_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM59_PIPD_ENABLE          ((uint32_t)0x00010000U)
/* IOMUX_M33C1_PINCM59[PC] Bits */
#define IOMUX_M33C1_PINCM59_PC_OFS               (7)                             /* !< PC Offset */
#define IOMUX_M33C1_PINCM59_PC_MASK              ((uint32_t)0x00000080U)         /* !< bit */
#define IOMUX_M33C1_PINCM59_PC_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM59_PC_CONNECTED         ((uint32_t)0x00000080U)
/* IOMUX_M33C1_PINCM59[PF] Bits */
#define IOMUX_M33C1_PINCM59_PF_OFS               (0)                             /* !< PF Offset */
#define IOMUX_M33C1_PINCM59_PF_MASK              ((uint32_t)0x00000007U)         /* !< bit */
#define IOMUX_M33C1_PINCM59_PF_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM59_PF_GPIO0_DIO26       ((uint32_t)0x00000001U)
#define IOMUX_M33C1_PINCM59_PF_GPTIMER16B2CCLP3_CCP0 ((uint32_t)0x00000002U)
#define IOMUX_M33C1_PINCM59_PF_GPTIMER16BADV4CC0_FAULT0 ((uint32_t)0x00000003U)
#define IOMUX_M33C1_PINCM59_PF_MCAN0_CANTX       ((uint32_t)0x00000004U)
#define IOMUX_M33C1_PINCM59_PF_SPGSS1_U5_PICO_SDA_TX ((uint32_t)0x00000005U)
#define IOMUX_M33C1_PINCM59_PF_SPGSS1_U5_CS0_CTS ((uint32_t)0x00000006U)
#define IOMUX_M33C1_PINCM59_PF_SPGSS2_U2_PICO_SDA_TX ((uint32_t)0x00000007U)

/* IOMUX_M33C1_PINCM60 Bits */
/* IOMUX_M33C1_PINCM60[WCOMP] Bits */
#define IOMUX_M33C1_PINCM60_WCOMP_OFS            (28)                            /* !< WCOMP Offset */
#define IOMUX_M33C1_PINCM60_WCOMP_MASK           ((uint32_t)0x10000000U)         /* !< Wakeup Compare Value bit */
#define IOMUX_M33C1_PINCM60_WCOMP_MATCH0         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM60_WCOMP_MATCH1         ((uint32_t)0x10000000U)
/* IOMUX_M33C1_PINCM60[WUEN] Bits */
#define IOMUX_M33C1_PINCM60_WUEN_OFS             (27)                            /* !< WUEN Offset */
#define IOMUX_M33C1_PINCM60_WUEN_MASK            ((uint32_t)0x08000000U)         /* !< Wakeup Enable bit */
#define IOMUX_M33C1_PINCM60_WUEN_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM60_WUEN_ENABLE          ((uint32_t)0x08000000U)
/* IOMUX_M33C1_PINCM60[INV] Bits */
#define IOMUX_M33C1_PINCM60_INV_OFS              (26)                            /* !< INV Offset */
#define IOMUX_M33C1_PINCM60_INV_MASK             ((uint32_t)0x04000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM60_INV_DISABLE          ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM60_INV_ENABLE           ((uint32_t)0x04000000U)
/* IOMUX_M33C1_PINCM60[Z1] Bits */
#define IOMUX_M33C1_PINCM60_Z1_OFS               (25)                            /* !< Z1 Offset */
#define IOMUX_M33C1_PINCM60_Z1_MASK              ((uint32_t)0x02000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM60_Z1_DISABLE           ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM60_Z1_ENABLE            ((uint32_t)0x02000000U)
/* IOMUX_M33C1_PINCM60[INENA] Bits */
#define IOMUX_M33C1_PINCM60_INENA_OFS            (18)                            /* !< INENA Offset */
#define IOMUX_M33C1_PINCM60_INENA_MASK           ((uint32_t)0x00040000U)         /* !< bit */
#define IOMUX_M33C1_PINCM60_INENA_PADCORE        ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM60_INENA_CORE0          ((uint32_t)0x00040000U)
/* IOMUX_M33C1_PINCM60[PIPU] Bits */
#define IOMUX_M33C1_PINCM60_PIPU_OFS             (17)                            /* !< PIPU Offset */
#define IOMUX_M33C1_PINCM60_PIPU_MASK            ((uint32_t)0x00020000U)         /* !< bit */
#define IOMUX_M33C1_PINCM60_PIPU_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM60_PIPU_ENABLE          ((uint32_t)0x00020000U)
/* IOMUX_M33C1_PINCM60[PIPD] Bits */
#define IOMUX_M33C1_PINCM60_PIPD_OFS             (16)                            /* !< PIPD Offset */
#define IOMUX_M33C1_PINCM60_PIPD_MASK            ((uint32_t)0x00010000U)         /* !< bit */
#define IOMUX_M33C1_PINCM60_PIPD_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM60_PIPD_ENABLE          ((uint32_t)0x00010000U)
/* IOMUX_M33C1_PINCM60[PC] Bits */
#define IOMUX_M33C1_PINCM60_PC_OFS               (7)                             /* !< PC Offset */
#define IOMUX_M33C1_PINCM60_PC_MASK              ((uint32_t)0x00000080U)         /* !< bit */
#define IOMUX_M33C1_PINCM60_PC_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM60_PC_CONNECTED         ((uint32_t)0x00000080U)
/* IOMUX_M33C1_PINCM60[PF] Bits */
#define IOMUX_M33C1_PINCM60_PF_OFS               (0)                             /* !< PF Offset */
#define IOMUX_M33C1_PINCM60_PF_MASK              ((uint32_t)0x0000000FU)         /* !< bit */
#define IOMUX_M33C1_PINCM60_PF_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM60_PF_GPIO0_DIO27       ((uint32_t)0x00000001U)
#define IOMUX_M33C1_PINCM60_PF_GPTIMER16B2CCLP3_CCP1 ((uint32_t)0x00000002U)
#define IOMUX_M33C1_PINCM60_PF_LFSS_RTC_OUT      ((uint32_t)0x00000003U)
#define IOMUX_M33C1_PINCM60_PF_MCAN0_CANRX       ((uint32_t)0x00000004U)
#define IOMUX_M33C1_PINCM60_PF_GPTIMER16B2CCLP1_CCP0 ((uint32_t)0x00000005U)
#define IOMUX_M33C1_PINCM60_PF_GPTIMER16BADV4CC0_FAULT2 ((uint32_t)0x00000006U)
#define IOMUX_M33C1_PINCM60_PF_SPGSS2_U2_POCI_RTS ((uint32_t)0x00000007U)
#define IOMUX_M33C1_PINCM60_PF_SPGSS1_U0_CS1     ((uint32_t)0x00000008U)

/* IOMUX_M33C1_PINCM61 Bits */
/* IOMUX_M33C1_PINCM61[WCOMP] Bits */
#define IOMUX_M33C1_PINCM61_WCOMP_OFS            (28)                            /* !< WCOMP Offset */
#define IOMUX_M33C1_PINCM61_WCOMP_MASK           ((uint32_t)0x10000000U)         /* !< Wakeup Compare Value bit */
#define IOMUX_M33C1_PINCM61_WCOMP_MATCH0         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM61_WCOMP_MATCH1         ((uint32_t)0x10000000U)
/* IOMUX_M33C1_PINCM61[WUEN] Bits */
#define IOMUX_M33C1_PINCM61_WUEN_OFS             (27)                            /* !< WUEN Offset */
#define IOMUX_M33C1_PINCM61_WUEN_MASK            ((uint32_t)0x08000000U)         /* !< Wakeup Enable bit */
#define IOMUX_M33C1_PINCM61_WUEN_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM61_WUEN_ENABLE          ((uint32_t)0x08000000U)
/* IOMUX_M33C1_PINCM61[INV] Bits */
#define IOMUX_M33C1_PINCM61_INV_OFS              (26)                            /* !< INV Offset */
#define IOMUX_M33C1_PINCM61_INV_MASK             ((uint32_t)0x04000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM61_INV_DISABLE          ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM61_INV_ENABLE           ((uint32_t)0x04000000U)
/* IOMUX_M33C1_PINCM61[Z1] Bits */
#define IOMUX_M33C1_PINCM61_Z1_OFS               (25)                            /* !< Z1 Offset */
#define IOMUX_M33C1_PINCM61_Z1_MASK              ((uint32_t)0x02000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM61_Z1_DISABLE           ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM61_Z1_ENABLE            ((uint32_t)0x02000000U)
/* IOMUX_M33C1_PINCM61[INENA] Bits */
#define IOMUX_M33C1_PINCM61_INENA_OFS            (18)                            /* !< INENA Offset */
#define IOMUX_M33C1_PINCM61_INENA_MASK           ((uint32_t)0x00040000U)         /* !< bit */
#define IOMUX_M33C1_PINCM61_INENA_PADCORE        ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM61_INENA_CORE0          ((uint32_t)0x00040000U)
/* IOMUX_M33C1_PINCM61[PIPU] Bits */
#define IOMUX_M33C1_PINCM61_PIPU_OFS             (17)                            /* !< PIPU Offset */
#define IOMUX_M33C1_PINCM61_PIPU_MASK            ((uint32_t)0x00020000U)         /* !< bit */
#define IOMUX_M33C1_PINCM61_PIPU_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM61_PIPU_ENABLE          ((uint32_t)0x00020000U)
/* IOMUX_M33C1_PINCM61[PIPD] Bits */
#define IOMUX_M33C1_PINCM61_PIPD_OFS             (16)                            /* !< PIPD Offset */
#define IOMUX_M33C1_PINCM61_PIPD_MASK            ((uint32_t)0x00010000U)         /* !< bit */
#define IOMUX_M33C1_PINCM61_PIPD_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM61_PIPD_ENABLE          ((uint32_t)0x00010000U)
/* IOMUX_M33C1_PINCM61[PC] Bits */
#define IOMUX_M33C1_PINCM61_PC_OFS               (7)                             /* !< PC Offset */
#define IOMUX_M33C1_PINCM61_PC_MASK              ((uint32_t)0x00000080U)         /* !< bit */
#define IOMUX_M33C1_PINCM61_PC_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM61_PC_CONNECTED         ((uint32_t)0x00000080U)
/* IOMUX_M33C1_PINCM61[PF] Bits */
#define IOMUX_M33C1_PINCM61_PF_OFS               (0)                             /* !< PF Offset */
#define IOMUX_M33C1_PINCM61_PF_MASK              ((uint32_t)0x00000003U)         /* !< bit */
#define IOMUX_M33C1_PINCM61_PF_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM61_PF_GPIO2_DIO12       ((uint32_t)0x00000001U)
#define IOMUX_M33C1_PINCM61_PF_GPTIMER16BADV4CC1_CCP0 ((uint32_t)0x00000002U)

/* IOMUX_M33C1_PINCM62 Bits */
/* IOMUX_M33C1_PINCM62[WCOMP] Bits */
#define IOMUX_M33C1_PINCM62_WCOMP_OFS            (28)                            /* !< WCOMP Offset */
#define IOMUX_M33C1_PINCM62_WCOMP_MASK           ((uint32_t)0x10000000U)         /* !< Wakeup Compare Value bit */
#define IOMUX_M33C1_PINCM62_WCOMP_MATCH0         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM62_WCOMP_MATCH1         ((uint32_t)0x10000000U)
/* IOMUX_M33C1_PINCM62[WUEN] Bits */
#define IOMUX_M33C1_PINCM62_WUEN_OFS             (27)                            /* !< WUEN Offset */
#define IOMUX_M33C1_PINCM62_WUEN_MASK            ((uint32_t)0x08000000U)         /* !< Wakeup Enable bit */
#define IOMUX_M33C1_PINCM62_WUEN_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM62_WUEN_ENABLE          ((uint32_t)0x08000000U)
/* IOMUX_M33C1_PINCM62[INV] Bits */
#define IOMUX_M33C1_PINCM62_INV_OFS              (26)                            /* !< INV Offset */
#define IOMUX_M33C1_PINCM62_INV_MASK             ((uint32_t)0x04000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM62_INV_DISABLE          ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM62_INV_ENABLE           ((uint32_t)0x04000000U)
/* IOMUX_M33C1_PINCM62[Z1] Bits */
#define IOMUX_M33C1_PINCM62_Z1_OFS               (25)                            /* !< Z1 Offset */
#define IOMUX_M33C1_PINCM62_Z1_MASK              ((uint32_t)0x02000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM62_Z1_DISABLE           ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM62_Z1_ENABLE            ((uint32_t)0x02000000U)
/* IOMUX_M33C1_PINCM62[INENA] Bits */
#define IOMUX_M33C1_PINCM62_INENA_OFS            (18)                            /* !< INENA Offset */
#define IOMUX_M33C1_PINCM62_INENA_MASK           ((uint32_t)0x00040000U)         /* !< bit */
#define IOMUX_M33C1_PINCM62_INENA_PADCORE        ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM62_INENA_CORE0          ((uint32_t)0x00040000U)
/* IOMUX_M33C1_PINCM62[PIPU] Bits */
#define IOMUX_M33C1_PINCM62_PIPU_OFS             (17)                            /* !< PIPU Offset */
#define IOMUX_M33C1_PINCM62_PIPU_MASK            ((uint32_t)0x00020000U)         /* !< bit */
#define IOMUX_M33C1_PINCM62_PIPU_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM62_PIPU_ENABLE          ((uint32_t)0x00020000U)
/* IOMUX_M33C1_PINCM62[PIPD] Bits */
#define IOMUX_M33C1_PINCM62_PIPD_OFS             (16)                            /* !< PIPD Offset */
#define IOMUX_M33C1_PINCM62_PIPD_MASK            ((uint32_t)0x00010000U)         /* !< bit */
#define IOMUX_M33C1_PINCM62_PIPD_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM62_PIPD_ENABLE          ((uint32_t)0x00010000U)
/* IOMUX_M33C1_PINCM62[PC] Bits */
#define IOMUX_M33C1_PINCM62_PC_OFS               (7)                             /* !< PC Offset */
#define IOMUX_M33C1_PINCM62_PC_MASK              ((uint32_t)0x00000080U)         /* !< bit */
#define IOMUX_M33C1_PINCM62_PC_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM62_PC_CONNECTED         ((uint32_t)0x00000080U)
/* IOMUX_M33C1_PINCM62[PF] Bits */
#define IOMUX_M33C1_PINCM62_PF_OFS               (0)                             /* !< PF Offset */
#define IOMUX_M33C1_PINCM62_PF_MASK              ((uint32_t)0x00000007U)         /* !< bit */
#define IOMUX_M33C1_PINCM62_PF_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM62_PF_GPIO2_DIO13       ((uint32_t)0x00000001U)
#define IOMUX_M33C1_PINCM62_PF_GPTIMER16B2CCLP1_CCP0 ((uint32_t)0x00000002U)
#define IOMUX_M33C1_PINCM62_PF_SPGSS2_U0_PICO_SDA_TX ((uint32_t)0x00000003U)
#define IOMUX_M33C1_PINCM62_PF_SPGSS1_U4_RTS     ((uint32_t)0x00000004U)

/* IOMUX_M33C1_PINCM63 Bits */
/* IOMUX_M33C1_PINCM63[WCOMP] Bits */
#define IOMUX_M33C1_PINCM63_WCOMP_OFS            (28)                            /* !< WCOMP Offset */
#define IOMUX_M33C1_PINCM63_WCOMP_MASK           ((uint32_t)0x10000000U)         /* !< Wakeup Compare Value bit */
#define IOMUX_M33C1_PINCM63_WCOMP_MATCH0         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM63_WCOMP_MATCH1         ((uint32_t)0x10000000U)
/* IOMUX_M33C1_PINCM63[WUEN] Bits */
#define IOMUX_M33C1_PINCM63_WUEN_OFS             (27)                            /* !< WUEN Offset */
#define IOMUX_M33C1_PINCM63_WUEN_MASK            ((uint32_t)0x08000000U)         /* !< Wakeup Enable bit */
#define IOMUX_M33C1_PINCM63_WUEN_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM63_WUEN_ENABLE          ((uint32_t)0x08000000U)
/* IOMUX_M33C1_PINCM63[INV] Bits */
#define IOMUX_M33C1_PINCM63_INV_OFS              (26)                            /* !< INV Offset */
#define IOMUX_M33C1_PINCM63_INV_MASK             ((uint32_t)0x04000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM63_INV_DISABLE          ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM63_INV_ENABLE           ((uint32_t)0x04000000U)
/* IOMUX_M33C1_PINCM63[Z1] Bits */
#define IOMUX_M33C1_PINCM63_Z1_OFS               (25)                            /* !< Z1 Offset */
#define IOMUX_M33C1_PINCM63_Z1_MASK              ((uint32_t)0x02000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM63_Z1_DISABLE           ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM63_Z1_ENABLE            ((uint32_t)0x02000000U)
/* IOMUX_M33C1_PINCM63[INENA] Bits */
#define IOMUX_M33C1_PINCM63_INENA_OFS            (18)                            /* !< INENA Offset */
#define IOMUX_M33C1_PINCM63_INENA_MASK           ((uint32_t)0x00040000U)         /* !< bit */
#define IOMUX_M33C1_PINCM63_INENA_PADCORE        ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM63_INENA_CORE0          ((uint32_t)0x00040000U)
/* IOMUX_M33C1_PINCM63[PIPU] Bits */
#define IOMUX_M33C1_PINCM63_PIPU_OFS             (17)                            /* !< PIPU Offset */
#define IOMUX_M33C1_PINCM63_PIPU_MASK            ((uint32_t)0x00020000U)         /* !< bit */
#define IOMUX_M33C1_PINCM63_PIPU_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM63_PIPU_ENABLE          ((uint32_t)0x00020000U)
/* IOMUX_M33C1_PINCM63[PIPD] Bits */
#define IOMUX_M33C1_PINCM63_PIPD_OFS             (16)                            /* !< PIPD Offset */
#define IOMUX_M33C1_PINCM63_PIPD_MASK            ((uint32_t)0x00010000U)         /* !< bit */
#define IOMUX_M33C1_PINCM63_PIPD_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM63_PIPD_ENABLE          ((uint32_t)0x00010000U)
/* IOMUX_M33C1_PINCM63[PC] Bits */
#define IOMUX_M33C1_PINCM63_PC_OFS               (7)                             /* !< PC Offset */
#define IOMUX_M33C1_PINCM63_PC_MASK              ((uint32_t)0x00000080U)         /* !< bit */
#define IOMUX_M33C1_PINCM63_PC_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM63_PC_CONNECTED         ((uint32_t)0x00000080U)
/* IOMUX_M33C1_PINCM63[PF] Bits */
#define IOMUX_M33C1_PINCM63_PF_OFS               (0)                             /* !< PF Offset */
#define IOMUX_M33C1_PINCM63_PF_MASK              ((uint32_t)0x00000007U)         /* !< bit */
#define IOMUX_M33C1_PINCM63_PF_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM63_PF_GPIO2_DIO14       ((uint32_t)0x00000001U)
#define IOMUX_M33C1_PINCM63_PF_GPTIMER16B2CCLP1_CCP1 ((uint32_t)0x00000002U)
#define IOMUX_M33C1_PINCM63_PF_SPGSS2_U0_SCLK_SCL_RX ((uint32_t)0x00000003U)
#define IOMUX_M33C1_PINCM63_PF_SPGSS1_U4_CTS     ((uint32_t)0x00000004U)

/* IOMUX_M33C1_PINCM64 Bits */
/* IOMUX_M33C1_PINCM64[WCOMP] Bits */
#define IOMUX_M33C1_PINCM64_WCOMP_OFS            (28)                            /* !< WCOMP Offset */
#define IOMUX_M33C1_PINCM64_WCOMP_MASK           ((uint32_t)0x10000000U)         /* !< Wakeup Compare Value bit */
#define IOMUX_M33C1_PINCM64_WCOMP_MATCH0         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM64_WCOMP_MATCH1         ((uint32_t)0x10000000U)
/* IOMUX_M33C1_PINCM64[WUEN] Bits */
#define IOMUX_M33C1_PINCM64_WUEN_OFS             (27)                            /* !< WUEN Offset */
#define IOMUX_M33C1_PINCM64_WUEN_MASK            ((uint32_t)0x08000000U)         /* !< Wakeup Enable bit */
#define IOMUX_M33C1_PINCM64_WUEN_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM64_WUEN_ENABLE          ((uint32_t)0x08000000U)
/* IOMUX_M33C1_PINCM64[INV] Bits */
#define IOMUX_M33C1_PINCM64_INV_OFS              (26)                            /* !< INV Offset */
#define IOMUX_M33C1_PINCM64_INV_MASK             ((uint32_t)0x04000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM64_INV_DISABLE          ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM64_INV_ENABLE           ((uint32_t)0x04000000U)
/* IOMUX_M33C1_PINCM64[Z1] Bits */
#define IOMUX_M33C1_PINCM64_Z1_OFS               (25)                            /* !< Z1 Offset */
#define IOMUX_M33C1_PINCM64_Z1_MASK              ((uint32_t)0x02000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM64_Z1_DISABLE           ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM64_Z1_ENABLE            ((uint32_t)0x02000000U)
/* IOMUX_M33C1_PINCM64[INENA] Bits */
#define IOMUX_M33C1_PINCM64_INENA_OFS            (18)                            /* !< INENA Offset */
#define IOMUX_M33C1_PINCM64_INENA_MASK           ((uint32_t)0x00040000U)         /* !< bit */
#define IOMUX_M33C1_PINCM64_INENA_PADCORE        ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM64_INENA_CORE0          ((uint32_t)0x00040000U)
/* IOMUX_M33C1_PINCM64[PIPU] Bits */
#define IOMUX_M33C1_PINCM64_PIPU_OFS             (17)                            /* !< PIPU Offset */
#define IOMUX_M33C1_PINCM64_PIPU_MASK            ((uint32_t)0x00020000U)         /* !< bit */
#define IOMUX_M33C1_PINCM64_PIPU_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM64_PIPU_ENABLE          ((uint32_t)0x00020000U)
/* IOMUX_M33C1_PINCM64[PIPD] Bits */
#define IOMUX_M33C1_PINCM64_PIPD_OFS             (16)                            /* !< PIPD Offset */
#define IOMUX_M33C1_PINCM64_PIPD_MASK            ((uint32_t)0x00010000U)         /* !< bit */
#define IOMUX_M33C1_PINCM64_PIPD_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM64_PIPD_ENABLE          ((uint32_t)0x00010000U)
/* IOMUX_M33C1_PINCM64[PC] Bits */
#define IOMUX_M33C1_PINCM64_PC_OFS               (7)                             /* !< PC Offset */
#define IOMUX_M33C1_PINCM64_PC_MASK              ((uint32_t)0x00000080U)         /* !< bit */
#define IOMUX_M33C1_PINCM64_PC_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM64_PC_CONNECTED         ((uint32_t)0x00000080U)
/* IOMUX_M33C1_PINCM64[PF] Bits */
#define IOMUX_M33C1_PINCM64_PF_OFS               (0)                             /* !< PF Offset */
#define IOMUX_M33C1_PINCM64_PF_MASK              ((uint32_t)0x00000003U)         /* !< bit */
#define IOMUX_M33C1_PINCM64_PF_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM64_PF_GPIO2_DIO15       ((uint32_t)0x00000001U)
#define IOMUX_M33C1_PINCM64_PF_GPTIMER16BADV4CC1_CCP0_CMPL ((uint32_t)0x00000002U)

/* IOMUX_M33C1_PINCM65 Bits */
/* IOMUX_M33C1_PINCM65[WCOMP] Bits */
#define IOMUX_M33C1_PINCM65_WCOMP_OFS            (28)                            /* !< WCOMP Offset */
#define IOMUX_M33C1_PINCM65_WCOMP_MASK           ((uint32_t)0x10000000U)         /* !< Wakeup Compare Value bit */
#define IOMUX_M33C1_PINCM65_WCOMP_MATCH0         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM65_WCOMP_MATCH1         ((uint32_t)0x10000000U)
/* IOMUX_M33C1_PINCM65[WUEN] Bits */
#define IOMUX_M33C1_PINCM65_WUEN_OFS             (27)                            /* !< WUEN Offset */
#define IOMUX_M33C1_PINCM65_WUEN_MASK            ((uint32_t)0x08000000U)         /* !< Wakeup Enable bit */
#define IOMUX_M33C1_PINCM65_WUEN_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM65_WUEN_ENABLE          ((uint32_t)0x08000000U)
/* IOMUX_M33C1_PINCM65[INV] Bits */
#define IOMUX_M33C1_PINCM65_INV_OFS              (26)                            /* !< INV Offset */
#define IOMUX_M33C1_PINCM65_INV_MASK             ((uint32_t)0x04000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM65_INV_DISABLE          ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM65_INV_ENABLE           ((uint32_t)0x04000000U)
/* IOMUX_M33C1_PINCM65[Z1] Bits */
#define IOMUX_M33C1_PINCM65_Z1_OFS               (25)                            /* !< Z1 Offset */
#define IOMUX_M33C1_PINCM65_Z1_MASK              ((uint32_t)0x02000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM65_Z1_DISABLE           ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM65_Z1_ENABLE            ((uint32_t)0x02000000U)
/* IOMUX_M33C1_PINCM65[INENA] Bits */
#define IOMUX_M33C1_PINCM65_INENA_OFS            (18)                            /* !< INENA Offset */
#define IOMUX_M33C1_PINCM65_INENA_MASK           ((uint32_t)0x00040000U)         /* !< bit */
#define IOMUX_M33C1_PINCM65_INENA_PADCORE        ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM65_INENA_CORE0          ((uint32_t)0x00040000U)
/* IOMUX_M33C1_PINCM65[PIPU] Bits */
#define IOMUX_M33C1_PINCM65_PIPU_OFS             (17)                            /* !< PIPU Offset */
#define IOMUX_M33C1_PINCM65_PIPU_MASK            ((uint32_t)0x00020000U)         /* !< bit */
#define IOMUX_M33C1_PINCM65_PIPU_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM65_PIPU_ENABLE          ((uint32_t)0x00020000U)
/* IOMUX_M33C1_PINCM65[PIPD] Bits */
#define IOMUX_M33C1_PINCM65_PIPD_OFS             (16)                            /* !< PIPD Offset */
#define IOMUX_M33C1_PINCM65_PIPD_MASK            ((uint32_t)0x00010000U)         /* !< bit */
#define IOMUX_M33C1_PINCM65_PIPD_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM65_PIPD_ENABLE          ((uint32_t)0x00010000U)
/* IOMUX_M33C1_PINCM65[PC] Bits */
#define IOMUX_M33C1_PINCM65_PC_OFS               (7)                             /* !< PC Offset */
#define IOMUX_M33C1_PINCM65_PC_MASK              ((uint32_t)0x00000080U)         /* !< bit */
#define IOMUX_M33C1_PINCM65_PC_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM65_PC_CONNECTED         ((uint32_t)0x00000080U)
/* IOMUX_M33C1_PINCM65[PF] Bits */
#define IOMUX_M33C1_PINCM65_PF_OFS               (0)                             /* !< PF Offset */
#define IOMUX_M33C1_PINCM65_PF_MASK              ((uint32_t)0x00000007U)         /* !< bit */
#define IOMUX_M33C1_PINCM65_PF_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM65_PF_GPIO1_DIO28       ((uint32_t)0x00000001U)
#define IOMUX_M33C1_PINCM65_PF_GPTIMER16BADV4CC0_CCP0 ((uint32_t)0x00000002U)
#define IOMUX_M33C1_PINCM65_PF_SPGSS2_U2_SCLK_SCL_RX ((uint32_t)0x00000003U)
#define IOMUX_M33C1_PINCM65_PF_SPGSS1_U5_CS0_CTS ((uint32_t)0x00000004U)

/* IOMUX_M33C1_PINCM66 Bits */
/* IOMUX_M33C1_PINCM66[WCOMP] Bits */
#define IOMUX_M33C1_PINCM66_WCOMP_OFS            (28)                            /* !< WCOMP Offset */
#define IOMUX_M33C1_PINCM66_WCOMP_MASK           ((uint32_t)0x10000000U)         /* !< Wakeup Compare Value bit */
#define IOMUX_M33C1_PINCM66_WCOMP_MATCH0         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM66_WCOMP_MATCH1         ((uint32_t)0x10000000U)
/* IOMUX_M33C1_PINCM66[WUEN] Bits */
#define IOMUX_M33C1_PINCM66_WUEN_OFS             (27)                            /* !< WUEN Offset */
#define IOMUX_M33C1_PINCM66_WUEN_MASK            ((uint32_t)0x08000000U)         /* !< Wakeup Enable bit */
#define IOMUX_M33C1_PINCM66_WUEN_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM66_WUEN_ENABLE          ((uint32_t)0x08000000U)
/* IOMUX_M33C1_PINCM66[INV] Bits */
#define IOMUX_M33C1_PINCM66_INV_OFS              (26)                            /* !< INV Offset */
#define IOMUX_M33C1_PINCM66_INV_MASK             ((uint32_t)0x04000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM66_INV_DISABLE          ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM66_INV_ENABLE           ((uint32_t)0x04000000U)
/* IOMUX_M33C1_PINCM66[Z1] Bits */
#define IOMUX_M33C1_PINCM66_Z1_OFS               (25)                            /* !< Z1 Offset */
#define IOMUX_M33C1_PINCM66_Z1_MASK              ((uint32_t)0x02000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM66_Z1_DISABLE           ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM66_Z1_ENABLE            ((uint32_t)0x02000000U)
/* IOMUX_M33C1_PINCM66[INENA] Bits */
#define IOMUX_M33C1_PINCM66_INENA_OFS            (18)                            /* !< INENA Offset */
#define IOMUX_M33C1_PINCM66_INENA_MASK           ((uint32_t)0x00040000U)         /* !< bit */
#define IOMUX_M33C1_PINCM66_INENA_PADCORE        ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM66_INENA_CORE0          ((uint32_t)0x00040000U)
/* IOMUX_M33C1_PINCM66[PIPU] Bits */
#define IOMUX_M33C1_PINCM66_PIPU_OFS             (17)                            /* !< PIPU Offset */
#define IOMUX_M33C1_PINCM66_PIPU_MASK            ((uint32_t)0x00020000U)         /* !< bit */
#define IOMUX_M33C1_PINCM66_PIPU_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM66_PIPU_ENABLE          ((uint32_t)0x00020000U)
/* IOMUX_M33C1_PINCM66[PIPD] Bits */
#define IOMUX_M33C1_PINCM66_PIPD_OFS             (16)                            /* !< PIPD Offset */
#define IOMUX_M33C1_PINCM66_PIPD_MASK            ((uint32_t)0x00010000U)         /* !< bit */
#define IOMUX_M33C1_PINCM66_PIPD_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM66_PIPD_ENABLE          ((uint32_t)0x00010000U)
/* IOMUX_M33C1_PINCM66[PC] Bits */
#define IOMUX_M33C1_PINCM66_PC_OFS               (7)                             /* !< PC Offset */
#define IOMUX_M33C1_PINCM66_PC_MASK              ((uint32_t)0x00000080U)         /* !< bit */
#define IOMUX_M33C1_PINCM66_PC_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM66_PC_CONNECTED         ((uint32_t)0x00000080U)
/* IOMUX_M33C1_PINCM66[PF] Bits */
#define IOMUX_M33C1_PINCM66_PF_OFS               (0)                             /* !< PF Offset */
#define IOMUX_M33C1_PINCM66_PF_MASK              ((uint32_t)0x00000007U)         /* !< bit */
#define IOMUX_M33C1_PINCM66_PF_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM66_PF_GPIO1_DIO29       ((uint32_t)0x00000001U)
#define IOMUX_M33C1_PINCM66_PF_GPTIMER16BADV4CC0_CCP0_CMPL ((uint32_t)0x00000002U)
#define IOMUX_M33C1_PINCM66_PF_GPTIMER16B2CCQEILP1_CCP0 ((uint32_t)0x00000003U)
#define IOMUX_M33C1_PINCM66_PF_SPGSS2_U2_PICO_SDA_TX ((uint32_t)0x00000004U)
#define IOMUX_M33C1_PINCM66_PF_SPGSS1_U5_POCI_RTS ((uint32_t)0x00000005U)

/* IOMUX_M33C1_PINCM67 Bits */
/* IOMUX_M33C1_PINCM67[WCOMP] Bits */
#define IOMUX_M33C1_PINCM67_WCOMP_OFS            (28)                            /* !< WCOMP Offset */
#define IOMUX_M33C1_PINCM67_WCOMP_MASK           ((uint32_t)0x10000000U)         /* !< Wakeup Compare Value bit */
#define IOMUX_M33C1_PINCM67_WCOMP_MATCH0         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM67_WCOMP_MATCH1         ((uint32_t)0x10000000U)
/* IOMUX_M33C1_PINCM67[WUEN] Bits */
#define IOMUX_M33C1_PINCM67_WUEN_OFS             (27)                            /* !< WUEN Offset */
#define IOMUX_M33C1_PINCM67_WUEN_MASK            ((uint32_t)0x08000000U)         /* !< Wakeup Enable bit */
#define IOMUX_M33C1_PINCM67_WUEN_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM67_WUEN_ENABLE          ((uint32_t)0x08000000U)
/* IOMUX_M33C1_PINCM67[INV] Bits */
#define IOMUX_M33C1_PINCM67_INV_OFS              (26)                            /* !< INV Offset */
#define IOMUX_M33C1_PINCM67_INV_MASK             ((uint32_t)0x04000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM67_INV_DISABLE          ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM67_INV_ENABLE           ((uint32_t)0x04000000U)
/* IOMUX_M33C1_PINCM67[Z1] Bits */
#define IOMUX_M33C1_PINCM67_Z1_OFS               (25)                            /* !< Z1 Offset */
#define IOMUX_M33C1_PINCM67_Z1_MASK              ((uint32_t)0x02000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM67_Z1_DISABLE           ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM67_Z1_ENABLE            ((uint32_t)0x02000000U)
/* IOMUX_M33C1_PINCM67[INENA] Bits */
#define IOMUX_M33C1_PINCM67_INENA_OFS            (18)                            /* !< INENA Offset */
#define IOMUX_M33C1_PINCM67_INENA_MASK           ((uint32_t)0x00040000U)         /* !< bit */
#define IOMUX_M33C1_PINCM67_INENA_PADCORE        ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM67_INENA_CORE0          ((uint32_t)0x00040000U)
/* IOMUX_M33C1_PINCM67[PIPU] Bits */
#define IOMUX_M33C1_PINCM67_PIPU_OFS             (17)                            /* !< PIPU Offset */
#define IOMUX_M33C1_PINCM67_PIPU_MASK            ((uint32_t)0x00020000U)         /* !< bit */
#define IOMUX_M33C1_PINCM67_PIPU_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM67_PIPU_ENABLE          ((uint32_t)0x00020000U)
/* IOMUX_M33C1_PINCM67[PIPD] Bits */
#define IOMUX_M33C1_PINCM67_PIPD_OFS             (16)                            /* !< PIPD Offset */
#define IOMUX_M33C1_PINCM67_PIPD_MASK            ((uint32_t)0x00010000U)         /* !< bit */
#define IOMUX_M33C1_PINCM67_PIPD_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM67_PIPD_ENABLE          ((uint32_t)0x00010000U)
/* IOMUX_M33C1_PINCM67[PC] Bits */
#define IOMUX_M33C1_PINCM67_PC_OFS               (7)                             /* !< PC Offset */
#define IOMUX_M33C1_PINCM67_PC_MASK              ((uint32_t)0x00000080U)         /* !< bit */
#define IOMUX_M33C1_PINCM67_PC_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM67_PC_CONNECTED         ((uint32_t)0x00000080U)
/* IOMUX_M33C1_PINCM67[PF] Bits */
#define IOMUX_M33C1_PINCM67_PF_OFS               (0)                             /* !< PF Offset */
#define IOMUX_M33C1_PINCM67_PF_MASK              ((uint32_t)0x00000007U)         /* !< bit */
#define IOMUX_M33C1_PINCM67_PF_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM67_PF_GPIO1_DIO30       ((uint32_t)0x00000001U)
#define IOMUX_M33C1_PINCM67_PF_GPTIMER16BADV4CC0_CCP1 ((uint32_t)0x00000002U)
#define IOMUX_M33C1_PINCM67_PF_GPTIMER16B2CCQEILP1_CCP1 ((uint32_t)0x00000003U)
#define IOMUX_M33C1_PINCM67_PF_SPGSS2_U2_CS0_CTS ((uint32_t)0x00000004U)
#define IOMUX_M33C1_PINCM67_PF_SPGSS1_U5_PICO_SDA_TX ((uint32_t)0x00000005U)

/* IOMUX_M33C1_PINCM68 Bits */
/* IOMUX_M33C1_PINCM68[WCOMP] Bits */
#define IOMUX_M33C1_PINCM68_WCOMP_OFS            (28)                            /* !< WCOMP Offset */
#define IOMUX_M33C1_PINCM68_WCOMP_MASK           ((uint32_t)0x10000000U)         /* !< Wakeup Compare Value bit */
#define IOMUX_M33C1_PINCM68_WCOMP_MATCH0         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM68_WCOMP_MATCH1         ((uint32_t)0x10000000U)
/* IOMUX_M33C1_PINCM68[WUEN] Bits */
#define IOMUX_M33C1_PINCM68_WUEN_OFS             (27)                            /* !< WUEN Offset */
#define IOMUX_M33C1_PINCM68_WUEN_MASK            ((uint32_t)0x08000000U)         /* !< Wakeup Enable bit */
#define IOMUX_M33C1_PINCM68_WUEN_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM68_WUEN_ENABLE          ((uint32_t)0x08000000U)
/* IOMUX_M33C1_PINCM68[INV] Bits */
#define IOMUX_M33C1_PINCM68_INV_OFS              (26)                            /* !< INV Offset */
#define IOMUX_M33C1_PINCM68_INV_MASK             ((uint32_t)0x04000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM68_INV_DISABLE          ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM68_INV_ENABLE           ((uint32_t)0x04000000U)
/* IOMUX_M33C1_PINCM68[Z1] Bits */
#define IOMUX_M33C1_PINCM68_Z1_OFS               (25)                            /* !< Z1 Offset */
#define IOMUX_M33C1_PINCM68_Z1_MASK              ((uint32_t)0x02000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM68_Z1_DISABLE           ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM68_Z1_ENABLE            ((uint32_t)0x02000000U)
/* IOMUX_M33C1_PINCM68[INENA] Bits */
#define IOMUX_M33C1_PINCM68_INENA_OFS            (18)                            /* !< INENA Offset */
#define IOMUX_M33C1_PINCM68_INENA_MASK           ((uint32_t)0x00040000U)         /* !< bit */
#define IOMUX_M33C1_PINCM68_INENA_PADCORE        ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM68_INENA_CORE0          ((uint32_t)0x00040000U)
/* IOMUX_M33C1_PINCM68[PIPU] Bits */
#define IOMUX_M33C1_PINCM68_PIPU_OFS             (17)                            /* !< PIPU Offset */
#define IOMUX_M33C1_PINCM68_PIPU_MASK            ((uint32_t)0x00020000U)         /* !< bit */
#define IOMUX_M33C1_PINCM68_PIPU_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM68_PIPU_ENABLE          ((uint32_t)0x00020000U)
/* IOMUX_M33C1_PINCM68[PIPD] Bits */
#define IOMUX_M33C1_PINCM68_PIPD_OFS             (16)                            /* !< PIPD Offset */
#define IOMUX_M33C1_PINCM68_PIPD_MASK            ((uint32_t)0x00010000U)         /* !< bit */
#define IOMUX_M33C1_PINCM68_PIPD_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM68_PIPD_ENABLE          ((uint32_t)0x00010000U)
/* IOMUX_M33C1_PINCM68[PC] Bits */
#define IOMUX_M33C1_PINCM68_PC_OFS               (7)                             /* !< PC Offset */
#define IOMUX_M33C1_PINCM68_PC_MASK              ((uint32_t)0x00000080U)         /* !< bit */
#define IOMUX_M33C1_PINCM68_PC_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM68_PC_CONNECTED         ((uint32_t)0x00000080U)
/* IOMUX_M33C1_PINCM68[PF] Bits */
#define IOMUX_M33C1_PINCM68_PF_OFS               (0)                             /* !< PF Offset */
#define IOMUX_M33C1_PINCM68_PF_MASK              ((uint32_t)0x00000007U)         /* !< bit */
#define IOMUX_M33C1_PINCM68_PF_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM68_PF_GPIO1_DIO31       ((uint32_t)0x00000001U)
#define IOMUX_M33C1_PINCM68_PF_GPTIMER16B2CCQEILP0_IDX ((uint32_t)0x00000002U)
#define IOMUX_M33C1_PINCM68_PF_GPTIMER16BADV4CC0_CCP1_CMPL ((uint32_t)0x00000003U)
#define IOMUX_M33C1_PINCM68_PF_SPGSS2_U2_POCI_RTS ((uint32_t)0x00000004U)
#define IOMUX_M33C1_PINCM68_PF_SPGSS1_U5_SCLK_SCL_RX ((uint32_t)0x00000005U)
#define IOMUX_M33C1_PINCM68_PF_GPTIMER16B2CCQEILP1_IDX ((uint32_t)0x00000006U)

/* IOMUX_M33C1_PINCM69 Bits */
/* IOMUX_M33C1_PINCM69[WCOMP] Bits */
#define IOMUX_M33C1_PINCM69_WCOMP_OFS            (28)                            /* !< WCOMP Offset */
#define IOMUX_M33C1_PINCM69_WCOMP_MASK           ((uint32_t)0x10000000U)         /* !< Wakeup Compare Value bit */
#define IOMUX_M33C1_PINCM69_WCOMP_MATCH0         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM69_WCOMP_MATCH1         ((uint32_t)0x10000000U)
/* IOMUX_M33C1_PINCM69[WUEN] Bits */
#define IOMUX_M33C1_PINCM69_WUEN_OFS             (27)                            /* !< WUEN Offset */
#define IOMUX_M33C1_PINCM69_WUEN_MASK            ((uint32_t)0x08000000U)         /* !< Wakeup Enable bit */
#define IOMUX_M33C1_PINCM69_WUEN_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM69_WUEN_ENABLE          ((uint32_t)0x08000000U)
/* IOMUX_M33C1_PINCM69[INV] Bits */
#define IOMUX_M33C1_PINCM69_INV_OFS              (26)                            /* !< INV Offset */
#define IOMUX_M33C1_PINCM69_INV_MASK             ((uint32_t)0x04000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM69_INV_DISABLE          ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM69_INV_ENABLE           ((uint32_t)0x04000000U)
/* IOMUX_M33C1_PINCM69[Z1] Bits */
#define IOMUX_M33C1_PINCM69_Z1_OFS               (25)                            /* !< Z1 Offset */
#define IOMUX_M33C1_PINCM69_Z1_MASK              ((uint32_t)0x02000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM69_Z1_DISABLE           ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM69_Z1_ENABLE            ((uint32_t)0x02000000U)
/* IOMUX_M33C1_PINCM69[INENA] Bits */
#define IOMUX_M33C1_PINCM69_INENA_OFS            (18)                            /* !< INENA Offset */
#define IOMUX_M33C1_PINCM69_INENA_MASK           ((uint32_t)0x00040000U)         /* !< bit */
#define IOMUX_M33C1_PINCM69_INENA_PADCORE        ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM69_INENA_CORE0          ((uint32_t)0x00040000U)
/* IOMUX_M33C1_PINCM69[PIPU] Bits */
#define IOMUX_M33C1_PINCM69_PIPU_OFS             (17)                            /* !< PIPU Offset */
#define IOMUX_M33C1_PINCM69_PIPU_MASK            ((uint32_t)0x00020000U)         /* !< bit */
#define IOMUX_M33C1_PINCM69_PIPU_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM69_PIPU_ENABLE          ((uint32_t)0x00020000U)
/* IOMUX_M33C1_PINCM69[PIPD] Bits */
#define IOMUX_M33C1_PINCM69_PIPD_OFS             (16)                            /* !< PIPD Offset */
#define IOMUX_M33C1_PINCM69_PIPD_MASK            ((uint32_t)0x00010000U)         /* !< bit */
#define IOMUX_M33C1_PINCM69_PIPD_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM69_PIPD_ENABLE          ((uint32_t)0x00010000U)
/* IOMUX_M33C1_PINCM69[PC] Bits */
#define IOMUX_M33C1_PINCM69_PC_OFS               (7)                             /* !< PC Offset */
#define IOMUX_M33C1_PINCM69_PC_MASK              ((uint32_t)0x00000080U)         /* !< bit */
#define IOMUX_M33C1_PINCM69_PC_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM69_PC_CONNECTED         ((uint32_t)0x00000080U)
/* IOMUX_M33C1_PINCM69[PF] Bits */
#define IOMUX_M33C1_PINCM69_PF_OFS               (0)                             /* !< PF Offset */
#define IOMUX_M33C1_PINCM69_PF_MASK              ((uint32_t)0x00000001U)         /* !< bit */
#define IOMUX_M33C1_PINCM69_PF_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM69_PF_GPIO2_DIO16       ((uint32_t)0x00000001U)

/* IOMUX_M33C1_PINCM70 Bits */
/* IOMUX_M33C1_PINCM70[WCOMP] Bits */
#define IOMUX_M33C1_PINCM70_WCOMP_OFS            (28)                            /* !< WCOMP Offset */
#define IOMUX_M33C1_PINCM70_WCOMP_MASK           ((uint32_t)0x10000000U)         /* !< Wakeup Compare Value bit */
#define IOMUX_M33C1_PINCM70_WCOMP_MATCH0         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM70_WCOMP_MATCH1         ((uint32_t)0x10000000U)
/* IOMUX_M33C1_PINCM70[WUEN] Bits */
#define IOMUX_M33C1_PINCM70_WUEN_OFS             (27)                            /* !< WUEN Offset */
#define IOMUX_M33C1_PINCM70_WUEN_MASK            ((uint32_t)0x08000000U)         /* !< Wakeup Enable bit */
#define IOMUX_M33C1_PINCM70_WUEN_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM70_WUEN_ENABLE          ((uint32_t)0x08000000U)
/* IOMUX_M33C1_PINCM70[INV] Bits */
#define IOMUX_M33C1_PINCM70_INV_OFS              (26)                            /* !< INV Offset */
#define IOMUX_M33C1_PINCM70_INV_MASK             ((uint32_t)0x04000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM70_INV_DISABLE          ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM70_INV_ENABLE           ((uint32_t)0x04000000U)
/* IOMUX_M33C1_PINCM70[Z1] Bits */
#define IOMUX_M33C1_PINCM70_Z1_OFS               (25)                            /* !< Z1 Offset */
#define IOMUX_M33C1_PINCM70_Z1_MASK              ((uint32_t)0x02000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM70_Z1_DISABLE           ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM70_Z1_ENABLE            ((uint32_t)0x02000000U)
/* IOMUX_M33C1_PINCM70[INENA] Bits */
#define IOMUX_M33C1_PINCM70_INENA_OFS            (18)                            /* !< INENA Offset */
#define IOMUX_M33C1_PINCM70_INENA_MASK           ((uint32_t)0x00040000U)         /* !< bit */
#define IOMUX_M33C1_PINCM70_INENA_PADCORE        ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM70_INENA_CORE0          ((uint32_t)0x00040000U)
/* IOMUX_M33C1_PINCM70[PIPU] Bits */
#define IOMUX_M33C1_PINCM70_PIPU_OFS             (17)                            /* !< PIPU Offset */
#define IOMUX_M33C1_PINCM70_PIPU_MASK            ((uint32_t)0x00020000U)         /* !< bit */
#define IOMUX_M33C1_PINCM70_PIPU_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM70_PIPU_ENABLE          ((uint32_t)0x00020000U)
/* IOMUX_M33C1_PINCM70[PIPD] Bits */
#define IOMUX_M33C1_PINCM70_PIPD_OFS             (16)                            /* !< PIPD Offset */
#define IOMUX_M33C1_PINCM70_PIPD_MASK            ((uint32_t)0x00010000U)         /* !< bit */
#define IOMUX_M33C1_PINCM70_PIPD_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM70_PIPD_ENABLE          ((uint32_t)0x00010000U)
/* IOMUX_M33C1_PINCM70[PC] Bits */
#define IOMUX_M33C1_PINCM70_PC_OFS               (7)                             /* !< PC Offset */
#define IOMUX_M33C1_PINCM70_PC_MASK              ((uint32_t)0x00000080U)         /* !< bit */
#define IOMUX_M33C1_PINCM70_PC_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM70_PC_CONNECTED         ((uint32_t)0x00000080U)
/* IOMUX_M33C1_PINCM70[PF] Bits */
#define IOMUX_M33C1_PINCM70_PF_OFS               (0)                             /* !< PF Offset */
#define IOMUX_M33C1_PINCM70_PF_MASK              ((uint32_t)0x00000003U)         /* !< bit */
#define IOMUX_M33C1_PINCM70_PF_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM70_PF_GPIO2_DIO17       ((uint32_t)0x00000001U)
#define IOMUX_M33C1_PINCM70_PF_GPTIMER16BADV4CC1_CCP1 ((uint32_t)0x00000002U)

/* IOMUX_M33C1_PINCM71 Bits */
/* IOMUX_M33C1_PINCM71[WCOMP] Bits */
#define IOMUX_M33C1_PINCM71_WCOMP_OFS            (28)                            /* !< WCOMP Offset */
#define IOMUX_M33C1_PINCM71_WCOMP_MASK           ((uint32_t)0x10000000U)         /* !< Wakeup Compare Value bit */
#define IOMUX_M33C1_PINCM71_WCOMP_MATCH0         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM71_WCOMP_MATCH1         ((uint32_t)0x10000000U)
/* IOMUX_M33C1_PINCM71[WUEN] Bits */
#define IOMUX_M33C1_PINCM71_WUEN_OFS             (27)                            /* !< WUEN Offset */
#define IOMUX_M33C1_PINCM71_WUEN_MASK            ((uint32_t)0x08000000U)         /* !< Wakeup Enable bit */
#define IOMUX_M33C1_PINCM71_WUEN_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM71_WUEN_ENABLE          ((uint32_t)0x08000000U)
/* IOMUX_M33C1_PINCM71[INV] Bits */
#define IOMUX_M33C1_PINCM71_INV_OFS              (26)                            /* !< INV Offset */
#define IOMUX_M33C1_PINCM71_INV_MASK             ((uint32_t)0x04000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM71_INV_DISABLE          ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM71_INV_ENABLE           ((uint32_t)0x04000000U)
/* IOMUX_M33C1_PINCM71[Z1] Bits */
#define IOMUX_M33C1_PINCM71_Z1_OFS               (25)                            /* !< Z1 Offset */
#define IOMUX_M33C1_PINCM71_Z1_MASK              ((uint32_t)0x02000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM71_Z1_DISABLE           ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM71_Z1_ENABLE            ((uint32_t)0x02000000U)
/* IOMUX_M33C1_PINCM71[INENA] Bits */
#define IOMUX_M33C1_PINCM71_INENA_OFS            (18)                            /* !< INENA Offset */
#define IOMUX_M33C1_PINCM71_INENA_MASK           ((uint32_t)0x00040000U)         /* !< bit */
#define IOMUX_M33C1_PINCM71_INENA_PADCORE        ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM71_INENA_CORE0          ((uint32_t)0x00040000U)
/* IOMUX_M33C1_PINCM71[PIPU] Bits */
#define IOMUX_M33C1_PINCM71_PIPU_OFS             (17)                            /* !< PIPU Offset */
#define IOMUX_M33C1_PINCM71_PIPU_MASK            ((uint32_t)0x00020000U)         /* !< bit */
#define IOMUX_M33C1_PINCM71_PIPU_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM71_PIPU_ENABLE          ((uint32_t)0x00020000U)
/* IOMUX_M33C1_PINCM71[PIPD] Bits */
#define IOMUX_M33C1_PINCM71_PIPD_OFS             (16)                            /* !< PIPD Offset */
#define IOMUX_M33C1_PINCM71_PIPD_MASK            ((uint32_t)0x00010000U)         /* !< bit */
#define IOMUX_M33C1_PINCM71_PIPD_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM71_PIPD_ENABLE          ((uint32_t)0x00010000U)
/* IOMUX_M33C1_PINCM71[PC] Bits */
#define IOMUX_M33C1_PINCM71_PC_OFS               (7)                             /* !< PC Offset */
#define IOMUX_M33C1_PINCM71_PC_MASK              ((uint32_t)0x00000080U)         /* !< bit */
#define IOMUX_M33C1_PINCM71_PC_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM71_PC_CONNECTED         ((uint32_t)0x00000080U)
/* IOMUX_M33C1_PINCM71[PF] Bits */
#define IOMUX_M33C1_PINCM71_PF_OFS               (0)                             /* !< PF Offset */
#define IOMUX_M33C1_PINCM71_PF_MASK              ((uint32_t)0x00000003U)         /* !< bit */
#define IOMUX_M33C1_PINCM71_PF_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM71_PF_GPIO2_DIO18       ((uint32_t)0x00000001U)
#define IOMUX_M33C1_PINCM71_PF_GPTIMER16BADV4CC1_CCP3 ((uint32_t)0x00000002U)

/* IOMUX_M33C1_PINCM72 Bits */
/* IOMUX_M33C1_PINCM72[WCOMP] Bits */
#define IOMUX_M33C1_PINCM72_WCOMP_OFS            (28)                            /* !< WCOMP Offset */
#define IOMUX_M33C1_PINCM72_WCOMP_MASK           ((uint32_t)0x10000000U)         /* !< Wakeup Compare Value bit */
#define IOMUX_M33C1_PINCM72_WCOMP_MATCH0         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM72_WCOMP_MATCH1         ((uint32_t)0x10000000U)
/* IOMUX_M33C1_PINCM72[WUEN] Bits */
#define IOMUX_M33C1_PINCM72_WUEN_OFS             (27)                            /* !< WUEN Offset */
#define IOMUX_M33C1_PINCM72_WUEN_MASK            ((uint32_t)0x08000000U)         /* !< Wakeup Enable bit */
#define IOMUX_M33C1_PINCM72_WUEN_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM72_WUEN_ENABLE          ((uint32_t)0x08000000U)
/* IOMUX_M33C1_PINCM72[INV] Bits */
#define IOMUX_M33C1_PINCM72_INV_OFS              (26)                            /* !< INV Offset */
#define IOMUX_M33C1_PINCM72_INV_MASK             ((uint32_t)0x04000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM72_INV_DISABLE          ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM72_INV_ENABLE           ((uint32_t)0x04000000U)
/* IOMUX_M33C1_PINCM72[Z1] Bits */
#define IOMUX_M33C1_PINCM72_Z1_OFS               (25)                            /* !< Z1 Offset */
#define IOMUX_M33C1_PINCM72_Z1_MASK              ((uint32_t)0x02000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM72_Z1_DISABLE           ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM72_Z1_ENABLE            ((uint32_t)0x02000000U)
/* IOMUX_M33C1_PINCM72[INENA] Bits */
#define IOMUX_M33C1_PINCM72_INENA_OFS            (18)                            /* !< INENA Offset */
#define IOMUX_M33C1_PINCM72_INENA_MASK           ((uint32_t)0x00040000U)         /* !< bit */
#define IOMUX_M33C1_PINCM72_INENA_PADCORE        ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM72_INENA_CORE0          ((uint32_t)0x00040000U)
/* IOMUX_M33C1_PINCM72[PIPU] Bits */
#define IOMUX_M33C1_PINCM72_PIPU_OFS             (17)                            /* !< PIPU Offset */
#define IOMUX_M33C1_PINCM72_PIPU_MASK            ((uint32_t)0x00020000U)         /* !< bit */
#define IOMUX_M33C1_PINCM72_PIPU_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM72_PIPU_ENABLE          ((uint32_t)0x00020000U)
/* IOMUX_M33C1_PINCM72[PIPD] Bits */
#define IOMUX_M33C1_PINCM72_PIPD_OFS             (16)                            /* !< PIPD Offset */
#define IOMUX_M33C1_PINCM72_PIPD_MASK            ((uint32_t)0x00010000U)         /* !< bit */
#define IOMUX_M33C1_PINCM72_PIPD_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM72_PIPD_ENABLE          ((uint32_t)0x00010000U)
/* IOMUX_M33C1_PINCM72[PC] Bits */
#define IOMUX_M33C1_PINCM72_PC_OFS               (7)                             /* !< PC Offset */
#define IOMUX_M33C1_PINCM72_PC_MASK              ((uint32_t)0x00000080U)         /* !< bit */
#define IOMUX_M33C1_PINCM72_PC_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM72_PC_CONNECTED         ((uint32_t)0x00000080U)
/* IOMUX_M33C1_PINCM72[PF] Bits */
#define IOMUX_M33C1_PINCM72_PF_OFS               (0)                             /* !< PF Offset */
#define IOMUX_M33C1_PINCM72_PF_MASK              ((uint32_t)0x00000003U)         /* !< bit */
#define IOMUX_M33C1_PINCM72_PF_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM72_PF_GPIO2_DIO19       ((uint32_t)0x00000001U)
#define IOMUX_M33C1_PINCM72_PF_GPTIMER16BADV4CC1_CCP3_CMPL ((uint32_t)0x00000002U)

/* IOMUX_M33C1_PINCM73 Bits */
/* IOMUX_M33C1_PINCM73[WCOMP] Bits */
#define IOMUX_M33C1_PINCM73_WCOMP_OFS            (28)                            /* !< WCOMP Offset */
#define IOMUX_M33C1_PINCM73_WCOMP_MASK           ((uint32_t)0x10000000U)         /* !< Wakeup Compare Value bit */
#define IOMUX_M33C1_PINCM73_WCOMP_MATCH0         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM73_WCOMP_MATCH1         ((uint32_t)0x10000000U)
/* IOMUX_M33C1_PINCM73[WUEN] Bits */
#define IOMUX_M33C1_PINCM73_WUEN_OFS             (27)                            /* !< WUEN Offset */
#define IOMUX_M33C1_PINCM73_WUEN_MASK            ((uint32_t)0x08000000U)         /* !< Wakeup Enable bit */
#define IOMUX_M33C1_PINCM73_WUEN_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM73_WUEN_ENABLE          ((uint32_t)0x08000000U)
/* IOMUX_M33C1_PINCM73[INV] Bits */
#define IOMUX_M33C1_PINCM73_INV_OFS              (26)                            /* !< INV Offset */
#define IOMUX_M33C1_PINCM73_INV_MASK             ((uint32_t)0x04000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM73_INV_DISABLE          ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM73_INV_ENABLE           ((uint32_t)0x04000000U)
/* IOMUX_M33C1_PINCM73[Z1] Bits */
#define IOMUX_M33C1_PINCM73_Z1_OFS               (25)                            /* !< Z1 Offset */
#define IOMUX_M33C1_PINCM73_Z1_MASK              ((uint32_t)0x02000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM73_Z1_DISABLE           ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM73_Z1_ENABLE            ((uint32_t)0x02000000U)
/* IOMUX_M33C1_PINCM73[INENA] Bits */
#define IOMUX_M33C1_PINCM73_INENA_OFS            (18)                            /* !< INENA Offset */
#define IOMUX_M33C1_PINCM73_INENA_MASK           ((uint32_t)0x00040000U)         /* !< bit */
#define IOMUX_M33C1_PINCM73_INENA_PADCORE        ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM73_INENA_CORE0          ((uint32_t)0x00040000U)
/* IOMUX_M33C1_PINCM73[PIPU] Bits */
#define IOMUX_M33C1_PINCM73_PIPU_OFS             (17)                            /* !< PIPU Offset */
#define IOMUX_M33C1_PINCM73_PIPU_MASK            ((uint32_t)0x00020000U)         /* !< bit */
#define IOMUX_M33C1_PINCM73_PIPU_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM73_PIPU_ENABLE          ((uint32_t)0x00020000U)
/* IOMUX_M33C1_PINCM73[PIPD] Bits */
#define IOMUX_M33C1_PINCM73_PIPD_OFS             (16)                            /* !< PIPD Offset */
#define IOMUX_M33C1_PINCM73_PIPD_MASK            ((uint32_t)0x00010000U)         /* !< bit */
#define IOMUX_M33C1_PINCM73_PIPD_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM73_PIPD_ENABLE          ((uint32_t)0x00010000U)
/* IOMUX_M33C1_PINCM73[PC] Bits */
#define IOMUX_M33C1_PINCM73_PC_OFS               (7)                             /* !< PC Offset */
#define IOMUX_M33C1_PINCM73_PC_MASK              ((uint32_t)0x00000080U)         /* !< bit */
#define IOMUX_M33C1_PINCM73_PC_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM73_PC_CONNECTED         ((uint32_t)0x00000080U)
/* IOMUX_M33C1_PINCM73[PF] Bits */
#define IOMUX_M33C1_PINCM73_PF_OFS               (0)                             /* !< PF Offset */
#define IOMUX_M33C1_PINCM73_PF_MASK              ((uint32_t)0x00000003U)         /* !< bit */
#define IOMUX_M33C1_PINCM73_PF_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM73_PF_GPIO2_DIO20       ((uint32_t)0x00000001U)
#define IOMUX_M33C1_PINCM73_PF_GPTIMER16BADV4CC1_FAULT2 ((uint32_t)0x00000002U)

/* IOMUX_M33C1_PINCM74 Bits */
/* IOMUX_M33C1_PINCM74[WCOMP] Bits */
#define IOMUX_M33C1_PINCM74_WCOMP_OFS            (28)                            /* !< WCOMP Offset */
#define IOMUX_M33C1_PINCM74_WCOMP_MASK           ((uint32_t)0x10000000U)         /* !< Wakeup Compare Value bit */
#define IOMUX_M33C1_PINCM74_WCOMP_MATCH0         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM74_WCOMP_MATCH1         ((uint32_t)0x10000000U)
/* IOMUX_M33C1_PINCM74[WUEN] Bits */
#define IOMUX_M33C1_PINCM74_WUEN_OFS             (27)                            /* !< WUEN Offset */
#define IOMUX_M33C1_PINCM74_WUEN_MASK            ((uint32_t)0x08000000U)         /* !< Wakeup Enable bit */
#define IOMUX_M33C1_PINCM74_WUEN_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM74_WUEN_ENABLE          ((uint32_t)0x08000000U)
/* IOMUX_M33C1_PINCM74[INV] Bits */
#define IOMUX_M33C1_PINCM74_INV_OFS              (26)                            /* !< INV Offset */
#define IOMUX_M33C1_PINCM74_INV_MASK             ((uint32_t)0x04000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM74_INV_DISABLE          ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM74_INV_ENABLE           ((uint32_t)0x04000000U)
/* IOMUX_M33C1_PINCM74[Z1] Bits */
#define IOMUX_M33C1_PINCM74_Z1_OFS               (25)                            /* !< Z1 Offset */
#define IOMUX_M33C1_PINCM74_Z1_MASK              ((uint32_t)0x02000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM74_Z1_DISABLE           ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM74_Z1_ENABLE            ((uint32_t)0x02000000U)
/* IOMUX_M33C1_PINCM74[INENA] Bits */
#define IOMUX_M33C1_PINCM74_INENA_OFS            (18)                            /* !< INENA Offset */
#define IOMUX_M33C1_PINCM74_INENA_MASK           ((uint32_t)0x00040000U)         /* !< bit */
#define IOMUX_M33C1_PINCM74_INENA_PADCORE        ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM74_INENA_CORE0          ((uint32_t)0x00040000U)
/* IOMUX_M33C1_PINCM74[PIPU] Bits */
#define IOMUX_M33C1_PINCM74_PIPU_OFS             (17)                            /* !< PIPU Offset */
#define IOMUX_M33C1_PINCM74_PIPU_MASK            ((uint32_t)0x00020000U)         /* !< bit */
#define IOMUX_M33C1_PINCM74_PIPU_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM74_PIPU_ENABLE          ((uint32_t)0x00020000U)
/* IOMUX_M33C1_PINCM74[PIPD] Bits */
#define IOMUX_M33C1_PINCM74_PIPD_OFS             (16)                            /* !< PIPD Offset */
#define IOMUX_M33C1_PINCM74_PIPD_MASK            ((uint32_t)0x00010000U)         /* !< bit */
#define IOMUX_M33C1_PINCM74_PIPD_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM74_PIPD_ENABLE          ((uint32_t)0x00010000U)
/* IOMUX_M33C1_PINCM74[PC] Bits */
#define IOMUX_M33C1_PINCM74_PC_OFS               (7)                             /* !< PC Offset */
#define IOMUX_M33C1_PINCM74_PC_MASK              ((uint32_t)0x00000080U)         /* !< bit */
#define IOMUX_M33C1_PINCM74_PC_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM74_PC_CONNECTED         ((uint32_t)0x00000080U)
/* IOMUX_M33C1_PINCM74[PF] Bits */
#define IOMUX_M33C1_PINCM74_PF_OFS               (0)                             /* !< PF Offset */
#define IOMUX_M33C1_PINCM74_PF_MASK              ((uint32_t)0x00000007U)         /* !< bit */
#define IOMUX_M33C1_PINCM74_PF_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM74_PF_GPIO2_DIO00       ((uint32_t)0x00000001U)
#define IOMUX_M33C1_PINCM74_PF_GPTIMER16B2CCQEILP0_CCP0 ((uint32_t)0x00000002U)
#define IOMUX_M33C1_PINCM74_PF_GPTIMER16BADV4CC0_CCP2 ((uint32_t)0x00000003U)
#define IOMUX_M33C1_PINCM74_PF_QSPI_CS0          ((uint32_t)0x00000007U)

/* IOMUX_M33C1_PINCM75 Bits */
/* IOMUX_M33C1_PINCM75[WCOMP] Bits */
#define IOMUX_M33C1_PINCM75_WCOMP_OFS            (28)                            /* !< WCOMP Offset */
#define IOMUX_M33C1_PINCM75_WCOMP_MASK           ((uint32_t)0x10000000U)         /* !< Wakeup Compare Value bit */
#define IOMUX_M33C1_PINCM75_WCOMP_MATCH0         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM75_WCOMP_MATCH1         ((uint32_t)0x10000000U)
/* IOMUX_M33C1_PINCM75[WUEN] Bits */
#define IOMUX_M33C1_PINCM75_WUEN_OFS             (27)                            /* !< WUEN Offset */
#define IOMUX_M33C1_PINCM75_WUEN_MASK            ((uint32_t)0x08000000U)         /* !< Wakeup Enable bit */
#define IOMUX_M33C1_PINCM75_WUEN_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM75_WUEN_ENABLE          ((uint32_t)0x08000000U)
/* IOMUX_M33C1_PINCM75[INV] Bits */
#define IOMUX_M33C1_PINCM75_INV_OFS              (26)                            /* !< INV Offset */
#define IOMUX_M33C1_PINCM75_INV_MASK             ((uint32_t)0x04000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM75_INV_DISABLE          ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM75_INV_ENABLE           ((uint32_t)0x04000000U)
/* IOMUX_M33C1_PINCM75[Z1] Bits */
#define IOMUX_M33C1_PINCM75_Z1_OFS               (25)                            /* !< Z1 Offset */
#define IOMUX_M33C1_PINCM75_Z1_MASK              ((uint32_t)0x02000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM75_Z1_DISABLE           ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM75_Z1_ENABLE            ((uint32_t)0x02000000U)
/* IOMUX_M33C1_PINCM75[INENA] Bits */
#define IOMUX_M33C1_PINCM75_INENA_OFS            (18)                            /* !< INENA Offset */
#define IOMUX_M33C1_PINCM75_INENA_MASK           ((uint32_t)0x00040000U)         /* !< bit */
#define IOMUX_M33C1_PINCM75_INENA_PADCORE        ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM75_INENA_CORE0          ((uint32_t)0x00040000U)
/* IOMUX_M33C1_PINCM75[PIPU] Bits */
#define IOMUX_M33C1_PINCM75_PIPU_OFS             (17)                            /* !< PIPU Offset */
#define IOMUX_M33C1_PINCM75_PIPU_MASK            ((uint32_t)0x00020000U)         /* !< bit */
#define IOMUX_M33C1_PINCM75_PIPU_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM75_PIPU_ENABLE          ((uint32_t)0x00020000U)
/* IOMUX_M33C1_PINCM75[PIPD] Bits */
#define IOMUX_M33C1_PINCM75_PIPD_OFS             (16)                            /* !< PIPD Offset */
#define IOMUX_M33C1_PINCM75_PIPD_MASK            ((uint32_t)0x00010000U)         /* !< bit */
#define IOMUX_M33C1_PINCM75_PIPD_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM75_PIPD_ENABLE          ((uint32_t)0x00010000U)
/* IOMUX_M33C1_PINCM75[PC] Bits */
#define IOMUX_M33C1_PINCM75_PC_OFS               (7)                             /* !< PC Offset */
#define IOMUX_M33C1_PINCM75_PC_MASK              ((uint32_t)0x00000080U)         /* !< bit */
#define IOMUX_M33C1_PINCM75_PC_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM75_PC_CONNECTED         ((uint32_t)0x00000080U)
/* IOMUX_M33C1_PINCM75[PF] Bits */
#define IOMUX_M33C1_PINCM75_PF_OFS               (0)                             /* !< PF Offset */
#define IOMUX_M33C1_PINCM75_PF_MASK              ((uint32_t)0x00000003U)         /* !< bit */
#define IOMUX_M33C1_PINCM75_PF_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM75_PF_GPIO2_DIO01       ((uint32_t)0x00000001U)
#define IOMUX_M33C1_PINCM75_PF_GPTIMER16B2CCQEILP0_CCP1 ((uint32_t)0x00000002U)
#define IOMUX_M33C1_PINCM75_PF_GPTIMER16BADV4CC0_CCP2_CMPL ((uint32_t)0x00000003U)

/* IOMUX_M33C1_PINCM76 Bits */
/* IOMUX_M33C1_PINCM76[WCOMP] Bits */
#define IOMUX_M33C1_PINCM76_WCOMP_OFS            (28)                            /* !< WCOMP Offset */
#define IOMUX_M33C1_PINCM76_WCOMP_MASK           ((uint32_t)0x10000000U)         /* !< Wakeup Compare Value bit */
#define IOMUX_M33C1_PINCM76_WCOMP_MATCH0         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM76_WCOMP_MATCH1         ((uint32_t)0x10000000U)
/* IOMUX_M33C1_PINCM76[WUEN] Bits */
#define IOMUX_M33C1_PINCM76_WUEN_OFS             (27)                            /* !< WUEN Offset */
#define IOMUX_M33C1_PINCM76_WUEN_MASK            ((uint32_t)0x08000000U)         /* !< Wakeup Enable bit */
#define IOMUX_M33C1_PINCM76_WUEN_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM76_WUEN_ENABLE          ((uint32_t)0x08000000U)
/* IOMUX_M33C1_PINCM76[INV] Bits */
#define IOMUX_M33C1_PINCM76_INV_OFS              (26)                            /* !< INV Offset */
#define IOMUX_M33C1_PINCM76_INV_MASK             ((uint32_t)0x04000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM76_INV_DISABLE          ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM76_INV_ENABLE           ((uint32_t)0x04000000U)
/* IOMUX_M33C1_PINCM76[Z1] Bits */
#define IOMUX_M33C1_PINCM76_Z1_OFS               (25)                            /* !< Z1 Offset */
#define IOMUX_M33C1_PINCM76_Z1_MASK              ((uint32_t)0x02000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM76_Z1_DISABLE           ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM76_Z1_ENABLE            ((uint32_t)0x02000000U)
/* IOMUX_M33C1_PINCM76[INENA] Bits */
#define IOMUX_M33C1_PINCM76_INENA_OFS            (18)                            /* !< INENA Offset */
#define IOMUX_M33C1_PINCM76_INENA_MASK           ((uint32_t)0x00040000U)         /* !< bit */
#define IOMUX_M33C1_PINCM76_INENA_PADCORE        ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM76_INENA_CORE0          ((uint32_t)0x00040000U)
/* IOMUX_M33C1_PINCM76[PIPU] Bits */
#define IOMUX_M33C1_PINCM76_PIPU_OFS             (17)                            /* !< PIPU Offset */
#define IOMUX_M33C1_PINCM76_PIPU_MASK            ((uint32_t)0x00020000U)         /* !< bit */
#define IOMUX_M33C1_PINCM76_PIPU_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM76_PIPU_ENABLE          ((uint32_t)0x00020000U)
/* IOMUX_M33C1_PINCM76[PIPD] Bits */
#define IOMUX_M33C1_PINCM76_PIPD_OFS             (16)                            /* !< PIPD Offset */
#define IOMUX_M33C1_PINCM76_PIPD_MASK            ((uint32_t)0x00010000U)         /* !< bit */
#define IOMUX_M33C1_PINCM76_PIPD_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM76_PIPD_ENABLE          ((uint32_t)0x00010000U)
/* IOMUX_M33C1_PINCM76[PC] Bits */
#define IOMUX_M33C1_PINCM76_PC_OFS               (7)                             /* !< PC Offset */
#define IOMUX_M33C1_PINCM76_PC_MASK              ((uint32_t)0x00000080U)         /* !< bit */
#define IOMUX_M33C1_PINCM76_PC_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM76_PC_CONNECTED         ((uint32_t)0x00000080U)
/* IOMUX_M33C1_PINCM76[PF] Bits */
#define IOMUX_M33C1_PINCM76_PF_OFS               (0)                             /* !< PF Offset */
#define IOMUX_M33C1_PINCM76_PF_MASK              ((uint32_t)0x0000000FU)         /* !< bit */
#define IOMUX_M33C1_PINCM76_PF_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM76_PF_GPIO2_DIO02       ((uint32_t)0x00000001U)
#define IOMUX_M33C1_PINCM76_PF_GPTIMER16BADV4CC0_CCP0 ((uint32_t)0x00000002U)
#define IOMUX_M33C1_PINCM76_PF_GPTIMER16BADV4CC1_FAULT0 ((uint32_t)0x00000003U)
#define IOMUX_M33C1_PINCM76_PF_SPGSS1_U5_SCLK_SCL_RX ((uint32_t)0x00000004U)
#define IOMUX_M33C1_PINCM76_PF_GPTIMER16B2CCLP1_CCP1 ((uint32_t)0x00000005U)
#define IOMUX_M33C1_PINCM76_PF_SPGSS1_U5_CS0_CTS ((uint32_t)0x00000006U)
#define IOMUX_M33C1_PINCM76_PF_SPGSS2_U2_CS0_CTS ((uint32_t)0x00000007U)
#define IOMUX_M33C1_PINCM76_PF_SPGSS1_U0_CS0     ((uint32_t)0x00000008U)

/* IOMUX_M33C1_PINCM77 Bits */
/* IOMUX_M33C1_PINCM77[WCOMP] Bits */
#define IOMUX_M33C1_PINCM77_WCOMP_OFS            (28)                            /* !< WCOMP Offset */
#define IOMUX_M33C1_PINCM77_WCOMP_MASK           ((uint32_t)0x10000000U)         /* !< Wakeup Compare Value bit */
#define IOMUX_M33C1_PINCM77_WCOMP_MATCH0         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM77_WCOMP_MATCH1         ((uint32_t)0x10000000U)
/* IOMUX_M33C1_PINCM77[WUEN] Bits */
#define IOMUX_M33C1_PINCM77_WUEN_OFS             (27)                            /* !< WUEN Offset */
#define IOMUX_M33C1_PINCM77_WUEN_MASK            ((uint32_t)0x08000000U)         /* !< Wakeup Enable bit */
#define IOMUX_M33C1_PINCM77_WUEN_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM77_WUEN_ENABLE          ((uint32_t)0x08000000U)
/* IOMUX_M33C1_PINCM77[INV] Bits */
#define IOMUX_M33C1_PINCM77_INV_OFS              (26)                            /* !< INV Offset */
#define IOMUX_M33C1_PINCM77_INV_MASK             ((uint32_t)0x04000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM77_INV_DISABLE          ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM77_INV_ENABLE           ((uint32_t)0x04000000U)
/* IOMUX_M33C1_PINCM77[Z1] Bits */
#define IOMUX_M33C1_PINCM77_Z1_OFS               (25)                            /* !< Z1 Offset */
#define IOMUX_M33C1_PINCM77_Z1_MASK              ((uint32_t)0x02000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM77_Z1_DISABLE           ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM77_Z1_ENABLE            ((uint32_t)0x02000000U)
/* IOMUX_M33C1_PINCM77[INENA] Bits */
#define IOMUX_M33C1_PINCM77_INENA_OFS            (18)                            /* !< INENA Offset */
#define IOMUX_M33C1_PINCM77_INENA_MASK           ((uint32_t)0x00040000U)         /* !< bit */
#define IOMUX_M33C1_PINCM77_INENA_PADCORE        ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM77_INENA_CORE0          ((uint32_t)0x00040000U)
/* IOMUX_M33C1_PINCM77[PIPU] Bits */
#define IOMUX_M33C1_PINCM77_PIPU_OFS             (17)                            /* !< PIPU Offset */
#define IOMUX_M33C1_PINCM77_PIPU_MASK            ((uint32_t)0x00020000U)         /* !< bit */
#define IOMUX_M33C1_PINCM77_PIPU_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM77_PIPU_ENABLE          ((uint32_t)0x00020000U)
/* IOMUX_M33C1_PINCM77[PIPD] Bits */
#define IOMUX_M33C1_PINCM77_PIPD_OFS             (16)                            /* !< PIPD Offset */
#define IOMUX_M33C1_PINCM77_PIPD_MASK            ((uint32_t)0x00010000U)         /* !< bit */
#define IOMUX_M33C1_PINCM77_PIPD_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM77_PIPD_ENABLE          ((uint32_t)0x00010000U)
/* IOMUX_M33C1_PINCM77[PC] Bits */
#define IOMUX_M33C1_PINCM77_PC_OFS               (7)                             /* !< PC Offset */
#define IOMUX_M33C1_PINCM77_PC_MASK              ((uint32_t)0x00000080U)         /* !< bit */
#define IOMUX_M33C1_PINCM77_PC_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM77_PC_CONNECTED         ((uint32_t)0x00000080U)
/* IOMUX_M33C1_PINCM77[PF] Bits */
#define IOMUX_M33C1_PINCM77_PF_OFS               (0)                             /* !< PF Offset */
#define IOMUX_M33C1_PINCM77_PF_MASK              ((uint32_t)0x00000007U)         /* !< bit */
#define IOMUX_M33C1_PINCM77_PF_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM77_PF_GPIO2_DIO03       ((uint32_t)0x00000001U)
#define IOMUX_M33C1_PINCM77_PF_GPTIMER16B2CCLP3_CCP1 ((uint32_t)0x00000002U)
#define IOMUX_M33C1_PINCM77_PF_GPTIMER16BADV4CC0_CCP0_CMPL ((uint32_t)0x00000003U)
#define IOMUX_M33C1_PINCM77_PF_SPGSS1_U5_PICO_SDA_TX ((uint32_t)0x00000004U)

/* IOMUX_M33C1_PINCM78 Bits */
/* IOMUX_M33C1_PINCM78[WCOMP] Bits */
#define IOMUX_M33C1_PINCM78_WCOMP_OFS            (28)                            /* !< WCOMP Offset */
#define IOMUX_M33C1_PINCM78_WCOMP_MASK           ((uint32_t)0x10000000U)         /* !< Wakeup Compare Value bit */
#define IOMUX_M33C1_PINCM78_WCOMP_MATCH0         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM78_WCOMP_MATCH1         ((uint32_t)0x10000000U)
/* IOMUX_M33C1_PINCM78[WUEN] Bits */
#define IOMUX_M33C1_PINCM78_WUEN_OFS             (27)                            /* !< WUEN Offset */
#define IOMUX_M33C1_PINCM78_WUEN_MASK            ((uint32_t)0x08000000U)         /* !< Wakeup Enable bit */
#define IOMUX_M33C1_PINCM78_WUEN_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM78_WUEN_ENABLE          ((uint32_t)0x08000000U)
/* IOMUX_M33C1_PINCM78[INV] Bits */
#define IOMUX_M33C1_PINCM78_INV_OFS              (26)                            /* !< INV Offset */
#define IOMUX_M33C1_PINCM78_INV_MASK             ((uint32_t)0x04000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM78_INV_DISABLE          ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM78_INV_ENABLE           ((uint32_t)0x04000000U)
/* IOMUX_M33C1_PINCM78[Z1] Bits */
#define IOMUX_M33C1_PINCM78_Z1_OFS               (25)                            /* !< Z1 Offset */
#define IOMUX_M33C1_PINCM78_Z1_MASK              ((uint32_t)0x02000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM78_Z1_DISABLE           ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM78_Z1_ENABLE            ((uint32_t)0x02000000U)
/* IOMUX_M33C1_PINCM78[INENA] Bits */
#define IOMUX_M33C1_PINCM78_INENA_OFS            (18)                            /* !< INENA Offset */
#define IOMUX_M33C1_PINCM78_INENA_MASK           ((uint32_t)0x00040000U)         /* !< bit */
#define IOMUX_M33C1_PINCM78_INENA_PADCORE        ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM78_INENA_CORE0          ((uint32_t)0x00040000U)
/* IOMUX_M33C1_PINCM78[PIPU] Bits */
#define IOMUX_M33C1_PINCM78_PIPU_OFS             (17)                            /* !< PIPU Offset */
#define IOMUX_M33C1_PINCM78_PIPU_MASK            ((uint32_t)0x00020000U)         /* !< bit */
#define IOMUX_M33C1_PINCM78_PIPU_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM78_PIPU_ENABLE          ((uint32_t)0x00020000U)
/* IOMUX_M33C1_PINCM78[PIPD] Bits */
#define IOMUX_M33C1_PINCM78_PIPD_OFS             (16)                            /* !< PIPD Offset */
#define IOMUX_M33C1_PINCM78_PIPD_MASK            ((uint32_t)0x00010000U)         /* !< bit */
#define IOMUX_M33C1_PINCM78_PIPD_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM78_PIPD_ENABLE          ((uint32_t)0x00010000U)
/* IOMUX_M33C1_PINCM78[PC] Bits */
#define IOMUX_M33C1_PINCM78_PC_OFS               (7)                             /* !< PC Offset */
#define IOMUX_M33C1_PINCM78_PC_MASK              ((uint32_t)0x00000080U)         /* !< bit */
#define IOMUX_M33C1_PINCM78_PC_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM78_PC_CONNECTED         ((uint32_t)0x00000080U)
/* IOMUX_M33C1_PINCM78[PF] Bits */
#define IOMUX_M33C1_PINCM78_PF_OFS               (0)                             /* !< PF Offset */
#define IOMUX_M33C1_PINCM78_PF_MASK              ((uint32_t)0x00000003U)         /* !< bit */
#define IOMUX_M33C1_PINCM78_PF_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM78_PF_GPIO2_DIO04       ((uint32_t)0x00000001U)
#define IOMUX_M33C1_PINCM78_PF_GPTIMER16BADV4CC0_CCP1 ((uint32_t)0x00000002U)

/* IOMUX_M33C1_PINCM79 Bits */
/* IOMUX_M33C1_PINCM79[WCOMP] Bits */
#define IOMUX_M33C1_PINCM79_WCOMP_OFS            (28)                            /* !< WCOMP Offset */
#define IOMUX_M33C1_PINCM79_WCOMP_MASK           ((uint32_t)0x10000000U)         /* !< Wakeup Compare Value bit */
#define IOMUX_M33C1_PINCM79_WCOMP_MATCH0         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM79_WCOMP_MATCH1         ((uint32_t)0x10000000U)
/* IOMUX_M33C1_PINCM79[WUEN] Bits */
#define IOMUX_M33C1_PINCM79_WUEN_OFS             (27)                            /* !< WUEN Offset */
#define IOMUX_M33C1_PINCM79_WUEN_MASK            ((uint32_t)0x08000000U)         /* !< Wakeup Enable bit */
#define IOMUX_M33C1_PINCM79_WUEN_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM79_WUEN_ENABLE          ((uint32_t)0x08000000U)
/* IOMUX_M33C1_PINCM79[INV] Bits */
#define IOMUX_M33C1_PINCM79_INV_OFS              (26)                            /* !< INV Offset */
#define IOMUX_M33C1_PINCM79_INV_MASK             ((uint32_t)0x04000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM79_INV_DISABLE          ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM79_INV_ENABLE           ((uint32_t)0x04000000U)
/* IOMUX_M33C1_PINCM79[Z1] Bits */
#define IOMUX_M33C1_PINCM79_Z1_OFS               (25)                            /* !< Z1 Offset */
#define IOMUX_M33C1_PINCM79_Z1_MASK              ((uint32_t)0x02000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM79_Z1_DISABLE           ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM79_Z1_ENABLE            ((uint32_t)0x02000000U)
/* IOMUX_M33C1_PINCM79[INENA] Bits */
#define IOMUX_M33C1_PINCM79_INENA_OFS            (18)                            /* !< INENA Offset */
#define IOMUX_M33C1_PINCM79_INENA_MASK           ((uint32_t)0x00040000U)         /* !< bit */
#define IOMUX_M33C1_PINCM79_INENA_PADCORE        ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM79_INENA_CORE0          ((uint32_t)0x00040000U)
/* IOMUX_M33C1_PINCM79[PIPU] Bits */
#define IOMUX_M33C1_PINCM79_PIPU_OFS             (17)                            /* !< PIPU Offset */
#define IOMUX_M33C1_PINCM79_PIPU_MASK            ((uint32_t)0x00020000U)         /* !< bit */
#define IOMUX_M33C1_PINCM79_PIPU_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM79_PIPU_ENABLE          ((uint32_t)0x00020000U)
/* IOMUX_M33C1_PINCM79[PIPD] Bits */
#define IOMUX_M33C1_PINCM79_PIPD_OFS             (16)                            /* !< PIPD Offset */
#define IOMUX_M33C1_PINCM79_PIPD_MASK            ((uint32_t)0x00010000U)         /* !< bit */
#define IOMUX_M33C1_PINCM79_PIPD_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM79_PIPD_ENABLE          ((uint32_t)0x00010000U)
/* IOMUX_M33C1_PINCM79[PC] Bits */
#define IOMUX_M33C1_PINCM79_PC_OFS               (7)                             /* !< PC Offset */
#define IOMUX_M33C1_PINCM79_PC_MASK              ((uint32_t)0x00000080U)         /* !< bit */
#define IOMUX_M33C1_PINCM79_PC_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM79_PC_CONNECTED         ((uint32_t)0x00000080U)
/* IOMUX_M33C1_PINCM79[PF] Bits */
#define IOMUX_M33C1_PINCM79_PF_OFS               (0)                             /* !< PF Offset */
#define IOMUX_M33C1_PINCM79_PF_MASK              ((uint32_t)0x00000003U)         /* !< bit */
#define IOMUX_M33C1_PINCM79_PF_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM79_PF_GPIO2_DIO05       ((uint32_t)0x00000001U)
#define IOMUX_M33C1_PINCM79_PF_GPTIMER16BADV4CC0_CCP1_CMPL ((uint32_t)0x00000002U)

/* IOMUX_M33C1_PINCM80 Bits */
/* IOMUX_M33C1_PINCM80[WCOMP] Bits */
#define IOMUX_M33C1_PINCM80_WCOMP_OFS            (28)                            /* !< WCOMP Offset */
#define IOMUX_M33C1_PINCM80_WCOMP_MASK           ((uint32_t)0x10000000U)         /* !< Wakeup Compare Value bit */
#define IOMUX_M33C1_PINCM80_WCOMP_MATCH0         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM80_WCOMP_MATCH1         ((uint32_t)0x10000000U)
/* IOMUX_M33C1_PINCM80[WUEN] Bits */
#define IOMUX_M33C1_PINCM80_WUEN_OFS             (27)                            /* !< WUEN Offset */
#define IOMUX_M33C1_PINCM80_WUEN_MASK            ((uint32_t)0x08000000U)         /* !< Wakeup Enable bit */
#define IOMUX_M33C1_PINCM80_WUEN_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM80_WUEN_ENABLE          ((uint32_t)0x08000000U)
/* IOMUX_M33C1_PINCM80[INV] Bits */
#define IOMUX_M33C1_PINCM80_INV_OFS              (26)                            /* !< INV Offset */
#define IOMUX_M33C1_PINCM80_INV_MASK             ((uint32_t)0x04000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM80_INV_DISABLE          ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM80_INV_ENABLE           ((uint32_t)0x04000000U)
/* IOMUX_M33C1_PINCM80[Z1] Bits */
#define IOMUX_M33C1_PINCM80_Z1_OFS               (25)                            /* !< Z1 Offset */
#define IOMUX_M33C1_PINCM80_Z1_MASK              ((uint32_t)0x02000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM80_Z1_DISABLE           ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM80_Z1_ENABLE            ((uint32_t)0x02000000U)
/* IOMUX_M33C1_PINCM80[INENA] Bits */
#define IOMUX_M33C1_PINCM80_INENA_OFS            (18)                            /* !< INENA Offset */
#define IOMUX_M33C1_PINCM80_INENA_MASK           ((uint32_t)0x00040000U)         /* !< bit */
#define IOMUX_M33C1_PINCM80_INENA_PADCORE        ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM80_INENA_CORE0          ((uint32_t)0x00040000U)
/* IOMUX_M33C1_PINCM80[PIPU] Bits */
#define IOMUX_M33C1_PINCM80_PIPU_OFS             (17)                            /* !< PIPU Offset */
#define IOMUX_M33C1_PINCM80_PIPU_MASK            ((uint32_t)0x00020000U)         /* !< bit */
#define IOMUX_M33C1_PINCM80_PIPU_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM80_PIPU_ENABLE          ((uint32_t)0x00020000U)
/* IOMUX_M33C1_PINCM80[PIPD] Bits */
#define IOMUX_M33C1_PINCM80_PIPD_OFS             (16)                            /* !< PIPD Offset */
#define IOMUX_M33C1_PINCM80_PIPD_MASK            ((uint32_t)0x00010000U)         /* !< bit */
#define IOMUX_M33C1_PINCM80_PIPD_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM80_PIPD_ENABLE          ((uint32_t)0x00010000U)
/* IOMUX_M33C1_PINCM80[PC] Bits */
#define IOMUX_M33C1_PINCM80_PC_OFS               (7)                             /* !< PC Offset */
#define IOMUX_M33C1_PINCM80_PC_MASK              ((uint32_t)0x00000080U)         /* !< bit */
#define IOMUX_M33C1_PINCM80_PC_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM80_PC_CONNECTED         ((uint32_t)0x00000080U)
/* IOMUX_M33C1_PINCM80[PF] Bits */
#define IOMUX_M33C1_PINCM80_PF_OFS               (0)                             /* !< PF Offset */
#define IOMUX_M33C1_PINCM80_PF_MASK              ((uint32_t)0x00000003U)         /* !< bit */
#define IOMUX_M33C1_PINCM80_PF_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM80_PF_GPIO2_DIO21       ((uint32_t)0x00000001U)
#define IOMUX_M33C1_PINCM80_PF_MCAN1_CANTX       ((uint32_t)0x00000002U)

/* IOMUX_M33C1_PINCM81 Bits */
/* IOMUX_M33C1_PINCM81[WCOMP] Bits */
#define IOMUX_M33C1_PINCM81_WCOMP_OFS            (28)                            /* !< WCOMP Offset */
#define IOMUX_M33C1_PINCM81_WCOMP_MASK           ((uint32_t)0x10000000U)         /* !< Wakeup Compare Value bit */
#define IOMUX_M33C1_PINCM81_WCOMP_MATCH0         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM81_WCOMP_MATCH1         ((uint32_t)0x10000000U)
/* IOMUX_M33C1_PINCM81[WUEN] Bits */
#define IOMUX_M33C1_PINCM81_WUEN_OFS             (27)                            /* !< WUEN Offset */
#define IOMUX_M33C1_PINCM81_WUEN_MASK            ((uint32_t)0x08000000U)         /* !< Wakeup Enable bit */
#define IOMUX_M33C1_PINCM81_WUEN_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM81_WUEN_ENABLE          ((uint32_t)0x08000000U)
/* IOMUX_M33C1_PINCM81[INV] Bits */
#define IOMUX_M33C1_PINCM81_INV_OFS              (26)                            /* !< INV Offset */
#define IOMUX_M33C1_PINCM81_INV_MASK             ((uint32_t)0x04000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM81_INV_DISABLE          ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM81_INV_ENABLE           ((uint32_t)0x04000000U)
/* IOMUX_M33C1_PINCM81[Z1] Bits */
#define IOMUX_M33C1_PINCM81_Z1_OFS               (25)                            /* !< Z1 Offset */
#define IOMUX_M33C1_PINCM81_Z1_MASK              ((uint32_t)0x02000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM81_Z1_DISABLE           ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM81_Z1_ENABLE            ((uint32_t)0x02000000U)
/* IOMUX_M33C1_PINCM81[INENA] Bits */
#define IOMUX_M33C1_PINCM81_INENA_OFS            (18)                            /* !< INENA Offset */
#define IOMUX_M33C1_PINCM81_INENA_MASK           ((uint32_t)0x00040000U)         /* !< bit */
#define IOMUX_M33C1_PINCM81_INENA_PADCORE        ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM81_INENA_CORE0          ((uint32_t)0x00040000U)
/* IOMUX_M33C1_PINCM81[PIPU] Bits */
#define IOMUX_M33C1_PINCM81_PIPU_OFS             (17)                            /* !< PIPU Offset */
#define IOMUX_M33C1_PINCM81_PIPU_MASK            ((uint32_t)0x00020000U)         /* !< bit */
#define IOMUX_M33C1_PINCM81_PIPU_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM81_PIPU_ENABLE          ((uint32_t)0x00020000U)
/* IOMUX_M33C1_PINCM81[PIPD] Bits */
#define IOMUX_M33C1_PINCM81_PIPD_OFS             (16)                            /* !< PIPD Offset */
#define IOMUX_M33C1_PINCM81_PIPD_MASK            ((uint32_t)0x00010000U)         /* !< bit */
#define IOMUX_M33C1_PINCM81_PIPD_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM81_PIPD_ENABLE          ((uint32_t)0x00010000U)
/* IOMUX_M33C1_PINCM81[PC] Bits */
#define IOMUX_M33C1_PINCM81_PC_OFS               (7)                             /* !< PC Offset */
#define IOMUX_M33C1_PINCM81_PC_MASK              ((uint32_t)0x00000080U)         /* !< bit */
#define IOMUX_M33C1_PINCM81_PC_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM81_PC_CONNECTED         ((uint32_t)0x00000080U)
/* IOMUX_M33C1_PINCM81[PF] Bits */
#define IOMUX_M33C1_PINCM81_PF_OFS               (0)                             /* !< PF Offset */
#define IOMUX_M33C1_PINCM81_PF_MASK              ((uint32_t)0x00000003U)         /* !< bit */
#define IOMUX_M33C1_PINCM81_PF_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM81_PF_GPIO2_DIO22       ((uint32_t)0x00000001U)
#define IOMUX_M33C1_PINCM81_PF_MCAN1_CANRX       ((uint32_t)0x00000002U)

/* IOMUX_M33C1_PINCM82 Bits */
/* IOMUX_M33C1_PINCM82[WCOMP] Bits */
#define IOMUX_M33C1_PINCM82_WCOMP_OFS            (28)                            /* !< WCOMP Offset */
#define IOMUX_M33C1_PINCM82_WCOMP_MASK           ((uint32_t)0x10000000U)         /* !< Wakeup Compare Value bit */
#define IOMUX_M33C1_PINCM82_WCOMP_MATCH0         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM82_WCOMP_MATCH1         ((uint32_t)0x10000000U)
/* IOMUX_M33C1_PINCM82[WUEN] Bits */
#define IOMUX_M33C1_PINCM82_WUEN_OFS             (27)                            /* !< WUEN Offset */
#define IOMUX_M33C1_PINCM82_WUEN_MASK            ((uint32_t)0x08000000U)         /* !< Wakeup Enable bit */
#define IOMUX_M33C1_PINCM82_WUEN_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM82_WUEN_ENABLE          ((uint32_t)0x08000000U)
/* IOMUX_M33C1_PINCM82[INV] Bits */
#define IOMUX_M33C1_PINCM82_INV_OFS              (26)                            /* !< INV Offset */
#define IOMUX_M33C1_PINCM82_INV_MASK             ((uint32_t)0x04000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM82_INV_DISABLE          ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM82_INV_ENABLE           ((uint32_t)0x04000000U)
/* IOMUX_M33C1_PINCM82[Z1] Bits */
#define IOMUX_M33C1_PINCM82_Z1_OFS               (25)                            /* !< Z1 Offset */
#define IOMUX_M33C1_PINCM82_Z1_MASK              ((uint32_t)0x02000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM82_Z1_DISABLE           ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM82_Z1_ENABLE            ((uint32_t)0x02000000U)
/* IOMUX_M33C1_PINCM82[INENA] Bits */
#define IOMUX_M33C1_PINCM82_INENA_OFS            (18)                            /* !< INENA Offset */
#define IOMUX_M33C1_PINCM82_INENA_MASK           ((uint32_t)0x00040000U)         /* !< bit */
#define IOMUX_M33C1_PINCM82_INENA_PADCORE        ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM82_INENA_CORE0          ((uint32_t)0x00040000U)
/* IOMUX_M33C1_PINCM82[PIPU] Bits */
#define IOMUX_M33C1_PINCM82_PIPU_OFS             (17)                            /* !< PIPU Offset */
#define IOMUX_M33C1_PINCM82_PIPU_MASK            ((uint32_t)0x00020000U)         /* !< bit */
#define IOMUX_M33C1_PINCM82_PIPU_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM82_PIPU_ENABLE          ((uint32_t)0x00020000U)
/* IOMUX_M33C1_PINCM82[PIPD] Bits */
#define IOMUX_M33C1_PINCM82_PIPD_OFS             (16)                            /* !< PIPD Offset */
#define IOMUX_M33C1_PINCM82_PIPD_MASK            ((uint32_t)0x00010000U)         /* !< bit */
#define IOMUX_M33C1_PINCM82_PIPD_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM82_PIPD_ENABLE          ((uint32_t)0x00010000U)
/* IOMUX_M33C1_PINCM82[PC] Bits */
#define IOMUX_M33C1_PINCM82_PC_OFS               (7)                             /* !< PC Offset */
#define IOMUX_M33C1_PINCM82_PC_MASK              ((uint32_t)0x00000080U)         /* !< bit */
#define IOMUX_M33C1_PINCM82_PC_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM82_PC_CONNECTED         ((uint32_t)0x00000080U)
/* IOMUX_M33C1_PINCM82[PF] Bits */
#define IOMUX_M33C1_PINCM82_PF_OFS               (0)                             /* !< PF Offset */
#define IOMUX_M33C1_PINCM82_PF_MASK              ((uint32_t)0x00000003U)         /* !< bit */
#define IOMUX_M33C1_PINCM82_PF_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM82_PF_GPIO2_DIO23       ((uint32_t)0x00000001U)
#define IOMUX_M33C1_PINCM82_PF_GPTIMER16BADV4CC1_CCP2 ((uint32_t)0x00000002U)

/* IOMUX_M33C1_PINCM83 Bits */
/* IOMUX_M33C1_PINCM83[WCOMP] Bits */
#define IOMUX_M33C1_PINCM83_WCOMP_OFS            (28)                            /* !< WCOMP Offset */
#define IOMUX_M33C1_PINCM83_WCOMP_MASK           ((uint32_t)0x10000000U)         /* !< Wakeup Compare Value bit */
#define IOMUX_M33C1_PINCM83_WCOMP_MATCH0         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM83_WCOMP_MATCH1         ((uint32_t)0x10000000U)
/* IOMUX_M33C1_PINCM83[WUEN] Bits */
#define IOMUX_M33C1_PINCM83_WUEN_OFS             (27)                            /* !< WUEN Offset */
#define IOMUX_M33C1_PINCM83_WUEN_MASK            ((uint32_t)0x08000000U)         /* !< Wakeup Enable bit */
#define IOMUX_M33C1_PINCM83_WUEN_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM83_WUEN_ENABLE          ((uint32_t)0x08000000U)
/* IOMUX_M33C1_PINCM83[INV] Bits */
#define IOMUX_M33C1_PINCM83_INV_OFS              (26)                            /* !< INV Offset */
#define IOMUX_M33C1_PINCM83_INV_MASK             ((uint32_t)0x04000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM83_INV_DISABLE          ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM83_INV_ENABLE           ((uint32_t)0x04000000U)
/* IOMUX_M33C1_PINCM83[Z1] Bits */
#define IOMUX_M33C1_PINCM83_Z1_OFS               (25)                            /* !< Z1 Offset */
#define IOMUX_M33C1_PINCM83_Z1_MASK              ((uint32_t)0x02000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM83_Z1_DISABLE           ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM83_Z1_ENABLE            ((uint32_t)0x02000000U)
/* IOMUX_M33C1_PINCM83[INENA] Bits */
#define IOMUX_M33C1_PINCM83_INENA_OFS            (18)                            /* !< INENA Offset */
#define IOMUX_M33C1_PINCM83_INENA_MASK           ((uint32_t)0x00040000U)         /* !< bit */
#define IOMUX_M33C1_PINCM83_INENA_PADCORE        ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM83_INENA_CORE0          ((uint32_t)0x00040000U)
/* IOMUX_M33C1_PINCM83[PIPU] Bits */
#define IOMUX_M33C1_PINCM83_PIPU_OFS             (17)                            /* !< PIPU Offset */
#define IOMUX_M33C1_PINCM83_PIPU_MASK            ((uint32_t)0x00020000U)         /* !< bit */
#define IOMUX_M33C1_PINCM83_PIPU_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM83_PIPU_ENABLE          ((uint32_t)0x00020000U)
/* IOMUX_M33C1_PINCM83[PIPD] Bits */
#define IOMUX_M33C1_PINCM83_PIPD_OFS             (16)                            /* !< PIPD Offset */
#define IOMUX_M33C1_PINCM83_PIPD_MASK            ((uint32_t)0x00010000U)         /* !< bit */
#define IOMUX_M33C1_PINCM83_PIPD_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM83_PIPD_ENABLE          ((uint32_t)0x00010000U)
/* IOMUX_M33C1_PINCM83[PC] Bits */
#define IOMUX_M33C1_PINCM83_PC_OFS               (7)                             /* !< PC Offset */
#define IOMUX_M33C1_PINCM83_PC_MASK              ((uint32_t)0x00000080U)         /* !< bit */
#define IOMUX_M33C1_PINCM83_PC_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM83_PC_CONNECTED         ((uint32_t)0x00000080U)
/* IOMUX_M33C1_PINCM83[PF] Bits */
#define IOMUX_M33C1_PINCM83_PF_OFS               (0)                             /* !< PF Offset */
#define IOMUX_M33C1_PINCM83_PF_MASK              ((uint32_t)0x00000003U)         /* !< bit */
#define IOMUX_M33C1_PINCM83_PF_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM83_PF_GPIO2_DIO24       ((uint32_t)0x00000001U)
#define IOMUX_M33C1_PINCM83_PF_GPTIMER16BADV4CC1_CCP2_CMPL ((uint32_t)0x00000002U)

/* IOMUX_M33C1_PINCM84 Bits */
/* IOMUX_M33C1_PINCM84[WCOMP] Bits */
#define IOMUX_M33C1_PINCM84_WCOMP_OFS            (28)                            /* !< WCOMP Offset */
#define IOMUX_M33C1_PINCM84_WCOMP_MASK           ((uint32_t)0x10000000U)         /* !< Wakeup Compare Value bit */
#define IOMUX_M33C1_PINCM84_WCOMP_MATCH0         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM84_WCOMP_MATCH1         ((uint32_t)0x10000000U)
/* IOMUX_M33C1_PINCM84[WUEN] Bits */
#define IOMUX_M33C1_PINCM84_WUEN_OFS             (27)                            /* !< WUEN Offset */
#define IOMUX_M33C1_PINCM84_WUEN_MASK            ((uint32_t)0x08000000U)         /* !< Wakeup Enable bit */
#define IOMUX_M33C1_PINCM84_WUEN_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM84_WUEN_ENABLE          ((uint32_t)0x08000000U)
/* IOMUX_M33C1_PINCM84[INV] Bits */
#define IOMUX_M33C1_PINCM84_INV_OFS              (26)                            /* !< INV Offset */
#define IOMUX_M33C1_PINCM84_INV_MASK             ((uint32_t)0x04000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM84_INV_DISABLE          ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM84_INV_ENABLE           ((uint32_t)0x04000000U)
/* IOMUX_M33C1_PINCM84[Z1] Bits */
#define IOMUX_M33C1_PINCM84_Z1_OFS               (25)                            /* !< Z1 Offset */
#define IOMUX_M33C1_PINCM84_Z1_MASK              ((uint32_t)0x02000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM84_Z1_DISABLE           ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM84_Z1_ENABLE            ((uint32_t)0x02000000U)
/* IOMUX_M33C1_PINCM84[INENA] Bits */
#define IOMUX_M33C1_PINCM84_INENA_OFS            (18)                            /* !< INENA Offset */
#define IOMUX_M33C1_PINCM84_INENA_MASK           ((uint32_t)0x00040000U)         /* !< bit */
#define IOMUX_M33C1_PINCM84_INENA_PADCORE        ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM84_INENA_CORE0          ((uint32_t)0x00040000U)
/* IOMUX_M33C1_PINCM84[PIPU] Bits */
#define IOMUX_M33C1_PINCM84_PIPU_OFS             (17)                            /* !< PIPU Offset */
#define IOMUX_M33C1_PINCM84_PIPU_MASK            ((uint32_t)0x00020000U)         /* !< bit */
#define IOMUX_M33C1_PINCM84_PIPU_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM84_PIPU_ENABLE          ((uint32_t)0x00020000U)
/* IOMUX_M33C1_PINCM84[PIPD] Bits */
#define IOMUX_M33C1_PINCM84_PIPD_OFS             (16)                            /* !< PIPD Offset */
#define IOMUX_M33C1_PINCM84_PIPD_MASK            ((uint32_t)0x00010000U)         /* !< bit */
#define IOMUX_M33C1_PINCM84_PIPD_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM84_PIPD_ENABLE          ((uint32_t)0x00010000U)
/* IOMUX_M33C1_PINCM84[PC] Bits */
#define IOMUX_M33C1_PINCM84_PC_OFS               (7)                             /* !< PC Offset */
#define IOMUX_M33C1_PINCM84_PC_MASK              ((uint32_t)0x00000080U)         /* !< bit */
#define IOMUX_M33C1_PINCM84_PC_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM84_PC_CONNECTED         ((uint32_t)0x00000080U)
/* IOMUX_M33C1_PINCM84[PF] Bits */
#define IOMUX_M33C1_PINCM84_PF_OFS               (0)                             /* !< PF Offset */
#define IOMUX_M33C1_PINCM84_PF_MASK              ((uint32_t)0x00000007U)         /* !< bit */
#define IOMUX_M33C1_PINCM84_PF_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM84_PF_GPIO2_DIO06       ((uint32_t)0x00000001U)
#define IOMUX_M33C1_PINCM84_PF_GPTIMER16B2CCLP2_CCP0 ((uint32_t)0x00000002U)
#define IOMUX_M33C1_PINCM84_PF_GPTIMER16BADV4CC0_CCP0 ((uint32_t)0x00000003U)
#define IOMUX_M33C1_PINCM84_PF_SPGSS1_U5_PICO_SDA_TX ((uint32_t)0x00000004U)
#define IOMUX_M33C1_PINCM84_PF_SPGSS1_U0_CS1     ((uint32_t)0x00000005U)

/* IOMUX_M33C1_PINCM85 Bits */
/* IOMUX_M33C1_PINCM85[WCOMP] Bits */
#define IOMUX_M33C1_PINCM85_WCOMP_OFS            (28)                            /* !< WCOMP Offset */
#define IOMUX_M33C1_PINCM85_WCOMP_MASK           ((uint32_t)0x10000000U)         /* !< Wakeup Compare Value bit */
#define IOMUX_M33C1_PINCM85_WCOMP_MATCH0         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM85_WCOMP_MATCH1         ((uint32_t)0x10000000U)
/* IOMUX_M33C1_PINCM85[WUEN] Bits */
#define IOMUX_M33C1_PINCM85_WUEN_OFS             (27)                            /* !< WUEN Offset */
#define IOMUX_M33C1_PINCM85_WUEN_MASK            ((uint32_t)0x08000000U)         /* !< Wakeup Enable bit */
#define IOMUX_M33C1_PINCM85_WUEN_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM85_WUEN_ENABLE          ((uint32_t)0x08000000U)
/* IOMUX_M33C1_PINCM85[INV] Bits */
#define IOMUX_M33C1_PINCM85_INV_OFS              (26)                            /* !< INV Offset */
#define IOMUX_M33C1_PINCM85_INV_MASK             ((uint32_t)0x04000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM85_INV_DISABLE          ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM85_INV_ENABLE           ((uint32_t)0x04000000U)
/* IOMUX_M33C1_PINCM85[Z1] Bits */
#define IOMUX_M33C1_PINCM85_Z1_OFS               (25)                            /* !< Z1 Offset */
#define IOMUX_M33C1_PINCM85_Z1_MASK              ((uint32_t)0x02000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM85_Z1_DISABLE           ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM85_Z1_ENABLE            ((uint32_t)0x02000000U)
/* IOMUX_M33C1_PINCM85[INENA] Bits */
#define IOMUX_M33C1_PINCM85_INENA_OFS            (18)                            /* !< INENA Offset */
#define IOMUX_M33C1_PINCM85_INENA_MASK           ((uint32_t)0x00040000U)         /* !< bit */
#define IOMUX_M33C1_PINCM85_INENA_PADCORE        ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM85_INENA_CORE0          ((uint32_t)0x00040000U)
/* IOMUX_M33C1_PINCM85[PIPU] Bits */
#define IOMUX_M33C1_PINCM85_PIPU_OFS             (17)                            /* !< PIPU Offset */
#define IOMUX_M33C1_PINCM85_PIPU_MASK            ((uint32_t)0x00020000U)         /* !< bit */
#define IOMUX_M33C1_PINCM85_PIPU_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM85_PIPU_ENABLE          ((uint32_t)0x00020000U)
/* IOMUX_M33C1_PINCM85[PIPD] Bits */
#define IOMUX_M33C1_PINCM85_PIPD_OFS             (16)                            /* !< PIPD Offset */
#define IOMUX_M33C1_PINCM85_PIPD_MASK            ((uint32_t)0x00010000U)         /* !< bit */
#define IOMUX_M33C1_PINCM85_PIPD_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM85_PIPD_ENABLE          ((uint32_t)0x00010000U)
/* IOMUX_M33C1_PINCM85[PC] Bits */
#define IOMUX_M33C1_PINCM85_PC_OFS               (7)                             /* !< PC Offset */
#define IOMUX_M33C1_PINCM85_PC_MASK              ((uint32_t)0x00000080U)         /* !< bit */
#define IOMUX_M33C1_PINCM85_PC_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM85_PC_CONNECTED         ((uint32_t)0x00000080U)
/* IOMUX_M33C1_PINCM85[PF] Bits */
#define IOMUX_M33C1_PINCM85_PF_OFS               (0)                             /* !< PF Offset */
#define IOMUX_M33C1_PINCM85_PF_MASK              ((uint32_t)0x00000007U)         /* !< bit */
#define IOMUX_M33C1_PINCM85_PF_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM85_PF_GPIO2_DIO07       ((uint32_t)0x00000001U)
#define IOMUX_M33C1_PINCM85_PF_GPTIMER16B2CCLP2_CCP1 ((uint32_t)0x00000002U)
#define IOMUX_M33C1_PINCM85_PF_GPTIMER16BADV4CC0_CCP0_CMPL ((uint32_t)0x00000003U)
#define IOMUX_M33C1_PINCM85_PF_SPGSS1_U5_SCLK_SCL_RX ((uint32_t)0x00000004U)
#define IOMUX_M33C1_PINCM85_PF_SPGSS1_U0_CS0     ((uint32_t)0x00000005U)

/* IOMUX_M33C1_PINCM86 Bits */
/* IOMUX_M33C1_PINCM86[WCOMP] Bits */
#define IOMUX_M33C1_PINCM86_WCOMP_OFS            (28)                            /* !< WCOMP Offset */
#define IOMUX_M33C1_PINCM86_WCOMP_MASK           ((uint32_t)0x10000000U)         /* !< Wakeup Compare Value bit */
#define IOMUX_M33C1_PINCM86_WCOMP_MATCH0         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM86_WCOMP_MATCH1         ((uint32_t)0x10000000U)
/* IOMUX_M33C1_PINCM86[WUEN] Bits */
#define IOMUX_M33C1_PINCM86_WUEN_OFS             (27)                            /* !< WUEN Offset */
#define IOMUX_M33C1_PINCM86_WUEN_MASK            ((uint32_t)0x08000000U)         /* !< Wakeup Enable bit */
#define IOMUX_M33C1_PINCM86_WUEN_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM86_WUEN_ENABLE          ((uint32_t)0x08000000U)
/* IOMUX_M33C1_PINCM86[INV] Bits */
#define IOMUX_M33C1_PINCM86_INV_OFS              (26)                            /* !< INV Offset */
#define IOMUX_M33C1_PINCM86_INV_MASK             ((uint32_t)0x04000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM86_INV_DISABLE          ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM86_INV_ENABLE           ((uint32_t)0x04000000U)
/* IOMUX_M33C1_PINCM86[Z1] Bits */
#define IOMUX_M33C1_PINCM86_Z1_OFS               (25)                            /* !< Z1 Offset */
#define IOMUX_M33C1_PINCM86_Z1_MASK              ((uint32_t)0x02000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM86_Z1_DISABLE           ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM86_Z1_ENABLE            ((uint32_t)0x02000000U)
/* IOMUX_M33C1_PINCM86[INENA] Bits */
#define IOMUX_M33C1_PINCM86_INENA_OFS            (18)                            /* !< INENA Offset */
#define IOMUX_M33C1_PINCM86_INENA_MASK           ((uint32_t)0x00040000U)         /* !< bit */
#define IOMUX_M33C1_PINCM86_INENA_PADCORE        ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM86_INENA_CORE0          ((uint32_t)0x00040000U)
/* IOMUX_M33C1_PINCM86[PIPU] Bits */
#define IOMUX_M33C1_PINCM86_PIPU_OFS             (17)                            /* !< PIPU Offset */
#define IOMUX_M33C1_PINCM86_PIPU_MASK            ((uint32_t)0x00020000U)         /* !< bit */
#define IOMUX_M33C1_PINCM86_PIPU_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM86_PIPU_ENABLE          ((uint32_t)0x00020000U)
/* IOMUX_M33C1_PINCM86[PIPD] Bits */
#define IOMUX_M33C1_PINCM86_PIPD_OFS             (16)                            /* !< PIPD Offset */
#define IOMUX_M33C1_PINCM86_PIPD_MASK            ((uint32_t)0x00010000U)         /* !< bit */
#define IOMUX_M33C1_PINCM86_PIPD_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM86_PIPD_ENABLE          ((uint32_t)0x00010000U)
/* IOMUX_M33C1_PINCM86[PC] Bits */
#define IOMUX_M33C1_PINCM86_PC_OFS               (7)                             /* !< PC Offset */
#define IOMUX_M33C1_PINCM86_PC_MASK              ((uint32_t)0x00000080U)         /* !< bit */
#define IOMUX_M33C1_PINCM86_PC_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM86_PC_CONNECTED         ((uint32_t)0x00000080U)
/* IOMUX_M33C1_PINCM86[PF] Bits */
#define IOMUX_M33C1_PINCM86_PF_OFS               (0)                             /* !< PF Offset */
#define IOMUX_M33C1_PINCM86_PF_MASK              ((uint32_t)0x00000003U)         /* !< bit */
#define IOMUX_M33C1_PINCM86_PF_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM86_PF_GPIO2_DIO08       ((uint32_t)0x00000001U)
#define IOMUX_M33C1_PINCM86_PF_GPTIMER16BADV4CC0_CCP1 ((uint32_t)0x00000002U)
#define IOMUX_M33C1_PINCM86_PF_SPGSS1_U5_CS0_CTS ((uint32_t)0x00000003U)

/* IOMUX_M33C1_PINCM87 Bits */
/* IOMUX_M33C1_PINCM87[WCOMP] Bits */
#define IOMUX_M33C1_PINCM87_WCOMP_OFS            (28)                            /* !< WCOMP Offset */
#define IOMUX_M33C1_PINCM87_WCOMP_MASK           ((uint32_t)0x10000000U)         /* !< Wakeup Compare Value bit */
#define IOMUX_M33C1_PINCM87_WCOMP_MATCH0         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM87_WCOMP_MATCH1         ((uint32_t)0x10000000U)
/* IOMUX_M33C1_PINCM87[WUEN] Bits */
#define IOMUX_M33C1_PINCM87_WUEN_OFS             (27)                            /* !< WUEN Offset */
#define IOMUX_M33C1_PINCM87_WUEN_MASK            ((uint32_t)0x08000000U)         /* !< Wakeup Enable bit */
#define IOMUX_M33C1_PINCM87_WUEN_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM87_WUEN_ENABLE          ((uint32_t)0x08000000U)
/* IOMUX_M33C1_PINCM87[INV] Bits */
#define IOMUX_M33C1_PINCM87_INV_OFS              (26)                            /* !< INV Offset */
#define IOMUX_M33C1_PINCM87_INV_MASK             ((uint32_t)0x04000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM87_INV_DISABLE          ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM87_INV_ENABLE           ((uint32_t)0x04000000U)
/* IOMUX_M33C1_PINCM87[Z1] Bits */
#define IOMUX_M33C1_PINCM87_Z1_OFS               (25)                            /* !< Z1 Offset */
#define IOMUX_M33C1_PINCM87_Z1_MASK              ((uint32_t)0x02000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM87_Z1_DISABLE           ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM87_Z1_ENABLE            ((uint32_t)0x02000000U)
/* IOMUX_M33C1_PINCM87[INENA] Bits */
#define IOMUX_M33C1_PINCM87_INENA_OFS            (18)                            /* !< INENA Offset */
#define IOMUX_M33C1_PINCM87_INENA_MASK           ((uint32_t)0x00040000U)         /* !< bit */
#define IOMUX_M33C1_PINCM87_INENA_PADCORE        ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM87_INENA_CORE0          ((uint32_t)0x00040000U)
/* IOMUX_M33C1_PINCM87[PIPU] Bits */
#define IOMUX_M33C1_PINCM87_PIPU_OFS             (17)                            /* !< PIPU Offset */
#define IOMUX_M33C1_PINCM87_PIPU_MASK            ((uint32_t)0x00020000U)         /* !< bit */
#define IOMUX_M33C1_PINCM87_PIPU_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM87_PIPU_ENABLE          ((uint32_t)0x00020000U)
/* IOMUX_M33C1_PINCM87[PIPD] Bits */
#define IOMUX_M33C1_PINCM87_PIPD_OFS             (16)                            /* !< PIPD Offset */
#define IOMUX_M33C1_PINCM87_PIPD_MASK            ((uint32_t)0x00010000U)         /* !< bit */
#define IOMUX_M33C1_PINCM87_PIPD_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM87_PIPD_ENABLE          ((uint32_t)0x00010000U)
/* IOMUX_M33C1_PINCM87[PC] Bits */
#define IOMUX_M33C1_PINCM87_PC_OFS               (7)                             /* !< PC Offset */
#define IOMUX_M33C1_PINCM87_PC_MASK              ((uint32_t)0x00000080U)         /* !< bit */
#define IOMUX_M33C1_PINCM87_PC_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM87_PC_CONNECTED         ((uint32_t)0x00000080U)
/* IOMUX_M33C1_PINCM87[PF] Bits */
#define IOMUX_M33C1_PINCM87_PF_OFS               (0)                             /* !< PF Offset */
#define IOMUX_M33C1_PINCM87_PF_MASK              ((uint32_t)0x00000003U)         /* !< bit */
#define IOMUX_M33C1_PINCM87_PF_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM87_PF_GPIO2_DIO09       ((uint32_t)0x00000001U)
#define IOMUX_M33C1_PINCM87_PF_GPTIMER16BADV4CC0_CCP1_CMPL ((uint32_t)0x00000002U)
#define IOMUX_M33C1_PINCM87_PF_SPGSS1_U5_POCI_RTS ((uint32_t)0x00000003U)

/* IOMUX_M33C1_PINCM88 Bits */
/* IOMUX_M33C1_PINCM88[WCOMP] Bits */
#define IOMUX_M33C1_PINCM88_WCOMP_OFS            (28)                            /* !< WCOMP Offset */
#define IOMUX_M33C1_PINCM88_WCOMP_MASK           ((uint32_t)0x10000000U)         /* !< Wakeup Compare Value bit */
#define IOMUX_M33C1_PINCM88_WCOMP_MATCH0         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM88_WCOMP_MATCH1         ((uint32_t)0x10000000U)
/* IOMUX_M33C1_PINCM88[WUEN] Bits */
#define IOMUX_M33C1_PINCM88_WUEN_OFS             (27)                            /* !< WUEN Offset */
#define IOMUX_M33C1_PINCM88_WUEN_MASK            ((uint32_t)0x08000000U)         /* !< Wakeup Enable bit */
#define IOMUX_M33C1_PINCM88_WUEN_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM88_WUEN_ENABLE          ((uint32_t)0x08000000U)
/* IOMUX_M33C1_PINCM88[INV] Bits */
#define IOMUX_M33C1_PINCM88_INV_OFS              (26)                            /* !< INV Offset */
#define IOMUX_M33C1_PINCM88_INV_MASK             ((uint32_t)0x04000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM88_INV_DISABLE          ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM88_INV_ENABLE           ((uint32_t)0x04000000U)
/* IOMUX_M33C1_PINCM88[Z1] Bits */
#define IOMUX_M33C1_PINCM88_Z1_OFS               (25)                            /* !< Z1 Offset */
#define IOMUX_M33C1_PINCM88_Z1_MASK              ((uint32_t)0x02000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM88_Z1_DISABLE           ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM88_Z1_ENABLE            ((uint32_t)0x02000000U)
/* IOMUX_M33C1_PINCM88[INENA] Bits */
#define IOMUX_M33C1_PINCM88_INENA_OFS            (18)                            /* !< INENA Offset */
#define IOMUX_M33C1_PINCM88_INENA_MASK           ((uint32_t)0x00040000U)         /* !< bit */
#define IOMUX_M33C1_PINCM88_INENA_PADCORE        ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM88_INENA_CORE0          ((uint32_t)0x00040000U)
/* IOMUX_M33C1_PINCM88[PIPU] Bits */
#define IOMUX_M33C1_PINCM88_PIPU_OFS             (17)                            /* !< PIPU Offset */
#define IOMUX_M33C1_PINCM88_PIPU_MASK            ((uint32_t)0x00020000U)         /* !< bit */
#define IOMUX_M33C1_PINCM88_PIPU_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM88_PIPU_ENABLE          ((uint32_t)0x00020000U)
/* IOMUX_M33C1_PINCM88[PIPD] Bits */
#define IOMUX_M33C1_PINCM88_PIPD_OFS             (16)                            /* !< PIPD Offset */
#define IOMUX_M33C1_PINCM88_PIPD_MASK            ((uint32_t)0x00010000U)         /* !< bit */
#define IOMUX_M33C1_PINCM88_PIPD_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM88_PIPD_ENABLE          ((uint32_t)0x00010000U)
/* IOMUX_M33C1_PINCM88[PC] Bits */
#define IOMUX_M33C1_PINCM88_PC_OFS               (7)                             /* !< PC Offset */
#define IOMUX_M33C1_PINCM88_PC_MASK              ((uint32_t)0x00000080U)         /* !< bit */
#define IOMUX_M33C1_PINCM88_PC_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM88_PC_CONNECTED         ((uint32_t)0x00000080U)
/* IOMUX_M33C1_PINCM88[PF] Bits */
#define IOMUX_M33C1_PINCM88_PF_OFS               (0)                             /* !< PF Offset */
#define IOMUX_M33C1_PINCM88_PF_MASK              ((uint32_t)0x00000003U)         /* !< bit */
#define IOMUX_M33C1_PINCM88_PF_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM88_PF_GPIO2_DIO10       ((uint32_t)0x00000001U)
#define IOMUX_M33C1_PINCM88_PF_GPTIMER16B2CCQEILP1_CCP0 ((uint32_t)0x00000002U)
#define IOMUX_M33C1_PINCM88_PF_SPGSS2_U3_SCL_RX  ((uint32_t)0x00000003U)

/* IOMUX_M33C1_PINCM89 Bits */
/* IOMUX_M33C1_PINCM89[WCOMP] Bits */
#define IOMUX_M33C1_PINCM89_WCOMP_OFS            (28)                            /* !< WCOMP Offset */
#define IOMUX_M33C1_PINCM89_WCOMP_MASK           ((uint32_t)0x10000000U)         /* !< Wakeup Compare Value bit */
#define IOMUX_M33C1_PINCM89_WCOMP_MATCH0         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM89_WCOMP_MATCH1         ((uint32_t)0x10000000U)
/* IOMUX_M33C1_PINCM89[WUEN] Bits */
#define IOMUX_M33C1_PINCM89_WUEN_OFS             (27)                            /* !< WUEN Offset */
#define IOMUX_M33C1_PINCM89_WUEN_MASK            ((uint32_t)0x08000000U)         /* !< Wakeup Enable bit */
#define IOMUX_M33C1_PINCM89_WUEN_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM89_WUEN_ENABLE          ((uint32_t)0x08000000U)
/* IOMUX_M33C1_PINCM89[INV] Bits */
#define IOMUX_M33C1_PINCM89_INV_OFS              (26)                            /* !< INV Offset */
#define IOMUX_M33C1_PINCM89_INV_MASK             ((uint32_t)0x04000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM89_INV_DISABLE          ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM89_INV_ENABLE           ((uint32_t)0x04000000U)
/* IOMUX_M33C1_PINCM89[Z1] Bits */
#define IOMUX_M33C1_PINCM89_Z1_OFS               (25)                            /* !< Z1 Offset */
#define IOMUX_M33C1_PINCM89_Z1_MASK              ((uint32_t)0x02000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM89_Z1_DISABLE           ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM89_Z1_ENABLE            ((uint32_t)0x02000000U)
/* IOMUX_M33C1_PINCM89[INENA] Bits */
#define IOMUX_M33C1_PINCM89_INENA_OFS            (18)                            /* !< INENA Offset */
#define IOMUX_M33C1_PINCM89_INENA_MASK           ((uint32_t)0x00040000U)         /* !< bit */
#define IOMUX_M33C1_PINCM89_INENA_PADCORE        ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM89_INENA_CORE0          ((uint32_t)0x00040000U)
/* IOMUX_M33C1_PINCM89[PIPU] Bits */
#define IOMUX_M33C1_PINCM89_PIPU_OFS             (17)                            /* !< PIPU Offset */
#define IOMUX_M33C1_PINCM89_PIPU_MASK            ((uint32_t)0x00020000U)         /* !< bit */
#define IOMUX_M33C1_PINCM89_PIPU_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM89_PIPU_ENABLE          ((uint32_t)0x00020000U)
/* IOMUX_M33C1_PINCM89[PIPD] Bits */
#define IOMUX_M33C1_PINCM89_PIPD_OFS             (16)                            /* !< PIPD Offset */
#define IOMUX_M33C1_PINCM89_PIPD_MASK            ((uint32_t)0x00010000U)         /* !< bit */
#define IOMUX_M33C1_PINCM89_PIPD_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM89_PIPD_ENABLE          ((uint32_t)0x00010000U)
/* IOMUX_M33C1_PINCM89[PC] Bits */
#define IOMUX_M33C1_PINCM89_PC_OFS               (7)                             /* !< PC Offset */
#define IOMUX_M33C1_PINCM89_PC_MASK              ((uint32_t)0x00000080U)         /* !< bit */
#define IOMUX_M33C1_PINCM89_PC_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM89_PC_CONNECTED         ((uint32_t)0x00000080U)
/* IOMUX_M33C1_PINCM89[PF] Bits */
#define IOMUX_M33C1_PINCM89_PF_OFS               (0)                             /* !< PF Offset */
#define IOMUX_M33C1_PINCM89_PF_MASK              ((uint32_t)0x00000003U)         /* !< bit */
#define IOMUX_M33C1_PINCM89_PF_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM89_PF_GPIO2_DIO11       ((uint32_t)0x00000001U)
#define IOMUX_M33C1_PINCM89_PF_GPTIMER16B2CCQEILP1_CCP1 ((uint32_t)0x00000002U)
#define IOMUX_M33C1_PINCM89_PF_SPGSS2_U3_SDA_TX  ((uint32_t)0x00000003U)

/* IOMUX_M33C1_PINCM90 Bits */
/* IOMUX_M33C1_PINCM90[WCOMP] Bits */
#define IOMUX_M33C1_PINCM90_WCOMP_OFS            (28)                            /* !< WCOMP Offset */
#define IOMUX_M33C1_PINCM90_WCOMP_MASK           ((uint32_t)0x10000000U)         /* !< Wakeup Compare Value bit */
#define IOMUX_M33C1_PINCM90_WCOMP_MATCH0         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM90_WCOMP_MATCH1         ((uint32_t)0x10000000U)
/* IOMUX_M33C1_PINCM90[WUEN] Bits */
#define IOMUX_M33C1_PINCM90_WUEN_OFS             (27)                            /* !< WUEN Offset */
#define IOMUX_M33C1_PINCM90_WUEN_MASK            ((uint32_t)0x08000000U)         /* !< Wakeup Enable bit */
#define IOMUX_M33C1_PINCM90_WUEN_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM90_WUEN_ENABLE          ((uint32_t)0x08000000U)
/* IOMUX_M33C1_PINCM90[INV] Bits */
#define IOMUX_M33C1_PINCM90_INV_OFS              (26)                            /* !< INV Offset */
#define IOMUX_M33C1_PINCM90_INV_MASK             ((uint32_t)0x04000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM90_INV_DISABLE          ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM90_INV_ENABLE           ((uint32_t)0x04000000U)
/* IOMUX_M33C1_PINCM90[Z1] Bits */
#define IOMUX_M33C1_PINCM90_Z1_OFS               (25)                            /* !< Z1 Offset */
#define IOMUX_M33C1_PINCM90_Z1_MASK              ((uint32_t)0x02000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM90_Z1_DISABLE           ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM90_Z1_ENABLE            ((uint32_t)0x02000000U)
/* IOMUX_M33C1_PINCM90[INENA] Bits */
#define IOMUX_M33C1_PINCM90_INENA_OFS            (18)                            /* !< INENA Offset */
#define IOMUX_M33C1_PINCM90_INENA_MASK           ((uint32_t)0x00040000U)         /* !< bit */
#define IOMUX_M33C1_PINCM90_INENA_PADCORE        ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM90_INENA_CORE0          ((uint32_t)0x00040000U)
/* IOMUX_M33C1_PINCM90[PIPU] Bits */
#define IOMUX_M33C1_PINCM90_PIPU_OFS             (17)                            /* !< PIPU Offset */
#define IOMUX_M33C1_PINCM90_PIPU_MASK            ((uint32_t)0x00020000U)         /* !< bit */
#define IOMUX_M33C1_PINCM90_PIPU_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM90_PIPU_ENABLE          ((uint32_t)0x00020000U)
/* IOMUX_M33C1_PINCM90[PIPD] Bits */
#define IOMUX_M33C1_PINCM90_PIPD_OFS             (16)                            /* !< PIPD Offset */
#define IOMUX_M33C1_PINCM90_PIPD_MASK            ((uint32_t)0x00010000U)         /* !< bit */
#define IOMUX_M33C1_PINCM90_PIPD_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM90_PIPD_ENABLE          ((uint32_t)0x00010000U)
/* IOMUX_M33C1_PINCM90[PC] Bits */
#define IOMUX_M33C1_PINCM90_PC_OFS               (7)                             /* !< PC Offset */
#define IOMUX_M33C1_PINCM90_PC_MASK              ((uint32_t)0x00000080U)         /* !< bit */
#define IOMUX_M33C1_PINCM90_PC_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM90_PC_CONNECTED         ((uint32_t)0x00000080U)
/* IOMUX_M33C1_PINCM90[PF] Bits */
#define IOMUX_M33C1_PINCM90_PF_OFS               (0)                             /* !< PF Offset */
#define IOMUX_M33C1_PINCM90_PF_MASK              ((uint32_t)0x00000003U)         /* !< bit */
#define IOMUX_M33C1_PINCM90_PF_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM90_PF_GPIO2_DIO25       ((uint32_t)0x00000001U)
#define IOMUX_M33C1_PINCM90_PF_GPTIMER16B2CCQEILP1_IDX ((uint32_t)0x00000002U)
#define IOMUX_M33C1_PINCM90_PF_SPGSS2_U3_CTS     ((uint32_t)0x00000003U)

/* IOMUX_M33C1_PINCM91 Bits */
/* IOMUX_M33C1_PINCM91[WCOMP] Bits */
#define IOMUX_M33C1_PINCM91_WCOMP_OFS            (28)                            /* !< WCOMP Offset */
#define IOMUX_M33C1_PINCM91_WCOMP_MASK           ((uint32_t)0x10000000U)         /* !< Wakeup Compare Value bit */
#define IOMUX_M33C1_PINCM91_WCOMP_MATCH0         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM91_WCOMP_MATCH1         ((uint32_t)0x10000000U)
/* IOMUX_M33C1_PINCM91[WUEN] Bits */
#define IOMUX_M33C1_PINCM91_WUEN_OFS             (27)                            /* !< WUEN Offset */
#define IOMUX_M33C1_PINCM91_WUEN_MASK            ((uint32_t)0x08000000U)         /* !< Wakeup Enable bit */
#define IOMUX_M33C1_PINCM91_WUEN_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM91_WUEN_ENABLE          ((uint32_t)0x08000000U)
/* IOMUX_M33C1_PINCM91[INV] Bits */
#define IOMUX_M33C1_PINCM91_INV_OFS              (26)                            /* !< INV Offset */
#define IOMUX_M33C1_PINCM91_INV_MASK             ((uint32_t)0x04000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM91_INV_DISABLE          ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM91_INV_ENABLE           ((uint32_t)0x04000000U)
/* IOMUX_M33C1_PINCM91[Z1] Bits */
#define IOMUX_M33C1_PINCM91_Z1_OFS               (25)                            /* !< Z1 Offset */
#define IOMUX_M33C1_PINCM91_Z1_MASK              ((uint32_t)0x02000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM91_Z1_DISABLE           ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM91_Z1_ENABLE            ((uint32_t)0x02000000U)
/* IOMUX_M33C1_PINCM91[INENA] Bits */
#define IOMUX_M33C1_PINCM91_INENA_OFS            (18)                            /* !< INENA Offset */
#define IOMUX_M33C1_PINCM91_INENA_MASK           ((uint32_t)0x00040000U)         /* !< bit */
#define IOMUX_M33C1_PINCM91_INENA_PADCORE        ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM91_INENA_CORE0          ((uint32_t)0x00040000U)
/* IOMUX_M33C1_PINCM91[PIPU] Bits */
#define IOMUX_M33C1_PINCM91_PIPU_OFS             (17)                            /* !< PIPU Offset */
#define IOMUX_M33C1_PINCM91_PIPU_MASK            ((uint32_t)0x00020000U)         /* !< bit */
#define IOMUX_M33C1_PINCM91_PIPU_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM91_PIPU_ENABLE          ((uint32_t)0x00020000U)
/* IOMUX_M33C1_PINCM91[PIPD] Bits */
#define IOMUX_M33C1_PINCM91_PIPD_OFS             (16)                            /* !< PIPD Offset */
#define IOMUX_M33C1_PINCM91_PIPD_MASK            ((uint32_t)0x00010000U)         /* !< bit */
#define IOMUX_M33C1_PINCM91_PIPD_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM91_PIPD_ENABLE          ((uint32_t)0x00010000U)
/* IOMUX_M33C1_PINCM91[PC] Bits */
#define IOMUX_M33C1_PINCM91_PC_OFS               (7)                             /* !< PC Offset */
#define IOMUX_M33C1_PINCM91_PC_MASK              ((uint32_t)0x00000080U)         /* !< bit */
#define IOMUX_M33C1_PINCM91_PC_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM91_PC_CONNECTED         ((uint32_t)0x00000080U)
/* IOMUX_M33C1_PINCM91[PF] Bits */
#define IOMUX_M33C1_PINCM91_PF_OFS               (0)                             /* !< PF Offset */
#define IOMUX_M33C1_PINCM91_PF_MASK              ((uint32_t)0x00000003U)         /* !< bit */
#define IOMUX_M33C1_PINCM91_PF_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM91_PF_GPIO2_DIO26       ((uint32_t)0x00000001U)
#define IOMUX_M33C1_PINCM91_PF_MCAN1_CANTX       ((uint32_t)0x00000002U)
#define IOMUX_M33C1_PINCM91_PF_SPGSS2_U3_RTS     ((uint32_t)0x00000003U)

/* IOMUX_M33C1_PINCM92 Bits */
/* IOMUX_M33C1_PINCM92[WCOMP] Bits */
#define IOMUX_M33C1_PINCM92_WCOMP_OFS            (28)                            /* !< WCOMP Offset */
#define IOMUX_M33C1_PINCM92_WCOMP_MASK           ((uint32_t)0x10000000U)         /* !< Wakeup Compare Value bit */
#define IOMUX_M33C1_PINCM92_WCOMP_MATCH0         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM92_WCOMP_MATCH1         ((uint32_t)0x10000000U)
/* IOMUX_M33C1_PINCM92[WUEN] Bits */
#define IOMUX_M33C1_PINCM92_WUEN_OFS             (27)                            /* !< WUEN Offset */
#define IOMUX_M33C1_PINCM92_WUEN_MASK            ((uint32_t)0x08000000U)         /* !< Wakeup Enable bit */
#define IOMUX_M33C1_PINCM92_WUEN_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM92_WUEN_ENABLE          ((uint32_t)0x08000000U)
/* IOMUX_M33C1_PINCM92[INV] Bits */
#define IOMUX_M33C1_PINCM92_INV_OFS              (26)                            /* !< INV Offset */
#define IOMUX_M33C1_PINCM92_INV_MASK             ((uint32_t)0x04000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM92_INV_DISABLE          ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM92_INV_ENABLE           ((uint32_t)0x04000000U)
/* IOMUX_M33C1_PINCM92[Z1] Bits */
#define IOMUX_M33C1_PINCM92_Z1_OFS               (25)                            /* !< Z1 Offset */
#define IOMUX_M33C1_PINCM92_Z1_MASK              ((uint32_t)0x02000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM92_Z1_DISABLE           ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM92_Z1_ENABLE            ((uint32_t)0x02000000U)
/* IOMUX_M33C1_PINCM92[INENA] Bits */
#define IOMUX_M33C1_PINCM92_INENA_OFS            (18)                            /* !< INENA Offset */
#define IOMUX_M33C1_PINCM92_INENA_MASK           ((uint32_t)0x00040000U)         /* !< bit */
#define IOMUX_M33C1_PINCM92_INENA_PADCORE        ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM92_INENA_CORE0          ((uint32_t)0x00040000U)
/* IOMUX_M33C1_PINCM92[PIPU] Bits */
#define IOMUX_M33C1_PINCM92_PIPU_OFS             (17)                            /* !< PIPU Offset */
#define IOMUX_M33C1_PINCM92_PIPU_MASK            ((uint32_t)0x00020000U)         /* !< bit */
#define IOMUX_M33C1_PINCM92_PIPU_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM92_PIPU_ENABLE          ((uint32_t)0x00020000U)
/* IOMUX_M33C1_PINCM92[PIPD] Bits */
#define IOMUX_M33C1_PINCM92_PIPD_OFS             (16)                            /* !< PIPD Offset */
#define IOMUX_M33C1_PINCM92_PIPD_MASK            ((uint32_t)0x00010000U)         /* !< bit */
#define IOMUX_M33C1_PINCM92_PIPD_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM92_PIPD_ENABLE          ((uint32_t)0x00010000U)
/* IOMUX_M33C1_PINCM92[PC] Bits */
#define IOMUX_M33C1_PINCM92_PC_OFS               (7)                             /* !< PC Offset */
#define IOMUX_M33C1_PINCM92_PC_MASK              ((uint32_t)0x00000080U)         /* !< bit */
#define IOMUX_M33C1_PINCM92_PC_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM92_PC_CONNECTED         ((uint32_t)0x00000080U)
/* IOMUX_M33C1_PINCM92[PF] Bits */
#define IOMUX_M33C1_PINCM92_PF_OFS               (0)                             /* !< PF Offset */
#define IOMUX_M33C1_PINCM92_PF_MASK              ((uint32_t)0x00000003U)         /* !< bit */
#define IOMUX_M33C1_PINCM92_PF_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM92_PF_GPIO2_DIO27       ((uint32_t)0x00000001U)
#define IOMUX_M33C1_PINCM92_PF_MCAN1_CANRX       ((uint32_t)0x00000002U)

/* IOMUX_M33C1_PINCM93 Bits */
/* IOMUX_M33C1_PINCM93[WCOMP] Bits */
#define IOMUX_M33C1_PINCM93_WCOMP_OFS            (28)                            /* !< WCOMP Offset */
#define IOMUX_M33C1_PINCM93_WCOMP_MASK           ((uint32_t)0x10000000U)         /* !< Wakeup Compare Value bit */
#define IOMUX_M33C1_PINCM93_WCOMP_MATCH0         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM93_WCOMP_MATCH1         ((uint32_t)0x10000000U)
/* IOMUX_M33C1_PINCM93[WUEN] Bits */
#define IOMUX_M33C1_PINCM93_WUEN_OFS             (27)                            /* !< WUEN Offset */
#define IOMUX_M33C1_PINCM93_WUEN_MASK            ((uint32_t)0x08000000U)         /* !< Wakeup Enable bit */
#define IOMUX_M33C1_PINCM93_WUEN_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM93_WUEN_ENABLE          ((uint32_t)0x08000000U)
/* IOMUX_M33C1_PINCM93[INV] Bits */
#define IOMUX_M33C1_PINCM93_INV_OFS              (26)                            /* !< INV Offset */
#define IOMUX_M33C1_PINCM93_INV_MASK             ((uint32_t)0x04000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM93_INV_DISABLE          ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM93_INV_ENABLE           ((uint32_t)0x04000000U)
/* IOMUX_M33C1_PINCM93[Z1] Bits */
#define IOMUX_M33C1_PINCM93_Z1_OFS               (25)                            /* !< Z1 Offset */
#define IOMUX_M33C1_PINCM93_Z1_MASK              ((uint32_t)0x02000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM93_Z1_DISABLE           ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM93_Z1_ENABLE            ((uint32_t)0x02000000U)
/* IOMUX_M33C1_PINCM93[INENA] Bits */
#define IOMUX_M33C1_PINCM93_INENA_OFS            (18)                            /* !< INENA Offset */
#define IOMUX_M33C1_PINCM93_INENA_MASK           ((uint32_t)0x00040000U)         /* !< bit */
#define IOMUX_M33C1_PINCM93_INENA_PADCORE        ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM93_INENA_CORE0          ((uint32_t)0x00040000U)
/* IOMUX_M33C1_PINCM93[PIPU] Bits */
#define IOMUX_M33C1_PINCM93_PIPU_OFS             (17)                            /* !< PIPU Offset */
#define IOMUX_M33C1_PINCM93_PIPU_MASK            ((uint32_t)0x00020000U)         /* !< bit */
#define IOMUX_M33C1_PINCM93_PIPU_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM93_PIPU_ENABLE          ((uint32_t)0x00020000U)
/* IOMUX_M33C1_PINCM93[PIPD] Bits */
#define IOMUX_M33C1_PINCM93_PIPD_OFS             (16)                            /* !< PIPD Offset */
#define IOMUX_M33C1_PINCM93_PIPD_MASK            ((uint32_t)0x00010000U)         /* !< bit */
#define IOMUX_M33C1_PINCM93_PIPD_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM93_PIPD_ENABLE          ((uint32_t)0x00010000U)
/* IOMUX_M33C1_PINCM93[PC] Bits */
#define IOMUX_M33C1_PINCM93_PC_OFS               (7)                             /* !< PC Offset */
#define IOMUX_M33C1_PINCM93_PC_MASK              ((uint32_t)0x00000080U)         /* !< bit */
#define IOMUX_M33C1_PINCM93_PC_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM93_PC_CONNECTED         ((uint32_t)0x00000080U)
/* IOMUX_M33C1_PINCM93[PF] Bits */
#define IOMUX_M33C1_PINCM93_PF_OFS               (0)                             /* !< PF Offset */
#define IOMUX_M33C1_PINCM93_PF_MASK              ((uint32_t)0x00000007U)         /* !< bit */
#define IOMUX_M33C1_PINCM93_PF_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM93_PF_GPIO2_DIO28       ((uint32_t)0x00000001U)
#define IOMUX_M33C1_PINCM93_PF_SPGSS2_U2_SCLK_SCL_RX ((uint32_t)0x00000002U)
#define IOMUX_M33C1_PINCM93_PF_SPGSS1_U4_TX      ((uint32_t)0x00000004U)

/* IOMUX_M33C1_PINCM94 Bits */
/* IOMUX_M33C1_PINCM94[WCOMP] Bits */
#define IOMUX_M33C1_PINCM94_WCOMP_OFS            (28)                            /* !< WCOMP Offset */
#define IOMUX_M33C1_PINCM94_WCOMP_MASK           ((uint32_t)0x10000000U)         /* !< Wakeup Compare Value bit */
#define IOMUX_M33C1_PINCM94_WCOMP_MATCH0         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM94_WCOMP_MATCH1         ((uint32_t)0x10000000U)
/* IOMUX_M33C1_PINCM94[WUEN] Bits */
#define IOMUX_M33C1_PINCM94_WUEN_OFS             (27)                            /* !< WUEN Offset */
#define IOMUX_M33C1_PINCM94_WUEN_MASK            ((uint32_t)0x08000000U)         /* !< Wakeup Enable bit */
#define IOMUX_M33C1_PINCM94_WUEN_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM94_WUEN_ENABLE          ((uint32_t)0x08000000U)
/* IOMUX_M33C1_PINCM94[INV] Bits */
#define IOMUX_M33C1_PINCM94_INV_OFS              (26)                            /* !< INV Offset */
#define IOMUX_M33C1_PINCM94_INV_MASK             ((uint32_t)0x04000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM94_INV_DISABLE          ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM94_INV_ENABLE           ((uint32_t)0x04000000U)
/* IOMUX_M33C1_PINCM94[Z1] Bits */
#define IOMUX_M33C1_PINCM94_Z1_OFS               (25)                            /* !< Z1 Offset */
#define IOMUX_M33C1_PINCM94_Z1_MASK              ((uint32_t)0x02000000U)         /* !< bit */
#define IOMUX_M33C1_PINCM94_Z1_DISABLE           ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM94_Z1_ENABLE            ((uint32_t)0x02000000U)
/* IOMUX_M33C1_PINCM94[INENA] Bits */
#define IOMUX_M33C1_PINCM94_INENA_OFS            (18)                            /* !< INENA Offset */
#define IOMUX_M33C1_PINCM94_INENA_MASK           ((uint32_t)0x00040000U)         /* !< bit */
#define IOMUX_M33C1_PINCM94_INENA_PADCORE        ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM94_INENA_CORE0          ((uint32_t)0x00040000U)
/* IOMUX_M33C1_PINCM94[PIPU] Bits */
#define IOMUX_M33C1_PINCM94_PIPU_OFS             (17)                            /* !< PIPU Offset */
#define IOMUX_M33C1_PINCM94_PIPU_MASK            ((uint32_t)0x00020000U)         /* !< bit */
#define IOMUX_M33C1_PINCM94_PIPU_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM94_PIPU_ENABLE          ((uint32_t)0x00020000U)
/* IOMUX_M33C1_PINCM94[PIPD] Bits */
#define IOMUX_M33C1_PINCM94_PIPD_OFS             (16)                            /* !< PIPD Offset */
#define IOMUX_M33C1_PINCM94_PIPD_MASK            ((uint32_t)0x00010000U)         /* !< bit */
#define IOMUX_M33C1_PINCM94_PIPD_DISABLE         ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM94_PIPD_ENABLE          ((uint32_t)0x00010000U)
/* IOMUX_M33C1_PINCM94[PC] Bits */
#define IOMUX_M33C1_PINCM94_PC_OFS               (7)                             /* !< PC Offset */
#define IOMUX_M33C1_PINCM94_PC_MASK              ((uint32_t)0x00000080U)         /* !< bit */
#define IOMUX_M33C1_PINCM94_PC_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM94_PC_CONNECTED         ((uint32_t)0x00000080U)
/* IOMUX_M33C1_PINCM94[PF] Bits */
#define IOMUX_M33C1_PINCM94_PF_OFS               (0)                             /* !< PF Offset */
#define IOMUX_M33C1_PINCM94_PF_MASK              ((uint32_t)0x00000003U)         /* !< bit */
#define IOMUX_M33C1_PINCM94_PF_UNCONNECTED       ((uint32_t)0x00000000U)
#define IOMUX_M33C1_PINCM94_PF_GPIO2_DIO29       ((uint32_t)0x00000001U)
#define IOMUX_M33C1_PINCM94_PF_GPTIMER16BADV4CC1_CCP1_CMPL ((uint32_t)0x00000002U)
#define IOMUX_M33C1_PINCM94_PF_SPGSS2_U2_PICO_SDA_TX ((uint32_t)0x00000003U)


#ifdef __cplusplus
}
#endif

#endif /* ti_devices_msp_peripherals_hw_iomux_m33c1__include */

