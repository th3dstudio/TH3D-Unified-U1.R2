#ifndef CONFIGURATION_BACKEND_H
#define CONFIGURATION_BACKEND_H
#define CONFIGURATION_BACKEND_H_VERSION 010109

//===========================================================================
//======================= DO NOT MODIFY THIS FILE ===========================
//===========================================================================

#if DISABLED(MKS_PRINTER)
  #define X_DRIVER_TYPE  A4988
  #define Y_DRIVER_TYPE  A4988
  #define Z_DRIVER_TYPE  A4988
  #define X2_DRIVER_TYPE A4988
  #define Y2_DRIVER_TYPE A4988
  #define Z2_DRIVER_TYPE A4988
  #define E0_DRIVER_TYPE A4988
  #define E1_DRIVER_TYPE A4988
  #define E2_DRIVER_TYPE A4988
  #define E3_DRIVER_TYPE A4988
  #define E4_DRIVER_TYPE A4988
#endif

//Sensor Mounts
#if ENABLED(CUSTOM_PROBE)
  #define EZABL_ENABLE
#endif
#if ENABLED(ZONESTAR_Z5F_STOCK_ABL)
  #define EZABL_ENABLE
  #define X_PROBE_OFFSET_FROM_EXTRUDER 35
  #define Y_PROBE_OFFSET_FROM_EXTRUDER 0
#endif
#if ENABLED(WANHAO_I3_PLUS_EZABL)
  #define ADVi3PP_PROBE
  #define ADVi3PP_MARK2
  #define EZABL_ENABLE
  #define X_PROBE_OFFSET_FROM_EXTRUDER 0
  #define Y_PROBE_OFFSET_FROM_EXTRUDER 0
  #define Z_PROBE_OFFSET_FROM_EXTRUDER 0
#endif
#if ENABLED(TARANTULA_PRO_OEM)
  #define X_PROBE_OFFSET_FROM_EXTRUDER -65
  #define Y_PROBE_OFFSET_FROM_EXTRUDER 0
  #define EZABL_ENABLE
#endif
#if ENABLED(GEE_A10_V1_OEM)
  #define X_PROBE_OFFSET_FROM_EXTRUDER -54
  #define Y_PROBE_OFFSET_FROM_EXTRUDER 0
  #define EZABL_ENABLE
#endif
#if ENABLED(GEE_A10_V2_OEM)
  #define X_PROBE_OFFSET_FROM_EXTRUDER -52
  #define Y_PROBE_OFFSET_FROM_EXTRUDER 0
  #define EZABL_ENABLE
#endif
#if ENABLED(TORNADO_OEM)
  #define X_PROBE_OFFSET_FROM_EXTRUDER -37
  #define Y_PROBE_OFFSET_FROM_EXTRUDER -10
  #define EZABL_ENABLE
#endif
#if ENABLED(TORNADO_VOLCANO)
  #define X_PROBE_OFFSET_FROM_EXTRUDER 30
  #define Y_PROBE_OFFSET_FROM_EXTRUDER 12
  #define EZABL_ENABLE
#endif
#if ENABLED(TORNADO_V6HEAVYDUTY)
  #define X_PROBE_OFFSET_FROM_EXTRUDER 63
  #define Y_PROBE_OFFSET_FROM_EXTRUDER 0
  #define EZABL_ENABLE
#endif
#if ENABLED(TAZ5_OEM)
  #define X_PROBE_OFFSET_FROM_EXTRUDER -52
  #define Y_PROBE_OFFSET_FROM_EXTRUDER 15
  #define EZABL_ENABLE
#endif
#if ENABLED(WANHAO_I3_OEM)
  #define X_PROBE_OFFSET_FROM_EXTRUDER -25
  #define Y_PROBE_OFFSET_FROM_EXTRUDER -38
  #define EZABL_ENABLE
#endif
#if ENABLED(WANHAO_D6_OEM)
  #define X_PROBE_OFFSET_FROM_EXTRUDER 24
  #define Y_PROBE_OFFSET_FROM_EXTRUDER -16
  #define EZABL_ENABLE
#endif
#if ENABLED(WANHAO_I3_DIIICOOLER)
  #define X_PROBE_OFFSET_FROM_EXTRUDER -36
  #define Y_PROBE_OFFSET_FROM_EXTRUDER -37
  #define EZABL_ENABLE
#endif

//ZoneStar Z5F Settings
#if ENABLED(ZONESTAR_Z5F)
  #define BAUDRATE 115200

  #define REPRAP_DISCOUNT_SMART_CONTROLLER
  #define LCD2004

  #define X_MIN_ENDSTOP_INVERTING true
  #define Y_MIN_ENDSTOP_INVERTING true
  #define Z_MIN_ENDSTOP_INVERTING true
  #define X_MAX_ENDSTOP_INVERTING false
  #define Y_MAX_ENDSTOP_INVERTING false
  #define Z_MAX_ENDSTOP_INVERTING false
  #define Z_MIN_PROBE_ENDSTOP_INVERTING false

  #if ENABLED(CUSTOM_ESTEPS)
    #define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, 400, CUSTOM_ESTEPS_VALUE }
  #else
    #define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, 400, 95 }
  #endif
  
  #define DEFAULT_MAX_FEEDRATE          { 200, 200, 15, 50 }
  #define DEFAULT_MAX_ACCELERATION      { 1000, 1000, 500, 5000 }

  #define DEFAULT_ACCELERATION          1000   
  #define DEFAULT_RETRACT_ACCELERATION  1000  
  #define DEFAULT_TRAVEL_ACCELERATION   1000   
  
  #define DEFAULT_XJERK                 7.0
  #define DEFAULT_YJERK                 7.0
  #define DEFAULT_ZJERK                 0.3
  #define DEFAULT_EJERK                 5.0
  
  #define INVERT_X_DIR true
  #define INVERT_Y_DIR true
  #define INVERT_Z_DIR false
  
  #if ENABLED(REVERSE_E_MOTOR_DIRECTION)
    #define INVERT_E0_DIR false
  #else
    #define INVERT_E0_DIR true
  #endif
    
  #ifndef MOTHERBOARD
    #define MOTHERBOARD BOARD_ZRIB_V20
  #endif

  #define X_BED_SIZE 220
  #define Y_BED_SIZE 220
  #define Z_MAX_POS 220

  #if ENABLED(HOME_ADJUST)
    #define X_MIN_POS X_HOME_ADJUST_LOCATION
    #define Y_MIN_POS Y_HOME_ADJUST_LOCATION
  #else
    #define X_MIN_POS -15
    #define Y_MIN_POS -21
  #endif
  
  //#define ENCODER_PULSES_PER_STEP 4
  //#define ENCODER_STEPS_PER_MENU_ITEM 1
  
  #define PRINTER_ENABLED_CHECK

#endif

//CTC I3 Pro B Settings
#if ENABLED(CTC_I3_PROB)
  #ifndef MOTHERBOARD
    #define MOTHERBOARD BOARD_ANET_10
  #endif
  
  #define SLIM_1284P

  #define DIRECT_DRIVE_PRINTER
  #define DISABLE_BOOT
  
  #define ZONESTAR_LCD
  #define LCD2004
  
  #define BAUDRATE 250000

  #define X_MIN_ENDSTOP_INVERTING false
  #define Y_MIN_ENDSTOP_INVERTING false
  #define Z_MIN_ENDSTOP_INVERTING false
  #define X_MAX_ENDSTOP_INVERTING false
  #define Y_MAX_ENDSTOP_INVERTING false
  #define Z_MAX_ENDSTOP_INVERTING false
  #define Z_MIN_PROBE_ENDSTOP_INVERTING false
  
  #if ENABLED(CTC_I3_T8_LEAD)
    #define CTC_I3_PROB_LEAD 400
  #else
    #define CTC_I3_PROB_LEAD 2560
  #endif
  
  #if ENABLED(CUSTOM_ESTEPS)
    #define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, CTC_I3_PROB_LEAD, CUSTOM_ESTEPS_VALUE }
  #else
    #define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, CTC_I3_PROB_LEAD, 95 }
  #endif
  
  #define DEFAULT_MAX_FEEDRATE          { 500, 500, 15, 50 }
  #define DEFAULT_MAX_ACCELERATION      { 1000, 1000, 500, 5000 }

  #define DEFAULT_ACCELERATION          500    
  #define DEFAULT_RETRACT_ACCELERATION  1000   
  #define DEFAULT_TRAVEL_ACCELERATION   500    
  
  #define DEFAULT_XJERK                  8.0
  #define DEFAULT_YJERK                  8.0
  #define DEFAULT_ZJERK                  0.4
  #define DEFAULT_EJERK                  5.0
  
  #define INVERT_X_DIR true
  #define INVERT_Y_DIR false
  #define INVERT_Z_DIR true
  
  #if ENABLED(REVERSE_E_MOTOR_DIRECTION)
    #define INVERT_E0_DIR true
  #else
    #define INVERT_E0_DIR false
  #endif

  #define X_BED_SIZE 200
  #define Y_BED_SIZE 200
  #define Z_MAX_POS 180
  
  #if ENABLED(HOME_ADJUST)
    #define X_MIN_POS X_HOME_ADJUST_LOCATION
    #define Y_MIN_POS Y_HOME_ADJUST_LOCATION
  #else
    #define X_MIN_POS 0
    #define Y_MIN_POS 0
  #endif
  
  #define PRINTER_ENABLED_CHECK
#endif //end ctc i3 pro b settings

//Wanhao i3 Plus Settings
#if ENABLED(WANHAO_I3_PLUS)
  #include "advi3pp_defines.h"
  #ifndef MOTHERBOARD
    #define MOTHERBOARD BOARD_I3_PLUS
  #endif

  #define PIDBED_ENABLE

  #define LINEAR_ADVANCE

  #define DISABLE_BOOT
  
  #define I3PLUS_LCD
  #define LCD_USE_I2C_BUZZER
  #define BAUDRATE 115200

  #define X_MIN_ENDSTOP_INVERTING true
  #define Y_MIN_ENDSTOP_INVERTING true
  #define Z_MIN_ENDSTOP_INVERTING true
  #define X_MAX_ENDSTOP_INVERTING true
  #define Y_MAX_ENDSTOP_INVERTING true
  #define Z_MAX_ENDSTOP_INVERTING true
  #define Z_MIN_PROBE_ENDSTOP_INVERTING true
  
  #if ENABLED(CUSTOM_ESTEPS)
    #define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, 400, CUSTOM_ESTEPS_VALUE }
  #else
    #define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, 400, 93 }
  #endif
  
  #define DEFAULT_MAX_FEEDRATE          { 450, 450, 20, 25 }
  #define DEFAULT_MAX_ACCELERATION      { 1000, 1000, 500, 5000 }

  #define DEFAULT_ACCELERATION          800    
  #define DEFAULT_RETRACT_ACCELERATION  800   
  #define DEFAULT_TRAVEL_ACCELERATION   800    
  
  #define DEFAULT_XJERK                  8.0
  #define DEFAULT_YJERK                  8.0
  #define DEFAULT_ZJERK                  0.4
  #define DEFAULT_EJERK                  1.0
  
  #define INVERT_X_DIR true
  #define INVERT_Y_DIR true
  #define INVERT_Z_DIR false
  
  #if ENABLED(REVERSE_E_MOTOR_DIRECTION)
    #define INVERT_E0_DIR true
  #else
    #define INVERT_E0_DIR false
  #endif

  #define X_BED_SIZE 200
  #define Y_BED_SIZE 200
  #define Z_MAX_POS 180
  
  #define REVERSE_MENU_DIRECTION
  
  #define FAN_SOFT_PWM
  
  #define PRINTCOUNTER
  
  #if ENABLED(HOME_ADJUST)
    #define X_MIN_POS X_HOME_ADJUST_LOCATION
    #define Y_MIN_POS Y_HOME_ADJUST_LOCATION
  #else
    #define X_MIN_POS 0
    #define Y_MIN_POS 0
  #endif
    
  #define PRINTER_ENABLED_CHECK
#endif //end wanhao i3 plus

//Tarantula Pro Model Settings
#if ENABLED(TARANTULA_PRO)
  #define BAUDRATE 250000

  #define MKS_MINI_12864

  #define X_MIN_ENDSTOP_INVERTING true
  #define Y_MIN_ENDSTOP_INVERTING true
  #define Z_MIN_ENDSTOP_INVERTING true
  #define X_MAX_ENDSTOP_INVERTING true
  #define Y_MAX_ENDSTOP_INVERTING true
  #define Z_MAX_ENDSTOP_INVERTING true
  #define Z_MIN_PROBE_ENDSTOP_INVERTING true

  #if ENABLED(CUSTOM_ESTEPS)
    #define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, 400, CUSTOM_ESTEPS_VALUE }
  #else
    #define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, 400, 408 }
  #endif
  
  #define DEFAULT_MAX_FEEDRATE          { 400, 400, 15, 50 }
  #define DEFAULT_MAX_ACCELERATION      { 3000, 3000, 500, 5000 }

  #define DEFAULT_ACCELERATION          1000    
  #define DEFAULT_RETRACT_ACCELERATION  1000   
  #define DEFAULT_TRAVEL_ACCELERATION   1500    
  
  #define DEFAULT_XJERK                 10.0
  #define DEFAULT_YJERK                 10.0
  #define DEFAULT_ZJERK                  0.3
  #define DEFAULT_EJERK                  5.0
  
  #define INVERT_X_DIR false
  #define INVERT_Y_DIR true
  #define INVERT_Z_DIR true
  
  #if ENABLED(REVERSE_E_MOTOR_DIRECTION)
    #define INVERT_E0_DIR false
  #else
    #define INVERT_E0_DIR true
  #endif
  
  #ifndef MOTHERBOARD
    #define MOTHERBOARD BOARD_MKS_BASE
  #endif

  #if ENABLED(HOME_ADJUST)
    #define X_MIN_POS X_HOME_ADJUST_LOCATION
    #define Y_MIN_POS Y_HOME_ADJUST_LOCATION
  #else
    #define X_MIN_POS -4
    #define Y_MIN_POS -2
  #endif
  
  #define X_BED_SIZE 240
  #define Y_BED_SIZE 240
  #define Z_MAX_POS 260

  //#define REVERSE_ENCODER_DIRECTION
  
  #define PRINTER_ENABLED_CHECK

#endif //end tarantula pro

//Tronxy X5S Settings
#if ENABLED(TRONXY_X5S)
  #define SLIM_1284P
  #define BAUDRATE 115200
  
  #ifndef MOTHERBOARD
    #define MOTHERBOARD BOARD_MELZI_TRONXY
  #endif
    
  #define X_MIN_ENDSTOP_INVERTING true
  #define Y_MIN_ENDSTOP_INVERTING true
  #define Z_MIN_ENDSTOP_INVERTING true
  #define X_MAX_ENDSTOP_INVERTING false
  #define Y_MAX_ENDSTOP_INVERTING false
  #define Z_MAX_ENDSTOP_INVERTING false
  #define Z_MIN_PROBE_ENDSTOP_INVERTING true

  #if ENABLED(CUSTOM_ESTEPS)
    #define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, 400, CUSTOM_ESTEPS_VALUE }
  #else
    #define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, 400, 95 }
  #endif
  
  #define REPRAP_DISCOUNT_FULL_GRAPHIC_SMART_CONTROLLER
  
  #define DEFAULT_MAX_FEEDRATE          { 400, 400, 15, 50 }

  #define DEFAULT_MAX_ACCELERATION      { 1000, 1000, 500, 5000 }
  
  #define DEFAULT_ACCELERATION          1000    
  #define DEFAULT_RETRACT_ACCELERATION  1000   
  #define DEFAULT_TRAVEL_ACCELERATION   1000
  
  #define COREXY

  #define X_BED_SIZE 330
  #define Y_BED_SIZE 330
  #define Z_MAX_POS 420

  #if ENABLED(HOME_ADJUST)
    #define X_MIN_POS X_HOME_ADJUST_LOCATION
    #define Y_MIN_POS Y_HOME_ADJUST_LOCATION
  #else
    #define X_MIN_POS -6
    #define Y_MIN_POS 0
  #endif

  #define DEFAULT_XJERK                 10.0
  #define DEFAULT_YJERK                 10.0
  #define DEFAULT_ZJERK                  0.4
  #define DEFAULT_EJERK                  5.0

  #define INVERT_X_DIR true
  #define INVERT_Y_DIR true
  #define INVERT_Z_DIR false

  #if ENABLED(REVERSE_E_MOTOR_DIRECTION)
    #define INVERT_E0_DIR true
  #else
    #define INVERT_E0_DIR false
  #endif
  
  #define PRINTER_ENABLED_CHECK
#endif //end x5s settings

//Tronxy X3S Settings
#if ENABLED(TRONXY_X3S)
  #define SLIM_1284P
  #define BAUDRATE 115200
  
  #ifndef MOTHERBOARD
    #define MOTHERBOARD BOARD_MELZI_TRONXY
  #endif
    
  #define X_MIN_ENDSTOP_INVERTING true
  #define Y_MIN_ENDSTOP_INVERTING true
  #define Z_MIN_ENDSTOP_INVERTING true
  #define X_MAX_ENDSTOP_INVERTING true
  #define Y_MAX_ENDSTOP_INVERTING true
  #define Z_MAX_ENDSTOP_INVERTING true
  #define Z_MIN_PROBE_ENDSTOP_INVERTING true

  #if ENABLED(CUSTOM_ESTEPS)
    #define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, 400, CUSTOM_ESTEPS_VALUE }
  #else
    #define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, 400, 95 }
  #endif
  
  #define REPRAP_DISCOUNT_FULL_GRAPHIC_SMART_CONTROLLER
  
  #define DEFAULT_MAX_FEEDRATE          { 300, 300, 15, 50 }

  #define DEFAULT_MAX_ACCELERATION      { 500, 500, 500, 5000 }
  
  #define DEFAULT_ACCELERATION          500    
  #define DEFAULT_RETRACT_ACCELERATION  3000   
  #define DEFAULT_TRAVEL_ACCELERATION   500    

  #define X_BED_SIZE 330
  #define Y_BED_SIZE 330
  #define Z_MAX_POS 420

  #if ENABLED(HOME_ADJUST)
    #define X_MIN_POS X_HOME_ADJUST_LOCATION
    #define Y_MIN_POS Y_HOME_ADJUST_LOCATION
  #else
    #define X_MIN_POS 0
    #define Y_MIN_POS 0
  #endif

  #define DEFAULT_XJERK                 10.0
  #define DEFAULT_YJERK                 10.0
  #define DEFAULT_ZJERK                  0.4
  #define DEFAULT_EJERK                  5.0

  #define INVERT_X_DIR false
  #define INVERT_Y_DIR false
  #define INVERT_Z_DIR true

  #if ENABLED(REVERSE_E_MOTOR_DIRECTION)
    #define INVERT_E0_DIR true
  #else
    #define INVERT_E0_DIR false
  #endif
  
  #define PRINTER_ENABLED_CHECK
#endif //end x3s settings

//DY-H9 Settings
#if ENABLED(DY_H9)
  #ifndef MOTHERBOARD
    #define MOTHERBOARD BOARD_MKS_GEN_L
  #endif

  #define REPRAP_DISCOUNT_FULL_GRAPHIC_SMART_CONTROLLER
  #define BAUDRATE 115200

  #define X_MIN_ENDSTOP_INVERTING true
  #define Y_MIN_ENDSTOP_INVERTING true
  #define Z_MIN_ENDSTOP_INVERTING true
  #define X_MAX_ENDSTOP_INVERTING true
  #define Y_MAX_ENDSTOP_INVERTING true
  #define Z_MAX_ENDSTOP_INVERTING true
  #define Z_MIN_PROBE_ENDSTOP_INVERTING true
  
  #if ENABLED(CUSTOM_ESTEPS)
    #define DEFAULT_AXIS_STEPS_PER_UNIT   { 160, 160, 400, CUSTOM_ESTEPS_VALUE }
  #else
    #define DEFAULT_AXIS_STEPS_PER_UNIT   { 160, 160, 800, 200 }
  #endif
  
  #undef X_DRIVER_TYPE
  #undef Y_DRIVER_TYPE
  #undef Z_DRIVER_TYPE
  #undef E0_DRIVER_TYPE
  #define X_DRIVER_TYPE  DVR8825
  #define Y_DRIVER_TYPE  DVR8825
  #define Z_DRIVER_TYPE  DVR8825
  #define E0_DRIVER_TYPE DVR8825
  
  #define DEFAULT_MAX_FEEDRATE          { 300, 300, 15, 50 }
  #define DEFAULT_MAX_ACCELERATION      { 2000, 2000, 500, 5000 }

  #define DEFAULT_ACCELERATION          1000    
  #define DEFAULT_RETRACT_ACCELERATION  1500   
  #define DEFAULT_TRAVEL_ACCELERATION   1000    
  
  #define DEFAULT_XJERK                 10.0
  #define DEFAULT_YJERK                 10.0
  #define DEFAULT_ZJERK                  0.4
  #define DEFAULT_EJERK                  5.0
  
  #define INVERT_X_DIR true
  #define INVERT_Y_DIR false
  #define INVERT_Z_DIR true
  
  #if ENABLED(REVERSE_E_MOTOR_DIRECTION)
    #define INVERT_E0_DIR false
  #else
    #define INVERT_E0_DIR true
  #endif

  #define X_BED_SIZE 300
  #define Y_BED_SIZE 300
  #define Z_MAX_POS 400
  
  #if ENABLED(HOME_ADJUST)
    #define X_MIN_POS X_HOME_ADJUST_LOCATION
    #define Y_MIN_POS Y_HOME_ADJUST_LOCATION
  #else
    #define X_MIN_POS 0
    #define Y_MIN_POS 0
  #endif
  
  #define ENCODER_PULSES_PER_STEP 4
  #define ENCODER_STEPS_PER_MENU_ITEM 1
  
  #define PRINTER_ENABLED_CHECK
#endif

//Geeetech A10/A10M/A20/A20M Settings
#if ENABLED(GEEETECH_A10_V1) || ENABLED(GEEETECH_A10_V2) || ENABLED(GEEETECH_A20) || ENABLED(GEEETECH_A20M) || ENABLED(GEEETECH_A10M)
  #define GEEETECH_BED_TEMPSENSOR
  
  #if ENABLED(GEEETECH_A10_V1)
	  #ifndef MOTHERBOARD
  		#define MOTHERBOARD BOARD_GT2560_REV_B
  	#endif
  #endif
  
  #if ENABLED(GEEETECH_A10_V2) || ENABLED(GEEETECH_A20) || ENABLED(GEEETECH_A20M) || ENABLED(GEEETECH_A10M)
	  #ifndef MOTHERBOARD
  		#define MOTHERBOARD BOARD_GT2560_V3_0
  	#endif
  #endif

  #if ENABLED(GEEETECH_A10_V1) || ENABLED(GEEETECH_A10_V2) || ENABLED(GEEETECH_A10M)
	  #define REPRAP_DISCOUNT_SMART_CONTROLLER
	  #define LCD2004
	  #define X_BED_SIZE 220
	  #define Y_BED_SIZE 220
	  #define Z_MAX_POS 260
  #endif
  
  #if ENABLED(GEEETECH_A20) || ENABLED(GEEETECH_A20M)
	  #define REPRAP_DISCOUNT_FULL_GRAPHIC_SMART_CONTROLLER
	  #define X_BED_SIZE 250
	  #define Y_BED_SIZE 250
	  #define Z_MAX_POS 250
  #endif
  
  #define BAUDRATE 250000

  #define X_MIN_ENDSTOP_INVERTING true
  #define Y_MIN_ENDSTOP_INVERTING true
  #define Z_MIN_ENDSTOP_INVERTING true
  #define X_MAX_ENDSTOP_INVERTING true
  #define Y_MAX_ENDSTOP_INVERTING true
  #define Z_MAX_ENDSTOP_INVERTING true
  #define Z_MIN_PROBE_ENDSTOP_INVERTING true
  
  #if ENABLED(CUSTOM_ESTEPS)
    #define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, 400, CUSTOM_ESTEPS_VALUE }
  #else
    #if ENABLED(GEEETECH_A20M) || ENABLED(GEEETECH_A10M)
      #define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, 400, 340 }
    #else
      #define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, 400, 95 }
    #endif
  #endif
  
  #define DEFAULT_MAX_FEEDRATE          { 300, 300, 15, 50 }
  #define DEFAULT_MAX_ACCELERATION      { 2000, 2000, 500, 5000 }

  #define DEFAULT_ACCELERATION          750    
  #define DEFAULT_RETRACT_ACCELERATION  1500   
  #define DEFAULT_TRAVEL_ACCELERATION   750    
  
  #define DEFAULT_XJERK                 10.0
  #define DEFAULT_YJERK                 10.0
  #define DEFAULT_ZJERK                  0.4
  #define DEFAULT_EJERK                  5.0
  
  #define INVERT_X_DIR true
  #define INVERT_Y_DIR true
  #define INVERT_Z_DIR false
  
  #if ENABLED(GEEETECH_A20M) || ENABLED(GEEETECH_A10M)
    #define DUAL_EXTRUDERS
    #define INVERT_E1_DIR false
    #define SINGLENOZZLE
  #endif
  
  #if ENABLED(GEEETECH_A20M) || ENABLED(GEEETECH_A10M)
    #if ENABLED(REVERSE_E_MOTOR_DIRECTION)
	  #define INVERT_E0_DIR true
    #else
      #define INVERT_E0_DIR false
    #endif
  #else  
    #if ENABLED(REVERSE_E_MOTOR_DIRECTION)
      #define INVERT_E0_DIR false
    #else
      #define INVERT_E0_DIR true
    #endif
  #endif
  
  #if ENABLED(HOME_ADJUST)
    #define X_MIN_POS X_HOME_ADJUST_LOCATION
    #define Y_MIN_POS Y_HOME_ADJUST_LOCATION
  #else
    #define X_MIN_POS -7
    #define Y_MIN_POS -5
  #endif
  
  #define ENCODER_PULSES_PER_STEP 4
  #define ENCODER_STEPS_PER_MENU_ITEM 1
  
  #define PRINTER_ENABLED_CHECK
#endif

//FT-5 Model Settings
#if ENABLED(FT5)
  #ifndef MOTHERBOARD
    #define MOTHERBOARD BOARD_MKS_GEN_13
  #endif

  #if DISABLED(FT5_12864LCD)
    #define REPRAP_DISCOUNT_SMART_CONTROLLER
    #define LCD2004
  #else
    #define REPRAP_DISCOUNT_FULL_GRAPHIC_SMART_CONTROLLER
  #endif
  
  #define BAUDRATE 250000
  #define DIRECT_DRIVE_PRINTER

  #define X_MIN_ENDSTOP_INVERTING true
  #define Y_MIN_ENDSTOP_INVERTING true
  #define Z_MIN_ENDSTOP_INVERTING true
  #define X_MAX_ENDSTOP_INVERTING true
  #define Y_MAX_ENDSTOP_INVERTING true
  #define Z_MAX_ENDSTOP_INVERTING true
  #define Z_MIN_PROBE_ENDSTOP_INVERTING true
  
  #if ENABLED(CUSTOM_ESTEPS)
    #define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, 400, CUSTOM_ESTEPS_VALUE }
  #else
    #define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, 400, 105 }
  #endif
  
  #define DEFAULT_MAX_FEEDRATE          { 300, 300, 15, 25 }
  #define DEFAULT_MAX_ACCELERATION      { 800, 800, 500, 5000 }

  #define DEFAULT_ACCELERATION          800    
  #define DEFAULT_RETRACT_ACCELERATION  2500   
  #define DEFAULT_TRAVEL_ACCELERATION   800    
  
  #define DEFAULT_XJERK                 10.0
  #define DEFAULT_YJERK                 10.0
  #define DEFAULT_ZJERK                  0.4
  #define DEFAULT_EJERK                  5.0
  
  #define INVERT_X_DIR true
  #define INVERT_Y_DIR false
  #define INVERT_Z_DIR true
  
  #if ENABLED(REVERSE_E_MOTOR_DIRECTION)
    #define INVERT_E0_DIR true
  #else
    #define INVERT_E0_DIR false
  #endif

  #define X_BED_SIZE 300
  #define Y_BED_SIZE 300
  #define Z_MAX_POS 380
  
  #if ENABLED(HOME_ADJUST)
    #define X_MIN_POS X_HOME_ADJUST_LOCATION
    #define Y_MIN_POS Y_HOME_ADJUST_LOCATION
  #else
    #define X_MIN_POS 0
    #define Y_MIN_POS 0
  #endif
  
  #define ENCODER_PULSES_PER_STEP 4
  #define ENCODER_STEPS_PER_MENU_ITEM 1
  
  #define REVERSE_ENCODER_DIRECTION
  
  #define PRINTER_ENABLED_CHECK

#endif
//end FT-5 Model Settings

//Wanhao D6 Model Settings
#if ENABLED(WANHAO_D6)
  #define BAUDRATE 250000
  
  #define ULTIPANEL
  #define U8GLIB_SSD1306
  #define LCD_WIDTH 22
  #define LCD_HEIGHT 5
  #define LCD_RESET_PIN 5
  #define PCA9632
  
  #define DIRECT_DRIVE_PRINTER
  
  #define X_MIN_ENDSTOP_INVERTING true
  #define Y_MIN_ENDSTOP_INVERTING true
  #define Z_MIN_ENDSTOP_INVERTING true
  #define X_MAX_ENDSTOP_INVERTING true
  #define Y_MAX_ENDSTOP_INVERTING true
  #define Z_MAX_ENDSTOP_INVERTING true
  #define Z_MIN_PROBE_ENDSTOP_INVERTING true
  
  #define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, 400, 99 }

  #define DEFAULT_MAX_FEEDRATE          { 300, 300, 15, 50 }

  #define DEFAULT_MAX_ACCELERATION      { 1500, 1500, 500, 5000 }

  #define DEFAULT_ACCELERATION          500    // X, Y, Z and E acceleration for printing moves
  #define DEFAULT_RETRACT_ACCELERATION  1000    // E acceleration for retracts
  #define DEFAULT_TRAVEL_ACCELERATION   500    // X, Y, Z acceleration for travel (non printing) moves
  
  #define DEFAULT_XJERK                 10.0
  #define DEFAULT_YJERK                 10.0
  #define DEFAULT_ZJERK                  0.3
  #define DEFAULT_EJERK                  1.0
  
  #define INVERT_X_DIR true
  #define INVERT_Y_DIR false
  #define INVERT_Z_DIR true
  #define INVERT_E0_DIR true
  
  #ifndef MOTHERBOARD
    #define MOTHERBOARD BOARD_ULTIMAIN_2
  #endif
  
  #if ENABLED(WANHAO_D6_5015)
    #define X_BED_SIZE 175
  #else
    #define X_BED_SIZE 200
  #endif
  #define Y_BED_SIZE 200  
  #define Z_MAX_POS 170

  #if ENABLED(HOME_ADJUST)
    #define X_MIN_POS X_HOME_ADJUST_LOCATION
    #define Y_MIN_POS Y_HOME_ADJUST_LOCATION
  #else
    #define X_MIN_POS 0
    #define Y_MIN_POS 0
  #endif
  
  #define ENCODER_PULSES_PER_STEP 2
  #define ENCODER_STEPS_PER_MENU_ITEM 1
  #define REVERSE_ENCODER_DIRECTION
  
  #define PRINTER_ENABLED_CHECK

#endif //end D6

//Wanhao i3 Model Settings
#if ENABLED(WANHAO_I3)
  #define SLIM_1284P
  #define BAUDRATE 115200
  
  #if ENABLED(EZOUTV2_ENABLE)
    #define SPEAKER_KILL
  #endif
  
  #ifndef MOTHERBOARD
    #define MOTHERBOARD BOARD_MELZI_MAKR3D
  #endif
  #define IS_WANHAO_DI3

  #define DIRECT_DRIVE_PRINTER
  
  #define X_MIN_ENDSTOP_INVERTING true
  #define Y_MIN_ENDSTOP_INVERTING true
  #define Z_MIN_ENDSTOP_INVERTING true
  #define X_MAX_ENDSTOP_INVERTING true
  #define Y_MAX_ENDSTOP_INVERTING true
  #define Z_MAX_ENDSTOP_INVERTING true
  #define Z_MIN_PROBE_ENDSTOP_INVERTING true

  #if ENABLED(CUSTOM_ESTEPS)
    #define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, 400, CUSTOM_ESTEPS_VALUE }
  #else
    #define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, 400, 100 }
  #endif
  
  #define DEFAULT_MAX_FEEDRATE          { 300, 300, 15, 50 }

  #define DEFAULT_MAX_ACCELERATION      { 1000, 1000, 500, 5000 }
  
  #define DEFAULT_ACCELERATION          700    
  #define DEFAULT_RETRACT_ACCELERATION  3000   
  #define DEFAULT_TRAVEL_ACCELERATION   700    

  #define X_BED_SIZE 200
  #define Y_BED_SIZE 200
  #define Z_MAX_POS 180

  #if ENABLED(HOME_ADJUST)
    #define X_MIN_POS X_HOME_ADJUST_LOCATION
    #define Y_MIN_POS Y_HOME_ADJUST_LOCATION
  #else
    #define X_MIN_POS 0
    #define Y_MIN_POS 0
  #endif

  #define DEFAULT_XJERK                 10.0
  #define DEFAULT_YJERK                 10.0
  #define DEFAULT_ZJERK                  0.4
  #define DEFAULT_EJERK                  5.0

  #define INVERT_X_DIR false
  #define INVERT_Y_DIR false
  #define INVERT_Z_DIR true

  #if ENABLED(REVERSE_E_MOTOR_DIRECTION)
    #define INVERT_E0_DIR false
  #else
    #define INVERT_E0_DIR true
  #endif

  #ifndef ST7920_DELAY_1
    #define ST7920_DELAY_1 DELAY_NS(200)
  #endif
  #ifndef ST7920_DELAY_2
    #define ST7920_DELAY_2 DELAY_NS(200)
  #endif
  #ifndef ST7920_DELAY_3
    #define ST7920_DELAY_3 DELAY_NS(200)
  #endif

  #define LCD_FOR_MELZI
  
  #define PRINTER_ENABLED_CHECK
#endif //end i3 settings

//Tornado Model Settings
#if ENABLED(TORNADO)
  #define BAUDRATE 250000

  #define REPRAP_DISCOUNT_FULL_GRAPHIC_SMART_CONTROLLER

  #define X_MIN_ENDSTOP_INVERTING true
  #define Y_MIN_ENDSTOP_INVERTING true
  #define Z_MIN_ENDSTOP_INVERTING true
  #define X_MAX_ENDSTOP_INVERTING true
  #define Y_MAX_ENDSTOP_INVERTING true
  #define Z_MAX_ENDSTOP_INVERTING true
  #define Z_MIN_PROBE_ENDSTOP_INVERTING true

  #if ENABLED(CUSTOM_ESTEPS)
    #define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, 400, CUSTOM_ESTEPS_VALUE }
  #else
    #define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, 400, 400 }
  #endif
  
  #define DEFAULT_MAX_FEEDRATE          { 500, 500, 15, 50 }
  #define DEFAULT_MAX_ACCELERATION      { 1000, 1000, 500, 5000 }

  #define DEFAULT_ACCELERATION          500    
  #define DEFAULT_RETRACT_ACCELERATION  1000   
  #define DEFAULT_TRAVEL_ACCELERATION   500    
  
  #define DEFAULT_XJERK                 10.0
  #define DEFAULT_YJERK                 10.0
  #define DEFAULT_ZJERK                  0.4
  #define DEFAULT_EJERK                  5.0
  
  #define INVERT_X_DIR false
  #define INVERT_Y_DIR false
  #define INVERT_Z_DIR true
  
  #if ENABLED(REVERSE_E_MOTOR_DIRECTION)
    #define INVERT_E0_DIR false
  #else
    #define INVERT_E0_DIR true
  #endif
  
  #ifndef MOTHERBOARD
    #define MOTHERBOARD BOARD_MKS_BASE
  #endif

  #if ENABLED(HOME_ADJUST)
    #define X_MIN_POS X_HOME_ADJUST_LOCATION
    #define Y_MIN_POS Y_HOME_ADJUST_LOCATION
  #else
    #define X_MIN_POS 0
    #define Y_MIN_POS 0
  #endif
  
  #define X_BED_SIZE 300
  #define Y_BED_SIZE 300
  #define Z_MAX_POS 400

  #define REVERSE_ENCODER_DIRECTION
  
  #define PRINTER_ENABLED_CHECK

#endif //end tornado

//TAZ5 Model Settings
#if ENABLED(TAZ5)
  #define BAUDRATE 250000
  #define V6_HOTEND
  
  #define DIRECT_DRIVE_PRINTER

  #define REPRAP_DISCOUNT_FULL_GRAPHIC_SMART_CONTROLLER

  #define X_MIN_ENDSTOP_INVERTING true
  #define Y_MIN_ENDSTOP_INVERTING true
  #define Z_MIN_ENDSTOP_INVERTING true
  #define X_MAX_ENDSTOP_INVERTING true
  #define Y_MAX_ENDSTOP_INVERTING true
  #define Z_MAX_ENDSTOP_INVERTING true
  #define Z_MIN_PROBE_ENDSTOP_INVERTING true
  
  #if ENABLED(CUSTOM_ESTEPS)
    #define DEFAULT_AXIS_STEPS_PER_UNIT {100.5,100.5,1600,CUSTOM_ESTEPS_VALUE}
  #else
    #define DEFAULT_AXIS_STEPS_PER_UNIT {100.5,100.5,1600,830}
  #endif
  
  #define DEFAULT_MAX_FEEDRATE {300, 300, 3, 50}

  #define DEFAULT_MAX_ACCELERATION {9000, 9000, 500, 5000}

  #define DEFAULT_ACCELERATION          500    // X, Y, Z and E acceleration for printing moves
  #define DEFAULT_RETRACT_ACCELERATION  3000    // E acceleration for retracts
  #define DEFAULT_TRAVEL_ACCELERATION   500    // X, Y, Z acceleration for travel (non printing) moves  
  
  #define DEFAULT_XJERK                  8.0
  #define DEFAULT_YJERK                  8.0
  #define DEFAULT_ZJERK                  0.4
  #define DEFAULT_EJERK                  5.0
  
  #define INVERT_X_DIR false
  #define INVERT_Y_DIR true
  #define INVERT_Z_DIR false
  
  #if ENABLED(REVERSE_E_MOTOR_DIRECTION)
    #define INVERT_E0_DIR false
  #else
    #define INVERT_E0_DIR true
  #endif
  
  #ifndef MOTHERBOARD
    #define MOTHERBOARD BOARD_RAMBO
  #endif

  #if ENABLED(HOME_ADJUST)
    #define X_MIN_POS X_HOME_ADJUST_LOCATION
    #define Y_MIN_POS Y_HOME_ADJUST_LOCATION
  #else
    #define X_MIN_POS 0
    #define Y_MIN_POS 0
  #endif
  
  #define X_BED_SIZE 295
  #define Y_BED_SIZE 295
  #define Z_MAX_POS 250
  
  #define PRINTER_ENABLED_CHECK
#endif //end taz5

#if ENABLED(SLIM_1284P) && ENABLED(BLTOUCH)
  #define DISABLE_BOOT
#endif

//Machine Check
#if DISABLED(PRINTER_ENABLED_CHECK)
  #if DISABLED(TH3DINHOUSEMACHINE)  
    #error "READ THIS: No printer uncommented in Configuration.h file. Please uncomment your printer and try again."
  #endif
#endif


//Misc Settings
#if defined(USER_PRINTER_NAME)
  #define CUSTOM_MACHINE_NAME USER_PRINTER_NAME
#else
  #if ENABLED(TH3D_EZ300)
    #define CUSTOM_MACHINE_NAME "Alpha EZ300"
  #elif ENABLED(BLTOUCH)
    #define CUSTOM_MACHINE_NAME "TH3D BLTouch"
  #elif ENABLED(CR10S_PRO_STOCK_ABL) && ENABLED(CR10S_PRO)
    #define CUSTOM_MACHINE_NAME "CR-10S Pro"
  #elif ENABLED(EZABL_ENABLE)
    #define CUSTOM_MACHINE_NAME "TH3D EZABL"
  #elif ENABLED(EZOUT_ENABLE)
    #define CUSTOM_MACHINE_NAME "TH3D EZOut"
  #else
    #define CUSTOM_MACHINE_NAME SHORT_BUILD_VERSION
  #endif
#endif

//Fixes issues with XY not homing due to noisy endstop cables
#define ENDSTOP_NOISE_FILTER
#define ENDSTOP_NOISE_FILTER_SAMPLING 2

#if ENABLED(SLIM_1284P)
  #define SLIM_LCD_MENUS
  #if ENABLED(LINEAR_ADVANCE)
    #define DISABLE_BOOT
  #elif ENABLED(EZABL_ENABLE)
    #define DISABLE_BOOT
  #endif
#endif

#define STRING_CONFIG_H_AUTHOR "(TH3D)"
#if (ENABLED(SKEW_CORRECTION) && ENABLED(EZABL_ENABLE) && ENABLED(SLIM_1284P)) || (ENABLED(MANUAL_MESH_LEVELING) && ENABLED(SLIM_1284P))
  //#define SHOW_BOOTSCREEN
#else
  #if DISABLED(LCD2004)
    #if DISABLED(DISABLE_BOOT)
      #define SHOW_BOOTSCREEN
      #define SHOW_CUSTOM_BOOTSCREEN
    #endif
  #endif
#endif

#define STRING_SPLASH_LINE1 SHORT_BUILD_VERSION
#define STRING_SPLASH_LINE2 WEBSITE_URL

#define SERIAL_PORT 0

#if (ENABLED(MKS_PRINTER) && ENABLED(DUAL_EXTRUDER_SINGLE_HOTEND)) || (ENABLED(MKS_PRINTER) && ENABLED(DUAL_HOTEND_DUAL_NOZZLES)) || ENABLED(GEEETECH_A20M) || ENABLED(GEEETECH_A10M)
  #define EXTRUDERS 2
#else
  #define EXTRUDERS 1
#endif

#define DEFAULT_NOMINAL_FILAMENT_DIA 1.75

#define POWER_SUPPLY 0

#if ENABLED(V6_HOTEND)
  #define TEMP_SENSOR_0 5
#elif ENABLED(KNOWN_HOTEND_THERMISTOR)
  #define TEMP_SENSOR_0 KNOWN_HOTEND_THERMISTOR_VALUE
#elif ENABLED(TH3D_HOTEND_THERMISTOR)
  #define TEMP_SENSOR_0 1
#elif ENABLED(WANHAO_D6)
  #define TEMP_SENSOR_0 20
#elif ENABLED(WANHAO_10K_THERMISTOR)
  #define TEMP_SENSOR_0 99
#elif ENABLED(WANHAO_I3MINI)
  #define TEMP_SENSOR_0 13
#else
  #define TEMP_SENSOR_0 1
#endif

#if ENABLED(DUAL_HOTEND_DUAL_NOZZLES)
  #if ENABLED(V6_HOTEND)
    #define TEMP_SENSOR_1 5
  #elif ENABLED(KNOWN_HOTEND_THERMISTOR)
    #define TEMP_SENSOR_1 KNOWN_HOTEND_THERMISTOR_VALUE
  #else
    #define TEMP_SENSOR_1 1
  #endif
#else
  #define TEMP_SENSOR_1 0
#endif
#define TEMP_SENSOR_2 0
#define TEMP_SENSOR_3 0
#define TEMP_SENSOR_4 0

#if ENABLED(AC_BED)
  #define TEMP_SENSOR_BED 0
#elif ENABLED(KNOWN_BED_THERMISTOR)
  #define TEMP_SENSOR_BED KNOWN_BED_THERMISTOR_VALUE
#elif ENABLED(TH3D_BED_THERMISTOR)
  #define TEMP_SENSOR_BED 1
#elif ENABLED(TAZ5)
  #define TEMP_SENSOR_BED 7
#elif ENABLED(WANHAO_D6)
  #define TEMP_SENSOR_BED 1
#elif ENABLED(WANHAO_I3_PLUS)
  #define TEMP_SENSOR_BED 1
#elif ENABLED(KEENOVO_TEMPSENSOR)
  #define TEMP_SENSOR_BED 11
#elif ENABLED(GEEETECH_BED_TEMPSENSOR)
  #define TEMP_SENSOR_BED 1
#else
  #if ENABLED(WANHAO_I3)
    #if ENABLED(WANHAO_10K_THERMISTOR)
      #define TEMP_SENSOR_BED 99
    #else
      #define TEMP_SENSOR_BED 1
    #endif
  #else
    #define TEMP_SENSOR_BED 5
  #endif
#endif

#define TEMP_RESIDENCY_TIME 5  
#define TEMP_HYSTERESIS 3      
#define TEMP_WINDOW     1      

#define TEMP_BED_RESIDENCY_TIME 5 
#define TEMP_BED_HYSTERESIS 3
#define TEMP_BED_WINDOW     1     

#define HEATER_0_MINTEMP 5
#define HEATER_1_MINTEMP 5
#define HEATER_2_MINTEMP 5
#define HEATER_3_MINTEMP 5
#define HEATER_4_MINTEMP 5
#define BED_MINTEMP 5

#if ENABLED(HIGH_TEMP_THERMISTOR)
  #define HEATER_0_MAXTEMP HIGH_TEMP_THERMISTOR_TEMP
#else
  #define HEATER_0_MAXTEMP 290
#endif

#define HEATER_1_MAXTEMP 290
#define HEATER_2_MAXTEMP 290
#define HEATER_3_MAXTEMP 290
#define HEATER_4_MAXTEMP 290

#if ENABLED(BED_HIGHTEMP)
  #define BED_MAXTEMP 150
#else
  #define BED_MAXTEMP 120
#endif

#define PIDTEMP
#define BANG_MAX 255
#define PID_MAX BANG_MAX
#define PID_K1 0.95

#if ENABLED(PIDTEMP)
  #define PID_AUTOTUNE_MENU
  #define PID_FUNCTIONAL_RANGE 10
   
  #define  DEFAULT_Kp 22.2
  #define  DEFAULT_Ki 1.08
  #define  DEFAULT_Kd 114
#endif 

#if ENABLED(PIDBED_ENABLE)
  #if ENABLED(SLIM_1284P) && ENABLED(MANUAL_MESH_LEVELING)
    //do nothing
  #elif ENABLED(SLIM_1284P) && ENABLED(EZABL_ENABLE)
    //do nothing
  #else
    #define PIDTEMPBED
  #endif
#endif

#define MAX_BED_POWER 255

#if ENABLED(PIDTEMPBED)
  #define  DEFAULT_bedKp 113.36
  #define  DEFAULT_bedKi 21.62
  #define  DEFAULT_bedKd 148.59
#endif

#define PREVENT_COLD_EXTRUSION

#define EXTRUDE_MINTEMP 170

#define PREVENT_LENGTHY_EXTRUDE
#define EXTRUDE_MAXLENGTH 1000

#define THERMAL_PROTECTION_HOTENDS 
#define THERMAL_PROTECTION_BED     

#if ENABLED(MKS_PRINTER)
  #if X_HOME_LOCATION == 0
    #define USE_XMIN_PLUG
  #else
    #define USE_XMAX_PLUG
  #endif
  
  #if Y_HOME_LOCATION == 0
    #define USE_YMIN_PLUG
  #else
    #define USE_YMAX_PLUG
  #endif
  
  #define USE_ZMIN_PLUG
#else
  #define USE_XMIN_PLUG
  #define USE_YMIN_PLUG
  #define USE_ZMIN_PLUG
#endif

#define ENDSTOPPULLUPS

#define Z_MIN_PROBE_USES_Z_MIN_ENDSTOP_PIN

#if ENABLED(SLOWER_HOMING)
  #define HOMING_FEEDRATE_XY (20*60)
#else
  #define HOMING_FEEDRATE_XY (40*60)
#endif

#if ENABLED(EZABL_SUPERFASTPROBE) && DISABLED(BLTOUCH)
  #define HOMING_FEEDRATE_Z  (15*60)
#elif ENABLED(EZABL_FASTPROBE) && DISABLED(BLTOUCH)
  #define HOMING_FEEDRATE_Z  (8*60)
#else
  #define HOMING_FEEDRATE_Z  (4*60)
#endif
  
#if ENABLED(EZABL_ENABLE)
  #if DISABLED(BLTOUCH)
    #define FIX_MOUNTED_PROBE
  #endif
  #define Z_PROBE_OFFSET_FROM_EXTRUDER 0
  
  #if ENABLED(PROBING_MOTORS_OFF)
    #define XY_PROBE_SPEED 8000
  #else
    #if ENABLED(SLOWER_PROBE_MOVES) || ENABLED(TH3D_EZ300) || ENABLED(TIM_AM8)
      #define XY_PROBE_SPEED 8000
    #else
      #if ENABLED(EZABL_SUPERFASTPROBE)
        #define XY_PROBE_SPEED 16000
      #else
        #define XY_PROBE_SPEED 12000
      #endif
    #endif
  #endif
  
  #define Z_PROBE_SPEED_FAST HOMING_FEEDRATE_Z
  #define Z_PROBE_SPEED_SLOW (Z_PROBE_SPEED_FAST / 2)  
  #if ENABLED(FIX_MOUNTED_PROBE) && DISABLED(HEATERS_ON_DURING_PROBING)
    #define PROBING_HEATERS_OFF   
  #endif  
  
  #define MULTIPLE_PROBING 2

  #if ENABLED(BLTOUCH)
    #define Z_CLEARANCE_DEPLOY_PROBE   15
    #define Z_CLEARANCE_BETWEEN_PROBES 10
    #define Z_CLEARANCE_MULTI_PROBE    10
    #define ENDSTOPPULLUP_ZMIN
    #define ENDSTOPPULLUP_ZMIN_PROBE
  #elif ENABLED(EZABL_SUPERFASTPROBE)
    #define Z_CLEARANCE_DEPLOY_PROBE   1
    #define Z_CLEARANCE_BETWEEN_PROBES 2
    #define Z_CLEARANCE_MULTI_PROBE    1
  #else
    #define Z_CLEARANCE_DEPLOY_PROBE   5
    #define Z_CLEARANCE_BETWEEN_PROBES 3
    #define Z_CLEARANCE_MULTI_PROBE    3
  #endif
  
  #define Z_PROBE_OFFSET_RANGE_MIN  -5
  #define Z_PROBE_OFFSET_RANGE_MAX  1  
  #define Z_MIN_PROBE_REPEATABILITY_TEST  
  #define Z_AFTER_PROBING           5
  #define Z_PROBE_LOW_POINT         -3  
  #define AUTO_BED_LEVELING_BILINEAR
  #define Z_SAFE_HOMING
  #define GRID_MAX_POINTS_X EZABL_POINTS
  #define GRID_MAX_POINTS_Y GRID_MAX_POINTS_X
  #define LEFT_PROBE_BED_POSITION (max(EZABL_PROBE_EDGE, X_PROBE_OFFSET_FROM_EXTRUDER))
  #define RIGHT_PROBE_BED_POSITION (min(X_BED_SIZE - EZABL_PROBE_EDGE, X_BED_SIZE + X_PROBE_OFFSET_FROM_EXTRUDER))
  #define FRONT_PROBE_BED_POSITION (max(EZABL_PROBE_EDGE, Y_PROBE_OFFSET_FROM_EXTRUDER))
  #define BACK_PROBE_BED_POSITION (min(Y_BED_SIZE - EZABL_PROBE_EDGE, Y_BED_SIZE + Y_PROBE_OFFSET_FROM_EXTRUDER))
  #define MIN_PROBE_EDGE 5
  #define Z_SAFE_HOMING_X_POINT ((X_BED_SIZE) / 2)
  #define Z_SAFE_HOMING_Y_POINT ((Y_BED_SIZE) / 2)
  #if ENABLED(EZABL_OUTSIDE_GRID_COMPENSATION)
    #define EXTRAPOLATE_BEYOND_GRID
  #endif
  #if ENABLED(FIX_MOUNTED_PROBE)
    #undef Z_MIN_PROBE_ENDSTOP_INVERTING
    #define Z_MIN_PROBE_ENDSTOP_INVERTING true
    #undef Z_MIN_ENDSTOP_INVERTING
    #define Z_MIN_ENDSTOP_INVERTING true
  #endif
  #if ENABLED(BLTOUCH)
    #undef Z_MIN_PROBE_ENDSTOP_INVERTING
    #define Z_MIN_PROBE_ENDSTOP_INVERTING false
    #undef Z_MIN_ENDSTOP_INVERTING
    #define Z_MIN_ENDSTOP_INVERTING false
  #endif
#endif

#define X_ENABLE_ON 0
#define Y_ENABLE_ON 0
#define Z_ENABLE_ON 0
#define E_ENABLE_ON 0 

#define DISABLE_X false
#define DISABLE_Y false
#define DISABLE_Z false

#define DISABLE_E false
#define DISABLE_INACTIVE_EXTRUDER true

#if DISABLED(DUAL_EXTRUDERS)
  #define INVERT_E1_DIR false
#endif
#define INVERT_E2_DIR false
#define INVERT_E3_DIR false
#define INVERT_E4_DIR false

#if ENABLED(MKS_PRINTER)
  #if X_HOME_LOCATION == 0
    #define X_HOME_DIR -1
  #else
    #define X_HOME_DIR 1
  #endif
  
  #if Y_HOME_LOCATION == 0
    #define Y_HOME_DIR -1
  #else
    #define Y_HOME_DIR 1
  #endif
  
  #define Z_HOME_DIR -1
#else
  #define X_HOME_DIR -1
  #define Y_HOME_DIR -1
  #define Z_HOME_DIR -1
#endif
  
#define Z_MIN_POS 0
#define X_MAX_POS X_BED_SIZE
#define Y_MAX_POS Y_BED_SIZE

#define MIN_SOFTWARE_ENDSTOPS
#if ENABLED(MIN_SOFTWARE_ENDSTOPS)
  #define MIN_SOFTWARE_ENDSTOP_X
  #define MIN_SOFTWARE_ENDSTOP_Y
  #if DISABLED(EZABL_ENABLE)
    #define MIN_SOFTWARE_ENDSTOP_Z
  #endif
#endif

#define MAX_SOFTWARE_ENDSTOPS
#if ENABLED(MAX_SOFTWARE_ENDSTOPS)
  #define MAX_SOFTWARE_ENDSTOP_X
  #define MAX_SOFTWARE_ENDSTOP_Y
  #define MAX_SOFTWARE_ENDSTOP_Z
#endif

#if ENABLED(EZOUT_ENABLE) || ENABLED(EZOUTV2_ENABLE) || ENABLED(COPYMASTER3D_300) || ENABLED(GEEETECH_A10_V2) || ENABLED(GEEETECH_A20) || ENABLED(GEEETECH_A20M) || ENABLED(GEEETECH_A10M)
  #define FILAMENT_RUNOUT_SENSOR
  #if ENABLED(FILAMENT_RUNOUT_SENSOR)
    #if ENABLED(EZOUT_ENABLE) || ENABLED(EZOUTV2_ENABLE)
      #define FIL_RUNOUT_INVERTING false
    #else
      #define FIL_RUNOUT_INVERTING true
    #endif
    #if ENABLED(GEEETECH_A10M) || ENABLED(GEEETECH_A20M)
        #define NUM_RUNOUT_SENSORS   2
    #else
      #define NUM_RUNOUT_SENSORS   1
    #endif
    #define FIL_RUNOUT_PULLUP
    #define FILAMENT_RUNOUT_SCRIPT "M600"
  #endif
#endif

#if ENABLED(MANUAL_MESH_LEVELING) && DISABLED(EZABL_ENABLE) && DISABLED(WANHAO_I3_PLUS)
  #define PROBE_MANUALLY
  #define LCD_BED_LEVELING
  #define MESH_BED_LEVELING
  #define MBL_Z_STEP 0.025    
  #define LCD_PROBE_Z_RANGE 4 
  #define MESH_INSET 10          
  #define GRID_MAX_POINTS_X 5    
  #define GRID_MAX_POINTS_Y GRID_MAX_POINTS_X
#endif

#if ENABLED(MESH_BED_LEVELING) || ENABLED(AUTO_BED_LEVELING_BILINEAR) || ENABLED(AUTO_BED_LEVELING_UBL)
  //#define ENABLE_LEVELING_FADE_HEIGHT
  #define SEGMENT_LEVELED_MOVES
  #define LEVELED_SEGMENT_LENGTH 5.0
#endif

#define EEPROM_SETTINGS
#define EEPROM_CHITCHAT

#define HOST_KEEPALIVE_FEATURE
#define DEFAULT_KEEPALIVE_INTERVAL 2

#define PREHEAT_1_TEMP_HOTEND 200
#define PREHEAT_1_TEMP_BED     60
#define PREHEAT_1_FAN_SPEED     0 

#define PREHEAT_2_TEMP_HOTEND 240
#define PREHEAT_2_TEMP_BED    100
#define PREHEAT_2_FAN_SPEED     0 

#define NOZZLE_PARK_FEATURE

#if ENABLED(NOZZLE_PARK_FEATURE)
  #if ENABLED(WANHAO_I3) || ENABLED(WANHAO_D6)
    #define NOZZLE_PARK_POINT { (X_MAX_POS - 15), 15, 10 }
    #define NOZZLE_PARK_XY_FEEDRATE 100  
    #define NOZZLE_PARK_Z_FEEDRATE 5  
  #else  
    #define NOZZLE_PARK_POINT { 10, 10, 10 }
    #define NOZZLE_PARK_XY_FEEDRATE 100  
    #define NOZZLE_PARK_Z_FEEDRATE 5  
  #endif
#endif

#define PRINTJOB_TIMER_AUTOSTART

#define DISPLAY_CHARSET_HD44780 JAPANESE

#define SDSUPPORT

#define DISABLE_REDUCED_ACCURACY_WARNING

#define INDIVIDUAL_AXIS_HOMING_MENU

#if DISABLED(EZABL_ENABLE)
  #define LEVEL_BED_CORNERS
  #define LEVEL_CORNERS_INSET 30
  #define LEVEL_CENTER_TOO
#endif

#if ENABLED(BLTOUCH) && ENABLED(SLIM_1284P)
  #define SPEAKER_KILL
#endif

#if DISABLED(SPEAKER_KILL)
  #define SPEAKER
#endif

#if ENABLED(FAN_FIX)
  #define FAN_SOFT_PWM
  #define SOFT_PWM_SCALE 1
#else
  #define SOFT_PWM_SCALE 0
#endif

#endif // CONFIGURATION_BACKEND_H
