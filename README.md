## run some codes
```
make input_club/ergodox_infinity:simonseo:dfu-util-split-right
make input_club/ergodox_infinity:simonseo:dfu-util-split-left
make input_club/ergodox_infinity:simonseo
qmk compile -kb input_club/ergodox_infinity -km simonseo
qmk clean -kb input_club/ergodox_infinity -km simonseo
```


## simonseo002
- left hand side lights up according to custom defined color
- left hand side outputs text according to custom defined string

## simonseo003
- right hand side light up & show text: need to flash the right side on its own with the same firmware
- if I first flash with :dfu-util-split-left and :dfu-util-split-right options and then click EEP_RST buttons, and then flash both sides with my custom firmware with `#define EEHANDS` in `configh.h`, both sides can become the host machine if each are directly connected to the computer, but each left-handed or right-handed. otherwise, I can connect one to the other and the one that's connected directly to the computer becomes the host machine.

## v004
- add debug functionality
- layer 0: base qwerty
- layer 1: symbols, fx

- TT(layer) - Layer Tap-Toggle. If you hold the key down, layer is activated, and then is de-activated when you let go (like MO). If you repeatedly tap it, the layer will be toggled on or off (like TG). It needs 5 taps by default, but you can change this by defining TAPPING_TOGGLE – for example, #define TAPPING_TOGGLE 2 to toggle on just two taps.
- LT(layer, kc) - momentarily activates layer when held, and sends kc when tapped. Only supports layers 0-15.
- OSL(layer) - momentarily activates layer until the next key is pressed. See One Shot Keys for details and additional functionality.


### goals for simonseo004
- match basic keys to ergodox infinity
- figure out where timeout occurs
- do not turn off lights after time out


### simonseo005 (Aug 10, 2022?)
- type out each keypress on screen
- add function layers
- add symbol layer - like spanish 
- add korean layer
- add colemak layer
- add simon-qwerty-layer

### v6 (March 1, 2023)
- Adapt from Oryx layouts
- build command:
> ```
> // back up last build in ~/qmk_firmware
> qmk clean -kb input_club/ergodox_infinity -km simonseo
> qmk compile -kb input_club/ergodox_infinity -km simonseo
> // put keyboard in flash mode
> // use qmk toolbox to flash
> ```
- HANJA + Emoji 
- HANEN + cmd
- dynamic tapping term in media-fn layer and rules.mk
- numpad layer
- fix keyboard falling asleep with computer `#define USB_SUSPEND_WAKEUP_DELAY 200` in config.h
- my own logo from [image2cpp](https://javl.github.io/image2cpp/)
    - canvas size: 128x32 (px)
    - invert image color
    - plain bytes
    - vertical 1 bit per pixel

### v7 (April 7, 2023)
- increase `USB_SUSPEND_WAKEUP_DELAY` to 500
- decrease default `TAPPING_TERM` to 140 and display it on screen