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

#ifndef ti_devices_msp_peripherals_hw_wwdtlp0__include
#define ti_devices_msp_peripherals_hw_wwdtlp0__include

/* This preliminary header file does not have a version number */
/* Filename: hw_wwdtlp0.h */
/* MMR revised: 2025-04-09 14:12:34 */
/* MMR repo: https://bitbucket.itg.ti.com/projects/cmcu_msp65soc/repos/m33c1 */
/* MMR revision: f4602b816b1643a266cc7aae6be755d35f394359 */
/* Generator revision: ee5e56ed8e50e22306abbffa1ce64d23abbf32b9
   (MInT: 1818019a64e181dbbfd48fdc69fea15367af4c13) */

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
* WWDTLP0 Registers
******************************************************************************/
#define WWDTLP0_CPU_INT_OFS                      ((uint32_t)0x00001020U)
#define WWDTLP0_GPRCM_OFS                        ((uint32_t)0x00000800U)


/** @addtogroup WWDTLP0_CPU_INT
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
} WWDTLP0_CPU_INT_Regs;

/*@}*/ /* end of group WWDTLP0_CPU_INT */

/** @addtogroup WWDTLP0_GPRCM
  @{
*/

typedef struct {
  __IO uint32_t PWREN;                             /* !< (@ 0x00000800) Power enable */
  __O  uint32_t RSTCTL;                            /* !< (@ 0x00000804) Reset Control */
       uint32_t RESERVED0[3];
  __I  uint32_t STAT;                              /* !< (@ 0x00000814) Status Register */
} WWDTLP0_GPRCM_Regs;

/*@}*/ /* end of group WWDTLP0_GPRCM */

/** @addtogroup WWDTLP0
  @{
*/

typedef struct {
       uint32_t RESERVED0[288];
  __IO uint32_t CPU_CONNECT_0;                     /* !< (@ 0x00000480) CPU Connect */
       uint32_t RESERVED1[223];
  WWDTLP0_GPRCM_Regs  GPRCM;                             /* !< (@ 0x00000800) */
       uint32_t RESERVED2[512];
  __IO uint32_t PDBGCTL;                           /* !< (@ 0x00001018) Peripheral Debug Control */
       uint32_t RESERVED3;
  WWDTLP0_CPU_INT_Regs  CPU_INT;                           /* !< (@ 0x00001020) */
       uint32_t RESERVED4[37];
  __IO uint32_t EVT_MODE;                          /* !< (@ 0x000010E0) Event Mode */
       uint32_t RESERVED5[6];
  __I  uint32_t DESC;                              /* !< (@ 0x000010FC) Module Description */
  __IO uint32_t WWDTCTL0;                          /* !< (@ 0x00001100) Window Watchdog Timer Control Register 0 */
  __IO uint32_t WWDTCTL1;                          /* !< (@ 0x00001104) Window Watchdog Timer Control Register 0 */
  __IO uint32_t WWDTCNTRST;                        /* !< (@ 0x00001108) Window Watchdog Timer Counter Reset Register */
  __I  uint32_t WWDTSTAT;                          /* !< (@ 0x0000110C) Window Watchdog Timer Status Register */
} WWDTLP0_Regs;

/*@}*/ /* end of group WWDTLP0 */



#if defined ( __CC_ARM )
#pragma no_anon_unions
#endif

/******************************************************************************
* WWDTLP0 Register Control Bits
******************************************************************************/

/* WWDTLP0_IIDX Bits */
/* WWDTLP0_IIDX[STAT] Bits */
#define WWDTLP0_IIDX_STAT_OFS                    (0)                             /* !< STAT Offset */
#define WWDTLP0_IIDX_STAT_MASK                   ((uint32_t)0x0000001FU)         /* !< Module Interrupt Vector Value.
                                                                                    This register provides the highest
                                                                                    priority interrupt index. A read
                                                                                    clears the corresponding interrupt
                                                                                    flag in RIS and MISC. */
#define WWDTLP0_IIDX_STAT_NO_INTR                ((uint32_t)0x00000000U)         /* !< No interrupt pending */
#define WWDTLP0_IIDX_STAT_INTTIM                 ((uint32_t)0x00000001U)         /* !< Interval Timer Interrupt; Interrupt
                                                                                    Flag: INTTIM; Interrupt Priority:
                                                                                    Highest */

/* WWDTLP0_IMASK Bits */
/* WWDTLP0_IMASK[INTTIM] Bits */
#define WWDTLP0_IMASK_INTTIM_OFS                 (0)                             /* !< INTTIM Offset */
#define WWDTLP0_IMASK_INTTIM_MASK                ((uint32_t)0x00000001U)         /* !< Interval Timer Interrupt. */
#define WWDTLP0_IMASK_INTTIM_CLR                 ((uint32_t)0x00000000U)         /* !< Clear Interrupt Mask */
#define WWDTLP0_IMASK_INTTIM_SET                 ((uint32_t)0x00000001U)         /* !< Set Interrupt Mask */

/* WWDTLP0_RIS Bits */
/* WWDTLP0_RIS[INTTIM] Bits */
#define WWDTLP0_RIS_INTTIM_OFS                   (0)                             /* !< INTTIM Offset */
#define WWDTLP0_RIS_INTTIM_MASK                  ((uint32_t)0x00000001U)         /* !< Interval Timer Interrupt. */
#define WWDTLP0_RIS_INTTIM_CLR                   ((uint32_t)0x00000000U)         /* !< Interrupt did not occur */
#define WWDTLP0_RIS_INTTIM_SET                   ((uint32_t)0x00000001U)         /* !< Interrupt occurred */

/* WWDTLP0_MIS Bits */
/* WWDTLP0_MIS[INTTIM] Bits */
#define WWDTLP0_MIS_INTTIM_OFS                   (0)                             /* !< INTTIM Offset */
#define WWDTLP0_MIS_INTTIM_MASK                  ((uint32_t)0x00000001U)         /* !< Interval Timer Interrupt. */
#define WWDTLP0_MIS_INTTIM_CLR                   ((uint32_t)0x00000000U)         /* !< Interrupt did not occur */
#define WWDTLP0_MIS_INTTIM_SET                   ((uint32_t)0x00000001U)         /* !< Interrupt occurred */

/* WWDTLP0_ISET Bits */
/* WWDTLP0_ISET[INTTIM] Bits */
#define WWDTLP0_ISET_INTTIM_OFS                  (0)                             /* !< INTTIM Offset */
#define WWDTLP0_ISET_INTTIM_MASK                 ((uint32_t)0x00000001U)         /* !< Interval Timer Interrupt. */
#define WWDTLP0_ISET_INTTIM_NO_EFFECT            ((uint32_t)0x00000000U)         /* !< Writing 0 has no effect */
#define WWDTLP0_ISET_INTTIM_SET                  ((uint32_t)0x00000001U)         /* !< Set Interrupt */

/* WWDTLP0_ICLR Bits */
/* WWDTLP0_ICLR[INTTIM] Bits */
#define WWDTLP0_ICLR_INTTIM_OFS                  (0)                             /* !< INTTIM Offset */
#define WWDTLP0_ICLR_INTTIM_MASK                 ((uint32_t)0x00000001U)         /* !< Interval Timer Interrupt. */
#define WWDTLP0_ICLR_INTTIM_NO_EFFECT            ((uint32_t)0x00000000U)         /* !< Writing 0 has no effect */
#define WWDTLP0_ICLR_INTTIM_CLR                  ((uint32_t)0x00000001U)         /* !< Clear Interrupt */

/* WWDTLP0_PWREN Bits */
/* WWDTLP0_PWREN[ENABLE] Bits */
#define WWDTLP0_PWREN_ENABLE_OFS                 (0)                             /* !< ENABLE Offset */
#define WWDTLP0_PWREN_ENABLE_MASK                ((uint32_t)0x00000001U)         /* !< Enable the power Note: For safety
                                                                                    devices the power cannot be disabled
                                                                                    once enabled. */
#define WWDTLP0_PWREN_ENABLE_DISABLE             ((uint32_t)0x00000000U)         /* !< Disable Power */
#define WWDTLP0_PWREN_ENABLE_ENABLE              ((uint32_t)0x00000001U)         /* !< Enable Power */
/* WWDTLP0_PWREN[KEY] Bits */
#define WWDTLP0_PWREN_KEY_OFS                    (24)                            /* !< KEY Offset */
#define WWDTLP0_PWREN_KEY_MASK                   ((uint32_t)0xFF000000U)         /* !< KEY to allow Power State Change */
#define WWDTLP0_PWREN_KEY_UNLOCK_W               ((uint32_t)0x26000000U)         /* !< KEY to allow write access to this
                                                                                    register */

/* WWDTLP0_RSTCTL Bits */
/* WWDTLP0_RSTCTL[RESETSTKYCLR] Bits */
#define WWDTLP0_RSTCTL_RESETSTKYCLR_OFS          (1)                             /* !< RESETSTKYCLR Offset */
#define WWDTLP0_RSTCTL_RESETSTKYCLR_MASK         ((uint32_t)0x00000002U)         /* !< Clear [GPRCM.STAT.RESETSTKY] */
#define WWDTLP0_RSTCTL_RESETSTKYCLR_NOP          ((uint32_t)0x00000000U)         /* !< Writing 0 has no effect */
#define WWDTLP0_RSTCTL_RESETSTKYCLR_CLR          ((uint32_t)0x00000002U)         /* !< Clear reset sticky bit */
/* WWDTLP0_RSTCTL[RESETASSERT] Bits */
#define WWDTLP0_RSTCTL_RESETASSERT_OFS           (0)                             /* !< RESETASSERT Offset */
#define WWDTLP0_RSTCTL_RESETASSERT_MASK          ((uint32_t)0x00000001U)         /* !< Assert reset to the peripheral
                                                                                    Note: For safety devices a watchdog
                                                                                    reset by software is not possible. */
#define WWDTLP0_RSTCTL_RESETASSERT_NOP           ((uint32_t)0x00000000U)         /* !< Writing 0 has no effect */
#define WWDTLP0_RSTCTL_RESETASSERT_ASSERT        ((uint32_t)0x00000001U)         /* !< Assert reset */
/* WWDTLP0_RSTCTL[KEY] Bits */
#define WWDTLP0_RSTCTL_KEY_OFS                   (24)                            /* !< KEY Offset */
#define WWDTLP0_RSTCTL_KEY_MASK                  ((uint32_t)0xFF000000U)         /* !< Unlock key */
#define WWDTLP0_RSTCTL_KEY_UNLOCK_W              ((uint32_t)0xB1000000U)         /* !< KEY to allow write access to this
                                                                                    register */

/* WWDTLP0_STAT Bits */
/* WWDTLP0_STAT[RESETSTKY] Bits */
#define WWDTLP0_STAT_RESETSTKY_OFS               (16)                            /* !< RESETSTKY Offset */
#define WWDTLP0_STAT_RESETSTKY_MASK              ((uint32_t)0x00010000U)         /* !< This bit indicates, if the
                                                                                    peripheral was reset, since this bit
                                                                                    was cleared by RESETSTKYCLR in the
                                                                                    RSTCTL register */
#define WWDTLP0_STAT_RESETSTKY_NORES             ((uint32_t)0x00000000U)         /* !< The peripheral has not been reset
                                                                                    since this bit was last cleared by
                                                                                    RESETSTKYCLR in the RSTCTL register */
#define WWDTLP0_STAT_RESETSTKY_RESET             ((uint32_t)0x00010000U)         /* !< The peripheral was reset since the
                                                                                    last bit clear */

/* WWDTLP0_CPU_CONNECT_0 Bits */

/* WWDTLP0_PDBGCTL Bits */
/* WWDTLP0_PDBGCTL[FREE] Bits */
#define WWDTLP0_PDBGCTL_FREE_OFS                 (0)                             /* !< FREE Offset */
#define WWDTLP0_PDBGCTL_FREE_MASK                ((uint32_t)0x00000001U)         /* !< Free run control */
#define WWDTLP0_PDBGCTL_FREE_STOP                ((uint32_t)0x00000000U)         /* !< The peripheral freezes
                                                                                    functionality while the Core Halted
                                                                                    input is asserted and resumes when it
                                                                                    is deasserted. */
#define WWDTLP0_PDBGCTL_FREE_RUN                 ((uint32_t)0x00000001U)         /* !< The peripheral ignores the state of
                                                                                    the Core Halted input */

/* WWDTLP0_EVT_MODE Bits */
/* WWDTLP0_EVT_MODE[INT0_CFG] Bits */
#define WWDTLP0_EVT_MODE_INT0_CFG_OFS            (0)                             /* !< INT0_CFG Offset */
#define WWDTLP0_EVT_MODE_INT0_CFG_MASK           ((uint32_t)0x00000003U)         /* !< Event line mode select for event
                                                                                    corresponding to [IPSTANDARD.CPU_INT] */
#define WWDTLP0_EVT_MODE_INT0_CFG_DISABLE        ((uint32_t)0x00000000U)         /* !< The interrupt or event line is
                                                                                    disabled. */
#define WWDTLP0_EVT_MODE_INT0_CFG_SOFTWARE       ((uint32_t)0x00000001U)         /* !< The interrupt or event line is in
                                                                                    software mode. Software must clear
                                                                                    the RIS. */
#define WWDTLP0_EVT_MODE_INT0_CFG_HARDWARE       ((uint32_t)0x00000002U)         /* !< The interrupt or event line is in
                                                                                    hardware mode. The hardware (another
                                                                                    module) clears automatically the
                                                                                    associated RIS flag. */

/* WWDTLP0_DESC Bits */
/* WWDTLP0_DESC[MINREV] Bits */
#define WWDTLP0_DESC_MINREV_OFS                  (0)                             /* !< MINREV Offset */
#define WWDTLP0_DESC_MINREV_MASK                 ((uint32_t)0x0000000FU)         /* !< Minor rev of the IP */
#define WWDTLP0_DESC_MINREV_MINIMUM              ((uint32_t)0x00000000U)         /* !< Smallest value */
#define WWDTLP0_DESC_MINREV_MAXIMUM              ((uint32_t)0x0000000FU)         /* !< Highest possible value */
/* WWDTLP0_DESC[MAJREV] Bits */
#define WWDTLP0_DESC_MAJREV_OFS                  (4)                             /* !< MAJREV Offset */
#define WWDTLP0_DESC_MAJREV_MASK                 ((uint32_t)0x000000F0U)         /* !< Major rev of the IP */
#define WWDTLP0_DESC_MAJREV_MINIMUM              ((uint32_t)0x00000000U)         /* !< Smallest value */
#define WWDTLP0_DESC_MAJREV_MAXIMUM              ((uint32_t)0x000000F0U)         /* !< Highest possible value */
/* WWDTLP0_DESC[INSTNUM] Bits */
#define WWDTLP0_DESC_INSTNUM_OFS                 (8)                             /* !< INSTNUM Offset */
#define WWDTLP0_DESC_INSTNUM_MASK                ((uint32_t)0x00000F00U)         /* !< Instance Number within the device.
                                                                                    This will be a parameter to the RTL
                                                                                    for modules that can have multiple
                                                                                    instances */
#define WWDTLP0_DESC_INSTNUM_MINIMUM             ((uint32_t)0x00000000U)         /* !< Smallest value */
#define WWDTLP0_DESC_INSTNUM_MAXIMUM             ((uint32_t)0x00000F00U)         /* !< Highest possible value */
/* WWDTLP0_DESC[FEATUREVER] Bits */
#define WWDTLP0_DESC_FEATUREVER_OFS              (12)                            /* !< FEATUREVER Offset */
#define WWDTLP0_DESC_FEATUREVER_MASK             ((uint32_t)0x0000F000U)         /* !< Feature Set for the module
                                                                                    *instance* */
#define WWDTLP0_DESC_FEATUREVER_MINIMUM          ((uint32_t)0x00000000U)         /* !< Smallest value */
#define WWDTLP0_DESC_FEATUREVER_MAXIMUM          ((uint32_t)0x0000F000U)         /* !< Highest possible value */
/* WWDTLP0_DESC[MODULEID] Bits */
#define WWDTLP0_DESC_MODULEID_OFS                (16)                            /* !< MODULEID Offset */
#define WWDTLP0_DESC_MODULEID_MASK               ((uint32_t)0xFFFF0000U)         /* !< Module identification contains a
                                                                                    unique peripheral identification
                                                                                    number. The assignments are
                                                                                    maintained in a central database for
                                                                                    all of the platform modules to ensure
                                                                                    uniqueness. */
#define WWDTLP0_DESC_MODULEID_MINIMUM            ((uint32_t)0x00000000U)         /* !< Smallest value */
#define WWDTLP0_DESC_MODULEID_MAXIMUM            ((uint32_t)0xFFFF0000U)         /* !< Highest possible value */

/* WWDTLP0_WWDTCTL0 Bits */
/* WWDTLP0_WWDTCTL0[PER] Bits */
#define WWDTLP0_WWDTCTL0_PER_OFS                 (4)                             /* !< PER Offset */
#define WWDTLP0_WWDTCTL0_PER_MASK                ((uint32_t)0x00000070U)         /* !< Timer Period of the WWDT. These
                                                                                    bits select the total watchdog timer
                                                                                    count. */
#define WWDTLP0_WWDTCTL0_PER_EN_25               ((uint32_t)0x00000000U)         /* !< Total timer count is 2^25 */
#define WWDTLP0_WWDTCTL0_PER_EN_21               ((uint32_t)0x00000010U)         /* !< Total timer count is 2^21 */
#define WWDTLP0_WWDTCTL0_PER_EN_18               ((uint32_t)0x00000020U)         /* !< Total timer count is 2^18 */
#define WWDTLP0_WWDTCTL0_PER_EN_15               ((uint32_t)0x00000030U)         /* !< Total timer count is 2^15 */
#define WWDTLP0_WWDTCTL0_PER_EN_12               ((uint32_t)0x00000040U)         /* !< Total timer count is 2^12 (default) */
#define WWDTLP0_WWDTCTL0_PER_EN_10               ((uint32_t)0x00000050U)         /* !< Total timer count is 2^10 */
#define WWDTLP0_WWDTCTL0_PER_EN_8                ((uint32_t)0x00000060U)         /* !< Total timer count is 2^8 */
#define WWDTLP0_WWDTCTL0_PER_EN_6                ((uint32_t)0x00000070U)         /* !< Total timer count is 2^6 */
/* WWDTLP0_WWDTCTL0[WINDOW0] Bits */
#define WWDTLP0_WWDTCTL0_WINDOW0_OFS             (8)                             /* !< WINDOW0 Offset */
#define WWDTLP0_WWDTCTL0_WINDOW0_MASK            ((uint32_t)0x00000700U)         /* !< Closed window period in percentage
                                                                                    of the timer interval.
                                                                                    WWDTCTL1.WINSEL determines the active
                                                                                    window setting (WWDTCTL0.WINDOW0 or
                                                                                    WWDTCTL0.WINDOW1). */
#define WWDTLP0_WWDTCTL0_WINDOW0_SIZE_0          ((uint32_t)0x00000000U)         /* !< 0% (No closed Window) */
#define WWDTLP0_WWDTCTL0_WINDOW0_SIZE_12         ((uint32_t)0x00000100U)         /* !< 12.50% of the total timer period is
                                                                                    closed window */
#define WWDTLP0_WWDTCTL0_WINDOW0_SIZE_18         ((uint32_t)0x00000200U)         /* !< 18.75% of the total timer period is
                                                                                    closed window */
#define WWDTLP0_WWDTCTL0_WINDOW0_SIZE_25         ((uint32_t)0x00000300U)         /* !< 25% of the total timer period is
                                                                                    closed window */
#define WWDTLP0_WWDTCTL0_WINDOW0_SIZE_50         ((uint32_t)0x00000400U)         /* !< 50% of the total timer period is
                                                                                    closed window */
#define WWDTLP0_WWDTCTL0_WINDOW0_SIZE_75         ((uint32_t)0x00000500U)         /* !< 75% of the total timer period is
                                                                                    closed window */
#define WWDTLP0_WWDTCTL0_WINDOW0_SIZE_81         ((uint32_t)0x00000600U)         /* !< 81.25% of the total timer period is
                                                                                    closed window */
#define WWDTLP0_WWDTCTL0_WINDOW0_SIZE_87         ((uint32_t)0x00000700U)         /* !< 87.50% of the total timer period is
                                                                                    closed window */
/* WWDTLP0_WWDTCTL0[MODE] Bits */
#define WWDTLP0_WWDTCTL0_MODE_OFS                (16)                            /* !< MODE Offset */
#define WWDTLP0_WWDTCTL0_MODE_MASK               ((uint32_t)0x00010000U)         /* !< Window Watchdog Timer Mode */
#define WWDTLP0_WWDTCTL0_MODE_WINDOW             ((uint32_t)0x00000000U)         /* !< Window Watchdog Timer Mode. The
                                                                                    WWDT will generate a error signal to
                                                                                    the ESM when following conditions
                                                                                    occur: - Timer Expiration (Timeout) -
                                                                                    Reset WWDT during the active window
                                                                                    closed period - Keyword violation */
#define WWDTLP0_WWDTCTL0_MODE_INTERVAL           ((uint32_t)0x00010000U)         /* !< Interval Timer Mode. The WWDT acts
                                                                                    as an interval timer. It generates an
                                                                                    interrupt on timeout. */
/* WWDTLP0_WWDTCTL0[STISM] Bits */
#define WWDTLP0_WWDTCTL0_STISM_OFS               (17)                            /* !< STISM Offset */
#define WWDTLP0_WWDTCTL0_STISM_MASK              ((uint32_t)0x00020000U)         /* !< Stop In Sleep Mode.    The
                                                                                    functionality of this bit requires
                                                                                    that POLICY.HWCEN = 0. If
                                                                                    POLICY.HWCEN = 1 the WWDT resets
                                                                                    during sleep and needs
                                                                                    re-configuration. Note: This bit has
                                                                                    no effect for the global Window
                                                                                    Watchdog as Sleep Mode is not
                                                                                    supported. */
#define WWDTLP0_WWDTCTL0_STISM_CONT              ((uint32_t)0x00000000U)         /* !< The WWDT continues to function in
                                                                                    Sleep mode. */
#define WWDTLP0_WWDTCTL0_STISM_STOP              ((uint32_t)0x00020000U)         /* !< The WWDT stops in Sleep mode and
                                                                                    resumes where it was stopped after
                                                                                    wakeup. */
/* WWDTLP0_WWDTCTL0[KEY] Bits */
#define WWDTLP0_WWDTCTL0_KEY_OFS                 (24)                            /* !< KEY Offset */
#define WWDTLP0_WWDTCTL0_KEY_MASK                ((uint32_t)0xFF000000U)         /* !< KEY to allow write access to this
                                                                                    register.  Writing to this register
                                                                                    with an incorrect key activates the
                                                                                    WWDT error signal to the ESM. Read as
                                                                                    0. */
#define WWDTLP0_WWDTCTL0_KEY_UNLOCK_W            ((uint32_t)0xC9000000U)         /* !< KEY to allow write access to this
                                                                                    register */
/* WWDTLP0_WWDTCTL0[CLKDIV] Bits */
#define WWDTLP0_WWDTCTL0_CLKDIV_OFS              (0)                             /* !< CLKDIV Offset */
#define WWDTLP0_WWDTCTL0_CLKDIV_MASK             ((uint32_t)0x00000007U)         /* !< Module Clock Divider, Divide the
                                                                                    clock source by CLKDIV+1. Divider
                                                                                    values from /1 to /8 are possible.
                                                                                    The clock divider is currently 4
                                                                                    bits. Bit 4 has no effect and should
                                                                                    always be written with 0. */
#define WWDTLP0_WWDTCTL0_CLKDIV_MINIMUM          ((uint32_t)0x00000000U)         /* !< Minimum value */
#define WWDTLP0_WWDTCTL0_CLKDIV_MAXIMUM          ((uint32_t)0x00000007U)         /* !< Maximum value */
/* WWDTLP0_WWDTCTL0[WINDOW1] Bits */
#define WWDTLP0_WWDTCTL0_WINDOW1_OFS             (12)                            /* !< WINDOW1 Offset */
#define WWDTLP0_WWDTCTL0_WINDOW1_MASK            ((uint32_t)0x00007000U)         /* !< Closed window period in percentage
                                                                                    of the timer interval.
                                                                                    WWDTCTL1.WINSEL determines the active
                                                                                    window setting (WWDTCTL0.WINDOW0 or
                                                                                    WWDTCTL0.WINDOW1). */
#define WWDTLP0_WWDTCTL0_WINDOW1_SIZE_0          ((uint32_t)0x00000000U)         /* !< 0% (No closed Window) */
#define WWDTLP0_WWDTCTL0_WINDOW1_SIZE_12         ((uint32_t)0x00001000U)         /* !< 12.50% of the total timer period is
                                                                                    closed window */
#define WWDTLP0_WWDTCTL0_WINDOW1_SIZE_18         ((uint32_t)0x00002000U)         /* !< 18.75% of the total timer period is
                                                                                    closed window */
#define WWDTLP0_WWDTCTL0_WINDOW1_SIZE_25         ((uint32_t)0x00003000U)         /* !< 25% of the total timer period is
                                                                                    closed window */
#define WWDTLP0_WWDTCTL0_WINDOW1_SIZE_50         ((uint32_t)0x00004000U)         /* !< 50% of the total timer period is
                                                                                    closed window */
#define WWDTLP0_WWDTCTL0_WINDOW1_SIZE_75         ((uint32_t)0x00005000U)         /* !< 75% of the total timer period is
                                                                                    closed window */
#define WWDTLP0_WWDTCTL0_WINDOW1_SIZE_81         ((uint32_t)0x00006000U)         /* !< 81.25% of the total timer period is
                                                                                    closed window */
#define WWDTLP0_WWDTCTL0_WINDOW1_SIZE_87         ((uint32_t)0x00007000U)         /* !< 87.50% of the total timer period is
                                                                                    closed window */

/* WWDTLP0_WWDTCTL1 Bits */
/* WWDTLP0_WWDTCTL1[KEY] Bits */
#define WWDTLP0_WWDTCTL1_KEY_OFS                 (24)                            /* !< KEY Offset */
#define WWDTLP0_WWDTCTL1_KEY_MASK                ((uint32_t)0xFF000000U)         /* !< KEY to allow write access to this
                                                                                    register.  Writing to this register
                                                                                    with an incorrect key activates the
                                                                                    WWDT error signal to the ESM. Read as
                                                                                    0. */
#define WWDTLP0_WWDTCTL1_KEY_UNLOCK_W            ((uint32_t)0xBE000000U)         /* !< KEY to allow write access to this
                                                                                    register */
/* WWDTLP0_WWDTCTL1[WINSEL] Bits */
#define WWDTLP0_WWDTCTL1_WINSEL_OFS              (0)                             /* !< WINSEL Offset */
#define WWDTLP0_WWDTCTL1_WINSEL_MASK             ((uint32_t)0x00000001U)         /* !< Close Window Select */
#define WWDTLP0_WWDTCTL1_WINSEL_WIN0             ((uint32_t)0x00000000U)         /* !< In window mode field WINDOW0 of
                                                                                    WDDTCTL0 defines the closed window
                                                                                    size. */
#define WWDTLP0_WWDTCTL1_WINSEL_WIN1             ((uint32_t)0x00000001U)         /* !< In window mode field WINDOW1 of
                                                                                    WDDTCTL0 defines the closed window
                                                                                    size. */

/* WWDTLP0_WWDTCNTRST Bits */
/* WWDTLP0_WWDTCNTRST[RESTART] Bits */
#define WWDTLP0_WWDTCNTRST_RESTART_OFS           (0)                             /* !< RESTART Offset */
#define WWDTLP0_WWDTCNTRST_RESTART_MASK          ((uint32_t)0xFFFFFFFFU)         /* !< Window Watchdog Timer Counter
                                                                                    Restart Writing 00A7h to this
                                                                                    register restarts the WWDT Counter.
                                                                                    Writing any other value causes an
                                                                                    error generation to the ESM. Read as
                                                                                    0. */
#define WWDTLP0_WWDTCNTRST_RESTART_MINIMUM       ((uint32_t)0x00000000U)         /* !< Minimum value */
#define WWDTLP0_WWDTCNTRST_RESTART_MAXIMUM       ((uint32_t)0xFFFFFFFFU)         /* !< Maximum value */

/* WWDTLP0_WWDTSTAT Bits */
/* WWDTLP0_WWDTSTAT[RUN] Bits */
#define WWDTLP0_WWDTSTAT_RUN_OFS                 (0)                             /* !< RUN Offset */
#define WWDTLP0_WWDTSTAT_RUN_MASK                ((uint32_t)0x00000001U)         /* !< Watchdog running status flag. */
#define WWDTLP0_WWDTSTAT_RUN_OFF                 ((uint32_t)0x00000000U)         /* !< Watchdog counter stopped. */
#define WWDTLP0_WWDTSTAT_RUN_ON                  ((uint32_t)0x00000001U)         /* !< Watchdog running. */


#ifdef __cplusplus
}
#endif

#endif /* ti_devices_msp_peripherals_hw_wwdtlp0__include */

