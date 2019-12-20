# Caterpillar bulldozer
3D printed radio controlled bulldozer, 2 feet long

License: https://creativecommons.org/licenses/by-nc-sa/4.0/

Most obvious limits of this license:
- You are not allowed to use this stuff for commercial purposes
- You can download, reupload and change the stuff, but have to release it under the same license again
- You have the mention the origin, "Original by Peter Stimpel, https://github.com/pstimpel/caterpillarbulldozer/"

## Home of this project

https://github.com/pstimpel/caterpillarbulldozer/

### Other ressources

- Thingiverse: t.b.d.
- Prusaprinters.org: t.b.d.


![alt text](https://github.com/pstimpel/caterpillarbulldozer/raw/master/media/fullfront.PNG "In all its glory")

**Table of contents**
* [What's the story?](#what-s-the-story-)
* [A bulldozer!](#a-bulldozer-)
* [Sourcing parts, what do we need](#sourcing-parts--what-do-we-need)
+ [Filament, print instructions](#filament--print-instructions)
+ [Candy](#candy)
+ [Bearings](#bearings)
+ [Screws, nuts and bolts](#screws--nuts-and-bolts)
    - [M2](#m2)
    - [M3](#m3)
    - [M4](#m4)
+ [Electronics](#electronics)
    - [RC stuff](#rc-stuff)
    - [stuff for lights and buzzer](#stuff-for-lights-and-buzzer)
    * [Stuff to create a pcb](#stuff-to-create-a-pcb)
* [Let's build the bullozer now](#let-s-build-the-bullozer-now)
* [Who to thank?](#who-to-thank-)
* [Donation](#donation)
* [Feedback](#feedback)

## What's the story?

I run my hobby 3d printing for more than a year now. Yes, I am a noob. Along the way I looked for a software to do my CAD, and found Fusion 360 from Autodesk. So, I had to learn Fusion. Youtube offers great ressources, most important there is the Fusion 360 channel run by Autodesk (https://www.youtube.com/user/AutodeskFusion360). There is a bunch of lovely people with their tips and tricks - more details at the end of this. 

However, one day - I was finishing my illuminated death star (https://www.prusaprinters.org/prints/5661-death-star-illuminated-mood-lamp-death-star ), I was looking for a thing taking more than a few days to create. Something to be my project for the winter. And, I was keen to create something running on tracks. Now I dislike building replicas of war machinery, so a tank was no solution to me. 

## A bulldozer!

I was using my favorite search engine duck duck go, and found Caterpillar to be a big brand in the bulldozer manufacturers community. I sat down and thought what to do, and came up with these topics:

- no real replica, more a free style model of a bulldozer
- dimensions? who cares!
- radio controlled, and not steered by a gearbox, but two motors (I liked the challenge of learning how to program my radio control)
- the blade at the front should move up and down by servo motors

But how the f*** could I achieve these goals? I decided to create a gearbox first, add the motors to a motor stand, so I could test if running two independent tracks by an own motor each would be a cool thing. 

And what to tell: doing gears is easy enough in Fusion. I added some bearings, adjusted the tolerances, and had a working gearbox a few hours later. I mirrored it, added some dirty housing around, and created a design for the tracks.

![alt text](https://github.com/pstimpel/caterpillarbulldozer/raw/master/media/IMG_20191030_000637.jpg "First revision of the gearbox")


Stearing two tracks having a motor each was not as easy as I thought. But the guys at (https://openrcforums.com) helped me out, so I got my radio control running quite soon. 

Next step: tracks. I designed a track in Fusion, printed the parts, screwed it together and started a very first test. This was the beginning of this story.

Video of the first test: 

[![IMAGE ALT TEXT HERE](https://img.youtube.com/vi/s0oiE-nRtp8/0.jpg)](https://www.youtube.com/watch?v=s0oiE-nRtp8)


Now, how to go on? Usually, you would design all the stuff, and once you are happy with your CAD, you print and assemble the stuff. I was going a different way. I designed the stuff during building the vehicle. Step by step both the CAD and the vehicle evolved. This caused some major mistakes and lot's of fun at the same time. I love it that way - CHAOS! One thing that was quite tough: you had to think about the next step, one step ahead, so you can connect the two steps somehow. Thank the lord there is candy ...

## Sourcing parts, what do we need

We need a 3d printer. I was using my Prusa I3 MK3. It has a build plate of 200x250, and Z is 200+. Some parts make use of these dimensions. If your printer has less build area, this project might not be for you, or you need to cut things apart. Of course we need tools. And, we need ...

### Filament, print instructions

I was using filament from my favorite supplier https://dasfilament.de. The print is PLA only, so I ordered about

- 6 spools yellow
- 1 spool transparent
- 2 spools black
- 1 spool anthracite
- 1 spool silver

Numbers are valid for printing in 0.3 layer height, using 3 shells horizontally and vertically, 10% cubic infill (except the gears and axles, I used 50% cubic infill here).

I was taking care not to need any support. I achieved this goal, except for very few parts.

The stls are not in their orientation for hassle free printing, I'm sorry. You do need to make this yourself in your slicer.

### Candy

The build will take some time, not to talk about the 200 hours of printing. This means, it will be nerve-wracking :). Get some good stock of candy to please yourself once you enter mentally strange situations. I can tell you: you will need it!

### Bearings

We need 40 bearings of type 6700ZZ. Dimensions are 10x15x4mm. These are standard bearings, you should find them very easy. I ordered mine from https://www.kugellager-express.de/. 

We need another 12 bearings of type 6904 with dimensions 20x37x9mm. I ordered them from the same supplier.

### Screws, nuts and bolts

I order my stuff from a shop called https://www.schrauben-paul.com/. All given dimensions are mm. I did not count each single screw, so all numbers are estimates. However, if you enter such a project I expect you won't order exact counts.

#### M2
- 50 M2x8, cylinder head
- 50 M2x10, cylinder head
- 50 M2x16, cylinder head

#### M3
- 4 scrubscrews M3x6
- 4 square nuts M3
- 100 M3x10, cylinder head
- 100 M3x14, cylinder head
- 300 M3x20, cylinder head
- 100 M3x25, cylinder head
- 200 M3x45, cylinder head

#### M4
- 4 Bolts 40mm

### Electronics

I expect you have a radio control already. Therefore I do not link a receiver. But, you will need one 8 channel receiver matching your radio control and local laws. If you skip the lights part, a 4 channel receiver will do. As well, all my builds are ran by 2S Lipo, which means the voltage of the linked components below does match this battery type. If you go for a different voltage, please select your components in a way the match together.

#### RC stuff
- 2 standard servos, metal gear, metal servo arm (https://www.amazon.de/gp/product/B0716V3WNH/)
- 2 motors type 540, 55 turns or similar (https://hobbyking.com/de_de/1-10-540-carbon-brushed-motor-55t.html)
- 2 ESCs (https://hobbyking.com/de_de/hobbyking-x-car-45a-brushed-car-esc.html)
- 2 Lipo 2S, like (https://hobbyking.com/de_de/turnigy-nano-tech-shorty-4200mah-2s2p-65-130c-hardcase-lipo-pack-roar-approved.html)
- 2 connectors to connect your Lipos and ESCs

#### stuff for lights and buzzer
- Arduino Nano 5 Volt
- Resistor 0.25W 270 Ohm
- Buzzer 5 Volt (https://www.amazon.de/gp/product/B073RH8TQK/), we need the bigger one out of the package
- 1 switch like in (https://www.amazon.de/gp/product/B07MY2WVQ3)
- RGB leds (https://www.amazon.de/gp/product/B01N97A0XG)
- 3 cables for connecting receiver and Arduino, servo cables like (https://hobbyking.com/de_de/twisted-15cm-female-to-female-servo-lead-jr-22awg-10pcs-set.html)
- wires to connect the LEDs (https://www.amazon.de/gp/product/B01BI1G88C)
- 12 pin headers
- solder stuff, some shrinking tube 3mm

##### Stuff to create a pcb

We create a one sided, 60x60mm pcb. I expect you either have the stuff to do that because you know how to do it, or you just order the pcb from your favorite supplier. You can skip the pcb part completely, because it just controls the lights and the buzzer. If you do not need this, just order the rc stuff only. You could exchange your 8 channel receiver for a 4 channel receiver in this case as well.

![alt text](https://github.com/pstimpel/caterpillarbulldozer/raw/master/media/IMG_20191124_143911.jpg "Arduino board")

But hey, no lights? Really?

**Warning**: I have still issues with flickering, randomly color changing LEDs, seems there is some noise coming from the ESCs and I need to filter those out. It is very likely the pcb design and parts list of the pcb will change soon.

## Let's build the bullozer now

**Remark**: if not mentioned any different, we talk about screwing things together using M3 screws. Just screw them into the plastic parts, make sure not going to fast when screwing them in. Friction causes heat, and heat cause melted plastic parts. Just be gentle. Do not overtighten the screws, there is no need for it. It is on you to determine the right length of a srew, just use common sense and do not try to mount a small handle using M3x45. 

We start with the gear box. Print all items in subfolder "BothSides" twice. Print items in "Housing", "LeftOnly" and "RightOnly" once each. The gears and axles need to be stable. I suggest you to print the axles horizontally aligned. Use some more dense infill on the gears and axles. 

Mount the motorstands to the base. Assemble all axle-gear combinations twice, once for left and one for right gearbox. Take note of the indexed axles, and their counterpart gears. Most gears have one side flat, while the other has kind of a builtin spacer. The spacer side points outside the axle, to the bearing. Axles A, B and C provide spacer parts, which sit in the middle between the gears.

Axle A is the one right after the motor. Axle B "connects" to Axle A and Axle C and so on. Should be straight forward. Do not miss the 6700 bearings, one at each end of each axle. Except "rearaxle", we will take care of those later.

![alt text](https://github.com/pstimpel/caterpillarbulldozer/raw/master/media/gearleft1.PNG "Figure 1")


![alt text](https://github.com/pstimpel/caterpillarbulldozer/raw/master/media/gearleft2.PNG "Figure 2")


![alt text](https://github.com/pstimpel/caterpillarbulldozer/raw/master/media/gearleft3.PNG "Figure 3")


![alt text](https://github.com/pstimpel/caterpillarbulldozer/raw/master/media/gearleft4.PNG "Figure 4")

Once all axles are assemnbled, use the "Gearboxbearingstands" to mount them at your gearbox base. Do this twice, for left and right gearset. Mount the outer housing "Gearhousing left/right". Make sure the gears can spin freely. Add the motors to the stands, fix them. The pinions are now mounted to your motors using 4 squarenuts and 4 scrubscrews M3. Add the supports and connector parts for Bearing holders and motorstands.

![alt text](https://github.com/pstimpel/caterpillarbulldozer/raw/master/media/IMG_20191206_171930.jpg "The gearbox, ready assembled and mounted to the chassis of the vehicle")

This is a good time to connect ESCs to the motors, Lipos to the ESCs and the receiver to the ESCs - for a very first test. **WARNING: Remove one of the positive voltage pins of your ESC before connecting them to your receiver**. This is **IMPORTANT**! If you miss this, **BLUE SMOKE** might appear out of your receiver and/or your ESCs. Bind the receiver to your radio control. I am using a mode 2 controller. My setup is like:

Channel 1 connected to left motor/esc, channel 2 connected to right motor/esc

* CH1 100 RUD * 100 ELE + 100 ELE
* CH2 -100 RUD * 100 ELE + 100 ELE

Check this out for more info (https://openrcforums.com/forum/viewtopic.php?f=5&t=12296), and kudos to the helpful gents over there.

And while we are at it, set CH 3 and CH6 both to P1, which will do the blade servo control. If you dislike going for lights and buzzer, you set CH3 and CH4 to P1. 

On top, set CH4 bound to ELE, and CH5 to RUD. CH4 and CH5 will connect to our Arduino for controling the LEDs and buzzer. If you dislike going for lights and buzzer, you can skip this last step completely. 

**Important**: Write down how you connected your ESCs to witch motor. If you push "forward", both axles have to turn forwards. If not, switch the connection between motor and ESC. Now push "forward" and "left". The left axle should go slower or stop completely, while the right axle turns forward. If it is the other way, just flip ESCs and restart this test. If you push backwards and left, the left axle should stop again, while the right axle turns backward. Check what happens if you "turn right". Do not go any further until you finished all this with a success!

Now print all parts from "LowerChassis". Print "InnerSupportLeft" and "InnerSupportLeft" twice each. The numbers are ordered from front to back. Mount your assembled gearbox to the bottom using the support pieces. Use "InnerSupport..." to keep the bottom parts together. Add the rearaxles and their bearingholders. Do not forget to add the bearings of type 6904, 2 on each axle. Add the 6700 bearings to the outer end of both Axles "D", and the "Gear2AxleD-5edges" as well. Mount the "LowerChassis..." parts left and right. These keep all the other parts and axles in place. Add stability by making use of "InnerSupportLeft" and "InnerSupportRight".

![alt text](https://github.com/pstimpel/caterpillarbulldozer/raw/master/media/housingbottom1.PNG "Lower Chassis 1")

It is printing time again: we print all the stuff from "Blade", "Drive" and "Tracksupport".

Print all parts once, except:

twice: BladeBarAxle, BladeHydraulicsBolt, BladeHydraulicsClamp, BladeHydraulicsTube. BladeServoBar, BladeServoLever, FrontAxle, FrontAxleDistancekeeper, UpperSupportAxle

four times: BladeServoLock, Wheel, UpperSupportSpacer, UpperSupportWheel

eight times: LowerSupportAxle

16 times: LowerSupportSpacer, LowerSupportWheel

52 times: ChainA, ChainB

Insert 6904 bearings into "BladeBarBearingHolder". Combine "BladeBarAxle" and "BladeBarLever", add 6904 bearings. Mount Axles using "BladeBarBearingHolder" Left/Right to the bottom. 

![alt text](https://github.com/pstimpel/caterpillarbulldozer/raw/master/media/housingbottom2.PNG "Lower Chassis 2")

Add a 6904 bearing to the round end of the "FrontAxle". Add one "FrontaxleDistancekeeper" to the long side. Add a 6904 bearing to the longside. Mount it using the "FrontaxleBearingHolder". Do that twice for each side.

Now let's do the track supports. Mount two "LowerSupportWheel" at one "LowerSupportAxle", and put one "LowerSupportSpacer" on each end. Add a 6700 bearing at each end of the axle. Do this procedure eight times.

Mount two "UpperSupportWheel" at one "UpperSupportAxle", and put one "UpperSupportSpacer" on each end. Do this procedure twice.

Mount "TracksupportInnerLeft" to your chassis. Insert four of your "LowerSupportAxle" builds. Add "TracksupportOuterLeft" to your vehicle. Repeat this step at the right side using "TracksupportInnerRight" and "TracksupportOuterRight".

![alt text](https://github.com/pstimpel/caterpillarbulldozer/raw/master/media/housingbottom3.PNG "Lower Chassis 3")

![alt text](https://github.com/pstimpel/caterpillarbulldozer/raw/master/media/housingbottom4.PNG "Lower Chassis 4")

![alt text](https://github.com/pstimpel/caterpillarbulldozer/raw/master/media/housingbottom5.PNG "Lower Chassis 5")

Starts to look serious, right?

Mount "TensionmountLeft" to your vehicle. Mount "TensionWheelholderInnerLeft", "TensionWheelholderOuterLeft", one of your "UpperSupportAxle" builds and "TensionBaseLeft". Mount this assembly to "TensionmountLeft" using a M3x45 screw.

![alt text](https://github.com/pstimpel/caterpillarbulldozer/raw/master/media/housingbottom6.PNG "Lower Chassis 6")

Repeat this step for the right side of your vehicle.

Add the 4 wheels to your axles. Secure the wheels using M3#20 screws.

Time to build the tracks. We build two of them. So, 26 "ChainA" and 26 "ChainB" create one track, screwed together by 52 screws M3x45. The horn of "ChainA" points to the inside of our track loop, while the 3 edges of "ChainB" point to the outside. We screw the left track from the left side of the track, while we screw the right track from the right side. This will make it much easier to replace broken chain parts later on. Again, be careful with applying forces and heat out of friction. Depending on your screws they might have a non threaded part below the cylinder head. If so, use a 3.5mm drill to widen the holes of your chain parts, only the ones pointing away from your vehicle - the ones you start screwing in. Do not change the diameter of the holes the thread of your screw goes into. 

![alt text](https://github.com/pstimpel/caterpillarbulldozer/raw/master/media/track.PNG "Tracks")

Great job, you have 2 tracks now. Mount the left one to the left side, the right one to the right side. Could be you need to lose your tension mechanisms again to make the tracks fit. There is a so called "TensionBlock" in the package "Tracksuppport". If your track is too lose, just mount one between "TensionBase" and the supportwheel assembly. Warning: do not tension your tracks like belts on your printer. They need to have some wiggle room. In case of doubts leave the "TensionBlock" away from your assembly.

![alt text](https://github.com/pstimpel/caterpillarbulldozer/raw/master/media/housingbottom7.PNG "Lower Chassis 7")

If you like, this is the right time for a break. You could eat some candy, or drive around with your vehicle. Basic forward/backward and steering will work already. 

OK, let's move on. You will need to print the content of "UpperChassis" and "Grill". Mount all the "UpperChassisLeft/Right" parts using the support parts of that package. Parts 4 and 5 are connected directly to each other. Mount both servos to the servo mount. The servohead should point to the right side, backwards. Mount this assemblies to the upper chassis. Now mount the "BonnetSupport" parts on top of the upper chassis. Mount the CAT Logo and the Tailgate as well to the back.

![alt text](https://github.com/pstimpel/caterpillarbulldozer/raw/master/media/servo1.PNG "Servo")

![alt text](https://github.com/pstimpel/caterpillarbulldozer/raw/master/media/servo2.PNG "Servo")

![alt text](https://github.com/pstimpel/caterpillarbulldozer/raw/master/media/servo3.PNG "Servo")

![alt text](https://github.com/pstimpel/caterpillarbulldozer/raw/master/media/servo4.PNG "Servo")

![alt text](https://github.com/pstimpel/caterpillarbulldozer/raw/master/media/back1.PNG "Servo")

Mount the round shaped servo head to the servos. Mount the "Bladeservolever" to the servohead. Once finished, the lever should point straight downwards, at both servos. Mount the BladeServoBar to it, and lock it using 2 of the BladeServoLocks.

![alt text](https://github.com/pstimpel/caterpillarbulldozer/raw/master/media/housingbottom8.PNG "Lower Chassis 8")

Mount the upper chassis assemby to your vehicle. Use the left support parts out of the UpperChassis package to do that. 

![alt text](https://github.com/pstimpel/caterpillarbulldozer/raw/master/media/front1.PNG "Front")

Connect the BladeServoBar to its BladeBarLever, use the two remaining BladeServoLocks. I am sorry, but there is not much room to do that. You will make it. If not, remember your stock of candy, take a break, and try again. 

Time to assemble the grill. Print 4 sets of the LEDHousing package. Connect "GrillLeft", "GrillRight" and "GrillInsert". Add the CAT Logo to the "GrillInsert". 

If you go for the lights option: At this point you should have your pcb, equipped with the Arduino, pin headers, buzzer and resistor. Orientation of the board: you look at your Arduino, not the solder side of the PCB. USB of your Arduino is pointing to the left, the buzzer is top left. Connect CH4 of your receiver to the up right pin header. Connect CH5 to the pin header next left to the up right pin header. Cut the left servo cable in half. Use one half, solder the switch to the both outer pins, connect this to the lower left pin header of your PCB - the orientation of the connector does not matter. If you did it right, one pin header is left unconnected. Now, break 2 LEDs free of your LED "matrix", and do that 4 times. Take care of not confusing DIn and DOut direction. Connect the left servo cable half. Connect the black wire to ground on the DIn side of your leds. Connect the opposite wire to Voltage 5V. Connect the middle pin to Din. Now connect DOut of that LED with DIn of the next LED. Connect ground and 5V of both LEDs as well. Create 15cm long wires, my advice is to use 3 different colors. Connect these wires to the DOut, 5V and ground of LED 2. We go on with this scheme. Never ever confuse DIn, DOut, 5V and Ground. See the following scheme for wire lengths:

Servo plug -> 15 cm -> LED1 -> direct connection -> LED2 -> 15cm -> LED3 -> direct connection -> LED4 -> 65cm -> LED5 -> direct connection -> LED6 -> 40 cm -> LED7 -> direct connection -> LED8 -> 25 cm -> strobe lights assembly below.

Now we need to break free 4 sets of 3 LEDs in a row, each. 

Connect the 4 blocks of 3 LEDs each as you did above. Scheme:

25cm cable from your assembly above -> LED9 -> direct connection -> LED10  -> direct connection -> LED11 -> 5 cm  -> LED12 -> direct connection -> LED13  -> direct connection -> LED14 -> 5cm -> LED15 -> direct connection -> LED16  -> direct connection -> LED17 -> 5cm -> LED18 -> direct connection -> LED19  -> direct connection -> LED20

Remember the candy ...

The lower numbered LED stays at the bottom, the higher numbered LED at the top of each single led housing assembly. Use LEDCase, insert the first LED assembly, add LEDGlas to the front slot, and close this housing using 2 M2x6 screws. Insert the first LEDHouse in the right side of your Grill. Make sure the screws of your LEDHouse point upwards. Repeat this steps for the 2nd LEDHouse. Make sure the lower numbered LED stays at the bottom. Mount the LEDHouse into the left part of your grill. 

Connect the servo plug of the LED to the right bottom pin header of your pcb. Make sure the ground pin points to the right!

Mount the Grill to the Supports of your UpperChassis. 

![alt text](https://github.com/pstimpel/caterpillarbulldozer/raw/master/media/front2.PNG "Front")

Mount both ESCs to "ElectronicsESCBase", you can use double sided tape. Screw it in between the supports. Connect both ESCs to the motors, according to the scheme you created earlier when testing your gearbox. Connect the switches of the ESCs to "ElectronicsSwitchBase". Mount the buzzer switch as well. Screw the Switchbase into its place.

Mount both CAT logos to the "BonnetFront". Mount "Bonnetfront" to your Grill assembly. 

![alt text](https://github.com/pstimpel/caterpillarbulldozer/raw/master/media/front4.PNG "Front")

Mount "ElectronicsCablechannel" and "ElectronicsBatteryBlocker", and mount this assembly to the left side of the UpperChassis supports. Use zipties to manage your cable stuff. The LED wire assembly goes straight to the back of your vehicle with the long cable you added between LEDs 4 and 5 (LED houses 2 and 3).

![alt text](https://github.com/pstimpel/caterpillarbulldozer/raw/master/media/front3.PNG "Front")

Mount "BonnetBaseLeft", "BonnetBaseRight" and "BonnetBackbase" together. Mount it to your vehicle. 

Mount the "BonnetHandle" to "BonnetLeft" and "BonnetRight", using M2x8. Insert "BonnetLockBoltLeft" into "BonnetLockcaseLeft", and screw it to "BonnetLeft". Repeat this step for the "right" parts. Use M2x12 screws, and make sure the "Bolts" can move freely, towards the front of the vehicle. 

![alt text](https://github.com/pstimpel/caterpillarbulldozer/raw/master/media/front6.PNG "Front")

Mount the Bonnets to the "BonnetHinge", mount the Hinge to the "BonnetHingeSupport". 

![alt text](https://github.com/pstimpel/caterpillarbulldozer/raw/master/media/front7.PNG "Front")

Mount this assembly to the "BonnetFront" using 4 M3x14. 

Connect the "BonnetHingeSupport" and the "BonnetBackbase".

Mount "BonnetRear" at the end of the Bonnet stuff. 

![alt text](https://github.com/pstimpel/caterpillarbulldozer/raw/master/media/front5.PNG "Front")

Let's move on to the drivers cabine. Mount the "DriverCabBase" to the vehicle. Insert the LEDs 5/6 and 7/8 into the housings, again the lower numbered LEDs to the bottom, add the LED glasses and tops. Insert the LEDHouse 3 into the back left pocket of the "DriverCabBase", and LEDHouse 4 to the right pocket. Manage the cables. 

![alt text](https://github.com/pstimpel/caterpillarbulldozer/raw/master/media/front8.PNG "Front")

Mount "DriverCabBack", "DriverCabFront" and "DriverCabRoofSupport". Fiddle the left LEDs through the hole of the rear right Cabine Support. Mount "DriversCabLowerTop" to the vehicle. 

![alt text](https://github.com/pstimpel/caterpillarbulldozer/raw/master/media/front9.PNG "Front")

Mount "StrobeHousing" to "DriversCabUpperTop". Fiddle the left LEDs through the hole. Insert the LEDs into the housing, by putting the cables between these 4 LED strips in the center of the housing. Mount the top the vehicle. Mount the "StrobeGlas" to the "StrobeHousing" using M2x8. The "Glas" has indexed holes, keep this in mind. 

![alt text](https://github.com/pstimpel/caterpillarbulldozer/raw/master/media/fronta.PNG "Front")

Now let's move on to the very last steps of our assembly, and therefore the finish line.

Before you mount the blade, you could of course take the opportunity to clear your candy stock, or you could drive around with your vehicle. To make sense of the light stuff, you would have to upload the arduino code to your Arduino first. However, it should beep if you drive forward/backward. On driving forward, the front light should be white, the backlight should be red. If you turn left or right the according LEDs should flash. The strobe should "turn" all the time. If you confused left or right during LED assembly, just change the numbers of the LED in your arduino sketch. Hint: You mighg have a hard time to plug the USB in and out of your Arduino. There are short Mini USB extension cables available. This cable will make your life easier.

Mount "BladeBarLeft" and "BladeBarRight" to the axles of your Blade servos. Fix them using some M3x20. Assemble the Blade now. "BladeLeft", "BladeMiddle" and "BladeRight" have holes for those M4 bolts. Insert them, and push the three Blade-parts together. Use screws to fix them at their backside. Add the "BladeEdge.." parts, using M2x8 screws. Mount "BladeHydraulicsHolderLeft" and "BladeHydraulicsHolderRight" to the blade. Mount "BladeHydraulicsGrillBaseLeft" and "BladeHydraulicsGrillBaseRight" to the "BonnetFront". Mount the "BladeHydraulicsTube" using "BladeHydraulicsClamp" to the "BladeHydraulicsGrillBase", make sure the tube is clamped around its half. Mount "BladeHydraulicsBolt" and "BladeHydraulicsBladeBase" together, twice. Mount these to the both "BladeHydraulicsHolder". Insert the "BladeHydraulicsBolt" into the Tubes.

![alt text](https://github.com/pstimpel/caterpillarbulldozer/raw/master/media/frontb.PNG "Front")

**Whoooohoooo! Done!**

![alt text](https://github.com/pstimpel/caterpillarbulldozer/raw/master/media/IMG_20191217_114823.jpg "WHOOOOHOOOOO")

## Who to thank?

I want to thank the guys of DasFilament.de and Prusa Research (https://www.prusa3d.com/). You deliver stuff that works out of the box. No hassle, no tinkering. Love it.

Thanks a lot to Brad, Aaron, Angelo and all others from Autodesk Fusion 360 (https://www.youtube.com/user/AutodeskFusion360), who deliver a lot of knowledge in their videos. Without these "another little trick" stuff I would have not been able to finish this project. Still, my CAD project contains a lot of crime - but nothing you could not hide behind 3d printed parts.

Thanks to the 3d maker noob "3DMN" aka Joe (https://twitter.com/3dmakernoob) and the 3d printing nerd "3DPN" aka Joel (https://twitter.com/joeltelling/) for their video channels, and the know how they collect with their communities. Finally it was Joe from 3DMN who awakened my interest in Arduino stuff - check out his mood lamp. Please consider becoming Patrons if you like their stuff, as I do.

Thanks to the guys of 3dSets.com, they hooked me up to the world of 3d printing RC vehicles with their Rancher, which is a much easier to assemble RC car compared to this bullozer. Easier to build? Yep, because of a comprehensive manual they deliver.

Thanks as well to my colleague Jumbo, who answered some of my questions with his endless electronics knowledge.

Thanks to the guys from OpenRCForums (https://openrcforums.com). They just delivered the perfect solution to a RC noob like I am. I gained so much knowledge during this conversation - appreciated.

Thanks to my family! They have hard times seeing me cursing, or being away for hours to do soldering stuff. Finally, they have to share the home with a guy who loves melting plastics to turn it into vehicles, drones and other stuff.

## Donation

I spent hours over hours doing this. And I love doing it, it is my hobby. I really like to provide you this stuff for free. You should not feel bad by just downloading the stuff and using it according to the Creative Commons License (4.0, BY / NC / SA). 

However, if you would like to spend me a coffee, you can use Paypal https://www.paypal.com/paypalme2/RedZoneAction - thanks in advance.

## Feedback

If you go for a build, I would like it very much to hear from you. Maybe you want to share pics of your Bulldozer? You can find me at

https://twitter.com/PjotrS72

https://www.prusaprinters.org/social/2411-pstimpel/prints

https://www.thingiverse.com/pstimpel

## Finally...

I am providing this stuff as it is. I do not promise anything, and I am not responsible for any harm you might create or receive by following this manual or by using the methods and results described in this manual.

### Warning

Lipo batteries can cause danger. Handle them carefully. If you create PCBs on your own pay attention and take security measurements when handling chemicals.
