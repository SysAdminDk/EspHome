### Installation
Upload kmp.h and multicalwater.h to /config/esphome, and create a new device in Esphome using the district-water-reader.yaml as refrence.  

Inspiration for the code.  
https://github.com/cenobitedk/esphome_multical402



### Components needed.  

IR Reader and Ring magnet (Kit)  
The esp8266 cannot be used, but is cheeper to just get the kit. https://www.ebay.com/itm/354359025520

IR Reader  
https://www.ebay.com/itm/354391651631

Magnet  
https://www.magnetz.dk/power-magnet-ring-27x16x5-mm


I cannot get ESPHome to use serial0 on the ESP8266, so I have replaced it with a ESP12F where GPIO4 and GPIO5 can be used as Serial 2  
https://www.ebay.com/itm/255303527301



There needs to connected some wires from the IR to the ESP12F to replace the ESP-01 as shown here.  
![Esp12f-IR](https://github.com/SysAdminDk/EspHome/blob/553e320091f953609b2eac8c876f1675a864e334/IR%20-%20Water%20Meter%20Reader/images/Esp12f-IR.png?raw=true)

### The result.

![Esp12f-IR](https://github.com/SysAdminDk/EspHome/blob/553e320091f953609b2eac8c876f1675a864e334/IR%20-%20Water%20Meter%20Reader/images/ESP12-in-place.PNG?raw=true)



I got the refrence holder from arelektronik when I got the IR reader, and have modified it to fit on my water meter, there can be some enhancments done so it will stay in place.
File can be downloaded here: https://github.com/SysAdminDk/EspHome/blob/main/IR%20-%20Water%20Meter%20Reader/Kamstrup-WaterMeter-IR.stl



![3D-Bottom](https://raw.githubusercontent.com/SysAdminDk/EspHome/553e320091f953609b2eac8c876f1675a864e334/IR%20-%20Water%20Meter%20Reader/images/holder-print-bottom.png?raw=true)
![3D-Top](https://raw.githubusercontent.com/SysAdminDk/EspHome/553e320091f953609b2eac8c876f1675a864e334/IR%20-%20Water%20Meter%20Reader/images/holder-print-top.png?raw=true)
![3D](https://raw.githubusercontent.com/SysAdminDk/EspHome/553e320091f953609b2eac8c876f1675a864e334/IR%20-%20Water%20Meter%20Reader/images/holder-print.png?raw=true)
