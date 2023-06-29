Upload kmp.h and multicalwater.h to /config/esphome, and create a new device in Esphome using the district-water-reader.yaml as refrence.

Components needed.

IR Reader and Ring magnet (Kit)
The esp8266 cannot be used, but is cheeper to just get the kit. https://www.ebay.com/itm/354359025520

IR Reader
https://www.ebay.com/itm/354391651631

Magnet
https://www.magnetz.dk/power-magnet-ring-27x16x5-mm


I cannot get ESPHome to use serial0 on the ESP8266, so I have replaced it with a ESP12F where GPIO4 and GPIO5 can be used as Serial 2
https://www.ebay.com/itm/255303527301


There needs to connected some wires from the IR to the ESP12F to replace the ESP-01 as shown here.
<img>

I got the refrence holder from arelektronik when I got the IR reader, and have modified it to fit on my water meter, there can be some enhancments done so it will stay in place.
