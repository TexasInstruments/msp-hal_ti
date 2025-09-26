/*
 * Copyright (c) 2024, Texas Instruments Incorporated
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * *  Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 * *  Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * *  Neither the name of Texas Instruments Incorporated nor the names of
 *    its contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
 * OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
 * OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */
/*!****************************************************************************
 *  @file       dl_spgss.h
 *  @brief      Scalable Peripheral Generator SubSystem (SPGSS) Driver Library
 *  @defgroup   SPGSS Scalable Peripheral Generator SubSystem (SPGSS)
 *
 *  @anchor ti_dl_dl_m0p_spgss_Overview
 *  # Overview
 *
 *  TODO
 *
 *  <hr>
 ******************************************************************************
 */
/** @addtogroup SPGSS
 * @{
 */
#ifndef ti_dl_dl_spgss__include
#define ti_dl_dl_spgss__include

#include <stdbool.h>
#include <stdint.h>

#include <ti/devices/msp/msp.h>
#include <ti/driverlib/dl_common.h>

#ifdef __MCU_HAS_SPGSS__

#ifdef __cplusplus
extern "C" {
#endif

/* clang-format off */

/** @addtogroup DL_SPGSS_INTERRUPTS
 *  @{
 */

/*!
 * @brief SPGSS DMA CHAIN0 done
 */
#define DL_SPGSS_INTERRUPT_CHAIN0_DMA_DONE           (SPGSS_CPU_INT_IMASK_DMA_DONE_CHAIN0_SET)

/*!
 * @brief SPGSS DMA CHAIN1 done
 */
#define DL_SPGSS_INTERRUPT_CHAIN1_DMA_DONE           (SPGSS_CPU_INT_IMASK_DMA_DONE_CHAIN1_SET)

/** @}*/

/*! @enum DL_SPGSS_PAIR_CONTROLLER_SEL */
typedef enum {
    /*! Select UC0 as controller for loopback */
    DL_SPGSS_PAIR_CONTROLLER_UC0_= SPGSS_PAIR0_CTL_SPG1,
    /*! Select UC1 as controller for loopback */
    DL_SPGSS_PAIR_CONTROLLER_UC1_= SPGSS_PAIR0_CTL_SPG2,
    /*! Select UC2 as controller for loopback */
    DL_SPGSS_PAIR_CONTROLLER_UC2_= SPGSS_PAIR0_CTL_SPG3,
    /*! Select UC3 as controller for loopback */
    DL_SPGSS_PAIR_CONTROLLER_UC3_= SPGSS_PAIR0_CTL_SPG4,
    /*! Select UC4 as controller for loopback */
    DL_SPGSS_PAIR_CONTROLLER_UC4_= SPGSS_PAIR0_CTL_SPG5,
    /*! Select UC5 as controller for loopback */
    DL_SPGSS_PAIR_CONTROLLER_UC5_= SPGSS_PAIR0_CTL_SPG6,
    /*! Select UC6 as controller for loopback */
    DL_SPGSS_PAIR_CONTROLLER_UC6_= SPGSS_PAIR0_CTL_SPG7,
    /*! Select UC7 as controller for loopback */
    DL_SPGSS_PAIR_CONTROLLER_UC7_= SPGSS_PAIR0_CTL_SPG8,
    /*! Select UC8 as controller for loopback */
    DL_SPGSS_PAIR_CONTROLLER_UC8_= SPGSS_PAIR0_CTL_SPG9,
    /*! Select UC9 as controller for loopback */
    DL_SPGSS_PAIR_CONTROLLER_UC9_= SPGSS_PAIR0_CTL_SPG10,
    /*! Select UC10_as controller for loopback */
    DL_SPGSS_PAIR_CONTROLLER_UC10_= SPGSS_PAIR0_CTL_SPG11,
    /*! Select UC11_as controller for loopback */
    DL_SPGSS_PAIR_CONTROLLER_UC11_= SPGSS_PAIR0_CTL_SPG12,
    /*! Select UC12_as controller for loopback */
    DL_SPGSS_PAIR_CONTROLLER_UC12_= SPGSS_PAIR0_CTL_SPG13,
    /*! Select UC13_as controller for loopback */
    DL_SPGSS_PAIR_CONTROLLER_UC13_= SPGSS_PAIR0_CTL_SPG14,
    /*! Select UC14_as controller for loopback */
    DL_SPGSS_PAIR_CONTROLLER_UC14_= SPGSS_PAIR0_CTL_SPG15,
    /*! Select UC15_as controller for loopback */
    DL_SPGSS_PAIR_CONTROLLER_UC15_= SPGSS_PAIR0_CTL_SPG16,
} DL_SPGSS_PAIR_CONTROLLER_SEL;

/*! @enum DL_SPGSS_PAIR_TARGET_SEL */
typedef enum {
    /*! Select UC0 as target for loopback */
    DL_SPGSS_PAIR_TARGET_UC0_= SPGSS_PAIR0_TARGET_SPG1,
    /*! Select UC1 as target for loopback */
    DL_SPGSS_PAIR_TARGET_UC1_= SPGSS_PAIR0_TARGET_SPG2,
    /*! Select UC2 as target for loopback */
    DL_SPGSS_PAIR_TARGET_UC2_= SPGSS_PAIR0_TARGET_SPG3,
    /*! Select UC3 as target for loopback */
    DL_SPGSS_PAIR_TARGET_UC3_= SPGSS_PAIR0_TARGET_SPG4,
    /*! Select UC4 as target for loopback */
    DL_SPGSS_PAIR_TARGET_UC4_= SPGSS_PAIR0_TARGET_SPG5,
    /*! Select UC5 as target for loopback */
    DL_SPGSS_PAIR_TARGET_UC5_= SPGSS_PAIR0_TARGET_SPG6,
    /*! Select UC6 as target for loopback */
    DL_SPGSS_PAIR_TARGET_UC6_= SPGSS_PAIR0_TARGET_SPG7,
    /*! Select UC7 as target for loopback */
    DL_SPGSS_PAIR_TARGET_UC7_= SPGSS_PAIR0_TARGET_SPG8,
    /*! Select UC8 as target for loopback */
    DL_SPGSS_PAIR_TARGET_UC8_= SPGSS_PAIR0_TARGET_SPG9,
    /*! Select UC9 as target for loopback */
    DL_SPGSS_PAIR_TARGET_UC9_= SPGSS_PAIR0_TARGET_SPG10,
    /*! Select UC10_as target for loopback */
    DL_SPGSS_PAIR_TARGET_UC10_= SPGSS_PAIR0_TARGET_SPG11,
    /*! Select UC11_as target for loopback */
    DL_SPGSS_PAIR_TARGET_UC11_= SPGSS_PAIR0_TARGET_SPG12,
    /*! Select UC12_as target for loopback */
    DL_SPGSS_PAIR_TARGET_UC12_= SPGSS_PAIR0_TARGET_SPG13,
    /*! Select UC13_as target for loopback */
    DL_SPGSS_PAIR_TARGET_UC13_= SPGSS_PAIR0_TARGET_SPG14,
    /*! Select UC14_as target for loopback */
    DL_SPGSS_PAIR_TARGET_UC14_= SPGSS_PAIR0_TARGET_SPG15,
    /*! Select UC15_as target for loopback */
    DL_SPGSS_PAIR_TARGET_UC15_= SPGSS_PAIR0_TARGET_SPG16,
} DL_SPGSS_PAIR_TARGET_SEL;

/*! @enum DL_SPGSS_DMA_CHAIN_FIFO_SEL */
typedef enum {
    /*! Select UC0_RX DONE as FIFO for system DMA CHAIN */
    DL_SPGSS_DMA_CHAIN_FIFO_UC0_RX_DONE = SPGSS_DMACHAIN0_SEL_SPG1RXDONE,
    /*! Select UC1_RX DONE as FIFO for system DMA CHAIN */
    DL_SPGSS_DMA_CHAIN_FIFO_UC1_RX_DONE = SPGSS_DMACHAIN0_SEL_SPG2RXDONE,
    /*! Select UC2_RX DONE as FIFO for system DMA CHAIN */
    DL_SPGSS_DMA_CHAIN_FIFO_UC2_RX_DONE = SPGSS_DMACHAIN0_SEL_SPG3RXDONE,
    /*! Select UC3_RX DONE as FIFO for system DMA CHAIN */
    DL_SPGSS_DMA_CHAIN_FIFO_UC3_RX_DONE = SPGSS_DMACHAIN0_SEL_SPG4RXDONE,
    /*! Select UC4_RX DONE as FIFO for system DMA CHAIN */
    DL_SPGSS_DMA_CHAIN_FIFO_UC4_RX_DONE = SPGSS_DMACHAIN0_SEL_SPG5RXDONE,
    /*! Select UC5_RX DONE as FIFO for system DMA CHAIN */
    DL_SPGSS_DMA_CHAIN_FIFO_UC5_RX_DONE = SPGSS_DMACHAIN0_SEL_SPG6RXDONE,
    /*! Select UC6_RX DONE as FIFO for system DMA CHAIN */
    DL_SPGSS_DMA_CHAIN_FIFO_UC6_RX_DONE = SPGSS_DMACHAIN0_SEL_SPG7RXDONE,
    /*! Select UC7_RX DONE as FIFO for system DMA CHAIN */
    DL_SPGSS_DMA_CHAIN_FIFO_UC7_RX_DONE = SPGSS_DMACHAIN0_SEL_SPG8RXDONE,
    /*! Select UC8_RX DONE as FIFO for system DMA CHAIN */
    DL_SPGSS_DMA_CHAIN_FIFO_UC8_RX_DONE = SPGSS_DMACHAIN0_SEL_SPG9RXDONE,
    /*! Select UC9_RX DONE as FIFO for system DMA CHAIN */
    DL_SPGSS_DMA_CHAIN_FIFO_UC9_RX_DONE = SPGSS_DMACHAIN0_SEL_SPG10RXDONE,
    /*! Select UC10_RX DONE as FIFO for system DMA CHAIN */
    DL_SPGSS_DMA_CHAIN_FIFO_UC10_RX_DONE = SPGSS_DMACHAIN0_SEL_SPG11RXDONE,
    /*! Select UC11_RX DONE as FIFO for system DMA CHAIN */
    DL_SPGSS_DMA_CHAIN_FIFO_UC11_RX_DONE = SPGSS_DMACHAIN0_SEL_SPG12RXDONE,
    /*! Select UC12_RX DONE as FIFO for system DMA CHAIN */
    DL_SPGSS_DMA_CHAIN_FIFO_UC12_RX_DONE = SPGSS_DMACHAIN0_SEL_SPG13RXDONE,
    /*! Select UC13_RX DONE as FIFO for system DMA CHAIN */
    DL_SPGSS_DMA_CHAIN_FIFO_UC13_RX_DONE = SPGSS_DMACHAIN0_SEL_SPG14RXDONE,
    /*! Select UC14_RX DONE as FIFO for system DMA CHAIN */
    DL_SPGSS_DMA_CHAIN_FIFO_UC14_RX_DONE = SPGSS_DMACHAIN0_SEL_SPG15RXDONE,
    /*! Select UC15_RX DONE as FIFO for system DMA CHAIN */
    DL_SPGSS_DMA_CHAIN_FIFO_UC15_RX_DONE = SPGSS_DMACHAIN0_SEL_SPG16RXDONE,
    /*! Select UC0_TX DONE as FIFO for system DMA CHAIN */
    DL_SPGSS_DMA_CHAIN_FIFO_UC0_TX_DONE = SPGSS_DMACHAIN0_SEL_SPG1TXDONE,
    /*! Select UC1_TX DONE as FIFO for system DMA CHAIN */
    DL_SPGSS_DMA_CHAIN_FIFO_UC1_TX_DONE = SPGSS_DMACHAIN0_SEL_SPG2TXDONE,
    /*! Select UC2_TX DONE as FIFO for system DMA CHAIN */
    DL_SPGSS_DMA_CHAIN_FIFO_UC2_TX_DONE = SPGSS_DMACHAIN0_SEL_SPG3TXDONE,
    /*! Select UC3_TX DONE as FIFO for system DMA CHAIN */
    DL_SPGSS_DMA_CHAIN_FIFO_UC3_TX_DONE = SPGSS_DMACHAIN0_SEL_SPG4TXDONE,
    /*! Select UC4_TX DONE as FIFO for system DMA CHAIN */
    DL_SPGSS_DMA_CHAIN_FIFO_UC4_TX_DONE = SPGSS_DMACHAIN0_SEL_SPG5TXDONE,
    /*! Select UC5_TX DONE as FIFO for system DMA CHAIN */
    DL_SPGSS_DMA_CHAIN_FIFO_UC5_TX_DONE = SPGSS_DMACHAIN0_SEL_SPG6TXDONE,
    /*! Select UC6_TX DONE as FIFO for system DMA CHAIN */
    DL_SPGSS_DMA_CHAIN_FIFO_UC6_TX_DONE = SPGSS_DMACHAIN0_SEL_SPG7TXDONE,
    /*! Select UC7_TX DONE as FIFO for system DMA CHAIN */
    DL_SPGSS_DMA_CHAIN_FIFO_UC7_TX_DONE = SPGSS_DMACHAIN0_SEL_SPG8TXDONE,
    /*! Select UC8_TX DONE as FIFO for system DMA CHAIN */
    DL_SPGSS_DMA_CHAIN_FIFO_UC8_TX_DONE = SPGSS_DMACHAIN0_SEL_SPG9TXDONE,
    /*! Select UC9_TX DONE as FIFO for system DMA CHAIN */
    DL_SPGSS_DMA_CHAIN_FIFO_UC9_TX_DONE = SPGSS_DMACHAIN0_SEL_SPG10TXDONE,
    /*! Select UC10_TX DONE as FIFO for system DMA CHAIN */
    DL_SPGSS_DMA_CHAIN_FIFO_UC10_TX_DONE = SPGSS_DMACHAIN0_SEL_SPG11TXDONE,
    /*! Select UC11_TX DONE as FIFO for system DMA CHAIN */
    DL_SPGSS_DMA_CHAIN_FIFO_UC11_TX_DONE = SPGSS_DMACHAIN0_SEL_SPG12TXDONE,
    /*! Select UC12_TX DONE as FIFO for system DMA CHAIN */
    DL_SPGSS_DMA_CHAIN_FIFO_UC12_TX_DONE = SPGSS_DMACHAIN0_SEL_SPG13TXDONE,
    /*! Select UC13_TX DONE as FIFO for system DMA CHAIN */
    DL_SPGSS_DMA_CHAIN_FIFO_UC13_TX_DONE = SPGSS_DMACHAIN0_SEL_SPG14TXDONE,
    /*! Select UC14_TX DONE as FIFO for system DMA CHAIN */
    DL_SPGSS_DMA_CHAIN_FIFO_UC14_TX_DONE = SPGSS_DMACHAIN0_SEL_SPG15TXDONE,
    /*! Select UC15_TX DONE as FIFO for system DMA CHAIN */
    DL_SPGSS_DMA_CHAIN_FIFO_UC15_TX_DONE = SPGSS_DMACHAIN0_SEL_SPG16TXDONE,
} DL_SPGSS_DMA_CHAIN_FIFO_SEL;

/*! @enum DL_SPGSS_PAIR_INDEX */
typedef enum {
    /*! Loopback pair index 0 */
    DL_SPGSS_PAIR_INDEX_0 = 0,
    /*! Loopback pair index 1 */
    DL_SPGSS_PAIR_INDEX_1 = 1,
    /*! Loopback pair index 2 */
    DL_SPGSS_PAIR_INDEX_2 = 2,
    /*! Loopback pair index 3 */
    DL_SPGSS_PAIR_INDEX_3 = 3,
    /*! Loopback pair index 4 */
    DL_SPGSS_PAIR_INDEX_4 = 4,
    /*! Loopback pair index 5 */
    DL_SPGSS_PAIR_INDEX_5 = 5,
    /*! Loopback pair index 6 */
    DL_SPGSS_PAIR_INDEX_6 = 6,
    /*! Loopback pair index 7 */
    DL_SPGSS_PAIR_INDEX_7 = 7,
} DL_SPGSS_PAIR_INDEX;

/*! @enum DL_SPGSS_DMA_CHAIN_INDEX */
typedef enum {
    /*! DMA chaining index 0 */
    DL_SPGSS_DMA_CHAIN_INDEX_0 = 0,
    /*! DMA chaining index 1 */
    DL_SPGSS_DMA_CHAIN_INDEX_1 = 1
} DL_SPGSS_DMA_CHAIN_INDEX;

/**
 * @brief  Configuration struct for @ref DL_SPGSS_setLoopbackConfig.
 */
typedef struct {
    /*! SPGSS pairing controller selection. One of @ref DL_SPGSS_PAIR_CONTROLLER_SEL */
    DL_SPGSS_PAIR_CONTROLLER_SEL controller;
    /*! SPGSS pairing target selection. One of @ref DL_SPGSS_PAIR_TARGET_SEL */
    DL_SPGSS_PAIR_TARGET_SEL target;
} DL_SPGSS_LoopbackConfig;

/**
 *  @brief      Enable SPGSS pair loopback
 *
 *  @param[in]  spgss  Pointer to the register overlay for the peripheral
 *  @param[in]  index  Specifies pair index to be configured. One of
 *                        @ref DL_SPGSS_PAIR_INDEX.
 */
__STATIC_INLINE void DL_SPGSS_enableLoopback(
    SPGSS_Regs *spgss, DL_SPGSS_PAIR_INDEX index)
{
    volatile uint32_t *pReg = &spgss->I2C_PAIR.PAIR0;

    *(pReg + (uint32_t) index) |= (SPGSS_PAIR0_EN_ENABLE);
}

/**
 *  @brief      Disable SPGSS pair loopback
 *
 *  @param[in]  spgss  Pointer to the register overlay for the peripheral
 *  @param[in]  index  Specifies pair index to be configured. One of
 *                        @ref DL_SPGSS_PAIR_INDEX.
 */
__STATIC_INLINE void DL_SPGSS_disableLoopback(
    SPGSS_Regs *spgss, DL_SPGSS_PAIR_INDEX index)
{
    volatile uint32_t *pReg = &spgss->I2C_PAIR.PAIR0;

    *(pReg + (uint32_t) index) &= ~(SPGSS_PAIR0_EN_ENABLE);
}

/**
 *  @brief      Set SPG controller and target for loopback
 *
 *  @param[in]  spgss  Pointer to the register overlay for the peripheral
 *  @param[in]  index  Specifies pair index to be configured. One of
 *                        @ref DL_SPGSS_PAIR_INDEX.
 *  @param[in]  config  Pointer to the pair configuration struct
 *                      @ref DL_SPGSS_LoopbackConfig.
 */
__STATIC_INLINE void DL_SPGSS_setLoopbackConfig(SPGSS_Regs *spgss, DL_SPGSS_PAIR_INDEX index, DL_SPGSS_LoopbackConfig *config)
{
    volatile uint32_t *pReg = &spgss->I2C_PAIR.PAIR0;

    DL_Common_updateReg((pReg + (uint32_t) index),
        ((uint32_t) config->controller | (uint32_t) config->target),
        (SPGSS_PAIR0_CTL_MASK | SPGSS_PAIR0_TARGET_MASK));
}

/**
 *  @brief      Get SPG controller and target for loopback
 *
 *  @param[in]  spgss  Pointer to the register overlay for the peripheral
 *  @param[in]  index  Specifies loopback index to be configured. One of
 *                        @ref DL_SPGSS_PAIR_INDEX.
 *  @param[in]  config  Pointer to the pair configuration struct
 *                      @ref DL_SPGSS_LoopbackConfig.
 */
__STATIC_INLINE void DL_SPGSS_getLoopbackConfig(SPGSS_Regs *spgss, DL_SPGSS_PAIR_INDEX index, DL_SPGSS_LoopbackConfig *config)
{
    volatile uint32_t *pReg = &spgss->I2C_PAIR.PAIR0;

    config->controller = (DL_SPGSS_PAIR_CONTROLLER_SEL)(*(pReg + (uint32_t) index) & SPGSS_PAIR0_CTL_MASK);
    config->target = (DL_SPGSS_PAIR_TARGET_SEL)(*(pReg + (uint32_t) index) & SPGSS_PAIR0_TARGET_MASK);
}

/**
 *  @brief      Enable DMA chain
 *
 *  @param[in]  spgss  Pointer to the register overlay for the peripheral
 *  @param[in]  index  Specifies dma chain index to be configured. One of
 *                        @ref DL_SPGSS_DMA_CHAIN_INDEX.
 */
__STATIC_INLINE void DL_SPGSS_enableDMAChain(SPGSS_Regs *spgss, DL_SPGSS_DMA_CHAIN_INDEX index)
{
    volatile uint32_t *pReg = &spgss->DMA_CHAIN.DMACHAIN0;

    *(pReg + (uint32_t) index) |= (SPGSS_DMACHAIN0_EN_ENABLE);
}

/**
 *  @brief      Disable DMA chain
 *
 *  @param[in]  spgss  Pointer to the register overlay for the peripheral
 *  @param[in]  index  Specifies dma chain index to be configured. One of
 *                        @ref DL_SPGSS_DMA_CHAIN_INDEX.
 */
__STATIC_INLINE void DL_SPGSS_disableDMAChain(SPGSS_Regs *spgss, DL_SPGSS_DMA_CHAIN_INDEX index)
{
    volatile uint32_t *pReg = &spgss->DMA_CHAIN.DMACHAIN0;

    *(pReg + (uint32_t) index) &= ~(SPGSS_DMACHAIN0_EN_ENABLE);
}

/**
 *  @brief      Set FIFO trigger for DMA chain
 *
 *  @param[in]  spgss  Pointer to the register overlay for the peripheral
 *  @param[in]  index  Specifies dma chain index to be configured. One of
 *                        @ref DL_SPGSS_DMA_CHAIN_INDEX.
 *  @param[in]  fifoTrigger  FIFO trigger selection. One of
 *                        @ref DL_SPGSS_DMA_CHAIN_FIFO_SEL.
 */
__STATIC_INLINE void DL_SPGSS_setDMAChainConfig(
    SPGSS_Regs *spgss, DL_SPGSS_DMA_CHAIN_INDEX index, DL_SPGSS_DMA_CHAIN_FIFO_SEL fifoTrigger)
{
    volatile uint32_t *pReg = &spgss->DMA_CHAIN.DMACHAIN0;

    DL_Common_updateReg((pReg + (uint32_t) index), fifoTrigger, SPGSS_DMACHAIN0_SEL_MASK);
}

/**
 *  @brief      Get FIFO trigger for DMA chain
 *
 *  @param[in]  spgss  Pointer to the register overlay for the peripheral
 *  @param[in]  index  Specifies dma chain index to be configured. One of
 *                        @ref DL_SPGSS_DMA_CHAIN_INDEX.
 *
 *  @return  Configured FIFO trigger selection
 *  @retval  One of @ref DL_SPGSS_DMA_CHAIN_FIFO_SEL
 */
__STATIC_INLINE DL_SPGSS_DMA_CHAIN_FIFO_SEL DL_SPGSS_getDMAChainConfig(
    SPGSS_Regs *spgss, DL_SPGSS_DMA_CHAIN_INDEX index)
{
    volatile uint32_t *pReg = &spgss->DMA_CHAIN.DMACHAIN0;

    uint32_t fifoTrigger = *(pReg + (uint32_t) index) & SPGSS_DMACHAIN0_SEL_MASK;

    return (DL_SPGSS_DMA_CHAIN_FIFO_SEL)(fifoTrigger);
}

/**
 *  @brief      Enable SPGSS interrupt
 *
 *  @param[in]  spgss  Pointer to the register overlay for the peripheral
 *  @param[in]  interruptMask  Bit mask of interrupts to check. Bitwise OR of
 *                             @ref DL_SPGSS_INTERRUPTS.
 */
__STATIC_INLINE void DL_SPGSS_enableInterrupt(
    SPGSS_Regs *spgss, uint32_t interruptMask)
{
    spgss->CPU_INT.IMASK |= (interruptMask);
}

/**
 *  @brief      Disable SPGSS interrupt
 *
 *  @param[in]  spgss  Pointer to the register overlay for the peripheral
 *  @param[in]  interruptMask  Bit mask of interrupts to check. Bitwise OR of
 *                             @ref DL_SPGSS_INTERRUPTS.
 *
 */
__STATIC_INLINE void DL_SPGSS_disableInterrupt(
    SPGSS_Regs *spgss, uint32_t interruptMask)
{
    spgss->CPU_INT.IMASK &= ~(interruptMask);
}

/**
 *  @brief      Check which SPGSS interrupts are enabled
 *
 *  @param[in]  spgss          Pointer to the register overlay for the
 *                             peripheral
 *  @param[in]  interruptMask  Bit mask of interrupts to check. Bitwise OR of
 *                             @ref DL_SPGSS_INTERRUPTS.
 *
 *  @return     Which of the requested SPGSS interrupts are enabled
 *
 *  @retval     Bitwise OR of @ref DL_SPGSS_INTERRUPTS values
 */
__STATIC_INLINE uint32_t DL_SPGSS_getEnabledInterrupts(
    SPGSS_Regs *spgss, uint32_t interruptMask)
{
    return (spgss->CPU_INT.IMASK & interruptMask);
}

/**
 *  @brief      Check interrupt flag of enabled SPGSS interrupt
 *
 *  Checks if the SPGSS interrupt that was previously enabled is pending.
 *
 *  @param[in]  spgss  Pointer to the register overlay for the peripheral
 *  @param[in]  interruptMask  Bit mask of interrupts to check. Bitwise OR of
 *                             @ref DL_SPGSS_INTERRUPTS.
 *
 *  @return     If the enabled SPGSS interrupt is pending
 *
 *  @sa         DL_SPGSS_enableInterrupt
 */
__STATIC_INLINE uint32_t DL_SPGSS_getEnabledInterruptStatus(
    SPGSS_Regs *spgss, uint32_t interruptMask)
{
    return (spgss->CPU_INT.MIS & interruptMask);
}

/**
 *  @brief      Check interrupt flag of any SPGSS interrupt
 *
 *  Checks if the SPGSS interrupt is pending. Interrupt does not have to
 *  be previously enabled.
 *
 *  @param[in]  spgss  Pointer to the register overlay for the peripheral
 *  @param[in]  interruptMask  Bit mask of interrupts to check. Bitwise OR of
 *                             @ref DL_SPGSS_INTERRUPTS.
 *
 *  @return     If the SPGSS interrupt is pending
 *
 */
__STATIC_INLINE uint32_t DL_SPGSS_getRawInterruptStatus(
    SPGSS_Regs *spgss, uint32_t interruptMask)
{
    return (spgss->CPU_INT.RIS & interruptMask);
}

/**
 *  @brief      Clear pending SPGSS interrupt
 *
 *  @param[in]  spgss  Pointer to the register overlay for the peripheral
 *  @param[in]  interruptMask  Bit mask of interrupts to check. Bitwise OR of
 *                             @ref DL_SPGSS_INTERRUPTS.
 *
 */
__STATIC_INLINE void DL_SPGSS_clearInterruptStatus(
    SPGSS_Regs *spgss, uint32_t interruptMask)
{
    spgss->CPU_INT.ICLR |= (interruptMask);
}

#ifdef __cplusplus
}
#endif

#endif /* __MCU_HAS_SPGSS__ */

#endif /* ti_dl_dl_spgss__include */
/** @}*/
