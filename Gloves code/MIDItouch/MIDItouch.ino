#include "MIDIcontroller.h"

// This is an example of how to set up a capacitive touch
// sensor as a MIDI input. Any capacitive object connected
// to a 'touch' pin will work. If using metal, use a layer of 
// something non-conductive between the metal and skin.

byte MIDIchannel = 2;
const int touchPin1 = 23; // Change this to the correct TOUCH pin
const int touchPin2 = 22; // Change this to the correct TOUCH pin
const int touchPin3 = 19; // Change this to the correct TOUCH pin
const int touchPin4 = 18; // Change this to the correct TOUCH pin
const int touchPin5 = 17; // Change this to the correct TOUCH pin
const int touchPin6 = 16; // Change this to the correct TOUCH pin

// Parameters are: pin and CC number
MIDItouch myInput1(touchPin1, 48);
MIDItouch myInput2(touchPin2, 50);
MIDItouch myInput3(touchPin3, 53);
MIDItouch myInput4(touchPin4, 55);
MIDItouch myInput5(touchPin5, 57);
MIDItouch myInput6(touchPin6, 60);

void setup(){
  // WARNING! if you use inputRange() with no arguments,
  // the input range is calculated based on a call to
  // touchRead() so DON'T touch the input during setup()
  myInput1.inputRange();
  myInput2.inputRange();
  myInput3.inputRange();
  myInput4.inputRange();
  myInput5.inputRange();
  myInput6.inputRange();

}

void loop(){
  myInput1.send();
  myInput2.send();
  myInput3.send();
  myInput4.send();
  myInput5.send();
  myInput6.send();


// This prevents crashes that happen when incoming usbMIDI is ignored.
  while(usbMIDI.read()){}

// Also uncomment this if compiling for standard MIDI
//  while(MIDI.read()){}
}
