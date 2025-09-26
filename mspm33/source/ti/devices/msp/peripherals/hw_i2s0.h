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

#ifndef ti_devices_msp_peripherals_hw_i2s0__include
#define ti_devices_msp_peripherals_hw_i2s0__include

/* Filename: hw_i2s0.h */
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
* I2S0 Registers
******************************************************************************/
#define I2S0_SPGDMA_OFS                          ((uint32_t)0x000010B0U)
#define I2S0_CPU_INT_OFS                         ((uint32_t)0x00001020U)
#define I2S0_GPRCM_OFS                           ((uint32_t)0x00000800U)


/** @addtogroup I2S0_SPGDMA
  @{
*/

typedef struct {
  __IO uint32_t SPGDMARXSZ;                        /* !< (@ 0x000010B0) DMA Channel Size */
  __IO uint32_t SPGDMARXDA;                        /* !< (@ 0x000010B4) DMA Channel Destination Address */
  __IO uint32_t SPGDMARXCTL;                       /* !< (@ 0x000010B8) DMA Channel Control */
       uint32_t RESERVED0;
  __IO uint32_t SPGDMATXSZ;                        /* !< (@ 0x000010C0) DMA Channel Size */
  __IO uint32_t SPGDMATXSA;                        /* !< (@ 0x000010C4) DMA Channel Destination Address */
  __IO uint32_t SPGDMATXCTL;                       /* !< (@ 0x000010C8) DMA Channel Control */
} I2S0_SPGDMA_Regs;

/*@}*/ /* end of group I2S0_SPGDMA */

/** @addtogroup I2S0_CPU_INT
  @{
*/

typedef struct {
  __I  uint32_t IIDX;                              /* !< (@ 0x00001020) Interrupt index */
       uint32_t RESERVED0;
  __IO uint32_t IMASK;                             /* !< (@ 0x00001028) Interrupt Mask Register  Selects mask states of
                                                      the flags in [IRQFLAGS.*] that contribute to the **I2S_IRQ** event. */
       uint32_t RESERVED1;
  __I  uint32_t RIS;                               /* !< (@ 0x00001030) This registers gives the raw interrupt status */
       uint32_t RESERVED2;
  __I  uint32_t MIS;                               /* !< (@ 0x00001038) This registers gives the raw interrupt status */
       uint32_t RESERVED3;
  __O  uint32_t ISET;                              /* !< (@ 0x00001040) Interrupt Set Register. This register can be used
                                                      by software for diagnostics and safety checking purposes. */
       uint32_t RESERVED4;
  __O  uint32_t ICLR;                              /* !< (@ 0x00001048) Interrupt clear register. This register allows
                                                      software to clear interrupts. */
} I2S0_CPU_INT_Regs;

/*@}*/ /* end of group I2S0_CPU_INT */

/** @addtogroup I2S0_GPRCM
  @{
*/

typedef struct {
  __IO uint32_t PWREN;                             /* !< (@ 0x00000800) Power enable */
  __O  uint32_t RSTCTL;                            /* !< (@ 0x00000804) Reset Control */
  __IO uint32_t CLKCFG;                            /* !< (@ 0x00000808) Peripheral Clock Configuration Register */
       uint32_t RESERVED0[2];
  __I  uint32_t STAT;                              /* !< (@ 0x00000814) Status Register */
} I2S0_GPRCM_Regs;

/*@}*/ /* end of group I2S0_GPRCM */

/** @addtogroup I2S0
  @{
*/

typedef struct {
       uint32_t RESERVED0[512];
  I2S0_GPRCM_Regs  GPRCM;                             /* !< (@ 0x00000800) */
       uint32_t RESERVED1[508];
  __IO uint32_t PDBGCTL;                           /* !< (@ 0x00001008) Peripheral Debug Control */
       uint32_t RESERVED2[5];
  I2S0_CPU_INT_Regs  CPU_INT;                           /* !< (@ 0x00001020) */
       uint32_t RESERVED3[25];
  I2S0_SPGDMA_Regs  SPGDMA;                            /* !< (@ 0x000010B0) */
       uint32_t RESERVED4[6];
  __O  uint32_t INTCTL;                            /* !< (@ 0x000010E4) Interrupt control register */
       uint32_t RESERVED5[6];
  __IO uint32_t FMTCFG;                            /* !< (@ 0x00001100) This register configures the serial interface
                                                      format */
  __IO uint32_t CLKCTL;                            /* !< (@ 0x00001104) This register controls internal audio clock */
  __I  uint32_t STAT;                              /* !< (@ 0x00001108) UART Status Register */
  __IO uint32_t IFLS;                              /* !< (@ 0x0000110C) UART Interrupt FIFO Level Select Register */
  __IO uint32_t WCLKSRC;                           /* !< (@ 0x00001110) This register configures the **WCLK** Source */
       uint32_t RESERVED6;
  __IO uint32_t DIRCFG;                            /* !< (@ 0x00001118) This register configures the direction of data
                                                      pins(**AD0**/**AD1**) */
       uint32_t RESERVED7;
  __O  uint32_t TXDATA;                            /* !< (@ 0x00001120) UART Transmit Data Register */
  __I  uint32_t RXDATA;                            /* !< (@ 0x00001124) UART Receive Data Register */
       uint32_t RESERVED8[8];
  __IO uint32_t WMASK0;                            /* !< (@ 0x00001148) This register configures the word selection dit
                                                      mask for data pin 0(**AD0**) */
  __IO uint32_t WMASK1;                            /* !< (@ 0x0000114C) This register configures the word selection dit
                                                      mask for data pin 1(**AD1**) */
       uint32_t RESERVED9[4];
  __IO uint32_t MCLKDIV;                           /* !< (@ 0x00001160) This field configures **MCLK** division ratio */
  __IO uint32_t WCLKDIV;                           /* !< (@ 0x00001164) Configures WCLK division ratio */
  __IO uint32_t BCLKDIV;                           /* !< (@ 0x00001168) This field configures **BCLK** division ratio */
} I2S0_Regs;

/*@}*/ /* end of group I2S0 */



#if defined ( __CC_ARM )
#pragma no_anon_unions
#endif

/******************************************************************************
* I2S0 Register Control Bits
******************************************************************************/

/* I2S0_SPGDMARXSZ Bits */
/* I2S0_SPGDMARXSZ[SIZE] Bits */
#define I2S0_SPGDMARXSZ_SIZE_OFS                 (0)                             /* !< SIZE Offset */
#define I2S0_SPGDMARXSZ_SIZE_MASK                ((uint32_t)0x0000FFFFU)         /* !< DMA Channel Size in number of
                                                                                    transfers */
#define I2S0_SPGDMARXSZ_SIZE_MINIMUM             ((uint32_t)0x00000000U)         /* !< Smallest value */
#define I2S0_SPGDMARXSZ_SIZE_MAXIMUM             ((uint32_t)0x0000FFFFU)         /* !< Highest possible value */

/* I2S0_SPGDMARXDA Bits */
/* I2S0_SPGDMARXDA[ADDR] Bits */
#define I2S0_SPGDMARXDA_ADDR_OFS                 (0)                             /* !< ADDR Offset */
#define I2S0_SPGDMARXDA_ADDR_MASK                ((uint32_t)0xFFFFFFFFU)         /* !< DMA Channel Destination Address */
#define I2S0_SPGDMARXDA_ADDR_MINIMUM             ((uint32_t)0x00000000U)         /* !< Smallest value */
#define I2S0_SPGDMARXDA_ADDR_MAXIMUM             ((uint32_t)0xFFFFFFFFU)         /* !< Highest possible value */

/* I2S0_SPGDMARXCTL Bits */
/* I2S0_SPGDMARXCTL[DMAEN] Bits */
#define I2S0_SPGDMARXCTL_DMAEN_OFS               (1)                             /* !< DMAEN Offset */
#define I2S0_SPGDMARXCTL_DMAEN_MASK              ((uint32_t)0x00000002U)         /* !< DMA enable */
#define I2S0_SPGDMARXCTL_DMAEN_DISABLE           ((uint32_t)0x00000000U)         /* !< DMA channel disabled */
#define I2S0_SPGDMARXCTL_DMAEN_ENABLE            ((uint32_t)0x00000002U)         /* !< DMA channel enabled */
/* I2S0_SPGDMARXCTL[DMAMEMINCR] Bits */
#define I2S0_SPGDMARXCTL_DMAMEMINCR_OFS          (20)                            /* !< DMAMEMINCR Offset */
#define I2S0_SPGDMARXCTL_DMAMEMINCR_MASK         ((uint32_t)0x00100000U)         /* !< DMA destination increment. This bit
                                                                                    selects automatic incrementing or
                                                                                    decrementing of the destination
                                                                                    address DMADA for each transfer. The
                                                                                    amount of change to the DMADA is
                                                                                    based on the definitin in the
                                                                                    DMADSTWDTH. For example an increment
                                                                                    of 1 (+1) on a WORD transfer will
                                                                                    increment the DMADA by 4. */
#define I2S0_SPGDMARXCTL_DMAMEMINCR_INCREMENT    ((uint32_t)0x00000000U)         /* !< Incremented by 1 (+1 * DMADSTWDTH) */
#define I2S0_SPGDMARXCTL_DMAMEMINCR_DECREMENT    ((uint32_t)0x00100000U)         /* !< Decremented by 1 (-1 * DMADSTWDTH) */
/* I2S0_SPGDMARXCTL[DMAPREIRQ] Bits */
#define I2S0_SPGDMARXCTL_DMAPREIRQ_OFS           (24)                            /* !< DMAPREIRQ Offset */
#define I2S0_SPGDMARXCTL_DMAPREIRQ_MASK          ((uint32_t)0x01000000U)         /* !< Enable an early IRQ event. This can
                                                                                    help software to react quicker to and
                                                                                    DMA done event or allows some
                                                                                    additional configuration before the
                                                                                    channel is complete.   Note: This
                                                                                    register is only available in a
                                                                                    FULL-channel configuration. Please
                                                                                    consult the datasheet of the specific
                                                                                    device to map which channel number
                                                                                    has FULL or BASIC capability. In a
                                                                                    BASIC configuration this register is
                                                                                    a read only value and always reads as
                                                                                    0x0. */
#define I2S0_SPGDMARXCTL_DMAPREIRQ_PREIRQ_DISABLE ((uint32_t)0x00000000U)         /* !< Pre-IRQ event disabled. */
#define I2S0_SPGDMARXCTL_DMAPREIRQ_PREIRQ_HALF   ((uint32_t)0x01000000U)         /* !< Issure Pre-IRQ event when DMASZ
                                                                                    reached the half size point of the
                                                                                    original transfer size */
/* I2S0_SPGDMARXCTL[DMATM] Bits */
#define I2S0_SPGDMARXCTL_DMATM_OFS               (27)                            /* !< DMATM Offset */
#define I2S0_SPGDMARXCTL_DMATM_MASK              ((uint32_t)0x08000000U)         /* !< DMA transfer mode register */
#define I2S0_SPGDMARXCTL_DMATM_SINGLE            ((uint32_t)0x00000000U)         /* !< Single transfer. Each transfers
                                                                                    requires a new trigger. When the
                                                                                    DMASZ counts down to zero an event
                                                                                    can be generated and the DMAEN is
                                                                                    cleared. */
#define I2S0_SPGDMARXCTL_DMATM_RPTSNGL           ((uint32_t)0x08000000U)         /* !< Repeated single transfer. Each
                                                                                    transfers requires a new trigger.
                                                                                    When the DMASZ counts down to zero an
                                                                                    event can be generated. After the
                                                                                    last transfer the DMASA, DMADA, DAMSZ
                                                                                    registers are restored to its initial
                                                                                    value and the DMAEN stays enabled. */
/* I2S0_SPGDMARXCTL[DMADSTWDTH] Bits */
#define I2S0_SPGDMARXCTL_DMADSTWDTH_OFS          (28)                            /* !< DMADSTWDTH Offset */
#define I2S0_SPGDMARXCTL_DMADSTWDTH_MASK         ((uint32_t)0x30000000U)         /* !< DMA destination width. This bit
                                                                                    selects the destination as a byte,
                                                                                    half word, word or long word. */
#define I2S0_SPGDMARXCTL_DMADSTWDTH_BYTE         ((uint32_t)0x00000000U)         /* !< Destination data width is BYTE
                                                                                    (8-bit) */
#define I2S0_SPGDMARXCTL_DMADSTWDTH_HALF         ((uint32_t)0x10000000U)         /* !< Destination data width is HALF-WORD
                                                                                    (16-bit) */
#define I2S0_SPGDMARXCTL_DMADSTWDTH_WORD         ((uint32_t)0x20000000U)         /* !< Destination data width is WORD
                                                                                    (32-bit) */

/* I2S0_SPGDMATXSZ Bits */
/* I2S0_SPGDMATXSZ[SIZE] Bits */
#define I2S0_SPGDMATXSZ_SIZE_OFS                 (0)                             /* !< SIZE Offset */
#define I2S0_SPGDMATXSZ_SIZE_MASK                ((uint32_t)0x0000FFFFU)         /* !< DMA Channel Size in number of
                                                                                    transfers */
#define I2S0_SPGDMATXSZ_SIZE_MINIMUM             ((uint32_t)0x00000000U)         /* !< Smallest value */
#define I2S0_SPGDMATXSZ_SIZE_MAXIMUM             ((uint32_t)0x0000FFFFU)         /* !< Highest possible value */

/* I2S0_SPGDMATXSA Bits */
/* I2S0_SPGDMATXSA[ADDR] Bits */
#define I2S0_SPGDMATXSA_ADDR_OFS                 (0)                             /* !< ADDR Offset */
#define I2S0_SPGDMATXSA_ADDR_MASK                ((uint32_t)0xFFFFFFFFU)         /* !< DMA Channel Destination Address */
#define I2S0_SPGDMATXSA_ADDR_MINIMUM             ((uint32_t)0x00000000U)         /* !< Smallest value */
#define I2S0_SPGDMATXSA_ADDR_MAXIMUM             ((uint32_t)0xFFFFFFFFU)         /* !< Highest possible value */

/* I2S0_SPGDMATXCTL Bits */
/* I2S0_SPGDMATXCTL[DMAEN] Bits */
#define I2S0_SPGDMATXCTL_DMAEN_OFS               (1)                             /* !< DMAEN Offset */
#define I2S0_SPGDMATXCTL_DMAEN_MASK              ((uint32_t)0x00000002U)         /* !< DMA enable */
#define I2S0_SPGDMATXCTL_DMAEN_DISABLE           ((uint32_t)0x00000000U)         /* !< DMA channel disabled */
#define I2S0_SPGDMATXCTL_DMAEN_ENABLE            ((uint32_t)0x00000002U)         /* !< DMA channel enabled */
/* I2S0_SPGDMATXCTL[DMAMEMINCR] Bits */
#define I2S0_SPGDMATXCTL_DMAMEMINCR_OFS          (20)                            /* !< DMAMEMINCR Offset */
#define I2S0_SPGDMATXCTL_DMAMEMINCR_MASK         ((uint32_t)0x00100000U)         /* !< DMA destination increment. This bit
                                                                                    selects automatic incrementing or
                                                                                    decrementing of the destination
                                                                                    address DMADA for each transfer. The
                                                                                    amount of change to the DMADA is
                                                                                    based on the definitin in the
                                                                                    DMADSTWDTH. For example an increment
                                                                                    of 1 (+1) on a WORD transfer will
                                                                                    increment the DMADA by 4. */
#define I2S0_SPGDMATXCTL_DMAMEMINCR_INCREMENT    ((uint32_t)0x00000000U)         /* !< Incremented by 1 (+1 * DMASRCWDTH) */
#define I2S0_SPGDMATXCTL_DMAMEMINCR_DECREMENT    ((uint32_t)0x00100000U)         /* !< Decremented by 1 (-1 * DMASRCWDTH) */
/* I2S0_SPGDMATXCTL[DMAPREIRQ] Bits */
#define I2S0_SPGDMATXCTL_DMAPREIRQ_OFS           (24)                            /* !< DMAPREIRQ Offset */
#define I2S0_SPGDMATXCTL_DMAPREIRQ_MASK          ((uint32_t)0x01000000U)         /* !< Enable an early IRQ event. This can
                                                                                    help software to react quicker to and
                                                                                    DMA done event or allows some
                                                                                    additional configuration before the
                                                                                    channel is complete.   Note: This
                                                                                    register is only available in a
                                                                                    FULL-channel configuration. Please
                                                                                    consult the datasheet of the specific
                                                                                    device to map which channel number
                                                                                    has FULL or BASIC capability. In a
                                                                                    BASIC configuration this register is
                                                                                    a read only value and always reads as
                                                                                    0x0. */
#define I2S0_SPGDMATXCTL_DMAPREIRQ_PREIRQ_DISABLE ((uint32_t)0x00000000U)         /* !< Pre-IRQ event disabled. */
#define I2S0_SPGDMATXCTL_DMAPREIRQ_PREIRQ_HALF   ((uint32_t)0x01000000U)         /* !< Issure Pre-IRQ event when DMASZ
                                                                                    reached the half size point of the
                                                                                    original transfer size */
/* I2S0_SPGDMATXCTL[DMATM] Bits */
#define I2S0_SPGDMATXCTL_DMATM_OFS               (27)                            /* !< DMATM Offset */
#define I2S0_SPGDMATXCTL_DMATM_MASK              ((uint32_t)0x08000000U)         /* !< DMA transfer mode register  Note:
                                                                                    The repeat-single (2h) and
                                                                                    repeat-block (3h) transfer are only
                                                                                    available in a FULL-channel
                                                                                    configuration. Please consult the
                                                                                    datasheet of the specific device to
                                                                                    map which channel number has FULL or
                                                                                    BASIC capability. In a BASIC channel
                                                                                    configuration only the values for
                                                                                    single (0h) and block (1h) transfer
                                                                                    can be set. */
#define I2S0_SPGDMATXCTL_DMATM_SINGLE            ((uint32_t)0x00000000U)         /* !< Single transfer. Each transfers
                                                                                    requires a new trigger. When the
                                                                                    DMASZ counts down to zero an event
                                                                                    can be generated and the DMAEN is
                                                                                    cleared. */
#define I2S0_SPGDMATXCTL_DMATM_RPTSNGL           ((uint32_t)0x08000000U)         /* !< Repeated single transfer. Each
                                                                                    transfers requires a new trigger.
                                                                                    When the DMASZ counts down to zero an
                                                                                    event can be generated. After the
                                                                                    last transfer the DMASA, DMADA, DAMSZ
                                                                                    registers are restored to its initial
                                                                                    value and the DMAEN stays enabled. */
/* I2S0_SPGDMATXCTL[DMASRCWDTH] Bits */
#define I2S0_SPGDMATXCTL_DMASRCWDTH_OFS          (28)                            /* !< DMASRCWDTH Offset */
#define I2S0_SPGDMATXCTL_DMASRCWDTH_MASK         ((uint32_t)0x30000000U)         /* !< DMA source width. This bit selects
                                                                                    the source data width as a byte, half
                                                                                    word, word or long word. */
#define I2S0_SPGDMATXCTL_DMASRCWDTH_BYTE         ((uint32_t)0x00000000U)         /* !< Source data width is BYTE (8-bit) */
#define I2S0_SPGDMATXCTL_DMASRCWDTH_HALF         ((uint32_t)0x10000000U)         /* !< Source data width is HALF-WORD
                                                                                    (16-bit) */
#define I2S0_SPGDMATXCTL_DMASRCWDTH_WORD         ((uint32_t)0x20000000U)         /* !< Source data width is WORD (32-bit) */

/* I2S0_IIDX Bits */
/* I2S0_IIDX[STAT] Bits */
#define I2S0_IIDX_STAT_OFS                       (0)                             /* !< STAT Offset */
#define I2S0_IIDX_STAT_MASK                      ((uint32_t)0x000000FFU)         /* !< Module Interrupt Vector Value.
                                                                                    This register provides the highes
                                                                                    priority interrupt index. A read
                                                                                    clears the corresponding interrupt
                                                                                    flag in RIS and MIS registers.
                                                                                    15h-1Fh = Reserved */
#define I2S0_IIDX_STAT_NO_INTR                   ((uint32_t)0x00000000U)         /* !< No interrupt pending */
#define I2S0_IIDX_STAT_WCLKERR                   ((uint32_t)0x00000001U)         /* !< WCLK Error */
#define I2S0_IIDX_STAT_RXIFG                     ((uint32_t)0x00000002U)         /* !< Receive interrupt; Interrupt Flag:
                                                                                    RX */
#define I2S0_IIDX_STAT_TXIFG                     ((uint32_t)0x00000003U)         /* !< Transmit interrupt; Interrupt Flag:
                                                                                    TX */
#define I2S0_IIDX_STAT_RXFIFO_OFV_EVT            ((uint32_t)0x00000004U)         /* !< RX FIFO Overflow Event/interrupt
                                                                                    pending */
#define I2S0_IIDX_STAT_TXFIFO_UNF_EVT            ((uint32_t)0x00000005U)         /* !< TX FIFO underflow interrupt */
#define I2S0_IIDX_STAT_DMA_DONE_RX               ((uint32_t)0x00000010U)         /* !< DMA DONE on RX */
#define I2S0_IIDX_STAT_DMA_DONE_TX               ((uint32_t)0x00000011U)         /* !< DMA DONE on TX */
#define I2S0_IIDX_STAT_DMA_PREIRQ_RX             ((uint32_t)0x00000013U)         /* !< DMA PRE IRQ INTERRUPT */
#define I2S0_IIDX_STAT_DMA_PREIRQ_TX             ((uint32_t)0x00000014U)         /* !< DMA PRE IRQ INTERRUPT */

/* I2S0_IMASK Bits */
/* I2S0_IMASK[WCLKERR] Bits */
#define I2S0_IMASK_WCLKERR_OFS                   (0)                             /* !< WCLKERR Offset */
#define I2S0_IMASK_WCLKERR_MASK                  ((uint32_t)0x00000001U)         /* !< WCLKERR interrupt mask */
#define I2S0_IMASK_WCLKERR_DIS                   ((uint32_t)0x00000000U)         /* !< Disable the interrupt mask */
#define I2S0_IMASK_WCLKERR_EN                    ((uint32_t)0x00000001U)         /* !< Enable the interrupt mask */
/* I2S0_IMASK[RXINT] Bits */
#define I2S0_IMASK_RXINT_OFS                     (1)                             /* !< RXINT Offset */
#define I2S0_IMASK_RXINT_MASK                    ((uint32_t)0x00000002U)         /* !< Enable Receive Interrupt. */
#define I2S0_IMASK_RXINT_CLR                     ((uint32_t)0x00000000U)         /* !< Clear Interrupt Mask */
#define I2S0_IMASK_RXINT_SET                     ((uint32_t)0x00000002U)         /* !< Set Interrupt Mask */
/* I2S0_IMASK[TXINT] Bits */
#define I2S0_IMASK_TXINT_OFS                     (2)                             /* !< TXINT Offset */
#define I2S0_IMASK_TXINT_MASK                    ((uint32_t)0x00000004U)         /* !< Enable Transmit Interrupt. */
#define I2S0_IMASK_TXINT_CLR                     ((uint32_t)0x00000000U)         /* !< Clear Interrupt Mask */
#define I2S0_IMASK_TXINT_SET                     ((uint32_t)0x00000004U)         /* !< Set Interrupt Mask */
/* I2S0_IMASK[RXFIFO_OVF] Bits */
#define I2S0_IMASK_RXFIFO_OVF_OFS                (3)                             /* !< RXFIFO_OVF Offset */
#define I2S0_IMASK_RXFIFO_OVF_MASK               ((uint32_t)0x00000008U)         /* !< RXFIFO overflow event mask. */
#define I2S0_IMASK_RXFIFO_OVF_CLR                ((uint32_t)0x00000000U)         /* !< Clear Interrupt Mask */
#define I2S0_IMASK_RXFIFO_OVF_SET                ((uint32_t)0x00000008U)         /* !< Set Interrupt Mask */
/* I2S0_IMASK[TXFIFO_UNF] Bits */
#define I2S0_IMASK_TXFIFO_UNF_OFS                (4)                             /* !< TXFIFO_UNF Offset */
#define I2S0_IMASK_TXFIFO_UNF_MASK               ((uint32_t)0x00000010U)         /* !< TX FIFO underflow interrupt mask */
#define I2S0_IMASK_TXFIFO_UNF_CLR                ((uint32_t)0x00000000U)         /* !< Clear Interrupt Mask */
#define I2S0_IMASK_TXFIFO_UNF_SET                ((uint32_t)0x00000010U)         /* !< Set Interrupt Mask */

/* I2S0_RIS Bits */
/* I2S0_RIS[WCLKERR] Bits */
#define I2S0_RIS_WCLKERR_OFS                     (0)                             /* !< WCLKERR Offset */
#define I2S0_RIS_WCLKERR_MASK                    ((uint32_t)0x00000001U)         /* !< This interrupt is set when:  - An
                                                                                    unexpected **WCLK** edge occurs
                                                                                    during the data delay period of a
                                                                                    phase.  Note unexpected **WCLK**
                                                                                    edges during the word and idle
                                                                                    periods of the phase are not
                                                                                    detected. -  In dual-phase mode, when
                                                                                    two **WCLK** edges are less than 4
                                                                                    **BCLK** cycles apart. -  In
                                                                                    single-phase mode, when a **WCLK**
                                                                                    pulse occurs before the last channel.
                                                                                    This error requires a complete
                                                                                    restart since word synchronization
                                                                                    has been lost. */
#define I2S0_RIS_WCLKERR_CLR                     ((uint32_t)0x00000000U)         /* !< Interrupt did not occur */
#define I2S0_RIS_WCLKERR_SET                     ((uint32_t)0x00000001U)         /* !< Interrupt occured */
/* I2S0_RIS[RXINT] Bits */
#define I2S0_RIS_RXINT_OFS                       (1)                             /* !< RXINT Offset */
#define I2S0_RIS_RXINT_MASK                      ((uint32_t)0x00000002U)         /* !< Receive Interrupt. */
#define I2S0_RIS_RXINT_CLR                       ((uint32_t)0x00000000U)         /* !< Interrupt did not occur */
#define I2S0_RIS_RXINT_SET                       ((uint32_t)0x00000002U)         /* !< Interrupt occured */
/* I2S0_RIS[TXINT] Bits */
#define I2S0_RIS_TXINT_OFS                       (2)                             /* !< TXINT Offset */
#define I2S0_RIS_TXINT_MASK                      ((uint32_t)0x00000004U)         /* !< Transmit Interrupt. */
#define I2S0_RIS_TXINT_CLR                       ((uint32_t)0x00000000U)         /* !< Interrupt did not occur */
#define I2S0_RIS_TXINT_SET                       ((uint32_t)0x00000004U)         /* !< Interrupt occured */
/* I2S0_RIS[RXFIFO_OVF] Bits */
#define I2S0_RIS_RXFIFO_OVF_OFS                  (3)                             /* !< RXFIFO_OVF Offset */
#define I2S0_RIS_RXFIFO_OVF_MASK                 ((uint32_t)0x00000008U)         /* !< RXFIFO overflow event. This
                                                                                    interrupt is set if an RX FIFO
                                                                                    overflow has been detected. */
#define I2S0_RIS_RXFIFO_OVF_CLR                  ((uint32_t)0x00000000U)         /* !< Interrupt did not occur */
#define I2S0_RIS_RXFIFO_OVF_SET                  ((uint32_t)0x00000008U)         /* !< Interrupt occurred */
/* I2S0_RIS[TXFIFO_UNF] Bits */
#define I2S0_RIS_TXFIFO_UNF_OFS                  (4)                             /* !< TXFIFO_UNF Offset */
#define I2S0_RIS_TXFIFO_UNF_MASK                 ((uint32_t)0x00000010U)         /* !< TX FIFO Underflow Interrupt */
#define I2S0_RIS_TXFIFO_UNF_CLR                  ((uint32_t)0x00000000U)         /* !< Interrupt did not occur */
#define I2S0_RIS_TXFIFO_UNF_SET                  ((uint32_t)0x00000010U)         /* !< Interrupt occurred */

/* I2S0_MIS Bits */
/* I2S0_MIS[WCLKERR] Bits */
#define I2S0_MIS_WCLKERR_OFS                     (0)                             /* !< WCLKERR Offset */
#define I2S0_MIS_WCLKERR_MASK                    ((uint32_t)0x00000001U)         /* !< This interrupt is set when:  - An
                                                                                    unexpected **WCLK** edge occurs
                                                                                    during the data delay period of a
                                                                                    phase.  Note unexpected **WCLK**
                                                                                    edges during the word and idle
                                                                                    periods of the phase are not
                                                                                    detected. -  In dual-phase mode, when
                                                                                    two **WCLK** edges are less than 4
                                                                                    **BCLK** cycles apart. -  In
                                                                                    single-phase mode, when a **WCLK**
                                                                                    pulse occurs before the last channel.
                                                                                    This error requires a complete
                                                                                    restart since word synchronization
                                                                                    has been lost. */
#define I2S0_MIS_WCLKERR_CLR                     ((uint32_t)0x00000000U)         /* !< Interrupt did not occur */
#define I2S0_MIS_WCLKERR_SET                     ((uint32_t)0x00000001U)         /* !< Interrupt occured */
/* I2S0_MIS[RXINT] Bits */
#define I2S0_MIS_RXINT_OFS                       (1)                             /* !< RXINT Offset */
#define I2S0_MIS_RXINT_MASK                      ((uint32_t)0x00000002U)         /* !< Masked Receive Interrupt. */
#define I2S0_MIS_RXINT_CLR                       ((uint32_t)0x00000000U)         /* !< Interrupt did not occur */
#define I2S0_MIS_RXINT_SET                       ((uint32_t)0x00000002U)         /* !< Interrupt occured */
/* I2S0_MIS[TXINT] Bits */
#define I2S0_MIS_TXINT_OFS                       (2)                             /* !< TXINT Offset */
#define I2S0_MIS_TXINT_MASK                      ((uint32_t)0x00000004U)         /* !< Masked Transmit Interrupt. */
#define I2S0_MIS_TXINT_CLR                       ((uint32_t)0x00000000U)         /* !< Interrupt did not occur */
#define I2S0_MIS_TXINT_SET                       ((uint32_t)0x00000004U)         /* !< Interrupt occured */
/* I2S0_MIS[DMA_DONE_RX] Bits */
#define I2S0_MIS_DMA_DONE_RX_OFS                 (15)                            /* !< DMA_DONE_RX Offset */
#define I2S0_MIS_DMA_DONE_RX_MASK                ((uint32_t)0x00008000U)         /* !< Masked DMA Done on RX Event Channel
                                                                                    Interrupt */
#define I2S0_MIS_DMA_DONE_RX_CLR                 ((uint32_t)0x00000000U)         /* !< Interrupt did not occur */
#define I2S0_MIS_DMA_DONE_RX_SET                 ((uint32_t)0x00008000U)         /* !< Interrupt occured */
/* I2S0_MIS[DMA_DONE_TX] Bits */
#define I2S0_MIS_DMA_DONE_TX_OFS                 (16)                            /* !< DMA_DONE_TX Offset */
#define I2S0_MIS_DMA_DONE_TX_MASK                ((uint32_t)0x00010000U)         /* !< Masked DMA Done on TX Event Channel
                                                                                    Interrupt */
#define I2S0_MIS_DMA_DONE_TX_CLR                 ((uint32_t)0x00000000U)         /* !< Interrupt did not occur */
#define I2S0_MIS_DMA_DONE_TX_SET                 ((uint32_t)0x00010000U)         /* !< Interrupt occured */
/* I2S0_MIS[RXFIFO_OVF] Bits */
#define I2S0_MIS_RXFIFO_OVF_OFS                  (3)                             /* !< RXFIFO_OVF Offset */
#define I2S0_MIS_RXFIFO_OVF_MASK                 ((uint32_t)0x00000008U)         /* !< Masked RXFIFO overflow event. This
                                                                                    interrupt is set if an RX FIFO
                                                                                    overflow has been detected. */
#define I2S0_MIS_RXFIFO_OVF_CLR                  ((uint32_t)0x00000000U)         /* !< Interrupt did not occur */
#define I2S0_MIS_RXFIFO_OVF_SET                  ((uint32_t)0x00000008U)         /* !< Interrupt occurred */
/* I2S0_MIS[TXFIFO_UNF] Bits */
#define I2S0_MIS_TXFIFO_UNF_OFS                  (4)                             /* !< TXFIFO_UNF Offset */
#define I2S0_MIS_TXFIFO_UNF_MASK                 ((uint32_t)0x00000010U)         /* !< TX FIFO underflow interrupt */
#define I2S0_MIS_TXFIFO_UNF_CLR                  ((uint32_t)0x00000000U)         /* !< Interrupt did not occur */
#define I2S0_MIS_TXFIFO_UNF_SET                  ((uint32_t)0x00000010U)         /* !< Interrupt occurred */

/* I2S0_ISET Bits */
/* I2S0_ISET[WCLKERR] Bits */
#define I2S0_ISET_WCLKERR_OFS                    (0)                             /* !< WCLKERR Offset */
#define I2S0_ISET_WCLKERR_MASK                   ((uint32_t)0x00000001U)         /* !< This field sets the interrupt
                                                                                    WCLKERR */
#define I2S0_ISET_WCLKERR_NOEFF                  ((uint32_t)0x00000000U)         /* !< Writing 0 has no effect */
#define I2S0_ISET_WCLKERR_SET                    ((uint32_t)0x00000001U)         /* !< Set interrupt */
/* I2S0_ISET[RXINT] Bits */
#define I2S0_ISET_RXINT_OFS                      (1)                             /* !< RXINT Offset */
#define I2S0_ISET_RXINT_MASK                     ((uint32_t)0x00000002U)         /* !< Set Receive Interrupt. */
#define I2S0_ISET_RXINT_NO_EFFECT                ((uint32_t)0x00000000U)         /* !< Writing 0 has no effect */
#define I2S0_ISET_RXINT_SET                      ((uint32_t)0x00000002U)         /* !< Set Interrupt */
/* I2S0_ISET[TXINT] Bits */
#define I2S0_ISET_TXINT_OFS                      (2)                             /* !< TXINT Offset */
#define I2S0_ISET_TXINT_MASK                     ((uint32_t)0x00000004U)         /* !< Set Transmit Interrupt. */
#define I2S0_ISET_TXINT_NO_EFFECT                ((uint32_t)0x00000000U)         /* !< Writing 0 has no effect */
#define I2S0_ISET_TXINT_SET                      ((uint32_t)0x00000004U)         /* !< Set Interrupt */
/* I2S0_ISET[RXFIFO_OVF] Bits */
#define I2S0_ISET_RXFIFO_OVF_OFS                 (3)                             /* !< RXFIFO_OVF Offset */
#define I2S0_ISET_RXFIFO_OVF_MASK                ((uint32_t)0x00000008U)         /* !< Set RXFIFO overflow event. */
#define I2S0_ISET_RXFIFO_OVF_NO_EFFECT           ((uint32_t)0x00000000U)         /* !< Writing 0 has no effect */
#define I2S0_ISET_RXFIFO_OVF_SET                 ((uint32_t)0x00000008U)         /* !< Set Interrupt */
/* I2S0_ISET[TXFIFO_UNF] Bits */
#define I2S0_ISET_TXFIFO_UNF_OFS                 (4)                             /* !< TXFIFO_UNF Offset */
#define I2S0_ISET_TXFIFO_UNF_MASK                ((uint32_t)0x00000010U)         /* !< Set TX FIFO Underflow Event */
#define I2S0_ISET_TXFIFO_UNF_NO_EFFECT           ((uint32_t)0x00000000U)         /* !< Writing has no effect */
#define I2S0_ISET_TXFIFO_UNF_SET                 ((uint32_t)0x00000010U)         /* !< Set interrupt */

/* I2S0_ICLR Bits */
/* I2S0_ICLR[WCLKERR] Bits */
#define I2S0_ICLR_WCLKERR_OFS                    (0)                             /* !< WCLKERR Offset */
#define I2S0_ICLR_WCLKERR_MASK                   ((uint32_t)0x00000001U)         /* !< This field clears the interrupt
                                                                                    WCLKERR */
#define I2S0_ICLR_WCLKERR_NOEFF                  ((uint32_t)0x00000000U)         /* !< Writing 0 has no effect */
#define I2S0_ICLR_WCLKERR_CLR                    ((uint32_t)0x00000001U)         /* !< Clear interrupt */
/* I2S0_ICLR[RXINT] Bits */
#define I2S0_ICLR_RXINT_OFS                      (1)                             /* !< RXINT Offset */
#define I2S0_ICLR_RXINT_MASK                     ((uint32_t)0x00000002U)         /* !< Clear Receive Interrupt. */
#define I2S0_ICLR_RXINT_NO_EFFECT                ((uint32_t)0x00000000U)         /* !< Writing 0 has no effect */
#define I2S0_ICLR_RXINT_CLR                      ((uint32_t)0x00000002U)         /* !< Clear Interrupt */
/* I2S0_ICLR[TXINT] Bits */
#define I2S0_ICLR_TXINT_OFS                      (2)                             /* !< TXINT Offset */
#define I2S0_ICLR_TXINT_MASK                     ((uint32_t)0x00000004U)         /* !< Clear Transmit Interrupt. */
#define I2S0_ICLR_TXINT_NO_EFFECT                ((uint32_t)0x00000000U)         /* !< Writing 0 has no effect */
#define I2S0_ICLR_TXINT_CLR                      ((uint32_t)0x00000004U)         /* !< Clear Interrupt */
/* I2S0_ICLR[RXFIFO_OVF] Bits */
#define I2S0_ICLR_RXFIFO_OVF_OFS                 (3)                             /* !< RXFIFO_OVF Offset */
#define I2S0_ICLR_RXFIFO_OVF_MASK                ((uint32_t)0x00000008U)         /* !< Clear RXFIFO overflow event. */
#define I2S0_ICLR_RXFIFO_OVF_NO_EFFECT           ((uint32_t)0x00000000U)         /* !< Writing 0 has no effect */
#define I2S0_ICLR_RXFIFO_OVF_CLR                 ((uint32_t)0x00000008U)         /* !< Clear Interrupt */
/* I2S0_ICLR[TXFIFO_UNF] Bits */
#define I2S0_ICLR_TXFIFO_UNF_OFS                 (4)                             /* !< TXFIFO_UNF Offset */
#define I2S0_ICLR_TXFIFO_UNF_MASK                ((uint32_t)0x00000010U)         /* !< Clear TXFIFO underflow event */
#define I2S0_ICLR_TXFIFO_UNF_NO_EFFECT           ((uint32_t)0x00000000U)         /* !< Writing has no effect */
#define I2S0_ICLR_TXFIFO_UNF_CLR                 ((uint32_t)0x00000010U)         /* !< Clear interrupt */

/* I2S0_PWREN Bits */
/* I2S0_PWREN[ENABLE] Bits */
#define I2S0_PWREN_ENABLE_OFS                    (0)                             /* !< ENABLE Offset */
#define I2S0_PWREN_ENABLE_MASK                   ((uint32_t)0x00000001U)         /* !< Enable the power */
#define I2S0_PWREN_ENABLE_DISABLE                ((uint32_t)0x00000000U)         /* !< Disable Power */
#define I2S0_PWREN_ENABLE_ENABLE                 ((uint32_t)0x00000001U)         /* !< Enable Power */
/* I2S0_PWREN[KEY] Bits */
#define I2S0_PWREN_KEY_OFS                       (24)                            /* !< KEY Offset */
#define I2S0_PWREN_KEY_MASK                      ((uint32_t)0xFF000000U)         /* !< KEY to allow Power State Change */
#define I2S0_PWREN_KEY_UNLOCK_W                  ((uint32_t)0x26000000U)         /* !< KEY to allow write access to this
                                                                                    register */

/* I2S0_RSTCTL Bits */
/* I2S0_RSTCTL[RESETSTKYCLR] Bits */
#define I2S0_RSTCTL_RESETSTKYCLR_OFS             (1)                             /* !< RESETSTKYCLR Offset */
#define I2S0_RSTCTL_RESETSTKYCLR_MASK            ((uint32_t)0x00000002U)         /* !< Clear the RESETSTKY bit in the STAT
                                                                                    register */
#define I2S0_RSTCTL_RESETSTKYCLR_NOP             ((uint32_t)0x00000000U)         /* !< Writing 0 has no effect */
#define I2S0_RSTCTL_RESETSTKYCLR_CLR             ((uint32_t)0x00000002U)         /* !< Clear reset sticky bit */
/* I2S0_RSTCTL[RESETASSERT] Bits */
#define I2S0_RSTCTL_RESETASSERT_OFS              (0)                             /* !< RESETASSERT Offset */
#define I2S0_RSTCTL_RESETASSERT_MASK             ((uint32_t)0x00000001U)         /* !< Assert reset to the peripheral */
#define I2S0_RSTCTL_RESETASSERT_NOP              ((uint32_t)0x00000000U)         /* !< Writing 0 has no effect */
#define I2S0_RSTCTL_RESETASSERT_ASSERT           ((uint32_t)0x00000001U)         /* !< Assert reset */
/* I2S0_RSTCTL[KEY] Bits */
#define I2S0_RSTCTL_KEY_OFS                      (24)                            /* !< KEY Offset */
#define I2S0_RSTCTL_KEY_MASK                     ((uint32_t)0xFF000000U)         /* !< Unlock key */
#define I2S0_RSTCTL_KEY_UNLOCK_W                 ((uint32_t)0xB1000000U)         /* !< KEY to allow write access to this
                                                                                    register */

/* I2S0_CLKCFG Bits */
/* I2S0_CLKCFG[KEY] Bits */
#define I2S0_CLKCFG_KEY_OFS                      (24)                            /* !< KEY Offset */
#define I2S0_CLKCFG_KEY_MASK                     ((uint32_t)0xFF000000U)         /* !< KEY to Allow State Change -- 0xA9 */
#define I2S0_CLKCFG_KEY_UNLOCK                   ((uint32_t)0xA9000000U)         /* !< key value to allow change field of
                                                                                    GPRCM */
/* I2S0_CLKCFG[BLOCKASYNC] Bits */
#define I2S0_CLKCFG_BLOCKASYNC_OFS               (8)                             /* !< BLOCKASYNC Offset */
#define I2S0_CLKCFG_BLOCKASYNC_MASK              ((uint32_t)0x00000100U)         /* !< Async Clock Request is blocked from
                                                                                    starting SYSOSC or forcing bus clock
                                                                                    to 32MHz */
#define I2S0_CLKCFG_BLOCKASYNC_DISABLE           ((uint32_t)0x00000000U)         /* !< Not block async clock request */
#define I2S0_CLKCFG_BLOCKASYNC_ENABLE            ((uint32_t)0x00000100U)         /* !< Block async clock request */

/* I2S0_GPRCM_STAT Bits */
/* I2S0_GPRCM_STAT[RESETSTKY] Bits */
#define I2S0_GPRCM_STAT_RESETSTKY_OFS            (16)                            /* !< RESETSTKY Offset */
#define I2S0_GPRCM_STAT_RESETSTKY_MASK           ((uint32_t)0x00010000U)         /* !< This bit indicates, if the
                                                                                    peripheral was reset, since this bit
                                                                                    was cleared by RESETSTKYCLR in the
                                                                                    RSTCTL register */
#define I2S0_GPRCM_STAT_RESETSTKY_NORES          ((uint32_t)0x00000000U)         /* !< The peripheral has not been reset
                                                                                    since this bit was last cleared by
                                                                                    RESETSTKYCLR in the RSTCTL register */
#define I2S0_GPRCM_STAT_RESETSTKY_RESET          ((uint32_t)0x00010000U)         /* !< The peripheral was reset since the
                                                                                    last bit clear */

/* I2S0_PDBGCTL Bits */
/* I2S0_PDBGCTL[FREE] Bits */
#define I2S0_PDBGCTL_FREE_OFS                    (0)                             /* !< FREE Offset */
#define I2S0_PDBGCTL_FREE_MASK                   ((uint32_t)0x00000001U)         /* !< Free run control */
#define I2S0_PDBGCTL_FREE_STOP                   ((uint32_t)0x00000000U)         /* !< The peripheral freezes
                                                                                    functionality while the Core Halted
                                                                                    input is asserted and resumes when it
                                                                                    is deasserted. */
#define I2S0_PDBGCTL_FREE_RUN                    ((uint32_t)0x00000001U)         /* !< The peripheral ignores the state of
                                                                                    the Core Halted input */
/* I2S0_PDBGCTL[SOFT] Bits */
#define I2S0_PDBGCTL_SOFT_OFS                    (1)                             /* !< SOFT Offset */
#define I2S0_PDBGCTL_SOFT_MASK                   ((uint32_t)0x00000002U)         /* !< Soft halt boundary control. This
                                                                                    function is only available, if [FREE]
                                                                                    is set to 'STOP' */
#define I2S0_PDBGCTL_SOFT_IMMEDIATE              ((uint32_t)0x00000000U)         /* !< The peripheral will halt
                                                                                    immediately, even if the resultant
                                                                                    state will result in corruption if
                                                                                    the system is restarted */
#define I2S0_PDBGCTL_SOFT_DELAYED                ((uint32_t)0x00000002U)         /* !< The peripheral blocks the debug
                                                                                    freeze until it has reached a
                                                                                    boundary where it can resume without
                                                                                    corruption */

/* I2S0_INTCTL Bits */
/* I2S0_INTCTL[INTEVAL] Bits */
#define I2S0_INTCTL_INTEVAL_OFS                  (0)                             /* !< INTEVAL Offset */
#define I2S0_INTCTL_INTEVAL_MASK                 ((uint32_t)0x00000001U)         /* !< Writing a 1 to this field
                                                                                    re-evaluates the interrupt sources. */
#define I2S0_INTCTL_INTEVAL_DISABLE              ((uint32_t)0x00000000U)         /* !< The interrupt or event line is
                                                                                    disabled. */
#define I2S0_INTCTL_INTEVAL_EVAL                 ((uint32_t)0x00000001U)         /* !< The interrupt or event line is in
                                                                                    software mode. Software must clear
                                                                                    the RIS. */

/* I2S0_FMTCFG Bits */
/* I2S0_FMTCFG[WORDLEN] Bits */
#define I2S0_FMTCFG_WORDLEN_OFS                  (0)                             /* !< WORDLEN Offset */
#define I2S0_FMTCFG_WORDLEN_MASK                 ((uint32_t)0x0000001FU)         /* !< Number of bits per word (8-32): In
                                                                                    single-phase format, this is the
                                                                                    exact number of bits per word.  In
                                                                                    dual-phase format, this is the
                                                                                    maximum number of bits per word.
                                                                                    Values below 8 and above 32 give
                                                                                    undefined behavior. Data written to
                                                                                    memory is always aligned to 16 or 32
                                                                                    bits as defined by [MEMLEN32]. Bit
                                                                                    widths that differ from this
                                                                                    alignment will either be truncated or
                                                                                    zero padded. */
/* I2S0_FMTCFG[DUALPHASE] Bits */
#define I2S0_FMTCFG_DUALPHASE_OFS                (5)                             /* !< DUALPHASE Offset */
#define I2S0_FMTCFG_DUALPHASE_MASK               ((uint32_t)0x00000020U)         /* !< This field selects between
                                                                                    dual-phase or single-phase format */
#define I2S0_FMTCFG_DUALPHASE_SINGLEPHASE        ((uint32_t)0x00000000U)         /* !< Single-phase: **DSP** format */
#define I2S0_FMTCFG_DUALPHASE_DUALPHASE          ((uint32_t)0x00000020U)         /* !< Dual-phase: **I2S**, **LJF** and
                                                                                    **RJF** formats */
/* I2S0_FMTCFG[SMPLEDGE] Bits */
#define I2S0_FMTCFG_SMPLEDGE_OFS                 (6)                             /* !< SMPLEDGE Offset */
#define I2S0_FMTCFG_SMPLEDGE_MASK                ((uint32_t)0x00000040U)         /* !< This field configures the sample
                                                                                    edge/ transfer edge of data (and
                                                                                    **WCLK**) on **BCLK** */
#define I2S0_FMTCFG_SMPLEDGE_NEGEDGE             ((uint32_t)0x00000000U)         /* !< Data is sampled on the negative
                                                                                    edge and clocked out on the positive
                                                                                    edge. */
#define I2S0_FMTCFG_SMPLEDGE_POSEDGE             ((uint32_t)0x00000040U)         /* !< Data is sampled on the positive
                                                                                    edge and clocked out on the negative
                                                                                    edge. */
/* I2S0_FMTCFG[MEMLEN32] Bits */
#define I2S0_FMTCFG_MEMLEN32_OFS                 (7)                             /* !< MEMLEN32 Offset */
#define I2S0_FMTCFG_MEMLEN32_MASK                ((uint32_t)0x00000080U)         /* !< This register configures the size
                                                                                    of each word stored to or loaded from
                                                                                    memory */
#define I2S0_FMTCFG_MEMLEN32_16BIT               ((uint32_t)0x00000000U)         /* !< 16-bit (one 16 bit access per
                                                                                    sample) */
#define I2S0_FMTCFG_MEMLEN32_32BIT               ((uint32_t)0x00000080U)         /* !< 32-bit(one 32-bit access per
                                                                                    sample) */
/* I2S0_FMTCFG[DATADLY] Bits */
#define I2S0_FMTCFG_DATADLY_OFS                  (8)                             /* !< DATADLY Offset */
#define I2S0_FMTCFG_DATADLY_MASK                 ((uint32_t)0x0000FF00U)         /* !< This field configures the number of
                                                                                    **BCLK** periods between a **WCLK**
                                                                                    edge and **MSB** of the first word in
                                                                                    a phase  Note: When 0, **MSB** of the
                                                                                    next word will be output in the idle
                                                                                    period between **LSB** of the
                                                                                    previous word and the start of the
                                                                                    next word. Otherwise logical 0 will
                                                                                    be output until the data delay has
                                                                                    expired. */
#define I2S0_FMTCFG_DATADLY_ZERO                 ((uint32_t)0x00000000U)         /* !< Zero **BCLK** periods - **LJF** and
                                                                                    **DSP** formats */
#define I2S0_FMTCFG_DATADLY_ONE                  ((uint32_t)0x00000100U)         /* !< One **BCLK** periods - **I2S** and
                                                                                    **DSP** formats */
#define I2S0_FMTCFG_DATADLY_TWO                  ((uint32_t)0x00000200U)         /* !< Two(Min) **BCLK** periods - **RJF**
                                                                                    format */
#define I2S0_FMTCFG_DATADLY_MAX                  ((uint32_t)0x0000FF00U)         /* !< Max(255) **BCLK** periods - **RJF**
                                                                                    format */
/* I2S0_FMTCFG[SUSPEND] Bits */
#define I2S0_FMTCFG_SUSPEND_OFS                  (24)                            /* !< SUSPEND Offset */
#define I2S0_FMTCFG_SUSPEND_MASK                 ((uint32_t)0x01000000U)         /* !< Suspend external communication */
#define I2S0_FMTCFG_SUSPEND_DISABLE              ((uint32_t)0x00000000U)         /* !< Functional mode resumed */
#define I2S0_FMTCFG_SUSPEND_ENABLE               ((uint32_t)0x01000000U)         /* !< External communication suspended */
/* I2S0_FMTCFG[ENABLE] Bits */
#define I2S0_FMTCFG_ENABLE_OFS                   (31)                            /* !< ENABLE Offset */
#define I2S0_FMTCFG_ENABLE_MASK                  ((uint32_t)0x80000000U)         /* !< I2S Module Enable.       If the I2S
                                                                                    is disabled in the middle of
                                                                                    transmission or reception, it
                                                                                    completes the current character
                                                                                    before stopping.      If ENABLE bit
                                                                                    is not set, all registers can still
                                                                                    be accessed and updated. It is
                                                                                    recommended to setup and change I2S
                                                                                    operation mode whhile ENABLE bit is
                                                                                    cleared to avoid unpredictable
                                                                                    behavior during setup or update.
                                                                                    If disabled,  I2S module will not
                                                                                    send or receive any data. */
#define I2S0_FMTCFG_ENABLE_DISABLE               ((uint32_t)0x00000000U)         /* !< Disable Module */
#define I2S0_FMTCFG_ENABLE_ENABLE                ((uint32_t)0x80000000U)         /* !< Enable module */
/* I2S0_FMTCFG[EMPTYSLOTOUTPUT] Bits */
#define I2S0_FMTCFG_EMPTYSLOTOUTPUT_OFS          (16)                            /* !< EMPTYSLOTOUTPUT Offset */
#define I2S0_FMTCFG_EMPTYSLOTOUTPUT_MASK         ((uint32_t)0x00030000U)         /* !< The field configures the
                                                                                    **EMPTYSLOTOUTPUT** data pin
                                                                                    direction */
#define I2S0_FMTCFG_EMPTYSLOTOUTPUT_ZERO         ((uint32_t)0x00000000U)         /* !< Send out zeroes in empty slots */
#define I2S0_FMTCFG_EMPTYSLOTOUTPUT_ONE          ((uint32_t)0x00010000U)         /* !< send out ones in empty slot */
#define I2S0_FMTCFG_EMPTYSLOTOUTPUT_TRISTATE     ((uint32_t)0x00020000U)         /* !< Tristate line during empty slot */

/* I2S0_CLKCTL Bits */
/* I2S0_CLKCTL[WBEN] Bits */
#define I2S0_CLKCTL_WBEN_OFS                     (0)                             /* !< WBEN Offset */
#define I2S0_CLKCTL_WBEN_MASK                    ((uint32_t)0x00000001U)         /* !< This field configures
                                                                                    **WCLK**/**BCLK** generation */
#define I2S0_CLKCTL_WBEN_DIS                     ((uint32_t)0x00000000U)         /* !< Disables the generation */
#define I2S0_CLKCTL_WBEN_EN                      ((uint32_t)0x00000001U)         /* !< Enable the generation */
/* I2S0_CLKCTL[WCLKPHASE] Bits */
#define I2S0_CLKCTL_WCLKPHASE_OFS                (1)                             /* !< WCLKPHASE Offset */
#define I2S0_CLKCTL_WCLKPHASE_MASK               ((uint32_t)0x00000006U)         /* !< The field configures how the WCLK
                                                                                    division ratio is calculated and used
                                                                                    to generate different duty cycles
                                                                                    (See [WCLKDIV.WDIV]) */
/* I2S0_CLKCTL[MEN] Bits */
#define I2S0_CLKCTL_MEN_OFS                      (3)                             /* !< MEN Offset */
#define I2S0_CLKCTL_MEN_MASK                     ((uint32_t)0x00000008U)         /* !< This field configures the **MCLK**
                                                                                    generation */
#define I2S0_CLKCTL_MEN_DIS                      ((uint32_t)0x00000000U)         /* !< Disable the generation */
#define I2S0_CLKCTL_MEN_EN                       ((uint32_t)0x00000008U)         /* !< Enable the generation */

/* I2S0_STAT Bits */
/* I2S0_STAT[TXFF] Bits */
#define I2S0_STAT_TXFF_OFS                       (6)                             /* !< TXFF Offset */
#define I2S0_STAT_TXFF_MASK                      ((uint32_t)0x00000040U)         /* !< UART Transmit FIFO Full  The
                                                                                    meaning of this bit depends on the
                                                                                    state of the FEN bit in the CTL0
                                                                                    register. */
#define I2S0_STAT_TXFF_CLEARED                   ((uint32_t)0x00000000U)         /* !< The transmitter is not full. */
#define I2S0_STAT_TXFF_SET                       ((uint32_t)0x00000040U)         /* !< If the FIFO is disabled (FEN is 0),
                                                                                    the transmit holding register is
                                                                                    full. If the FIFO is enabled (FEN is
                                                                                    1), the transmit FIFO is full. */
/* I2S0_STAT[RXFF] Bits */
#define I2S0_STAT_RXFF_OFS                       (3)                             /* !< RXFF Offset */
#define I2S0_STAT_RXFF_MASK                      ((uint32_t)0x00000008U)         /* !< UART Receive FIFO Full  The meaning
                                                                                    of this bit depends on the state of
                                                                                    the FEN bit in the CTL0 register. */
#define I2S0_STAT_RXFF_CLEARED                   ((uint32_t)0x00000000U)         /* !< The receiver can receive data. */
#define I2S0_STAT_RXFF_SET                       ((uint32_t)0x00000008U)         /* !< If the FIFO is disabled (FEN is 0),
                                                                                    the receive holding register is full.
                                                                                    If the FIFO is enabled (FEN is 1),
                                                                                    the receive FIFO is full. */
/* I2S0_STAT[TXFE] Bits */
#define I2S0_STAT_TXFE_OFS                       (5)                             /* !< TXFE Offset */
#define I2S0_STAT_TXFE_MASK                      ((uint32_t)0x00000020U)         /* !< UART Transmit FIFO Empty  The
                                                                                    meaning of this bit depends on the
                                                                                    state of the FEN bit in the CTL0
                                                                                    register. */
#define I2S0_STAT_TXFE_CLEARED                   ((uint32_t)0x00000000U)         /* !< The transmitter has data to
                                                                                    transmit. */
#define I2S0_STAT_TXFE_SET                       ((uint32_t)0x00000020U)         /* !< If the FIFO is disabled (FEN is 0),
                                                                                    the transmit holding register is
                                                                                    empty. If the FIFO is enabled (FEN is
                                                                                    1), the transmit FIFO is empty. */
/* I2S0_STAT[RXFE] Bits */
#define I2S0_STAT_RXFE_OFS                       (2)                             /* !< RXFE Offset */
#define I2S0_STAT_RXFE_MASK                      ((uint32_t)0x00000004U)         /* !< UART Receive FIFO Empty  The
                                                                                    meaning of this bit depends on the
                                                                                    state of the FEN bit in the CTL0
                                                                                    register. */
#define I2S0_STAT_RXFE_CLEARED                   ((uint32_t)0x00000000U)         /* !< The receiver is not empty. */
#define I2S0_STAT_RXFE_SET                       ((uint32_t)0x00000004U)         /* !< If the FIFO is disabled (FEN is 0),
                                                                                    the receive holding register is
                                                                                    empty. If the FIFO is enabled (FEN is
                                                                                    1), the receive FIFO is empty. */
/* I2S0_STAT[RXCLR] Bits */
#define I2S0_STAT_RXCLR_OFS                      (4)                             /* !< RXCLR Offset */
#define I2S0_STAT_RXCLR_MASK                     ((uint32_t)0x00000010U)         /* !< RX FIFO Clear Status */
#define I2S0_STAT_RXCLR_CLEARED                  ((uint32_t)0x00000000U)         /* !< FIFO is not cleared */
#define I2S0_STAT_RXCLR_SET                      ((uint32_t)0x00000010U)         /* !< FIFO clear is complete */
/* I2S0_STAT[TXCLR] Bits */
#define I2S0_STAT_TXCLR_OFS                      (7)                             /* !< TXCLR Offset */
#define I2S0_STAT_TXCLR_MASK                     ((uint32_t)0x00000080U)         /* !< TX FIFO Clear Status */
#define I2S0_STAT_TXCLR_CLEARED                  ((uint32_t)0x00000000U)         /* !< FIFO is not cleared */
#define I2S0_STAT_TXCLR_SET                      ((uint32_t)0x00000080U)         /* !< FIFO clear is complete */

/* I2S0_IFLS Bits */
/* I2S0_IFLS[TXIFLSEL] Bits */
#define I2S0_IFLS_TXIFLSEL_OFS                   (0)                             /* !< TXIFLSEL Offset */
#define I2S0_IFLS_TXIFLSEL_MASK                  ((uint32_t)0x00000007U)         /* !< FIFO Level Select for generating
                                                                                    events (interrupt/dma).  Note: for
                                                                                    undefined settings the default
                                                                                    configuration is used. */
#define I2S0_IFLS_TXIFLSEL_LVL_3_4               ((uint32_t)0x00000001U)         /* !< TX FIFO <= 3/4 empty */
#define I2S0_IFLS_TXIFLSEL_LVL_1_2               ((uint32_t)0x00000002U)         /* !< TX FIFO <= 1/2 empty (default) */
#define I2S0_IFLS_TXIFLSEL_LVL_1_4               ((uint32_t)0x00000003U)         /* !< TX FIFO <= 1/4 empty */
#define I2S0_IFLS_TXIFLSEL_LVL_EMPTY             ((uint32_t)0x00000005U)         /* !< TX FIFO is empty */
#define I2S0_IFLS_TXIFLSEL_LVL_ALMOST_EMPTY      ((uint32_t)0x00000006U)         /* !< TX FIFO <= 1 */
#define I2S0_IFLS_TXIFLSEL_LVL_ALMOST_FULL       ((uint32_t)0x00000007U)         /* !< TX_FIFO >= (MAX_FIFO_LEN -1) */
/* I2S0_IFLS[RXIFLSEL] Bits */
#define I2S0_IFLS_RXIFLSEL_OFS                   (4)                             /* !< RXIFLSEL Offset */
#define I2S0_IFLS_RXIFLSEL_MASK                  ((uint32_t)0x00000070U)         /* !< UART Receive Interrupt FIFO Level
                                                                                    Select  The trigger points for the
                                                                                    receive interrupt are as follows:
                                                                                    Note:    In ULP domain the trigger
                                                                                    levels are used for:   0: LVL_1_4
                                                                                    4: LVL_FULL   For undefined settings
                                                                                    the default configuration is used. */
#define I2S0_IFLS_RXIFLSEL_LVL_1_4               ((uint32_t)0x00000010U)         /* !< RX FIFO >= 1/4 full */
#define I2S0_IFLS_RXIFLSEL_LVL_1_2               ((uint32_t)0x00000020U)         /* !< RX FIFO >= 1/2 full (default) */
#define I2S0_IFLS_RXIFLSEL_LVL_3_4               ((uint32_t)0x00000030U)         /* !< RX FIFO >= 3/4 full */
#define I2S0_IFLS_RXIFLSEL_LVL_FULL              ((uint32_t)0x00000050U)         /* !< RX FIFO is full */
#define I2S0_IFLS_RXIFLSEL_LVL_ALMOST_FULL       ((uint32_t)0x00000060U)         /* !< RX_FIFO >= (MAX_FIFO_LEN -1) */
#define I2S0_IFLS_RXIFLSEL_LVL_ALMOST_EMPTY      ((uint32_t)0x00000070U)         /* !< RX_FIFO <= 1 */
/* I2S0_IFLS[TXCLR] Bits */
#define I2S0_IFLS_TXCLR_OFS                      (3)                             /* !< TXCLR Offset */
#define I2S0_IFLS_TXCLR_MASK                     ((uint32_t)0x00000008U)         /* !< TX FIFO CLEAR. Setting this bit
                                                                                    will clear the TX FIFO contents. */
#define I2S0_IFLS_TXCLR_DISABLE                  ((uint32_t)0x00000000U)         /* !< Disable FIFO clear */
#define I2S0_IFLS_TXCLR_ENABLE                   ((uint32_t)0x00000008U)         /* !< Enable FIFO Clear */
/* I2S0_IFLS[RXCLR] Bits */
#define I2S0_IFLS_RXCLR_OFS                      (7)                             /* !< RXCLR Offset */
#define I2S0_IFLS_RXCLR_MASK                     ((uint32_t)0x00000080U)         /* !< RX FIFO CLEAR. Setting this bit
                                                                                    will clear the RX FIFO contents. */
#define I2S0_IFLS_RXCLR_DISABLE                  ((uint32_t)0x00000000U)         /* !< Disable FIFO clear */
#define I2S0_IFLS_RXCLR_ENABLE                   ((uint32_t)0x00000080U)         /* !< Enable FIFO Clear */

/* I2S0_WCLKSRC Bits */
/* I2S0_WCLKSRC[WBCLKSRC] Bits */
#define I2S0_WCLKSRC_WBCLKSRC_OFS                (0)                             /* !< WBCLKSRC Offset */
#define I2S0_WCLKSRC_WBCLKSRC_MASK               ((uint32_t)0x00000003U)         /* !< This field selects
                                                                                    **WCLK**/**BCLK** source for **I2S**. */
#define I2S0_WCLKSRC_WBCLKSRC_NONE               ((uint32_t)0x00000000U)         /* !< None ('0') */
#define I2S0_WCLKSRC_WBCLKSRC_EXT                ((uint32_t)0x00000001U)         /* !< External **WCLK** generator, from
                                                                                    pad */
#define I2S0_WCLKSRC_WBCLKSRC_INT                ((uint32_t)0x00000002U)         /* !< Internal **WCLK** generator, from
                                                                                    module PRCM */
/* I2S0_WCLKSRC[WCLKINV] Bits */
#define I2S0_WCLKSRC_WCLKINV_OFS                 (2)                             /* !< WCLKINV Offset */
#define I2S0_WCLKSRC_WCLKINV_MASK                ((uint32_t)0x00000004U)         /* !< This field Inverts **WCLK** source
                                                                                    (pad or internal). */
#define I2S0_WCLKSRC_WCLKINV_NOT_INTVERTED       ((uint32_t)0x00000000U)         /* !< Source is not intverted */
#define I2S0_WCLKSRC_WCLKINV_INVERTED            ((uint32_t)0x00000004U)         /* !< Source is inverted */

/* I2S0_DIRCFG Bits */
/* I2S0_DIRCFG[AD0] Bits */
#define I2S0_DIRCFG_AD0_OFS                      (0)                             /* !< AD0 Offset */
#define I2S0_DIRCFG_AD0_MASK                     ((uint32_t)0x00000003U)         /* !< The field configures the **AD0**
                                                                                    data pin direction */
#define I2S0_DIRCFG_AD0_DIS                      ((uint32_t)0x00000000U)         /* !< Not in use (disabled) */
#define I2S0_DIRCFG_AD0_IN                       ((uint32_t)0x00000001U)         /* !< Input */
#define I2S0_DIRCFG_AD0_OUT                      ((uint32_t)0x00000002U)         /* !< Output */
/* I2S0_DIRCFG[AD1] Bits */
#define I2S0_DIRCFG_AD1_OFS                      (4)                             /* !< AD1 Offset */
#define I2S0_DIRCFG_AD1_MASK                     ((uint32_t)0x00000030U)         /* !< The field configures the **AD1**
                                                                                    data pin direction */
#define I2S0_DIRCFG_AD1_DIS                      ((uint32_t)0x00000000U)         /* !< Not in use (disabled) */
#define I2S0_DIRCFG_AD1_IN                       ((uint32_t)0x00000010U)         /* !< Input */
#define I2S0_DIRCFG_AD1_OUT                      ((uint32_t)0x00000020U)         /* !< Output */

/* I2S0_TXDATA Bits */
/* I2S0_TXDATA[DATA] Bits */
#define I2S0_TXDATA_DATA_OFS                     (0)                             /* !< DATA Offset */
#define I2S0_TXDATA_DATA_MASK                    ((uint32_t)0xFFFFFFFFU)         /* !< Data Transmitted or Received  Data
                                                                                    that is to be transmitted via the
                                                                                    UART is written to this field.  When
                                                                                    read, this field contains the data
                                                                                    that was received by the UART. */
#define I2S0_TXDATA_DATA_MINIMUM                 ((uint32_t)0x00000000U)         /* !< Smallest value */
#define I2S0_TXDATA_DATA_MAXIMUM                 ((uint32_t)0xFFFFFFFFU)         /* !< Highest possible value */

/* I2S0_RXDATA Bits */
/* I2S0_RXDATA[DATA] Bits */
#define I2S0_RXDATA_DATA_OFS                     (0)                             /* !< DATA Offset */
#define I2S0_RXDATA_DATA_MASK                    ((uint32_t)0xFFFFFFFFU)         /* !< Received Data.  When read, this
                                                                                    field contains the data that was
                                                                                    received by the UART. */
#define I2S0_RXDATA_DATA_MINIMUM                 ((uint32_t)0x00000000U)         /* !< Smallest value */
#define I2S0_RXDATA_DATA_MAXIMUM                 ((uint32_t)0xFFFFFFFFU)         /* !< Highest possible value */

/* I2S0_WMASK0 Bits */
/* I2S0_WMASK0[MASK] Bits */
#define I2S0_WMASK0_MASK_OFS                     (0)                             /* !< MASK Offset */
#define I2S0_WMASK0_MASK_MASK                    ((uint32_t)0x0000FFFFU)         /* !< Bit-mask indicating valid channels
                                                                                    in a frame on AD0.  In single-phase
                                                                                    mode, each bit represents one
                                                                                    channel, starting with **LSB** for
                                                                                    the first word in the frame. A frame
                                                                                    can contain up to 8/16 channels based
                                                                                    on SoC configuration.  Channels that
                                                                                    are not included in the mask will not
                                                                                    be sampled nor stored in memory; data
                                                                                    clocked out in these slots is as per
                                                                                    configured EMPTYSLOTOUTPUT.  In
                                                                                    dual-phase mode, only the two
                                                                                    **LSB**s are considered. For a stereo
                                                                                    configuration, set both bits. For a
                                                                                    mono configuration, set bit 0 only.
                                                                                    In mono mode, only channel 0 will be
                                                                                    sampled and stored to memory, and
                                                                                    channel 0 will be repeated when
                                                                                    clocked out.  In mono mode, only
                                                                                    channel 0 will be sampled and stored
                                                                                    to memory, and channel 0 will be
                                                                                    repeated in the second phase when
                                                                                    clocked out.  If all bits are zero,
                                                                                    no input words will be stored to
                                                                                    memory, and the output data lines
                                                                                    will be constant '0'. This can be
                                                                                    utilized when **PWM** debug output is
                                                                                    desired without any actively used
                                                                                    output pins. */

/* I2S0_WMASK1 Bits */
/* I2S0_WMASK1[MASK] Bits */
#define I2S0_WMASK1_MASK_OFS                     (0)                             /* !< MASK Offset */
#define I2S0_WMASK1_MASK_MASK                    ((uint32_t)0x0000FFFFU)         /* !< Bit-mask indicating valid channels
                                                                                    in a frame on AD1.  In single-phase
                                                                                    mode, each bit represents one
                                                                                    channel, starting with **LSB** for
                                                                                    the first word in the frame. A frame
                                                                                    can contain up to 8/16 channels based
                                                                                    on SoC configuration.  Channels that
                                                                                    are not included in the mask will not
                                                                                    be sampled nor stored in memory; data
                                                                                    clocked out in these slots is as per
                                                                                    configured EMPTYSLOTOUTPUT.  In
                                                                                    dual-phase mode, only the two
                                                                                    **LSB**s are considered. For a stereo
                                                                                    configuration, set both bits. For a
                                                                                    mono configuration, set bit 0 only.
                                                                                    In mono mode, only channel 0 will be
                                                                                    sampled and stored to memory, and
                                                                                    channel 0 will be repeated when
                                                                                    clocked out.  In mono mode, only
                                                                                    channel 0 will be sampled and stored
                                                                                    to memory, and channel 0 will be
                                                                                    repeated in the second phase when
                                                                                    clocked out.  If all bits are zero,
                                                                                    no input words will be stored to
                                                                                    memory, and the output data lines
                                                                                    will be constant '0'. This can be
                                                                                    utilized when **PWM** debug output is
                                                                                    desired without any actively used
                                                                                    output pins. */

/* I2S0_MCLKDIV Bits */
/* I2S0_MCLKDIV[MDIV] Bits */
#define I2S0_MCLKDIV_MDIV_OFS                    (0)                             /* !< MDIV Offset */
#define I2S0_MCLKDIV_MDIV_MASK                   ((uint32_t)0x000003FFU)         /* !< An unsigned factor of the division
                                                                                    ratio used to generate **MCLK**
                                                                                    [2-1024]:
                                                                                    **MCLK** =
                                                                                    MCUCLK/MDIV[Hz] **MCUCLK** is upto
                                                                                    96MHz.
                                                                                    A value of 0 is
                                                                                    interpreted as 1024.
                                                                                    A value of
                                                                                    1 is invalid.
                                                                                    If MDIV is odd
                                                                                    the low phase of the clock is one
                                                                                    **MCUCLK** period longer than the
                                                                                    high phase. */

/* I2S0_WCLKDIV Bits */
/* I2S0_WCLKDIV[WDIV] Bits */
#define I2S0_WCLKDIV_WDIV_OFS                    (0)                             /* !< WDIV Offset */
#define I2S0_WCLKDIV_WDIV_MASK                   ((uint32_t)0x0000FFFFU)         /* !< If[CLKCTL.WCLKPHASE]= 0, Single
                                                                                    phase. **WCLK**is high
                                                                                    one**BCLK**period and low WDIV[9:0]
                                                                                    (unsigned, [1-1023])**BCLK**periods.
                                                                                    
                                                                                    **WCLK**=**MCUCLK**/
                                                                                    BDIV*(WDIV[9:0] + 1) [Hz]
                                                                                    **MCUCLK**upto 96MHz.
                                                                                    
                                                                                    If[CLKCTL.WCLKPHASE.*]= 1, Dual
                                                                                    phase. Each phase on**WCLK**(50% duty
                                                                                    cycle) is WDIV[9:0] (unsigned,
                                                                                    [1-1023])**BCLK**periods.
                                                                                    
                                                                                    **WCLK**=**MCUCLK**/
                                                                                    BDIV*(2*WDIV[9:0]) [Hz]
                                                                                    
                                                                                    If[CLKCTL.WCLKPHASE.*] = 2, User
                                                                                    defined. **WCLK**is high WDIV[7:0]
                                                                                    (unsigned, [1-255])**BCLK**periods
                                                                                    and low WDIV[15:8] (unsigned,
                                                                                    [1-255])**BCLK**periods.
                                                                                    
                                                                                    **WCLK**=**MCUCLK**/ (BDIV*(WDIV[7:0]
                                                                                    + WDIV[15:8]) [Hz] */

/* I2S0_BCLKDIV Bits */
/* I2S0_BCLKDIV[BDIV] Bits */
#define I2S0_BCLKDIV_BDIV_OFS                    (0)                             /* !< BDIV Offset */
#define I2S0_BCLKDIV_BDIV_MASK                   ((uint32_t)0x000003FFU)         /* !< An unsigned factor of the division
                                                                                    ratio used to generate **BCLK**
                                                                                    [2-1024]:
                                                                                    **BCLK** =
                                                                                    MCUCLK/BDIV[Hz]
                                                                                    A value of 0
                                                                                    is interpreted as 1024.
                                                                                    A value
                                                                                    of 1 is invalid.
                                                                                    If BDIV is
                                                                                    odd and [FMTCFG.SMPLEDGE] = 0, the
                                                                                    low phase of the clock is one
                                                                                    **MCUCLK** period longer than the
                                                                                    high phase.
                                                                                    If BDIV is odd and
                                                                                    [FMTCFG.SMPLEDGE] = 1 , the high
                                                                                    phase of the clock is one **MCUCLK**
                                                                                    period longer than the low phase. */


#ifdef __cplusplus
}
#endif

#endif /* ti_devices_msp_peripherals_hw_i2s0__include */

