### Controller Gloves
Goal: add capacitive points to the palm of my biker gloves. Probably stick to triggering single MIDI notes as long as contact is being held high.  Integrate Genkii Wave ring with it as a multi-input performance prop. 

Can be controlled with a teensy and wires going to the gloves, but would love to use the [Seeed Studio XIAO ESP32C3](https://www.seeedstudio.com/Seeed-XIAO-ESP32C3-p-5431.html) to send MIDI over bluetooth.  If so, would be powered with either lipo cell, or [14500 3.7V lipo](https://www.makerlab-electronics.com/product/14500-li-ion-3-7v-750mah-rechargeable-battery/) housed in a AA battery holder.

library ideas: 
https://github.com/max22-/ESP32-BLE-MIDI

Using this library currently.  Encountering an issue with the bluetooth initialization due to an error with the nimBLE library.  Might need to re-upload the Arduino15 folder esp32 data to fix this?  still figuring it out.  Uploaded the Arduino15 folder just for debugging reference.  This file is usually located at: USER/Library/Arduino15

The ESP32C3 has built in battery management, but there is no LED indicator by default.  this needs to be added to the code manually if you want any kind of power indication. https://wiki.seeedstudio.com/XIAO_ESP32C3_Getting_Started/

