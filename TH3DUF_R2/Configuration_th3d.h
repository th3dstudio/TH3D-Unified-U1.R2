#ifndef CONFIGURATION_TH3D_H
#define CONFIGURATION_TH3D_H
#define CONFIGURATION_TH3D_H_VERSION 010109

// TH3D In House Machines/Custom Machines
// These are here for TH3D use ONLY. NOT SUPPORTED.
// We use Unified as well so we merged our machines into the code so it's easier for us to update. :)

// TH3D Machines
//#define TIM_I3MINI
//#define TIM_SMARTT
//#define TIM_ENDER2
//#define TIM_E10
//#define TIM_U10
//#define TIM_EZ300
//#define TIM_CR10MINI
//#define TIM_CR10
//#define TIM_D6
//#define TIM_WI3
//#define TIM_TORNADO
//#define TIM_ENDER3
//#define TIM_ENDER4
//#define TIM_AM8

// Custom Machines
//#define MATTF_X5S
//#define STEVE_A30
//#define NGIL_ENDER3
//#define DANE_I3CUSTOM

// DH-THW Machines
//#define DOUG_I3MINI

#if ENABLED(DANE_I3CUSTOM)
  #define TH3DINHOUSEMACHINE
  #define NO_COLD_PREVENT
  
  #ifndef MOTHERBOARD
    #define MOTHERBOARD BOARD_RAMPS_14_EFB
  #endif
  
  #define PIDBED_ENABLE
  #define CUSTOM_PROBE
  #define X_PROBE_OFFSET_FROM_EXTRUDER -20  // X offset: -left  +right  [of the nozzle]
  #define Y_PROBE_OFFSET_FROM_EXTRUDER -32  // Y offset: -front +behind [the nozzle]
  #define EZABL_POINTS 3
  #define EZABL_PROBE_EDGE 20
  #define EZABL_FASTPROBE
  #define BABYSTEP_OFFSET
  
  //#define LINEAR_ADVANCE
  //#define LINEAR_ADVANCE_K 0
  #define NEW_JERK_CONTROL
  #define NEW_ACCELERATION_CONTROL
    
  #define CUSTOM_MACHINE_NAME "Franken i3"

  #define BAUDRATE 250000
  
  #define TEMP_SENSOR_0 1
  #define TEMP_SENSOR_BED 1
  
  #define USE_XMIN_PLUG
  #define USE_YMIN_PLUG
  #define USE_ZMIN_PLUG
  
  #define ENDSTOPPULLUPS
  
  #define X_MIN_ENDSTOP_INVERTING true // set to true to invert the logic of the endstop.
  #define Y_MIN_ENDSTOP_INVERTING true // set to true to invert the logic of the endstop.
  #define Z_MIN_ENDSTOP_INVERTING true // set to true to invert the logic of the endstop.
  #define X_MAX_ENDSTOP_INVERTING false // set to true to invert the logic of the endstop.
  #define Y_MAX_ENDSTOP_INVERTING false // set to true to invert the logic of the endstop.
  #define Z_MAX_ENDSTOP_INVERTING false // set to true to invert the logic of the endstop.
  #define Z_MIN_PROBE_ENDSTOP_INVERTING true // set to true to invert the logic of the probe.

  #define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, 800, 100 }
  #define DEFAULT_MAX_FEEDRATE          { 400, 400, 15, 50 }
  #define DEFAULT_MAX_ACCELERATION      { 1000, 1000, 50, 5000 }
  
  #define DEFAULT_ACCELERATION          1000    // X, Y, Z and E acceleration for printing moves
  #define DEFAULT_RETRACT_ACCELERATION  1000    // E acceleration for retracts
  #define DEFAULT_TRAVEL_ACCELERATION   1000    // X, Y, Z acceleration for travel (non printing) moves

  #define DEFAULT_XJERK                 10.0
  #define DEFAULT_YJERK                 10.0
  #define DEFAULT_ZJERK                  0.4
  #define DEFAULT_EJERK                  5.0
  
  #define INVERT_X_DIR false
  #define INVERT_Y_DIR true
  #define INVERT_Z_DIR false
  
  #define INVERT_E0_DIR false
  #define INVERT_E1_DIR false
  #define INVERT_E2_DIR false
  #define INVERT_E3_DIR false
  #define INVERT_E4_DIR false
  
  #define X_HOME_DIR -1
  #define Y_HOME_DIR -1
  #define Z_HOME_DIR -1

  #define X_BED_SIZE 220
  #define Y_BED_SIZE 220

  #define X_MIN_POS -3
  #define Y_MIN_POS -12
  
  #define X_MAX_POS X_BED_SIZE
  #define Y_MAX_POS Y_BED_SIZE
  #define Z_MAX_POS 220
  
  #define SDSUPPORT

  #define REVERSE_ENCODER_DIRECTION
  #define REPRAP_DISCOUNT_FULL_GRAPHIC_SMART_CONTROLLER

  #define X_DRIVER_TYPE  A4988
  #define Y_DRIVER_TYPE  A4988
  #define Z_DRIVER_TYPE  A4988
  #define E0_DRIVER_TYPE A4988
#endif

#if ENABLED(TIM_ENDER4)
  #define ENDER4
  #define ENDER4_FIL
  #define ENDER4_OEM_LEFT
  #define TITAN_EXTRUDER
  #define NO_COLD_PREVENT
  #define PIDBED_ENABLE
#endif

#if ENABLED(NGIL_ENDER3)
  #define ENDER3
  #define EZOUT_ENABLE
  #define PETSFANG
  #define EZABL_POINTS 3
  #define EZABL_PROBE_EDGE 15
  #define NO_COLD_PREVENT
  #define EZABL_FASTPROBE
  #define BABYSTEP_OFFSET
  #define TITAN_EXTRUDER
  #define TITAN_EXTRUDER_STEPS 463  
  //#define LINEAR_ADVANCE
  //#define LINEAR_ADVANCE_K 0
  #define NEW_JERK_CONTROL
  #define NEW_ACCELERATION_CONTROL
  #define USER_PRINTER_NAME "Nicks Ender3" 
  #define PIDBED_ENABLE
#endif


#if ENABLED(TIM_ENDER3)
  #define ENDER3
  #define EZOUT_ENABLE
  #define CR10_OEM
  #define EZABL_POINTS 3
  #define EZABL_PROBE_EDGE 15
  #define NO_COLD_PREVENT
  #define EZABL_FASTPROBE
  #define BABYSTEP_OFFSET
  #define PIDBED_ENABLE
  //#define LINEAR_ADVANCE
  //#define LINEAR_ADVANCE_K 0
  #define TITAN_EXTRUDER
  #define TITAN_EXTRUDER_STEPS 463
  #define NEW_JERK_CONTROL
  #define NEW_ACCELERATION_CONTROL
  #define USER_PRINTER_NAME "HakEnder3" 
  #define HOME_ADJUST
  #define X_HOME_LOCATION 0
  #define Y_HOME_LOCATION -6
#endif

#if ENABLED(STEVE_A30)
  #define TH3DINHOUSEMACHINE
  #define NO_COLD_PREVENT
  #define PIDBED_ENABLE
  #ifndef MOTHERBOARD
    #define MOTHERBOARD BOARD_RAMPS_14_EFB
  #endif

  #define CUSTOM_PROBE
  #define X_PROBE_OFFSET_FROM_EXTRUDER 42 // X offset: -left  +right  [of the nozzle]
  #define Y_PROBE_OFFSET_FROM_EXTRUDER 1  // Y offset: -front +behind [the nozzle]
  #define EZABL_POINTS 3
  #define EZABL_PROBE_EDGE 20
  #define EZABL_FASTPROBE
  #define BABYSTEP_OFFSET
  
  //#define LINEAR_ADVANCE
  //#define LINEAR_ADVANCE_K 0
  #define NEW_JERK_CONTROL
  #define NEW_ACCELERATION_CONTROL
    
  #define CUSTOM_MACHINE_NAME "Aaaaay30"

  #define EZOUTV2_ENABLE

  #define REPRAP_DISCOUNT_FULL_GRAPHIC_SMART_CONTROLLER
  #define BAUDRATE 250000
  
  #define TEMP_SENSOR_0 5
  #define TEMP_SENSOR_BED 5
  
  #define POWER_SUPPLY 0
  
  #define USE_XMIN_PLUG
  #define USE_YMIN_PLUG
  #define USE_ZMIN_PLUG
  
  #define ENDSTOPPULLUPS
  
  #define X_MIN_ENDSTOP_INVERTING true // set to true to invert the logic of the endstop.
  #define Y_MIN_ENDSTOP_INVERTING true // set to true to invert the logic of the endstop.
  #define Z_MIN_ENDSTOP_INVERTING true // set to true to invert the logic of the endstop.
  #define X_MAX_ENDSTOP_INVERTING false // set to true to invert the logic of the endstop.
  #define Y_MAX_ENDSTOP_INVERTING false // set to true to invert the logic of the endstop.
  #define Z_MAX_ENDSTOP_INVERTING false // set to true to invert the logic of the endstop.
  #define Z_MIN_PROBE_ENDSTOP_INVERTING true // set to true to invert the logic of the probe.

  #define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, 400, 95 }
  #define DEFAULT_MAX_FEEDRATE          { 400, 400, 15, 25 }
  #define DEFAULT_MAX_ACCELERATION      { 1000, 1000, 100, 5000 }
  
  #define DEFAULT_ACCELERATION          1000    // X, Y, Z and E acceleration for printing moves
  #define DEFAULT_RETRACT_ACCELERATION  1000    // E acceleration for retracts
  #define DEFAULT_TRAVEL_ACCELERATION   1000    // X, Y, Z acceleration for travel (non printing) moves

  #define DEFAULT_XJERK                 10.0
  #define DEFAULT_YJERK                 10.0
  #define DEFAULT_ZJERK                  0.4
  #define DEFAULT_EJERK                  5.0
  
  #define INVERT_X_DIR false
  #define INVERT_Y_DIR false
  #define INVERT_Z_DIR true
  
  #define INVERT_E0_DIR false
  #define INVERT_E1_DIR false
  #define INVERT_E2_DIR false
  #define INVERT_E3_DIR false
  #define INVERT_E4_DIR false
  
  #define X_HOME_DIR -1
  #define Y_HOME_DIR -1
  #define Z_HOME_DIR -1

  #define X_BED_SIZE 320
  #define Y_BED_SIZE 320

  #define X_MIN_POS -7
  #define Y_MIN_POS -18
  
  #define X_MAX_POS X_BED_SIZE
  #define Y_MAX_POS Y_BED_SIZE
  #define Z_MAX_POS 420
  
  #define SDSUPPORT

  #define REVERSE_ENCODER_DIRECTION
  #define REPRAP_DISCOUNT_FULL_GRAPHIC_SMART_CONTROLLER

  #define X_DRIVER_TYPE  A4988
  #define Y_DRIVER_TYPE  A4988
  #define Z_DRIVER_TYPE  A4988
  #define E0_DRIVER_TYPE A4988
#endif //end of steve A30

#if ENABLED(TIM_I3MINI)
  #define WANHAO_I3MINI
  #define WANHAO_I3MINI_OEM_EZABLMINI
  #define EZABL_POINTS 3
  #define EZABL_PROBE_EDGE 5
  #define EZABL_FASTPROBE
  #define TITAN_EXTRUDER
  #define TITAN_EXTRUDER_STEPS 463
  #define I3MINI_FANCONTROL
  #define USER_PRINTER_NAME "HangryPrinter" 
  #define NO_COLD_PREVENT
  #define BABYSTEP_OFFSET
  //#define LINEAR_ADVANCE
  //#define LINEAR_ADVANCE_K 0
  #define NEW_JERK_CONTROL
  #define NEW_ACCELERATION_CONTROL
#endif

#if ENABLED(DOUG_I3MINI)
  #define WANHAO_I3MINI
  #define WANHAO_I3MINI_OEM_EZABLMINI
  #define EZABL_POINTS 3
  #define EZABL_PROBE_EDGE 5
  #define EZABL_FASTPROBE
  #define I3MINI_FANCONTROL
  #define USER_PRINTER_NAME "PartPrinter" 
  #define NO_COLD_PREVENT
  #define BABYSTEP_OFFSET
  //#define LINEAR_ADVANCE
  //#define LINEAR_ADVANCE_K 0
  #define NEW_JERK_CONTROL
  #define NEW_ACCELERATION_CONTROL
  #define PIDBED_ENABLE
#endif

#if ENABLED(TIM_AM8)
  #define TH3DINHOUSEMACHINE
  #define NO_COLD_PREVENT
  #define PIDBED_ENABLE
  #define X_DRIVER_TYPE  DRV8825
  #define Y_DRIVER_TYPE  DRV8825
  #define Z_DRIVER_TYPE  DRV8825
  #define E0_DRIVER_TYPE DRV8825
  #define E1_DRIVER_TYPE DRV8825
  
  #ifndef MOTHERBOARD
    #define MOTHERBOARD BOARD_RAMPS_14_EFB
  #endif

  #define IS_MKS_BOARD_ATX
  
  #define CUSTOM_PROBE
  #define X_PROBE_OFFSET_FROM_EXTRUDER 33  // X offset: -left  +right  [of the nozzle]
  #define Y_PROBE_OFFSET_FROM_EXTRUDER 5 // Y offset: -front +behind [the nozzle]
  #define EZABL_POINTS 3
  #define EZABL_PROBE_EDGE 10
  #define EZABL_FASTPROBE
  #define BABYSTEP_OFFSET
  
  //#define LINEAR_ADVANCE
  //#define LINEAR_ADVANCE_K 0
  #define NEW_JERK_CONTROL
  #define NEW_ACCELERATION_CONTROL
    
  #define CUSTOM_MACHINE_NAME "HakAM8Dual"

  #define EZOUTV2_ENABLE

  #define SINGLENOZZLE

  #define REPRAP_DISCOUNT_FULL_GRAPHIC_SMART_CONTROLLER
  #define BAUDRATE 250000
  
  #define TEMP_SENSOR_0 1
  #define TEMP_SENSOR_BED 1
  
  #define POWER_SUPPLY 1

  #if POWER_SUPPLY > 0
  #define PS_DEFAULT_OFF

  #define AUTO_POWER_CONTROL        // Enable automatic control of the PS_ON pin
  #if ENABLED(AUTO_POWER_CONTROL)
    #define AUTO_POWER_FANS           // Turn on PSU if fans need power
    #define AUTO_POWER_E_FANS
    #define AUTO_POWER_CONTROLLERFAN
    #define POWER_TIMEOUT 30
  #endif
  #endif
  
  #define USE_XMIN_PLUG
  #define USE_YMIN_PLUG
  #define USE_ZMIN_PLUG
  
  #define ENDSTOPPULLUPS
  
  #define X_MIN_ENDSTOP_INVERTING true // set to true to invert the logic of the endstop.
  #define Y_MIN_ENDSTOP_INVERTING true // set to true to invert the logic of the endstop.
  #define Z_MIN_ENDSTOP_INVERTING true // set to true to invert the logic of the endstop.
  #define X_MAX_ENDSTOP_INVERTING false // set to true to invert the logic of the endstop.
  #define Y_MAX_ENDSTOP_INVERTING false // set to true to invert the logic of the endstop.
  #define Z_MAX_ENDSTOP_INVERTING false // set to true to invert the logic of the endstop.
  #define Z_MIN_PROBE_ENDSTOP_INVERTING true // set to true to invert the logic of the probe.

  #define DEFAULT_AXIS_STEPS_PER_UNIT   {200, 200, 800, 463}
  #define DEFAULT_MAX_FEEDRATE          { 400, 400, 15, 25 }
  #define DEFAULT_MAX_ACCELERATION      { 2000, 2000, 100, 5000 }
  
  #define DEFAULT_ACCELERATION          1000    // X, Y, Z and E acceleration for printing moves
  #define DEFAULT_RETRACT_ACCELERATION  1000    // E acceleration for retracts
  #define DEFAULT_TRAVEL_ACCELERATION   1000    // X, Y, Z acceleration for travel (non printing) moves

  #define DEFAULT_XJERK                 10.0
  #define DEFAULT_YJERK                 10.0
  #define DEFAULT_ZJERK                  0.4
  #define DEFAULT_EJERK                  5.0
  
  #define INVERT_X_DIR false
  #define INVERT_Y_DIR true
  #define INVERT_Z_DIR false
  
  #define INVERT_E0_DIR false
  #define INVERT_E1_DIR false
  #define INVERT_E2_DIR false
  #define INVERT_E3_DIR false
  #define INVERT_E4_DIR false
  
  #define X_HOME_DIR -1
  #define Y_HOME_DIR -1
  #define Z_HOME_DIR -1

  #define X_BED_SIZE 220
  #define Y_BED_SIZE 220

  #define X_MIN_POS -13
  #define Y_MIN_POS 0
  #define Z_MIN_POS 0
  #define X_MAX_POS X_BED_SIZE
  #define Y_MAX_POS Y_BED_SIZE
  #define Z_MAX_POS 260
  
  #define SDSUPPORT
  #define ENCODER_PULSES_PER_STEP 4
  #define ENCODER_STEPS_PER_MENU_ITEM 1

  #define REVERSE_ENCODER_DIRECTION
  #define REPRAP_DISCOUNT_FULL_GRAPHIC_SMART_CONTROLLER
#endif

#if ENABLED(MATTF_X5S)
  #define TH3DINHOUSEMACHINE
  #define NO_COLD_PREVENT
  
  #ifndef MOTHERBOARD
    #define MOTHERBOARD BOARD_RAMPS_14_EFB
  #endif
  
  #define COREXY
  #define PIDBED_ENABLE
  #define CUSTOM_PROBE
  #define X_PROBE_OFFSET_FROM_EXTRUDER 35  // X offset: -left  +right  [of the nozzle]
  #define Y_PROBE_OFFSET_FROM_EXTRUDER 0  // Y offset: -front +behind [the nozzle]
  #define EZABL_POINTS 3
  #define EZABL_PROBE_EDGE 20
  #define EZABL_FASTPROBE
  #define BABYSTEP_OFFSET
  
  //#define LINEAR_ADVANCE
  //#define LINEAR_ADVANCE_K 0
  #define NEW_JERK_CONTROL
  #define NEW_ACCELERATION_CONTROL
    
  #define CUSTOM_MACHINE_NAME "HakX5S"
  #define IS_MKS_BOARD_ATX

  #define EZOUTV2_ENABLE

  #define BAUDRATE 250000
  
  #define TEMP_SENSOR_0 1
  #define TEMP_SENSOR_BED 5
  
  #define POWER_SUPPLY 1
  
  #if POWER_SUPPLY > 0
  #define PS_DEFAULT_OFF

  #define AUTO_POWER_CONTROL        // Enable automatic control of the PS_ON pin
  #if ENABLED(AUTO_POWER_CONTROL)
    #define AUTO_POWER_FANS           // Turn on PSU if fans need power
    #define AUTO_POWER_E_FANS
    #define AUTO_POWER_CONTROLLERFAN
    #define POWER_TIMEOUT 30
  #endif
  #endif
  
  #define USE_XMIN_PLUG
  #define USE_YMIN_PLUG
  #define USE_ZMIN_PLUG
  
  #define ENDSTOPPULLUPS
  
  #define X_MIN_ENDSTOP_INVERTING true // set to true to invert the logic of the endstop.
  #define Y_MIN_ENDSTOP_INVERTING true // set to true to invert the logic of the endstop.
  #define Z_MIN_ENDSTOP_INVERTING true // set to true to invert the logic of the endstop.
  #define X_MAX_ENDSTOP_INVERTING false // set to true to invert the logic of the endstop.
  #define Y_MAX_ENDSTOP_INVERTING false // set to true to invert the logic of the endstop.
  #define Z_MAX_ENDSTOP_INVERTING false // set to true to invert the logic of the endstop.
  #define Z_MIN_PROBE_ENDSTOP_INVERTING true // set to true to invert the logic of the probe.

  #define DEFAULT_AXIS_STEPS_PER_UNIT   { 160, 160, 800, 463 }
  #define DEFAULT_MAX_FEEDRATE          { 200, 200, 15, 25 }
  #define DEFAULT_MAX_ACCELERATION      { 2000, 2000, 100, 10000 }
  
  #define DEFAULT_ACCELERATION          1000    // X, Y, Z and E acceleration for printing moves
  #define DEFAULT_RETRACT_ACCELERATION  1000    // E acceleration for retracts
  #define DEFAULT_TRAVEL_ACCELERATION   1000    // X, Y, Z acceleration for travel (non printing) moves

  #define DEFAULT_XJERK                 10.0
  #define DEFAULT_YJERK                 10.0
  #define DEFAULT_ZJERK                  0.4
  #define DEFAULT_EJERK                  5.0
  
  #define INVERT_X_DIR false
  #define INVERT_Y_DIR false
  #define INVERT_Z_DIR true
  
  #define INVERT_E0_DIR false
  #define INVERT_E1_DIR false
  #define INVERT_E2_DIR false
  #define INVERT_E3_DIR false
  #define INVERT_E4_DIR false
  
  #define X_HOME_DIR -1
  #define Y_HOME_DIR -1
  #define Z_HOME_DIR -1

  #define X_BED_SIZE 330
  #define Y_BED_SIZE 330

  #define X_MIN_POS -3
  #define Y_MIN_POS -15
  
  #define X_MAX_POS X_BED_SIZE
  #define Y_MAX_POS Y_BED_SIZE
  #define Z_MAX_POS 400
  
  #define SDSUPPORT

  #define REVERSE_ENCODER_DIRECTION
  #define REPRAP_DISCOUNT_SMART_CONTROLLER
  #define LCD2004

  #define X_DRIVER_TYPE  DRV8825
  #define Y_DRIVER_TYPE  DRV8825
  #define Z_DRIVER_TYPE  DRV8825
  #define E0_DRIVER_TYPE A4988
#endif

#if ENABLED(TIM_U10)
  #define ALFAWISE_U10
  #define CUSTOM_DRIVERS
  #define X_DRIVER_TYPE  DRV8825
  #define Y_DRIVER_TYPE  DRV8825
  #define Z_DRIVER_TYPE  DRV8825
  #define E0_DRIVER_TYPE A4988
  #define CUSTOM_PROBE
  #define X_PROBE_OFFSET_FROM_EXTRUDER -48  // X offset: -left  +right  [of the nozzle]
  #define Y_PROBE_OFFSET_FROM_EXTRUDER -2  // Y offset: -front +behind [the nozzle]
  #define EZABL_POINTS 4
  #define EZABL_PROBE_EDGE 25
  #define NO_COLD_PREVENT
  #define EZABL_FASTPROBE
  #define BABYSTEP_OFFSET
  #define V6_HOTEND
  #define PIDBED_ENABLE
  //#define LINEAR_ADVANCE
  //#define LINEAR_ADVANCE_K 0
  #define NEW_JERK_CONTROL
  #define NEW_ACCELERATION_CONTROL
  #define TITAN_EXTRUDER
  #define USER_PRINTER_NAME "HakU10" 
#endif

#if ENABLED(TIM_TORNADO)
  #define TORNADO
  #define PETSFANG
  #define EZABL_POINTS 3
  #define EZABL_PROBE_EDGE 15
  #define NO_COLD_PREVENT
  #define EZABL_FASTPROBE
  #define BABYSTEP_OFFSET
  #define EZOUTV2_ENABLE
  #define PIDBED_ENABLE
  //#define LINEAR_ADVANCE
  //#define LINEAR_ADVANCE_K 0
  #define NEW_JERK_CONTROL
  #define NEW_ACCELERATION_CONTROL
  #define TITAN_EXTRUDER
  #define USER_PRINTER_NAME "Irma"   
#endif

#if ENABLED(TIM_WI3)
  #define WANHAO_I3
  #define WANHAO_I3_OEM
  #define EZABL_POINTS 3
  #define EZABL_PROBE_EDGE 10
  #define NO_COLD_PREVENT
  #define EZABL_FASTPROBE
  #define BABYSTEP_OFFSET
  #define EZOUTV2_ENABLE
  #define PIDBED_ENABLE
  //#define LINEAR_ADVANCE
  //#define LINEAR_ADVANCE_K 0
  #define NEW_JERK_CONTROL
  #define NEW_ACCELERATION_CONTROL
  #define USER_PRINTER_NAME "HakWi3"   
#endif

#if ENABLED(TIM_EZ300)
  #define TH3D_EZ300
  #define CR10_OEM
  #define EZABL_POINTS 3
  #define EZABL_PROBE_EDGE 45
  #define NO_COLD_PREVENT
  #define EZABL_FASTPROBE
  #define BABYSTEP_OFFSET
  #define PIDBED_ENABLE
  //#define LINEAR_ADVANCE
  //#define LINEAR_ADVANCE_K 0
  #define NEW_JERK_CONTROL
  #define NEW_ACCELERATION_CONTROL
  #define TITAN_EXTRUDER
  #define USER_PRINTER_NAME "HakEZ300"   
#endif

#if ENABLED(TIM_D6)
  #define WANHAO_D6
  #define WANHAO_D6_OEM
  #define EZABL_POINTS 3
  #define EZABL_PROBE_EDGE 20
  #define NO_COLD_PREVENT
  #define EZABL_FASTPROBE
  #define BABYSTEP_OFFSET
  #define EZOUTV2_ENABLE
  #define PIDBED_ENABLE
  //#define LINEAR_ADVANCE
  //#define LINEAR_ADVANCE_K 0
  #define NEW_JERK_CONTROL
  #define NEW_ACCELERATION_CONTROL
  #define USER_PRINTER_NAME "HakD6"   
#endif

#if ENABLED(TIM_CR10MINI)
  #define CR10S_MINI
  #define CR10_V6HEAVYDUTY
  #define CR10LCD_CR10S
  #define EZABL_POINTS 3
  #define EZABL_PROBE_EDGE 30
  #define EZOUTV2_ENABLE
  #define NO_COLD_PREVENT
  #define EZABL_FASTPROBE
  #define BABYSTEP_OFFSET
  #define PIDBED_ENABLE
  //#define LINEAR_ADVANCE
  //#define LINEAR_ADVANCE_K 0
  #define NEW_JERK_CONTROL
  #define NEW_ACCELERATION_CONTROL
  #define TITAN_EXTRUDER
  #define USER_PRINTER_NAME "HakCR10Mini"   
#endif

#if ENABLED(TIM_E10)
  #define TH3DINHOUSEMACHINE
  #define NO_COLD_PREVENT
  
  #ifndef MOTHERBOARD
    #define MOTHERBOARD BOARD_RAMPS_14_EFB
  #endif

  #define CUSTOM_PROBE
  #define X_PROBE_OFFSET_FROM_EXTRUDER -51  // X offset: -left  +right  [of the nozzle]
  #define Y_PROBE_OFFSET_FROM_EXTRUDER -7 // Y offset: -front +behind [the nozzle]
  #define EZABL_POINTS 3
  #define EZABL_PROBE_EDGE 20
  #define EZABL_FASTPROBE
  #define BABYSTEP_OFFSET
  
  //#define LINEAR_ADVANCE
  //#define LINEAR_ADVANCE_K 0
  #define NEW_JERK_CONTROL
  #define NEW_ACCELERATION_CONTROL
    
  #define CUSTOM_MACHINE_NAME "HakE10"
  #define IS_MKS_BOARD_ATX

  #define EZOUTV2_ENABLE

  #define REPRAP_DISCOUNT_FULL_GRAPHIC_SMART_CONTROLLER
  #define BAUDRATE 250000
  
  #define TEMP_SENSOR_0 1
  #define TEMP_SENSOR_BED 5
  
  #define POWER_SUPPLY 1
  
  #if POWER_SUPPLY > 0
  #define PS_DEFAULT_OFF

  #define AUTO_POWER_CONTROL        // Enable automatic control of the PS_ON pin
  #if ENABLED(AUTO_POWER_CONTROL)
    #define AUTO_POWER_FANS           // Turn on PSU if fans need power
    #define AUTO_POWER_E_FANS
    #define AUTO_POWER_CONTROLLERFAN
    #define POWER_TIMEOUT 30
  #endif
  #endif
  
  #define USE_XMIN_PLUG
  #define USE_YMIN_PLUG
  #define USE_ZMIN_PLUG
  #define PIDBED_ENABLE
  #define ENDSTOPPULLUPS
  
  #define X_MIN_ENDSTOP_INVERTING true // set to true to invert the logic of the endstop.
  #define Y_MIN_ENDSTOP_INVERTING true // set to true to invert the logic of the endstop.
  #define Z_MIN_ENDSTOP_INVERTING true // set to true to invert the logic of the endstop.
  #define X_MAX_ENDSTOP_INVERTING false // set to true to invert the logic of the endstop.
  #define Y_MAX_ENDSTOP_INVERTING false // set to true to invert the logic of the endstop.
  #define Z_MAX_ENDSTOP_INVERTING false // set to true to invert the logic of the endstop.
  #define Z_MIN_PROBE_ENDSTOP_INVERTING true // set to true to invert the logic of the probe.

  #define DEFAULT_AXIS_STEPS_PER_UNIT   { 160, 160, 800, 463 }
  #define DEFAULT_MAX_FEEDRATE          { 400, 400, 15, 50 }
  #define DEFAULT_MAX_ACCELERATION      { 2000, 2000, 100, 5000 }
  
  #define DEFAULT_ACCELERATION          1000    // X, Y, Z and E acceleration for printing moves
  #define DEFAULT_RETRACT_ACCELERATION  1000    // E acceleration for retracts
  #define DEFAULT_TRAVEL_ACCELERATION   1000    // X, Y, Z acceleration for travel (non printing) moves

  #define DEFAULT_XJERK                 10.0
  #define DEFAULT_YJERK                 10.0
  #define DEFAULT_ZJERK                  0.4
  #define DEFAULT_EJERK                  5.0
  
  #define INVERT_X_DIR true
  #define INVERT_Y_DIR false
  #define INVERT_Z_DIR false
  
  #define INVERT_E0_DIR true
  #define INVERT_E1_DIR false
  #define INVERT_E2_DIR false
  #define INVERT_E3_DIR false
  #define INVERT_E4_DIR false
  
  #define X_HOME_DIR -1
  #define Y_HOME_DIR -1
  #define Z_HOME_DIR -1

  #define X_BED_SIZE 210
  #define Y_BED_SIZE 270

  #define X_MIN_POS 0
  #define Y_MIN_POS -8
  
  #define X_MAX_POS X_BED_SIZE
  #define Y_MAX_POS Y_BED_SIZE
  #define Z_MAX_POS 300
  
  #define SDSUPPORT

  #define REVERSE_ENCODER_DIRECTION
  #define ANET_FULL_GRAPHICS_LCD

  #define CUSTOM_DRIVERS
  #define X_DRIVER_TYPE  DRV8825
  #define Y_DRIVER_TYPE  DRV8825
  #define Z_DRIVER_TYPE  DRV8825
  #define E0_DRIVER_TYPE A4988
#endif

#if ENABLED(TIM_ENDER2)
  #define ENDER2
  #define ENDER2_V6
  #define EZABL_POINTS 3
  #define EZABL_PROBE_EDGE 15
  #define NO_COLD_PREVENT
  #define EZABL_FASTPROBE
  #define BABYSTEP_OFFSET
  #define EZOUTV2_ENABLE
  #define PIDBED_ENABLE
  //#define LINEAR_ADVANCE
  //#define LINEAR_ADVANCE_K 0
  #define NEW_JERK_CONTROL
  #define NEW_ACCELERATION_CONTROL
  #define USER_PRINTER_NAME "HakEnder2"   
#endif

#if ENABLED(TIM_SMARTT)
  #define TH3DINHOUSEMACHINE
  #define NO_COLD_PREVENT

  #define CUSTOM_DRIVERS
  #define X_DRIVER_TYPE  DRV8825
  #define Y_DRIVER_TYPE  DRV8825
  #define Z_DRIVER_TYPE  DRV8825
  #define E0_DRIVER_TYPE A4988
  
  #define EZOUTV2_ENABLE
  
  #ifndef MOTHERBOARD
    #define MOTHERBOARD BOARD_RAMPS_14_EFB
  #endif

  #define CUSTOM_PROBE
  #define X_PROBE_OFFSET_FROM_EXTRUDER 35  // X offset: -left  +right  [of the nozzle]
  #define Y_PROBE_OFFSET_FROM_EXTRUDER 0  // Y offset: -front +behind [the nozzle]
  #define EZABL_POINTS 3
  #define EZABL_PROBE_EDGE 10
  #define EZABL_FASTPROBE
  #define BABYSTEP_OFFSET
  
  //#define LINEAR_ADVANCE
  //#define LINEAR_ADVANCE_K 0
  #define NEW_JERK_CONTROL
  #define NEW_ACCELERATION_CONTROL
    
  #define CUSTOM_MACHINE_NAME "HakSMARTT"

  #define REPRAP_DISCOUNT_FULL_GRAPHIC_SMART_CONTROLLER
  #define BAUDRATE 250000
  
  #define TEMP_SENSOR_0 1
  #define TEMP_SENSOR_BED 1
  
  #define POWER_SUPPLY 1

  #if POWER_SUPPLY > 0
  #define PS_DEFAULT_OFF

  #define AUTO_POWER_CONTROL        // Enable automatic control of the PS_ON pin
  #if ENABLED(AUTO_POWER_CONTROL)
    #define AUTO_POWER_FANS           // Turn on PSU if fans need power
    #define AUTO_POWER_E_FANS
    #define AUTO_POWER_CONTROLLERFAN
    #define POWER_TIMEOUT 30
  #endif
  #endif
  
  #define USE_XMIN_PLUG
  #define USE_YMIN_PLUG
  #define USE_ZMIN_PLUG
  
  #define ENDSTOPPULLUPS
  
  #define X_MIN_ENDSTOP_INVERTING true // set to true to invert the logic of the endstop.
  #define Y_MIN_ENDSTOP_INVERTING true // set to true to invert the logic of the endstop.
  #define Z_MIN_ENDSTOP_INVERTING true // set to true to invert the logic of the endstop.
  #define X_MAX_ENDSTOP_INVERTING false // set to true to invert the logic of the endstop.
  #define Y_MAX_ENDSTOP_INVERTING false // set to true to invert the logic of the endstop.
  #define Z_MAX_ENDSTOP_INVERTING false // set to true to invert the logic of the endstop.
  #define Z_MIN_PROBE_ENDSTOP_INVERTING true // set to true to invert the logic of the probe.

  #define DEFAULT_AXIS_STEPS_PER_UNIT   {200, 200, 3200, 95}
  #define DEFAULT_MAX_FEEDRATE          { 400, 400, 8, 25 }
  #define DEFAULT_MAX_ACCELERATION      { 1000, 1000, 100, 5000 }
  
  #define DEFAULT_ACCELERATION          1000    // X, Y, Z and E acceleration for printing moves
  #define DEFAULT_RETRACT_ACCELERATION  1000    // E acceleration for retracts
  #define DEFAULT_TRAVEL_ACCELERATION   1000    // X, Y, Z acceleration for travel (non printing) moves

  #define DEFAULT_XJERK                 10.0
  #define DEFAULT_YJERK                 10.0
  #define DEFAULT_ZJERK                  0.4
  #define DEFAULT_EJERK                  5.0
  
  #define INVERT_X_DIR false
  #define INVERT_Y_DIR true
  #define INVERT_Z_DIR false
  
  #define INVERT_E0_DIR true
  #define INVERT_E1_DIR false
  #define INVERT_E2_DIR false
  #define INVERT_E3_DIR false
  #define INVERT_E4_DIR false
  
  #define X_HOME_DIR -1
  #define Y_HOME_DIR -1
  #define Z_HOME_DIR -1

  #define X_BED_SIZE 150
  #define Y_BED_SIZE 145

  #define X_MIN_POS 0
  #define Y_MIN_POS 0
  #define Z_MIN_POS 0
  #define X_MAX_POS X_BED_SIZE
  #define Y_MAX_POS Y_BED_SIZE
  #define Z_MAX_POS 140
  #define PIDBED_ENABLE
  #define SDSUPPORT
  #define ENCODER_PULSES_PER_STEP 4
  #define ENCODER_STEPS_PER_MENU_ITEM 1

  #define REVERSE_ENCODER_DIRECTION
  #define REPRAP_DISCOUNT_FULL_GRAPHIC_SMART_CONTROLLER
#endif

#if ENABLED(TIM_CR10)
  #define TH3DINHOUSEMACHINE
  #define NO_COLD_PREVENT

  #define CUSTOM_DRIVERS
  #define X_DRIVER_TYPE  DRV8825
  #define Y_DRIVER_TYPE  DRV8825
  #define Z_DRIVER_TYPE  DRV8825
  #define E0_DRIVER_TYPE A4988
  
  #ifndef MOTHERBOARD
    #define MOTHERBOARD BOARD_RAMPS_14_EFB
  #endif

  #define CR10_VOLCANO
  #define EZABL_POINTS 3
  #define EZABL_PROBE_EDGE 50
  #define EZABL_FASTPROBE
  #define BABYSTEP_OFFSET
  
  //#define LINEAR_ADVANCE
  //#define LINEAR_ADVANCE_K 0
  #define NEW_JERK_CONTROL
  #define NEW_ACCELERATION_CONTROL
    
  #define CUSTOM_MACHINE_NAME "HakCR10"
  #define IS_MKS_BOARD_ATX

  #define EZOUTV2_ENABLE

  #define REPRAP_DISCOUNT_FULL_GRAPHIC_SMART_CONTROLLER
  #define BAUDRATE 250000
  
  #define TEMP_SENSOR_0 1
  #define TEMP_SENSOR_BED 5
  
  #define POWER_SUPPLY 1
  
  #if POWER_SUPPLY > 0
  #define PS_DEFAULT_OFF

  #define AUTO_POWER_CONTROL        // Enable automatic control of the PS_ON pin
  #if ENABLED(AUTO_POWER_CONTROL)
    #define AUTO_POWER_FANS           // Turn on PSU if fans need power
    #define AUTO_POWER_E_FANS
    #define AUTO_POWER_CONTROLLERFAN
    #define POWER_TIMEOUT 30
  #endif
  #endif
  
  #define USE_XMIN_PLUG
  #define USE_YMIN_PLUG
  #define USE_ZMIN_PLUG
  #define PIDBED_ENABLE
  #define ENDSTOPPULLUPS
  
  #define X_MIN_ENDSTOP_INVERTING false // set to true to invert the logic of the endstop.
  #define Y_MIN_ENDSTOP_INVERTING false // set to true to invert the logic of the endstop.
  #define Z_MIN_ENDSTOP_INVERTING true // set to true to invert the logic of the endstop.
  #define X_MAX_ENDSTOP_INVERTING false // set to true to invert the logic of the endstop.
  #define Y_MAX_ENDSTOP_INVERTING false // set to true to invert the logic of the endstop.
  #define Z_MAX_ENDSTOP_INVERTING false // set to true to invert the logic of the endstop.
  #define Z_MIN_PROBE_ENDSTOP_INVERTING true // set to true to invert the logic of the probe.

  #define DEFAULT_AXIS_STEPS_PER_UNIT   { 160, 160, 800, 463 }
  #define DEFAULT_MAX_FEEDRATE          { 400, 400, 15, 25 }
  #define DEFAULT_MAX_ACCELERATION      { 1000, 1000, 100, 5000 }
  
  #define DEFAULT_ACCELERATION          500    // X, Y, Z and E acceleration for printing moves
  #define DEFAULT_RETRACT_ACCELERATION  1000    // E acceleration for retracts
  #define DEFAULT_TRAVEL_ACCELERATION   500    // X, Y, Z acceleration for travel (non printing) moves

  #define DEFAULT_XJERK                 10.0
  #define DEFAULT_YJERK                 10.0
  #define DEFAULT_ZJERK                  0.4
  #define DEFAULT_EJERK                  5.0
  
  #define INVERT_X_DIR true
  #define INVERT_Y_DIR true
  #define INVERT_Z_DIR false
  
  #define INVERT_E0_DIR false
  #define INVERT_E1_DIR false
  #define INVERT_E2_DIR false
  #define INVERT_E3_DIR false
  #define INVERT_E4_DIR false
  
  #define X_HOME_DIR -1
  #define Y_HOME_DIR -1
  #define Z_HOME_DIR -1

  #define X_BED_SIZE 300
  #define Y_BED_SIZE 300

  #define X_MIN_POS 0
  #define Y_MIN_POS 0
  #define Z_MIN_POS 0
  #define X_MAX_POS X_BED_SIZE
  #define Y_MAX_POS Y_BED_SIZE
  #define Z_MAX_POS 400
  
  #define SDSUPPORT
  #define ENCODER_PULSES_PER_STEP 4
  #define ENCODER_STEPS_PER_MENU_ITEM 1

  #define REVERSE_ENCODER_DIRECTION
  #define REPRAP_DISCOUNT_FULL_GRAPHIC_SMART_CONTROLLER
#endif

#endif // CONFIGURATION_TH3D_H
