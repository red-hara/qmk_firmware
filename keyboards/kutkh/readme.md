# kutkh

*A short description of the keyboard/project*

* Keyboard Maintainer: [Hara Red](https://github.com/red-hara)
* Hardware Supported: `kutkh v.0.1.0`
* Hardware Availability: Not yet available

Make example for this keyboard (after setting up your build environment):

    make kutkh:default

Flashing example for this keyboard:

    make kutkh:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in one and a half ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Reset pin**: connect `GND` and `RST` pins on the development board
