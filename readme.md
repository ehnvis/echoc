# echoc, low profile clacker

![echoc](echoc.jpg)

Been using mechanical keyboard for years and my daily driver has for some time
now been the Minidox but I decided I needed a more compact, easy to transport 
low profile keyboard.

So then this project where born. First I looked on several switches but as I
wanted something compact and low profile the decision landed on Kailh low
profile choc reds (yes I like the heavier springs as I do not game). When the
order for the switches and keycaps where placed it was time to design the
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

When you have cloned this repository either link or copy it to the directory
structure for qmk, ie qmk_firmware/keyboards.

Then you can compile or flash with the two below commands.

    # Compile to verify that code is ok
    qmk compile -kb echoc -km default
    
    # Flash
    qmk flash -kb echoc -km default

## Bootloader

Enter the bootloader in 3 ways:

* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
* **Keycode in layout**: Press the key mapped to `QK_REBOOT` if it is available
