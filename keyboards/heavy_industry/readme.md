# heavy-industry

* Keyboard Maintainer: [PSUAN collective](https://github.com/psuan)
* Hardware Supported: `heavy-industry v.0.1.0`
* Hardware Availability: Not yet available

Make example for this keyboard (after setting up your build environment):

    make heavy_industry:default

Flashing default layout for this keyboard, left part:

    make heavy_industry:default:uf2-split-left

Flashing default layout for this keyboard, right part:

    make heavy_industry:default:uf2-split-right

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in one and a half ways:

* **Bootmagic reset**: Hold down the key at (0, 0) (`Esc` for the left part, `=` for the right part);
* **Reset pin**: Press the `RESET` button on the mainboard;
