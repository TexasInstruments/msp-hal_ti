/*****************************************************************************

  Copyright (C) 2024 Texas Instruments Incorporated - http://www.ti.com/ 

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

#ifndef ti_devices_msp_peripherals_hw_anacomp0__include
#define ti_devices_msp_peripherals_hw_anacomp0__include

/* This preliminary header file does not have a version number */
/* Filename: hw_anacomp0.h */
/* MMR revised: 2024-11-25 06:21:42 */
/* MMR repo: https://bitbucket.itg.ti.com/projects/cmcu_msp65soc/repos/m33c1 */
/* MMR revision: a0f7dca5d4cf924663986bfa1fdd55dddd7aafe8 */
/* Generator revision: daea8c76dae02d21df5916c27b417fe7c2521b12
   (MInT: 7456bc61ab943d25fa56c4258186ef3874017fc3) */

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
* ANACOMP0 Registers
******************************************************************************/
#define ANACOMP0_LMGMT_DFT_ATRT_OFS              ((uint32_t)0x00001E00U)
#define ANACOMP0_INT_EVENT_OFS                   ((uint32_t)0x00001020U)
#define ANACOMP0_GPRCM_OFS                       ((uint32_t)0x00000800U)
#define ANACOMP0_FUPDATE_OFS                     ((uint32_t)0x00000204U)
#define ANACOMP0_PINCM_OFS                       ((uint32_t)0x00000004U)


/** @addtogroup ANACOMP0_LMGMT_DFT_ATRT
  @{
*/

typedef struct {
  __IO uint32_t TEST0;                             /* !< (@ 0x00001E00) Test 0 */
  __IO uint32_t TEST1;                             /* !< (@ 0x00001E04) Test 1 */
       uint32_t RESERVED0[2];
  __IO uint32_t TEST4;                             /* !< (@ 0x00001E10) Test 4 */
  __IO uint32_t TEST5;                             /* !< (@ 0x00001E14) TEST5 Register */
} ANACOMP0_LMGMT_DFT_ATRT_Regs;

/*@}*/ /* end of group ANACOMP0_LMGMT_DFT_ATRT */

/** @addtogroup ANACOMP0_INT_EVENT
  @{
*/

typedef struct {
  __I  uint32_t IIDX;                              /* !< (@ 0x00001020) Interrupt index */
       uint32_t RESERVED0;
  __IO uint32_t IMASK;                             /* !< (@ 0x00001028) Interrupt mask */
       uint32_t RESERVED1;
  __I  uint32_t RIS;                               /* !< (@ 0x00001030) Raw interrupt status */
       uint32_t RESERVED2;
  __I  uint32_t MIS;                               /* !< (@ 0x00001038) Masked interrupt status */
       uint32_t RESERVED3;
  __O  uint32_t ISET;                              /* !< (@ 0x00001040) Interrupt set */
       uint32_t RESERVED4;
  __O  uint32_t ICLR;                              /* !< (@ 0x00001048) Interrupt clear */
       uint32_t RESERVED5;
} ANACOMP0_INT_EVENT_Regs;

/*@}*/ /* end of group ANACOMP0_INT_EVENT */

/** @addtogroup ANACOMP0_GPRCM
  @{
*/

typedef struct {
  __IO uint32_t PWREN;                             /* !< (@ 0x00000800) Power enable */
  __O  uint32_t RSTCTL;                            /* !< (@ 0x00000804) Reset Control */
  __IO uint32_t CLKCFG;                            /* !< (@ 0x00000808) Peripheral Clock Configuration Register */
       uint32_t RESERVED0[2];
  __I  uint32_t STAT;                              /* !< (@ 0x00000814) Status Register */
} ANACOMP0_GPRCM_Regs;

/*@}*/ /* end of group ANACOMP0_GPRCM */

/** @addtogroup ANACOMP0_FUPDATE
  @{
*/

typedef struct {
  union {
      __O  uint32_t AIN[14];                           /* !< Comparator input channels */
      __I  uint32_t AIN_STAT_AIN[14];
  };
       uint32_t RESERVED0;
  union {
      __O  uint32_t OUT;                               /* !< Comparator output */
      __I  uint32_t OUT_STAT_OUT;
  };
} ANACOMP0_FUPDATE_Regs;

/*@}*/ /* end of group ANACOMP0_FUPDATE */

/** @addtogroup ANACOMP0_PINCM
  @{
*/

typedef struct {
  __IO uint32_t AIN[14];                           /* !< (@ 0x00000004) Comparator input channels */
       uint32_t RESERVED0;
  __IO uint32_t OUT;                               /* !< (@ 0x00000040) Comparator output */
} ANACOMP0_PINCM_Regs;

/*@}*/ /* end of group ANACOMP0_PINCM */

/** @addtogroup ANACOMP0
  @{
*/

typedef struct {
       uint32_t RESERVED0;
  ANACOMP0_PINCM_Regs  PINCM;                             /* !< (@ 0x00000004) */
       uint32_t RESERVED1[112];
  ANACOMP0_FUPDATE_Regs  FUPDATE;                           /* !< (@ 0x00000204) */
       uint32_t RESERVED2[111];
  __IO uint32_t FSUB_0;                            /* !< (@ 0x00000400) Subscriber Port 0 */
  __IO uint32_t FSUB_1;                            /* !< (@ 0x00000404) Subscriber Port 1 */
       uint32_t RESERVED3[15];
  __IO uint32_t FPUB_1;                            /* !< (@ 0x00000444) Publisher port 1 */
       uint32_t RESERVED4[14];
  __IO uint32_t CPU_CONNECT_0;                     /* !< (@ 0x00000480) CPU connect 0 configuration byte */
       uint32_t RESERVED5[223];
  ANACOMP0_GPRCM_Regs  GPRCM;                             /* !< (@ 0x00000800) */
       uint32_t RESERVED6[514];
  ANACOMP0_INT_EVENT_Regs  INT_EVENT[2];                      /* !< (@ 0x00001020) */
       uint32_t RESERVED7[24];
  __IO uint32_t EVT_MODE;                          /* !< (@ 0x000010E0) Event Mode */
       uint32_t RESERVED8[6];
  __I  uint32_t DESC;                              /* !< (@ 0x000010FC) Module Description */
  __IO uint32_t CTL0;                              /* !< (@ 0x00001100) Control 0 */
  __IO uint32_t CTL1;                              /* !< (@ 0x00001104) Control 1 */
  __IO uint32_t CTL2;                              /* !< (@ 0x00001108) Control 2 */
  __IO uint32_t CTL3;                              /* !< (@ 0x0000110C) Control 3 */
       uint32_t RESERVED9[4];
  __I  uint32_t STAT;                              /* !< (@ 0x00001120) Status */
       uint32_t RESERVED10[7];
  __IO uint32_t ANACMPWKUPCTL;                     /* !< (@ 0x00001140) Analog comparison wakeup control register */
  __IO uint32_t ANACMPCTRCTL;                      /* !< (@ 0x00001144) Analog comparison counter control register */
  __IO uint32_t ANACMPDACCODE;                     /* !< (@ 0x00001148) Analog comparison DAC codes */
  __IO uint32_t ANACMPWD;                          /* !< (@ 0x0000114C) Window operation control for analog comparison */
  __I  uint32_t ANACMPCHSTS;                       /* !< (@ 0x00001150) Status flag to indicate input channel event
                                                      genration */
  __O  uint32_t ANACMPCHSTSCLR;                    /* !< (@ 0x00001154) Clear register for ANACMPCHSTS status register */
       uint32_t RESERVED11[810];
  ANACOMP0_LMGMT_DFT_ATRT_Regs  LMGMT_DFT_ATRT;                    /* !< (@ 0x00001E00) */
} ANACOMP0_Regs;

/*@}*/ /* end of group ANACOMP0 */



#if defined ( __CC_ARM )
#pragma no_anon_unions
#endif

/******************************************************************************
* ANACOMP0 Register Control Bits
******************************************************************************/

/* ANACOMP0_TEST0 Bits */
/* ANACOMP0_TEST0[ATB_MUX_BUFSEL] Bits */
#define ANACOMP0_TEST0_ATB_MUX_BUFSEL_OFS        (0)                             /* !< ATB_MUX_BUFSEL Offset */
#define ANACOMP0_TEST0_ATB_MUX_BUFSEL_MASK       ((uint32_t)0x0000000FU)         /* !< This bit field is used to select
                                                                                    ATB mux buffered analog inputs. */
/* ANACOMP0_TEST0[ATB_MUX_UNBUFSEL] Bits */
#define ANACOMP0_TEST0_ATB_MUX_UNBUFSEL_OFS      (8)                             /* !< ATB_MUX_UNBUFSEL Offset */
#define ANACOMP0_TEST0_ATB_MUX_UNBUFSEL_MASK     ((uint32_t)0x00000F00U)         /* !< This bit field is used to select
                                                                                    ATB mux unbuffered analog inputs. */
/* ANACOMP0_TEST0[ATB_UNBUFEN] Bits */
#define ANACOMP0_TEST0_ATB_UNBUFEN_OFS           (29)                            /* !< ATB_UNBUFEN Offset */
#define ANACOMP0_TEST0_ATB_UNBUFEN_MASK          ((uint32_t)0x20000000U)         /* !< This bit is used to enable ATB
                                                                                    unbuffered line */
#define ANACOMP0_TEST0_ATB_UNBUFEN_CLR           ((uint32_t)0x00000000U)         /* !< ATB unbuffered line is disabled */
#define ANACOMP0_TEST0_ATB_UNBUFEN_SET           ((uint32_t)0x20000000U)         /* !< ATB unbuffered line is enabled */
/* ANACOMP0_TEST0[ATB_BUFEN] Bits */
#define ANACOMP0_TEST0_ATB_BUFEN_OFS             (30)                            /* !< ATB_BUFEN Offset */
#define ANACOMP0_TEST0_ATB_BUFEN_MASK            ((uint32_t)0x40000000U)         /* !< This bit is used to enable ATB
                                                                                    buffered line */
#define ANACOMP0_TEST0_ATB_BUFEN_CLR             ((uint32_t)0x00000000U)         /* !< ATB buffered line is disabled */
#define ANACOMP0_TEST0_ATB_BUFEN_SET             ((uint32_t)0x40000000U)         /* !< ATB buffered line is enabled */

/* ANACOMP0_TEST1 Bits */
/* ANACOMP0_TEST1[DTB_MUX_SEL] Bits */
#define ANACOMP0_TEST1_DTB_MUX_SEL_OFS           (0)                             /* !< DTB_MUX_SEL Offset */
#define ANACOMP0_TEST1_DTB_MUX_SEL_MASK          ((uint32_t)0x0000000FU)         /* !< This bit field is used to select
                                                                                    DTB mux digital inputs. */

/* ANACOMP0_TEST4 Bits */
/* ANACOMP0_TEST4[SPAREBITS] Bits */
#define ANACOMP0_TEST4_SPAREBITS_OFS             (0)                             /* !< SPAREBITS Offset */
#define ANACOMP0_TEST4_SPAREBITS_MASK            ((uint32_t)0x000000FFU)         /* !< Spare register bits. These bits are
                                                                                    defined for functional ECO purpose in
                                                                                    design. */
#define ANACOMP0_TEST4_SPAREBITS_MIN             ((uint32_t)0x00000000U)         /* !< Minimum Value */
#define ANACOMP0_TEST4_SPAREBITS_MAX             ((uint32_t)0x000000FFU)         /* !< Maximum Value */

/* ANACOMP0_TEST5 Bits */
/* ANACOMP0_TEST5[HS_COMP_SB_DIS] Bits */
#define ANACOMP0_TEST5_HS_COMP_SB_DIS_OFS        (0)                             /* !< HS_COMP_SB_DIS Offset */
#define ANACOMP0_TEST5_HS_COMP_SB_DIS_MASK       ((uint32_t)0x00000001U)         /* !< Disable HS comp slew boost
                                                                                    implementation. */
#define ANACOMP0_TEST5_HS_COMP_SB_DIS_CLR        ((uint32_t)0x00000000U)         /* !< Enable */
#define ANACOMP0_TEST5_HS_COMP_SB_DIS_SET        ((uint32_t)0x00000001U)         /* !< Disable */
/* ANACOMP0_TEST5[ULP_COMP_SB_DIS] Bits */
#define ANACOMP0_TEST5_ULP_COMP_SB_DIS_OFS       (1)                             /* !< ULP_COMP_SB_DIS Offset */
#define ANACOMP0_TEST5_ULP_COMP_SB_DIS_MASK      ((uint32_t)0x00000002U)         /* !< Disable ULP comp slew boost
                                                                                    implementation. */
#define ANACOMP0_TEST5_ULP_COMP_SB_DIS_CLR       ((uint32_t)0x00000000U)         /* !< Enable */
#define ANACOMP0_TEST5_ULP_COMP_SB_DIS_SET       ((uint32_t)0x00000002U)         /* !< Disable */
/* ANACOMP0_TEST5[HS_COMP_IQQCFG0] Bits */
#define ANACOMP0_TEST5_HS_COMP_IQQCFG0_OFS       (2)                             /* !< HS_COMP_IQQCFG0 Offset */
#define ANACOMP0_TEST5_HS_COMP_IQQCFG0_MASK      ((uint32_t)0x00000004U)         /* !< Increase the IQQ of HS comp by ~67%
                                                                                    to get the desired performance in
                                                                                    terms of delay, offset etc. */
#define ANACOMP0_TEST5_HS_COMP_IQQCFG0_CLR       ((uint32_t)0x00000000U)         /* !< Default value */
#define ANACOMP0_TEST5_HS_COMP_IQQCFG0_SET       ((uint32_t)0x00000004U)         /* !< Increase the value */
/* ANACOMP0_TEST5[HS_COMP_IQQCFG1] Bits */
#define ANACOMP0_TEST5_HS_COMP_IQQCFG1_OFS       (3)                             /* !< HS_COMP_IQQCFG1 Offset */
#define ANACOMP0_TEST5_HS_COMP_IQQCFG1_MASK      ((uint32_t)0x00000008U)         /* !< Increase the IQQ of HS comp by ~17%
                                                                                    to get the desired performance in
                                                                                    terms of delay, offset etc. */
#define ANACOMP0_TEST5_HS_COMP_IQQCFG1_CLR       ((uint32_t)0x00000000U)         /* !< Default value */
#define ANACOMP0_TEST5_HS_COMP_IQQCFG1_SET       ((uint32_t)0x00000008U)         /* !< Increase the value */
/* ANACOMP0_TEST5[HS_COMP_IQQCFG2] Bits */
#define ANACOMP0_TEST5_HS_COMP_IQQCFG2_OFS       (4)                             /* !< HS_COMP_IQQCFG2 Offset */
#define ANACOMP0_TEST5_HS_COMP_IQQCFG2_MASK      ((uint32_t)0x00000010U)         /* !< Decrease the IQQ of HS comp by ~40%
                                                                                    if there is any bias margin issue on
                                                                                    silicon. */
#define ANACOMP0_TEST5_HS_COMP_IQQCFG2_CLR       ((uint32_t)0x00000000U)         /* !< Default value */
#define ANACOMP0_TEST5_HS_COMP_IQQCFG2_SET       ((uint32_t)0x00000010U)         /* !< Decrease the value */
/* ANACOMP0_TEST5[ULP_COMP_IQQCFG0] Bits */
#define ANACOMP0_TEST5_ULP_COMP_IQQCFG0_OFS      (5)                             /* !< ULP_COMP_IQQCFG0 Offset */
#define ANACOMP0_TEST5_ULP_COMP_IQQCFG0_MASK     ((uint32_t)0x00000020U)         /* !< Increase the IQQ of ULP comp by
                                                                                    ~67% to get the desired performance
                                                                                    in terms of delay, offset etc. */
#define ANACOMP0_TEST5_ULP_COMP_IQQCFG0_CLR      ((uint32_t)0x00000000U)         /* !< Default value */
#define ANACOMP0_TEST5_ULP_COMP_IQQCFG0_SET      ((uint32_t)0x00000020U)         /* !< Increase the value */
/* ANACOMP0_TEST5[ULP_COMP_IQQCFG1] Bits */
#define ANACOMP0_TEST5_ULP_COMP_IQQCFG1_OFS      (6)                             /* !< ULP_COMP_IQQCFG1 Offset */
#define ANACOMP0_TEST5_ULP_COMP_IQQCFG1_MASK     ((uint32_t)0x00000040U)         /* !< Increase the IQQ of ULP comp by
                                                                                    ~17% to get the desired performance
                                                                                    in terms of delay, offset etc. */
#define ANACOMP0_TEST5_ULP_COMP_IQQCFG1_CLR      ((uint32_t)0x00000000U)         /* !< Default value */
#define ANACOMP0_TEST5_ULP_COMP_IQQCFG1_SET      ((uint32_t)0x00000040U)         /* !< Increase the value */
/* ANACOMP0_TEST5[ULP_COMP_IQQCFG2] Bits */
#define ANACOMP0_TEST5_ULP_COMP_IQQCFG2_OFS      (7)                             /* !< ULP_COMP_IQQCFG2 Offset */
#define ANACOMP0_TEST5_ULP_COMP_IQQCFG2_MASK     ((uint32_t)0x00000080U)         /* !< Decrease the IQQ of ULP comp by
                                                                                    ~40% if there is any bias margin
                                                                                    issue on silicon. */
#define ANACOMP0_TEST5_ULP_COMP_IQQCFG2_CLR      ((uint32_t)0x00000000U)         /* !< Default value */
#define ANACOMP0_TEST5_ULP_COMP_IQQCFG2_SET      ((uint32_t)0x00000080U)         /* !< Increase the value */
/* ANACOMP0_TEST5[VAR_BUF_IQQCFG0] Bits */
#define ANACOMP0_TEST5_VAR_BUF_IQQCFG0_OFS       (8)                             /* !< VAR_BUF_IQQCFG0 Offset */
#define ANACOMP0_TEST5_VAR_BUF_IQQCFG0_MASK      ((uint32_t)0x00000100U)         /* !< Increase the IQQ of variable
                                                                                    reference buffer by ~67% to get the
                                                                                    desired performance in terms of
                                                                                    stability, enable time etc. */
#define ANACOMP0_TEST5_VAR_BUF_IQQCFG0_CLR       ((uint32_t)0x00000000U)         /* !< Default value */
#define ANACOMP0_TEST5_VAR_BUF_IQQCFG0_SET       ((uint32_t)0x00000100U)         /* !< Increase the value */
/* ANACOMP0_TEST5[VAR_BUF_IQQCFG1] Bits */
#define ANACOMP0_TEST5_VAR_BUF_IQQCFG1_OFS       (9)                             /* !< VAR_BUF_IQQCFG1 Offset */
#define ANACOMP0_TEST5_VAR_BUF_IQQCFG1_MASK      ((uint32_t)0x00000200U)         /* !< Increase the IQQ of variable
                                                                                    reference buffer by ~17% to get the
                                                                                    desired performance in terms of
                                                                                    stability, enable time etc. */
#define ANACOMP0_TEST5_VAR_BUF_IQQCFG1_CLR       ((uint32_t)0x00000000U)         /* !< Default value */
#define ANACOMP0_TEST5_VAR_BUF_IQQCFG1_SET       ((uint32_t)0x00000200U)         /* !< Increase the value */
/* ANACOMP0_TEST5[VAR_BUF_IQQCFG2] Bits */
#define ANACOMP0_TEST5_VAR_BUF_IQQCFG2_OFS       (10)                            /* !< VAR_BUF_IQQCFG2 Offset */
#define ANACOMP0_TEST5_VAR_BUF_IQQCFG2_MASK      ((uint32_t)0x00000400U)         /* !< Decrease the IQQ of variable
                                                                                    reference buffer by ~40% if there is
                                                                                    any bias margin or stability issue on
                                                                                    silicon. */
#define ANACOMP0_TEST5_VAR_BUF_IQQCFG2_CLR       ((uint32_t)0x00000000U)         /* !< Default value */
#define ANACOMP0_TEST5_VAR_BUF_IQQCFG2_SET       ((uint32_t)0x00000400U)         /* !< Decrease the value */
/* ANACOMP0_TEST5[HS_COMP_ST2_DIS] Bits */
#define ANACOMP0_TEST5_HS_COMP_ST2_DIS_OFS       (11)                            /* !< HS_COMP_ST2_DIS Offset */
#define ANACOMP0_TEST5_HS_COMP_ST2_DIS_MASK      ((uint32_t)0x00000800U)         /* !< Disbale the 2nd stage of HS comp
                                                                                    and bring out the 2nd stage current
                                                                                    on ATB. */
#define ANACOMP0_TEST5_HS_COMP_ST2_DIS_CLR       ((uint32_t)0x00000000U)         /* !< Enable */
#define ANACOMP0_TEST5_HS_COMP_ST2_DIS_SET       ((uint32_t)0x00000800U)         /* !< Disable */
/* ANACOMP0_TEST5[ULP_COMP_ST2_DIS] Bits */
#define ANACOMP0_TEST5_ULP_COMP_ST2_DIS_OFS      (12)                            /* !< ULP_COMP_ST2_DIS Offset */
#define ANACOMP0_TEST5_ULP_COMP_ST2_DIS_MASK     ((uint32_t)0x00001000U)         /* !< Disbale the 2nd stage of ULP comp
                                                                                    and bring out the 2nd stage current
                                                                                    on ATB. */
#define ANACOMP0_TEST5_ULP_COMP_ST2_DIS_CLR      ((uint32_t)0x00000000U)         /* !< Enable */
#define ANACOMP0_TEST5_ULP_COMP_ST2_DIS_SET      ((uint32_t)0x00001000U)         /* !< Disable */
/* ANACOMP0_TEST5[KCK_RED_ON] Bits */
#define ANACOMP0_TEST5_KCK_RED_ON_OFS            (13)                            /* !< KCK_RED_ON Offset */
#define ANACOMP0_TEST5_KCK_RED_ON_MASK           ((uint32_t)0x00002000U)         /* !< 0 : No effect 1 : Turns ON kickback
                                                                                    reduction mechanism. */
/* ANACOMP0_TEST5[RED_KCK_STRGTH] Bits */
#define ANACOMP0_TEST5_RED_KCK_STRGTH_OFS        (14)                            /* !< RED_KCK_STRGTH Offset */
#define ANACOMP0_TEST5_RED_KCK_STRGTH_MASK       ((uint32_t)0x00004000U)         /* !< 0 : No effect 1 : Reduces the
                                                                                    strength of Kickback reduction
                                                                                    mechanism. */
/* ANACOMP0_TEST5[INC_KCK_STRGTH] Bits */
#define ANACOMP0_TEST5_INC_KCK_STRGTH_OFS        (15)                            /* !< INC_KCK_STRGTH Offset */
#define ANACOMP0_TEST5_INC_KCK_STRGTH_MASK       ((uint32_t)0x00008000U)         /* !< 0 : No effect 1 : Increases the
                                                                                    strength of kickback reduction
                                                                                    mechanism. */

/* ANACOMP0_IIDX Bits */
/* ANACOMP0_IIDX[STAT] Bits */
#define ANACOMP0_IIDX_STAT_OFS                   (0)                             /* !< STAT Offset */
#define ANACOMP0_IIDX_STAT_MASK                  ((uint32_t)0x00000003U)         /* !< Interrupt index status */
#define ANACOMP0_IIDX_STAT_NO_INTR               ((uint32_t)0x00000000U)         /* !< No pending interrupt */
#define ANACOMP0_IIDX_STAT_COMPIFG               ((uint32_t)0x00000002U)         /* !< Comparator output interrupt */
#define ANACOMP0_IIDX_STAT_COMPINVIFG            ((uint32_t)0x00000003U)         /* !< Comparator output inverted
                                                                                    interrupt */
#define ANACOMP0_IIDX_STAT_OUTRDYIFG             ((uint32_t)0x00000004U)         /* !< Comparator output ready interrupt */

/* ANACOMP0_IMASK Bits */
/* ANACOMP0_IMASK[COMPIFG] Bits */
#define ANACOMP0_IMASK_COMPIFG_OFS               (1)                             /* !< COMPIFG Offset */
#define ANACOMP0_IMASK_COMPIFG_MASK              ((uint32_t)0x00000002U)         /* !< Masks COMPIFG */
#define ANACOMP0_IMASK_COMPIFG_CLR               ((uint32_t)0x00000000U)         /* !< Interrupt is masked out */
#define ANACOMP0_IMASK_COMPIFG_SET               ((uint32_t)0x00000002U)         /* !< Interrupt will request an interrupt
                                                                                    service routine and corresponding bit
                                                                                    in MIS will be set */
/* ANACOMP0_IMASK[COMPINVIFG] Bits */
#define ANACOMP0_IMASK_COMPINVIFG_OFS            (2)                             /* !< COMPINVIFG Offset */
#define ANACOMP0_IMASK_COMPINVIFG_MASK           ((uint32_t)0x00000004U)         /* !< Masks COMPINVIFG */
#define ANACOMP0_IMASK_COMPINVIFG_CLR            ((uint32_t)0x00000000U)         /* !< Interrupt is masked out */
#define ANACOMP0_IMASK_COMPINVIFG_SET            ((uint32_t)0x00000004U)         /* !< Interrupt will request an interrupt
                                                                                    service routine and corresponding bit
                                                                                    in MIS will be set */
/* ANACOMP0_IMASK[OUTRDYIFG] Bits */
#define ANACOMP0_IMASK_OUTRDYIFG_OFS             (3)                             /* !< OUTRDYIFG Offset */
#define ANACOMP0_IMASK_OUTRDYIFG_MASK            ((uint32_t)0x00000008U)         /* !< Masks OUTRDYIFG */
#define ANACOMP0_IMASK_OUTRDYIFG_CLR             ((uint32_t)0x00000000U)         /* !< Interrupt is masked out */
#define ANACOMP0_IMASK_OUTRDYIFG_SET             ((uint32_t)0x00000008U)         /* !< Interrupt will request an interrupt
                                                                                    service routine and corresponding bit
                                                                                    in MIS will be set */

/* ANACOMP0_RIS Bits */
/* ANACOMP0_RIS[COMPIFG] Bits */
#define ANACOMP0_RIS_COMPIFG_OFS                 (1)                             /* !< COMPIFG Offset */
#define ANACOMP0_RIS_COMPIFG_MASK                ((uint32_t)0x00000002U)         /* !< Raw interrupt status for comparator
                                                                                    output interrupt flag. The IES bit
                                                                                    defines the transition of the
                                                                                    comparator output setting this bit. */
#define ANACOMP0_RIS_COMPIFG_CLR                 ((uint32_t)0x00000000U)         /* !< No interrupt pending */
#define ANACOMP0_RIS_COMPIFG_SET                 ((uint32_t)0x00000002U)         /* !< Interrupt pending */
/* ANACOMP0_RIS[COMPINVIFG] Bits */
#define ANACOMP0_RIS_COMPINVIFG_OFS              (2)                             /* !< COMPINVIFG Offset */
#define ANACOMP0_RIS_COMPINVIFG_MASK             ((uint32_t)0x00000004U)         /* !< Raw interrupt status for comparator
                                                                                    output inverted interrupt flag. The
                                                                                    IES bit defines the transition of the
                                                                                    comparator output setting this bit. */
#define ANACOMP0_RIS_COMPINVIFG_CLR              ((uint32_t)0x00000000U)         /* !< No interrupt pending */
#define ANACOMP0_RIS_COMPINVIFG_SET              ((uint32_t)0x00000004U)         /* !< Interrupt pending */
/* ANACOMP0_RIS[OUTRDYIFG] Bits */
#define ANACOMP0_RIS_OUTRDYIFG_OFS               (3)                             /* !< OUTRDYIFG Offset */
#define ANACOMP0_RIS_OUTRDYIFG_MASK              ((uint32_t)0x00000008U)         /* !< Raw interrupt status for comparator
                                                                                    output ready interrupt flag. This bit
                                                                                    is set when the comparator output is
                                                                                    valid. */
#define ANACOMP0_RIS_OUTRDYIFG_CLR               ((uint32_t)0x00000000U)         /* !< No interrupt pending */
#define ANACOMP0_RIS_OUTRDYIFG_SET               ((uint32_t)0x00000008U)         /* !< Interrupt pending */

/* ANACOMP0_MIS Bits */
/* ANACOMP0_MIS[COMPIFG] Bits */
#define ANACOMP0_MIS_COMPIFG_OFS                 (1)                             /* !< COMPIFG Offset */
#define ANACOMP0_MIS_COMPIFG_MASK                ((uint32_t)0x00000002U)         /* !< Masked interrupt status for COMPIFG */
#define ANACOMP0_MIS_COMPIFG_CLR                 ((uint32_t)0x00000000U)         /* !< COMPIFG does not request an
                                                                                    interrupt service routine */
#define ANACOMP0_MIS_COMPIFG_SET                 ((uint32_t)0x00000002U)         /* !< COMPIFG requests an interrupt
                                                                                    service routine */
/* ANACOMP0_MIS[COMPINVIFG] Bits */
#define ANACOMP0_MIS_COMPINVIFG_OFS              (2)                             /* !< COMPINVIFG Offset */
#define ANACOMP0_MIS_COMPINVIFG_MASK             ((uint32_t)0x00000004U)         /* !< Masked interrupt status for
                                                                                    COMPINVIFG */
#define ANACOMP0_MIS_COMPINVIFG_CLR              ((uint32_t)0x00000000U)         /* !< COMPINVIFG does not request an
                                                                                    interrupt service routine */
#define ANACOMP0_MIS_COMPINVIFG_SET              ((uint32_t)0x00000004U)         /* !< COMPINVIFG requests an interrupt
                                                                                    service routine */
/* ANACOMP0_MIS[OUTRDYIFG] Bits */
#define ANACOMP0_MIS_OUTRDYIFG_OFS               (3)                             /* !< OUTRDYIFG Offset */
#define ANACOMP0_MIS_OUTRDYIFG_MASK              ((uint32_t)0x00000008U)         /* !< Masked interrupt status for
                                                                                    OUTRDYIFG */
#define ANACOMP0_MIS_OUTRDYIFG_CLR               ((uint32_t)0x00000000U)         /* !< OUTRDYIFG does not request an
                                                                                    interrupt service routine */
#define ANACOMP0_MIS_OUTRDYIFG_SET               ((uint32_t)0x00000008U)         /* !< OUTRDYIFG requests an interrupt
                                                                                    service routine */

/* ANACOMP0_ISET Bits */
/* ANACOMP0_ISET[COMPIFG] Bits */
#define ANACOMP0_ISET_COMPIFG_OFS                (1)                             /* !< COMPIFG Offset */
#define ANACOMP0_ISET_COMPIFG_MASK               ((uint32_t)0x00000002U)         /* !< Sets COMPIFG in RIS register */
#define ANACOMP0_ISET_COMPIFG_NO_EFFECT          ((uint32_t)0x00000000U)         /* !< Writing a 0 has no effect */
#define ANACOMP0_ISET_COMPIFG_SET                ((uint32_t)0x00000002U)         /* !< RIS bit corresponding to COMPIFG is
                                                                                    set */
/* ANACOMP0_ISET[COMPINVIFG] Bits */
#define ANACOMP0_ISET_COMPINVIFG_OFS             (2)                             /* !< COMPINVIFG Offset */
#define ANACOMP0_ISET_COMPINVIFG_MASK            ((uint32_t)0x00000004U)         /* !< Sets COMPINVIFG in RIS register */
#define ANACOMP0_ISET_COMPINVIFG_NO_EFFECT       ((uint32_t)0x00000000U)         /* !< Writing a 0 has no effect */
#define ANACOMP0_ISET_COMPINVIFG_SET             ((uint32_t)0x00000004U)         /* !< RIS bit corresponding to COMPINVIFG
                                                                                    is set */
/* ANACOMP0_ISET[OUTRDYIFG] Bits */
#define ANACOMP0_ISET_OUTRDYIFG_OFS              (3)                             /* !< OUTRDYIFG Offset */
#define ANACOMP0_ISET_OUTRDYIFG_MASK             ((uint32_t)0x00000008U)         /* !< Sets OUTRDYIFG in RIS register */
#define ANACOMP0_ISET_OUTRDYIFG_NO_EFFECT        ((uint32_t)0x00000000U)         /* !< Writing a 0 has no effect */
#define ANACOMP0_ISET_OUTRDYIFG_SET              ((uint32_t)0x00000008U)         /* !< RIS bit corresponding to OUTRDYIFG
                                                                                    is set */

/* ANACOMP0_ICLR Bits */
/* ANACOMP0_ICLR[COMPIFG] Bits */
#define ANACOMP0_ICLR_COMPIFG_OFS                (1)                             /* !< COMPIFG Offset */
#define ANACOMP0_ICLR_COMPIFG_MASK               ((uint32_t)0x00000002U)         /* !< Clears COMPIFG in RIS register */
#define ANACOMP0_ICLR_COMPIFG_NO_EFFECT          ((uint32_t)0x00000000U)         /* !< Writing a 0 has no effect */
#define ANACOMP0_ICLR_COMPIFG_CLR                ((uint32_t)0x00000002U)         /* !< RIS bit corresponding to COMPIFG is
                                                                                    cleared */
/* ANACOMP0_ICLR[COMPINVIFG] Bits */
#define ANACOMP0_ICLR_COMPINVIFG_OFS             (2)                             /* !< COMPINVIFG Offset */
#define ANACOMP0_ICLR_COMPINVIFG_MASK            ((uint32_t)0x00000004U)         /* !< Clears COMPINVIFG in RIS register */
#define ANACOMP0_ICLR_COMPINVIFG_NO_EFFECT       ((uint32_t)0x00000000U)         /* !< Writing a 0 has no effect */
#define ANACOMP0_ICLR_COMPINVIFG_CLR             ((uint32_t)0x00000004U)         /* !< RIS bit corresponding to COMPINVIFG
                                                                                    is cleared */
/* ANACOMP0_ICLR[OUTRDYIFG] Bits */
#define ANACOMP0_ICLR_OUTRDYIFG_OFS              (3)                             /* !< OUTRDYIFG Offset */
#define ANACOMP0_ICLR_OUTRDYIFG_MASK             ((uint32_t)0x00000008U)         /* !< Clears OUTRDYIFG in RIS register */
#define ANACOMP0_ICLR_OUTRDYIFG_NO_EFFECT        ((uint32_t)0x00000000U)         /* !< Writing a 0 has no effect */
#define ANACOMP0_ICLR_OUTRDYIFG_CLR              ((uint32_t)0x00000008U)         /* !< RIS bit corresponding to OUTRDYIFG
                                                                                    is cleared */

/* ANACOMP0_PWREN Bits */
/* ANACOMP0_PWREN[ENABLE] Bits */
#define ANACOMP0_PWREN_ENABLE_OFS                (0)                             /* !< ENABLE Offset */
#define ANACOMP0_PWREN_ENABLE_MASK               ((uint32_t)0x00000001U)         /* !< Enable the power */
#define ANACOMP0_PWREN_ENABLE_DISABLE            ((uint32_t)0x00000000U)         /* !< Disable Power */
#define ANACOMP0_PWREN_ENABLE_ENABLE             ((uint32_t)0x00000001U)         /* !< Enable Power */
/* ANACOMP0_PWREN[KEY] Bits */
#define ANACOMP0_PWREN_KEY_OFS                   (24)                            /* !< KEY Offset */
#define ANACOMP0_PWREN_KEY_MASK                  ((uint32_t)0xFF000000U)         /* !< KEY to allow Power State Change */
#define ANACOMP0_PWREN_KEY_UNLOCK_W              ((uint32_t)0x26000000U)         /* !< KEY to allow write access to this
                                                                                    register */

/* ANACOMP0_RSTCTL Bits */
/* ANACOMP0_RSTCTL[RESETSTKYCLR] Bits */
#define ANACOMP0_RSTCTL_RESETSTKYCLR_OFS         (1)                             /* !< RESETSTKYCLR Offset */
#define ANACOMP0_RSTCTL_RESETSTKYCLR_MASK        ((uint32_t)0x00000002U)         /* !< Clear the RESETSTKY bit in the STAT
                                                                                    register */
#define ANACOMP0_RSTCTL_RESETSTKYCLR_NOP         ((uint32_t)0x00000000U)         /* !< Writing 0 has no effect */
#define ANACOMP0_RSTCTL_RESETSTKYCLR_CLR         ((uint32_t)0x00000002U)         /* !< Clear reset sticky bit */
/* ANACOMP0_RSTCTL[RESETASSERT] Bits */
#define ANACOMP0_RSTCTL_RESETASSERT_OFS          (0)                             /* !< RESETASSERT Offset */
#define ANACOMP0_RSTCTL_RESETASSERT_MASK         ((uint32_t)0x00000001U)         /* !< Assert reset to the peripheral */
#define ANACOMP0_RSTCTL_RESETASSERT_NOP          ((uint32_t)0x00000000U)         /* !< Writing 0 has no effect */
#define ANACOMP0_RSTCTL_RESETASSERT_ASSERT       ((uint32_t)0x00000001U)         /* !< Assert reset */
/* ANACOMP0_RSTCTL[KEY] Bits */
#define ANACOMP0_RSTCTL_KEY_OFS                  (24)                            /* !< KEY Offset */
#define ANACOMP0_RSTCTL_KEY_MASK                 ((uint32_t)0xFF000000U)         /* !< Unlock key */
#define ANACOMP0_RSTCTL_KEY_UNLOCK_W             ((uint32_t)0xB1000000U)         /* !< KEY to allow write access to this
                                                                                    register */

/* ANACOMP0_CLKCFG Bits */
/* ANACOMP0_CLKCFG[KEY] Bits */
#define ANACOMP0_CLKCFG_KEY_OFS                  (24)                            /* !< KEY Offset */
#define ANACOMP0_CLKCFG_KEY_MASK                 ((uint32_t)0xFF000000U)         /* !< KEY to Allow State Change -- 0xA9 */
#define ANACOMP0_CLKCFG_KEY_UNLOCK               ((uint32_t)0xA9000000U)         /* !< Key value to be used in writing to
                                                                                    this register for the write to take
                                                                                    effect. */
/* ANACOMP0_CLKCFG[BLOCKASYNC] Bits */
#define ANACOMP0_CLKCFG_BLOCKASYNC_OFS           (8)                             /* !< BLOCKASYNC Offset */
#define ANACOMP0_CLKCFG_BLOCKASYNC_MASK          ((uint32_t)0x00000100U)         /* !< Async Clock Request is blocked from
                                                                                    starting SYSOSC or forcing bus clock
                                                                                    to 32MHz */
#define ANACOMP0_CLKCFG_BLOCKASYNC_DISABLE       ((uint32_t)0x00000000U)         /* !< disable COMP to request SYSOSC */
#define ANACOMP0_CLKCFG_BLOCKASYNC_ENABLE        ((uint32_t)0x00000100U)         /* !< enable COMP to request SYSOSC */

/* ANACOMP0_GPRCM_STAT Bits */
/* ANACOMP0_GPRCM_STAT[RESETSTKY] Bits */
#define ANACOMP0_GPRCM_STAT_RESETSTKY_OFS        (16)                            /* !< RESETSTKY Offset */
#define ANACOMP0_GPRCM_STAT_RESETSTKY_MASK       ((uint32_t)0x00010000U)         /* !< This bit indicates, if the
                                                                                    peripheral was reset, since this bit
                                                                                    was cleared by RESETSTKYCLR in the
                                                                                    RSTCTL register */
#define ANACOMP0_GPRCM_STAT_RESETSTKY_NORES      ((uint32_t)0x00000000U)         /* !< The peripheral has not been reset
                                                                                    since this bit was last cleared by
                                                                                    RESETSTKYCLR in the RSTCTL register */
#define ANACOMP0_GPRCM_STAT_RESETSTKY_RESET      ((uint32_t)0x00010000U)         /* !< The peripheral was reset since the
                                                                                    last bit clear */

/* ANACOMP0_FUPDATE_AIN Bits */
/* ANACOMP0_FUPDATE_AIN[IOADDR] Bits */
#define ANACOMP0_FUPDATE_AIN_IOADDR_OFS          (2)                             /* !< IOADDR Offset */
#define ANACOMP0_FUPDATE_AIN_IOADDR_MASK         ((uint32_t)0x0FFFFFFCU)         /* !< IO Address This is the address that
                                                                                    corresponds to the SOC address[27:2]
                                                                                    of the module IP instance specific IO
                                                                                    signal in the Full Write subregion of
                                                                                    the pinmux subregion. */
/* ANACOMP0_FUPDATE_AIN[LOCK] Bits */
#define ANACOMP0_FUPDATE_AIN_LOCK_OFS            (1)                             /* !< LOCK Offset */
#define ANACOMP0_FUPDATE_AIN_LOCK_MASK           ((uint32_t)0x00000002U)         /* !< Sets lock bit */
#define ANACOMP0_FUPDATE_AIN_LOCK_NOEFFECT       ((uint32_t)0x00000000U)         /* !< Writing this value has no effect */
#define ANACOMP0_FUPDATE_AIN_LOCK_LOCK           ((uint32_t)0x00000002U)         /* !< Set channel lock bit */
/* ANACOMP0_FUPDATE_AIN[GSEL] Bits */
#define ANACOMP0_FUPDATE_AIN_GSEL_OFS            (0)                             /* !< GSEL Offset */
#define ANACOMP0_FUPDATE_AIN_GSEL_MASK           ((uint32_t)0x00000001U)         /* !< GPIO channel Select 0: Select the
                                                                                    P-Channel for the F update 1: Select
                                                                                    the G-Channel for the F update */
#define ANACOMP0_FUPDATE_AIN_GSEL_PCHAN          ((uint32_t)0x00000000U)         /* !< Select the P-Channel for the F
                                                                                    update */
#define ANACOMP0_FUPDATE_AIN_GSEL_GCHAN          ((uint32_t)0x00000001U)         /* !< Select the G-Channel for the F
                                                                                    update */

/* ANACOMP0_STAT_AIN Bits */
/* ANACOMP0_STAT_AIN[PAD] Bits */
#define ANACOMP0_STAT_AIN_PAD_OFS                (0)                             /* !< PAD Offset */
#define ANACOMP0_STAT_AIN_PAD_MASK               ((uint32_t)0x000000FFU)         /* !< Pad Assignment 0: No PAD is
                                                                                    assigned to this function All
                                                                                    others:Pad Number assigned to this
                                                                                    function */

/* ANACOMP0_FUPDATE_OUT Bits */
/* ANACOMP0_FUPDATE_OUT[IOADDR] Bits */
#define ANACOMP0_FUPDATE_OUT_IOADDR_OFS          (2)                             /* !< IOADDR Offset */
#define ANACOMP0_FUPDATE_OUT_IOADDR_MASK         ((uint32_t)0x0FFFFFFCU)         /* !< IO Address This is the address that
                                                                                    corresponds to the SOC address[27:2]
                                                                                    of the module IP instance specific IO
                                                                                    signal in the Full Write subregion of
                                                                                    the pinmux subregion. */
/* ANACOMP0_FUPDATE_OUT[LOCK] Bits */
#define ANACOMP0_FUPDATE_OUT_LOCK_OFS            (1)                             /* !< LOCK Offset */
#define ANACOMP0_FUPDATE_OUT_LOCK_MASK           ((uint32_t)0x00000002U)         /* !< Sets lock bit */
#define ANACOMP0_FUPDATE_OUT_LOCK_NOEFFECT       ((uint32_t)0x00000000U)         /* !< Writing this value has no effect */
#define ANACOMP0_FUPDATE_OUT_LOCK_LOCK           ((uint32_t)0x00000002U)         /* !< Set channel lock bit */
/* ANACOMP0_FUPDATE_OUT[GSEL] Bits */
#define ANACOMP0_FUPDATE_OUT_GSEL_OFS            (0)                             /* !< GSEL Offset */
#define ANACOMP0_FUPDATE_OUT_GSEL_MASK           ((uint32_t)0x00000001U)         /* !< GPIO channel Select 0: Select the
                                                                                    P-Channel for the F update 1: Select
                                                                                    the G-Channel for the F update */
#define ANACOMP0_FUPDATE_OUT_GSEL_PCHAN          ((uint32_t)0x00000000U)         /* !< Select the P-Channel for the F
                                                                                    update */
#define ANACOMP0_FUPDATE_OUT_GSEL_GCHAN          ((uint32_t)0x00000001U)         /* !< Select the G-Channel for the F
                                                                                    update */

/* ANACOMP0_STAT_OUT Bits */
/* ANACOMP0_STAT_OUT[PAD] Bits */
#define ANACOMP0_STAT_OUT_PAD_OFS                (0)                             /* !< PAD Offset */
#define ANACOMP0_STAT_OUT_PAD_MASK               ((uint32_t)0x000000FFU)         /* !< Pad Assignment 0: No PAD is
                                                                                    assigned to this function All
                                                                                    others:Pad Number assigned to this
                                                                                    function */

/* ANACOMP0_PINCM_AIN Bits */
/* ANACOMP0_PINCM_AIN[PSTATE] Bits */
#define ANACOMP0_PINCM_AIN_PSTATE_OFS            (6)                             /* !< PSTATE Offset */
#define ANACOMP0_PINCM_AIN_PSTATE_MASK           ((uint32_t)0x000000C0U)         /* !< Peripheral-Analog Channel State */
#define ANACOMP0_PINCM_AIN_PSTATE_UNASSIGNED     ((uint32_t)0x00000000U)         /* !< P-Channel is in Unassigned State */
#define ANACOMP0_PINCM_AIN_PSTATE_HANDOVER       ((uint32_t)0x00000040U)         /* !< P-Channel is in Handover State */
#define ANACOMP0_PINCM_AIN_PSTATE_CONC_NOT_LOCKED ((uint32_t)0x00000080U)         /* !< P-Channle is in Connected State and
                                                                                    not Locked (That is F field is
                                                                                    allowed to change without going back
                                                                                    through Unassigned state) */
#define ANACOMP0_PINCM_AIN_PSTATE_CONC_LOCKED    ((uint32_t)0x000000C0U)         /* !< P-Channel is in Connected State and
                                                                                    Locked (That is F field is not
                                                                                    allowed to change to a different
                                                                                    non-Zero value until both G and P
                                                                                    channels go to Unassigned) */
/* ANACOMP0_PINCM_AIN[GSTATE] Bits */
#define ANACOMP0_PINCM_AIN_GSTATE_OFS            (14)                            /* !< GSTATE Offset */
#define ANACOMP0_PINCM_AIN_GSTATE_MASK           ((uint32_t)0x0000C000U)         /* !< GPIO Channel State */
#define ANACOMP0_PINCM_AIN_GSTATE_UNASSIGNED     ((uint32_t)0x00000000U)         /* !< G-Channel is in Unassigned State */
#define ANACOMP0_PINCM_AIN_GSTATE_HANDOVER       ((uint32_t)0x00004000U)         /* !< G-Channel is in Handover State */
#define ANACOMP0_PINCM_AIN_GSTATE_CONC_NOT_LOCKED ((uint32_t)0x00008000U)         /* !< G-Channle is in Connected State and
                                                                                    not Locked (That is F field is
                                                                                    allowed to change without going back
                                                                                    through Unassigned state) */
#define ANACOMP0_PINCM_AIN_GSTATE_CONC_LOCKED    ((uint32_t)0x0000C000U)         /* !< G-Channel is in Connected State and
                                                                                    Locked (That is F field is not
                                                                                    allowed to change to a different
                                                                                    non-Zero value until both G and P
                                                                                    channels go to Unassigned) */

/* ANACOMP0_PINCM_OUT Bits */
/* ANACOMP0_PINCM_OUT[PSTATE] Bits */
#define ANACOMP0_PINCM_OUT_PSTATE_OFS            (6)                             /* !< PSTATE Offset */
#define ANACOMP0_PINCM_OUT_PSTATE_MASK           ((uint32_t)0x000000C0U)         /* !< Peripheral-Analog Channel State */
#define ANACOMP0_PINCM_OUT_PSTATE_UNASSIGNED     ((uint32_t)0x00000000U)         /* !< P-Channel is in Unassigned State */
#define ANACOMP0_PINCM_OUT_PSTATE_HANDOVER       ((uint32_t)0x00000040U)         /* !< P-Channel is in Handover State */
#define ANACOMP0_PINCM_OUT_PSTATE_CONC_NOT_LOCKED ((uint32_t)0x00000080U)         /* !< P-Channle is in Connected State and
                                                                                    not Locked (That is F field is
                                                                                    allowed to change without going back
                                                                                    through Unassigned state) */
#define ANACOMP0_PINCM_OUT_PSTATE_CONC_LOCKED    ((uint32_t)0x000000C0U)         /* !< P-Channel is in Connected State and
                                                                                    Locked (That is F field is not
                                                                                    allowed to change to a different
                                                                                    non-Zero value until both G and P
                                                                                    channels go to Unassigned) */
/* ANACOMP0_PINCM_OUT[GSTATE] Bits */
#define ANACOMP0_PINCM_OUT_GSTATE_OFS            (14)                            /* !< GSTATE Offset */
#define ANACOMP0_PINCM_OUT_GSTATE_MASK           ((uint32_t)0x0000C000U)         /* !< GPIO Channel State */
#define ANACOMP0_PINCM_OUT_GSTATE_UNASSIGNED     ((uint32_t)0x00000000U)         /* !< G-Channel is in Unassigned State */
#define ANACOMP0_PINCM_OUT_GSTATE_HANDOVER       ((uint32_t)0x00004000U)         /* !< G-Channel is in Handover State */
#define ANACOMP0_PINCM_OUT_GSTATE_CONC_NOT_LOCKED ((uint32_t)0x00008000U)         /* !< G-Channle is in Connected State and
                                                                                    not Locked (That is F field is
                                                                                    allowed to change without going back
                                                                                    through Unassigned state) */
#define ANACOMP0_PINCM_OUT_GSTATE_CONC_LOCKED    ((uint32_t)0x0000C000U)         /* !< G-Channel is in Connected State and
                                                                                    Locked (That is F field is not
                                                                                    allowed to change to a different
                                                                                    non-Zero value until both G and P
                                                                                    channels go to Unassigned) */
/* ANACOMP0_PINCM_OUT[PIPD] Bits */
#define ANACOMP0_PINCM_OUT_PIPD_OFS              (16)                            /* !< PIPD Offset */
#define ANACOMP0_PINCM_OUT_PIPD_MASK             ((uint32_t)0x00010000U)         /* !< Pull down enable */
#define ANACOMP0_PINCM_OUT_PIPD_NO_PULL_DOWN     ((uint32_t)0x00000000U)         /* !< No pull down */
#define ANACOMP0_PINCM_OUT_PIPD_PULL_DOWN        ((uint32_t)0x00010000U)         /* !< Pull down */
/* ANACOMP0_PINCM_OUT[PIPU] Bits */
#define ANACOMP0_PINCM_OUT_PIPU_OFS              (17)                            /* !< PIPU Offset */
#define ANACOMP0_PINCM_OUT_PIPU_MASK             ((uint32_t)0x00020000U)         /* !< Pull up enable */
#define ANACOMP0_PINCM_OUT_PIPU_NO_PULL_UP       ((uint32_t)0x00000000U)         /* !< No pull up */
#define ANACOMP0_PINCM_OUT_PIPU_PULL_UP          ((uint32_t)0x00020000U)         /* !< Pull up */
/* ANACOMP0_PINCM_OUT[INENA] Bits */
#define ANACOMP0_PINCM_OUT_INENA_OFS             (18)                            /* !< INENA Offset */
#define ANACOMP0_PINCM_OUT_INENA_MASK            ((uint32_t)0x00040000U)         /* !< Input enable */
#define ANACOMP0_PINCM_OUT_INENA_INP_DISABLE     ((uint32_t)0x00000000U)         /* !< Inputs 0 to connected core */
#define ANACOMP0_PINCM_OUT_INENA_INP_ENABLE      ((uint32_t)0x00040000U)         /* !< Inputs IO pad value to connected
                                                                                    core */
/* ANACOMP0_PINCM_OUT[HYSTEN] Bits */
#define ANACOMP0_PINCM_OUT_HYSTEN_OFS            (19)                            /* !< HYSTEN Offset */
#define ANACOMP0_PINCM_OUT_HYSTEN_MASK           ((uint32_t)0x00080000U)         /* !< Hysteresis enable */
#define ANACOMP0_PINCM_OUT_HYSTEN_DIS_HYST       ((uint32_t)0x00000000U)         /* !< No hysteresis */
#define ANACOMP0_PINCM_OUT_HYSTEN_EN_HYST        ((uint32_t)0x00080000U)         /* !< Hysteresis on */
/* ANACOMP0_PINCM_OUT[DRV] Bits */
#define ANACOMP0_PINCM_OUT_DRV_OFS               (20)                            /* !< DRV Offset */
#define ANACOMP0_PINCM_OUT_DRV_MASK              ((uint32_t)0x00700000U)         /* !< Drive strength options */
#define ANACOMP0_PINCM_OUT_DRV_STRENGTH_0        ((uint32_t)0x00000000U)         /* !< Lowest drive strength */
#define ANACOMP0_PINCM_OUT_DRV_STRENGTH_1        ((uint32_t)0x00100000U)         /* !< Drive strength 2/8 */
#define ANACOMP0_PINCM_OUT_DRV_STRENGTH_2        ((uint32_t)0x00200000U)         /* !< Drive strength 3/8 */
#define ANACOMP0_PINCM_OUT_DRV_STRENGTH_3        ((uint32_t)0x00300000U)         /* !< Drive strength 4/8 */
#define ANACOMP0_PINCM_OUT_DRV_STRENGTH_4        ((uint32_t)0x00400000U)         /* !< Drive strength 5/8 */
#define ANACOMP0_PINCM_OUT_DRV_STRENGTH_5        ((uint32_t)0x00500000U)         /* !< Drive strength 6/8 */
#define ANACOMP0_PINCM_OUT_DRV_STRENGTH_6        ((uint32_t)0x00600000U)         /* !< Drive strength 7/8 */
#define ANACOMP0_PINCM_OUT_DRV_STRENGTH_7        ((uint32_t)0x00700000U)         /* !< Highest drive strength */
/* ANACOMP0_PINCM_OUT[HIGHZ0] Bits */
#define ANACOMP0_PINCM_OUT_HIGHZ0_OFS            (24)                            /* !< HIGHZ0 Offset */
#define ANACOMP0_PINCM_OUT_HIGHZ0_MASK           ((uint32_t)0x01000000U)         /* !< High-Z instead of low output */
#define ANACOMP0_PINCM_OUT_HIGHZ0_DRV_LOW        ((uint32_t)0x00000000U)         /* !< Pin can be driven low */
#define ANACOMP0_PINCM_OUT_HIGHZ0_DRV_HIZ        ((uint32_t)0x01000000U)         /* !< Pin is tri-stated instead of driven
                                                                                    low */
/* ANACOMP0_PINCM_OUT[HIGHZ1] Bits */
#define ANACOMP0_PINCM_OUT_HIGHZ1_OFS            (25)                            /* !< HIGHZ1 Offset */
#define ANACOMP0_PINCM_OUT_HIGHZ1_MASK           ((uint32_t)0x02000000U)         /* !< High-Z instead of high output */
#define ANACOMP0_PINCM_OUT_HIGHZ1_DRV_HIGH       ((uint32_t)0x00000000U)         /* !< Pin can be driven high */
#define ANACOMP0_PINCM_OUT_HIGHZ1_DRV_HIZ        ((uint32_t)0x02000000U)         /* !< Pin is tri-stated instead of driven
                                                                                    high */
/* ANACOMP0_PINCM_OUT[INV] Bits */
#define ANACOMP0_PINCM_OUT_INV_OFS               (26)                            /* !< INV Offset */
#define ANACOMP0_PINCM_OUT_INV_MASK              ((uint32_t)0x04000000U)         /* !< Invert digital input/output
                                                                                    relative to peripheral/GPIO */
#define ANACOMP0_PINCM_OUT_INV_NO_CHNG           ((uint32_t)0x00000000U)         /* !< Input and output are non-inverted */
#define ANACOMP0_PINCM_OUT_INV_CHNG              ((uint32_t)0x04000000U)         /* !< Input and output are inverted */
/* ANACOMP0_PINCM_OUT[WUEN] Bits */
#define ANACOMP0_PINCM_OUT_WUEN_OFS              (27)                            /* !< WUEN Offset */
#define ANACOMP0_PINCM_OUT_WUEN_MASK             ((uint32_t)0x08000000U)         /* !< Wake up enable */
#define ANACOMP0_PINCM_OUT_WUEN_NO_WAKEUP        ((uint32_t)0x00000000U)         /* !< Wake up not enabled */
#define ANACOMP0_PINCM_OUT_WUEN_WAKEUP           ((uint32_t)0x08000000U)         /* !< Wake up enabled */
/* ANACOMP0_PINCM_OUT[WCOMP] Bits */
#define ANACOMP0_PINCM_OUT_WCOMP_OFS             (28)                            /* !< WCOMP Offset */
#define ANACOMP0_PINCM_OUT_WCOMP_MASK            ((uint32_t)0x10000000U)         /* !< Wake up compare value */
#define ANACOMP0_PINCM_OUT_WCOMP_MATCH_ZERO      ((uint32_t)0x00000000U)         /* !< Match 0 will wake */
#define ANACOMP0_PINCM_OUT_WCOMP_MATCH_ONE       ((uint32_t)0x10000000U)         /* !< Match 1 will wake */

/* ANACOMP0_FSUB_0 Bits */
/* ANACOMP0_FSUB_0[CHANID] Bits */
#define ANACOMP0_FSUB_0_CHANID_OFS               (0)                             /* !< CHANID Offset */
#define ANACOMP0_FSUB_0_CHANID_MASK              ((uint32_t)0x000001FFU)         /* !< 0 = disconnected. 1-15 = connected
                                                                                    to channelID = CHANID. */
#define ANACOMP0_FSUB_0_CHANID_MNIMUM            ((uint32_t)0x00000000U)         /* !< 0 is an allowed value, signifying
                                                                                    that the event is unconnected */
#define ANACOMP0_FSUB_0_CHANID_UNCONNECTED       ((uint32_t)0x00000000U)         /* !< A value of 0 specifies that the
                                                                                    event is not connected */
#define ANACOMP0_FSUB_0_CHANID_MAXIMUM           ((uint32_t)0x0000000FU)         /* !< Consult your device datasheet as
                                                                                    the actual allowed maximum may be
                                                                                    less than 15. */

/* ANACOMP0_FSUB_1 Bits */
/* ANACOMP0_FSUB_1[CHANID] Bits */
#define ANACOMP0_FSUB_1_CHANID_OFS               (0)                             /* !< CHANID Offset */
#define ANACOMP0_FSUB_1_CHANID_MASK              ((uint32_t)0x000001FFU)         /* !< 0 = disconnected. 1-15 = connected
                                                                                    to channelID = CHANID. */
#define ANACOMP0_FSUB_1_CHANID_MNIMUM            ((uint32_t)0x00000000U)         /* !< 0 is an allowed value, signifying
                                                                                    that the event is unconnected */
#define ANACOMP0_FSUB_1_CHANID_UNCONNECTED       ((uint32_t)0x00000000U)         /* !< A value of 0 specifies that the
                                                                                    event is not connected */
#define ANACOMP0_FSUB_1_CHANID_MAXIMUM           ((uint32_t)0x0000000FU)         /* !< Consult your device datasheet as
                                                                                    the actual allowed maximum may be
                                                                                    less than 15. */

/* ANACOMP0_FPUB_1 Bits */
/* ANACOMP0_FPUB_1[CHANID] Bits */
#define ANACOMP0_FPUB_1_CHANID_OFS               (0)                             /* !< CHANID Offset */
#define ANACOMP0_FPUB_1_CHANID_MASK              ((uint32_t)0x000001FFU)         /* !< 0 = disconnected. 1-15 = connected
                                                                                    to channelID = CHANID. */
#define ANACOMP0_FPUB_1_CHANID_MNIMUM            ((uint32_t)0x00000000U)         /* !< 0 is an allowed value, signifying
                                                                                    that the event is unconnected */
#define ANACOMP0_FPUB_1_CHANID_UNCONNECTED       ((uint32_t)0x00000000U)         /* !< A value of 0 specifies that the
                                                                                    event is not connected */
#define ANACOMP0_FPUB_1_CHANID_MAXIMUM           ((uint32_t)0x0000000FU)         /* !< Consult your device datasheet as
                                                                                    the actual allowed maximum may be
                                                                                    less than 15. */

/* ANACOMP0_CPU_CONNECT_0 Bits */
/* ANACOMP0_CPU_CONNECT_0[CPUSS0_CONN] Bits */
#define ANACOMP0_CPU_CONNECT_0_CPUSS0_CONN_OFS   (1)                             /* !< CPUSS0_CONN Offset */
#define ANACOMP0_CPU_CONNECT_0_CPUSS0_CONN_MASK  ((uint32_t)0x00000002U)         /* !< CPUSS0 connect bit. */
#define ANACOMP0_CPU_CONNECT_0_CPUSS0_CONN_UNCONNECTED ((uint32_t)0x00000000U)         /* !< The CPU is not connected. */
#define ANACOMP0_CPU_CONNECT_0_CPUSS0_CONN_CONNECTED ((uint32_t)0x00000002U)         /* !< The CPU is connected. */

/* ANACOMP0_EVT_MODE Bits */
/* ANACOMP0_EVT_MODE[INT0_CFG] Bits */
#define ANACOMP0_EVT_MODE_INT0_CFG_OFS           (0)                             /* !< INT0_CFG Offset */
#define ANACOMP0_EVT_MODE_INT0_CFG_MASK          ((uint32_t)0x00000003U)         /* !< Event line mode select for event
                                                                                    corresponding to
                                                                                    [IPSTANDARD.INT_EVENT][0] */
#define ANACOMP0_EVT_MODE_INT0_CFG_DISABLE       ((uint32_t)0x00000000U)         /* !< The interrupt or event line is
                                                                                    disabled. */
#define ANACOMP0_EVT_MODE_INT0_CFG_SOFTWARE      ((uint32_t)0x00000001U)         /* !< Event handled by software. Software
                                                                                    must clear the associated RIS flag. */
#define ANACOMP0_EVT_MODE_INT0_CFG_HARDWARE      ((uint32_t)0x00000002U)         /* !< Event handled by hardware. The
                                                                                    hardware (another module) clears
                                                                                    automatically the associated RIS
                                                                                    flag. */
/* ANACOMP0_EVT_MODE[EVT1_CFG] Bits */
#define ANACOMP0_EVT_MODE_EVT1_CFG_OFS           (2)                             /* !< EVT1_CFG Offset */
#define ANACOMP0_EVT_MODE_EVT1_CFG_MASK          ((uint32_t)0x0000000CU)         /* !< Event line mode select for event
                                                                                    corresponding to
                                                                                    [IPSTANDARD.INT_EVENT][0] */
#define ANACOMP0_EVT_MODE_EVT1_CFG_DISABLE       ((uint32_t)0x00000000U)         /* !< The interrupt or event line is
                                                                                    disabled. */
#define ANACOMP0_EVT_MODE_EVT1_CFG_SOFTWARE      ((uint32_t)0x00000004U)         /* !< Event handled by software. Software
                                                                                    must clear the associated RIS flag. */
#define ANACOMP0_EVT_MODE_EVT1_CFG_HARDWARE      ((uint32_t)0x00000008U)         /* !< Event handled by hardware. The
                                                                                    hardware (another module) clears
                                                                                    automatically the associated RIS
                                                                                    flag. */

/* ANACOMP0_DESC Bits */
/* ANACOMP0_DESC[MINREV] Bits */
#define ANACOMP0_DESC_MINREV_OFS                 (0)                             /* !< MINREV Offset */
#define ANACOMP0_DESC_MINREV_MASK                ((uint32_t)0x0000000FU)         /* !< Minor rev of the IP */
/* ANACOMP0_DESC[MAJREV] Bits */
#define ANACOMP0_DESC_MAJREV_OFS                 (4)                             /* !< MAJREV Offset */
#define ANACOMP0_DESC_MAJREV_MASK                ((uint32_t)0x000000F0U)         /* !< Major rev of the IP */
/* ANACOMP0_DESC[FEATUREVER] Bits */
#define ANACOMP0_DESC_FEATUREVER_OFS             (12)                            /* !< FEATUREVER Offset */
#define ANACOMP0_DESC_FEATUREVER_MASK            ((uint32_t)0x0000F000U)         /* !< Feature Set for the module
                                                                                    *instance* */
/* ANACOMP0_DESC[MODULEID] Bits */
#define ANACOMP0_DESC_MODULEID_OFS               (16)                            /* !< MODULEID Offset */
#define ANACOMP0_DESC_MODULEID_MASK              ((uint32_t)0xFFFF0000U)         /* !< Module identification contains a
                                                                                    unique peripheral identification
                                                                                    number. The assignments are
                                                                                    maintained in a central database for
                                                                                    all of the platform modules to ensure
                                                                                    uniqueness. */

/* ANACOMP0_CTL0 Bits */
/* ANACOMP0_CTL0[IPSEL] Bits */
#define ANACOMP0_CTL0_IPSEL_OFS                  (0)                             /* !< IPSEL Offset */
#define ANACOMP0_CTL0_IPSEL_MASK                 ((uint32_t)0x00000007U)         /* !< Channel input selected for the
                                                                                    positive terminal of the comparator
                                                                                    if IPEN is set to 1. */
#define ANACOMP0_CTL0_IPSEL_CH_0                 ((uint32_t)0x00000000U)         /* !< Channel 0 selected */
#define ANACOMP0_CTL0_IPSEL_CH_1                 ((uint32_t)0x00000001U)         /* !< Channel 1 selected */
#define ANACOMP0_CTL0_IPSEL_CH_2                 ((uint32_t)0x00000002U)         /* !< Channel 2 selected */
#define ANACOMP0_CTL0_IPSEL_CH_3                 ((uint32_t)0x00000003U)         /* !< Channel 3 selected */
#define ANACOMP0_CTL0_IPSEL_CH_4                 ((uint32_t)0x00000004U)         /* !< Channel 4 selected */
#define ANACOMP0_CTL0_IPSEL_CH_5                 ((uint32_t)0x00000005U)         /* !< Channel 5 selected */
#define ANACOMP0_CTL0_IPSEL_CH_6                 ((uint32_t)0x00000006U)         /* !< Channel 6 selected */
#define ANACOMP0_CTL0_IPSEL_CH_7                 ((uint32_t)0x00000007U)         /* !< Channel 7  selected */
/* ANACOMP0_CTL0[IPEN] Bits */
#define ANACOMP0_CTL0_IPEN_OFS                   (15)                            /* !< IPEN Offset */
#define ANACOMP0_CTL0_IPEN_MASK                  ((uint32_t)0x00008000U)         /* !< Channel input enable for the
                                                                                    positive terminal of the comparator. */
#define ANACOMP0_CTL0_IPEN_DISABLE               ((uint32_t)0x00000000U)         /* !< Selected analog input channel for
                                                                                    positive terminal is disabled */
#define ANACOMP0_CTL0_IPEN_ENABLE                ((uint32_t)0x00008000U)         /* !< Selected analog input channel for
                                                                                    positive terminal is enabled */
/* ANACOMP0_CTL0[IMEN] Bits */
#define ANACOMP0_CTL0_IMEN_OFS                   (31)                            /* !< IMEN Offset */
#define ANACOMP0_CTL0_IMEN_MASK                  ((uint32_t)0x80000000U)         /* !< Channel input enable for the
                                                                                    negative terminal of the comparator. */
#define ANACOMP0_CTL0_IMEN_DISABLE               ((uint32_t)0x00000000U)         /* !< Selected analog input channel for
                                                                                    negative terminal is disabled */
#define ANACOMP0_CTL0_IMEN_ENABLE                ((uint32_t)0x80000000U)         /* !< Selected analog input channel for
                                                                                    negative terminal is enabled */
/* ANACOMP0_CTL0[IMSEL] Bits */
#define ANACOMP0_CTL0_IMSEL_OFS                  (16)                            /* !< IMSEL Offset */
#define ANACOMP0_CTL0_IMSEL_MASK                 ((uint32_t)0x00070000U)         /* !< Channel input selected for the
                                                                                    negative terminal of the comparator
                                                                                    if IMEN is set to 1. */
#define ANACOMP0_CTL0_IMSEL_CH_0                 ((uint32_t)0x00000000U)         /* !< Channel 0 selected */
#define ANACOMP0_CTL0_IMSEL_CH_1                 ((uint32_t)0x00010000U)         /* !< Channel 1 selected */
#define ANACOMP0_CTL0_IMSEL_CH_2                 ((uint32_t)0x00020000U)         /* !< Channel 2 selected */
#define ANACOMP0_CTL0_IMSEL_CH_3                 ((uint32_t)0x00030000U)         /* !< Channel 3 selected */
#define ANACOMP0_CTL0_IMSEL_CH_4                 ((uint32_t)0x00040000U)         /* !< Channel 4 selected */
#define ANACOMP0_CTL0_IMSEL_CH_5                 ((uint32_t)0x00050000U)         /* !< Channel 5 selected */
#define ANACOMP0_CTL0_IMSEL_CH_6                 ((uint32_t)0x00060000U)         /* !< Channel 6 selected */
#define ANACOMP0_CTL0_IMSEL_CH_7                 ((uint32_t)0x00070000U)         /* !< Channel 7 selected */

/* ANACOMP0_CTL1 Bits */
/* ANACOMP0_CTL1[ENABLE] Bits */
#define ANACOMP0_CTL1_ENABLE_OFS                 (0)                             /* !< ENABLE Offset */
#define ANACOMP0_CTL1_ENABLE_MASK                ((uint32_t)0x00000001U)         /* !< This bit turns on the comparator.
                                                                                    When the comparator is turned off it
                                                                                    consumes no power. */
#define ANACOMP0_CTL1_ENABLE_OFF                 ((uint32_t)0x00000000U)         /* !< Comparator is off */
#define ANACOMP0_CTL1_ENABLE_ON                  ((uint32_t)0x00000001U)         /* !< Comparator is on */
/* ANACOMP0_CTL1[MODE] Bits */
#define ANACOMP0_CTL1_MODE_OFS                   (1)                             /* !< MODE Offset */
#define ANACOMP0_CTL1_MODE_MASK                  ((uint32_t)0x00000002U)         /* !< This bit selects the comparator
                                                                                    operating mode. */
#define ANACOMP0_CTL1_MODE_FAST                  ((uint32_t)0x00000000U)         /* !< Comparator is in fast mode */
#define ANACOMP0_CTL1_MODE_ULP                   ((uint32_t)0x00000002U)         /* !< Comparator is in ultra-low power
                                                                                    mode */
/* ANACOMP0_CTL1[EXCH] Bits */
#define ANACOMP0_CTL1_EXCH_OFS                   (2)                             /* !< EXCH Offset */
#define ANACOMP0_CTL1_EXCH_MASK                  ((uint32_t)0x00000004U)         /* !< This bit exchanges the comparator
                                                                                    inputs and inverts the comparator
                                                                                    output. */
#define ANACOMP0_CTL1_EXCH_NO_EXC                ((uint32_t)0x00000000U)         /* !< Comparator inputs not exchanged and
                                                                                    output not inverted */
#define ANACOMP0_CTL1_EXCH_EXC                   ((uint32_t)0x00000004U)         /* !< Comparator inputs exchanged and
                                                                                    output inverted */
/* ANACOMP0_CTL1[SHORT] Bits */
#define ANACOMP0_CTL1_SHORT_OFS                  (3)                             /* !< SHORT Offset */
#define ANACOMP0_CTL1_SHORT_MASK                 ((uint32_t)0x00000008U)         /* !< This bit shorts the positive and
                                                                                    negative input terminals of the
                                                                                    comparator. */
#define ANACOMP0_CTL1_SHORT_NO_SHT               ((uint32_t)0x00000000U)         /* !< Comparator positive and negative
                                                                                    input terminals are not shorted */
#define ANACOMP0_CTL1_SHORT_SHT                  ((uint32_t)0x00000008U)         /* !< Comparator positive and negative
                                                                                    input terminals are shorted */
/* ANACOMP0_CTL1[IES] Bits */
#define ANACOMP0_CTL1_IES_OFS                    (4)                             /* !< IES Offset */
#define ANACOMP0_CTL1_IES_MASK                   ((uint32_t)0x00000010U)         /* !< This bit selected the interrupt
                                                                                    edge for COMPIFG and COMPINVIFG. */
#define ANACOMP0_CTL1_IES_RISING                 ((uint32_t)0x00000000U)         /* !< Rising edge sets COMPIFG and
                                                                                    falling edge sets COMPINVIFG */
#define ANACOMP0_CTL1_IES_FALLING                ((uint32_t)0x00000010U)         /* !< Falling edge sets COMPIFG and
                                                                                    rising edge sets COMPINVIFG */
/* ANACOMP0_CTL1[HYST] Bits */
#define ANACOMP0_CTL1_HYST_OFS                   (5)                             /* !< HYST Offset */
#define ANACOMP0_CTL1_HYST_MASK                  ((uint32_t)0x00000060U)         /* !< These bits select the hysteresis
                                                                                    setting of the comparator. */
#define ANACOMP0_CTL1_HYST_NO_HYS                ((uint32_t)0x00000000U)         /* !< No hysteresis */
#define ANACOMP0_CTL1_HYST_LOW_HYS               ((uint32_t)0x00000020U)         /* !< Low hysteresis, typical 10mV */
#define ANACOMP0_CTL1_HYST_MED_HYS               ((uint32_t)0x00000040U)         /* !< Medium hysteresis, typical 20mV */
#define ANACOMP0_CTL1_HYST_HIGH_HYS              ((uint32_t)0x00000060U)         /* !< High hysteresis, typical 30mV */
/* ANACOMP0_CTL1[OUTPOL] Bits */
#define ANACOMP0_CTL1_OUTPOL_OFS                 (7)                             /* !< OUTPOL Offset */
#define ANACOMP0_CTL1_OUTPOL_MASK                ((uint32_t)0x00000080U)         /* !< This bit selects the comparator
                                                                                    output polarity. */
#define ANACOMP0_CTL1_OUTPOL_NON_INV             ((uint32_t)0x00000000U)         /* !< Comparator output is non-inverted */
#define ANACOMP0_CTL1_OUTPOL_INV                 ((uint32_t)0x00000080U)         /* !< Comparator output is inverted */
/* ANACOMP0_CTL1[FLTEN] Bits */
#define ANACOMP0_CTL1_FLTEN_OFS                  (8)                             /* !< FLTEN Offset */
#define ANACOMP0_CTL1_FLTEN_MASK                 ((uint32_t)0x00000100U)         /* !< This bit enables the analog filter
                                                                                    at comparator output. */
#define ANACOMP0_CTL1_FLTEN_DISABLE              ((uint32_t)0x00000000U)         /* !< Comparator output filter is
                                                                                    disabled */
#define ANACOMP0_CTL1_FLTEN_ENABLE               ((uint32_t)0x00000100U)         /* !< Comparator output filter is enabled */
/* ANACOMP0_CTL1[FLTDLY] Bits */
#define ANACOMP0_CTL1_FLTDLY_OFS                 (9)                             /* !< FLTDLY Offset */
#define ANACOMP0_CTL1_FLTDLY_MASK                ((uint32_t)0x00000600U)         /* !< These bits select the comparator
                                                                                    output filter delay. See the
                                                                                    device-specific data sheet for
                                                                                    specific values on comparator
                                                                                    propagation delay for different
                                                                                    filter delay settings. */
#define ANACOMP0_CTL1_FLTDLY_DLY_0               ((uint32_t)0x00000000U)         /* !< Typical filter delay of 70 ns */
#define ANACOMP0_CTL1_FLTDLY_DLY_1               ((uint32_t)0x00000200U)         /* !< Typical filter delay of 500 ns */
#define ANACOMP0_CTL1_FLTDLY_DLY_2               ((uint32_t)0x00000400U)         /* !< Typical filter delay of 1200 ns */
#define ANACOMP0_CTL1_FLTDLY_DLY_3               ((uint32_t)0x00000600U)         /* !< Typical filter delay of 2700 ns */
/* ANACOMP0_CTL1[DACOUTEN] Bits */
#define ANACOMP0_CTL1_DACOUTEN_OFS               (11)                            /* !< DACOUTEN Offset */
#define ANACOMP0_CTL1_DACOUTEN_MASK              ((uint32_t)0x00000800U)         /* !< This bit enables DAC8 output to be
                                                                                    connected to the pin. */
#define ANACOMP0_CTL1_DACOUTEN_DISABLE           ((uint32_t)0x00000000U)         /* !< Disable the DAC8 output
                                                                                    connectivity to pin. */
#define ANACOMP0_CTL1_DACOUTEN_ENABLE            ((uint32_t)0x00000800U)         /* !< Enable the DAC8 output connectivity
                                                                                    to pin. */
/* ANACOMP0_CTL1[WINCOMPEN] Bits */
#define ANACOMP0_CTL1_WINCOMPEN_OFS              (12)                            /* !< WINCOMPEN Offset */
#define ANACOMP0_CTL1_WINCOMPEN_MASK             ((uint32_t)0x00001000U)         /* !< This bit enables window comparator
                                                                                    operation of comparator. */
#define ANACOMP0_CTL1_WINCOMPEN_OFF              ((uint32_t)0x00000000U)         /* !< window comparator is disable */
#define ANACOMP0_CTL1_WINCOMPEN_ON               ((uint32_t)0x00001000U)         /* !< window comparator is enable */

/* ANACOMP0_CTL2 Bits */
/* ANACOMP0_CTL2[REFMODE] Bits */
#define ANACOMP0_CTL2_REFMODE_OFS                (0)                             /* !< REFMODE Offset */
#define ANACOMP0_CTL2_REFMODE_MASK               ((uint32_t)0x00000001U)         /* !< This bit requests ULP_REF bandgap
                                                                                    operation in fast mode(static) or low
                                                                                    power mode (sampled). The local
                                                                                    reference buffer and 8-bit DAC inside
                                                                                    comparator module are also configured
                                                                                    accordingly.  Fast mode operation
                                                                                    offers higher accuracy but consumes
                                                                                    higher current. Low power operation
                                                                                    consumes lower current but with
                                                                                    relaxed reference voltage accuracy.
                                                                                    Comparator requests for reference
                                                                                    voltage from ULP_REF only when REFLVL
                                                                                    > 0. */
#define ANACOMP0_CTL2_REFMODE_STATIC             ((uint32_t)0x00000000U)         /* !< ULP_REF bandgap, local reference
                                                                                    buffer and 8-bit DAC inside
                                                                                    comparator operate in static mode. */
#define ANACOMP0_CTL2_REFMODE_SAMPLED            ((uint32_t)0x00000001U)         /* !< ULP_REF bandgap, local reference
                                                                                    buffer and 8-bit DAC inside
                                                                                    comparator operate in sampled mode. */
/* ANACOMP0_CTL2[REFSRC] Bits */
#define ANACOMP0_CTL2_REFSRC_OFS                 (3)                             /* !< REFSRC Offset */
#define ANACOMP0_CTL2_REFSRC_MASK                ((uint32_t)0x00000038U)         /* !< These bits select the reference
                                                                                    source for the comparator. */
#define ANACOMP0_CTL2_REFSRC_OFF                 ((uint32_t)0x00000000U)         /* !< Reference voltage generator is
                                                                                    disabled (local reference buffer as
                                                                                    well as DAC). */
#define ANACOMP0_CTL2_REFSRC_VDDA_DAC            ((uint32_t)0x00000008U)         /* !< VDDA selected as the reference
                                                                                    source to DAC and DAC output applied
                                                                                    as reference to comparator. */
#define ANACOMP0_CTL2_REFSRC_VREF_DAC            ((uint32_t)0x00000010U)         /* !< VREF selected as reference to DAC
                                                                                    and DAC output applied as reference
                                                                                    to comparator. */
#define ANACOMP0_CTL2_REFSRC_VREF                ((uint32_t)0x00000018U)         /* !< VREF applied as reference to
                                                                                    comparator. DAC is switched off. */
/* ANACOMP0_CTL2[REFSEL] Bits */
#define ANACOMP0_CTL2_REFSEL_OFS                 (7)                             /* !< REFSEL Offset */
#define ANACOMP0_CTL2_REFSEL_MASK                ((uint32_t)0x00000080U)         /* !< This bit selects if the selected
                                                                                    reference voltage is applied to
                                                                                    positive or negative terminal of the
                                                                                    comparator. */
#define ANACOMP0_CTL2_REFSEL_POSITIVE            ((uint32_t)0x00000000U)         /* !< If EXCH bit is 0, the selected
                                                                                    reference is applied to positive
                                                                                    terminal. If EXCH bit is 1, the
                                                                                    selected reference is applied to
                                                                                    negative terminal. */
#define ANACOMP0_CTL2_REFSEL_NEGATIVE            ((uint32_t)0x00000080U)         /* !< If EXCH bit is 0, the selected
                                                                                    reference is applied to negative
                                                                                    terminal. If EXCH bit is 1, the
                                                                                    selected reference is applied to
                                                                                    positive terminal. */
/* ANACOMP0_CTL2[DACCTL] Bits */
#define ANACOMP0_CTL2_DACCTL_OFS                 (16)                            /* !< DACCTL Offset */
#define ANACOMP0_CTL2_DACCTL_MASK                ((uint32_t)0x00010000U)         /* !< This bit determines if the
                                                                                    comparator output or DACSW bit
                                                                                    controls the selection between
                                                                                    DACCODE0 and DACCODE1. */
#define ANACOMP0_CTL2_DACCTL_COMPOUT_SEL         ((uint32_t)0x00000000U)         /* !< Comparator output controls
                                                                                    selection between DACCODE0 and
                                                                                    DACCODE1 */
#define ANACOMP0_CTL2_DACCTL_DACSW_SEL           ((uint32_t)0x00010000U)         /* !< DACSW bit controls selection
                                                                                    between DACCODE0 and DACCODE1 */
/* ANACOMP0_CTL2[DACSW] Bits */
#define ANACOMP0_CTL2_DACSW_OFS                  (17)                            /* !< DACSW Offset */
#define ANACOMP0_CTL2_DACSW_MASK                 ((uint32_t)0x00020000U)         /* !< This bit selects between DACCODE0
                                                                                    and DACCODE1 to 8-bit DAC when DACCTL
                                                                                    bit is 1. */
#define ANACOMP0_CTL2_DACSW_DACCODE0_SEL         ((uint32_t)0x00000000U)         /* !< DACCODE0 selected for 8-bit DAC */
#define ANACOMP0_CTL2_DACSW_DACCODE1_SEL         ((uint32_t)0x00020000U)         /* !< DACCODE1 selected for 8-bit DAC */
/* ANACOMP0_CTL2[BLANKSRC] Bits */
#define ANACOMP0_CTL2_BLANKSRC_OFS               (8)                             /* !< BLANKSRC Offset */
#define ANACOMP0_CTL2_BLANKSRC_MASK              ((uint32_t)0x00000700U)         /* !< These bits select the blanking
                                                                                    source for the comparator. */
#define ANACOMP0_CTL2_BLANKSRC_DISABLE           ((uint32_t)0x00000000U)         /* !< Blanking source disabled */
#define ANACOMP0_CTL2_BLANKSRC_BLANKSRC1         ((uint32_t)0x00000100U)         /* !< Select Blanking Source 1 */
#define ANACOMP0_CTL2_BLANKSRC_BLANKSRC2         ((uint32_t)0x00000200U)         /* !< Select Blanking Source 2 */
#define ANACOMP0_CTL2_BLANKSRC_BLANKSRC3         ((uint32_t)0x00000300U)         /* !< Select Blanking Source 3 */
#define ANACOMP0_CTL2_BLANKSRC_BLANKSRC4         ((uint32_t)0x00000400U)         /* !< Select Blanking Source 4 */
#define ANACOMP0_CTL2_BLANKSRC_BLANKSRC5         ((uint32_t)0x00000500U)         /* !< Select Blanking Source 5 */
#define ANACOMP0_CTL2_BLANKSRC_BLANKSRC6         ((uint32_t)0x00000600U)         /* !< Select Blanking Source 6 */
/* ANACOMP0_CTL2[SAMPMODE] Bits */
#define ANACOMP0_CTL2_SAMPMODE_OFS               (24)                            /* !< SAMPMODE Offset */
#define ANACOMP0_CTL2_SAMPMODE_MASK              ((uint32_t)0x01000000U)         /* !< Enable sampled mode of comparator. */
#define ANACOMP0_CTL2_SAMPMODE_DISABLE           ((uint32_t)0x00000000U)         /* !< Sampled mode disabled */
#define ANACOMP0_CTL2_SAMPMODE_ENABLE            ((uint32_t)0x01000000U)         /* !< Sampled mode enabled */

/* ANACOMP0_CTL3 Bits */
/* ANACOMP0_CTL3[DACCODE0] Bits */
#define ANACOMP0_CTL3_DACCODE0_OFS               (0)                             /* !< DACCODE0 Offset */
#define ANACOMP0_CTL3_DACCODE0_MASK              ((uint32_t)0x000000FFU)         /* !< This is the first 8-bit DAC code.
                                                                                    When the DAC code is 0x0 the DAC
                                                                                    output will be 0 V. When the DAC code
                                                                                    is 0xFF the DAC output will be
                                                                                    selected reference voltage x 255/256. */
#define ANACOMP0_CTL3_DACCODE0_MNIMUM            ((uint32_t)0x00000000U)         /* !< Minimum DAC code value */
#define ANACOMP0_CTL3_DACCODE0_MAXIMUM           ((uint32_t)0x000000FFU)         /* !< Minimum DAC code value */
/* ANACOMP0_CTL3[DACCODE1] Bits */
#define ANACOMP0_CTL3_DACCODE1_OFS               (16)                            /* !< DACCODE1 Offset */
#define ANACOMP0_CTL3_DACCODE1_MASK              ((uint32_t)0x00FF0000U)         /* !< This is the second 8-bit DAC code.
                                                                                    When the DAC code is 0x0 the DAC
                                                                                    output will be 0 V. When the DAC code
                                                                                    is 0xFF the DAC output will be
                                                                                    selected reference voltage x 255/256. */
#define ANACOMP0_CTL3_DACCODE1_MNIMUM            ((uint32_t)0x00000000U)         /* !< Minimum DAC code value */
#define ANACOMP0_CTL3_DACCODE1_MAXIMUM           ((uint32_t)0x00FF0000U)         /* !< Minimum DAC code value */

/* ANACOMP0_STAT Bits */
/* ANACOMP0_STAT[OUT] Bits */
#define ANACOMP0_STAT_OUT_OFS                    (0)                             /* !< OUT Offset */
#define ANACOMP0_STAT_OUT_MASK                   ((uint32_t)0x00000001U)         /* !< This bit reflects the value of the
                                                                                    comparator output. Writing to this
                                                                                    bit has no effect on the comparator
                                                                                    output. */
#define ANACOMP0_STAT_OUT_LOW                    ((uint32_t)0x00000000U)         /* !< Comparator output is low */
#define ANACOMP0_STAT_OUT_HIGH                   ((uint32_t)0x00000001U)         /* !< Comparator output is high */

/* ANACOMP0_ANACMPWKUPCTL Bits */
/* ANACOMP0_ANACMPWKUPCTL[ANALOGCOMPARISONWAKEUPENABLEBIT] Bits */
#define ANACOMP0_ANACMPWKUPCTL_ANALOGCOMPARISONWAKEUPENABLEBIT_OFS (0)                             /* !< ANALOGCOMPARISONWAKEUPENABLEBIT
                                                                                    Offset */
#define ANACOMP0_ANACMPWKUPCTL_ANALOGCOMPARISONWAKEUPENABLEBIT_MASK ((uint32_t)0x00000001U)         /* !< 0: Analog comparison wakeup is
                                                                                    disabled (back ward compatible with
                                                                                    existing IP) 1 : Analog comparison
                                                                                    feature is enabled */

/* ANACOMP0_ANACMPCTRCTL Bits */
/* ANACOMP0_ANACMPCTRCTL[BLKCMPPRD] Bits */
#define ANACOMP0_ANACMPCTRCTL_BLKCMPPRD_OFS      (0)                             /* !< BLKCMPPRD Offset */
#define ANACOMP0_ANACMPCTRCTL_BLKCMPPRD_MASK     ((uint32_t)0x000000FFU)         /* !< Blanking and comparision period */
/* ANACOMP0_ANACMPCTRCTL[CMPPRD] Bits */
#define ANACOMP0_ANACMPCTRCTL_CMPPRD_OFS         (8)                             /* !< CMPPRD Offset */
#define ANACOMP0_ANACMPCTRCTL_CMPPRD_MASK        ((uint32_t)0x00000F00U)         /* !< Comparision period */

/* ANACOMP0_ANACMPDACCODE Bits */
/* ANACOMP0_ANACMPDACCODE[IP0DACCODE] Bits */
#define ANACOMP0_ANACMPDACCODE_IP0DACCODE_OFS    (0)                             /* !< IP0DACCODE Offset */
#define ANACOMP0_ANACMPDACCODE_IP0DACCODE_MASK   ((uint32_t)0x000000FFU)         /* !< Input0 daccode value */
/* ANACOMP0_ANACMPDACCODE[IP1DACCODE] Bits */
#define ANACOMP0_ANACMPDACCODE_IP1DACCODE_OFS    (8)                             /* !< IP1DACCODE Offset */
#define ANACOMP0_ANACMPDACCODE_IP1DACCODE_MASK   ((uint32_t)0x0000FF00U)         /* !< Input1 daccode value */
/* ANACOMP0_ANACMPDACCODE[IP2DACCODE] Bits */
#define ANACOMP0_ANACMPDACCODE_IP2DACCODE_OFS    (16)                            /* !< IP2DACCODE Offset */
#define ANACOMP0_ANACMPDACCODE_IP2DACCODE_MASK   ((uint32_t)0x00FF0000U)         /* !< Input2 daccode value */
/* ANACOMP0_ANACMPDACCODE[IP3DACCODE] Bits */
#define ANACOMP0_ANACMPDACCODE_IP3DACCODE_OFS    (24)                            /* !< IP3DACCODE Offset */
#define ANACOMP0_ANACMPDACCODE_IP3DACCODE_MASK   ((uint32_t)0xFF000000U)         /* !< Input3 daccode value */

/* ANACOMP0_ANACMPWD Bits */
/* ANACOMP0_ANACMPWD[WDEN] Bits */
#define ANACOMP0_ANACMPWD_WDEN_OFS               (0)                             /* !< WDEN Offset */
#define ANACOMP0_ANACMPWD_WDEN_MASK              ((uint32_t)0x00000001U)         /* !< 0 :  Window mode disable 1 :
                                                                                    Window mode enable */
/* ANACOMP0_ANACMPWD[INMUXSEL_WD] Bits */
#define ANACOMP0_ANACMPWD_INMUXSEL_WD_OFS        (1)                             /* !< INMUXSEL_WD Offset */
#define ANACOMP0_ANACMPWD_INMUXSEL_WD_MASK       ((uint32_t)0x00000006U)         /* !< Input mux (Static) selection for
                                                                                    window mode */

/* ANACOMP0_ANACMPCHSTS Bits */
/* ANACOMP0_ANACMPCHSTS[IN0EVT] Bits */
#define ANACOMP0_ANACMPCHSTS_IN0EVT_OFS          (0)                             /* !< IN0EVT Offset */
#define ANACOMP0_ANACMPCHSTS_IN0EVT_MASK         ((uint32_t)0x00000001U)         /* !< Input0 caused event */
/* ANACOMP0_ANACMPCHSTS[IN1EVT] Bits */
#define ANACOMP0_ANACMPCHSTS_IN1EVT_OFS          (1)                             /* !< IN1EVT Offset */
#define ANACOMP0_ANACMPCHSTS_IN1EVT_MASK         ((uint32_t)0x00000002U)         /* !< Input1 caused event */
/* ANACOMP0_ANACMPCHSTS[IN2EVT] Bits */
#define ANACOMP0_ANACMPCHSTS_IN2EVT_OFS          (2)                             /* !< IN2EVT Offset */
#define ANACOMP0_ANACMPCHSTS_IN2EVT_MASK         ((uint32_t)0x00000004U)         /* !< Input2 caused event */
/* ANACOMP0_ANACMPCHSTS[IN3EVT] Bits */
#define ANACOMP0_ANACMPCHSTS_IN3EVT_OFS          (3)                             /* !< IN3EVT Offset */
#define ANACOMP0_ANACMPCHSTS_IN3EVT_MASK         ((uint32_t)0x00000008U)         /* !< Input3 caused event */

/* ANACOMP0_ANACMPCHSTSCLR Bits */
/* ANACOMP0_ANACMPCHSTSCLR[IN0EVTCLR] Bits */
#define ANACOMP0_ANACMPCHSTSCLR_IN0EVTCLR_OFS    (0)                             /* !< IN0EVTCLR Offset */
#define ANACOMP0_ANACMPCHSTSCLR_IN0EVTCLR_MASK   ((uint32_t)0x00000001U)         /* !< Write a 1 to clear corresponding
                                                                                    Interrupt. */
/* ANACOMP0_ANACMPCHSTSCLR[IN1EVTCLR] Bits */
#define ANACOMP0_ANACMPCHSTSCLR_IN1EVTCLR_OFS    (1)                             /* !< IN1EVTCLR Offset */
#define ANACOMP0_ANACMPCHSTSCLR_IN1EVTCLR_MASK   ((uint32_t)0x00000002U)         /* !< Write a 1 to clear corresponding
                                                                                    Interrupt. */
/* ANACOMP0_ANACMPCHSTSCLR[IN2EVTCLR] Bits */
#define ANACOMP0_ANACMPCHSTSCLR_IN2EVTCLR_OFS    (2)                             /* !< IN2EVTCLR Offset */
#define ANACOMP0_ANACMPCHSTSCLR_IN2EVTCLR_MASK   ((uint32_t)0x00000004U)         /* !< Write a 1 to clear corresponding
                                                                                    Interrupt. */
/* ANACOMP0_ANACMPCHSTSCLR[IN3EVTCLR] Bits */
#define ANACOMP0_ANACMPCHSTSCLR_IN3EVTCLR_OFS    (3)                             /* !< IN3EVTCLR Offset */
#define ANACOMP0_ANACMPCHSTSCLR_IN3EVTCLR_MASK   ((uint32_t)0x00000008U)         /* !< Write a 1 to clear corresponding
                                                                                    Interrupt. */


#ifdef __cplusplus
}
#endif

#endif /* ti_devices_msp_peripherals_hw_anacomp0__include */

