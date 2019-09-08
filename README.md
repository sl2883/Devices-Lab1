### Part A. Set Up a Breadboard
<img src="https://i.imgur.com/FWUJlRE.jpg" width="50%" height="50%">

### Part B. Manually Blink a LED

##### a. What color stripes are on a 100 Ohm resistor?
* Red 2
* Violet 7
* Black 0
* Black (Multiplier) 1
* Brown (Tolerance) 1%

##### b. What do you have to do to light your LED?
Press the switch.

### Part C. Blink a LED using Arduino
1. Blink the on-board LED

##### a. What line(s) of code do you need to change to make the LED blink (like, at all)?
The LED started blinking without any change in code

##### b. What line(s) of code do you need to change to change the rate of blinking?
delay(50)

##### c. What circuit element would you want to add to protect the board and external LED?
A resistor should be added to ensure that the voltage across LED is appropriate.

##### d. At what delay can you no longer perceive the LED blinking? How can you prove to yourself that it is, in fact, still blinking?
At delay(10) ie. 10ms, we are not able to perceive that the LED is blinking. 
To verify that it's still blinking, open the video app on the phone and look at the LED. It appears to be blinking because the video is capturing fewer frames per second than the eye.

##### e. Modify the code to make your LED blink your way. Save your new blink code to your lab 1 repository, with a link on the README.md.
### 2. Blink your LED
[Blink your way](https://youtu.be/vWUjIIknLGQ)  
[Code](https://github.com/sl2883/Devices-Lab1/blob/master/blinkCode.ino)

##### Make a video of your LED blinking, and add it to your lab submission.
[Blinking LED at Pin 9](https://youtu.be/VKdhZDIDilU)  
[Code](https://github.com/sl2883/Devices-Lab1/blob/master/blinkPin9.ino)

### Part D. Manually fade an LED

##### a. Are you able to get the LED to glow the whole turning range of the potentiometer? Why or why not?
Yes. 

##### Part E. Fade an LED using Arduino
[Blinking LED](https://youtu.be/9lRHeHOh_pM)  
[Code](https://github.com/sl2883/Devices-Lab1/blob/master/fadeled.ino)

##### a. What do you have to modify to make the code control the circuit you've built on your breadboard?
1. Change the digitalWrite to analogWrite. 
2. Blink with different brightness levels (ranging from 1000 to 0) with a delay of 30-50ms.

##### b. What is analogWrite()? How is that different than digitalWrite()?
AnalogWrite sends the signal proportional to the value provided by the second parameter. So, 100% signal when the value is 255, while 50% signal when the value is 127. DigitalWrite, on the other hand, will always send 100% signal.

### Part F. FRANKENLIGHT!!!

##### 1. Take apart your electronic device, and draw a schematic of what is inside.

##### a. Is there computation in your device? Where is it? What do you think is happening inside the "computer?"
The computation is happening by the microprocessor. 
* The keyboard inputs are sent to the microprocessor. 
* The microprocessor does the computation. 
* The LCD display is updated by the microprocessor.

##### b. Are there sensors on your device? How do they work? How is the sensed information conveyed to other portions of the device?
No. The calculator doesn't have sensors.

##### c. How is the device powered? Is there any transformation or regulation of the power? How is that done? What voltages are used throughout the system?
The device is powered by -
* Solar cells
* Battery (Button cell)

The solar cells transform solar energy to electric energy. The system runs at 1.5V.

##### d. Is information stored in your device? Where? How?
Yes. There's a memory chip accompanying the microprocessor. The information is stored when the user presses M+ key.

##### 2. Using your schematic, figure out where a good point would be to hijack your device and implant an LED.
By connecting one end of the external circuit to the connector and the other end to one of the keyboard relay points, the LED turns on.

##### 3. Build your light!

##### Make a video showing off your Frankenlight.
[The prototype](https://youtu.be/syZuAmJDrmI)
