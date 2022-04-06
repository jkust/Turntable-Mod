# Revopoint Pop2 Turntable-Mod
Speed control mod for the turntable 

## Operation
After the mod is installed you will be able to adjust the turntable speed by holding down the button  
It will increase the speed to max and then reduce it back to min and so on  
If you feel that the range is too big, adjust the maxspeed value to your needs

## You will need
- Arduino Nano (any other Arduino will probably work as well)
- Some tiny wires
- Soldering iron
- Hot glue
- Calm hands

## Steps
- Remove the turning top by just pulling it off the base
- Unplug motor connector from pcb
- Unscrew pcb
- Desolder battery wires from battery compartment (note origins)
- Remove pcb
- Desolder the unmarked 8-pin chip (probably a PIC processor)
- Clean up pcb
- Solder eight tiny wires onto the now free solder pads that used to be populated by the removed chip
- Wire up the attached wires to the Arduino Nano
- Re-install the pcb and solder back the two wires to the battery compartment
- Secure wires with some hot glue so they don't snap off (make sure the wires will not touch the rotating top)
- Programm the Arduino (you will need the AccelStepper library)
- Test the functionallity
- Hot glue the Arduino onto the base in such angle you still can access the USB port
- Put the top cover back on

## Wiring
| Chip Pin | Arduino |
| -------- | ------- |
| 1 | Vin |
| 2 | D12 |
| 3 | D11 |
| 4 | D6 |
| 5 | D9 |
| 6 | D8 |
| 7 | D10 |
| 8 | GND |

![grafik](https://user-images.githubusercontent.com/28532204/162066489-1d165908-9938-4800-9fee-88f4d842009a.png)

![1649278028980](https://user-images.githubusercontent.com/28532204/162068420-f57f706a-572d-4126-9d68-803f56d4ce97.jpg)

