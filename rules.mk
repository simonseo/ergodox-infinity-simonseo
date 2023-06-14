# Set any rules.mk overrides for your specific keymap here.
# See rules at https://docs.qmk.fm/#/config_options?id=the-rulesmk-file

# ST7565 Settings
ST7565_ENABLE = yes			# for the two LCD screens
SRC += visualizer.c
ST7565_TIMEOUT = 60000		# turn off screen content after 10000ms to reduce burn in (default 60,000)
## ST7565_CONTRAST = 255		# The default contrast level of the display, from 0 to 255 (default 32)
VISUALIZER = yes			# for the two LCD screens?

# Debugging Console
CONSOLE_ENABLE = yes		# for seeing debugging logs in QMK toolbox, use in conjunction with debug.h

# Apple Fn key
NKRO_ENABLE = no
APPLE_FN_ENABLE = yes

## ORYX rules start
## LTO_ENABLE = yes			# code optimization step while compiling
TAP_DANCE_ENABLE = yes
DYNAMIC_TAPPING_TERM_ENABLE = yes # in/decrease tapping term if modifier activates too soon/late
## ORYX rules end


### Cut filesize by setting these to 'no'
NKRO_ENABLE = no
SLEEP_LED_ENABLE = no
## COMMAND_ENABLE = no
## SPACE_CADET_ENABLE = yes
## GRAVE_ESC_ENABLE = no 
## MAGIC_ENABLE = no


### Trying to fix slave half going into lockdown
# Enables split keyboard support (dual MCU like the let's split and bakingpy's boards) 
# and includes all necessary files located at quantum/split_common
SPLIT_KEYBOARD = yes

# Forces the keyboard to wait for a USB connection to be established before it starts up
WAIT_FOR_USB = yes

# Disables usb suspend check after keyboard startup. 
# Usually the keyboard waits for the host to wake it up before any tasks are performed. 
# This is useful for split keyboards as one half will not get a wakeup call but 
# must send commands to the master.
NO_USB_STARTUP_CHECK = yes
