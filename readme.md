# echoc, low profile clacker

![echoc](echoc.jpg)

Been using mechanical keyboard for years and my daily driver has for some time
now been the Minidox but I decided I needed a more compact low profile keyboard.

So then this project where born. First I looked on several switches but as I
wanted something compact and low profile the decision landed on Kailh low
profile choc reds (yes I like the heavier springs as I do not game). When the
order for the switches and keycaps where places it was time to design the
plate, mid and bottom layers. All designs where done in Onshape and are
available in this keyboard directory as STL files (metric).

Parts where then printed by my trusty old Ender 3 (modified) with matt black
PLA. All parts are printed with 4 walls and 0.4mm nozzle. Bottom layer where
printed without top and bottom layer with hexagon infill which gives it a cool
look.

Then everything is handwired/soldered together. At the moment there is no plan
to make a PCB.

* Keyboard Maintainer: [Ehnvis](https://github.com/Ehnvis)
* Hardware Supported: Handwired with Arduino Pro Micro or Elite-C controller
* Hardware Availability: N/A

Copy this repo directory to your qmk_firmware/keyboards directory.
Then you can compile or flash with the two below commands.

    qmk compile -kb echoc -km default
    
    qmk flash -kb echoc -km default

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
* **Keycode in layout**: Press the key mapped to `RESET` if it is available
