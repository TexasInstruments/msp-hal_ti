// clang-format off
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

#include <ti/driverlib/dl_aesadvhp.h>

#ifdef __MSP_HAS_AESADVHP__

static void DL_AESADVHP_loadData( volatile uint32_t *destPtr, const uint32_t *srcPtr, uint8_t numWords );
static void DL_AESADVHP_readData( uint32_t *destPtr, volatile const uint32_t *srcPtr, uint8_t numWords );

static const uint32_t *DL_AESADVHP_checkAlignmentAndReturnConstPtr( const uint8_t *ptr );

static uint32_t *DL_AESADVHP_checkAlignmentAndReturnPtr( const uint8_t *ptr );

DL_AESADVHP_STATUS DL_AESADVHP_setKey( AESADVHP_Regs *aesadv, const uint8_t *key, DL_AESADVHP_KEY_SIZE keySize )
{
    DL_AESADVHP_STATUS status = DL_AESADVHP_STATUS_SUCCESS;
    const uint32_t    *keyAligned;

    keyAligned = DL_AESADVHP_checkAlignmentAndReturnConstPtr( key );
    if ( keyAligned != NULL )
    {
        DL_AESADVHP_setKeyAligned( aesadv, keyAligned, keySize );
    }
    else
    {
        status = DL_AESADVHP_STATUS_UNALIGNED_ACCESS;
    }
    return status;
}

void DL_AESADVHP_setKeyAligned( AESADVHP_Regs *aesadv, const uint32_t *keyAligned, DL_AESADVHP_KEY_SIZE keySize )
{
    uint8_t numWords;

    switch ( keySize )
    {
        case DL_AESADVHP_KEY_SIZE_128_BIT:
            numWords = 4U;
            break;
        case DL_AESADVHP_KEY_SIZE_256_BIT:
            numWords = 8U;
            break;
        default:
            /* invalid key size*/
            numWords = 0U;
            break;
    }

    DL_Common_updateReg( &aesadv->CTRL, ( uint32_t ) keySize, AESADVHP_CTRL_KEYSIZE_MASK );

    DL_AESADVHP_loadData( &aesadv->KEY0, keyAligned, numWords );

    return;
}

DL_AESADVHP_STATUS DL_AESADVHP_setGCMHashKey( AESADVHP_Regs *aesadv, const uint8_t *hashKey )
{
    DL_AESADVHP_STATUS status = DL_AESADVHP_STATUS_SUCCESS;
    const uint32_t    *hashKeyAligned;

    hashKeyAligned = DL_AESADVHP_checkAlignmentAndReturnConstPtr( hashKey );
    if ( hashKeyAligned != NULL )
    {
        DL_AESADVHP_setGCMHashKeyAligned( aesadv, hashKeyAligned );
    }
    else
    {
        status = DL_AESADVHP_STATUS_UNALIGNED_ACCESS;
    }
    return status;
}

void DL_AESADVHP_setGCMHashKeyAligned( AESADVHP_Regs *aesadv, const uint32_t *hashKeyAligned )
{
    uint8_t numWords = 4U;

    DL_AESADVHP_loadData( &aesadv->GHASH_H0, hashKeyAligned, numWords );

}

DL_AESADVHP_STATUS DL_AESADVHP_setSecondKey( AESADVHP_Regs *aesadv, const uint8_t *secondKey )
{
    DL_AESADVHP_STATUS status = DL_AESADVHP_STATUS_SUCCESS;
    const uint32_t    *secondKeyAligned;

    secondKeyAligned = DL_AESADVHP_checkAlignmentAndReturnConstPtr( secondKey );
    if ( secondKeyAligned != NULL )
    {
        DL_AESADVHP_setSecondKeyAligned( aesadv, secondKeyAligned );
    }
    else
    {
        status = DL_AESADVHP_STATUS_UNALIGNED_ACCESS;
    }
    return status;
}

void DL_AESADVHP_setSecondKeyAligned( AESADVHP_Regs *aesadv, const uint32_t *secondKeyAligned )
{
    uint8_t numWords = 4U;

    DL_AESADVHP_loadData( &aesadv->GHASH_H0, secondKeyAligned, numWords );
}

DL_AESADVHP_STATUS DL_AESADVHP_setThirdKey( AESADVHP_Regs *aesadv, const uint8_t *thirdKey )
{
    DL_AESADVHP_STATUS status = DL_AESADVHP_STATUS_SUCCESS;
    const uint32_t    *thirdKeyAligned;

    thirdKeyAligned = DL_AESADVHP_checkAlignmentAndReturnConstPtr( thirdKey );
    if ( thirdKeyAligned != NULL )
    {
        DL_AESADVHP_setThirdKeyAligned( aesadv, thirdKeyAligned );
    }
    else
    {
        status = DL_AESADVHP_STATUS_UNALIGNED_ACCESS;
    }
    return status;
}

void DL_AESADVHP_setThirdKeyAligned( AESADVHP_Regs *aesadv, const uint32_t *thirdKeyAligned )
{
    uint8_t numWords = 4U;

    DL_AESADVHP_loadData( &aesadv->GCMCCM_TAG0, thirdKeyAligned, numWords );
}

DL_AESADVHP_STATUS DL_AESADVHP_loadIntermediateTAG( AESADVHP_Regs *aesadv, const uint8_t *tag )
{
    DL_AESADVHP_STATUS status = DL_AESADVHP_STATUS_SUCCESS;
    const uint32_t    *tagAligned;

    tagAligned = DL_AESADVHP_checkAlignmentAndReturnConstPtr( tag );
    if ( tagAligned != NULL )
    {
        DL_AESADVHP_loadIntermediateTAGAligned( aesadv, tagAligned );
    }
    else
    {
        status = DL_AESADVHP_STATUS_UNALIGNED_ACCESS;
    }
    return status;
}

void DL_AESADVHP_loadIntermediateTAGAligned( AESADVHP_Regs *aesadv, const uint32_t *tagAligned )
{
    uint8_t numWords = 4U;

    DL_AESADVHP_loadData( &aesadv->GCMCCM_TAG0, tagAligned, numWords );
}

DL_AESADVHP_STATUS DL_AESADVHP_loadInitializationVector( AESADVHP_Regs *aesadv, const uint8_t *iv )
{
    DL_AESADVHP_STATUS status = DL_AESADVHP_STATUS_SUCCESS;
    uint32_t          *ivAligned;

    ivAligned = DL_AESADVHP_checkAlignmentAndReturnPtr( iv );
    if ( ivAligned != NULL )
    {
        DL_AESADVHP_loadInitializationVectorAligned( aesadv, ivAligned );
    }
    else
    {
        status = DL_AESADVHP_STATUS_UNALIGNED_ACCESS;
    }
    return status;
}

void DL_AESADVHP_loadInitializationVectorAligned( AESADVHP_Regs *aesadv, const uint32_t *ivAligned )
{
    uint8_t numWords = 4U;

    DL_AESADVHP_loadData( &aesadv->IV0, ivAligned, numWords );
}

DL_AESADVHP_STATUS DL_AESADVHP_readInitializationVector( AESADVHP_Regs *aesadv, const uint8_t *iv )
{
    DL_AESADVHP_STATUS status = DL_AESADVHP_STATUS_SUCCESS;
    uint32_t          *ivAligned;

    ivAligned = DL_AESADVHP_checkAlignmentAndReturnPtr( iv );
    if ( ivAligned != NULL )
    {
        DL_AESADVHP_readInitializationVectorAligned( aesadv, ivAligned );
    }
    else
    {
        status = DL_AESADVHP_STATUS_UNALIGNED_ACCESS;
    }
    return status;
}

void DL_AESADVHP_readInitializationVectorAligned( AESADVHP_Regs *aesadv, uint32_t *ivAligned )
{
    uint8_t            numWords = 4U;
    volatile uint32_t *sourcePtr;

    sourcePtr = ( volatile uint32_t * ) &aesadv->IV0;

    DL_AESADVHP_readData( ivAligned, sourcePtr, numWords );
}

void DL_AESADVHP_loadCCMNonceAndCounter( AESADVHP_Regs *aesadv, uint8_t *nonce, DL_AESADVHP_CCM_CTR_WIDTH ctrWidth )
{
    uint8_t *noncePtr = nonce;
    uint8_t  numWords = 4U;
    uint32_t ivArray[4];
    uint8_t *ivPtr = ( uint8_t * ) &ivArray[0];
    uint8_t  i;

    /* calculation of the nonce length. (Length described in table in header) */
    uint8_t ccml                = ( uint8_t ) ( ( uint32_t ) ctrWidth >> AESADVHP_CTRL_CCML_OFS );
    uint8_t counterWidthInBytes = ( ccml + 1U );

    /* subtracting the counterWidth in bytes as well as the flag byte */
    uint8_t nonceWidthInBytes = 14U - ccml;

    *ivPtr++ = ccml;

    /* addition of the Nonce */
    for ( i = 0U; i < nonceWidthInBytes; i++ )
    {
        *ivPtr++ = *noncePtr++;
    }

    /* Counter is always initialized to zeros */
    for ( i =0U; i < counterWidthInBytes; i++ )
    {
        *ivPtr++ = 0x00;
    }

    DL_AESADVHP_loadData( &aesadv->IV0, ivArray, numWords );
}

DL_AESADVHP_STATUS DL_AESADVHP_loadInputData( AESADVHP_Regs *aesadv, const uint8_t *data )
{
    DL_AESADVHP_STATUS status = DL_AESADVHP_STATUS_SUCCESS;
    uint32_t          *dataAligned;

    dataAligned = DL_AESADVHP_checkAlignmentAndReturnPtr( data );
    if ( dataAligned != NULL )
    {
        DL_AESADVHP_loadInputDataAligned( aesadv, dataAligned );
    }
    else
    {
        status = DL_AESADVHP_STATUS_UNALIGNED_ACCESS;
    }
    return status;
}

void DL_AESADVHP_loadInputDataAligned( AESADVHP_Regs *aesadv, const uint32_t *dataAligned )
{
    uint8_t numWords = 4U;

    DL_AESADVHP_loadData( &aesadv->DATA0, dataAligned, numWords );
}

DL_AESADVHP_STATUS DL_AESADVHP_readOutputData( const AESADVHP_Regs *aesadv, const uint8_t *data )
{
    DL_AESADVHP_STATUS status = DL_AESADVHP_STATUS_SUCCESS;
    uint32_t          *dataAligned;

    dataAligned = DL_AESADVHP_checkAlignmentAndReturnPtr( data );
    if ( dataAligned != NULL )
    {
        DL_AESADVHP_readOutputDataAligned( aesadv, dataAligned );
    }
    else
    {
        status = DL_AESADVHP_STATUS_UNALIGNED_ACCESS;
    }
    return status;
}

void DL_AESADVHP_readOutputDataAligned( const AESADVHP_Regs *aesadv, uint32_t *dataAligned )
{
    uint8_t numWords = 4U;

    DL_AESADVHP_readData( dataAligned, &aesadv->DATA0, numWords );
}

DL_AESADVHP_STATUS DL_AESADVHP_readTAG( const AESADVHP_Regs *aesadv, const uint8_t *tag )
{
    DL_AESADVHP_STATUS status = DL_AESADVHP_STATUS_SUCCESS;
    uint32_t          *tagAligned;

    tagAligned = DL_AESADVHP_checkAlignmentAndReturnPtr( tag );
    if ( tagAligned != NULL )
    {
        DL_AESADVHP_readTAGAligned( aesadv, tagAligned );
    }
    else
    {
        status = DL_AESADVHP_STATUS_UNALIGNED_ACCESS;
    }
    return status;
}

void DL_AESADVHP_readTAGAligned( const AESADVHP_Regs *aesadv, uint32_t *tagAligned )
{
    uint8_t numWords = 4U;

    DL_AESADVHP_readData( tagAligned, &aesadv->TAG0, numWords );
}

void DL_AESADVHP_initECB( AESADVHP_Regs *aesadv, const DL_AESADVHP_Config *config )
{
    DL_Common_updateReg(
        &aesadv->CTRL, ( (( uint32_t ) DL_AESADVHP_MODE_ECB) |(uint32_t)(config->direction )),
        (((uint32_t)DL_AESADVHP_MODE_MASK) | AESADVHP_CTRL_DIR_MASK | AESADVHP_CTRL_SAVE_CNTXT_MASK ) );

    DL_AESADVHP_setUpperCryptoLength( aesadv, config->upperCryptoLength );
    DL_AESADVHP_setLowerCryptoLength( aesadv, config->lowerCryptoLength );
}

void DL_AESADVHP_initCBC( AESADVHP_Regs *aesadv, const DL_AESADVHP_Config *config )
{
    DL_Common_updateReg(
        &aesadv->CTRL, ( ( uint32_t ) DL_AESADVHP_MODE_CBC |(uint32_t) (config->direction )),
        ( DL_AESADVHP_MODE_MASK | AESADVHP_CTRL_DIR_MASK | AESADVHP_CTRL_SAVE_CNTXT_MASK ) );

    DL_AESADVHP_loadInitializationVector( aesadv, config->iv );

    DL_AESADVHP_setUpperCryptoLength( aesadv, config->upperCryptoLength );
    DL_AESADVHP_setLowerCryptoLength( aesadv, config->lowerCryptoLength );
}

void DL_AESADVHP_initCFB( AESADVHP_Regs *aesadv, const DL_AESADVHP_Config *config )
{
    DL_Common_updateReg( &aesadv->CTRL,
                         ( ( ( uint32_t ) DL_AESADVHP_MODE_CFB ) | ( ( uint32_t ) config->direction ) |
                           ( ( uint32_t ) config->cfb_fbWidth ) ),
                         ( DL_AESADVHP_MODE_MASK | AESADVHP_CTRL_DIR_MASK | AESADVHP_CTRL_CTR_WIDTH_MASK |
                           AESADVHP_CTRL_SAVE_CNTXT_MASK ) );

    DL_AESADVHP_loadInitializationVector( aesadv, config->iv );

    DL_AESADVHP_setUpperCryptoLength( aesadv, config->upperCryptoLength );
    DL_AESADVHP_setLowerCryptoLength( aesadv, config->lowerCryptoLength );
}

void DL_AESADVHP_initOFB( AESADVHP_Regs *aesadv, const DL_AESADVHP_Config *config )
{
    DL_Common_updateReg( &aesadv->CTRL,
                         ( ( ( uint32_t ) DL_AESADVHP_MODE_OFB ) | ( ( uint32_t ) config->direction ) |
                           ( ( uint32_t ) config->cfb_fbWidth ) ),
                         ( DL_AESADVHP_MODE_MASK | AESADVHP_CTRL_DIR_MASK | AESADVHP_CTRL_CTR_WIDTH_MASK |
                           AESADVHP_CTRL_SAVE_CNTXT_MASK ) );

    DL_AESADVHP_loadInitializationVector( aesadv, config->iv );

    DL_AESADVHP_setUpperCryptoLength( aesadv, config->upperCryptoLength );
    DL_AESADVHP_setLowerCryptoLength( aesadv, config->lowerCryptoLength );
}

void DL_AESADVHP_initCTR( AESADVHP_Regs *aesadv, const DL_AESADVHP_Config *config )
{
    DL_Common_updateReg( &aesadv->CTRL,
                         ( ( ( uint32_t ) DL_AESADVHP_MODE_CTR ) | ( ( uint32_t ) config->direction ) |
                           ( ( uint32_t ) config->ctr_ctrWidth ) ),
                         ( DL_AESADVHP_MODE_MASK | AESADVHP_CTRL_DIR_MASK | AESADVHP_CTRL_CTR_WIDTH_MASK |
                           AESADVHP_CTRL_SAVE_CNTXT_MASK ) );

    DL_AESADVHP_loadInitializationVector( aesadv, config->iv );

    DL_AESADVHP_setUpperCryptoLength( aesadv, config->upperCryptoLength );
    DL_AESADVHP_setLowerCryptoLength( aesadv, config->lowerCryptoLength );
}

void DL_AESADVHP_initICM( AESADVHP_Regs *aesadv, const DL_AESADVHP_Config *config )
{
    DL_Common_updateReg( &aesadv->CTRL, ( ( uint32_t ) DL_AESADVHP_MODE_ICM | ( ( uint32_t ) config->direction ) ),
                         ( DL_AESADVHP_MODE_MASK | AESADVHP_CTRL_DIR_MASK | AESADVHP_CTRL_SAVE_CNTXT_MASK ) );

    DL_AESADVHP_loadInitializationVector( aesadv, config->iv );

    DL_AESADVHP_setUpperCryptoLength( aesadv, config->upperCryptoLength );
    DL_AESADVHP_setLowerCryptoLength( aesadv, config->lowerCryptoLength );
}

void DL_AESADVHP_initCMAC( AESADVHP_Regs *aesadv, const DL_AESADVHP_Config *config )
{
    uint32_t zeroArray[4] = { 0x00000000, 0x00000000, 0x00000000, 0x00000000 };

    /* Set the second and third keys, and zero out the initialization vector */
    DL_AESADVHP_setSecondKey( aesadv, config->k1 );
    DL_AESADVHP_setThirdKey( aesadv, config->k2 );
    DL_AESADVHP_loadInitializationVectorAligned( aesadv, &zeroArray[0] );

    DL_Common_updateReg( &aesadv->CTRL,
                         ( ( uint32_t ) DL_AESADVHP_MODE_CMAC | ( ( uint32_t ) DL_AESADVHP_DIR_ENCRYPT ) |
                           ( ( uint32_t ) AESADVHP_CTRL_SAVE_CNTXT_ENABLE ) ),
                         ( DL_AESADVHP_MODE_MASK | AESADVHP_CTRL_DIR_MASK | AESADVHP_CTRL_SAVE_CNTXT_MASK ) );

    DL_AESADVHP_setUpperCryptoLength( aesadv, config->upperCryptoLength );
    DL_AESADVHP_setLowerCryptoLength( aesadv, config->lowerCryptoLength );
}

void DL_AESADVHP_initCBCMAC( AESADVHP_Regs *aesadv, const DL_AESADVHP_Config *config )
{
    uint32_t zeroArray[4] = { 0x00000000, 0x00000000, 0x00000000, 0x00000000 };

    /* Zero out the second and third keys and the IV for CBC-MAC as per spec */
    DL_AESADVHP_setSecondKeyAligned( aesadv, &zeroArray[0] );
    DL_AESADVHP_setThirdKeyAligned( aesadv, &zeroArray[0] );
    DL_AESADVHP_loadInitializationVectorAligned( aesadv, &zeroArray[0] );

    DL_Common_updateReg( &aesadv->CTRL,
                         ( ( uint32_t ) DL_AESADVHP_MODE_CBCMAC | ( ( uint32_t ) DL_AESADVHP_DIR_ENCRYPT ) |
                           ( ( uint32_t ) AESADVHP_CTRL_SAVE_CNTXT_ENABLE ) ),
                         ( DL_AESADVHP_MODE_MASK | AESADVHP_CTRL_DIR_MASK | AESADVHP_CTRL_SAVE_CNTXT_MASK ) );

    DL_AESADVHP_setUpperCryptoLength( aesadv, config->upperCryptoLength );
    DL_AESADVHP_setLowerCryptoLength( aesadv, config->lowerCryptoLength );
}

void DL_AESADVHP_initGCM( AESADVHP_Regs *aesadv, const DL_AESADVHP_Config *config )
{
    uint32_t zeroArray[4] = { 0x00000000, 0x00000000, 0x00000000, 0x00000000 };

    /* Zero out the intermediate TAG for GCM as per spec */
    DL_AESADVHP_loadIntermediateTAGAligned( aesadv, &zeroArray[0] );

    DL_AESADVHP_loadInitializationVector( aesadv, config->iv );

    DL_Common_updateReg(
        &aesadv->CTRL,
        ( ( ( uint32_t ) config->mode ) | ( ( uint32_t ) config->direction ) |
          ( ( uint32_t ) DL_AESADVHP_CTR_WIDTH_32_BIT | ( uint32_t ) AESADVHP_CTRL_SAVE_CNTXT_ENABLE ) ),
        ( ( uint32_t ) DL_AESADVHP_MODE_MASK | AESADVHP_CTRL_DIR_MASK | AESADVHP_CTRL_CTR_WIDTH_MASK |
          AESADVHP_CTRL_SAVE_CNTXT_MASK ) );

    DL_AESADVHP_setUpperCryptoLength( aesadv, config->upperCryptoLength );
    DL_AESADVHP_setLowerCryptoLength( aesadv, config->lowerCryptoLength );

    DL_AESADVHP_setAADLength( aesadv, config->aadLength );
}

void DL_AESADVHP_initCCM( AESADVHP_Regs *aesadv, const DL_AESADVHP_Config *config )
{
    DL_AESADVHP_loadCCMNonceAndCounter( aesadv, config->nonce, config->ccm_ctrWidth );

    DL_Common_updateReg( &aesadv->CTRL,
                         ( ( ( uint32_t ) DL_AESADVHP_MODE_CCM ) | ( ( uint32_t ) config->direction ) |
                           ( ( uint32_t ) config->ccm_ctrWidth ) | ( ( uint32_t ) config->ccm_tagWidth ) |
                           ( ( uint32_t ) DL_AESADVHP_CTR_WIDTH_64_BIT ) |
                           ( ( uint32_t ) AESADVHP_CTRL_SAVE_CNTXT_ENABLE ) ),
                         ( DL_AESADVHP_MODE_MASK | AESADVHP_CTRL_DIR_MASK | AESADVHP_CTRL_CCML_MASK |
                           AESADVHP_CTRL_CCMM_MASK | AESADVHP_CTRL_CTR_WIDTH_MASK | AESADVHP_CTRL_SAVE_CNTXT_MASK ) );

    DL_AESADVHP_setUpperCryptoLength( aesadv, config->upperCryptoLength );
    DL_AESADVHP_setLowerCryptoLength( aesadv, config->lowerCryptoLength );

    DL_AESADVHP_setAADLength( aesadv, config->aadLength );
}

static void DL_AESADVHP_loadData( volatile uint32_t *destPtr, const uint32_t *srcPtr, uint8_t numWords )
{
    uint8_t i;
    for (i = 0; i < numWords; i++) {
        *destPtr++ = *srcPtr++;
    }
    return;
}

static void DL_AESADVHP_readData( uint32_t *destPtr, volatile const uint32_t *srcPtr, uint8_t numWords )
{
    uint8_t i;
    for (i = 0; i < numWords; i++) {
        *destPtr++ = *srcPtr++;
    }
    return;
}

static const uint32_t *DL_AESADVHP_checkAlignmentAndReturnConstPtr( const uint8_t *ptr )
{
    uint32_t        address = ( uint32_t ) ptr;
    const uint32_t *alignedPtr;
    if ( ( address << 30U ) != 0x00000000U )
    {
        /* Unaligned access */
        alignedPtr = NULL;
    }
    else
    {
        /* Aligned Access */
        alignedPtr = ( const uint32_t * ) address;
    }
    return alignedPtr;
}

static uint32_t *DL_AESADVHP_checkAlignmentAndReturnPtr( const uint8_t *ptr )
{
    uint32_t  address = ( uint32_t ) ptr;
    uint32_t *alignedPtr;
    if ( ( address << 30U ) != 0x00000000U )
    {
        /* Unaligned access */
        alignedPtr = NULL;
    }
    else
    {
        /* Aligned Access */
        alignedPtr = ( uint32_t * ) address;
    }
    return alignedPtr;
}

#endif /*__MSP_HAS_AESADVHP__*/
