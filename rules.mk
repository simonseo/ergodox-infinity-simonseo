# Set any rules.mk overrides for your specific keymap here.
# See rules at https://docs.qmk.fm/#/config_options?id=the-rulesmk-file

# ST7565 Settings
ST7565_ENABLE = yes			# for the two LCD screens
SRC += visualizer.c
# ST7565_TIMEOUT = 10000		# turn off screen content after 10000ms to reduce burn in (default 60,000)
# ST7565_CONTRAST = 255		# The default contrast level of the display, from 0 to 255 (default 32)
VISUALIZER = yes			# for the two LCD screens?

# Debugging Console
# CONSOLE_ENABLE = no		# for seeing debugging logs in QMK toolbox, use in conjunction with debug.h

## ORYX rules start
# LTO_ENABLE = yes			# code optimization step while compiling
# TAP_DANCE_ENABLE = no
# ORYX rules end


## Cut filesize by setting these to 'no'
# CONSOLE_ENABLE = no
# COMMAND_ENABLE = no
# SPACE_CADET_ENABLE = yes
# GRAVE_ESC_ENABLE = no 
# MAGIC_ENABLE = no
