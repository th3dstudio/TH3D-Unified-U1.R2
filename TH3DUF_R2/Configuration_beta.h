/**
* ************** How to use this firmware - READ THIS, yes actually read this. *********************************
*
* This is for beta machine testing only. Enable the beta machine below and set the other options in Configuration.h
* No included support is provided for machines in this section. This is for our internal testing only. Use at your own risk.
*
*/

#ifndef CONFIGURATION_BETA_H
#define CONFIGURATION_BETA_H
#define CONFIGURATION_BETA_H_VERSION 010109

//===========================================================================
// *********************  Other Features for Testing  ***********************
//===========================================================================
// Disable Cold Extrusion Prevention
//#define NO_COLD_PREVENT

//===========================================================================
// ****************************  BETA Machines  *****************************
//===========================================================================

//===========================================================================
// ***********************   COPYMASTER PRINTERS    *************************
//===========================================================================

//===========================================================================
// Copymaster 3D 300 Options - Select 'Arduino Mega 2560' from Tools > Board
//===========================================================================
//#define COPYMASTER3D_300

// EZABL Probe Mounts
//#define CUSTOM_PROBE

//===========================================================================
// *************************   CREALITY PRINTERS    *************************
//===========================================================================

//===========================================================================
// Creality CR-10 Max Options - Select 'Arduino Mega 2560' from Tools > Board
//===========================================================================
//#define CR10_MAX

// What LCD are you using? (Only 12864 LCD is supported)
//#define RR_LCD_UPGRADE
// Stock Touch LCD is not supported at this time.
// Info on converting the LCD can be found here: COMING SOON

// EZABL/ABL Probe Mounts
//#define CUSTOM_PROBE

// If you are using the stock BL Touch sensor uncomment the below line
// If you are using a BL Touch but with a different mount uncomment the below line and the above CUSTOM_PROBE then enter the offsets below.
//#define CR10_MAX_BLTOUCH

//===========================================================================
// ***************************   OTHER PRINTERS    **************************
//===========================================================================

//===========================================================================
// Aliexpress A-10S Options - Select 'Sanguino 1284p' from Tools > Board
// Has an Anet Style Melzi board and Wanhao i3 Style LCD
//===========================================================================
//#define ALI_A10S

// EZABL Probe Mounts
//#define CUSTOM_PROBE

#endif // CONFIGURATION_H
