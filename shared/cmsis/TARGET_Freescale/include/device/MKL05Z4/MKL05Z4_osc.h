/*
 * Copyright (c) 2014, Freescale Semiconductor, Inc.
 * All rights reserved.
 *
 * THIS SOFTWARE IS PROVIDED BY FREESCALE "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT
 * SHALL FREESCALE BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT
 * OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING
 * IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY
 * OF SUCH DAMAGE.
 */
/*
 * WARNING! DO NOT EDIT THIS FILE DIRECTLY!
 *
 * This file was generated automatically and any changes may be lost.
 */
#ifndef __HW_OSC_REGISTERS_H__
#define __HW_OSC_REGISTERS_H__

#include "regs.h"

/*
 * MKL05Z4 OSC
 *
 * Oscillator
 *
 * Registers defined in this header file:
 * - HW_OSC_CR - OSC Control Register
 *
 * - hw_osc_t - Struct containing all module registers.
 */

//! @name Module base addresses
//@{
#ifndef REGS_OSC_BASE
#define HW_OSC_INSTANCE_COUNT (1U) //!< Number of instances of the OSC module.
#define HW_OSC0 (0U) //!< Instance number for OSC0.
#define REGS_OSC0_BASE (0x40065000U) //!< Base address for OSC0.

//! @brief Table of base addresses for OSC instances.
static const uint32_t __g_regs_OSC_base_addresses[] = {
        REGS_OSC0_BASE,
    };

//! @brief Get the base address of OSC by instance number.
//! @param x OSC instance number, from 0 through 0.
#define REGS_OSC_BASE(x) (__g_regs_OSC_base_addresses[(x)])

//! @brief Get the instance number given a base address.
//! @param b Base address for an instance of OSC.
#define REGS_OSC_INSTANCE(b) ((b) == REGS_OSC0_BASE ? HW_OSC0 : 0)
#endif
//@}

//-------------------------------------------------------------------------------------------
// HW_OSC_CR - OSC Control Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_OSC_CR - OSC Control Register (RW)
 *
 * Reset value: 0x00U
 *
 * After OSC is enabled and starts generating the clocks, the configurations
 * such as low power and frequency range, must not be changed.
 */
typedef union _hw_osc_cr
{
    uint8_t U;
    struct _hw_osc_cr_bitfields
    {
        uint8_t SC16P : 1;             //!< [0] Oscillator 16 pF Capacitor Load Configure
        uint8_t SC8P : 1;              //!< [1] Oscillator 8 pF Capacitor Load Configure
        uint8_t SC4P : 1;              //!< [2] Oscillator 4 pF Capacitor Load Configure
        uint8_t SC2P : 1;              //!< [3] Oscillator 2 pF Capacitor Load Configure
        uint8_t RESERVED0 : 1;         //!< [4]
        uint8_t EREFSTEN : 1;          //!< [5] External Reference Stop Enable
        uint8_t RESERVED1 : 1;         //!< [6]
        uint8_t ERCLKEN : 1;           //!< [7] External Reference Enable
    } B;
} hw_osc_cr_t;
#endif

/*!
 * @name Constants and macros for entire OSC_CR register
 */
//@{
#define HW_OSC_CR_ADDR(x)        (REGS_OSC_BASE(x) + 0x0U)

#ifndef __LANGUAGE_ASM__
#define HW_OSC_CR(x)             (*(__IO hw_osc_cr_t *) HW_OSC_CR_ADDR(x))
#define HW_OSC_CR_RD(x)          (HW_OSC_CR(x).U)
#define HW_OSC_CR_WR(x, v)       (HW_OSC_CR(x).U = (v))
#define HW_OSC_CR_SET(x, v)      (BME_OR8(HW_OSC_CR_ADDR(x), (uint8_t)(v)))
#define HW_OSC_CR_CLR(x, v)      (BME_AND8(HW_OSC_CR_ADDR(x), (uint8_t)(~(v))))
#define HW_OSC_CR_TOG(x, v)      (BME_XOR8(HW_OSC_CR_ADDR(x), (uint8_t)(v)))
#endif
//@}

/*
 * Constants & macros for individual OSC_CR bitfields
 */

/*!
 * @name Register OSC_CR, field SC16P[0] (RW)
 *
 * Configures the oscillator load.
 *
 * Values:
 * - 0 - Disable the selection.
 * - 1 - Add 16 pF capacitor to the oscillator load.
 */
//@{
#define BP_OSC_CR_SC16P      (0U)          //!< Bit position for OSC_CR_SC16P.
#define BM_OSC_CR_SC16P      (0x01U)       //!< Bit mask for OSC_CR_SC16P.
#define BS_OSC_CR_SC16P      (1U)          //!< Bit field size in bits for OSC_CR_SC16P.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the OSC_CR_SC16P field.
#define BR_OSC_CR_SC16P(x)   (BME_UBFX8(HW_OSC_CR_ADDR(x), BP_OSC_CR_SC16P, BS_OSC_CR_SC16P))
#endif

//! @brief Format value for bitfield OSC_CR_SC16P.
#define BF_OSC_CR_SC16P(v)   (__REG_VALUE_TYPE((__REG_VALUE_TYPE((v), uint8_t) << BP_OSC_CR_SC16P), uint8_t) & BM_OSC_CR_SC16P)

#ifndef __LANGUAGE_ASM__
//! @brief Set the SC16P field to a new value.
#define BW_OSC_CR_SC16P(x, v) (BME_BFI8(HW_OSC_CR_ADDR(x), ((uint8_t)(v) << BP_OSC_CR_SC16P), BP_OSC_CR_SC16P, 1))
#endif
//@}

/*!
 * @name Register OSC_CR, field SC8P[1] (RW)
 *
 * Configures the oscillator load.
 *
 * Values:
 * - 0 - Disable the selection.
 * - 1 - Add 8 pF capacitor to the oscillator load.
 */
//@{
#define BP_OSC_CR_SC8P       (1U)          //!< Bit position for OSC_CR_SC8P.
#define BM_OSC_CR_SC8P       (0x02U)       //!< Bit mask for OSC_CR_SC8P.
#define BS_OSC_CR_SC8P       (1U)          //!< Bit field size in bits for OSC_CR_SC8P.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the OSC_CR_SC8P field.
#define BR_OSC_CR_SC8P(x)    (BME_UBFX8(HW_OSC_CR_ADDR(x), BP_OSC_CR_SC8P, BS_OSC_CR_SC8P))
#endif

//! @brief Format value for bitfield OSC_CR_SC8P.
#define BF_OSC_CR_SC8P(v)    (__REG_VALUE_TYPE((__REG_VALUE_TYPE((v), uint8_t) << BP_OSC_CR_SC8P), uint8_t) & BM_OSC_CR_SC8P)

#ifndef __LANGUAGE_ASM__
//! @brief Set the SC8P field to a new value.
#define BW_OSC_CR_SC8P(x, v) (BME_BFI8(HW_OSC_CR_ADDR(x), ((uint8_t)(v) << BP_OSC_CR_SC8P), BP_OSC_CR_SC8P, 1))
#endif
//@}

/*!
 * @name Register OSC_CR, field SC4P[2] (RW)
 *
 * Configures the oscillator load.
 *
 * Values:
 * - 0 - Disable the selection.
 * - 1 - Add 4 pF capacitor to the oscillator load.
 */
//@{
#define BP_OSC_CR_SC4P       (2U)          //!< Bit position for OSC_CR_SC4P.
#define BM_OSC_CR_SC4P       (0x04U)       //!< Bit mask for OSC_CR_SC4P.
#define BS_OSC_CR_SC4P       (1U)          //!< Bit field size in bits for OSC_CR_SC4P.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the OSC_CR_SC4P field.
#define BR_OSC_CR_SC4P(x)    (BME_UBFX8(HW_OSC_CR_ADDR(x), BP_OSC_CR_SC4P, BS_OSC_CR_SC4P))
#endif

//! @brief Format value for bitfield OSC_CR_SC4P.
#define BF_OSC_CR_SC4P(v)    (__REG_VALUE_TYPE((__REG_VALUE_TYPE((v), uint8_t) << BP_OSC_CR_SC4P), uint8_t) & BM_OSC_CR_SC4P)

#ifndef __LANGUAGE_ASM__
//! @brief Set the SC4P field to a new value.
#define BW_OSC_CR_SC4P(x, v) (BME_BFI8(HW_OSC_CR_ADDR(x), ((uint8_t)(v) << BP_OSC_CR_SC4P), BP_OSC_CR_SC4P, 1))
#endif
//@}

/*!
 * @name Register OSC_CR, field SC2P[3] (RW)
 *
 * Configures the oscillator load.
 *
 * Values:
 * - 0 - Disable the selection.
 * - 1 - Add 2 pF capacitor to the oscillator load.
 */
//@{
#define BP_OSC_CR_SC2P       (3U)          //!< Bit position for OSC_CR_SC2P.
#define BM_OSC_CR_SC2P       (0x08U)       //!< Bit mask for OSC_CR_SC2P.
#define BS_OSC_CR_SC2P       (1U)          //!< Bit field size in bits for OSC_CR_SC2P.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the OSC_CR_SC2P field.
#define BR_OSC_CR_SC2P(x)    (BME_UBFX8(HW_OSC_CR_ADDR(x), BP_OSC_CR_SC2P, BS_OSC_CR_SC2P))
#endif

//! @brief Format value for bitfield OSC_CR_SC2P.
#define BF_OSC_CR_SC2P(v)    (__REG_VALUE_TYPE((__REG_VALUE_TYPE((v), uint8_t) << BP_OSC_CR_SC2P), uint8_t) & BM_OSC_CR_SC2P)

#ifndef __LANGUAGE_ASM__
//! @brief Set the SC2P field to a new value.
#define BW_OSC_CR_SC2P(x, v) (BME_BFI8(HW_OSC_CR_ADDR(x), ((uint8_t)(v) << BP_OSC_CR_SC2P), BP_OSC_CR_SC2P, 1))
#endif
//@}

/*!
 * @name Register OSC_CR, field EREFSTEN[5] (RW)
 *
 * Controls whether or not the external reference clock (OSCERCLK) remains
 * enabled when MCU enters Stop mode.
 *
 * Values:
 * - 0 - External reference clock is disabled in Stop mode.
 * - 1 - External reference clock stays enabled in Stop mode if ERCLKEN is set
 *     before entering Stop mode.
 */
//@{
#define BP_OSC_CR_EREFSTEN   (5U)          //!< Bit position for OSC_CR_EREFSTEN.
#define BM_OSC_CR_EREFSTEN   (0x20U)       //!< Bit mask for OSC_CR_EREFSTEN.
#define BS_OSC_CR_EREFSTEN   (1U)          //!< Bit field size in bits for OSC_CR_EREFSTEN.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the OSC_CR_EREFSTEN field.
#define BR_OSC_CR_EREFSTEN(x) (BME_UBFX8(HW_OSC_CR_ADDR(x), BP_OSC_CR_EREFSTEN, BS_OSC_CR_EREFSTEN))
#endif

//! @brief Format value for bitfield OSC_CR_EREFSTEN.
#define BF_OSC_CR_EREFSTEN(v) (__REG_VALUE_TYPE((__REG_VALUE_TYPE((v), uint8_t) << BP_OSC_CR_EREFSTEN), uint8_t) & BM_OSC_CR_EREFSTEN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the EREFSTEN field to a new value.
#define BW_OSC_CR_EREFSTEN(x, v) (BME_BFI8(HW_OSC_CR_ADDR(x), ((uint8_t)(v) << BP_OSC_CR_EREFSTEN), BP_OSC_CR_EREFSTEN, 1))
#endif
//@}

/*!
 * @name Register OSC_CR, field ERCLKEN[7] (RW)
 *
 * Enables external reference clock (OSCERCLK).
 *
 * Values:
 * - 0 - External reference clock is inactive.
 * - 1 - External reference clock is enabled.
 */
//@{
#define BP_OSC_CR_ERCLKEN    (7U)          //!< Bit position for OSC_CR_ERCLKEN.
#define BM_OSC_CR_ERCLKEN    (0x80U)       //!< Bit mask for OSC_CR_ERCLKEN.
#define BS_OSC_CR_ERCLKEN    (1U)          //!< Bit field size in bits for OSC_CR_ERCLKEN.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the OSC_CR_ERCLKEN field.
#define BR_OSC_CR_ERCLKEN(x) (BME_UBFX8(HW_OSC_CR_ADDR(x), BP_OSC_CR_ERCLKEN, BS_OSC_CR_ERCLKEN))
#endif

//! @brief Format value for bitfield OSC_CR_ERCLKEN.
#define BF_OSC_CR_ERCLKEN(v) (__REG_VALUE_TYPE((__REG_VALUE_TYPE((v), uint8_t) << BP_OSC_CR_ERCLKEN), uint8_t) & BM_OSC_CR_ERCLKEN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ERCLKEN field to a new value.
#define BW_OSC_CR_ERCLKEN(x, v) (BME_BFI8(HW_OSC_CR_ADDR(x), ((uint8_t)(v) << BP_OSC_CR_ERCLKEN), BP_OSC_CR_ERCLKEN, 1))
#endif
//@}

//-------------------------------------------------------------------------------------------
// hw_osc_t - module struct
//-------------------------------------------------------------------------------------------
/*!
 * @brief All OSC module registers.
 */
#ifndef __LANGUAGE_ASM__
#pragma pack(1)
typedef struct _hw_osc
{
    __IO hw_osc_cr_t CR;                   //!< [0x0] OSC Control Register
} hw_osc_t;
#pragma pack()

//! @brief Macro to access all OSC registers.
//! @param x OSC instance number.
//! @return Reference (not a pointer) to the registers struct. To get a pointer to the struct,
//!     use the '&' operator, like <code>&HW_OSC(0)</code>.
#define HW_OSC(x)      (*(hw_osc_t *) REGS_OSC_BASE(x))
#endif

#endif // __HW_OSC_REGISTERS_H__
// v22/130726/0.9
// EOF