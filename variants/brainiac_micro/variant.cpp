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

#include "variant.h"

// Digital pin to nRF52 pin mapping, with pin number, alias and Nordic Semi recommendations in comments for each pin
const uint32_t g_ADigitalPinMap[] = {
  // P0.xx
  31, // P0.31 (A1 / GPIO, Analog input, Standard drive, Low frequency I/O only)
  4,  // P0.04 (A2 / GPIO, Analog input)
  30, // P0.30 (A3 / GPIO, Analog input, Standard drive, Low frequency I/O only)
  29, // P0.29 (A4 / GPIO, Analog input, Standard drive, Low frequency I/O only)
  3,  // P0.03 (A5 / GPIO, Analog input, Standard drive, Low frequency I/O only)
  18, // P0.18 (D0 / RESET / GPIO, QSPI)
  41, // P1.09 (D1 / TRACEDATA3 / GPIO, Trace buffer TRACEDATA[3])
  12, // P0.12 (D2 / TRACEDATA1 / GPIO, Trace buffer TRACEDATA[1])
  21, // P0.21 (D3 / GPIO, QSPI)
  19, // P0.19 (D4 / GPIO, QSPI, SCL)
  35, // P1.03 (D5 / GPIO, Standard drive, Low frequency I/O only)
  33, // P1.01 (D6 / GPIO, Standard drive, Low frequency I/O only)
  34, // P1.02 (D7 / GPIO, Standard drive, Low frequency I/O only)
  36, // P1.04 (D8 / GPIO, Standard drive, Low frequency I/O only)
  9,  // P0.09 (D9 / NFC1 / GPIO, NFC antenna connection, Standard drive, Low frequency I/O only)
  10, // P0.10 (D10 / NFC2 / General purpose I/O, NFC antenna connection, Standard drive, Low frequency I/O only)
  23, // P0.23 (D11 / GPIO, QSPI)
  22, // P0.22 (D12 / GPIO, QSPI)
  32, // P1.00 (D13 / TRACEDATA0 / GPIO, Trace buffer TRACEDATA[0])
  5,  // P0.05 (BAT_ADC1 / No pinout / input only)
  38  // P1.06 (BAT_CHRG / No pinout / input only)
};