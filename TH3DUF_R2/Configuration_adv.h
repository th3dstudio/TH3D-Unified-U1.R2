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

// DO NOT TOUCH THESE SETTINGS.

#ifndef CONFIGURATION_ADV_H
#define CONFIGURATION_ADV_H
#define CONFIGURATION_ADV_H_VERSION 010109

#if DISABLED(PIDTEMPBED)
  #define BED_CHECK_INTERVAL 500
  #if ENABLED(BED_LIMIT_SWITCHING)
    #define BED_HYSTERESIS 2
  #endif
#endif

#if ENABLED(THERMAL_PROTECTION_HOTENDS)
  #define THERMAL_PROTECTION_PERIOD 120        // Seconds
  #define THERMAL_PROTECTION_HYSTERESIS 4     // Degrees Celsius
  #define WATCH_TEMP_PERIOD 120                // Seconds
  #define WATCH_TEMP_INCREASE 4               // Degrees Celsius
#endif

 
#if ENABLED(THERMAL_PROTECTION_BED)
  #define THERMAL_PROTECTION_BED_PERIOD 240    // Seconds
  #define THERMAL_PROTECTION_BED_HYSTERESIS 4 // Degrees Celsius
  #define WATCH_BED_TEMP_PERIOD 240                // Seconds
  #define WATCH_BED_TEMP_INCREASE 4               // Degrees Celsius
#endif

#define TEMP_SENSOR_AD595_OFFSET 0.0
#define TEMP_SENSOR_AD595_GAIN   1.0

#if ENABLED(TAZ5)
  #define USE_CONTROLLER_FAN
  #if ENABLED(USE_CONTROLLER_FAN)
    #define CONTROLLER_FAN_PIN 2  
    #define CONTROLLERFAN_SECS 60          
    #define CONTROLLERFAN_SPEED 255        
  #endif
  #define FAN_KICKSTART_TIME 100
  #define FAN_MIN_PWM 70
  #define DIGIPOT_MOTOR_CURRENT { ((950 -750)/5+135), ((950 -750)/5+135), ((1275 -750)/5+135), ((750 -750)/5+135), ((750 -750)/5+135) }
  #define DIGIPOT_I2C_NUM_CHANNELS 8
  #define DIGIPOT_I2C_MOTOR_CURRENTS { 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0 }  
#endif

#if ENABLED(WANHAO_D6)
  #define CASE_LIGHT_ENABLE
  #if ENABLED(CASE_LIGHT_ENABLE)
    #define CASE_LIGHT_PIN 8                  
    #define INVERT_CASE_LIGHT false           
    #define CASE_LIGHT_DEFAULT_ON true        
    #define CASE_LIGHT_DEFAULT_BRIGHTNESS 255 
    #define MENU_ITEM_CASE_LIGHT              
  #endif

  #define MOTOR_CURRENT_PWM_RANGE 2782
  #define PWM_MOTOR_CURRENT { 1200, 1200, 1000 }
  #define DIGIPOT_I2C_NUM_CHANNELS 8 
  #define DIGIPOT_I2C_MOTOR_CURRENTS { 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0 }
  
  #define ENCODER_RATE_MULTIPLIER 
  #define ENCODER_10X_STEPS_PER_SEC 75
  #define ENCODER_100X_STEPS_PER_SEC 160

  #define CHDK_DELAY 50
  
  #if ENABLED(DOGLCD)
    #define USE_SMALL_INFOFONT
  #endif
  
  #define I2C_SLAVE_ADDRESS  0
  
#endif

#if ENABLED(TORNADO)
#define E0_AUTO_FAN_PIN 7
  #define EXTRUDER_AUTO_FAN_TEMPERATURE 50
  #if ENABLED(TORNADO_QUIET)
    #define EXTRUDER_AUTO_FAN_SPEED  190  
  #else
    #define EXTRUDER_AUTO_FAN_SPEED  255  
  #endif
#else
  #define E0_AUTO_FAN_PIN -1
  #define EXTRUDER_AUTO_FAN_TEMPERATURE 50
  #define EXTRUDER_AUTO_FAN_SPEED   255  
#endif
#define E1_AUTO_FAN_PIN -1
#define E2_AUTO_FAN_PIN -1
#define E3_AUTO_FAN_PIN -1
#define E4_AUTO_FAN_PIN -1

#define X_HOME_BUMP_MM 5
#define Y_HOME_BUMP_MM 5
#define Z_HOME_BUMP_MM 2
#define HOMING_BUMP_DIVISOR { 2, 2, 4 }  
#define QUICK_HOME                    

#define AXIS_RELATIVE_MODES {false, false, false, false}

#define INVERT_X_STEP_PIN false
#define INVERT_Y_STEP_PIN false
#define INVERT_Z_STEP_PIN false
#define INVERT_E_STEP_PIN false

#define DEFAULT_STEPPER_DEACTIVE_TIME 240
#define DISABLE_INACTIVE_X true
#define DISABLE_INACTIVE_Y true
#define DISABLE_INACTIVE_Z false  
#define DISABLE_INACTIVE_E true

#define DEFAULT_MINIMUMFEEDRATE       0.0    
#define DEFAULT_MINTRAVELFEEDRATE     0.0

#if ENABLED(ULTIPANEL)
  #define MANUAL_FEEDRATE {70*60, 70*60, 4*60, 60}
  #define ULTIPANEL_FEEDMULTIPLY  
#endif

#define DEFAULT_MINSEGMENTTIME        25000
#define SLOWDOWN
#define MINIMUM_PLANNER_SPEED 0.05

#if ENABLED(NEW_JERK_CONTROL) && DISABLED(POWER_LOSS_RECOVERY)
  #define JUNCTION_DEVIATION
  #define JUNCTION_DEVIATION_MM 0.02
#endif

/**
 * Adaptive Step Smoothing increases the resolution of multi-axis moves, particularly at step frequencies
 * below 1kHz (for AVR) or 10kHz (for ARM), where aliasing between axes in multi-axis moves causes audible
 * vibration and surface artifacts. The algorithm adapts to provide the best possible step smoothing at the
 * lowest stepping frequencies.
 */
//#define ADAPTIVE_STEP_SMOOTHING //test if helps slowdown 254 more bytes - no effect

#define MICROSTEP_MODES {16,16,16,16,16} // [1,2,4,8,16]

#define ENCODER_RATE_MULTIPLIER       
#define ENCODER_10X_STEPS_PER_SEC 75  
#define ENCODER_100X_STEPS_PER_SEC 160 

#if DISABLED(SLIM_1284P)
	#define LCD_INFO_MENU
	#define STATUS_MESSAGE_SCROLLING
	#define LCD_DECIMAL_SMALL_XY
#endif

#if ENABLED(SDSUPPORT)

  #define SD_DETECT_INVERTED

  #if DISABLED(SLIM_1284P)
    #define SD_FINISHED_STEPPERRELEASE true        
    #define SD_FINISHED_RELEASECOMMAND "M84 X Y E" 
  #endif

  #if DISABLED(SLIM_1284P)
	  #define SDCARD_SORT_ALPHA
  #endif
  
  #if ENABLED(SDCARD_SORT_ALPHA)
    #define SDSORT_LIMIT       40   
    #define FOLDER_SORTING     -1   
    #define SDSORT_GCODE       false
    #define SDSORT_USES_RAM    true 
    #define SDSORT_USES_STACK  true 
    #define SDSORT_CACHE_NAMES false
    #define SDSORT_DYNAMIC_RAM false
    #define SDSORT_CACHE_VFATS 2      
  #endif

  #if DISABLED(SLIM_1284P)
     #define SCROLL_LONG_FILENAMES
  #endif

#endif

#if DISABLED(LCD2004)
  #define LCD_SET_PROGRESS_MANUALLY
#else
  #define LCD_PROGRESS_BAR
  #define PROGRESS_BAR_BAR_TIME 2000
  #define PROGRESS_BAR_MSG_TIME 3000
  #define PROGRESS_MSG_EXPIRE   0
  #define LCD_SET_PROGRESS_MANUALLY
#endif

#if ENABLED(DOGLCD)
  #define DOGM_SD_PERCENT
  #define XYZ_HOLLOW_FRAME
  #define MENU_HOLLOW_FRAME
#endif

#define USE_WATCHDOG

#define BABYSTEPPING
#if ENABLED(BABYSTEPPING)
  #define BABYSTEP_INVERT_Z false    
  #define BABYSTEP_MULTIPLICATOR 10  
  #if ENABLED(BABYSTEP_OFFSET)
    #define BABYSTEP_ZPROBE_OFFSET   
  #endif
  #define DOUBLECLICK_FOR_Z_BABYSTEPPING
  #define DOUBLECLICK_MAX_INTERVAL 2000 
  
  #if ENABLED(BABYSTEP_OFFSET) && DISABLED(LCD2004)
    #define BABYSTEP_ZPROBE_GFX_OVERLAY 
  #endif
#endif

#if ENABLED(LINEAR_ADVANCE) && DISABLED(POWER_LOSS_RECOVERY)
  #define LIN_ADVANCE
#endif
#if ENABLED(LIN_ADVANCE)
  #define LIN_ADVANCE_K LINEAR_ADVANCE_K
#endif

#if DISABLED(SLIM_1284P)
	#define ARC_SUPPORT             
#endif
#if ENABLED(ARC_SUPPORT)
  #define MM_PER_ARC_SEGMENT  1  
  #define N_ARC_CORRECTION   25  
#endif

#define MIN_STEPS_PER_SEGMENT 6
//#define MIN_STEPS_PER_SEGMENT 5 //test if helps slowdown - no change

#define BLOCK_BUFFER_SIZE 16
#define MAX_CMD_SIZE 96
#define BUFSIZE 4
#define TX_BUFFER_SIZE 0
//#define TX_BUFFER_SIZE 4 //test if helps slowdown - no change

#define ADVANCED_PAUSE_FEATURE
#if ENABLED(ADVANCED_PAUSE_FEATURE)
  #define PAUSE_PARK_RETRACT_FEEDRATE         60 
  #define PAUSE_PARK_RETRACT_LENGTH            2 
  #define FILAMENT_CHANGE_UNLOAD_FEEDRATE     10  
  #define FILAMENT_CHANGE_UNLOAD_ACCEL        25  
  #if ENABLED(DIRECT_DRIVE_PRINTER)
    #define FILAMENT_CHANGE_UNLOAD_LENGTH      20  
  #else
    #define FILAMENT_CHANGE_UNLOAD_LENGTH      100
  #endif
  #define FILAMENT_CHANGE_SLOW_LOAD_FEEDRATE   6  
  #define FILAMENT_CHANGE_SLOW_LOAD_LENGTH     0  
  #define FILAMENT_CHANGE_FAST_LOAD_FEEDRATE   6  
  #define FILAMENT_CHANGE_FAST_LOAD_ACCEL     25  
  #define FILAMENT_CHANGE_FAST_LOAD_LENGTH     0  
  #define ADVANCED_PAUSE_PURGE_FEEDRATE        3  
  #define ADVANCED_PAUSE_PURGE_LENGTH         50  
  #define FILAMENT_UNLOAD_RETRACT_LENGTH      13 
  #define FILAMENT_UNLOAD_DELAY             2000 
  #define FILAMENT_UNLOAD_PURGE_LENGTH         8 
  #define PAUSE_PARK_NOZZLE_TIMEOUT           60 
  #define FILAMENT_CHANGE_ALERT_BEEPS         10 
  #define PAUSE_PARK_NO_STEPPER_TIMEOUT          
  #define PARK_HEAD_ON_PAUSE
#endif

#define AUTO_REPORT_TEMPERATURES

#if DISABLED(SLIM_1284P)
  #define EXTENDED_CAPABILITIES_REPORT
#endif

#define NO_VOLUMETRICS

#define PROPORTIONAL_FONT_RATIO 1.0

#define FASTER_GCODE_PARSER

#endif // CONFIGURATION_ADV_H
