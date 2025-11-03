/*
 * The MIT License (MIT)
 *
 * Copyright (c) 2025 Brandon Beltran
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#ifndef UWU30_H
#define UWU30_H

/*------------------------------------------------------------------*/
/* LED
 *------------------------------------------------------------------*/
#define LEDS_NUMBER         1
#define LED_PRIMARY_PIN     _PINNUM(1, 6)   // not yet in board nor connected
#define LED_STATE_ON        0

/*------------------------------------------------------------------*/
/* BUTTON
 *------------------------------------------------------------------*/
#define BUTTONS_NUMBER    2
#define BUTTON_1          _PINNUM(0, 18)  // RESET
#define BUTTON_2          _PINNUM(1, 4)  // unconnected
#define BUTTON_PULL       NRF_GPIO_PIN_PULLUP

//--------------------------------------------------------------------+
// BLE OTA
//--------------------------------------------------------------------+
#define BLEDIS_MANUFACTURER  "quark"
#define BLEDIS_MODEL         "uwu30"

//--------------------------------------------------------------------+
// USB
//--------------------------------------------------------------------+
#define USB_DESC_VID           0x239A
#define USB_DESC_UF2_PID       0x0029
#define USB_DESC_CDC_ONLY_PID  0x0029

#define UF2_PRODUCT_NAME  "uwu30"
#define UF2_VOLUME_LABEL  "UWU30"
#define UF2_BOARD_ID      "uwu30"
#define UF2_INDEX_URL     "https://quark.works"

#endif // UWU30_H
