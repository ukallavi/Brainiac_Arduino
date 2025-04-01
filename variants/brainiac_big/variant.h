/*
  Copyright (c) 2014-2015 Arduino LLC.  All right reserved.
  Copyright (c) 2016 Sandeep Mistry All right reserved.
  Copyright (c) 2017 Adafruit Industries.  All rights reserved.
  Copyright (c) 2025, UKallavi (ukallavi.com)

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

#ifndef _VARIANT_BRAINIAC_BIG_
#define _VARIANT_BRAINIAC_BIG_

#include "nrf.h"
#include "stdint.h"

// Number of pins defined in PinDescription array
#define PINS_COUNT           (28)
#define NUM_DIGITAL_PINS     (20) // BATTERY_CHRG is used by the charging IC to indicate to the MCU whether the battery is charging. Input only.
#define NUM_ANALOG_INPUTS    (8) // BAT_ADC1 is used for battery, 806K/2M Voltage divider with 1nF capacitor across the 2M resistor.
#define NUM_ANALOG_OUTPUTS   (0)

// Analog pin mapping
#define PIN_A1          (0)  // P0.03 / Low frequency I/O only
#define PIN_A2          (1)  // P0.02 / Low frequency I/O only
#define PIN_A3          (2)  // P0.28 / Low frequency I/O only
#define PIN_A4          (3)  // P0.29 / Low frequency I/O only
#define PIN_A5          (4)  // P0.30 / Low frequency I/O only
#define PIN_A5          (5)  // P0.31 / Low frequency I/O only
#define PIN_A7          (6)  // P0.04 / High frequency I/O Ok
#define ADC_RESOLUTION  14

static const uint8_t A1 = PIN_A1;
static const uint8_t A2 = PIN_A2;
static const uint8_t A3 = PIN_A3;
static const uint8_t A4 = PIN_A4;
static const uint8_t A5 = PIN_A5;
static const uint8_t A6 = PIN_A6;
static const uint8_t A7 = PIN_A7;

// Digital pin mapping
#define PIN_D1          (7)   // P0.18 / Reset / QSPI, High Frequency I/O Ok
#define PIN_D2          (8)   // P0.22 / QSPI, High Frequency I/O Ok
#define PIN_D3          (9)   // P1.00 / Trace buffer 0, High Frequency I/O Ok
#define PIN_D4          (10)  // P1.03 / Low frequency I/O only
#define PIN_D5          (11)  // P1.01 / Low frequency I/O only
#define PIN_D6          (12)  // P1.02 / Low frequency I/O only
#define PIN_D7          (13)  // P1.04 / Low frequency I/O only
#define PIN_D8          (14)  // P1.06 / Low frequency I/O only
#define PIN_D9          (15)  // P0.09 / NFC1 / NFC antenna connection, Low frequency I/O only
#define PIN_D10         (16)  // P0.10 / NFC2 / NFC antenna connection, Low frequency I/O only
#define PIN_D11         (17)  // P1.15 / Low frequency I/O only
#define PIN_D12         (18)  // P1.13 / Low frequency I/O only
#define PIN_D13         (19)  // P1.11 / Low frequency I/O only
#define PIN_D14         (20)  // P1.10 / Low frequency I/O only
#define PIN_D15         (21)  // P0.21 / QSPI, High Frequency I/O Ok
#define PIN_D16         (22)  // P0.23 / QSPI, High Frequency I/O Ok
#define PIN_D17         (23)  // P0.12 / Trace buffer 1, High Frequency I/O Ok
#define PIN_D18         (24)  // P1.09 / QSPI, High Frequency I/O Ok
#define PIN_D19         (25)  // P0.07 / Trace buffer 3, High Frequency I/O Ok

// Reset pin
#define PIN_RESET       (PIN_D1) // P0.18 - D1

#define PIN_SERIAL1_RX       (0)
#define PIN_SERIAL1_TX       (1)

// SPI Interfaces
 #define SPI_INTERFACES_COUNT 2
 
 // nRF52840 has only one SPIM3 runing at highspeed 32Mhz
 // This assign SPIM3 to either: SPI (0), SPI1 (1).
 // If not defined, default to 0 or SPI.
 #define SPI_32MHZ_INTERFACE  1

#define PIN_SPI_MOSI        PIN_D15 // P0.21 / QSPI, High Frequency I/O Ok
#define PIN_SPI_MISO        PIN_D16 // P0.23 / QSPI, High Frequency I/O Ok
#define PIN_SPI_SCK         PIN_D17 // P0.12 / Trace buffer 1, High Frequency I/O Ok
#define PIN_SPI_SCK         PIN_D11 // P1.15 / Low frequency I/O only

#define PIN_SPI1_MOSI       PIN_D18 // P1.09 / QSPI, High Frequency I/O Ok
#define PIN_SPI1_MISO       PIN_D19 // P0.07 / Trace buffer 3, High Frequency I/O Ok
#define PIN_SPI1_SCK        PIN_A7  // P0.04 / Analog In, High frequency I/O Ok
#define PIN_SPI1_SS         PIN_D12 // P1.13 / Low frequency I/O only

#define SPI_INTERFACES_COUNT 2

// Wire (I2C) interfaces
#define PIN_WIRE_SDA         PIN_D2  // P0.22
#define PIN_WIRE_SCL         PIN_D3  // P1.00
#define WIRE_INTERFACES_COUNT 1

// Battery ADC
#define BATTERY_ADC_PIN      (26) // P0.05
#define BATTERY_ADC_CHANNEL  BATTERY_ADC_PIN // P0.05
#define BATTERY_CHRG         (27) // P1.06

#endif /* _VARIANT_BRAINIAC_BIG_ */