/**
 * \brief Component description for SUPC
 *
 * Copyright (c) 2020 Microchip Technology Inc. and its subsidiaries.
 *
 * Subject to your compliance with these terms, you may use Microchip software and any derivatives
 * exclusively with Microchip products. It is your responsibility to comply with third party license
 * terms applicable to your use of third party software (including open source software) that may
 * accompany Microchip software.
 *
 * THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY,
 * APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND
 * FITNESS FOR A PARTICULAR PURPOSE.
 *
 * IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, INCIDENTAL OR CONSEQUENTIAL
 * LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF
 * MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE FULLEST EXTENT
 * ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT
 * EXCEED THE AMOUNT OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
 *
 */

/* file generated from device description version 2020-07-21T07:22:51Z */
#ifndef _SAML21_SUPC_COMPONENT_H_
#define _SAML21_SUPC_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR SUPC                                         */
/* ************************************************************************** */

/* -------- SUPC_INTENCLR : (SUPC Offset: 0x00) (R/W 32) Interrupt Enable Clear -------- */
#define SUPC_INTENCLR_RESETVALUE              _U_(0x00)                                            /**<  (SUPC_INTENCLR) Interrupt Enable Clear  Reset Value */

#define SUPC_INTENCLR_BOD33RDY_Pos            _U_(0)                                               /**< (SUPC_INTENCLR) BOD33 Ready Position */
#define SUPC_INTENCLR_BOD33RDY_Msk            (_U_(0x1) << SUPC_INTENCLR_BOD33RDY_Pos)             /**< (SUPC_INTENCLR) BOD33 Ready Mask */
#define SUPC_INTENCLR_BOD33RDY(value)         (SUPC_INTENCLR_BOD33RDY_Msk & ((value) << SUPC_INTENCLR_BOD33RDY_Pos))
#define SUPC_INTENCLR_BOD33DET_Pos            _U_(1)                                               /**< (SUPC_INTENCLR) BOD33 Detection Position */
#define SUPC_INTENCLR_BOD33DET_Msk            (_U_(0x1) << SUPC_INTENCLR_BOD33DET_Pos)             /**< (SUPC_INTENCLR) BOD33 Detection Mask */
#define SUPC_INTENCLR_BOD33DET(value)         (SUPC_INTENCLR_BOD33DET_Msk & ((value) << SUPC_INTENCLR_BOD33DET_Pos))
#define SUPC_INTENCLR_B33SRDY_Pos             _U_(2)                                               /**< (SUPC_INTENCLR) BOD33 Synchronization Ready Position */
#define SUPC_INTENCLR_B33SRDY_Msk             (_U_(0x1) << SUPC_INTENCLR_B33SRDY_Pos)              /**< (SUPC_INTENCLR) BOD33 Synchronization Ready Mask */
#define SUPC_INTENCLR_B33SRDY(value)          (SUPC_INTENCLR_B33SRDY_Msk & ((value) << SUPC_INTENCLR_B33SRDY_Pos))
#define SUPC_INTENCLR_BOD12RDY_Pos            _U_(3)                                               /**< (SUPC_INTENCLR) BOD12 Ready Position */
#define SUPC_INTENCLR_BOD12RDY_Msk            (_U_(0x1) << SUPC_INTENCLR_BOD12RDY_Pos)             /**< (SUPC_INTENCLR) BOD12 Ready Mask */
#define SUPC_INTENCLR_BOD12RDY(value)         (SUPC_INTENCLR_BOD12RDY_Msk & ((value) << SUPC_INTENCLR_BOD12RDY_Pos))
#define SUPC_INTENCLR_BOD12DET_Pos            _U_(4)                                               /**< (SUPC_INTENCLR) BOD12 Detection Position */
#define SUPC_INTENCLR_BOD12DET_Msk            (_U_(0x1) << SUPC_INTENCLR_BOD12DET_Pos)             /**< (SUPC_INTENCLR) BOD12 Detection Mask */
#define SUPC_INTENCLR_BOD12DET(value)         (SUPC_INTENCLR_BOD12DET_Msk & ((value) << SUPC_INTENCLR_BOD12DET_Pos))
#define SUPC_INTENCLR_B12SRDY_Pos             _U_(5)                                               /**< (SUPC_INTENCLR) BOD12 Synchronization Ready Position */
#define SUPC_INTENCLR_B12SRDY_Msk             (_U_(0x1) << SUPC_INTENCLR_B12SRDY_Pos)              /**< (SUPC_INTENCLR) BOD12 Synchronization Ready Mask */
#define SUPC_INTENCLR_B12SRDY(value)          (SUPC_INTENCLR_B12SRDY_Msk & ((value) << SUPC_INTENCLR_B12SRDY_Pos))
#define SUPC_INTENCLR_VREGRDY_Pos             _U_(8)                                               /**< (SUPC_INTENCLR) Voltage Regulator Ready Position */
#define SUPC_INTENCLR_VREGRDY_Msk             (_U_(0x1) << SUPC_INTENCLR_VREGRDY_Pos)              /**< (SUPC_INTENCLR) Voltage Regulator Ready Mask */
#define SUPC_INTENCLR_VREGRDY(value)          (SUPC_INTENCLR_VREGRDY_Msk & ((value) << SUPC_INTENCLR_VREGRDY_Pos))
#define SUPC_INTENCLR_APWSRDY_Pos             _U_(9)                                               /**< (SUPC_INTENCLR) Automatic Power Switch Ready Position */
#define SUPC_INTENCLR_APWSRDY_Msk             (_U_(0x1) << SUPC_INTENCLR_APWSRDY_Pos)              /**< (SUPC_INTENCLR) Automatic Power Switch Ready Mask */
#define SUPC_INTENCLR_APWSRDY(value)          (SUPC_INTENCLR_APWSRDY_Msk & ((value) << SUPC_INTENCLR_APWSRDY_Pos))
#define SUPC_INTENCLR_VCORERDY_Pos            _U_(10)                                              /**< (SUPC_INTENCLR) VDDCORE Ready Position */
#define SUPC_INTENCLR_VCORERDY_Msk            (_U_(0x1) << SUPC_INTENCLR_VCORERDY_Pos)             /**< (SUPC_INTENCLR) VDDCORE Ready Mask */
#define SUPC_INTENCLR_VCORERDY(value)         (SUPC_INTENCLR_VCORERDY_Msk & ((value) << SUPC_INTENCLR_VCORERDY_Pos))
#define SUPC_INTENCLR_Msk                     _U_(0x0000073F)                                      /**< (SUPC_INTENCLR) Register Mask  */


/* -------- SUPC_INTENSET : (SUPC Offset: 0x04) (R/W 32) Interrupt Enable Set -------- */
#define SUPC_INTENSET_RESETVALUE              _U_(0x00)                                            /**<  (SUPC_INTENSET) Interrupt Enable Set  Reset Value */

#define SUPC_INTENSET_BOD33RDY_Pos            _U_(0)                                               /**< (SUPC_INTENSET) BOD33 Ready Position */
#define SUPC_INTENSET_BOD33RDY_Msk            (_U_(0x1) << SUPC_INTENSET_BOD33RDY_Pos)             /**< (SUPC_INTENSET) BOD33 Ready Mask */
#define SUPC_INTENSET_BOD33RDY(value)         (SUPC_INTENSET_BOD33RDY_Msk & ((value) << SUPC_INTENSET_BOD33RDY_Pos))
#define SUPC_INTENSET_BOD33DET_Pos            _U_(1)                                               /**< (SUPC_INTENSET) BOD33 Detection Position */
#define SUPC_INTENSET_BOD33DET_Msk            (_U_(0x1) << SUPC_INTENSET_BOD33DET_Pos)             /**< (SUPC_INTENSET) BOD33 Detection Mask */
#define SUPC_INTENSET_BOD33DET(value)         (SUPC_INTENSET_BOD33DET_Msk & ((value) << SUPC_INTENSET_BOD33DET_Pos))
#define SUPC_INTENSET_B33SRDY_Pos             _U_(2)                                               /**< (SUPC_INTENSET) BOD33 Synchronization Ready Position */
#define SUPC_INTENSET_B33SRDY_Msk             (_U_(0x1) << SUPC_INTENSET_B33SRDY_Pos)              /**< (SUPC_INTENSET) BOD33 Synchronization Ready Mask */
#define SUPC_INTENSET_B33SRDY(value)          (SUPC_INTENSET_B33SRDY_Msk & ((value) << SUPC_INTENSET_B33SRDY_Pos))
#define SUPC_INTENSET_BOD12RDY_Pos            _U_(3)                                               /**< (SUPC_INTENSET) BOD12 Ready Position */
#define SUPC_INTENSET_BOD12RDY_Msk            (_U_(0x1) << SUPC_INTENSET_BOD12RDY_Pos)             /**< (SUPC_INTENSET) BOD12 Ready Mask */
#define SUPC_INTENSET_BOD12RDY(value)         (SUPC_INTENSET_BOD12RDY_Msk & ((value) << SUPC_INTENSET_BOD12RDY_Pos))
#define SUPC_INTENSET_BOD12DET_Pos            _U_(4)                                               /**< (SUPC_INTENSET) BOD12 Detection Position */
#define SUPC_INTENSET_BOD12DET_Msk            (_U_(0x1) << SUPC_INTENSET_BOD12DET_Pos)             /**< (SUPC_INTENSET) BOD12 Detection Mask */
#define SUPC_INTENSET_BOD12DET(value)         (SUPC_INTENSET_BOD12DET_Msk & ((value) << SUPC_INTENSET_BOD12DET_Pos))
#define SUPC_INTENSET_B12SRDY_Pos             _U_(5)                                               /**< (SUPC_INTENSET) BOD12 Synchronization Ready Position */
#define SUPC_INTENSET_B12SRDY_Msk             (_U_(0x1) << SUPC_INTENSET_B12SRDY_Pos)              /**< (SUPC_INTENSET) BOD12 Synchronization Ready Mask */
#define SUPC_INTENSET_B12SRDY(value)          (SUPC_INTENSET_B12SRDY_Msk & ((value) << SUPC_INTENSET_B12SRDY_Pos))
#define SUPC_INTENSET_VREGRDY_Pos             _U_(8)                                               /**< (SUPC_INTENSET) Voltage Regulator Ready Position */
#define SUPC_INTENSET_VREGRDY_Msk             (_U_(0x1) << SUPC_INTENSET_VREGRDY_Pos)              /**< (SUPC_INTENSET) Voltage Regulator Ready Mask */
#define SUPC_INTENSET_VREGRDY(value)          (SUPC_INTENSET_VREGRDY_Msk & ((value) << SUPC_INTENSET_VREGRDY_Pos))
#define SUPC_INTENSET_APWSRDY_Pos             _U_(9)                                               /**< (SUPC_INTENSET) Automatic Power Switch Ready Position */
#define SUPC_INTENSET_APWSRDY_Msk             (_U_(0x1) << SUPC_INTENSET_APWSRDY_Pos)              /**< (SUPC_INTENSET) Automatic Power Switch Ready Mask */
#define SUPC_INTENSET_APWSRDY(value)          (SUPC_INTENSET_APWSRDY_Msk & ((value) << SUPC_INTENSET_APWSRDY_Pos))
#define SUPC_INTENSET_VCORERDY_Pos            _U_(10)                                              /**< (SUPC_INTENSET) VDDCORE Ready Position */
#define SUPC_INTENSET_VCORERDY_Msk            (_U_(0x1) << SUPC_INTENSET_VCORERDY_Pos)             /**< (SUPC_INTENSET) VDDCORE Ready Mask */
#define SUPC_INTENSET_VCORERDY(value)         (SUPC_INTENSET_VCORERDY_Msk & ((value) << SUPC_INTENSET_VCORERDY_Pos))
#define SUPC_INTENSET_Msk                     _U_(0x0000073F)                                      /**< (SUPC_INTENSET) Register Mask  */


/* -------- SUPC_INTFLAG : (SUPC Offset: 0x08) (R/W 32) Interrupt Flag Status and Clear -------- */
#define SUPC_INTFLAG_RESETVALUE               _U_(0x00)                                            /**<  (SUPC_INTFLAG) Interrupt Flag Status and Clear  Reset Value */

#define SUPC_INTFLAG_BOD33RDY_Pos             _U_(0)                                               /**< (SUPC_INTFLAG) BOD33 Ready Position */
#define SUPC_INTFLAG_BOD33RDY_Msk             (_U_(0x1) << SUPC_INTFLAG_BOD33RDY_Pos)              /**< (SUPC_INTFLAG) BOD33 Ready Mask */
#define SUPC_INTFLAG_BOD33RDY(value)          (SUPC_INTFLAG_BOD33RDY_Msk & ((value) << SUPC_INTFLAG_BOD33RDY_Pos))
#define SUPC_INTFLAG_BOD33DET_Pos             _U_(1)                                               /**< (SUPC_INTFLAG) BOD33 Detection Position */
#define SUPC_INTFLAG_BOD33DET_Msk             (_U_(0x1) << SUPC_INTFLAG_BOD33DET_Pos)              /**< (SUPC_INTFLAG) BOD33 Detection Mask */
#define SUPC_INTFLAG_BOD33DET(value)          (SUPC_INTFLAG_BOD33DET_Msk & ((value) << SUPC_INTFLAG_BOD33DET_Pos))
#define SUPC_INTFLAG_B33SRDY_Pos              _U_(2)                                               /**< (SUPC_INTFLAG) BOD33 Synchronization Ready Position */
#define SUPC_INTFLAG_B33SRDY_Msk              (_U_(0x1) << SUPC_INTFLAG_B33SRDY_Pos)               /**< (SUPC_INTFLAG) BOD33 Synchronization Ready Mask */
#define SUPC_INTFLAG_B33SRDY(value)           (SUPC_INTFLAG_B33SRDY_Msk & ((value) << SUPC_INTFLAG_B33SRDY_Pos))
#define SUPC_INTFLAG_BOD12RDY_Pos             _U_(3)                                               /**< (SUPC_INTFLAG) BOD12 Ready Position */
#define SUPC_INTFLAG_BOD12RDY_Msk             (_U_(0x1) << SUPC_INTFLAG_BOD12RDY_Pos)              /**< (SUPC_INTFLAG) BOD12 Ready Mask */
#define SUPC_INTFLAG_BOD12RDY(value)          (SUPC_INTFLAG_BOD12RDY_Msk & ((value) << SUPC_INTFLAG_BOD12RDY_Pos))
#define SUPC_INTFLAG_BOD12DET_Pos             _U_(4)                                               /**< (SUPC_INTFLAG) BOD12 Detection Position */
#define SUPC_INTFLAG_BOD12DET_Msk             (_U_(0x1) << SUPC_INTFLAG_BOD12DET_Pos)              /**< (SUPC_INTFLAG) BOD12 Detection Mask */
#define SUPC_INTFLAG_BOD12DET(value)          (SUPC_INTFLAG_BOD12DET_Msk & ((value) << SUPC_INTFLAG_BOD12DET_Pos))
#define SUPC_INTFLAG_B12SRDY_Pos              _U_(5)                                               /**< (SUPC_INTFLAG) BOD12 Synchronization Ready Position */
#define SUPC_INTFLAG_B12SRDY_Msk              (_U_(0x1) << SUPC_INTFLAG_B12SRDY_Pos)               /**< (SUPC_INTFLAG) BOD12 Synchronization Ready Mask */
#define SUPC_INTFLAG_B12SRDY(value)           (SUPC_INTFLAG_B12SRDY_Msk & ((value) << SUPC_INTFLAG_B12SRDY_Pos))
#define SUPC_INTFLAG_VREGRDY_Pos              _U_(8)                                               /**< (SUPC_INTFLAG) Voltage Regulator Ready Position */
#define SUPC_INTFLAG_VREGRDY_Msk              (_U_(0x1) << SUPC_INTFLAG_VREGRDY_Pos)               /**< (SUPC_INTFLAG) Voltage Regulator Ready Mask */
#define SUPC_INTFLAG_VREGRDY(value)           (SUPC_INTFLAG_VREGRDY_Msk & ((value) << SUPC_INTFLAG_VREGRDY_Pos))
#define SUPC_INTFLAG_APWSRDY_Pos              _U_(9)                                               /**< (SUPC_INTFLAG) Automatic Power Switch Ready Position */
#define SUPC_INTFLAG_APWSRDY_Msk              (_U_(0x1) << SUPC_INTFLAG_APWSRDY_Pos)               /**< (SUPC_INTFLAG) Automatic Power Switch Ready Mask */
#define SUPC_INTFLAG_APWSRDY(value)           (SUPC_INTFLAG_APWSRDY_Msk & ((value) << SUPC_INTFLAG_APWSRDY_Pos))
#define SUPC_INTFLAG_VCORERDY_Pos             _U_(10)                                              /**< (SUPC_INTFLAG) VDDCORE Ready Position */
#define SUPC_INTFLAG_VCORERDY_Msk             (_U_(0x1) << SUPC_INTFLAG_VCORERDY_Pos)              /**< (SUPC_INTFLAG) VDDCORE Ready Mask */
#define SUPC_INTFLAG_VCORERDY(value)          (SUPC_INTFLAG_VCORERDY_Msk & ((value) << SUPC_INTFLAG_VCORERDY_Pos))
#define SUPC_INTFLAG_Msk                      _U_(0x0000073F)                                      /**< (SUPC_INTFLAG) Register Mask  */


/* -------- SUPC_STATUS : (SUPC Offset: 0x0C) ( R/ 32) Power and Clocks Status -------- */
#define SUPC_STATUS_RESETVALUE                _U_(0x00)                                            /**<  (SUPC_STATUS) Power and Clocks Status  Reset Value */

#define SUPC_STATUS_BOD33RDY_Pos              _U_(0)                                               /**< (SUPC_STATUS) BOD33 Ready Position */
#define SUPC_STATUS_BOD33RDY_Msk              (_U_(0x1) << SUPC_STATUS_BOD33RDY_Pos)               /**< (SUPC_STATUS) BOD33 Ready Mask */
#define SUPC_STATUS_BOD33RDY(value)           (SUPC_STATUS_BOD33RDY_Msk & ((value) << SUPC_STATUS_BOD33RDY_Pos))
#define SUPC_STATUS_BOD33DET_Pos              _U_(1)                                               /**< (SUPC_STATUS) BOD33 Detection Position */
#define SUPC_STATUS_BOD33DET_Msk              (_U_(0x1) << SUPC_STATUS_BOD33DET_Pos)               /**< (SUPC_STATUS) BOD33 Detection Mask */
#define SUPC_STATUS_BOD33DET(value)           (SUPC_STATUS_BOD33DET_Msk & ((value) << SUPC_STATUS_BOD33DET_Pos))
#define SUPC_STATUS_B33SRDY_Pos               _U_(2)                                               /**< (SUPC_STATUS) BOD33 Synchronization Ready Position */
#define SUPC_STATUS_B33SRDY_Msk               (_U_(0x1) << SUPC_STATUS_B33SRDY_Pos)                /**< (SUPC_STATUS) BOD33 Synchronization Ready Mask */
#define SUPC_STATUS_B33SRDY(value)            (SUPC_STATUS_B33SRDY_Msk & ((value) << SUPC_STATUS_B33SRDY_Pos))
#define SUPC_STATUS_BOD12RDY_Pos              _U_(3)                                               /**< (SUPC_STATUS) BOD12 Ready Position */
#define SUPC_STATUS_BOD12RDY_Msk              (_U_(0x1) << SUPC_STATUS_BOD12RDY_Pos)               /**< (SUPC_STATUS) BOD12 Ready Mask */
#define SUPC_STATUS_BOD12RDY(value)           (SUPC_STATUS_BOD12RDY_Msk & ((value) << SUPC_STATUS_BOD12RDY_Pos))
#define SUPC_STATUS_BOD12DET_Pos              _U_(4)                                               /**< (SUPC_STATUS) BOD12 Detection Position */
#define SUPC_STATUS_BOD12DET_Msk              (_U_(0x1) << SUPC_STATUS_BOD12DET_Pos)               /**< (SUPC_STATUS) BOD12 Detection Mask */
#define SUPC_STATUS_BOD12DET(value)           (SUPC_STATUS_BOD12DET_Msk & ((value) << SUPC_STATUS_BOD12DET_Pos))
#define SUPC_STATUS_B12SRDY_Pos               _U_(5)                                               /**< (SUPC_STATUS) BOD12 Synchronization Ready Position */
#define SUPC_STATUS_B12SRDY_Msk               (_U_(0x1) << SUPC_STATUS_B12SRDY_Pos)                /**< (SUPC_STATUS) BOD12 Synchronization Ready Mask */
#define SUPC_STATUS_B12SRDY(value)            (SUPC_STATUS_B12SRDY_Msk & ((value) << SUPC_STATUS_B12SRDY_Pos))
#define SUPC_STATUS_VREGRDY_Pos               _U_(8)                                               /**< (SUPC_STATUS) Voltage Regulator Ready Position */
#define SUPC_STATUS_VREGRDY_Msk               (_U_(0x1) << SUPC_STATUS_VREGRDY_Pos)                /**< (SUPC_STATUS) Voltage Regulator Ready Mask */
#define SUPC_STATUS_VREGRDY(value)            (SUPC_STATUS_VREGRDY_Msk & ((value) << SUPC_STATUS_VREGRDY_Pos))
#define SUPC_STATUS_APWSRDY_Pos               _U_(9)                                               /**< (SUPC_STATUS) Automatic Power Switch Ready Position */
#define SUPC_STATUS_APWSRDY_Msk               (_U_(0x1) << SUPC_STATUS_APWSRDY_Pos)                /**< (SUPC_STATUS) Automatic Power Switch Ready Mask */
#define SUPC_STATUS_APWSRDY(value)            (SUPC_STATUS_APWSRDY_Msk & ((value) << SUPC_STATUS_APWSRDY_Pos))
#define SUPC_STATUS_VCORERDY_Pos              _U_(10)                                              /**< (SUPC_STATUS) VDDCORE Ready Position */
#define SUPC_STATUS_VCORERDY_Msk              (_U_(0x1) << SUPC_STATUS_VCORERDY_Pos)               /**< (SUPC_STATUS) VDDCORE Ready Mask */
#define SUPC_STATUS_VCORERDY(value)           (SUPC_STATUS_VCORERDY_Msk & ((value) << SUPC_STATUS_VCORERDY_Pos))
#define SUPC_STATUS_BBPS_Pos                  _U_(11)                                              /**< (SUPC_STATUS) Battery Backup Power Switch Position */
#define SUPC_STATUS_BBPS_Msk                  (_U_(0x1) << SUPC_STATUS_BBPS_Pos)                   /**< (SUPC_STATUS) Battery Backup Power Switch Mask */
#define SUPC_STATUS_BBPS(value)               (SUPC_STATUS_BBPS_Msk & ((value) << SUPC_STATUS_BBPS_Pos))
#define SUPC_STATUS_Msk                       _U_(0x00000F3F)                                      /**< (SUPC_STATUS) Register Mask  */


/* -------- SUPC_BOD33 : (SUPC Offset: 0x10) (R/W 32) BOD33 Control -------- */
#define SUPC_BOD33_RESETVALUE                 _U_(0x00)                                            /**<  (SUPC_BOD33) BOD33 Control  Reset Value */

#define SUPC_BOD33_ENABLE_Pos                 _U_(1)                                               /**< (SUPC_BOD33) Enable Position */
#define SUPC_BOD33_ENABLE_Msk                 (_U_(0x1) << SUPC_BOD33_ENABLE_Pos)                  /**< (SUPC_BOD33) Enable Mask */
#define SUPC_BOD33_ENABLE(value)              (SUPC_BOD33_ENABLE_Msk & ((value) << SUPC_BOD33_ENABLE_Pos))
#define SUPC_BOD33_HYST_Pos                   _U_(2)                                               /**< (SUPC_BOD33) Hysteresis Enable Position */
#define SUPC_BOD33_HYST_Msk                   (_U_(0x1) << SUPC_BOD33_HYST_Pos)                    /**< (SUPC_BOD33) Hysteresis Enable Mask */
#define SUPC_BOD33_HYST(value)                (SUPC_BOD33_HYST_Msk & ((value) << SUPC_BOD33_HYST_Pos))
#define SUPC_BOD33_ACTION_Pos                 _U_(3)                                               /**< (SUPC_BOD33) Action when Threshold Crossed Position */
#define SUPC_BOD33_ACTION_Msk                 (_U_(0x3) << SUPC_BOD33_ACTION_Pos)                  /**< (SUPC_BOD33) Action when Threshold Crossed Mask */
#define SUPC_BOD33_ACTION(value)              (SUPC_BOD33_ACTION_Msk & ((value) << SUPC_BOD33_ACTION_Pos))
#define   SUPC_BOD33_ACTION_NONE_Val          _U_(0x0)                                             /**< (SUPC_BOD33) No action  */
#define   SUPC_BOD33_ACTION_RESET_Val         _U_(0x1)                                             /**< (SUPC_BOD33) The BOD33 generates a reset  */
#define   SUPC_BOD33_ACTION_INT_Val           _U_(0x2)                                             /**< (SUPC_BOD33) The BOD33 generates an interrupt  */
#define   SUPC_BOD33_ACTION_BKUP_Val          _U_(0x3)                                             /**< (SUPC_BOD33) The BOD33 puts the device in backup sleep mode if VMON=0  */
#define SUPC_BOD33_ACTION_NONE                (SUPC_BOD33_ACTION_NONE_Val << SUPC_BOD33_ACTION_Pos) /**< (SUPC_BOD33) No action Position  */
#define SUPC_BOD33_ACTION_RESET               (SUPC_BOD33_ACTION_RESET_Val << SUPC_BOD33_ACTION_Pos) /**< (SUPC_BOD33) The BOD33 generates a reset Position  */
#define SUPC_BOD33_ACTION_INT                 (SUPC_BOD33_ACTION_INT_Val << SUPC_BOD33_ACTION_Pos) /**< (SUPC_BOD33) The BOD33 generates an interrupt Position  */
#define SUPC_BOD33_ACTION_BKUP                (SUPC_BOD33_ACTION_BKUP_Val << SUPC_BOD33_ACTION_Pos) /**< (SUPC_BOD33) The BOD33 puts the device in backup sleep mode if VMON=0 Position  */
#define SUPC_BOD33_STDBYCFG_Pos               _U_(5)                                               /**< (SUPC_BOD33) Configuration in Standby mode Position */
#define SUPC_BOD33_STDBYCFG_Msk               (_U_(0x1) << SUPC_BOD33_STDBYCFG_Pos)                /**< (SUPC_BOD33) Configuration in Standby mode Mask */
#define SUPC_BOD33_STDBYCFG(value)            (SUPC_BOD33_STDBYCFG_Msk & ((value) << SUPC_BOD33_STDBYCFG_Pos))
#define SUPC_BOD33_RUNSTDBY_Pos               _U_(6)                                               /**< (SUPC_BOD33) Run during Standby Position */
#define SUPC_BOD33_RUNSTDBY_Msk               (_U_(0x1) << SUPC_BOD33_RUNSTDBY_Pos)                /**< (SUPC_BOD33) Run during Standby Mask */
#define SUPC_BOD33_RUNSTDBY(value)            (SUPC_BOD33_RUNSTDBY_Msk & ((value) << SUPC_BOD33_RUNSTDBY_Pos))
#define SUPC_BOD33_RUNBKUP_Pos                _U_(7)                                               /**< (SUPC_BOD33) Configuration in Backup mode Position */
#define SUPC_BOD33_RUNBKUP_Msk                (_U_(0x1) << SUPC_BOD33_RUNBKUP_Pos)                 /**< (SUPC_BOD33) Configuration in Backup mode Mask */
#define SUPC_BOD33_RUNBKUP(value)             (SUPC_BOD33_RUNBKUP_Msk & ((value) << SUPC_BOD33_RUNBKUP_Pos))
#define SUPC_BOD33_ACTCFG_Pos                 _U_(8)                                               /**< (SUPC_BOD33) Configuration in Active mode Position */
#define SUPC_BOD33_ACTCFG_Msk                 (_U_(0x1) << SUPC_BOD33_ACTCFG_Pos)                  /**< (SUPC_BOD33) Configuration in Active mode Mask */
#define SUPC_BOD33_ACTCFG(value)              (SUPC_BOD33_ACTCFG_Msk & ((value) << SUPC_BOD33_ACTCFG_Pos))
#define SUPC_BOD33_VMON_Pos                   _U_(10)                                              /**< (SUPC_BOD33) Voltage Monitored in active and standby mode Position */
#define SUPC_BOD33_VMON_Msk                   (_U_(0x1) << SUPC_BOD33_VMON_Pos)                    /**< (SUPC_BOD33) Voltage Monitored in active and standby mode Mask */
#define SUPC_BOD33_VMON(value)                (SUPC_BOD33_VMON_Msk & ((value) << SUPC_BOD33_VMON_Pos))
#define SUPC_BOD33_PSEL_Pos                   _U_(12)                                              /**< (SUPC_BOD33) Prescaler Select Position */
#define SUPC_BOD33_PSEL_Msk                   (_U_(0xF) << SUPC_BOD33_PSEL_Pos)                    /**< (SUPC_BOD33) Prescaler Select Mask */
#define SUPC_BOD33_PSEL(value)                (SUPC_BOD33_PSEL_Msk & ((value) << SUPC_BOD33_PSEL_Pos))
#define   SUPC_BOD33_PSEL_DIV2_Val            _U_(0x0)                                             /**< (SUPC_BOD33) Divide clock by 2  */
#define   SUPC_BOD33_PSEL_DIV4_Val            _U_(0x1)                                             /**< (SUPC_BOD33) Divide clock by 4  */
#define   SUPC_BOD33_PSEL_DIV8_Val            _U_(0x2)                                             /**< (SUPC_BOD33) Divide clock by 8  */
#define   SUPC_BOD33_PSEL_DIV16_Val           _U_(0x3)                                             /**< (SUPC_BOD33) Divide clock by 16  */
#define   SUPC_BOD33_PSEL_DIV32_Val           _U_(0x4)                                             /**< (SUPC_BOD33) Divide clock by 32  */
#define   SUPC_BOD33_PSEL_DIV64_Val           _U_(0x5)                                             /**< (SUPC_BOD33) Divide clock by 64  */
#define   SUPC_BOD33_PSEL_DIV128_Val          _U_(0x6)                                             /**< (SUPC_BOD33) Divide clock by 128  */
#define   SUPC_BOD33_PSEL_DIV256_Val          _U_(0x7)                                             /**< (SUPC_BOD33) Divide clock by 256  */
#define   SUPC_BOD33_PSEL_DIV512_Val          _U_(0x8)                                             /**< (SUPC_BOD33) Divide clock by 512  */
#define   SUPC_BOD33_PSEL_DIV1024_Val         _U_(0x9)                                             /**< (SUPC_BOD33) Divide clock by 1024  */
#define   SUPC_BOD33_PSEL_DIV2048_Val         _U_(0xA)                                             /**< (SUPC_BOD33) Divide clock by 2048  */
#define   SUPC_BOD33_PSEL_DIV4096_Val         _U_(0xB)                                             /**< (SUPC_BOD33) Divide clock by 4096  */
#define   SUPC_BOD33_PSEL_DIV8192_Val         _U_(0xC)                                             /**< (SUPC_BOD33) Divide clock by 8192  */
#define   SUPC_BOD33_PSEL_DIV16384_Val        _U_(0xD)                                             /**< (SUPC_BOD33) Divide clock by 16384  */
#define   SUPC_BOD33_PSEL_DIV32768_Val        _U_(0xE)                                             /**< (SUPC_BOD33) Divide clock by 32768  */
#define   SUPC_BOD33_PSEL_DIV65536_Val        _U_(0xF)                                             /**< (SUPC_BOD33) Divide clock by 65536  */
#define SUPC_BOD33_PSEL_DIV2                  (SUPC_BOD33_PSEL_DIV2_Val << SUPC_BOD33_PSEL_Pos)    /**< (SUPC_BOD33) Divide clock by 2 Position  */
#define SUPC_BOD33_PSEL_DIV4                  (SUPC_BOD33_PSEL_DIV4_Val << SUPC_BOD33_PSEL_Pos)    /**< (SUPC_BOD33) Divide clock by 4 Position  */
#define SUPC_BOD33_PSEL_DIV8                  (SUPC_BOD33_PSEL_DIV8_Val << SUPC_BOD33_PSEL_Pos)    /**< (SUPC_BOD33) Divide clock by 8 Position  */
#define SUPC_BOD33_PSEL_DIV16                 (SUPC_BOD33_PSEL_DIV16_Val << SUPC_BOD33_PSEL_Pos)   /**< (SUPC_BOD33) Divide clock by 16 Position  */
#define SUPC_BOD33_PSEL_DIV32                 (SUPC_BOD33_PSEL_DIV32_Val << SUPC_BOD33_PSEL_Pos)   /**< (SUPC_BOD33) Divide clock by 32 Position  */
#define SUPC_BOD33_PSEL_DIV64                 (SUPC_BOD33_PSEL_DIV64_Val << SUPC_BOD33_PSEL_Pos)   /**< (SUPC_BOD33) Divide clock by 64 Position  */
#define SUPC_BOD33_PSEL_DIV128                (SUPC_BOD33_PSEL_DIV128_Val << SUPC_BOD33_PSEL_Pos)  /**< (SUPC_BOD33) Divide clock by 128 Position  */
#define SUPC_BOD33_PSEL_DIV256                (SUPC_BOD33_PSEL_DIV256_Val << SUPC_BOD33_PSEL_Pos)  /**< (SUPC_BOD33) Divide clock by 256 Position  */
#define SUPC_BOD33_PSEL_DIV512                (SUPC_BOD33_PSEL_DIV512_Val << SUPC_BOD33_PSEL_Pos)  /**< (SUPC_BOD33) Divide clock by 512 Position  */
#define SUPC_BOD33_PSEL_DIV1024               (SUPC_BOD33_PSEL_DIV1024_Val << SUPC_BOD33_PSEL_Pos) /**< (SUPC_BOD33) Divide clock by 1024 Position  */
#define SUPC_BOD33_PSEL_DIV2048               (SUPC_BOD33_PSEL_DIV2048_Val << SUPC_BOD33_PSEL_Pos) /**< (SUPC_BOD33) Divide clock by 2048 Position  */
#define SUPC_BOD33_PSEL_DIV4096               (SUPC_BOD33_PSEL_DIV4096_Val << SUPC_BOD33_PSEL_Pos) /**< (SUPC_BOD33) Divide clock by 4096 Position  */
#define SUPC_BOD33_PSEL_DIV8192               (SUPC_BOD33_PSEL_DIV8192_Val << SUPC_BOD33_PSEL_Pos) /**< (SUPC_BOD33) Divide clock by 8192 Position  */
#define SUPC_BOD33_PSEL_DIV16384              (SUPC_BOD33_PSEL_DIV16384_Val << SUPC_BOD33_PSEL_Pos) /**< (SUPC_BOD33) Divide clock by 16384 Position  */
#define SUPC_BOD33_PSEL_DIV32768              (SUPC_BOD33_PSEL_DIV32768_Val << SUPC_BOD33_PSEL_Pos) /**< (SUPC_BOD33) Divide clock by 32768 Position  */
#define SUPC_BOD33_PSEL_DIV65536              (SUPC_BOD33_PSEL_DIV65536_Val << SUPC_BOD33_PSEL_Pos) /**< (SUPC_BOD33) Divide clock by 65536 Position  */
#define SUPC_BOD33_LEVEL_Pos                  _U_(16)                                              /**< (SUPC_BOD33) Threshold Level for VDD Position */
#define SUPC_BOD33_LEVEL_Msk                  (_U_(0x3F) << SUPC_BOD33_LEVEL_Pos)                  /**< (SUPC_BOD33) Threshold Level for VDD Mask */
#define SUPC_BOD33_LEVEL(value)               (SUPC_BOD33_LEVEL_Msk & ((value) << SUPC_BOD33_LEVEL_Pos))
#define SUPC_BOD33_BKUPLEVEL_Pos              _U_(24)                                              /**< (SUPC_BOD33) Threshold Level in backup sleep mode or for VBAT Position */
#define SUPC_BOD33_BKUPLEVEL_Msk              (_U_(0x3F) << SUPC_BOD33_BKUPLEVEL_Pos)              /**< (SUPC_BOD33) Threshold Level in backup sleep mode or for VBAT Mask */
#define SUPC_BOD33_BKUPLEVEL(value)           (SUPC_BOD33_BKUPLEVEL_Msk & ((value) << SUPC_BOD33_BKUPLEVEL_Pos))
#define SUPC_BOD33_Msk                        _U_(0x3F3FF5FE)                                      /**< (SUPC_BOD33) Register Mask  */


/* -------- SUPC_BOD12 : (SUPC Offset: 0x14) (R/W 32) BOD12 Control -------- */
#define SUPC_BOD12_RESETVALUE                 _U_(0x00)                                            /**<  (SUPC_BOD12) BOD12 Control  Reset Value */

#define SUPC_BOD12_ENABLE_Pos                 _U_(1)                                               /**< (SUPC_BOD12) Enable Position */
#define SUPC_BOD12_ENABLE_Msk                 (_U_(0x1) << SUPC_BOD12_ENABLE_Pos)                  /**< (SUPC_BOD12) Enable Mask */
#define SUPC_BOD12_ENABLE(value)              (SUPC_BOD12_ENABLE_Msk & ((value) << SUPC_BOD12_ENABLE_Pos))
#define SUPC_BOD12_HYST_Pos                   _U_(2)                                               /**< (SUPC_BOD12) Hysteresis Enable Position */
#define SUPC_BOD12_HYST_Msk                   (_U_(0x1) << SUPC_BOD12_HYST_Pos)                    /**< (SUPC_BOD12) Hysteresis Enable Mask */
#define SUPC_BOD12_HYST(value)                (SUPC_BOD12_HYST_Msk & ((value) << SUPC_BOD12_HYST_Pos))
#define SUPC_BOD12_ACTION_Pos                 _U_(3)                                               /**< (SUPC_BOD12) Action when Threshold Crossed Position */
#define SUPC_BOD12_ACTION_Msk                 (_U_(0x3) << SUPC_BOD12_ACTION_Pos)                  /**< (SUPC_BOD12) Action when Threshold Crossed Mask */
#define SUPC_BOD12_ACTION(value)              (SUPC_BOD12_ACTION_Msk & ((value) << SUPC_BOD12_ACTION_Pos))
#define   SUPC_BOD12_ACTION_NONE_Val          _U_(0x0)                                             /**< (SUPC_BOD12) No action  */
#define   SUPC_BOD12_ACTION_RESET_Val         _U_(0x1)                                             /**< (SUPC_BOD12) The BOD12 generates a reset  */
#define   SUPC_BOD12_ACTION_INT_Val           _U_(0x2)                                             /**< (SUPC_BOD12) The BOD12 generates an interrupt  */
#define SUPC_BOD12_ACTION_NONE                (SUPC_BOD12_ACTION_NONE_Val << SUPC_BOD12_ACTION_Pos) /**< (SUPC_BOD12) No action Position  */
#define SUPC_BOD12_ACTION_RESET               (SUPC_BOD12_ACTION_RESET_Val << SUPC_BOD12_ACTION_Pos) /**< (SUPC_BOD12) The BOD12 generates a reset Position  */
#define SUPC_BOD12_ACTION_INT                 (SUPC_BOD12_ACTION_INT_Val << SUPC_BOD12_ACTION_Pos) /**< (SUPC_BOD12) The BOD12 generates an interrupt Position  */
#define SUPC_BOD12_STDBYCFG_Pos               _U_(5)                                               /**< (SUPC_BOD12) Configuration in Standby mode Position */
#define SUPC_BOD12_STDBYCFG_Msk               (_U_(0x1) << SUPC_BOD12_STDBYCFG_Pos)                /**< (SUPC_BOD12) Configuration in Standby mode Mask */
#define SUPC_BOD12_STDBYCFG(value)            (SUPC_BOD12_STDBYCFG_Msk & ((value) << SUPC_BOD12_STDBYCFG_Pos))
#define SUPC_BOD12_RUNSTDBY_Pos               _U_(6)                                               /**< (SUPC_BOD12) Run during Standby Position */
#define SUPC_BOD12_RUNSTDBY_Msk               (_U_(0x1) << SUPC_BOD12_RUNSTDBY_Pos)                /**< (SUPC_BOD12) Run during Standby Mask */
#define SUPC_BOD12_RUNSTDBY(value)            (SUPC_BOD12_RUNSTDBY_Msk & ((value) << SUPC_BOD12_RUNSTDBY_Pos))
#define SUPC_BOD12_ACTCFG_Pos                 _U_(8)                                               /**< (SUPC_BOD12) Configuration in Active mode Position */
#define SUPC_BOD12_ACTCFG_Msk                 (_U_(0x1) << SUPC_BOD12_ACTCFG_Pos)                  /**< (SUPC_BOD12) Configuration in Active mode Mask */
#define SUPC_BOD12_ACTCFG(value)              (SUPC_BOD12_ACTCFG_Msk & ((value) << SUPC_BOD12_ACTCFG_Pos))
#define SUPC_BOD12_PSEL_Pos                   _U_(12)                                              /**< (SUPC_BOD12) Prescaler Select Position */
#define SUPC_BOD12_PSEL_Msk                   (_U_(0xF) << SUPC_BOD12_PSEL_Pos)                    /**< (SUPC_BOD12) Prescaler Select Mask */
#define SUPC_BOD12_PSEL(value)                (SUPC_BOD12_PSEL_Msk & ((value) << SUPC_BOD12_PSEL_Pos))
#define   SUPC_BOD12_PSEL_DIV2_Val            _U_(0x0)                                             /**< (SUPC_BOD12) Divide clock by 2  */
#define   SUPC_BOD12_PSEL_DIV4_Val            _U_(0x1)                                             /**< (SUPC_BOD12) Divide clock by 4  */
#define   SUPC_BOD12_PSEL_DIV8_Val            _U_(0x2)                                             /**< (SUPC_BOD12) Divide clock by 8  */
#define   SUPC_BOD12_PSEL_DIV16_Val           _U_(0x3)                                             /**< (SUPC_BOD12) Divide clock by 16  */
#define   SUPC_BOD12_PSEL_DIV32_Val           _U_(0x4)                                             /**< (SUPC_BOD12) Divide clock by 32  */
#define   SUPC_BOD12_PSEL_DIV64_Val           _U_(0x5)                                             /**< (SUPC_BOD12) Divide clock by 64  */
#define   SUPC_BOD12_PSEL_DIV128_Val          _U_(0x6)                                             /**< (SUPC_BOD12) Divide clock by 128  */
#define   SUPC_BOD12_PSEL_DIV256_Val          _U_(0x7)                                             /**< (SUPC_BOD12) Divide clock by 256  */
#define   SUPC_BOD12_PSEL_DIV512_Val          _U_(0x8)                                             /**< (SUPC_BOD12) Divide clock by 512  */
#define   SUPC_BOD12_PSEL_DIV1024_Val         _U_(0x9)                                             /**< (SUPC_BOD12) Divide clock by 1024  */
#define   SUPC_BOD12_PSEL_DIV2048_Val         _U_(0xA)                                             /**< (SUPC_BOD12) Divide clock by 2048  */
#define   SUPC_BOD12_PSEL_DIV4096_Val         _U_(0xB)                                             /**< (SUPC_BOD12) Divide clock by 4096  */
#define   SUPC_BOD12_PSEL_DIV8192_Val         _U_(0xC)                                             /**< (SUPC_BOD12) Divide clock by 8192  */
#define   SUPC_BOD12_PSEL_DIV16384_Val        _U_(0xD)                                             /**< (SUPC_BOD12) Divide clock by 16384  */
#define   SUPC_BOD12_PSEL_DIV32768_Val        _U_(0xE)                                             /**< (SUPC_BOD12) Divide clock by 32768  */
#define   SUPC_BOD12_PSEL_DIV65536_Val        _U_(0xF)                                             /**< (SUPC_BOD12) Divide clock by 65536  */
#define SUPC_BOD12_PSEL_DIV2                  (SUPC_BOD12_PSEL_DIV2_Val << SUPC_BOD12_PSEL_Pos)    /**< (SUPC_BOD12) Divide clock by 2 Position  */
#define SUPC_BOD12_PSEL_DIV4                  (SUPC_BOD12_PSEL_DIV4_Val << SUPC_BOD12_PSEL_Pos)    /**< (SUPC_BOD12) Divide clock by 4 Position  */
#define SUPC_BOD12_PSEL_DIV8                  (SUPC_BOD12_PSEL_DIV8_Val << SUPC_BOD12_PSEL_Pos)    /**< (SUPC_BOD12) Divide clock by 8 Position  */
#define SUPC_BOD12_PSEL_DIV16                 (SUPC_BOD12_PSEL_DIV16_Val << SUPC_BOD12_PSEL_Pos)   /**< (SUPC_BOD12) Divide clock by 16 Position  */
#define SUPC_BOD12_PSEL_DIV32                 (SUPC_BOD12_PSEL_DIV32_Val << SUPC_BOD12_PSEL_Pos)   /**< (SUPC_BOD12) Divide clock by 32 Position  */
#define SUPC_BOD12_PSEL_DIV64                 (SUPC_BOD12_PSEL_DIV64_Val << SUPC_BOD12_PSEL_Pos)   /**< (SUPC_BOD12) Divide clock by 64 Position  */
#define SUPC_BOD12_PSEL_DIV128                (SUPC_BOD12_PSEL_DIV128_Val << SUPC_BOD12_PSEL_Pos)  /**< (SUPC_BOD12) Divide clock by 128 Position  */
#define SUPC_BOD12_PSEL_DIV256                (SUPC_BOD12_PSEL_DIV256_Val << SUPC_BOD12_PSEL_Pos)  /**< (SUPC_BOD12) Divide clock by 256 Position  */
#define SUPC_BOD12_PSEL_DIV512                (SUPC_BOD12_PSEL_DIV512_Val << SUPC_BOD12_PSEL_Pos)  /**< (SUPC_BOD12) Divide clock by 512 Position  */
#define SUPC_BOD12_PSEL_DIV1024               (SUPC_BOD12_PSEL_DIV1024_Val << SUPC_BOD12_PSEL_Pos) /**< (SUPC_BOD12) Divide clock by 1024 Position  */
#define SUPC_BOD12_PSEL_DIV2048               (SUPC_BOD12_PSEL_DIV2048_Val << SUPC_BOD12_PSEL_Pos) /**< (SUPC_BOD12) Divide clock by 2048 Position  */
#define SUPC_BOD12_PSEL_DIV4096               (SUPC_BOD12_PSEL_DIV4096_Val << SUPC_BOD12_PSEL_Pos) /**< (SUPC_BOD12) Divide clock by 4096 Position  */
#define SUPC_BOD12_PSEL_DIV8192               (SUPC_BOD12_PSEL_DIV8192_Val << SUPC_BOD12_PSEL_Pos) /**< (SUPC_BOD12) Divide clock by 8192 Position  */
#define SUPC_BOD12_PSEL_DIV16384              (SUPC_BOD12_PSEL_DIV16384_Val << SUPC_BOD12_PSEL_Pos) /**< (SUPC_BOD12) Divide clock by 16384 Position  */
#define SUPC_BOD12_PSEL_DIV32768              (SUPC_BOD12_PSEL_DIV32768_Val << SUPC_BOD12_PSEL_Pos) /**< (SUPC_BOD12) Divide clock by 32768 Position  */
#define SUPC_BOD12_PSEL_DIV65536              (SUPC_BOD12_PSEL_DIV65536_Val << SUPC_BOD12_PSEL_Pos) /**< (SUPC_BOD12) Divide clock by 65536 Position  */
#define SUPC_BOD12_LEVEL_Pos                  _U_(16)                                              /**< (SUPC_BOD12) Threshold Level Position */
#define SUPC_BOD12_LEVEL_Msk                  (_U_(0x3F) << SUPC_BOD12_LEVEL_Pos)                  /**< (SUPC_BOD12) Threshold Level Mask */
#define SUPC_BOD12_LEVEL(value)               (SUPC_BOD12_LEVEL_Msk & ((value) << SUPC_BOD12_LEVEL_Pos))
#define SUPC_BOD12_Msk                        _U_(0x003FF17E)                                      /**< (SUPC_BOD12) Register Mask  */


/* -------- SUPC_VREG : (SUPC Offset: 0x18) (R/W 32) VREG Control -------- */
#define SUPC_VREG_RESETVALUE                  _U_(0x00)                                            /**<  (SUPC_VREG) VREG Control  Reset Value */

#define SUPC_VREG_ENABLE_Pos                  _U_(1)                                               /**< (SUPC_VREG) Enable Position */
#define SUPC_VREG_ENABLE_Msk                  (_U_(0x1) << SUPC_VREG_ENABLE_Pos)                   /**< (SUPC_VREG) Enable Mask */
#define SUPC_VREG_ENABLE(value)               (SUPC_VREG_ENABLE_Msk & ((value) << SUPC_VREG_ENABLE_Pos))
#define SUPC_VREG_SEL_Pos                     _U_(2)                                               /**< (SUPC_VREG) Voltage Regulator Selection in active mode Position */
#define SUPC_VREG_SEL_Msk                     (_U_(0x3) << SUPC_VREG_SEL_Pos)                      /**< (SUPC_VREG) Voltage Regulator Selection in active mode Mask */
#define SUPC_VREG_SEL(value)                  (SUPC_VREG_SEL_Msk & ((value) << SUPC_VREG_SEL_Pos))
#define   SUPC_VREG_SEL_LDO_Val               _U_(0x0)                                             /**< (SUPC_VREG) LDO selection  */
#define   SUPC_VREG_SEL_BUCK_Val              _U_(0x1)                                             /**< (SUPC_VREG) Buck selection  */
#define   SUPC_VREG_SEL_SCVREG_Val            _U_(0x2)                                             /**< (SUPC_VREG) Switched Cap selection  */
#define SUPC_VREG_SEL_LDO                     (SUPC_VREG_SEL_LDO_Val << SUPC_VREG_SEL_Pos)         /**< (SUPC_VREG) LDO selection Position  */
#define SUPC_VREG_SEL_BUCK                    (SUPC_VREG_SEL_BUCK_Val << SUPC_VREG_SEL_Pos)        /**< (SUPC_VREG) Buck selection Position  */
#define SUPC_VREG_SEL_SCVREG                  (SUPC_VREG_SEL_SCVREG_Val << SUPC_VREG_SEL_Pos)      /**< (SUPC_VREG) Switched Cap selection Position  */
#define SUPC_VREG_STDBYPL0_Pos                _U_(5)                                               /**< (SUPC_VREG) Standby in PL0 Position */
#define SUPC_VREG_STDBYPL0_Msk                (_U_(0x1) << SUPC_VREG_STDBYPL0_Pos)                 /**< (SUPC_VREG) Standby in PL0 Mask */
#define SUPC_VREG_STDBYPL0(value)             (SUPC_VREG_STDBYPL0_Msk & ((value) << SUPC_VREG_STDBYPL0_Pos))
#define SUPC_VREG_RUNSTDBY_Pos                _U_(6)                                               /**< (SUPC_VREG) Run during Standby Position */
#define SUPC_VREG_RUNSTDBY_Msk                (_U_(0x1) << SUPC_VREG_RUNSTDBY_Pos)                 /**< (SUPC_VREG) Run during Standby Mask */
#define SUPC_VREG_RUNSTDBY(value)             (SUPC_VREG_RUNSTDBY_Msk & ((value) << SUPC_VREG_RUNSTDBY_Pos))
#define SUPC_VREG_LPEFF_Pos                   _U_(8)                                               /**< (SUPC_VREG) Low Power Efficiency Position */
#define SUPC_VREG_LPEFF_Msk                   (_U_(0x1) << SUPC_VREG_LPEFF_Pos)                    /**< (SUPC_VREG) Low Power Efficiency Mask */
#define SUPC_VREG_LPEFF(value)                (SUPC_VREG_LPEFF_Msk & ((value) << SUPC_VREG_LPEFF_Pos))
#define SUPC_VREG_VSVSTEP_Pos                 _U_(16)                                              /**< (SUPC_VREG) Voltage Scaling Voltage Step Position */
#define SUPC_VREG_VSVSTEP_Msk                 (_U_(0xF) << SUPC_VREG_VSVSTEP_Pos)                  /**< (SUPC_VREG) Voltage Scaling Voltage Step Mask */
#define SUPC_VREG_VSVSTEP(value)              (SUPC_VREG_VSVSTEP_Msk & ((value) << SUPC_VREG_VSVSTEP_Pos))
#define SUPC_VREG_VSPER_Pos                   _U_(24)                                              /**< (SUPC_VREG) Voltage Scaling Period Position */
#define SUPC_VREG_VSPER_Msk                   (_U_(0xFF) << SUPC_VREG_VSPER_Pos)                   /**< (SUPC_VREG) Voltage Scaling Period Mask */
#define SUPC_VREG_VSPER(value)                (SUPC_VREG_VSPER_Msk & ((value) << SUPC_VREG_VSPER_Pos))
#define SUPC_VREG_Msk                         _U_(0xFF0F016E)                                      /**< (SUPC_VREG) Register Mask  */

#define SUPC_VREG_STDBYPL_Pos                 _U_(5)                                               /**< (SUPC_VREG Position) Standby in PLx */
#define SUPC_VREG_STDBYPL_Msk                 (_U_(0x1) << SUPC_VREG_STDBYPL_Pos)                  /**< (SUPC_VREG Mask) STDBYPL */
#define SUPC_VREG_STDBYPL(value)              (SUPC_VREG_STDBYPL_Msk & ((value) << SUPC_VREG_STDBYPL_Pos)) 

/* -------- SUPC_VREF : (SUPC Offset: 0x1C) (R/W 32) VREF Control -------- */
#define SUPC_VREF_RESETVALUE                  _U_(0x00)                                            /**<  (SUPC_VREF) VREF Control  Reset Value */

#define SUPC_VREF_TSEN_Pos                    _U_(1)                                               /**< (SUPC_VREF) Temperature Sensor Output Enable Position */
#define SUPC_VREF_TSEN_Msk                    (_U_(0x1) << SUPC_VREF_TSEN_Pos)                     /**< (SUPC_VREF) Temperature Sensor Output Enable Mask */
#define SUPC_VREF_TSEN(value)                 (SUPC_VREF_TSEN_Msk & ((value) << SUPC_VREF_TSEN_Pos))
#define SUPC_VREF_VREFOE_Pos                  _U_(2)                                               /**< (SUPC_VREF) Voltage Reference Output Enable Position */
#define SUPC_VREF_VREFOE_Msk                  (_U_(0x1) << SUPC_VREF_VREFOE_Pos)                   /**< (SUPC_VREF) Voltage Reference Output Enable Mask */
#define SUPC_VREF_VREFOE(value)               (SUPC_VREF_VREFOE_Msk & ((value) << SUPC_VREF_VREFOE_Pos))
#define SUPC_VREF_RUNSTDBY_Pos                _U_(6)                                               /**< (SUPC_VREF) Run during Standby Position */
#define SUPC_VREF_RUNSTDBY_Msk                (_U_(0x1) << SUPC_VREF_RUNSTDBY_Pos)                 /**< (SUPC_VREF) Run during Standby Mask */
#define SUPC_VREF_RUNSTDBY(value)             (SUPC_VREF_RUNSTDBY_Msk & ((value) << SUPC_VREF_RUNSTDBY_Pos))
#define SUPC_VREF_ONDEMAND_Pos                _U_(7)                                               /**< (SUPC_VREF) On Demand Contrl Position */
#define SUPC_VREF_ONDEMAND_Msk                (_U_(0x1) << SUPC_VREF_ONDEMAND_Pos)                 /**< (SUPC_VREF) On Demand Contrl Mask */
#define SUPC_VREF_ONDEMAND(value)             (SUPC_VREF_ONDEMAND_Msk & ((value) << SUPC_VREF_ONDEMAND_Pos))
#define SUPC_VREF_SEL_Pos                     _U_(16)                                              /**< (SUPC_VREF) Voltage Reference Selection Position */
#define SUPC_VREF_SEL_Msk                     (_U_(0xF) << SUPC_VREF_SEL_Pos)                      /**< (SUPC_VREF) Voltage Reference Selection Mask */
#define SUPC_VREF_SEL(value)                  (SUPC_VREF_SEL_Msk & ((value) << SUPC_VREF_SEL_Pos))
#define   SUPC_VREF_SEL_1V0_Val               _U_(0x0)                                             /**< (SUPC_VREF) 1.0V voltage reference typical value  */
#define   SUPC_VREF_SEL_1V1_Val               _U_(0x1)                                             /**< (SUPC_VREF) 1.1V voltage reference typical value  */
#define   SUPC_VREF_SEL_1V2_Val               _U_(0x2)                                             /**< (SUPC_VREF) 1.2V voltage reference typical value  */
#define   SUPC_VREF_SEL_1V25_Val              _U_(0x3)                                             /**< (SUPC_VREF) 1.25V voltage reference typical value  */
#define   SUPC_VREF_SEL_2V0_Val               _U_(0x4)                                             /**< (SUPC_VREF) 2.0V voltage reference typical value  */
#define   SUPC_VREF_SEL_2V2_Val               _U_(0x5)                                             /**< (SUPC_VREF) 2.2V voltage reference typical value  */
#define   SUPC_VREF_SEL_2V4_Val               _U_(0x6)                                             /**< (SUPC_VREF) 2.4V voltage reference typical value  */
#define   SUPC_VREF_SEL_2V5_Val               _U_(0x7)                                             /**< (SUPC_VREF) 2.5V voltage reference typical value  */
#define SUPC_VREF_SEL_1V0                     (SUPC_VREF_SEL_1V0_Val << SUPC_VREF_SEL_Pos)         /**< (SUPC_VREF) 1.0V voltage reference typical value Position  */
#define SUPC_VREF_SEL_1V1                     (SUPC_VREF_SEL_1V1_Val << SUPC_VREF_SEL_Pos)         /**< (SUPC_VREF) 1.1V voltage reference typical value Position  */
#define SUPC_VREF_SEL_1V2                     (SUPC_VREF_SEL_1V2_Val << SUPC_VREF_SEL_Pos)         /**< (SUPC_VREF) 1.2V voltage reference typical value Position  */
#define SUPC_VREF_SEL_1V25                    (SUPC_VREF_SEL_1V25_Val << SUPC_VREF_SEL_Pos)        /**< (SUPC_VREF) 1.25V voltage reference typical value Position  */
#define SUPC_VREF_SEL_2V0                     (SUPC_VREF_SEL_2V0_Val << SUPC_VREF_SEL_Pos)         /**< (SUPC_VREF) 2.0V voltage reference typical value Position  */
#define SUPC_VREF_SEL_2V2                     (SUPC_VREF_SEL_2V2_Val << SUPC_VREF_SEL_Pos)         /**< (SUPC_VREF) 2.2V voltage reference typical value Position  */
#define SUPC_VREF_SEL_2V4                     (SUPC_VREF_SEL_2V4_Val << SUPC_VREF_SEL_Pos)         /**< (SUPC_VREF) 2.4V voltage reference typical value Position  */
#define SUPC_VREF_SEL_2V5                     (SUPC_VREF_SEL_2V5_Val << SUPC_VREF_SEL_Pos)         /**< (SUPC_VREF) 2.5V voltage reference typical value Position  */
#define SUPC_VREF_Msk                         _U_(0x000F00C6)                                      /**< (SUPC_VREF) Register Mask  */


/* -------- SUPC_BBPS : (SUPC Offset: 0x20) (R/W 32) Battery Backup Power Switch -------- */
#define SUPC_BBPS_RESETVALUE                  _U_(0x00)                                            /**<  (SUPC_BBPS) Battery Backup Power Switch  Reset Value */

#define SUPC_BBPS_CONF_Pos                    _U_(0)                                               /**< (SUPC_BBPS) Battery Backup Configuration Position */
#define SUPC_BBPS_CONF_Msk                    (_U_(0x3) << SUPC_BBPS_CONF_Pos)                     /**< (SUPC_BBPS) Battery Backup Configuration Mask */
#define SUPC_BBPS_CONF(value)                 (SUPC_BBPS_CONF_Msk & ((value) << SUPC_BBPS_CONF_Pos))
#define   SUPC_BBPS_CONF_NONE_Val             _U_(0x0)                                             /**< (SUPC_BBPS) The backup domain is always supplied by main power  */
#define   SUPC_BBPS_CONF_APWS_Val             _U_(0x1)                                             /**< (SUPC_BBPS) The power switch is handled by the automatic power switch  */
#define   SUPC_BBPS_CONF_FORCED_Val           _U_(0x2)                                             /**< (SUPC_BBPS) The backup domain is always supplied by battery backup power  */
#define   SUPC_BBPS_CONF_BOD33_Val            _U_(0x3)                                             /**< (SUPC_BBPS) The power switch is handled by the BOD33  */
#define SUPC_BBPS_CONF_NONE                   (SUPC_BBPS_CONF_NONE_Val << SUPC_BBPS_CONF_Pos)      /**< (SUPC_BBPS) The backup domain is always supplied by main power Position  */
#define SUPC_BBPS_CONF_APWS                   (SUPC_BBPS_CONF_APWS_Val << SUPC_BBPS_CONF_Pos)      /**< (SUPC_BBPS) The power switch is handled by the automatic power switch Position  */
#define SUPC_BBPS_CONF_FORCED                 (SUPC_BBPS_CONF_FORCED_Val << SUPC_BBPS_CONF_Pos)    /**< (SUPC_BBPS) The backup domain is always supplied by battery backup power Position  */
#define SUPC_BBPS_CONF_BOD33                  (SUPC_BBPS_CONF_BOD33_Val << SUPC_BBPS_CONF_Pos)     /**< (SUPC_BBPS) The power switch is handled by the BOD33 Position  */
#define SUPC_BBPS_WAKEEN_Pos                  _U_(2)                                               /**< (SUPC_BBPS) Wake Enable Position */
#define SUPC_BBPS_WAKEEN_Msk                  (_U_(0x1) << SUPC_BBPS_WAKEEN_Pos)                   /**< (SUPC_BBPS) Wake Enable Mask */
#define SUPC_BBPS_WAKEEN(value)               (SUPC_BBPS_WAKEEN_Msk & ((value) << SUPC_BBPS_WAKEEN_Pos))
#define SUPC_BBPS_PSOKEN_Pos                  _U_(3)                                               /**< (SUPC_BBPS) Power Supply OK Enable Position */
#define SUPC_BBPS_PSOKEN_Msk                  (_U_(0x1) << SUPC_BBPS_PSOKEN_Pos)                   /**< (SUPC_BBPS) Power Supply OK Enable Mask */
#define SUPC_BBPS_PSOKEN(value)               (SUPC_BBPS_PSOKEN_Msk & ((value) << SUPC_BBPS_PSOKEN_Pos))
#define SUPC_BBPS_Msk                         _U_(0x0000000F)                                      /**< (SUPC_BBPS) Register Mask  */


/* -------- SUPC_BKOUT : (SUPC Offset: 0x24) (R/W 32) Backup Output Control -------- */
#define SUPC_BKOUT_RESETVALUE                 _U_(0x00)                                            /**<  (SUPC_BKOUT) Backup Output Control  Reset Value */

#define SUPC_BKOUT_ENOUT0_Pos                 _U_(0)                                               /**< (SUPC_BKOUT) Enable OUT0 Position */
#define SUPC_BKOUT_ENOUT0_Msk                 (_U_(0x1) << SUPC_BKOUT_ENOUT0_Pos)                  /**< (SUPC_BKOUT) Enable OUT0 Mask */
#define SUPC_BKOUT_ENOUT0(value)              (SUPC_BKOUT_ENOUT0_Msk & ((value) << SUPC_BKOUT_ENOUT0_Pos))
#define SUPC_BKOUT_ENOUT1_Pos                 _U_(1)                                               /**< (SUPC_BKOUT) Enable OUT1 Position */
#define SUPC_BKOUT_ENOUT1_Msk                 (_U_(0x1) << SUPC_BKOUT_ENOUT1_Pos)                  /**< (SUPC_BKOUT) Enable OUT1 Mask */
#define SUPC_BKOUT_ENOUT1(value)              (SUPC_BKOUT_ENOUT1_Msk & ((value) << SUPC_BKOUT_ENOUT1_Pos))
#define SUPC_BKOUT_CLROUT0_Pos                _U_(8)                                               /**< (SUPC_BKOUT) Clear OUT0 Position */
#define SUPC_BKOUT_CLROUT0_Msk                (_U_(0x1) << SUPC_BKOUT_CLROUT0_Pos)                 /**< (SUPC_BKOUT) Clear OUT0 Mask */
#define SUPC_BKOUT_CLROUT0(value)             (SUPC_BKOUT_CLROUT0_Msk & ((value) << SUPC_BKOUT_CLROUT0_Pos))
#define SUPC_BKOUT_CLROUT1_Pos                _U_(9)                                               /**< (SUPC_BKOUT) Clear OUT1 Position */
#define SUPC_BKOUT_CLROUT1_Msk                (_U_(0x1) << SUPC_BKOUT_CLROUT1_Pos)                 /**< (SUPC_BKOUT) Clear OUT1 Mask */
#define SUPC_BKOUT_CLROUT1(value)             (SUPC_BKOUT_CLROUT1_Msk & ((value) << SUPC_BKOUT_CLROUT1_Pos))
#define SUPC_BKOUT_SETOUT0_Pos                _U_(16)                                              /**< (SUPC_BKOUT) Set OUT0 Position */
#define SUPC_BKOUT_SETOUT0_Msk                (_U_(0x1) << SUPC_BKOUT_SETOUT0_Pos)                 /**< (SUPC_BKOUT) Set OUT0 Mask */
#define SUPC_BKOUT_SETOUT0(value)             (SUPC_BKOUT_SETOUT0_Msk & ((value) << SUPC_BKOUT_SETOUT0_Pos))
#define SUPC_BKOUT_SETOUT1_Pos                _U_(17)                                              /**< (SUPC_BKOUT) Set OUT1 Position */
#define SUPC_BKOUT_SETOUT1_Msk                (_U_(0x1) << SUPC_BKOUT_SETOUT1_Pos)                 /**< (SUPC_BKOUT) Set OUT1 Mask */
#define SUPC_BKOUT_SETOUT1(value)             (SUPC_BKOUT_SETOUT1_Msk & ((value) << SUPC_BKOUT_SETOUT1_Pos))
#define SUPC_BKOUT_RTCTGLOUT0_Pos             _U_(24)                                              /**< (SUPC_BKOUT) RTC Toggle OUT0 Position */
#define SUPC_BKOUT_RTCTGLOUT0_Msk             (_U_(0x1) << SUPC_BKOUT_RTCTGLOUT0_Pos)              /**< (SUPC_BKOUT) RTC Toggle OUT0 Mask */
#define SUPC_BKOUT_RTCTGLOUT0(value)          (SUPC_BKOUT_RTCTGLOUT0_Msk & ((value) << SUPC_BKOUT_RTCTGLOUT0_Pos))
#define SUPC_BKOUT_RTCTGLOUT1_Pos             _U_(25)                                              /**< (SUPC_BKOUT) RTC Toggle OUT1 Position */
#define SUPC_BKOUT_RTCTGLOUT1_Msk             (_U_(0x1) << SUPC_BKOUT_RTCTGLOUT1_Pos)              /**< (SUPC_BKOUT) RTC Toggle OUT1 Mask */
#define SUPC_BKOUT_RTCTGLOUT1(value)          (SUPC_BKOUT_RTCTGLOUT1_Msk & ((value) << SUPC_BKOUT_RTCTGLOUT1_Pos))
#define SUPC_BKOUT_Msk                        _U_(0x03030303)                                      /**< (SUPC_BKOUT) Register Mask  */

#define SUPC_BKOUT_ENOUT_Pos                  _U_(0)                                               /**< (SUPC_BKOUT Position) Enable OUTx */
#define SUPC_BKOUT_ENOUT_Msk                  (_U_(0x3) << SUPC_BKOUT_ENOUT_Pos)                   /**< (SUPC_BKOUT Mask) ENOUT */
#define SUPC_BKOUT_ENOUT(value)               (SUPC_BKOUT_ENOUT_Msk & ((value) << SUPC_BKOUT_ENOUT_Pos)) 
#define SUPC_BKOUT_CLROUT_Pos                 _U_(8)                                               /**< (SUPC_BKOUT Position) Clear OUTx */
#define SUPC_BKOUT_CLROUT_Msk                 (_U_(0x3) << SUPC_BKOUT_CLROUT_Pos)                  /**< (SUPC_BKOUT Mask) CLROUT */
#define SUPC_BKOUT_CLROUT(value)              (SUPC_BKOUT_CLROUT_Msk & ((value) << SUPC_BKOUT_CLROUT_Pos)) 
#define SUPC_BKOUT_SETOUT_Pos                 _U_(16)                                              /**< (SUPC_BKOUT Position) Set OUTx */
#define SUPC_BKOUT_SETOUT_Msk                 (_U_(0x3) << SUPC_BKOUT_SETOUT_Pos)                  /**< (SUPC_BKOUT Mask) SETOUT */
#define SUPC_BKOUT_SETOUT(value)              (SUPC_BKOUT_SETOUT_Msk & ((value) << SUPC_BKOUT_SETOUT_Pos)) 
#define SUPC_BKOUT_RTCTGLOUT_Pos              _U_(24)                                              /**< (SUPC_BKOUT Position) RTC Toggle OUTx */
#define SUPC_BKOUT_RTCTGLOUT_Msk              (_U_(0x3) << SUPC_BKOUT_RTCTGLOUT_Pos)               /**< (SUPC_BKOUT Mask) RTCTGLOUT */
#define SUPC_BKOUT_RTCTGLOUT(value)           (SUPC_BKOUT_RTCTGLOUT_Msk & ((value) << SUPC_BKOUT_RTCTGLOUT_Pos)) 

/* -------- SUPC_BKIN : (SUPC Offset: 0x28) ( R/ 32) Backup Input Control -------- */
#define SUPC_BKIN_RESETVALUE                  _U_(0x00)                                            /**<  (SUPC_BKIN) Backup Input Control  Reset Value */

#define SUPC_BKIN_BKIN0_Pos                   _U_(0)                                               /**< (SUPC_BKIN) Backup Input 0 Position */
#define SUPC_BKIN_BKIN0_Msk                   (_U_(0x1) << SUPC_BKIN_BKIN0_Pos)                    /**< (SUPC_BKIN) Backup Input 0 Mask */
#define SUPC_BKIN_BKIN0(value)                (SUPC_BKIN_BKIN0_Msk & ((value) << SUPC_BKIN_BKIN0_Pos))
#define SUPC_BKIN_BKIN1_Pos                   _U_(1)                                               /**< (SUPC_BKIN) Backup Input 1 Position */
#define SUPC_BKIN_BKIN1_Msk                   (_U_(0x1) << SUPC_BKIN_BKIN1_Pos)                    /**< (SUPC_BKIN) Backup Input 1 Mask */
#define SUPC_BKIN_BKIN1(value)                (SUPC_BKIN_BKIN1_Msk & ((value) << SUPC_BKIN_BKIN1_Pos))
#define SUPC_BKIN_Msk                         _U_(0x00000003)                                      /**< (SUPC_BKIN) Register Mask  */

#define SUPC_BKIN_BKIN_Pos                    _U_(0)                                               /**< (SUPC_BKIN Position) Backup Input x */
#define SUPC_BKIN_BKIN_Msk                    (_U_(0x3) << SUPC_BKIN_BKIN_Pos)                     /**< (SUPC_BKIN Mask) BKIN */
#define SUPC_BKIN_BKIN(value)                 (SUPC_BKIN_BKIN_Msk & ((value) << SUPC_BKIN_BKIN_Pos)) 

/** \brief SUPC register offsets definitions */
#define SUPC_INTENCLR_REG_OFST         (0x00)              /**< (SUPC_INTENCLR) Interrupt Enable Clear Offset */
#define SUPC_INTENSET_REG_OFST         (0x04)              /**< (SUPC_INTENSET) Interrupt Enable Set Offset */
#define SUPC_INTFLAG_REG_OFST          (0x08)              /**< (SUPC_INTFLAG) Interrupt Flag Status and Clear Offset */
#define SUPC_STATUS_REG_OFST           (0x0C)              /**< (SUPC_STATUS) Power and Clocks Status Offset */
#define SUPC_BOD33_REG_OFST            (0x10)              /**< (SUPC_BOD33) BOD33 Control Offset */
#define SUPC_BOD12_REG_OFST            (0x14)              /**< (SUPC_BOD12) BOD12 Control Offset */
#define SUPC_VREG_REG_OFST             (0x18)              /**< (SUPC_VREG) VREG Control Offset */
#define SUPC_VREF_REG_OFST             (0x1C)              /**< (SUPC_VREF) VREF Control Offset */
#define SUPC_BBPS_REG_OFST             (0x20)              /**< (SUPC_BBPS) Battery Backup Power Switch Offset */
#define SUPC_BKOUT_REG_OFST            (0x24)              /**< (SUPC_BKOUT) Backup Output Control Offset */
#define SUPC_BKIN_REG_OFST             (0x28)              /**< (SUPC_BKIN) Backup Input Control Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief SUPC register API structure */
typedef struct
{  /* Supply Controller */
  __IO  uint32_t                       SUPC_INTENCLR;      /**< Offset: 0x00 (R/W  32) Interrupt Enable Clear */
  __IO  uint32_t                       SUPC_INTENSET;      /**< Offset: 0x04 (R/W  32) Interrupt Enable Set */
  __IO  uint32_t                       SUPC_INTFLAG;       /**< Offset: 0x08 (R/W  32) Interrupt Flag Status and Clear */
  __I   uint32_t                       SUPC_STATUS;        /**< Offset: 0x0C (R/   32) Power and Clocks Status */
  __IO  uint32_t                       SUPC_BOD33;         /**< Offset: 0x10 (R/W  32) BOD33 Control */
  __IO  uint32_t                       SUPC_BOD12;         /**< Offset: 0x14 (R/W  32) BOD12 Control */
  __IO  uint32_t                       SUPC_VREG;          /**< Offset: 0x18 (R/W  32) VREG Control */
  __IO  uint32_t                       SUPC_VREF;          /**< Offset: 0x1C (R/W  32) VREF Control */
  __IO  uint32_t                       SUPC_BBPS;          /**< Offset: 0x20 (R/W  32) Battery Backup Power Switch */
  __IO  uint32_t                       SUPC_BKOUT;         /**< Offset: 0x24 (R/W  32) Backup Output Control */
  __I   uint32_t                       SUPC_BKIN;          /**< Offset: 0x28 (R/   32) Backup Input Control */
} supc_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAML21_SUPC_COMPONENT_H_ */
