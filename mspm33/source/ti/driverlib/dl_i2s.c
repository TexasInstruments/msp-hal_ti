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

#include <ti/driverlib/dl_i2s.h>

#ifdef __MSP_HAS_I2S__

/**
 *  @brief I2S APIs
 */

void DL_I2S_setClockConfig(I2S_Regs *i2s, DL_I2S_ClockConfig *config)
{
    DL_Common_updateReg(&i2s->WCLKSRC,
        (uint32_t) config->clockSel | (uint32_t) config->wclkInvert,
        I2S_WCLKSRC_WBCLKSRC_MASK | I2S_WCLKSRC_WCLKINV_MASK);

    DL_Common_updateReg(
        &i2s->CLKCTL, (uint32_t) config->wclkPhase, I2S_CLKCTL_WCLKPHASE_MASK);

    i2s->WCLKDIV = config->wclkDivideRatio;
    i2s->BCLKDIV = config->bclkDivideRatio;
}

void DL_I2S_getClockConfig(I2S_Regs *i2s, DL_I2S_ClockConfig *config)
{
    uint32_t clockSel = i2s->WCLKSRC & I2S_WCLKSRC_WBCLKSRC_MASK;
    config->clockSel  = (DL_I2S_CLOCK_SOURCE)(clockSel);

    uint32_t wclkInvert = i2s->WCLKSRC & I2S_WCLKSRC_WCLKINV_MASK;
    config->wclkInvert  = (DL_I2S_WCLK_INVERSION)(wclkInvert);

    config->wclkDivideRatio = i2s->WCLKDIV;
    config->bclkDivideRatio = i2s->BCLKDIV;
}

void DL_I2S_configureDataPin0(I2S_Regs *i2s, DL_I2S_DataPinConfig *config)
{
    i2s->WMASK0 = config->channelMask;

    DL_Common_updateReg(&i2s->DIRCFG,
        ((uint32_t) config->direction) << I2S_DIRCFG_AD0_OFS,
        I2S_DIRCFG_AD0_MASK);
}

#ifdef DEVICE_HAS_MULTIPLE_DATA_PIN
void DL_I2S_configureDataPins(I2S_Regs *i2s, DL_I2S_DataPinConfig *pin0Config,
    DL_I2S_DataPinConfig *pin1Config)
{
    i2s->WMASK0 = pin0Config->channelMask;
    i2s->WMASK1 = pin1Config->channelMask;

    DL_Common_updateReg(&i2s->DIRCFG,
        ((((uint32_t) pin0Config->direction) << I2S_DIRCFG_AD0_OFS) |
            (((uint32_t) pin1Config->direction) << I2S_DIRCFG_AD1_OFS)),
        (I2S_DIRCFG_AD0_MASK | I2S_DIRCFG_AD1_MASK));
}

void DL_I2S_configureDataPin1(I2S_Regs *i2s, DL_I2S_DataPinConfig *config)
{
    i2s->WMASK1 = config->channelMask;

    DL_Common_updateReg(&i2s->DIRCFG,
        ((uint32_t) config->direction) << I2S_DIRCFG_AD1_OFS,
        I2S_DIRCFG_AD1_MASK);
}

#endif
void DL_I2S_configureSerialFormat(I2S_Regs *i2s,
    DL_I2S_SERIAL_FORMAT serialFormat, uint32_t sampleWordLength,
    DL_I2S_DATA_DELAY dataDelay)
{
    /*
     * Other frame format configurables such as WCLK inversion and dividers
     * must be set in DL_I2S_setClockConfig
     */
    DL_I2S_PHASE phase              = DL_I2S_PHASE_SINGLE;
    DL_I2S_SAMPLE_EDGE samplingEdge = DL_I2S_SAMPLE_EDGE_NEG;

    switch (serialFormat) {
        case DL_I2S_SERIAL_FORMAT_I2S:
            /* Fall through */
        case DL_I2S_SERIAL_FORMAT_LJF:
            /* Fall through */
        case DL_I2S_SERIAL_FORMAT_RJF:
            phase        = DL_I2S_PHASE_DUAL;
            samplingEdge = DL_I2S_SAMPLE_EDGE_POS;
            break;
        case DL_I2S_SERIAL_FORMAT_DSP:
            /* Fall through */
        case DL_I2S_SERIAL_FORMAT_PCM_SHORT:
            /* Fall through */
        case DL_I2S_SERIAL_FORMAT_PCM_LONG:
            phase        = DL_I2S_PHASE_SINGLE;
            samplingEdge = DL_I2S_SAMPLE_EDGE_NEG;
            break;
        case DL_I2S_SERIAL_FORMAT_TDM_CLASSIC:
            /* Fall through */
        case DL_I2S_SERIAL_FORMAT_TDM_I2S:
            /* Fall through */
        case DL_I2S_SERIAL_FORMAT_TDM_LJF:
            /* Fall through */
        case DL_I2S_SERIAL_FORMAT_TDM_RJF:
            phase        = DL_I2S_PHASE_SINGLE;
            samplingEdge = DL_I2S_SAMPLE_EDGE_POS;
            break;
        default:
            break;
    }

    DL_Common_updateReg(&i2s->FMTCFG,
        ((uint32_t) sampleWordLength | (uint32_t) phase |
            (uint32_t) samplingEdge | (uint32_t) dataDelay),
        (I2S_FMTCFG_WORDLEN_MASK | I2S_FMTCFG_DUALPHASE_MASK |
            I2S_FMTCFG_SMPLEDGE_MASK | I2S_FMTCFG_DATADLY_MASK));
}

void DL_I2S_transmitDataBlocking16(I2S_Regs *i2s, uint16_t data)
{
    while (DL_I2S_isTXFIFOFull(i2s)) {
        ;
    }

    DL_I2S_transmitData16(i2s, data);
}

void DL_I2S_transmitDataBlocking32(I2S_Regs *i2s, uint32_t data)
{
    while (DL_I2S_isTXFIFOFull(i2s)) {
        ;
    }

    DL_I2S_transmitData32(i2s, data);
}

uint16_t DL_I2S_receiveDataBlocking16(I2S_Regs *i2s)
{
    while (DL_I2S_isRXFIFOEmpty(i2s)) {
        ;
    }

    return DL_I2S_receiveData16(i2s);
}

uint32_t DL_I2S_receiveDataBlocking32(I2S_Regs *i2s)
{
    while (DL_I2S_isRXFIFOEmpty(i2s)) {
        ;
    }

    return DL_I2S_receiveData32(i2s);
}

bool DL_I2S_transmitDataCheck16(I2S_Regs *i2s, uint16_t data)
{
    bool status;
    if (DL_I2S_isTXFIFOFull(i2s)) {
        status = false;
    } else {
        DL_I2S_transmitData16(i2s, data);
        status = true;
    }
    return status;
}

bool DL_I2S_transmitDataCheck32(I2S_Regs *i2s, uint32_t data)
{
    bool status;
    if (DL_I2S_isTXFIFOFull(i2s)) {
        status = false;
    } else {
        DL_I2S_transmitData32(i2s, data);
        status = true;
    }
    return status;
}

bool DL_I2S_receiveDataCheck16(I2S_Regs *i2s, uint16_t *buffer)
{
    bool status;
    if (DL_I2S_isRXFIFOEmpty(i2s)) {
        status = false;
    } else {
        *buffer = DL_I2S_receiveData16(i2s);
        status  = true;
    }
    return status;
}

bool DL_I2S_receiveDataCheck32(I2S_Regs *i2s, uint32_t *buffer)
{
    bool status;
    if (DL_I2S_isRXFIFOEmpty(i2s)) {
        status = false;
    } else {
        *buffer = DL_I2S_receiveData32(i2s);
        status  = true;
    }
    return status;
}

uint32_t DL_I2S_drainRXFIFO16(
    I2S_Regs *i2s, uint16_t *buffer, uint32_t maxCount)
{
    uint32_t i;
    for (i = 0; i < maxCount; i++) {
        if (!DL_I2S_isRXFIFOEmpty(i2s)) {
            buffer[i] = DL_I2S_receiveData16(i2s);
        } else {
            break;
        }
    }

    return i;
}

uint32_t DL_I2S_drainRXFIFO32(
    I2S_Regs *i2s, uint32_t *buffer, uint32_t maxCount)
{
    uint32_t i;
    for (i = 0; i < maxCount; i++) {
        if (!DL_I2S_isRXFIFOEmpty(i2s)) {
            buffer[i] = DL_I2S_receiveData32(i2s);
        } else {
            break;
        }
    }

    return i;
}

uint32_t DL_I2S_fillTXFIFO16(I2S_Regs *i2s, uint16_t *buffer, uint32_t count)
{
    uint32_t i;
    for (i = 0; i < count; i++) {
        if (!DL_I2S_isTXFIFOFull(i2s)) {
            DL_I2S_transmitData16(i2s, buffer[i]);
        } else {
            break;
        }
    }

    return i;
}

uint32_t DL_I2S_fillTXFIFO32(I2S_Regs *i2s, uint32_t *buffer, uint32_t count)
{
    uint32_t i;
    for (i = 0; i < count; i++) {
        if (!DL_I2S_isTXFIFOFull(i2s)) {
            DL_I2S_transmitData32(i2s, buffer[i]);
        } else {
            break;
        }
    }

    return i;
}

void DL_I2S_clearTXFIFO(I2S_Regs *i2s)
{
    DL_Common_updateReg(
        &i2s->IFLS, I2S_IFLS_TXCLR_ENABLE, I2S_IFLS_TXCLR_MASK);

    while (!DL_I2S_isTXFIFOClearComplete(i2s)) {
        ;
    }

    DL_Common_updateReg(
        &i2s->IFLS, I2S_IFLS_TXCLR_DISABLE, I2S_IFLS_TXCLR_MASK);
}

void DL_I2S_clearRXFIFO(I2S_Regs *i2s)
{
    DL_Common_updateReg(
        &i2s->IFLS, I2S_IFLS_RXCLR_ENABLE, I2S_IFLS_RXCLR_MASK);

    while (!DL_I2S_isRXFIFOClearComplete(i2s)) {
        ;
    }

    DL_Common_updateReg(
        &i2s->IFLS, I2S_IFLS_RXCLR_DISABLE, I2S_IFLS_RXCLR_MASK);
}

bool DL_I2S_saveConfiguration(I2S_Regs *i2s, DL_I2S_backupConfig *ptr)
{
    bool stateSaved = !ptr->backupRdy;
    if (stateSaved) {
        uint32_t fifoThresholds       = i2s->IFLS;
        ptr->formatWord               = i2s->FMTCFG;
        ptr->clockControl             = i2s->CLKCTL;
        ptr->wclkSourceWord           = i2s->WCLKSRC;
        ptr->dataPin0ValidChannelMask = i2s->WMASK0;
#ifdef DEVICE_HAS_MULTIPLE_DATA_PIN
        ptr->dataPin1ValidChannelMask = i2s->WMASK1;
#endif
        ptr->mclkDiv        = i2s->MCLKDIV;
        ptr->wclkDiv        = i2s->WCLKDIV;
        ptr->bclkDiv        = i2s->BCLKDIV;
        ptr->interruptMask0 = i2s->CPU_INT.IMASK;
        ptr->interruptMask1 = i2s->DMA_TRIG_RX.IMASK;
        ptr->interruptMask2 = i2s->DMA_TRIG_TX.IMASK;
        ptr->interruptFifoLevelSelectByte =
            (fifoThresholds & I2S_IFLS_RXIFLSEL_MASK) |
            (fifoThresholds & I2S_IFLS_TXIFLSEL_MASK);
        ptr->dataPinConfigs = i2s->DIRCFG;
        ptr->backupRdy      = true;
    }

    return stateSaved;
}

bool DL_I2S_restoreConfiguration(I2S_Regs *i2s, DL_I2S_backupConfig *ptr)
{
    bool stateRestored = ptr->backupRdy;
    if (stateRestored) {
        /* Don't enable I2S module during initialization */
        i2s->FMTCFG  = ptr->formatWord & ~(I2S_FMTCFG_ENABLE_MASK);
        i2s->CLKCTL  = ptr->clockControl;
        i2s->WCLKSRC = ptr->wclkSourceWord;
        i2s->WMASK0  = ptr->dataPin0ValidChannelMask;
#ifdef DEVICE_HAS_MULTIPLE_DATA_PIN
        i2s->WMASK1 = ptr->dataPin1ValidChannelMask;
#endif
        i2s->MCLKDIV           = ptr->mclkDiv;
        i2s->WCLKDIV           = ptr->wclkDiv;
        i2s->BCLKDIV           = ptr->bclkDiv;
        i2s->CPU_INT.IMASK     = ptr->interruptMask0;
        i2s->DMA_TRIG_RX.IMASK = ptr->interruptMask1;
        i2s->DMA_TRIG_TX.IMASK = ptr->interruptMask2;
        i2s->IFLS              = ptr->interruptFifoLevelSelectByte;
        i2s->DIRCFG            = ptr->dataPinConfigs;

        /* Re-enable I2S module if it was originally enabled */
        if ((ptr->formatWord & I2S_FMTCFG_ENABLE_MASK) ==
            I2S_FMTCFG_ENABLE_ENABLE) {
            DL_I2S_enable(i2s);
        }

        ptr->backupRdy = false;
    }

    return stateRestored;
}

#endif /* __MSP_HAS_I2S__ */
