/*
 * Copyright (c) 2025, Texas Instruments Incorporated
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
 *  @file       dl_aesadvhp.h
 *  @brief      Advanced Encryption Standard Advanced (AESADVHP) Driver Library
 *  @defgroup   AESADVHP Advanced Encryption Standard Advanced (AESADVHP)
 *
 *  @anchor ti_dl_dl_aesadv_Overview
 *  # Overview
 *
 *  The AESADVHP DriverLib allows full configuration of the MSPM0 AESADVHP module.
 *  The AESADVHP accelerator module accelerates encryption and decryption
 *  operations in hardware based on the FIPS PUB 197 advanced encryption
 *  standard (AES).
 *
 *  <hr>
 ******************************************************************************/
/** @addtogroup AESADVHP
 * @{
 */

#ifndef ti_dl_dl_aesadvhp__include
#define ti_dl_dl_aesadvhp__include

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include <ti/devices/msp/msp.h>
#include <ti/driverlib/dl_common.h>

#ifdef __MSP_HAS_AESADVHP__

#ifdef __cplusplus
extern "C"
{
#endif

    /* clang-format off */

/** @addtogroup DL_AESADVHP_INTERRUPT
 *  @{
 */

/*!
 *  @brief AESADVHP Output Ready interrupt
 *
 *  @note Not compatible with the use of @ref DL_AESADVHP_enableDMAOperation
 */
#define DL_AESADVHP_INTERRUPT_OUTPUT_READY                                       \
                                       (AESADVHP_INT_EVENT0_IMASK_OUTPUTRDY_SET)

/*!
 *  @brief AESADVHP Input Ready interrupt
 *
 *  @note Not compatible with the use of @ref DL_AESADVHP_enableDMAOperation
 */
#define DL_AESADVHP_INTERRUPT_INPUT_READY                                        \
                                        (AESADVHP_INT_EVENT0_IMASK_INPUTRDY_SET)

/*!
 *  @brief AESADVHP Saved Context Ready interrupt. TAG and/or IV blocks are
 *         available to be retrieved by the CPU.
 */
#define DL_AESADVHP_INTERRUPT_SAVED_OUTPUT_CONTEXT_READY                         \
                                   (AESADVHP_INT_EVENT0_IMASK_SAVEDCNTXTRDY_SET)

/*!
 *  @brief AESADVHP Context Ready interrupt. Context bits can be overwritten.
 */
#define DL_AESADVHP_INTERRUPT_INPUT_CONTEXT_READY                                \
                                        (AESADVHP_INT_EVENT0_IMASK_CNTXTRDY_SET)

/** @}*/

/** @addtogroup DL_AESADVHP_EVENT
 *  @{
 */

/*!
 *  @brief DMA Trigger Event used to request the DMA write to DATAIN
 */
#define DL_AESADVHP_EVENT_DMA_DATA_INPUT_TRIGGER                                 \
                                           (AESADVHP_INT_EVENT1_IMASK_TRIG0_SET)

/*!
 *  @brief DMA Trigger Event used to request the DMA read from DATAOUT
 */
#define DL_AESADVHP_EVENT_DMA_DATA_OUTPUT_TRIGGER                                \
                                           (AESADVHP_INT_EVENT2_IMASK_TRIG1_SET)

/** @}*/

/*!
 *  @brief AESADVHP Mode mask for all modes
 */
#define DL_AESADVHP_MODE_MASK                        ((AESADVHP_CTRL_CBC_MASK) | \
                (AESADVHP_CTRL_CTR_MASK)     |      (AESADVHP_CTRL_ICM_MASK) | \
                (AESADVHP_CTRL_CFB_MASK)     |   (AESADVHP_CTRL_CBCMAC_MASK) | \
                (AESADVHP_CTRL_GCM_MASK)     |      (AESADVHP_CTRL_CCM_MASK) | \
                (AESADVHP_CTRL_OFB_GCM_CCM_CONT_MASK) | 0x02000000U)

/* TODO: create define once XCBC-MAC MASK defined in IPXACT */

    /* clang-format on */

    /*! @enum DL_AESADVHP_IIDX */
    typedef enum
    {
        /*! AESADVHP interrupt index for input context ready to be written */
        DL_AESADVHP_IIDX_INPUT_CONTEXT_READY        = AESADVHP_INT_EVENT0_IIDX_STAT_CNTXTRDY,
        /*! AESADVHP interrupt index for saved output context (tag/IV) available */
        DL_AESADVHP_IIDX_SAVED_OUTPUT_CONTEXT_READY = AESADVHP_INT_EVENT0_IIDX_STAT_SAVEDCNTXTRDY,
        /*! AESADVHP interrupt index indicating the engine can take more input.
         *  Not compatible with @ref DL_AESADVHP_enableDMAOperation */
        DL_AESADVHP_IIDX_INPUT_READY                = AESADVHP_INT_EVENT0_IIDX_STAT_INPUTRDY,
        /*! AESADVHP interrupt index indicating the engine has available output data.
         *  Not compatible with @ref DL_AESADVHP_enableDMAOperation */
        DL_AESADVHP_IIDX_OUTPUT_READY               = AESADVHP_INT_EVENT0_IIDX_STAT_OUTPUTRDY,
        /*! AES interrupt index for enabling DMA input request trigger event */
        DL_AESADVHP_IIDX_DMA_INPUT_TRIGGER          = AESADVHP_INT_EVENT1_IIDX_STAT_TRIG0,
        /*! AES interrupt index for enabling DMA output request trigger event */
        DL_AESADVHP_IIDX_DMA_OUTPUT_TRIGGER         = AESADVHP_INT_EVENT2_IIDX_STAT_TRIG1,
    } DL_AESADVHP_IIDX;

    /*! @enum DL_AESADVHP_MODE */
    typedef enum
    {
        /*! Electronic Codebook (ECB) mode */
        DL_AESADVHP_MODE_ECB    = 0x00,
        /*! Cipher Block Chaining (CBC) mode */
        DL_AESADVHP_MODE_CBC    = ( AESADVHP_CTRL_CBC_ENABLE ),
        /*! Counter (CTR) mode */
        DL_AESADVHP_MODE_CTR    = ( AESADVHP_CTRL_CTR_ENABLE ),
        /*! Integer Counter Mode (ICM). ICM is a variant of CTR with a 16-bit wide
         *  counter */
        DL_AESADVHP_MODE_ICM    = ( AESADVHP_CTRL_ICM_ENABLE ),
        /*! Cipher Feedback (CFB) mode */
        DL_AESADVHP_MODE_CFB    = ( AESADVHP_CTRL_CFB_ENABLE ),
        /*! Output Feedback (OFB) mode */
        DL_AESADVHP_MODE_OFB    = ( AESADVHP_CTRL_OFB_GCM_CCM_CONT_OFB ),
        /*! Cipher-based message authentication code (CMAC). */
        DL_AESADVHP_MODE_CMAC   = ( 0x02000000U | AESADVHP_CTRL_CBC_ENABLE ), /* TODO: add CMAC-define when given */
        /*! Cipher block chaining message authentication code (CBC-MAC) mode */
        DL_AESADVHP_MODE_CBCMAC = ( AESADVHP_CTRL_CBCMAC_ENABLE ),
        /* TODO: Update GCM values once new defines in place */
        /*! Galois/Counter Mode (GCM) with GHASH (GHASH_H loaded and Y0-encrypted
         *  forced to 0) */
        DL_AESADVHP_MODE_GCM_FORCE_ZERO    = ( AESADVHP_CTRL_GCM_FORCE_ZERO ) | ( AESADVHP_CTRL_CTR_ENABLE ),
        /*! Galois/Counter Mode (GCM) with GHASH (H loaded Y0-encrypted
         *  calculated internally) */
        DL_AESADVHP_MODE_GCM_LOAD_HASH_KEY = ( AESADVHP_CTRL_GCM_LOAD_HASH_KEY ) | ( AESADVHP_CTRL_CTR_ENABLE ),
        /*! Galois/Counter Mode (GCM) with Autonomous GHASH (Both H and Y0-encrypted
         *  calculated internally) */
        DL_AESADVHP_MODE_GCM_AUTONOMOUS    = ( AESADVHP_CTRL_GCM_AUTONOMOUS ) | ( AESADVHP_CTRL_CTR_ENABLE ),
        /*! Galois/Counter Mode GHASH only. Direction must be Decrypt */
        DL_AESADVHP_MODE_GCM_GHASH_ONLY    = ( AESADVHP_CTRL_GCM_FORCE_ZERO ),
        /*! Cipher block chaining, message authentication code (CCM) mode */
        DL_AESADVHP_MODE_CCM               = ( AESADVHP_CTRL_CCM_ENABLE ) | ( AESADVHP_CTRL_CTR_ENABLE ),
    } DL_AESADVHP_MODE;

    /*! @enum DL_AESADVHP_KEY_SIZE */
    typedef enum
    {
        /*! 128-bit Key Size */
        DL_AESADVHP_KEY_SIZE_128_BIT = AESADVHP_CTRL_KEYSIZE_K128,
        /*! 256-bit Key Size */
        DL_AESADVHP_KEY_SIZE_256_BIT = AESADVHP_CTRL_KEYSIZE_K256,
    } DL_AESADVHP_KEY_SIZE;

    /*! @enum DL_AESADVHP_DIR */
    typedef enum
    {
        /*! Encryption */
        DL_AESADVHP_DIR_ENCRYPT = AESADVHP_CTRL_DIR_ENCRYPT,
        /*! Decryption */
        DL_AESADVHP_DIR_DECRYPT = AESADVHP_CTRL_DIR_DECRYPT,
    } DL_AESADVHP_DIR;

    /*! @enum DL_AESADVHP_CTR_WIDTH */
    typedef enum
    {
        /*! Counter (CTR) mode 32-bit counter */
        DL_AESADVHP_CTR_WIDTH_32_BIT  = AESADVHP_CTRL_CTR_WIDTH_CTR32,
        /*! Counter (CTR) mode 64-bit counter */
        DL_AESADVHP_CTR_WIDTH_64_BIT  = AESADVHP_CTRL_CTR_WIDTH_CTR64,
        /*! Counter (CTR) mode 96-bit counter */
        DL_AESADVHP_CTR_WIDTH_96_BIT  = AESADVHP_CTRL_CTR_WIDTH_CTR96,
        /*! Counter (CTR) mode 128-bit counter */
        DL_AESADVHP_CTR_WIDTH_128_BIT = AESADVHP_CTRL_CTR_WIDTH_CTR128,
    } DL_AESADVHP_CTR_WIDTH;

    /*! @enum DL_AESADVHP_FB_WIDTH */
    typedef enum
    {
        DL_AESADVHP_FB_WIDTH_128 = AESADVHP_CTRL_CTR_WIDTH_CFB128,
    } DL_AESADVHP_FB_WIDTH;

    /*! @enum DL_AESADVHP_CCM_CTR_WIDTH */
    typedef enum
    {
        /*! Counter field width of 2 bytes (value of 1 stored in CCM-L) */
        DL_AESADVHP_CCM_CTR_WIDTH_2_BYTES = ( ( uint32_t ) 1U << AESADVHP_CTRL_CCML_OFS ),
        /*! Counter field width of 3 bytes (value of 2 stored in CCM-L) */
        DL_AESADVHP_CCM_CTR_WIDTH_3_BYTES = ( ( uint32_t ) 2 << AESADVHP_CTRL_CCML_OFS ),
        /*! Counter field width of 4 bytes (value of 3 stored in CCM-L) */
        DL_AESADVHP_CCM_CTR_WIDTH_4_BYTES = ( ( uint32_t ) 3 << AESADVHP_CTRL_CCML_OFS ),
        /*! Counter field width of 5 bytes (value of 4 stored in CCM-L) */
        DL_AESADVHP_CCM_CTR_WIDTH_5_BYTES = ( ( uint32_t ) 4 << AESADVHP_CTRL_CCML_OFS ),
        /*! Counter field width of 6 bytes (value of 5 stored in CCM-L) */
        DL_AESADVHP_CCM_CTR_WIDTH_6_BYTES = ( ( uint32_t ) 5 << AESADVHP_CTRL_CCML_OFS ),
        /*! Counter field width of 7 bytes (value of 6 stored in CCM-L) */
        DL_AESADVHP_CCM_CTR_WIDTH_7_BYTES = ( ( uint32_t ) 6 << AESADVHP_CTRL_CCML_OFS ),
        /*! Counter field width of 8 bytes (value of 7 stored in CCM-L) */
        DL_AESADVHP_CCM_CTR_WIDTH_8_BYTES = ( ( uint32_t ) 7 << AESADVHP_CTRL_CCML_OFS ),
    } DL_AESADVHP_CCM_CTR_WIDTH;

    /*! @enum DL_AESADVHP_CCM_TAG_WIDTH */
    typedef enum
    {
        /*! Authentication field width of 1 byte  (value of 0 stored in CCM-M) */
        DL_AESADVHP_CCM_TAG_WIDTH_1_BYTE  = ( ( uint32_t ) 0 << AESADVHP_CTRL_CCMM_OFS ),
        /*! Authentication field width of 2 bytes (value of 1 stored in CCM-M) */
        DL_AESADVHP_CCM_TAG_WIDTH_2_BYTES = ( ( uint32_t ) 1 << AESADVHP_CTRL_CCMM_OFS ),
        /*! Authentication field width of 3 bytes (value of 2 stored in CCM-M) */
        DL_AESADVHP_CCM_TAG_WIDTH_3_BYTES = ( ( uint32_t ) 2 << AESADVHP_CTRL_CCMM_OFS ),
        /*! Authentication field width of 4 bytes (value of 3 stored in CCM-M) */
        DL_AESADVHP_CCM_TAG_WIDTH_4_BYTES = ( ( uint32_t ) 3 << AESADVHP_CTRL_CCMM_OFS ),
        /*! Authentication field width of 5 bytes (value of 4 stored in CCM-M) */
        DL_AESADVHP_CCM_TAG_WIDTH_5_BYTES = ( ( uint32_t ) 4 << AESADVHP_CTRL_CCMM_OFS ),
        /*! Authentication field width of 6 bytes (value of 5 stored in CCM-M) */
        DL_AESADVHP_CCM_TAG_WIDTH_6_BYTES = ( ( uint32_t ) 5 << AESADVHP_CTRL_CCMM_OFS ),
        /*! Authentication field width of 7 bytes (value of 6 stored in CCM-M) */
        DL_AESADVHP_CCM_TAG_WIDTH_7_BYTES = ( ( uint32_t ) 6 << AESADVHP_CTRL_CCMM_OFS ),
        /*! Authentication field width of 8 bytes (value of 7 stored in CCM-M) */
        DL_AESADVHP_CCM_TAG_WIDTH_8_BYTES = ( ( uint32_t ) 7 << AESADVHP_CTRL_CCMM_OFS ),
    } DL_AESADVHP_CCM_TAG_WIDTH;

    /*! @enum DL_AESADVHP_STATUS */
    typedef enum
    {
        /*! Operation was successful */
        DL_AESADVHP_STATUS_SUCCESS,
        /*! Operation was not performed because address was unaligned */
        DL_AESADVHP_STATUS_UNALIGNED_ACCESS,
    } DL_AESADVHP_STATUS;

    /**
     *  @brief Configuration structure for the AESADVHP module. It contains the
     *         superset of configurable information for the control module.
     */
    typedef struct
    {
        /*! Mode field, one of @ref DL_AESADVHP_MODE */
        DL_AESADVHP_MODE          mode;
        /*! Encrypt or decrypt, one of @ref DL_AESADVHP_DIR. Note that CBCMAC cannot
         *  be configured with the decrypt direction */
        DL_AESADVHP_DIR           direction;
        /*! Counter mode (CTR) counter width, one of @ref DL_AESADVHP_CTR_WIDTH. CTR
         *  width is also used in combined operation modes CCM and GCM */
        DL_AESADVHP_CTR_WIDTH     ctr_ctrWidth;
        /*! Cipher Feedback (CFB) feedback width, one of @ref DL_AESADVHP_FB_WIDTH */
        DL_AESADVHP_FB_WIDTH      cfb_fbWidth;
        /*! CCM width of the counter length field for CCM operations, one of
         *  @ref DL_AESADVHP_CCM_CTR_WIDTH. The ctr_width parameter must be equal to
         *  or larger than this value */
        DL_AESADVHP_CCM_CTR_WIDTH ccm_ctrWidth;
        /*! CCM Width of the authentication field for CCM operations, one of
         *  @ref DL_AESADVHP_CCM_TAG_WIDTH */
        DL_AESADVHP_CCM_TAG_WIDTH ccm_tagWidth;
        /*! Initialization Vector. Should be 32-bit aligned */
        uint8_t                  *iv;
        /*! Nonce in the case of CCM, this should point to the nonce. Refer to
         *  @ref DL_AESADVHP_loadCCMNonceAndCounter in order to determine nonce length
         *  used  */
        uint8_t                  *nonce;
        /*! Derived key K1, used in the authentication-only mode CMAC
         *  Must be 32-bit aligned and equal to the block size (128-bits) */
        uint8_t                  *k1;
        /*! Derived key K2, used in the authentication-only mode CMAC
         *  must be 32-bit aligned and equal to the block size (128-bits) */
        uint8_t                  *k2;
        /*! Crypto Data Length - 61-bit value expressed as an upper value and lower
         *  value. This is the lower 32-bits */
        uint32_t                  lowerCryptoLength;
        /*! Crypto Data Length - 61-bit value expressed as an upper value and lower
         *  value. This is the upper 29-bits */
        uint32_t                  upperCryptoLength;
        /*! Additional Authentication Data (AAD) Length. CCM/GCM specific */
        uint32_t                  aadLength;
    } DL_AESADVHP_Config;

    /**
     *  @brief Enables power on AESADVHP module
     *
     *  @param[in] aesadv       Pointer to the register overlay for the peripheral
     */
    __STATIC_INLINE void DL_AESADVHP_enablePower( AESADVHP_Regs *aesadv )
    {
        aesadv->GPRCM.PWREN = ( AESADVHP_PWREN_KEY_UNLOCK_W | AESADVHP_PWREN_ENABLE_ENABLE );
    }

    /**
     *  @brief Disables power on AESADVHP module
     *
     *  @param[in] aesadv        Pointer to the register overlay for the peripheral
     */
    __STATIC_INLINE void DL_AESADVHP_disablePower( AESADVHP_Regs *aesadv )
    {
        aesadv->GPRCM.PWREN = ( AESADVHP_PWREN_KEY_UNLOCK_W | AESADVHP_PWREN_ENABLE_DISABLE );
    }

    /**
     *  @brief Returns if power enabled on AESADVHP module
     *
     *  @param[in] aesadv       Pointer to the register overlay for the peripheral
     *
     *  @retval true   Power is enabled
     *  @retval false  Power is disabled
     */
    __STATIC_INLINE bool DL_AESADVHP_isPowerEnabled( AESADVHP_Regs *aesadv )
    {
        return ( ( aesadv->GPRCM.PWREN & AESADVHP_PWREN_ENABLE_MASK ) == AESADVHP_PWREN_ENABLE_ENABLE );
    }

    /**
     *  @brief Resets AESADVHP module
     *
     *  @param[in] aesadv       Pointer to the register overlay for the peripheral
     */
    __STATIC_INLINE void DL_AESADVHP_reset( AESADVHP_Regs *aesadv )
    {
        aesadv->GPRCM.RSTCTL =
            ( AESADVHP_RSTCTL_KEY_UNLOCK_W | AESADVHP_RSTCTL_RESETSTKYCLR_CLR | AESADVHP_RSTCTL_RESETASSERT_ASSERT );
    }

    /**
     *  @brief Returns if AESADVHP module was reset
     *
     *  @param[in] aesadv       Pointer to the register overlay for the peripheral
     *
     *  @retval true   Peripheral was reset
     *  @retval false  Peripheral wasn't reset
     */
    __STATIC_INLINE bool DL_AESADVHP_isReset( AESADVHP_Regs *aesadv )
    {
        return ( ( aesadv->GPRCM.STAT & AESADVHP_STAT_RESETSTKY_MASK ) == AESADVHP_STAT_RESETSTKY_RESET );
    }

    /**
     *  @brief Returns if an AES output block is available to be read
     *
     *  @param[in] aesadv       Pointer to the register overlay for the peripheral
     *
     *  @retval true   AES output block is available
     *  @retval false  No AES output block is available
     */
    __STATIC_INLINE bool DL_AESADVHP_isOutputReady( AESADVHP_Regs *aesadv )
    {
        return ( ( aesadv->CTRL & AESADVHP_CTRL_OUTPUT_RDY_MASK ) == AESADVHP_CTRL_OUTPUT_RDY_READY );
    }

    /**
     *  @brief Returns if the input buffer is empty, and more data can be written
     *
     *  @param[in] aesadv       Pointer to the register overlay for the peripheral
     *
     *  @retval true   Input buffer is empty
     *  @retval false  Input buffer is not empty
     */
    __STATIC_INLINE bool DL_AESADVHP_isInputReady( AESADVHP_Regs *aesadv )
    {
        return ( ( aesadv->CTRL & AESADVHP_CTRL_INPUT_RDY_MASK ) == AESADVHP_CTRL_INPUT_RDY_EMPTY );
    }

    /**
     *  @brief Sets the direction of the engine (encrypt/decrypt)
     *
     *  @param[in] aesadv       Pointer to the register overlay for the peripheral
     *  @param[in] direction    Direction. One of @ref DL_AESADVHP_DIR.
     *
     *  @note CBC-MAC must be configured as encrypt (@ref DL_AESADVHP_DIR_ENCRYPT).
     */
    __STATIC_INLINE void DL_AESADVHP_setDirection( AESADVHP_Regs *aesadv, DL_AESADVHP_DIR direction )
    {
        DL_Common_updateReg( &aesadv->CTRL, ( uint32_t ) direction, AESADVHP_CTRL_DIR_MASK );
    }

    /**
     *  @brief Returns the direction of the AESADVHP peripheral (encrypt/decrypt)
     *
     *  @param[in] aesadv       Pointer to the register overlay for the peripheral
     *
     *  @return one of @ref DL_AESADVHP_DIR
     */
    __STATIC_INLINE DL_AESADVHP_DIR DL_AESADVHP_getDirection( AESADVHP_Regs *aesadv )
    {
        uint32_t direction = ( aesadv->CTRL & AESADVHP_CTRL_DIR_MASK );

        return ( DL_AESADVHP_DIR ) ( direction );
    }

    /**
     *  @brief Sets the key size of the AESADVHP peripheral
     *
     *  @param[in] aesadv       Pointer to the register overlay for the peripheral
     *  @param[in] size         Key Size. One of @ref DL_AESADVHP_KEY_SIZE.
     */
    __STATIC_INLINE void DL_AESADVHP_setKeySize( AESADVHP_Regs *aesadv, DL_AESADVHP_KEY_SIZE size )
    {
        DL_Common_updateReg( &aesadv->CTRL, ( uint32_t ) size, AESADVHP_CTRL_KEYSIZE_MASK );
    }

    /**
     *  @brief Returns the current key size of the AESADVHP peripheral
     *
     *  @param[in] aesadv       Pointer to the register overlay for the peripheral
     *
     *  @return one of @ref DL_AESADVHP_KEY_SIZE.
     */
    __STATIC_INLINE DL_AESADVHP_KEY_SIZE DL_AESADVHP_getKeySize( AESADVHP_Regs *aesadv )
    {
        uint32_t keySize = ( aesadv->CTRL & AESADVHP_CTRL_KEYSIZE_MASK );

        return ( DL_AESADVHP_KEY_SIZE ) ( keySize );
    }

    /**
     *  @brief Sets the AES algorithm mode
     *
     *  @param[in] aesadv       Pointer to the register overlay for the peripheral
     *  @param[in] mode         Algorithm Mode. One of @ref DL_AESADVHP_MODE.
     *
     *  @note Selecting GCM as a mode requires an additional selection of the GHASH
     *        parameters expected. Please refer to the TRM for more information.
     *  @note Due to the dual use of the OFB/gcm_ccm_continue_aad bit field, if the
     *        resumption of the AAD phase of a GCM/CCM operation is desired, it must
     *        be set with the mode using @ref DL_AESADVHP_resumeAADPhase, for the bit
     *        will be cleared in this function
     *
     *  @sa   DL_AESADVHP_resumeAADPhase
     */
    __STATIC_INLINE void DL_AESADVHP_setMode( AESADVHP_Regs *aesadv, DL_AESADVHP_MODE mode )
    {
        DL_Common_updateReg( &aesadv->CTRL, ( uint32_t ) mode, ( uint32_t ) DL_AESADVHP_MODE_MASK );
    }

    /**
     *  @brief Returns the current selected mode
     *
     *  @param[in] aesadv       Pointer to the register overlay for the peripheral
     *
     *  @return one of @ref DL_AESADVHP_MODE.
     *
     *  @note upon resumption of a AAD phase of operation, the dual-purpose
     *        bit of continue AAD/OFB will be read as one. In this case, the mode
     *        must be set again for a valid value to be read.
     *
     *  @sa DL_AESADVHP_setMode
     */
    __STATIC_INLINE DL_AESADVHP_MODE DL_AESADVHP_getMode( AESADVHP_Regs *aesadv )
    {
        uint32_t mode = ( aesadv->CTRL & DL_AESADVHP_MODE_MASK );
        return ( DL_AESADVHP_MODE ) ( mode );
    }

    /**
     *  @brief Sets the feedback width of the AESADVHP peripheral
     *
     *  @param[in] aesadv       Pointer to the register overlay for the peripheral
     *  @param[in] fbWidth      Feedback Width. One of @ref DL_AESADVHP_FB_WIDTH.
     *
     *  @note this is only applicable in cipher feeback mode (CFB). OFB always has
     *        width 128.
     */
    __STATIC_INLINE void DL_AESADVHP_setFeedbackWidth( AESADVHP_Regs *aesadv, DL_AESADVHP_FB_WIDTH fbWidth )
    {
        DL_Common_updateReg( &aesadv->CTRL, ( uint32_t ) fbWidth, AESADVHP_CTRL_CTR_WIDTH_MASK );
    }

    /**
     *  @brief Returns the current feedback width
     *
     *  @param[in] aesadv        Pointer to the register overlay for the peripheral
     *
     *  @return one of @ref DL_AESADVHP_FB_WIDTH.
     *
     *  @sa DL_AESADVHP_setFeedbackWidth
     */
    __STATIC_INLINE DL_AESADVHP_FB_WIDTH DL_AESADVHP_getFeedbackWidth( AESADVHP_Regs *aesadv )
    {
        uint32_t fbWidth = ( aesadv->CTRL & AESADVHP_CTRL_CTR_WIDTH_MASK );

        return ( DL_AESADVHP_FB_WIDTH ) ( fbWidth );
    }

    /**
     *  @brief Sets the counter width of the AESADVHP peripheral
     *
     *  @param[in] aesadv       Pointer to the register overlay for the peripheral
     *  @param[in] ctrWidth     Counter Width. One of @ref DL_AESADVHP_CTR_WIDTH.
     *
     *  @note this is only applicable in modes CTR, CCM
     *  @note GCM restricts counter width to 32-bits, which is not required to be
     *        set.
     *  @note if using CCM, the counter width must be wide enough to accommodate the
     *        chosen CCM length, one of @ref DL_AESADVHP_CCM_CTR_WIDTH (in bytes)
     *
     *  @sa DL_AESADVHP_setCCMCounterWidth
     */
    __STATIC_INLINE void DL_AESADVHP_setCounterWidth( AESADVHP_Regs *aesadv, DL_AESADVHP_CTR_WIDTH ctrWidth )
    {
        DL_Common_updateReg( &aesadv->CTRL, ( uint32_t ) ctrWidth, AESADVHP_CTRL_CTR_WIDTH_MASK );
    }

    /**
     *  @brief Returns the current counter width
     *
     *  @param[in] aesadv       Pointer to the register overlay for the peripheral
     *
     *  @return one of @ref DL_AESADVHP_CTR_WIDTH.
     *
     *  @sa DL_AESADVHP_setCounterWidth
     */
    __STATIC_INLINE DL_AESADVHP_CTR_WIDTH DL_AESADVHP_getCounterWidth( AESADVHP_Regs *aesadv )
    {
        uint32_t ctrWidth = ( aesadv->CTRL & AESADVHP_CTRL_CTR_WIDTH_MASK );

        return ( DL_AESADVHP_CTR_WIDTH ) ( ctrWidth );
    }

    /**
     *  @brief Sets the CCM counter width of the AESADVHP peripheral
     *
     *  Counter with CBC-MAC (CCM) Specific. Sets the width of the counter field
     *  that is loaded into the initialization vector along with the nonce. This
     *  signal is sometimes referred to as CCM-L. The nonce can be calculated via
     *  the following table:
     *
     *  DL_AESADVHP_CCM_CTR_WIDTH (bytes) | Nonce Array Length Required (bytes)
     *  --------------------------------|-------------------------------------
     *              2                   |                13
     *              3                   |                12
     *              4                   |                11
     *              5                   |                10
     *              6                   |                 9
     *              7                   |                 8
     *              8                   |                 7
     *
     *  @param[in] aesadv       Pointer to the register overlay for the peripheral
     *  @param[in] ccm_ctrWidth Counter Width. One of @ref DL_AESADVHP_CCM_CTR_WIDTH
     *
     *  @note this is only applicable in modes CCM
     *  @note The general counter width must be wide enough to accommodate the
     *        chosen CCM counter width, one of @ref DL_AESADVHP_CTR_WIDTH (in bits). A
     *        counter width of 64-bits is sufficient to cover all cases.
     *
     *  @sa DL_AESADVHP_setCounterWidth
     *  @sa DL_AESADVHP_loadCCMNonceAndCounter
     */
    __STATIC_INLINE void DL_AESADVHP_setCCMCounterWidth( AESADVHP_Regs *aesadv, DL_AESADVHP_CCM_CTR_WIDTH ccm_ctrWidth )
    {
        DL_Common_updateReg( &aesadv->CTRL, ( uint32_t ) ccm_ctrWidth, AESADVHP_CTRL_CCML_MASK );
    }

    /**
     *  @brief Returns the current CCM-specific counter width
     *
     *  @param[in] aesadv       Pointer to the register overlay for the peripheral
     *
     *  @return one of @ref DL_AESADVHP_CCM_CTR_WIDTH.
     *
     *  @sa DL_AESADVHP_setCCMCounterWidth
     */
    __STATIC_INLINE DL_AESADVHP_CCM_CTR_WIDTH DL_AESADVHP_getCCMCounterWidth( AESADVHP_Regs *aesadv )
    {
        uint32_t ccm_ctrWidth = ( aesadv->CTRL & AESADVHP_CTRL_CCML_MASK );

        return ( DL_AESADVHP_CCM_CTR_WIDTH ) ( ccm_ctrWidth );
    }

    /**
     *  @brief Sets the CCM authentication tag width of the AESADVHP peripheral
     *
     *  Counter with CBC-MAC (CCM) Specific. Sets the width of the authentication
     *  field that is retrieved upon completion of the operation. The first bytes
     *  of the calculated tag will be returned, and the rest of the tag ignored.
     *  This signal is sometimes referred to as CCM-M.
     *      The full-width tag will still be calculated, just the least-significant
     *  bits will be used as according to this setting.
     *
     *  @param[in] aesadv       Pointer to the register overlay for the peripheral
     *  @param[in] ccm_tagWidth Tag Width. One of @ref DL_AESADVHP_CCM_TAG_WIDTH.
     */
    __STATIC_INLINE void DL_AESADVHP_setCCMTagWidth( AESADVHP_Regs *aesadv, DL_AESADVHP_CCM_TAG_WIDTH ccm_tagWidth )
    {
        DL_Common_updateReg( &aesadv->CTRL, ( uint32_t ) ccm_tagWidth, AESADVHP_CTRL_CCMM_MASK );
    }

    /**
     *  @brief Returns the current CCM-specific authentication tag width
     *
     *  @param[in] aesadv       Pointer to the register overlay for the peripheral
     *
     *  @return one of @ref DL_AESADVHP_CCM_TAG_WIDTH.
     *
     *  @sa DL_AESADVHP_setCCMTagWidth
     */
    __STATIC_INLINE DL_AESADVHP_CCM_TAG_WIDTH DL_AESADVHP_getCCMTagWidth( AESADVHP_Regs *aesadv )
    {
        uint32_t ccm_tagWidth = ( aesadv->CTRL & AESADVHP_CTRL_CCMM_MASK );

        return ( DL_AESADVHP_CCM_TAG_WIDTH ) ( ccm_tagWidth );
    }

    /**
     *  @brief  Halt operation and generate intermediate Digest for CCM/GCM
     *
     *  Specific to a multi-block CCM/GCM mode. This will interrupt processing at
     *  the boundary of a full AES block (128-bits or 16 bytes) and prepare an
     *  intermediate digest that can be used to resume operations.
     *      If the user is still inputting additional authentication data (AAD), the
     *  operation shall be resumed in the AAD phase. If the user is inputting
     *  payload data (ciphertext/plaintext), the operation shall be resumed in the
     *  data phase.
     *      The user is responsible for reading and saving the intermediate digest
     *  to preserve the state for a future resumption of the Operation.
     *      The user must have at least 1 or more bytes of additional information
     *  that needs to be inputted in order for a halt to occur.
     *
     *  @param[in] aesadv       Pointer to the register overlay for the peripheral
     */
    __STATIC_INLINE void DL_AESADVHP_haltOperationAndGenerateDigest( AESADVHP_Regs *aesadv )
    {
        aesadv->CTRL |= AESADVHP_CTRL_GET_DIGEST_ENABLE;
    }

    /**
     *  @brief Resume GCM or CCM operation in the AAD phase
     *
     *  Specific to a multi-block CCM/GCM mode that contains Additional
     *  Authentication Data to be written after an operation has been halted. This
     *  operation should be performed last, after the entire digest for the example
     *  has been added. The mode is written in conjunction with the resumption
     *  signal, so it must be provided.
     *
     *  @param[in] aesadv       Pointer to the register overlay for the peripheral
     *  @param[in] mode         A supported GCM or CCM mode from @ref DL_AESADVHP_MODE
     *
     *  @sa DL_AESADVHP_haltOperationAndReturnDigest
     *  @sa DL_AESADVHP_resumeDataPhase
     */
    __STATIC_INLINE void DL_AESADVHP_resumeAADPhase( AESADVHP_Regs *aesadv, DL_AESADVHP_MODE mode )
    {
        DL_Common_updateReg(
            &aesadv->CTRL, ( ( ( uint32_t ) mode ) | ( ( uint32_t ) AESADVHP_CTRL_OFB_GCM_CCM_CONT_GCM_CCM_CONTINUE ) ),
            ( DL_AESADVHP_MODE_MASK | AESADVHP_CTRL_OFB_GCM_CCM_CONT_MASK ) );
    }

    /**
     *  @brief Resume GCM or CCM operation in the Data phase
     *
     *  Specific to a multi-block CCM/GCM mode that contains additional Payload Data
     *  (ciphertext/plaintext) to be written after an operation has been halted, and
     *  any and all AAD has already been written before the time of halting. This
     *  operation should be performed last, after the entire digest for the example
     *  has been added. The mode is written in conjunction with the resumption
     *  signal, so it must be provided.
     *
     *  @param[in] aesadv       Pointer to the register overlay for the peripheral
     *  @param[in] mode         A supported GCM or CCM mode from @ref DL_AESADVHP_MODE
     *
     *  @sa DL_AESADVHP_haltOperationAndReturnDigest
     *  @sa DL_AESADVHP_resumeAADPhase
     */
    __STATIC_INLINE void DL_AESADVHP_resumeDataPhase( AESADVHP_Regs *aesadv, DL_AESADVHP_MODE mode )
    {
        DL_Common_updateReg( &aesadv->CTRL, ( ( uint32_t ) mode | AESADVHP_CTRL_GCM_CONT_ENABLE ),
                             ( ( uint32_t ) DL_AESADVHP_MODE_MASK | AESADVHP_CTRL_GCM_CONT_MASK ) );
    }

    /**
     *  @brief Enables the storage and return of a tag or result IV
     *
     *  Set if a given configuration must require an authentication TAG or result IV
     *  to be stored as part of the result context. This will trigger the context
     *  output DMA or interrupt assertion after operation completion. Additionally,
     *  the saved context ready will now be set high. Th engine will retain the
     *  registers until they have been read. Only after an associated TAG/IV has
     *  been read will a new DMA request for an input context be sent.
     *      Typically, this is set when methods return a TAG (GCM, CCM, CBCMAC) or
     *  in case an IV is to be returned for a future continued operation (CBC, CTR,
     *  etc.).
     *      If not set, the engine will assert a DMA request with the current
     *  context.
     *
     * @param[in] aesadv       Pointer to the register overlay for the peripheral
     */
    __STATIC_INLINE void DL_AESADVHP_enableSavedOutputContext( AESADVHP_Regs *aesadv )
    {
        aesadv->CTRL |= AESADVHP_CTRL_SAVE_CNTXT_ENABLE;
    }

    /**
     *  @brief Disables the storage and return of a tag or result IV
     *
     *  Set if a given configuration must require an authentication TAG or result IV
     *  to be stored as part of the result context. This will trigger the context
     *  output DMA or interrupt assertion after operation completion. Additionally,
     *  the saved context ready will now be set high. Th engine will retain the
     *  registers until they have been read.
     *      Typically, this is set when methods return a TAG (GCM, CCM, CBCMAC) or
     *  in case an IV is to be returned for a future continued operation (CBC, CTR,
     *  etc.).
     *      If not set, the engine will assert a DMA request with the current
     *  context.
     *
     *  @param[in] aesadv       Pointer to the register overlay for the peripheral
     */
    __STATIC_INLINE void DL_AESADVHP_disableSavedOutputContext( AESADVHP_Regs *aesadv )
    {
        aesadv->CTRL &= ~( AESADVHP_CTRL_SAVE_CNTXT_ENABLE );
    }

    /**
     *  @brief Returns whether the storage of additional context is enabled
     *
     *  @param[in] aesadv       Pointer to the register overlay for the peripheral
     *
     *  @retval true   Saved Output Context is enabled.
     *  @retval false  Saved Output Context is disabled.
     *
     *  @sa DL_AESADVHP_enableSavedOutputContext
     */
    __STATIC_INLINE bool DL_AESADVHP_isSavedOutputContextEnabled( AESADVHP_Regs *aesadv )
    {
        return ( ( aesadv->CTRL & AESADVHP_CTRL_SAVE_CNTXT_MASK ) == AESADVHP_CTRL_SAVE_CNTXT_ENABLE );
    }

    /**
     *  @brief Returns whether additional output context is available to be read
     *
     *  At the end of an operation, if additional result information to the
     *  ciphertext/plaintext is available such as TAG/IV(s), this will return true.
     *  If this value is high, then the context cannot be written.
     *
     *  @param[in] aesadv        Pointer to the register overlay for the peripheral
     *
     *  @retval true   Saved Output Context is ready to be retrieved.
     *  @retval false  Saved Output Context is unavailable.
     *
     *  @sa DL_AESADVHP_enableSavedOutputContext
     */
    __STATIC_INLINE bool DL_AESADVHP_isSavedOutputContextReady( AESADVHP_Regs *aesadv )
    {
        return ( ( aesadv->CTRL & AESADVHP_CTRL_SAVED_CNTXT_RDY_MASK ) == AESADVHP_CTRL_SAVED_CNTXT_RDY_READY );
    }

    /**
     *  @brief Returns whether the input context can be written by the application.
     *
     *  Determines if the context (mode, IV, key, etc.) can be modified from its
     *  current state in the application by reading the CNTXT_RDY bit. This does not
     *  mean that a previous operation has necessarily finished, just that a new
     *  context may be written. Writing a new context before completion of the
     *  current context will cancel the current operation.
     *
     *  @param[in] aesadv       Pointer to the register overlay for the peripheral
     *
     *  @retval true   Context can be safely written to by the application
     *  @retval false  Context cannot be written, AES Authentication TAGs or IV's
     *                 are available and must be read before context can be
     *                 interrupted
     */
    __STATIC_INLINE bool DL_AESADVHP_isInputContextWriteable( AESADVHP_Regs *aesadv )
    {
        return ( ( aesadv->CTRL & AESADVHP_CTRL_CNTXT_RDY_MASK ) == AESADVHP_CTRL_CNTXT_RDY_READY );
    }

    /**
     *  @brief Sets the lower 32 bits of the crypto input data length in bytes
     *
     *  The entire length of crypto input data that can be provided is 61-bits long,
     *  and is thus set in two separate functions. The lower 32-bits will be set and
     *  decremented as the operation continues.
     *      Setting the crypto length to 0 for basic modes (CBC, CTR, ICM, CFB, OFB)
     *  will configure the AESADVHP module to expect an infinite input stream for the
     *  device.
     *      For GCM and CCM, this mode does not include Additional Authentication
     *  Data, this is set separately. If there is a positive AAD length, it is not
     *  required for this register to have a nonzero value.
     *      Reads from this register return all zeros, so reads are not necessary.
     *      For modes that do not allow partial blocks such as CBC, this number must
     *   be a multiple of 16.
     *
     *  @param[in] aesadv       Pointer to the register overlay for the peripheral
     *  @param[in] lowerLength  Lower 32-bits of crypto data length that will be
     *                          inputted
     *
     *  @note This sets the context for the register, and thus should be called last
     *        in the configuration for non-combined modes
     *
     *  @sa DL_AESADVHP_setUpperCryptoLength
     *  @sa DL_AESADVHP_setAADLength
     */
    __STATIC_INLINE void DL_AESADVHP_setLowerCryptoLength( AESADVHP_Regs *aesadv, uint32_t lowerLength )
    {
        aesadv->C_LENGTH_0 = lowerLength;
    }

    /**
     *  @brief Sets the upper 29 bits of the crypto input data length in bytes
     *
     *  The entire length of crypto input data that can be provided is 61-bits long,
     *  and is thus set in two separate functions. The upper 29-bits will be set in
     *  this function should a length larger than or equal to 2^32 be necessary.
     *  Bits 29-31 are to be zeroed out upon a write.
     *
     *  @param[in] aesadv       Pointer to the register overlay for the peripheral
     *  @param[in] upperLength  Upper 29 bits of the crypto data length in bytes
     *                          that will be inputted
     *
     *  @note This sets the context for the register in combined modes (GCM/CCM),
     *        and thus should be called last in the configuration
     *
     *  @sa DL_AESADVHP_setLowerCryptoLength
     */
    __STATIC_INLINE void DL_AESADVHP_setUpperCryptoLength( AESADVHP_Regs *aesadv, uint32_t upperLength )
    {
        aesadv->C_LENGTH_1 = upperLength & 0x1FFFFFFFU;
    }

    /**
     *  @brief Sets the length of additional authentication data (AAD)
     *
     *  Specific to CCM/GCM modes. Sets length of AAD for these modes and 0
     *  otherwise. Can be zero if no AAD, or can be nonzero with a zero crypto
     *  length for authentication-only operation. A write to this register triggers
     *  the engine to start the context, and should be written after Crypto Length.
     *      For GCM this can be any value < 2^32, for CCM this value must be less
     *  than 2^16 - 2^8.
     *
     *  @param[in] aesadv       Pointer to the register overlay for the peripheral
     *  @param[in] aadLength    length of AAD in bytes.
     *
     *  @sa DL_AESADVHP_setLowerLength
     */
    __STATIC_INLINE void DL_AESADVHP_setAADLength( AESADVHP_Regs *aesadv, uint32_t aadLength )
    {
        aesadv->AAD_LENGTH = aadLength;
    }

    /**
     *  @brief Enables DMA Operation for the AESADVHP module
     *
     *  Sets the AESADVHP module to run with Data Inputs using the DMA to read/write
     *  data rather than using register input/output
     *
     *  @param[in] aesadv       Pointer to the register overlay for the peripheral
     *
     *  @sa DL_AESADVHP_disableDMAOperation
     */
    __STATIC_INLINE void DL_AESADVHP_enableDMAOperation( AESADVHP_Regs *aesadv )
    {
        aesadv->DMA_HS = ( AESADVHP_DMA_HS_DMA_DATA_ACK_DMA_ENABLE );
    }

    /**
     *  @brief Disables DMA Operation for the AESADVHP module
     *
     *  Default behavior. Sets the AESADVHP module to run using register input output
     *  with data provided by the CPU rather than using the DMA
     *
     *  @param[in] aesadv       Pointer to the register overlay for the peripheral
     */
    __STATIC_INLINE void DL_AESADVHP_disableDMAOperation( AESADVHP_Regs *aesadv )
    {
        aesadv->DMA_HS = ( AESADVHP_DMA_HS_DMA_DATA_ACK_DMA_DISABLE );
    }

    /**
     *  @brief Returns if DMA Operation is enabled
     *
     *  @param[in] aesadv       Pointer to the register overlay for the peripheral
     *
     *  @retval true   Configured to read/write data using the DMA
     *  @retval false  Configured to read/write data using the CPU (Default)
     */
    __STATIC_INLINE bool DL_AESADVHP_isDMAOperationEnabled( AESADVHP_Regs *aesadv )
    {
        return ( ( aesadv->DMA_HS & AESADVHP_DMA_HS_DMA_DATA_ACK_MASK ) == AESADVHP_DMA_HS_DMA_DATA_ACK_DMA_ENABLE );
    }

    /**
     *  @brief Returns if User Writes to the Key Registers on the AESADVHP are allowed
     *
     *  @param[in] aesadv       Pointer to the register overlay for the peripheral
     *
     *  @retval true   User Writes to the Key Registers are allowed
     *  @retval false  The user cannot write to the Key Registers
     *
     *  @note If user key writes are disabled but desired, a module reset is
     *        required
     */
    __STATIC_INLINE bool DL_AESADVHP_isUserKeyWriteEnabled( AESADVHP_Regs *aesadv )
    {
        return ( ( aesadv->STATUS & AESADVHP_STATUS_KEYWR_MASK ) == AESADVHP_STATUS_KEYWR_ENABLED );
    }

    /**
     *  @brief Loads a 128 or 256 bit regular key to the AESADVHP module
     *
     *  @param[in] aesadv       Pointer to the register overlay for the peripheral
     *  @param[in] key          Pointer to an uint8_t array with a length that
     *                          contains the cipher key
     *  @param[in] keySize      Key Size. One of @ref DL_AESADVHP_KEY_SIZE
     *
     *  @return Status of operation. Operation will fail if not 32-bit aligned. One
     *          of @ref DL_AESADVHP_STATUS.
     *
     *  @note This function adds additional cycles in order to verify no unaligned
     *        access, if this is not necessary, consider using uint32_t pointers and
     *        @ref DL_AESADVHP_setKeyAligned
     */
    DL_AESADVHP_STATUS DL_AESADVHP_setKey( AESADVHP_Regs *aesadv, const uint8_t *key, DL_AESADVHP_KEY_SIZE keySize );

    /**
     *  @brief Loads a 128 or 256 bit regular key to the AESADVHP module
     *
     *  @param[in] aesadv       Pointer to the register overlay for the peripheral
     *  @param[in] keyAligned   Pointer to an uint32_t array with a length that
     *                          contains the cipher key
     *  @param[in] keySize      Key Size. One of @ref DL_AESADVHP_KEY_SIZE
     *
     *  @sa DL_AESADVHP_setKey
     */
    void DL_AESADVHP_setKeyAligned( AESADVHP_Regs *aesadv, const uint32_t *keyAligned, DL_AESADVHP_KEY_SIZE keySize );

    /**
     *  @brief set the hash key
     *
     *  GCM-Specific. Sets the GHASH Hash key (sometimes referred to as H) if in
     *  a GCM mode other than DL_AESADVHP_MODE_GCM_AUTONOMOUS.
     *
     *  @param[in] aesadv       Pointer to the register overlay for the peripheral
     *  @param[in] hashKey      Pointer to an uint8_t array of length 16 that
     *                          contains the hash key
     *
     *  @return Status of operation. Operation will fail if not 32-bit aligned. One
     *          of @ref DL_AESADVHP_STATUS.
     *
     *  @note This function adds additional cycles in order to verify no unaligned
     *        access, if this is not necessary, consider using uint32_t pointers and
     *        @ref DL_AESADVHP_setGCMHashKeyAligned
     */
    DL_AESADVHP_STATUS DL_AESADVHP_setGCMHashKey( AESADVHP_Regs *aesadv, const uint8_t *hashKey );

    /**
     *  @brief set the hash key
     *
     *  GCM-Specific. Sets the GHASH Hash key (sometimes referred to as H) if in
     *  a GCM mode other than DL_AESADVHP_MODE_GCM_AUTONOMOUS.
     *
     *  @param[in] aesadv         Pointer to the register overlay for the peripheral
     *  @param[in] hashKeyAligned Pointer to an uint32_t array of length 4 that
     *                            contains the hash key
     *
     *  @sa DL_AESADVHP_setGCMHashKey
     *
     */
    void DL_AESADVHP_setGCMHashKeyAligned( AESADVHP_Regs *aesadv, const uint32_t *hashKeyAligned );

    /**
     *  @brief Loads the CBC-MAC second key
     *
     *  Specific to CBC-MAC operation.  Pre-calculated second key to perform a
     *  final XOR operation on the last input data block.
     *
     *  @param[in] aesadv       Pointer to the register overlay for the peripheral
     *  @param[in] secondKey    Pointer to an uint8_t array of length 16 containing
     *                          the second key
     *
     *  @return Status of operation. Operation will fail if not 32-bit aligned. One
     *          of @ref DL_AESADVHP_STATUS.
     *
     *  @note This function adds additional cycles in order to verify no unaligned
     *        access, if this is not necessary, consider using uint32_t pointers and
     *        @ref DL_AESADVHP_setSecondKeyAligned
     */
    DL_AESADVHP_STATUS DL_AESADVHP_setSecondKey( AESADVHP_Regs *aesadv, const uint8_t *secondKey );

    /**
     *  @brief Loads the CBC-MAC second key
     *
     *  Specific to CBC-MAC operation.  Pre-calculated second key to perform a
     *  final XOR operation on the last input data block.
     *
     *  @param[in] aesadv            Pointer to the register overlay for the
     *                               peripheral
     *  @param[in] secondKeyAligned  Pointer to an uint32_t array of length 4
     *                               containing the second key
     *
     *  @sa DL_AESADVHP_setSecondKey
     */
    void DL_AESADVHP_setSecondKeyAligned( AESADVHP_Regs *aesadv, const uint32_t *secondKeyAligned );

    /**
     *  @brief Loads the CBC-MAC third key
     *
     *  Specific to CBC-MAC operation. Pre-calculated third key to perform a
     *  final XOR operation on the last input data block.
     *
     *  @param[in] aesadv       Pointer to the register overlay for the peripheral
     *  @param[in] thirdKey     Pointer to an uint8_t array of length 16 containing
     *                          the third key
     *
     *  @return Status of operation. Operation will fail if not 32-bit aligned. One
     *          of @ref DL_AESADVHP_STATUS.
     *
     *  @note This function adds additional cycles in order to verify no unaligned
     *        access, if this is not necessary, consider using uint32_t pointers and
     *        @ref DL_AESADVHP_setThirdKeyAligned
     */
    DL_AESADVHP_STATUS DL_AESADVHP_setThirdKey( AESADVHP_Regs *aesadv, const uint8_t *thirdKey );

    /**
     *  @brief Loads the CBC-MAC third key
     *
     *  Specific to CBC-MAC operation. Pre-calculated third key to perform a
     *  final XOR operation on the last input data block.
     *
     *  @param[in] aesadv           Pointer to the register overlay for the
     *                              peripheral
     *  @param[in] thirdKeyAligned  Pointer to an uint32_t array of length 4
     *                              containing the third key
     *
     *  @sa DL_AESADVHP_setThirdKey
     */
    void DL_AESADVHP_setThirdKeyAligned( AESADVHP_Regs *aesadv, const uint32_t *thirdKeyAligned );

    /**
     *  @brief Loads either zero or an intermediate 128-bit TAG to resume GCM/CCM.
     *
     *  Specific to the GCM/CCM modes. During initialization and beginning of a new
     *  combined operation mode (GCM or CCM only), this must be set to 0. However,
     *  during continuation this tag is part of the saved intermediate digest that
     *  must be restored.
     *
     *  @param[in] aesadv       Pointer to the register overlay for the peripheral
     *  @param[in] tag          Pointer to an uint8_t array of length 16 containing
     *                          zeroes or the intermediate digest
     *
     *  @return Status of operation. Operation will fail if not 32-bit aligned. One
     *          of @ref DL_AESADVHP_STATUS.
     *
     *  @note This function adds additional cycles in order to verify no unaligned
     *        access, if this is not necessary, consider using uint32_t pointers and
     *        @ref DL_AESADVHP_loadIntermediateTAGAligned
     */
    DL_AESADVHP_STATUS DL_AESADVHP_loadIntermediateTAG( AESADVHP_Regs *aesadv, const uint8_t *tag );

    /**
     *  @brief Loads either zero or an intermediate 128-bit TAG to resume GCM/CCM.
     *
     *  Specific to the GCM/CCM modes. During initialization and beginning of a new
     *  combined operation mode (GCM or CCM only), this must be set to 0. However,
     *  during continuation this tag is part of the saved intermediate digest that
     *  must be restored.
     *
     *  @param[in] aesadv       Pointer to the register overlay for the peripheral
     *  @param[in] tagAligned   Pointer to an uint32_t array of length 4 containing
     *                          zeroes or the intermediate digest
     *
     *  @sa DL_AESADVHP_loadIntermediateTAG
     */
    void DL_AESADVHP_loadIntermediateTAGAligned( AESADVHP_Regs *aesadv, const uint32_t *tagAligned );

    /**
     *  @brief Loads the 128-bit initialization vector to the AESADVHP module.
     *
     *  When used with GCM, the upper word iv[127:96] needs to be written with
     *  0x01000000 in order to appropriately mark the initial counter value of 1.
     *
     *  @param[in] aesadv       Pointer to the register overlay for the peripheral
     *  @param[in] iv           Pointer to an uint8_t array of length 16 containing
     *                          the initialization vector
     *
     *  @return Status of operation. Operation will fail if not 32-bit aligned. One
     *          of @ref DL_AESADVHP_STATUS.
     *
     *  @note  For CCM, this iv must be written with the CCM-specific value A0. This
     *         value consists of the concatenation of A0 flags, the nonce, and the
     *         counter. There is a specialized function that can load this type of
     *         IV found at @ref DL_AESADVHP_loadCCMNonceAndCounter.
     *
     *  @note This function adds additional cycles in order to verify no unaligned
     *        access, if this is not necessary, consider using uint32_t pointers and
     *        @ref DL_AESADVHP_loadInitializationVectorAligned
     *
     *  @sa DL_AESADVHP_loadCCMNonceAndCounter
     */
    DL_AESADVHP_STATUS DL_AESADVHP_loadInitializationVector( AESADVHP_Regs *aesadv, uint8_t *iv );

    /**
     *  @brief Loads the 128-bit initialization vector to the AESADVHP module.
     *
     *  When used with GCM, the upper word iv[127:96] needs to be written with
     *  0x01000000 in order to appropriately mark the initial counter value of 1.
     *
     *  @param[in] aesadv       Pointer to the register overlay for the peripheral
     *  @param[in] ivAligned    Pointer to an uint32_t array of length 4 containing
     *                          the initialization vector
     *
     *  @note  For CCM, this iv must be written with the CCM-specific value A0. This
     *         value consists of the concatenation of A0 flags, the nonce, and the
     *         counter. There is a specialized function that can load this type of
     *         IV found at @ref DL_AESADVHP_loadCCMNonceAndCounter.
     *
     *  @sa DL_AESADVHP_loadCCMNonceAndCounter
     *  @sa DL_AESADVHP_loadInitializationVector
     */
    void DL_AESADVHP_loadInitializationVectorAligned( AESADVHP_Regs *aesadv, uint32_t *ivAligned );

    /**
     *  @brief Reads the 128-bit initialization vector from the AES Module
     *
     *  Contains the latest 128-bit initialization vector output from the engine.
     *
     *  @param[in] aesadv        Pointer to the register overlay for the
     *                           peripheral
     *
     *  @param[out] iv           Pointer to an uint8_t array of length 16 where the
     *                           iv will be written
     *
     *  @return Status of operation. Operation will fail if not 32-bit aligned. One
     *          of @ref DL_AESADVHP_STATUS.
     *
     *  @note This function adds additional cycles in order to verify no unaligned
     *        access, if this is not necessary, consider using uint32_t pointers and
     *        @ref DL_AESADVHP_readInitializationVectorAligned
     */
    DL_AESADVHP_STATUS DL_AESADVHP_readInitializationVector( AESADVHP_Regs *aesadv, uint8_t *iv );

    /**
     *  @brief Reads the 128-bit initialization vector from the AES Module
     *
     *  Contains the latest 128-bit initialization vector output from the engine.
     *
     *  @param[in] aesadv        Pointer to the register overlay for the
     *                           peripheral
     *
     *  @param[out] ivAligned    Pointer to an uint32_t array of length 4 where the
     *                           iv will be written
     *
     *  @sa DL_AESADVHP_readInitializationVector
     */
    void DL_AESADVHP_readInitializationVectorAligned( AESADVHP_Regs *aesadv, uint32_t *ivAligned );

    /**
     *  @brief Loads the CCM Nonce And Counter IV, also called A0
     *
     *  CCM-Specific use of the IV field called A0. The A0 field is formatted
     *  as follows:
     *
     *  LSB                                                                   MSB
     *  (5'b00000 concat 3'b counterWidth - 1) | Nonce | Counter IV (always 0's)
     *
     *  the counter width is set as one of DL_AESADVHP_CCM_CTR_WIDTH (equal to
     *  counterWidth -1).
     *      For example, a 5-byte width for the counter (and thus the data payload
     *  width) will correspond to a Counter IV of 40-bits. The counter width taking
     *  8 bits, and the Nonce taking the remaining 80-bits (10 bytes).
     *      An 8-byte counter width would yield a counter IV width of 64-bits with a
     *  Nonce taking the remaining 54-bits (7 bytes). The LSB of the IV will then
     *  be 8'b00000111 or 0x07 (one less than the byte width)
     *      Thus, the Nonce should be sufficiently wide to fit the bits that are
     *  remaining for the nonce, and this will vary with the counter field width
     *  provided. The LSB of the IV will be 0x04 (one less than the byte width)
     *
     *  The following table describes the Nonce array lengths that should be used:
     *
     *  DL_AESADVHP_CCM_CTR_WIDTH (bytes) | Nonce Array Length Required (bytes)
     *  --------------------------------|-------------------------------------
     *              2                   |                13
     *              3                   |                12
     *              4                   |                11
     *              5                   |                10
     *              6                   |                 9
     *              7                   |                 8
     *              8                   |                 7
     *
     *  @param[in] aesadv       Pointer to the register overlay for the peripheral
     *  @param[in] nonce        Pointer to the uint8_t nonce Value for CCM, should
     *                          be unique and length calculated as above.
     *  @param[in] ctrWidth     Counter Width. One of @ref DL_AESADVHP_CCM_CTR_WIDTH.
     *                          Should match width provided in control register.
     *
     *  @note During halting and resumption of CCM operations, it is required to use
     *        the @ref DL_AESADVHP_loadInitializationVector and
     *        @ref DL_AESADVHP_readInitializationVector functions as this preserves
     *        the current counter state. This function is designed for
     *        initialization of the operation only.
     *
     *  @sa DL_AESADVHP_loadInitializationVector
     *  @sa DL_AESADVHP_readInitializationVector
     */
    void DL_AESADVHP_loadCCMNonceAndCounter( AESADVHP_Regs            *aesadv,
                                             uint8_t                  *nonce,
                                             DL_AESADVHP_CCM_CTR_WIDTH ctrWidth );

    /**
     *  @brief loads 128 bits (4 words) of input data
     *
     *  Loads the next 128 bits of input data. Either AAD (GCM/CCM) or Crypto Data.
     *  If less than 128 bits are left (or if the width of data is less than 128
     *  bits ex. CCM), it is still necessary to pad 0's to the remaining bits in
     *  order for the engine to start the operation.
     *      For GCM/CCM, the last AAD block can have less than 128 bits, and
     *  should be padded with 0's rather than appended to the crypto data.
     *      For authentication modes (GCM, CCM, CBC-MAC), refer to the TRM for
     *  additional information about necessary padding.
     *
     *  @param[in] aesadv       Pointer to the register overlay for the peripheral
     *  @param[in] data         Pointer to uint8_t bit data array of length 16 to
     *                          be inputted.
     *
     *  @return Status of operation. Operation will fail if not 32-bit aligned. One
     *          of @ref DL_AESADVHP_STATUS.
     *
     *  @note This function adds additional cycles in order to verify no unaligned
     *        access, if this is not necessary, consider using uint32_t pointers and
     *        @ref DL_AESADVHP_loadInputDataAligned
     *
     *  @sa DL_AESADVHP_readOutputData
     */
    DL_AESADVHP_STATUS DL_AESADVHP_loadInputData( AESADVHP_Regs *aesadv, uint8_t *data );

    /**
     *  @brief loads 128 bits (4 words) of input data
     *
     *  Loads the next 128 bits of input data. Either AAD (GCM/CCM) or Crypto Data.
     *  If less than 128 bits are left (or if the width of data is less than 128
     *  bits ex. CCM), it is still necessary to pad 0's to the remaining bits in
     *  order for the engine to start the operation.
     *      For GCM/CCM, the last AAD block can have less than 128 bits, and
     *  should be padded with 0's rather than appended to the crypto data.
     *      For authentication modes (GCM, CCM, CBC-MAC), refer to the TRM for
     *  additional information about necessary padding.
     *
     *  @param[in] aesadv       Pointer to the register overlay for the peripheral
     *  @param[in] dataAligned  Pointer to uint32_t bit data array of length 4 to
     *                          be inputted.
     *
     *  @sa DL_AESADVHP_loadInputData
     *  @sa DL_AESADVHP_readOutputDataAligned
     */
    void DL_AESADVHP_loadInputDataAligned( AESADVHP_Regs *aesadv, uint32_t *dataAligned );

    /**
     *  @brief reads 128-bits of output data that has been encrypted/decrypted.
     *
     *  Reads the ciphertext/plaintext outputted by the AESADVHP module. If less than
     *  128 bits is expected, there still must be 128-bits read, which must mean
     *  the data pointer has at least 128 bits to spare.
     *
     *  Inputting Additional Authentication Data (AAD) will not place any
     *  information into the output buffer, thus a read is not required.
     *
     *  @param[in] aesadv        Pointer to the register overlay for the peripheral
     *  @param[out] data         Pointer to the data that will be read, uint8_t
     *                           requiring length of at least 16 to not overwrite
     *                           other variables.
     *
     *  @return Status of operation. Operation will fail if not 32-bit aligned. One
     *          of @ref DL_AESADVHP_STATUS.
     *
     *  @note This function adds additional cycles in order to verify no unaligned
     *        access, if this is not necessary, consider using uint32_t pointers and
     *        @ref DL_AESADVHP_readOutputDataAligned
     */
    DL_AESADVHP_STATUS DL_AESADVHP_readOutputData( AESADVHP_Regs *aesadv, uint8_t *data );

    /**
     *  @brief reads 128-bits of output data that has been encrypted/decrypted.
     *
     *  Reads the ciphertext/plaintext outputted by the AESADVHP module. If less than
     *  128 bits is expected, there still must be 128-bits read, which must mean
     *  the data pointer has at least 128 bits to spare.
     *
     *  Inputting Additional Authentication Data (AAD) will not place any
     *  information into the output buffer, thus a read is not required.
     *
     *  @param[in] aesadv        Pointer to the register overlay for the peripheral
     *  @param[out] dataAligned  Pointer to the data that will be read, uint32_t
     *                           requiring length of at least 4 to not overwrite
     *                           other variables.
     *
     *  @sa DL_AESADVHP_readOutputData
     */
    void DL_AESADVHP_readOutputDataAligned( AESADVHP_Regs *aesadv, uint32_t *dataAligned );

    /**
     *  @brief reads 128-bit output tag at the conclusion of operation/halt
     *
     *  Specific to authentication-enabled modes. Reads the tag. Only valid at the
     *  conclusion of an operation, or because an operation has been halted and
     *  requires a digest. In the case of a halted operation, the output will be
     *  an intermediate tag for CCM or GCM.
     *
     *  @param[in] aesadv        Pointer to the register overlay for the peripheral
     *  @param[out] tag          Pointer to the tag to be read, a uint8_t array of
     *                           length 16
     *
     *  @return Status of operation. Operation will fail if not 32-bit aligned. One
     *          of @ref DL_AESADVHP_STATUS.
     *
     *  @note This function adds additional cycles in order to verify no unaligned
     *        access, if this is not necessary, consider using uint32_t pointers and
     *        @ref DL_AESADVHP_readTAGAligned

     *  @sa DL_AESADVHP_isSavedOutputContextReady
     */
    DL_AESADVHP_STATUS DL_AESADVHP_readTAG( AESADVHP_Regs *aesadv, uint8_t *tag );

    /**
     *  @brief reads 128-bit output tag at the conclusion of operation/halt
     *
     *  Specific to authentication-enabled modes. Reads the tag. Only valid at the
     *  conclusion of an operation, or because an operation has been halted and
     *  requires a digest. In the case of a halted operation, the output will be
     *  an intermediate tag for CCM or GCM.
     *
     *  @param[in] aesadv        Pointer to the register overlay for the peripheral
     *  @param[out] tagAligned   Pointer to the tag to be read, a uint32_t array of
     *                           length 4
     *
     *  @sa DL_AESADVHP_isSavedOutputContextReady
     */
    void DL_AESADVHP_readTAGAligned( AESADVHP_Regs *aesadv, uint32_t *tagAligned );

    /**
     *  @brief Forces AESADVHP to begin processing input data.
     *
     *  This function will validate the input data buffer and force AESADVHP to begin
     *  processing data. Any value can be used in order to force processing data.
     *
     *  @note To use, @ref DL_AESADVHP_enableDMAOperation must not be in use
     *
     *  @param[in] aesadv        Pointer to the register overlay for the peripheral
     */
    __STATIC_INLINE void DL_AESADVHP_forceInputDataAvailable( AESADVHP_Regs *aesadv )
    {
        aesadv->FORCE_IN_AV = 0x0123CAFEU;
    }

    /**
     *  @brief Set the CCM AAD align data word.
     *
     *  Specific to CCM mode. Writes the alignment data word used to concatenate to
     *  the next block of additional authentication data (AAD). Will need to be set
     *  during initialization or during the resumption of a halted CCM operation.
     *
     *  @param[in] aesadv        Pointer to the register overlay for the peripheral
     *  @param[in] alignWord     AAD alignment word of type uint32_t
     */
    __STATIC_INLINE void DL_AESADVHP_setCCMAlignWord( AESADVHP_Regs *aesadv, uint32_t alignWord )
    {
        aesadv->CCM_ALN_WRD = alignWord;
    }

    /**
     *  @brief Get the CCM AAD align data word.
     *
     *  Specific to CCM mode. Reads the alignment data word used to concatenate to
     *  the next block of additional authentication data (AAD).
     *
     *  @param[in] aesadv        Pointer to the register overlay for the peripheral
     *
     *  @return Current AAD alignment word of type uint32_t
     */
    __STATIC_INLINE uint32_t DL_AESADVHP_getCCMAlignWord( AESADVHP_Regs *aesadv )
    {
        return ( aesadv->CCM_ALN_WRD );
    }

    /**
     *  @brief Sets the lower 32-bits of the data blocks remaining in an operation
     *
     *  Specific to GCM/CCM mode. The block count is 57-bits and represents the
     *  number of remaining AES cryptographic payload blocks (non-AAD) in an
     *  operation. During an interruption of a GCM/CCM operation, this number needs
     *  to be saved and restored before resumption.
     *
     *  @param[in] aesadv           Pointer to the register overlay for the
     *                              peripheral
     *  @param[in] lowerBlockCount  Lower 32-bits of the overall data blocks
     *                              remaining
     *
     *  @sa DL_AESADVHP_getLowerBlockCount
     *  @sa DL_AESADVHP_setUpperBlockCount
     */
    __STATIC_INLINE void DL_AESADVHP_setLowerBlockCount( AESADVHP_Regs *aesadv, uint32_t lowerBlockCount )
    {
        aesadv->BLK_CNT0 = lowerBlockCount;
    }

    /**
     *  @brief Gets the lower 32-bits of the data blocks remaining in an operation
     *
     *  Specific to GCM/CCM mode. The block count is 57-bits and represents the
     *  number of remaining AES cryptographic payload blocks (non-AAD) in an
     *  operation. During an interruption of a GCM/CCM operation, this number needs
     *  to be saved and restored before resumption.
     *
     *  @param[in] aesadv       Pointer to the register overlay for the peripheral
     *
     *  @return Lower 32-bits of overall data blocks remaining
     *
     *  @sa DL_AESADVHP_setLowerBlockCount
     */
    __STATIC_INLINE uint32_t DL_AESADVHP_getLowerBlockCount( AESADVHP_Regs *aesadv )
    {
        return aesadv->BLK_CNT0;
    }

    /**
     *  @brief Sets the upper 25-bits of the data blocks remaining in an operation
     *
     *  Specific to GCM/CCM mode. The block count is 57-bits and represents the
     *  number of remaining AES cryptographic payload blocks (non-AAD) in an
     *  operation. During an interruption of a GCM/CCM operation, this number needs
     *  to be saved and restored before resumption.
     *
     *  @param[in] aesadv           Pointer to the register overlay for the
     *                              peripheral
     *  @param[in] upperBlockCount  Upper 25-bits of the overall data blocks
     *                              remaining (bits [25:31] are ignored)
     *
     *  @sa DL_AESADVHP_getUpperBlockCount
     *  @sa DL_AESADVHP_setLowerBlockCount
     */
    __STATIC_INLINE void DL_AESADVHP_setUpperBlockCount( AESADVHP_Regs *aesadv, uint32_t upperBlockCount )
    {
        aesadv->BLK_CNT1 = ( upperBlockCount & 0x01FFFFFFU );
    }

    /**
     *  @brief Gets the upper 25-bits of the data blocks remaining in an operation
     *
     *  Specific to GCM/CCM mode. The block count is 57-bits and represents the
     *  number of remaining AES cryptographic payload blocks (non-AAD) in an
     *  operation. During an interruption of a GCM/CCM operation, this number needs
     *  to be saved and restored before resumption.
     *
     *  @param[in] aesadv       Pointer to the register overlay for the peripheral
     *
     *  @return Upper 25-bits of overall data blocks remaining (bits [25:31] are 0)
     *
     *  @sa DL_AESADVHP_setUpperBlockCount
     */
    __STATIC_INLINE uint32_t DL_AESADVHP_getUpperBlockCount( AESADVHP_Regs *aesadv )
    {
        return ( aesadv->BLK_CNT1 & 0x01FFFFFFU );
    }

    /**
     *  @brief      Enable AESADVHP interrupts
     *
     *  @param[in]  aesadv        Pointer to the register overlay for the peripheral
     *  @param[in]  interruptMask Bit mask of interrupts to enable. Bitwise OR of
     *                            @ref DL_AESADVHP_INTERRUPT
     */
    __STATIC_INLINE void DL_AESADVHP_enableInterrupt( AESADVHP_Regs *aesadv, uint32_t interruptMask )
    {
        aesadv->INT_EVENT0.IMASK |= interruptMask;
    }

    /**
     *  @brief      Disable AESADVHP interrupts
     *
     *  @param[in]  aesadv         Pointer to the register overlay for the
     *                             peripheral
     *  @param[in]  interruptMask  Bit mask of interrupts to enable. Bitwise OR of
     *                             @ref DL_AESADVHP_INTERRUPT
     */
    __STATIC_INLINE void DL_AESADVHP_disableInterrupt( AESADVHP_Regs *aesadv, uint32_t interruptMask )
    {
        aesadv->INT_EVENT0.IMASK &= ~( interruptMask );
    }

    /**
     *  @brief      Check if AES Ready interrupt is enabled
     *
     *  @param[in]  aesadv         Pointer to the register overlay for the
     *                             peripheral
     *  @param[in]  interruptMask  Bit mask of interrupts to check. Bitwise OR of
     *                             @ref DL_AESADVHP_INTERRUPT
     *
     *  @return     Which of the requested AESADVHP interrupts are enabled
     *
     *  @retval     Bitwise OR of @ref DL_AESADVHP_INTERRUPT values
     */
    __STATIC_INLINE uint32_t DL_AESADVHP_getEnabledInterrupts( AESADVHP_Regs *aesadv, uint32_t interruptMask )
    {
        return ( aesadv->INT_EVENT0.IMASK & interruptMask );
    }

    /**
     *  @brief      Check interrupt flag of enabled AESADVHP interrupts
     *
     *  Checks if any of the AESADVHP interrupts that was previously enabled are
     *  pending.
     *
     *  @param[in]  aesadv         Pointer to the register overlay for the
     *                             peripheral
     *  @param[in]  interruptMask  Bit mask of interrupts to check. Bitwise OR of
     *                             @ref DL_AESADVHP_INTERRUPT
     *
     *  @return     Which of the requested and enabled AESADVHP interrupts are pending
     *
     *  @retval     Bitwise OR of @ref DL_AESADVHP_INTERRUPT
     *
     *  @sa         DL_AESADVHP_enableInterrupt
     */
    __STATIC_INLINE uint32_t DL_AESADVHP_getEnabledInterruptStatus( AESADVHP_Regs *aesadv, uint32_t interruptMask )
    {
        return ( aesadv->INT_EVENT0.MIS & interruptMask );
    }

    /**
     *  @brief      Check interrupt flag of any AESADVHP interrupts
     *
     *  Checks if any of the AESADVHP interrupts are pending. Interrupts do not have
     *  to be previously enabled.
     *
     *  @param[in]  aesadv         Pointer to the register overlay for the
     *                             peripheral
     *  @param[in]  interruptMask  Bit mask of interrupts to check. Bitwise OR of
     *                             @ref DL_AESADVHP_INTERRUPT
     *
     *  @return     Which of the requested AESADVHP interrupts are pending
     *
     *  @retval     Bitwise OR of @ref DL_AESADVHP_INTERRUPT
     */
    __STATIC_INLINE uint32_t DL_AESADVHP_getRawInterruptStatus( AESADVHP_Regs *aesadv, uint32_t interruptMask )
    {
        return ( aesadv->INT_EVENT0.RIS & interruptMask );
    }

    /**
     *  @brief      Get highest priority pending AESADVHP interrupt
     *
     *  Checks if any AESADVHP interrupts are pending. Interrupt does not have to
     *  be previously enabled.
     *
     *  @param[in]  aesadv      Pointer to the register overlay for the peripheral
     *
     *  @return     The highest priority pending AESADVHP interrupt
     *
     *  @retval     One of @ref DL_AESADVHP_IIDX
     */
    __STATIC_INLINE DL_AESADVHP_IIDX DL_AESADVHP_getPendingInterrupt( AESADVHP_Regs *aesadv )
    {
        return ( ( DL_AESADVHP_IIDX ) aesadv->INT_EVENT0.IIDX );
    }

    /**
     *  @brief      Clear pending AESADVHP Interrupts
     *
     *  @param[in]  aesadv         Pointer to the register overlay for the
     *                             peripheral
     *  @param[in]  interruptMask  Bit mask of interrupts to clear. Bitwise OR of
     *                             @ref DL_AESADVHP_INTERRUPT
     */
    __STATIC_INLINE void DL_AESADVHP_clearInterruptStatus( AESADVHP_Regs *aesadv, uint32_t interruptMask )
    {
        aesadv->INT_EVENT0.ICLR = interruptMask;
    }

    /**
     *  @brief      Enables DMA input trigger to publish AESADVHP write requests to
     *              the DMA
     *
     *  @param[in]  aesadv      Pointer to the register overlay for the peripheral
     */
    __STATIC_INLINE void DL_AESADVHP_enableDMAInputTriggerEvent( AESADVHP_Regs *aesadv )
    {
        aesadv->INT_EVENT1.IMASK |= DL_AESADVHP_EVENT_DMA_DATA_INPUT_TRIGGER;
    }

    /**
     *  @brief      Enables DMA output trigger to publish AESADVHP read requests to
     *              the DMA
     *
     *  @param[in]  aesadv      Pointer to the register overlay for the peripheral
     */
    __STATIC_INLINE void DL_AESADVHP_enableDMAOutputTriggerEvent( AESADVHP_Regs *aesadv )
    {
        aesadv->INT_EVENT2.IMASK |= DL_AESADVHP_EVENT_DMA_DATA_OUTPUT_TRIGGER;
    }

    /**
     *  @brief      Disable DMA input trigger event
     *
     *  @param[in]  aesadv      Pointer to the register overlay for the peripheral
     */
    __STATIC_INLINE void DL_AESADVHP_disableDMAInputTriggerEvent( AESADVHP_Regs *aesadv )
    {
        aesadv->INT_EVENT1.IMASK &= ~( DL_AESADVHP_EVENT_DMA_DATA_INPUT_TRIGGER );
    }

    /**
     *  @brief      Disable DMA output trigger event
     *
     *  @param[in]  aesadv      Pointer to the register overlay for the peripheral
     */
    __STATIC_INLINE void DL_AESADVHP_disableDMAOutputTriggerEvent( AESADVHP_Regs *aesadv )
    {
        aesadv->INT_EVENT2.IMASK &= ~( DL_AESADVHP_EVENT_DMA_DATA_OUTPUT_TRIGGER );
    }

    /**
     *  @brief      Check if the DMA input trigger event is enabled
     *
     *  @param[in]  aesadv      Pointer to the register overlay for the peripheral
     *
     *  @return     If DMA input trigger event is enabled
     *
     *  @retval     DL_AESADVHP_EVENT_DMA_DATA_INPUT_TRIGGER if DMA input trigger
     *              event is enabled
     *  @retval     0 if DMA input trigger event is not enabled
     */
    __STATIC_INLINE uint32_t DL_AESADVHP_getEnabledDMAInputTriggerEvent( AESADVHP_Regs *aesadv )
    {
        return ( aesadv->INT_EVENT1.IMASK & DL_AESADVHP_EVENT_DMA_DATA_INPUT_TRIGGER );
    }

    /**
     *  @brief      Check if the DMA output trigger event is enabled
     *
     *  @param[in]  aesadv      Pointer to the register overlay for the peripheral
     *
     *  @return     If DMA output trigger event is enabled
     *
     *  @retval     DL_AESADVHP_EVENT_DMA_DATA_OUTPUT_TRIGGER if DMA output trigger
     *              event is enabled
     *  @retval     0 if DMA output trigger event is not enabled
     */
    __STATIC_INLINE uint32_t DL_AESADVHP_getEnabledDMAOutputTriggerEvent( AESADVHP_Regs *aesadv )
    {
        return ( aesadv->INT_EVENT2.IMASK & DL_AESADVHP_EVENT_DMA_DATA_OUTPUT_TRIGGER );
    }

    /**
     *  @brief      Check interrupt flag of DMA input trigger event
     *
     *  Checks if DMA input trigger event that was previously enabled is pending.
     *
     *  @param[in]  aesadv      Pointer to the register overlay for the peripheral
     *
     *  @return     If DMA input trigger event is pending
     *
     *  @retval     DL_AESADVHP_EVENT_DMA_DATA_INPUT_TRIGGER if DMA input trigger
     *              event is pending
     *  @retval     0 if DMA input trigger event is not pending
     *
     *  @sa         DL_AESADVHP_enableDMAInputTriggerEvent
     */
    __STATIC_INLINE uint32_t DL_AESADVHP_getEnabledDMAInputTriggerEventStatus( AESADVHP_Regs *aesadv )
    {
        return ( aesadv->INT_EVENT1.MIS & DL_AESADVHP_EVENT_DMA_DATA_INPUT_TRIGGER );
    }

    /**
     *  @brief      Check interrupt flag of DMA output trigger event
     *
     *  Checks if DMA output trigger event that was previously enabled is pending.
     *
     *  @param[in]  aesadv      Pointer to the register overlay for the peripheral
     *
     *  @return     If DMA output trigger event is pending
     *
     *  @retval     DL_AESADVHP_EVENT_DMA_DATA_OUTPUT_TRIGGER if DMA output trigger
     *              event is pending
     *  @retval     0 if DMA output trigger event is not pending
     *
     *  @sa         DL_AESADVHP_enableDMAOutputTriggerEvent
     */
    __STATIC_INLINE uint32_t DL_AESADVHP_getEnabledDMAOutputTriggerEventStatus( AESADVHP_Regs *aesadv )
    {
        return ( aesadv->INT_EVENT2.MIS & DL_AESADVHP_EVENT_DMA_DATA_OUTPUT_TRIGGER );
    }

    /**
     *  @brief      Check interrupt flag of DMA input trigger event
     *
     *  Checks if DMA input trigger event is pending. Event does not have to
     *  be previously enabled.
     *
     *  @param[in]  aesadv      Pointer to the register overlay for the peripheral
     *
     *  @return     If DMA input trigger event is pending
     *
     *  @retval     DL_AESADVHP_EVENT_DMA_DATA_INPUT_TRIGGER if DMA input trigger event is
     *              pending
     *  @retval     0 if DMA input trigger event is not pending
     */
    __STATIC_INLINE uint32_t DL_AESADVHP_getRawDMAInputTriggerEventStatus( AESADVHP_Regs *aesadv )
    {
        return ( aesadv->INT_EVENT1.RIS & DL_AESADVHP_EVENT_DMA_DATA_INPUT_TRIGGER );
    }

    /**
     *  @brief      Check interrupt flag of DMA output trigger event
     *
     *  Checks if DMA output trigger event is pending. Event does not have to
     *  be previously enabled.
     *
     *  @param[in]  aesadv      Pointer to the register overlay for the peripheral
     *
     *  @return     If DMA output trigger event is pending
     *
     *  @retval     DL_AESADVHP_EVENT_DMA_DATA_INPUT_TRIGGER if DMA output trigger event is
     *              pending
     *  @retval     0 if DMA output trigger event is not pending
     */
    __STATIC_INLINE uint32_t DL_AESADVHP_getRawDMAOutputTriggerEventStatus( AESADVHP_Regs *aesadv )
    {
        return ( aesadv->INT_EVENT2.RIS & DL_AESADVHP_EVENT_DMA_DATA_OUTPUT_TRIGGER );
    }

    /**
     *  @brief      Get highest priority pending DMA input trigger event
     *
     *  Checks if DMA input trigger event is pending. Event does not have to
     *  be previously enabled.
     *
     *  @param[in]  aesadv      Pointer to the register overlay for the peripheral
     *
     *  @return     The highest priority pending DMA input trigger event
     */
    __STATIC_INLINE DL_AESADVHP_IIDX DL_AESADVHP_getPendingDMAInputTriggerEvent( AESADVHP_Regs *aesadv )
    {
        uint32_t eventIIDX = aesadv->INT_EVENT1.IIDX;

        return ( DL_AESADVHP_IIDX ) eventIIDX;
    }

    /**
     *  @brief      Get highest priority pending DMA output trigger event
     *
     *  Checks if DMA output trigger event is pending. Event does not have to
     *  be previously enabled.
     *
     *  @param[in]  aesadv      Pointer to the register overlay for the peripheral
     *
     *  @return     The highest priority pending DMA output trigger event
     */
    __STATIC_INLINE DL_AESADVHP_IIDX DL_AESADVHP_getPendingDMAOutputTriggerEvent( AESADVHP_Regs *aesadv )
    {
        uint32_t eventIIDX = aesadv->INT_EVENT2.IIDX;

        return ( DL_AESADVHP_IIDX ) ( eventIIDX );
    }

    /**
     *  @brief      Clear pending DMA input trigger event
     *
     *  @param[in]  aesadv      Pointer to the register overlay for the peripheral
     */
    __STATIC_INLINE void DL_AESADVHP_clearDMAInputTriggerEventStatus( AESADVHP_Regs *aesadv )
    {
        aesadv->INT_EVENT1.ICLR = DL_AESADVHP_EVENT_DMA_DATA_INPUT_TRIGGER;
    }

    /**
     *  @brief      Clear pending DMA output trigger event
     *
     *  @param[in]  aesadv      Pointer to the register overlay for the peripheral
     */
    __STATIC_INLINE void DL_AESADVHP_clearDMAOutputTriggerEventStatus( AESADVHP_Regs *aesadv )
    {
        aesadv->INT_EVENT2.ICLR = DL_AESADVHP_EVENT_DMA_DATA_OUTPUT_TRIGGER;
    }

    /**
     *  @brief Returns the address of the AESADVHP input data register.
     *
     *  This API can be used with @ref DL_DMA_setDestAddr to set the destination
     *  address when using DMA transfers. The Data should be written as 128-bit
     *  block writes (4 32-bit words) to a region of memory starting at the provided
     *  address.
     *      Use with the @ref DL_AESADVHP_enableDMAOperation
     *      The DMA output request use @ref DL_AESADVHP_EVENT_DMA_DATA_OUTPUT_TRIGGER
     *
     *  @param[in] aesadv       Pointer to the register overlay for the peripheral
     *
     *  @return Address of the AESADVHP input data register
     *
     *  @sa DL_AESADVHP_enableDMAOperation
     */
    __STATIC_INLINE uintptr_t DL_AESADVHP_getDATAINAddr( AESADVHP_Regs *aesadv )
    {
        return ( ( uintptr_t ) &aesadv->DATA0 );
    }

    /**
     *  @brief Returns the address of the AESADVHP output data register.
     *
     *  This API can be used with @ref DL_DMA_setDestAddr to set the destination
     *  address when using DMA transfers. The Data should be read as 128-bit
     *  block read (4 32-bit words) to a region of memory starting at the provided
     *  address.
     *      Use with the @ref DL_AESADVHP_enableDMAOperation
     *      The DMA output request use @ref DL_AESADVHP_EVENT_DMA_DATA_OUTPUT_TRIGGER
     *
     *  @param[in] aesadv       Pointer to the register overlay for the peripheral
     *
     *  @return Address of the AESADVHP output data register
     *
     *  @sa DL_AESADVHP_enableDMAOperation
     */
    __STATIC_INLINE uintptr_t DL_AESADVHP_getDATAOUTAddr( AESADVHP_Regs *aesadv )
    {
        return ( ( uintptr_t ) &aesadv->DATA0 );
    }

    /**
     *  @brief Initializes the engine in the Electronic Codebook (ECB) mode
     *
     *  This function is designed to place the engine in Electronic Codebook (ECB)
     *  mode with all necessary control context.
     *      The primary key, however, must be set into the AES engine before this
     *  function is called. This is because the key could come from either the
     *  KEYSTORECTL or from plaintext depending on system setting.
     *
     *  @param[in] aesadv       Pointer to the register overlay for the peripheral
     *  @param[in] config       Pointer to configuration struct with valid values
     *                          for: direction, lowerCryptoLength, upperCryptoLength
     *
     *  @sa DL_AESADVHP_setKey
     */
    void DL_AESADVHP_initECB( AESADVHP_Regs *aesadv, DL_AESADVHP_Config *config );

    /**
     *  @brief Initializes the engine in the Cipher-Block Chaining (CBC) mode
     *
     *  This function is designed to place the engine in Cipher Block Chaining (CBC)
     *  mode with all necessary control context.
     *      The primary key, however, must be set into the AES engine before this
     *  function is called. This is because the key could come from either the
     *  KEYSTORECTL or from plaintext depending on system setting.
     *
     *  @param[in] aesadv       Pointer to the register overlay for the peripheral
     *  @param[in] config       Pointer to configuration struct with valid values
     *                          for: direction, iv, lowerCryptoLength,
     *                               upperCryptoLength
     *
     *  @sa DL_AESADVHP_setKey
     */
    void DL_AESADVHP_initCBC( AESADVHP_Regs *aesadv, DL_AESADVHP_Config *config );

    /**
     *  @brief Initializes the engine in the Cipher Feedback (CFB) mode
     *
     *  This function is designed to place the engine in Cipher Feedback (CFB) mode
     *  with all necessary control context.
     *      The primary key, however, must be set into the AES engine before this
     *  function is called. This is because the key could come from either the
     *  KEYSTORECTL or from plaintext depending on system setting.
     *
     *  @param[in] aesadv       Pointer to the register overlay for the peripheral
     *  @param[in] config       Pointer to configuration struct with valid values
     *                          for: direction, iv, lowerCryptoLength, upperCryptoLength,
     *                               cfb_fbWidth
     *
     *  @sa DL_AESADVHP_setKey
     */
    void DL_AESADVHP_initCFB( AESADVHP_Regs *aesadv, DL_AESADVHP_Config *config );

    /**
     *  @brief Initializes the engine in the Output Feedback (OFB) mode
     *
     *  This function is designed to place the engine in Output Feedback (OFB) mode
     *  with all necessary control context.
     *      The primary key, however, must be set into the AES engine before this
     *  function is called. This is because the key could come from either the
     *  KEYSTORECTL or from plaintext depending on system setting.
     *
     *  @param[in] aesadv       Pointer to the register overlay for the peripheral
     *  @param[in] config       Pointer to configuration struct with valid values
     *                          for: direction, iv, lowerCryptoLength,
     *                               upperCryptoLength
     *
     *  @sa DL_AESADVHP_setKey
     */
    void DL_AESADVHP_initOFB( AESADVHP_Regs *aesadv, DL_AESADVHP_Config *config );

    /**
     *  @brief Initializes the engine in the Counter (CTR) mode
     *
     *  This function is designed to place the engine in Counter (CTR) mode with all
     *  necessary control context.
     *      The primary key, however, must be set into the AES engine before this
     *  function is called. This is because the key could come from either the
     *  KEYSTORECTL or from plaintext depending on system setting.
     *
     *  @param[in] aesadv       Pointer to the register overlay for the peripheral
     *  @param[in] config       Pointer to configuration struct with valid values
     *                          for: direction iv, lowerCryptoLength,
     *                               upperCryptoLength, ctr_ctrWidth. IV is
     *                               typically 0x00000001
     *
     *  @sa DL_AESADVHP_setKey
     */
    void DL_AESADVHP_initCTR( AESADVHP_Regs *aesadv, DL_AESADVHP_Config *config );

    /**
     *  @brief Initializes the engine in the Integer Counter Mode (ICM)
     *
     *  This function is designed to place the engine in Integer Counter Mode (ICM)
     *  with all necessary control context. ICM is a variant of CTR mode with a 16-
     *  bit wide counter value.
     *      The primary key, however, must be set into the AES engine before this
     *  function is called. This is because the key could come from either the
     *  KEYSTORECTL or from plaintext depending on system setting.
     *
     *  @param[in] aesadv       Pointer to the register overlay for the peripheral
     *  @param[in] config       Pointer to configuration struct with valid values
     *                          for: direction iv, lowerCryptoLength,
     *                               upperCryptoLength. IV is typically 0x00000001
     *
     *  @sa DL_AESADVHP_setKey
     */
    void DL_AESADVHP_initICM( AESADVHP_Regs *aesadv, DL_AESADVHP_Config *config );

    /**
     *  @brief Initializes the engine in the block cipher-based Message
     *         Authentication Code (CMAC)
     *
     *  This function is designed to place the engine in block cipher-based Message
     *  Authentication Code: CMAC. CMAC is strictly authentication and does not
     *  generate any ciphertext or plaintext, but only a tag. CMAC is also
     *  recommended by NIST in SP 800-38B for authentication. It consists of a
     *  primary key as well as derived keys K1 and K2 which must be provided in
     *  the configuration. The engine will not derive K1 and K2, and these must be
     *  calculated beforehand and included in the config struct.
     *      The primary key from which K1 and K2 are derived, however, must be set
     *  in the AES engine before this function is called. This is because the key
     *  could come from either the KEYSTORECTL or from plaintext depending on
     *  system setting.
     *
     *  @param[in] aesadv       Pointer to the register overlay for the peripheral
     *  @param[in] config       Pointer to configuration struct with valid values
     *                          for: K1, K2, lowerCryptoLength, upperCryptoLength.
     *
     *  @sa DL_AESADVHP_setKey
     */
    void DL_AESADVHP_initCMAC( AESADVHP_Regs *aesadv, DL_AESADVHP_Config *config );

    /**
     *  @brief Initializes the engine in the Cipher Block Chaining Message
     *         Authenication Code (CBC-MAC)
     *
     *  This function is designed to place the engine in Cipher Block Chaining
     *  Message Authenication Code (CBC-MAC). CBC-MAC is strictly authentication and
     *  does not generate any ciphertext or plaintext, but only a tag.
     *      The primary key, however, must be set into the AES engine before this
     *  function is called. This is because the key could come from either the
     *  KEYSTORECTL or from plaintext depending on system setting.
     *
     *  @param[in] aesadv       Pointer to the register overlay for the peripheral
     *  @param[in] config       Pointer to configuration struct with valid values
     *                          for: lowerCryptoLength, upperCryptoLength.
     *
     *  @sa DL_AESADVHP_setKey
     */
    void DL_AESADVHP_initCBCMAC( AESADVHP_Regs *aesadv, DL_AESADVHP_Config *config );

    /**
     *  @brief Initializes the engine in the Galois/Counter Mode (GCM)
     *
     *  This function is designed to place the engine in Galois/Counter Mode (GCM).
     *  GCM is both authentication and data encryption, and will generate both
     *  ciphertext/plaintext and the corresponding tag.
     *      The primary key and hash key (if expected from @ref DL_AESADVHP_MODE) must
     *  be set into the AES engine before this function is called. This is because
     *  the key could come from either the KEYSTORECTL or from plaintext depending
     *  on system setting.
     *      After this function has completed, the user is to first input all
     *  additional authentication data (AAD) before entering the crypto payload.
     *
     *  @param[in] aesadv       Pointer to the register overlay for the peripheral
     *  @param[in] config       Pointer to configuration struct with valid values
     *                          for: mode (one of the GCM operations), direction,
     *                               iv, lowerCryptoLength, upperCryptoLength,
     *                               aadLength. IV is
     *                               typically 0x00000001. The maximum length in
     *                               bytes is 2^36 - 32.
     *
     *  @sa DL_AESADVHP_setKey
     *  @sa DL_AESADVHP_setHashKey
     */
    void DL_AESADVHP_initGCM( AESADVHP_Regs *aesadv, DL_AESADVHP_Config *config );

    /**
     *  @brief Initializes the engine in the Counter & CBC-MAC (CCM)mode
     *
     *  This function is designed to place the engine in Counter and Cipher-Block
     *  Chaining Message Authentication Code (CCM) mode.
     *  CCM is both authentication and data encryption, and will generate both
     *  ciphertext/plaintext and the corresponding tag.
     *      To calculate the length of the nonce and the counter width, please refer
     *  to @ref DL_AESADVHP_loadCCMNonceAndCounter.
     *      After this function has completed, the user is to first input all
     *  additional authentication data (AAD) before entering the crypto payload.
     *
     *  @param[in] aesadv       Pointer to the register overlay for the peripheral
     *  @param[in] config       Pointer to configuration struct with valid values
     *                          for: direction, nonce, ccm_ctrWidth, ccm_tagWidth,
     *                               lowerCryptoLength, upperCryptoLength, aadLength
     *                               IV is typically 0x00000001. The maximum AAD
     *                               Length is 2^16-2^8
     *
     *  @sa DL_AESADVHP_setKey
     */
    void DL_AESADVHP_initCCM( AESADVHP_Regs *aesadv, DL_AESADVHP_Config *config );

#ifdef __cplusplus
}
#endif

#endif /* __MSP_HAS_AESADVHP__ */

#endif /* ti_dl_dl_aesadv__include */
/** @}*/
