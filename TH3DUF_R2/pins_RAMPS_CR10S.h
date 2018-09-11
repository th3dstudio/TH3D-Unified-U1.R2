/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#if !defined(__AVR_ATmega1280__) && !defined(__AVR_ATmega2560__)
  #error "Oops!  Make sure you have 'Arduino Mega 2560' selected from the 'Tools -> Boards' menu."
#endif

#ifndef BOARD_NAME
  #define BOARD_NAME "CR-10S"
#endif

#define LARGE_FLASH true

//
// Servos
//
#ifdef IS_RAMPS_13
  #define SERVO0_PIN        7 // RAMPS_13 // Will conflict with BTN_EN2 on LCD_I2C_VIKI
#else
  #define SERVO0_PIN       11
#endif
#define SERVO1_PIN          6
#define SERVO2_PIN          5
#ifndef SERVO3_PIN
  #define SERVO3_PIN        4
#endif

#if ENABLED(EZOUT_ENABLE)
  #define FIL_RUNOUT_PIN      37
#else
  #define FIL_RUNOUT_PIN      2
#endif

//
// Limit Switches
//
#define X_MIN_PIN           3
#ifndef X_MAX_PIN
  #define X_MAX_PIN         -1
#endif
#define Y_MIN_PIN          14
#define Y_MAX_PIN          15
#define Z_MIN_PIN          18
#define Z_MAX_PIN          19

//
// Z Probe (when not Z_MIN_PIN)
//
#ifndef Z_MIN_PROBE_PIN
  #define Z_MIN_PROBE_PIN  32
#endif

//
// Steppers
//
#define X_STEP_PIN         54
#define X_DIR_PIN          55
#define X_ENABLE_PIN       38
#define X_CS_PIN           53

#define Y_STEP_PIN         60
#define Y_DIR_PIN          61
#define Y_ENABLE_PIN       56
#define Y_CS_PIN           49

#define Z_STEP_PIN         46
#define Z_DIR_PIN          48
#define Z_ENABLE_PIN       62
#define Z_CS_PIN           40

#define E0_STEP_PIN        26
#define E0_DIR_PIN         28
#define E0_ENABLE_PIN      24
#define E0_CS_PIN          42

#define E1_STEP_PIN        36
#define E1_DIR_PIN         34
#define E1_ENABLE_PIN      30
#define E1_CS_PIN          44


//
// Temperature Sensors
//
#define TEMP_0_PIN         13   // Analog Input
#define TEMP_1_PIN         15   // Analog Input
#define TEMP_BED_PIN       14   // Analog Input

//
// Heaters / Fans
//
#ifndef MOSFET_D_PIN
  #define MOSFET_D_PIN  -1
#endif
#ifndef RAMPS_D8_PIN
  #define RAMPS_D8_PIN   8
#endif
#ifndef RAMPS_D9_PIN
  #define RAMPS_D9_PIN   9
#endif
#ifndef RAMPS_D10_PIN
  #define RAMPS_D10_PIN 10
#endif

#define HEATER_0_PIN   RAMPS_D10_PIN
#define FAN_PIN        RAMPS_D9_PIN
#define HEATER_BED_PIN RAMPS_D8_PIN
#define HEATER_1_PIN   7

#ifndef FAN_PIN
  #define FAN_PIN 4      // IO pin. Buffer needed
#endif

//
// Misc. Functions
//
#define SDSS               53
#define LED_PIN            13

#ifndef FILWIDTH_PIN
  #define FILWIDTH_PIN      5   // Analog Input on AUX2
#endif

#ifndef PS_ON_PIN
  #define PS_ON_PIN        12
#endif

//////////////////////////
// LCDs and Controllers //
//////////////////////////

#if ENABLED(ULTRA_LCD)

  //
  // LCD Display output pins
  //
  #if ENABLED(REPRAPWORLD_GRAPHICAL_LCD)

    #define LCD_PINS_RS         49 // CS chip select /SS chip slave select
    #define LCD_PINS_ENABLE     51 // SID (MOSI)
    #define LCD_PINS_D4         52 // SCK (CLK) clock

  #elif ENABLED(NEWPANEL) && ENABLED(PANEL_ONE)

    #define LCD_PINS_RS         40
    #define LCD_PINS_ENABLE     42
    #define LCD_PINS_D4         65
    #define LCD_PINS_D5         66
    #define LCD_PINS_D6         44
    #define LCD_PINS_D7         64

  #else

    #if ENABLED(CR10_STOCKDISPLAY)

      #define LCD_PINS_RS       27
      #define LCD_PINS_ENABLE   29
      #define LCD_PINS_D4       25

      #if DISABLED(NEWPANEL)
        #if ENABLED(EZOUT_ENABLE)
          #define BEEPER_PIN      -1
         #else
          #define BEEPER_PIN      37
        #endif
      #endif

    #else

      #if ENABLED(MKS_12864OLED) || ENABLED(MKS_12864OLED_SSD1306)
        #define LCD_PINS_DC     25 // Set as output on init
        #define LCD_PINS_RS     27 // Pull low for 1s to init
        // DOGM SPI LCD Support
        #define DOGLCD_CS       16
        #define DOGLCD_MOSI     17
        #define DOGLCD_SCK      23
        #define DOGLCD_A0       LCD_PINS_DC
      #else
        #define LCD_PINS_RS     16
        #define LCD_PINS_ENABLE 17
        #define LCD_PINS_D4     23
        #define LCD_PINS_D5     25
        #define LCD_PINS_D6     27
      #endif

      #define LCD_PINS_D7       29

      #if DISABLED(NEWPANEL)
        #define BEEPER_PIN      33
      #endif

    #endif

    #if DISABLED(NEWPANEL)
      // Buttons are attached to a shift register
      // Not wired yet
      //#define SHIFT_CLK       38
      //#define SHIFT_LD        42
      //#define SHIFT_OUT       40
      //#define SHIFT_EN        17
    #endif

  #endif

  //
  // LCD Display input pins
  //
  #if ENABLED(NEWPANEL)

    #if ENABLED(REPRAP_DISCOUNT_SMART_CONTROLLER)

      #define BEEPER_PIN        37

      #if ENABLED(CR10_STOCKDISPLAY)
        #define BTN_EN1         17
        #define BTN_EN2         23
      #else
        #define BTN_EN1         31
        #define BTN_EN2         33
      #endif

      #define BTN_ENC           35
      #define SD_DETECT_PIN     -1
      #define KILL_PIN          41

      #if ENABLED(BQ_LCD_SMART_CONTROLLER)
        #define LCD_BACKLIGHT_PIN 39
      #endif

    #elif ENABLED(REPRAPWORLD_GRAPHICAL_LCD)

      #define BTN_EN1           64
      #define BTN_EN2           59
      #define BTN_ENC           63
      #define SD_DETECT_PIN     -1

    #elif ENABLED(MKS_MINI_12864)  // Added in Marlin 1.1.6

      #define DOGLCD_A0         27
      #define DOGLCD_CS         25

      // GLCD features
      //#define LCD_CONTRAST   190
      // Uncomment screen orientation
      //#define LCD_SCREEN_ROT_90
      //#define LCD_SCREEN_ROT_180
      //#define LCD_SCREEN_ROT_270

      #define BEEPER_PIN        37
      // not connected to a pin
      #define LCD_BACKLIGHT_PIN 65 // backlight LED on A11/D65

      #define BTN_EN1           31
      #define BTN_EN2           33
      #define BTN_ENC           35

      #define SDSS              53
      #define SD_DETECT_PIN     49
      #define KILL_PIN          64

    #elif ENABLED(MINIPANEL)

      #define BEEPER_PIN        42
      // not connected to a pin
      #define LCD_BACKLIGHT_PIN 65 // backlight LED on A11/D65

      #define DOGLCD_A0         44
      #define DOGLCD_CS         66

      // GLCD features
      //#define LCD_CONTRAST   190
      // Uncomment screen orientation
      //#define LCD_SCREEN_ROT_90
      //#define LCD_SCREEN_ROT_180
      //#define LCD_SCREEN_ROT_270

      #define BTN_EN1           40
      #define BTN_EN2           63
      #define BTN_ENC           59

      #define SDSS              53
      #define SD_DETECT_PIN     49
      #define KILL_PIN          64

    #else

      // Beeper on AUX-4
      #define BEEPER_PIN        33

      // Buttons are directly attached using AUX-2
      #if ENABLED(REPRAPWORLD_KEYPAD)
        #define SHIFT_OUT       40
        #define SHIFT_CLK       44
        #define SHIFT_LD        42
        #define BTN_EN1         64
        #define BTN_EN2         59
        #define BTN_ENC         63
      #elif ENABLED(PANEL_ONE)
        #define BTN_EN1         59 // AUX2 PIN 3
        #define BTN_EN2         63 // AUX2 PIN 4
        #define BTN_ENC         49 // AUX3 PIN 7
      #else
        #define BTN_EN1         37
        #define BTN_EN2         35
        #define BTN_ENC         31
      #endif

      #if ENABLED(G3D_PANEL)
        #define SD_DETECT_PIN   49
        #define KILL_PIN        41
      #endif

    #endif
  #endif // NEWPANEL

#endif // ULTRA_LCD