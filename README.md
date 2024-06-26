# Senior Design - Code
This repository contains files used in the development and testing of the prototype metal 3D printer built for the MEC Senior Design project at Stony Brook University. This repository is intended as a companion to the final progress report for that project, and as such does not contain independently functional code. Each of these files has different attributions and licensing, which are described below.

Questions regarding this repository can be directed to me by opening an issue. Thank you for reading.

Colman J. Connolly

## Printing
This directory contains the configuration files used to set up the customized implementation of [Marlin](https://marlinfw.org). The files will not function as-is, but can be dropped into an existing implementation of Marlin and are functional. Binary and cursor files are excluded. Marlin is licensed under the GNU General Public License 3.0, [readable here](https://github.com/MarlinFirmware/Marlin?tab=GPL-3.0-1-ov-file#readme), and the relevant files are reproduced here accordingly.

Also in this folder is a Python script, `gcode-cleaner.py` used to manually sanitize G-code instructions before the printer reads them. As described in the developer comments for Marlin, slicers often ignore maximum feedrate instrucions when generating G-code. This script avoids the issue of overworking an axis by manually scanning for and replacing the feedrate with an acceptably low value. This is meant to be used only as a failsafe.

## Arduino
This directory contains the Arduino file used in testing the prototype. `potentiostat.ino` is the potentiostat control file that applies and monitors the circuit voltage. It is adapted from the same paper as the circuit design, which is located [here](https://repositories.lib.utexas.edu/bitstream/handle/2152/84727/Development_of_a_low-cost_Arduino-based_potentiostat.pdf). I make no claims to ownership of the code.

## Video
As part of the requirements for the project, the project team was required to develop an infomercial "selling" the prototype as a commercial product. The video is linked [here][def] as a backup in case the link in other locations does not work.


[def]: https://www.youtube.com/watch?v=WHJGyY8imms