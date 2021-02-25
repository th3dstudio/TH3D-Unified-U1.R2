/**
* ************** How to use this firmware - READ THIS, yes actually read this. *********************************
*
* Uncomment means removing the 2 // in front of #define.
* 
* FLASHING NOTES:
* ALL slicers (Simplify3D, Cura, Slic3r, etc) or anything else that connects to the COM port must be CLOSED for the firmware to be flash.
* If anything is connected to the COM port when flashing it will fail, typically "access denied" is listed in the error section of the Arduino IDE.
* You MUST use the Included Arduino IDE to flash the firmware if on Windows and if you are on a Mac or Linux follow the guide in our knowledgebase to setup your IDE to work with the firmware.
* 
* EZABL SETUP NOTES: 
* If you have EZABL uncomment the mount you are using with the printer. 
* If you have a custom/unsupported mount uncomment #define CUSTOM_PROBE and enter your offsets 
* below in the Custom Probe Mount Settings section.
* Refer to the Custom Probe Mount Settings section below for entering these and how to measure.
* 
* STEP 1:
* Select the correct board from the tools menu for the printer you are flashing.
* Read the printer title for the model you are flashing, it will show what board to select.
*
* STEP 2:
* Uncomment the printer you want to flash. The printers are sorted A-Z by brand name.
* If you are using the Creality Dual board with the Ender 3/Ender 5/CR-20 then read the specific section below in that printer section on how to do this.
*
* STEP 3: 
* Select the COM port your printer is on from the Tools menu. If you do not see the COM port try
* downloading the latest drivers from the manufacturer or TH3D site on our knowledgebase.
* 
* STEP 4:
* Verify you have the correct board selected, printer model uncommented, and if you are using EZOUT and/or EZABL
* the lines you need to use them are also uncommented.
*
* STEP 5:
* Once you have your settings verified click the arrow in the upper left to upload to the board.
*
* STEP 6:
* Reset your eeprom. You can send M502 then M500 to reset the EEPROM OR on the printer LCD go to 
* Control > Reset EEPROM to clear out the EEPROM to defaults.
*
* BOOTLOADER FLASHING NOTES:
* For flashing your bootloader with an Uno make sure to select Arduino as ISP for the programmer
* 
* There are other features in the TH3D Extras section so look there for V6 Hotend,
* Bootscreen settings, Titan Extruder and more. You only need to edit this file.
* 
* ERROR NOTES:
* If you get errors flashing READ the message it gives you and double check that you selected
* the correct board from the Tools menu in Arduino. Turn off any AV systems and reboot the computer.
* 
* COMMUNITY REQUESTED FEATURES NOTE:
* All features in the community requested features section are provided as-is with no support from TH3D.
*/

#ifndef CONFIGURATION_H
#define CONFIGURATION_H
#define CONFIGURATION_H_VERSION 010109

//===========================================================================
//============================ TH3D Configuration ===========================
//===========================================================================

// ONLY UNCOMMENT THINGS IN ONE PRINTER SECTION!!! IF YOU HAVE MULTIPLE MACHINES FLASH THEM ONE AT A TIME.

//===========================================================================
// *************************    ADIMLab PRINTERS    *************************
//===========================================================================

//===========================================================================
// ADIMLab Gantry i3 Plus Options - Select Arduino Mega 2560 from Tools > Board
//===========================================================================
//#define ADIM_GANTRY_I3_PLUS

// EZABL Probe Mounts
//#define ADIM_I3P_OEM
//#define CUSTOM_PROBE

//Not being ported to Unified 2 at this time

//===========================================================================
// *************************    AIBECY PRINTERS     *************************
//===========================================================================

//===========================================================================
// Aibecy DY-H9 Options - Select Arduino Mega 2560 from Tools > Board
//===========================================================================
//#define DY_H9

// EZABL Probe Mounts
//#define CUSTOM_PROBE

//Not being ported to Unified 2 at this time

//===========================================================================
// *************************   CREALITY PRINTERS    *************************
//===========================================================================

//===========================================================================
// Creality Ender 4 Options - Select 'Arduino Mega 2560' from Tools > Board
//===========================================================================
//#define ENDER4

// If you have the filament sensor from Creality uncomment the below line
//#define ENDER4_FIL

// If you are using our EZOut V2 (connected to X+ connector) filament sensor kit please follow the install guide
// and then uncomment the #define EZOUT_ENABLE line below.
// Do NOT ever connect our filament sensor without the supplied adapter board.
//#define EZOUTV2_ENABLE

// EZABL Probe Mounts
//#define ENDER4_OEM_LEFT
//#define CUSTOM_PROBE

//===========================================================================
// ***************************   CTC PRINTERS    ***************************
//===========================================================================

//===========================================================================
// CTC i3 Pro B "Woody" Options - Select 'Anet V1.0' from Tools > Board
// Model has the Red Anet style Melzi board
//===========================================================================
//#define CTC_I3_PROB

// If you swapped the stock threaded rod "leadscrews" for T8x8 uncomment the below line to set the steps for those
//#define CTC_I3_T8_LEAD

// If you are using our EZOut V2 (connects to LCD header) filament sensor kit please follow the install guide
// and then uncomment the #define EZOUTV2_ENABLE line below.
// Do NOT ever connect our filament sensor without the supplied adapter board
// This printer uses the Anet 2004 LCD EZOut Package
//#define EZOUTV2_ENABLE

// EZABL Probe Mounts
//#define CUSTOM_PROBE

//Not being ported to Unified 2 at this time

//===========================================================================
// *************************  FOLGERTECH PRINTERS   *************************
//===========================================================================

//===========================================================================
// Folgertech FT-5 Options - Select 'Arduino Mega 2560' from Tools > Board
//===========================================================================
//#define FT5

// If you are using a 12864 LCD instead of the stock LCD 2004 display uncomment the below line.
//#define FT5_12864LCD

// If you are using our EZOut V2 (connects to X+ connector) filament sensor kit please follow the install guide
// and then uncomment the #define EZOUTV2_ENABLE line below.
// Do NOT ever connect our filament sensor without the supplied adapter board.
//#define EZOUTV2_ENABLE

// EZABL Probe Mounts
//#define CUSTOM_PROBE

//Not being ported to Unified 2 at this time

//===========================================================================
// *************************   GEEETECH PRINTERS    *************************
//===========================================================================

//===========================================================================
// Geeetech A10 Options - Select 'Arduino Mega 2560' from Tools > Board
//===========================================================================
// A10 V1 has the 40mm Fan on the left side of the hotend and NO filament sensor
// A10 V2 has a filament sensor and no 40mm fan on the left side of the hotend
//#define GEEETECH_A10_V1
//#define GEEETECH_A10_V2

// EZABL Probe Mounts
//#define GEE_A10_V1_OEM
//#define GEE_A10_V2_OEM
//#define CUSTOM_PROBE

//Not being ported to Unified 2 at this time

//===========================================================================
// Geeetech A10M Options - Select 'Arduino Mega 2560' from Tools > Board
//===========================================================================
//#define GEEETECH_A10M

// EZABL Probe Mounts - uses the same mounts as the Geetech A10 V2
//#define GEE_A10_V2_OEM
//#define CUSTOM_PROBE

//Not being ported to Unified 2 at this time

//===========================================================================
// Geeetech A20 Options - Select 'Arduino Mega 2560' from Tools > Board
//===========================================================================
//#define GEEETECH_A20

// EZABL Probe Mounts - uses the same mounts as the Geetech A10 V2
//#define GEE_A10_V2_OEM
//#define CUSTOM_PROBE

//Not being ported to Unified 2 at this time

//===========================================================================
// Geeetech A20M Options - Select 'Arduino Mega 2560' from Tools > Board
//===========================================================================
//#define GEEETECH_A20M

// EZABL Probe Mounts - uses the same mounts as the Geetech A10 V2
//#define GEE_A10_V2_OEM
//#define CUSTOM_PROBE

//Not being ported to Unified 2 at this time

//===========================================================================
// *************************    LULZBOT PRINTERS    *************************
//===========================================================================

//===========================================================================
// Lulzbot TAZ5 Options - Select 'Arduino Mega 2560' from Tools > Board
//===========================================================================
//#define TAZ5

// EZABL Probe Mounts
//#define TAZ5_OEM
//#define CUSTOM_PROBE

//Not being ported to Unified 2 at this time

//===========================================================================
// *************************     TEVO PRINTERS      *************************
//===========================================================================

//===========================================================================
// TEVO Tarantula Pro Options - Select 'Arduino Mega 2560' from Tools > Board
//===========================================================================
//#define TARANTULA_PRO

// If you are using our EZOut V2 (connects to X+ connector) filament sensor kit please follow the install guide
// and then uncomment the #define EZOUTV2_ENABLE line below.
// Do NOT ever connect our filament sensor without the supplied adapter board.
//#define EZOUTV2_ENABLE

// EZABL Probe Mounts
// Before connecting the EZABL control board to the Tarantula Pro please remove the 5V wire from the 3 pin plug.
// Pictures and write up available here: https://www.th3dstudio.com/knowledgebase/ezabl-tevo-tarantula-pro-endstop-cable-mod/
//#define TARANTULA_PRO_OEM
//#define CUSTOM_PROBE

//Not being ported to Unified 2 at this time

//===========================================================================
// TEVO Tornado Options - Select 'Arduino Mega 2560' from Tools > Board
//===========================================================================
//#define TORNADO

// If you are using our EZOut V2 (connects to X+ connector) filament sensor kit please follow the install guide
// and then uncomment the #define EZOUTV2_ENABLE line below.
// Do NOT ever connect our filament sensor without the supplied adapter board.
//#define EZOUTV2_ENABLE

// EZABL Probe Mounts
//#define TORNADO_OEM
//#define TORNADO_VOLCANO
//#define TORNADO_V6HEAVYDUTY
//#define TM3DAERO
//#define TM3DAERO_EXTENDED
//#define PETSFANG  //This is the RIGHT mounted version - if using the left mount please use the CUSTOM_PROBE option.
//#define CUSTOM_PROBE

//Not being ported to Unified 2 at this time

//===========================================================================
// *************************    TRONXY PRINTERS     *************************
//===========================================================================

//===========================================================================
// TronXY X3S Options - Select 'Sanguino 1284p' from Tools > Board
//===========================================================================
//#define TRONXY_X3S

// EZABL Probe Mounts
//#define CUSTOM_PROBE

//Not being ported to Unified 2 at this time

//===========================================================================
// TronXY X5S Options - Select 'Sanguino 1284p' from Tools > Board
//===========================================================================
//#define TRONXY_X5S

// EZABL Probe Mounts
//#define CUSTOM_PROBE

//Not being ported to Unified 2 at this time

//===========================================================================
// *************************    WANHAO PRINTERS     *************************
//===========================================================================

//===========================================================================
// Wanhao i3 Options - Select 'Sanguino 1284p' from Tools > Board
//===========================================================================
//#define WANHAO_I3

// If you are using our EZOut V2 (connected to LCD header) filament sensor kit please follow the install guide
// and then uncomment the #define EZOUTV2_ENABLE line below.
// Do NOT ever connect our filament sensor without the supplied adapter board.
//#define EZOUTV2_ENABLE

// If your thermistor temperatures are off please uncomment the 10K option below to fix temps being off
//#define WANHAO_10K_THERMISTOR

// EZABL Probe Mounts
//#define WANHAO_I3_OEM
//#define WANHAO_I3_DIIICOOLER
//#define CUSTOM_PROBE

//Not being ported to Unified 2 at this time

//===========================================================================
// Wanhao i3 Plus Options - Select 'Arduino Mega 2560' from Tools > Board
//===========================================================================
// Before compiling copy all files from "\Firmware\ADVi3PPFiles" folder to the
// "\Firmware\TH3DUF_R2" folder. Once copied the firmware will only work for 
// the Wanhao i3 Plus. If you wish to flash other machines then extract a new
// copy of the firmware to a different location on your computer.
//
// Touch LCD Flashing
// You MUST flash the LCD firmware with the ADVi3++ 4.0.3 LCD image to use 
// our firmware with the Wanhao i3 Plus. Get it here: 
// How to Flash AVDi3++ LCD: https://community.advi3pp.com/t/how-to-flash/16
// Touchscreen Guide: https://community.advi3pp.com/t/lcd-touch-screen-guide/20
//===========================================================================
//#define WANHAO_I3_PLUS

// Uncomment to enable EZABL support - Probe Offsets are set from the LCD
//#define WANHAO_I3_PLUS_EZABL

// The Wanhao i3 Plus support would not be possible
// without the open source work of Sebastien Andrivet
// Please consider becoming a Patreon of his.
// Patreon Link: https://www.patreon.com/join/andrivet

//Not being ported to Unified 2 ever due to the LCD Screen Limits

//===========================================================================
// Wanhao i3 MINI (V1/V2) Options - Select 'Arduino Mega 2560' from Tools > Board
//===========================================================================
//#define WANHAO_I3MINI
//#define WANHAO_I3MINI_V2

// EZABL Probe Mounts
//#define WANHAO_I3MINI_OEM
//#define WANHAO_I3MINI_OEM_EZABLMINI
//#define CUSTOM_PROBE

// If you have the V1 and you've added a heated bed, just uncomment the V2 option

//Not being ported to Unified 2 at this time

//===========================================================================
// Wanhao D6 Options - Select 'Arduino Mega 2560' from Tools > Board
//===========================================================================
//#define WANHAO_D6

// If you are using our EZOut V2 (connects to ANALOG/J9 connector) filament sensor kit please follow the install guide
// and then uncomment the #define EZOUTV2_ENABLE line below.
// Do NOT ever connect our filament sensor without the supplied adapter board.
//#define EZOUTV2_ENABLE

// EZABL Probe Mounts
//#define WANHAO_D6_OEM
//#define CUSTOM_PROBE

//Not being ported to Unified 2 at this time

//===========================================================================
// ************************    ZONESTAR PRINTERS     ************************
//===========================================================================

//===========================================================================
// Zonestar Z5F Options - Select 'Arduino Mega 2560' from Tools > Board
//===========================================================================
//#define ZONESTAR_Z5F

//Stock ABL Option
//#define ZONESTAR_Z5F_STOCK_ABL

// EZABL Probe Mounts
//#define CUSTOM_PROBE

//Not being ported to Unified 2 at this time

//===========================================================================
// *************************  END PRINTER SECTION   *************************
//===========================================================================

//===========================================================================
// EZABL Advanced Settings
//===========================================================================

// If you want more or less EZABL probe points change the number below (only used if EZABL enabled)
// Default is 3 which gives you 3x3 grid for a total of 9 points. STICK WITH ODD NUMBERS
#define EZABL_POINTS 3

// If you want to change how far in or out the probe senses change EZABL_PROBE_EDGE value below
// Most Machines - 35
// Binder Clips? - 50
#define EZABL_PROBE_EDGE 35

// If you have issues with your machine running the faster probe setting disable the #define EZABL_FASTPROBE below.
// DO NOTE: Most machines will work with the fast probe enabled. Use M48 to verify accuracy.
#define EZABL_FASTPROBE

// Superfast probing - Only works with the EZABL Pro Sensors
// DO NOTE: Not all machines will work with the fast probe enabled. Use M48 to verify accuracy and make sure the Z isn't binding with the high speeds.
//#define EZABL_SUPERFASTPROBE

// This will disable the XYE motors during probing. Can be useful if you have stepper motors causing interference issues with the EZABL sensor.
//#define PROBING_MOTORS_OFF

// Heaters will stay on during probing - only use if directed to by support. Do not use on AC beds.
//#define HEATERS_ON_DURING_PROBING

// Letting the bed heat recover between probes can increase accuracy due to the bed warping during cooling/heating
// Enabling the below option will let the bed get back to temperature during probing but will increase probing times.
//#define WAIT_FOR_BED_HEATER

// If you want a more granular control over the babystepping uncomment the below line.
// This will make the adjustment finer than the standard setting.
//#define FINE_BABYSTEPPING

// This will extrapolate the implied tilt of the bed outside of the probe area. Do not comment out unless directed by support.
#define EZABL_OUTSIDE_GRID_COMPENSATION

// Does your machine make weird noises/vibrations when it is probing the mesh? Enable this to slow down the speed between probe points.
//#define SLOWER_PROBE_MOVES

//================================================================================
// Custom Probe Mount Settings
//
// IF YOU HAVE A CUSTOM PROBE MOUNT OR ONE THAT IS NOT PRE-SUPPORTED UNCOMMENT THE
// CUSTOM_PROBE OPTION IN YOUR PRINTER SECTION AND ENTER YOUR PROBE LOCATION BELOW
//================================================================================
#if ENABLED(CUSTOM_PROBE)
  /**
  *   Z Probe to nozzle (X,Y) offset, relative to (0, 0).
  *   X and Y offsets must be whole numbers.
  *
  *   In the following example the X and Y offsets are both positive:
  *   #define X_PROBE_OFFSET_FROM_EXTRUDER 10
  *   #define Y_PROBE_OFFSET_FROM_EXTRUDER 10
  *
  *      +-- BACK ---+
  *      |           |
  *    L |    (+) P  | R <-- probe (10,10)
  *    E |           | I
  *    F | (-) N (+) | G <-- nozzle (0,0)
  *    T |           | H
  *      |    (-)    | T
  *      |           |
  *      O-- FRONT --+
  *    (0,0)
  */
  #define X_PROBE_OFFSET_FROM_EXTRUDER 10  // X offset: -left  +right  [of the nozzle]
  #define Y_PROBE_OFFSET_FROM_EXTRUDER 10  // Y offset: -front +behind [the nozzle]
#endif

//===========================================================================
//******************** EXTRA FEATURES AND TWEAKS ****************************
//===========================================================================

// EXTRUDER SETTINGS -------------------------------
// Use to set custom esteps and/or reverse your E Motor direction if you are installing an extruder that needs the direction reversed.
// If you reversed the wiring on your E motor already (like the Bondtech Guide says to do) then you do not need to reverse it in the firmware here.

// If you want to change the Esteps for your printer you can uncomment the below line and set CUSTOM_ESTEPS_VALUE to what you want - USE WHOLE NUMBERS ONLY
// This option sets the esteps from the CUSTOM_ESTEPS_VALUE line below.
// If you need to reverse the e motor direction also enabled the REVERSE_E_MOTOR_DIRECTION option.
// Example EStep Values: TH3D Aluminum Extruder - 95 ESteps, TH3D Tough Extruder - 463 ESteps, BMG Extruder - 415 ESteps
// When installing a Tough Extruder or E3D Titan or Bondtech that is Geared you likely need to enable the REVERSE_E_MOTOR_DIRECTION option
//#define CUSTOM_ESTEPS
//#define REVERSE_E_MOTOR_DIRECTION
#define CUSTOM_ESTEPS_VALUE 463

// FILAMENT SENSOR UNLOAD SETTINGS -----------------
// If you have a filament sensor that is physically mounted to the machine you can enable MOUNTED_FILAMENT_SENSOR to set the unload length to 0 to prevent filament from backing up in the sensor by uncommenting MOUNTED_FILAMENT_SENSOR 
//#define MOUNTED_FILAMENT_SENSOR

// If you have a direct drive machine with a filament sensor uncomment DIRECT_DRIVE_PRINTER to decrease the unload length from 100mm to 20mm
//#define DIRECT_DRIVE_PRINTER

// DUAL HOTEND SETTINGS ----------------------------

// This is the distance between each nozzle tip when using a dual hotend like the TH3D Tough Dual Hotend or the E3D Chimera or Dual hotends.
// This setting only applies to printers using a dual extruder board.
#define DUAL_HOTEND_X_DISTANCE 18.0

// HOTEND THERMISTOR SETTINGS ----------------------

// If you are using an E3D V6 Hotend (or Hemera) with their cartridge thermistor (not glass version) uncomment the below line.
//#define V6_HOTEND

// If you are using a Tough Hotend from TH3D or any thermistors TH3D sells for your hotend uncomment the below line.
//#define TH3D_HOTEND_THERMISTOR

// If you are using a known hotend thermistor value uncomment the below 2 lines and enter the thermistor number replacing the X after the #define KNOWN_HOTEND_THERMISTOR_VALUE
//#define KNOWN_HOTEND_THERMISTOR
//#define KNOWN_HOTEND_THERMISTOR_VALUE X

// If you have a hotend and thermistor capable of over 290C you can set the max temp value below.
// Setting this higher than 290C on a stock or traditional thermistor will damage it. Refer to your thermistor documentation to see what max temp is.
//#define HIGH_TEMP_THERMISTOR
#define HIGH_TEMP_THERMISTOR_TEMP 350

// BED THERMISTOR SETTINGS -------------------------

// If you are using a thermistor TH3D sells for your bed uncomment the below line.
//#define TH3D_BED_THERMISTOR

// If you are using a Keenovo with SSR and the Keenovo temperature sensor uncomment the below line.
//#define KEENOVO_TEMPSENSOR

// If you are using a known bed thermistor value uncomment the below 2 lines and enter the thermistor number replacing the X after the #define KNOWN_BED_THERMISTOR_VALUE
//#define KNOWN_BED_THERMISTOR
//#define KNOWN_BED_THERMISTOR_VALUE X

// THERMAL RUNAWAY PROTECTION SETTINGS -------------

// If you want to make thermal protection periods less or more adjust below. The number is in seconds.
// If you are getting false thermal runaway then increase the protection time. Do not make it over 300 for either setting.
#define HOTEND_THERMAL_PROTECTION_TIME 60
#define BED_THERMAL_PROTECTION_TIME 180

// BED SETTINGS ------------------------------------

// If you want PID tuning on your bed you can enable the below line. But PID on a bed is not typically needed. By default BED PID is disabled.
// This will be disabled when using automatic or manual mesh leveling with a 1284p board due to memory limitations.
//#define PIDBED_ENABLE

// If you are using an AC bed with a standalone controller (Keenovo) uncomment the below line to disable the heated bed in the firmware
//#define AC_BED

// Stock bed max is 120C for this firmware. Enable this to allow temps up to 150C. Your bed must support this temp for it to achieve the higher temperatures.
//#define BED_HIGHTEMP

// MISC --------------------------------------------

// If you have a 5015 fan that whines when under 100% speed uncomment the below line.
//#define FAN_FIX

// Use your own printer name
//#define USER_PRINTER_NAME "CHANGE ME" 

// If your printer is homing to the endstops hard uncomment this to change the homing speed/divisor to make it less aggressive.
//#define SLOWER_HOMING

// Using a Creality Silent Board? Enable the below option to set the correct driver setting for those boards
//#define TMC_CREALITY_BOARD

// BOOT SCREEN OPTIONS -----------------------------

// Use TinyMachines Bootscreen instead of TH3D
//#define TM3D_BOOT

// Disable Bootscreen completely
//#define DISABLE_BOOT

//===========================================================================
//*************************** COMMUNITY FEATURES ****************************
//===========================================================================

// HOME OFFSET ADJUSTMENT --------------------------
// If you need to adjust your XY home offsets from defaults then you can uncomment the HOME_ADJUST_LOCATION line below and enter your
// custom XY offsets. This is provided for convenience and is unsupported with included product support.
// How to use - measure (home XY then jog using the LCD 1mm at a time) the X and Y distance the nozzle is off
// the build plate and then put those as NEGATIVE values below, positive values will NOT work (move your endstops to fix a positve offset).
//#define HOME_ADJUST
#define X_HOME_ADJUST_LOCATION -10
#define Y_HOME_ADJUST_LOCATION -10

// LINEAR ADVANCE ----------------------------------
// See here on how to use Linear Advance: http://marlinfw.org/docs/features/lin_advance.html
// NOTE: Linear Advance does NOT work with the Creality Silent boards, CR-10S Pro, CR-10S Max, and CR-10 V2 due to poor driver implementation.
//#define LINEAR_ADVANCE
// Change the K Value here or use M900 KX.XX in your starting code (recommended).
#define LINEAR_ADVANCE_K 0

// BL TOUCH ----------------------------------------
// If you want to use the BL-Touch install your EZOut Board, uncomment the 2 lines below, uncomment the CUSTOM_PROBE option in your printer section, 
// and then enter your probe offsets in the CUSTOM_PROBE section above. The Pin 27 boards on other ecommerce sites are clones of our original EZOut.
// If you want to support the people that originally came up with the board you can get our EZOut breakout board here: http://EZOut.TH3DStudio.com
// Sales from our shop allow us to allocate time for community firmware development at no charge to you. <3
//#define BLTOUCH

// Here is where you set your servo pin. 
// EZOut Servo Pin Numbers: 
// Anet(with 2004LCD)/Ender3/5/CR-10 - 27
// Anet(with 12864LCD)/Ender 2 - 29
// For 2560 boards look for the pin you connected the servo wire to and enter below (typically 11).
//#define SERVO0_PIN 27

// The BL Touch is NOT supported on the Wanhao i3 Plus, use the ADVi3++ Firmware instead if you want to use a BL Touch.

// MANUAL MESH LEVELING ----------------------------
// If you want to use manual mesh leveling you can enable the below option. This is for generating a MANUAL mesh WITHOUT a probe. 
// Mesh Bed Leveling Documentation: http://marlinfw.org/docs/gcode/G029-mbl.html If used with a 1284P board the bootscreen will be disabled to save space.
// NOTE: This is not supported on the Wanhao i3 Plus due to the LCD limitations.
// NOTE: If you want to automate the leveling process our EZABL kits do this for you. Check them out here: http://EZABL.TH3DStudio.com
//#define MANUAL_MESH_LEVELING

// POWER LOSS RECOVERY -----------------------------
// Continue after Power-Loss feature will store the current state to the SD Card at the start of each layer
// during SD printing. If this is found at bootup it will ask you if you want to resume the print.
//
// NOTE: This feature causes excessive wear on your SD card. This will also disable Junction Jerk, SCurve Acceleration, Linear Advance, and Reduce the Serial Buffer due to RAM limitations.
// Power Loss Recovery is NOT supported on the Wanhao i3 Plus at this time.
//#define POWER_LOSS_RECOVERY

// MOTION SETTINGS ---------------------------------
// There are 2 new acceleration/jerk controls available in this firmware that can result is better print quality and
// smoother movement. To try each out just enable them below.
// Junction Deviation is NOT supported on the Wanhao i3 Plus at this time.
//#define JUNCTION_DEVIATION_ON
//#define S_CURVE_ACCELERATION_ON

//================================================================================================
// Language - This is provided for convenience and is unsupported with included product support.
// We only test compile with English language. If you run into space issues disable some features.
//================================================================================================

/**
 * LCD LANGUAGE
 *
 * Select the language to display on the LCD. These languages are available:
 *
 *    en, an, bg, ca, cn, cz, cz_utf8, de, el, el-gr, es, eu, fi, fr, fr_utf8, gl,
 *    hr, it, kana, kana_utf8, nl, pl, pt, pt_utf8, pt-br, pt-br_utf8, ru, sk_utf8,
 *    tr, uk, zh_CN, zh_TW, test
 */

#define LCD_LANGUAGE en

#define UNIFIED_VERSION "TH3D U1.R2.B5"
#include "Configuration_backend.h"

#endif // CONFIGURATION_H
