
## simonseo002
- left hand side lights up according to custom defined color
- left hand side outputs text according to custom defined string

## simonseo003
- right hand side light up & show text: need to flash the right side on its own with the same firmware
- if I first flash with :dfu-util-split-left and :dfu-util-split-right options and then click EEP_RST buttons, and then flash both sides with my custom firmware with `#define EEHANDS` in `configh.h`, both sides can become the host machine if each are directly connected to the computer, but each left-handed or right-handed. otherwise, I can connect one to the other and the one that's connected directly to the computer becomes the host machine.

### goals for simonseo004
- match basic keys to ergodox infinity
- figure out where timeout occurs
- do not turn off lights after time out


### goals for simonseo005
- type out each keypress on screen
- add function layers
- add symbol layer - like spanish 
- add korean layer
- add colemak layer
- add simon-qwerty-layer
