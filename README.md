# Wizard Electronic Game
Rev A October 2019

### Handheld Electronic Game
- ATmega328P microcontroller running at 12MHz
- 4 LEDs
- 4 buttons for play / mode selection
- Buzzer
- Tag-Connect for programming
- Runs on 3 AAA batteries

The microcontroller runs a [TMS1000-series emulator](https://github.com/hotkeysoft/emulators) I made (running in TMS1700 mode).

One ROM is loaded on the emulator: **Pocket Repeat** (by *Tandy/Radio-Shack*).  This is a Simon game clone.

Images
============
|Front                                                 | Back                                              |
|------------------------------------------------------|---------------------------------------------------|
|![Render Front](./img/render-front.jpg "Render Front")|![Render Back](./img/render-back.jpg "Render Back")|


![Render](./img/RepeatGame.jpg "Render")

### Schematics (pdf)
- [Complete schematics](./img/schema.pdf)

### PCB Images (svg)
- [Top](./img/pcb-front.svg)
- [Bottom](./img/pcb-back.svg)
