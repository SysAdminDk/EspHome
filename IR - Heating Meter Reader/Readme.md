### Installation
Upload kmp.h and multical403.h to /homeassistant/esphome, you can use the file editor, and create a new device in Esphome using the district-heating-reader.yaml as refrence.  

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
![Esp12f-IR](https://raw.githubusercontent.com/SysAdminDk/EspHome/main/IR%20-%20Heating%20Meter%20Reader/images/Esp12f-IR.png)


### The result.  
![Esp12f-InPlace](https://raw.githubusercontent.com/SysAdminDk/EspHome/main/IR%20-%20Heating%20Meter%20Reader/images/ESP12-in-place.PNG)
 
 
### Kamstrup Multical 403
Importent note: This is custom made for reading a Kamstrup Multical 403, if the 3d printed bracket fits other Kamstrup meters is unknown.  
 
  
I got the refrence holder from arelektronik when I got the IR reader, and have modified it to fit on my meter, there can be done some enhancments so it will stay in place. I just iuse some Double sided tape.  
File can be downloaded here: https://github.com/SysAdminDk/EspHome/blob/main/IR%20-%20Heating%20Meter%20Reader/Kamstrup-HeatingMeter-IR.stl

Inspiration for the holder.  
https://www.thingiverse.com/thing:5179312
    
https://www.thingiverse.com/thing:5615493


![3D](https://raw.githubusercontent.com/SysAdminDk/EspHome/main/IR%20-%20Heating%20Meter%20Reader/images/holder-print.png)
   
![3D-Bottom](https://raw.githubusercontent.com/SysAdminDk/EspHome/main/IR%20-%20Heating%20Meter%20Reader/images/holder-print-back.jpg)
![3D-Top](https://raw.githubusercontent.com/SysAdminDk/EspHome/main/IR%20-%20Heating%20Meter%20Reader/images/holder-print-top.jpg)
![3D-Front](https://raw.githubusercontent.com/SysAdminDk/EspHome/main/IR%20-%20Heating%20Meter%20Reader/images/holder-print-front.jpg)
