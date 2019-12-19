#include <FastLED.h>

FASTLED_USING_NAMESPACE

#if defined(FASTLED_VERSION) && (FASTLED_VERSION < 3001000)
#warning "Requires FastLED 3.1 or later; check github for latest code."
#endif

#define DATA_PIN    4
#define LED_TYPE    WS2811
#define COLOR_ORDER GRB
#define NUM_LEDS    20
CRGB leds[NUM_LEDS];
#define FRAMES_PER_SECOND  120

volatile int pwm_value2 = 0;
volatile int old_pwm_value2 = 0;
volatile int prev_time2 = 0;
volatile int pwm_value3 = 0;
volatile int old_pwm_value3 = 0;
volatile int prev_time3 = 0;

volatile bool forward = false;
volatile bool oldforward = false;

volatile bool backward = false;
volatile bool oldbackward = false;

volatile bool left = false;
volatile bool oldleft=false;

volatile bool right = false;
volatile bool oldright = false;

volatile bool driving = false;
volatile bool olddriving = false;

volatile bool changeLED = false;

volatile int buzzercount=0;
int buzzerswitch=100;
int buzzerpin=12;

volatile int blinkercount=0;
int blinkerswitch = 1600;
volatile bool blinkerstate=false;
volatile bool oldblinkerstate=false;


volatile int strobecount=0;
int strobeswitch = 1250;
volatile int strobestate=0;
volatile int oldstrobestate=-1;

void setup() {
  Serial.begin(115200); //init debug console 

  // when pin D2 goes high, call the rising function
  attachInterrupt(0, rising2, RISING);

  // when pin D3 goes high, call the rising function
  attachInterrupt(1, rising3, RISING);

  pinMode(LED_BUILTIN, OUTPUT); //init built in LED

  Serial.print("go");

  pinMode(buzzerpin, OUTPUT);

  FastLED.addLeds<LED_TYPE,DATA_PIN,COLOR_ORDER>(leds, NUM_LEDS).setCorrection(TypicalLEDStrip);
  FastLED.setBrightness(200);
  
}
 
void loop() {
  if(driving) {
    //Serial.print(" ° ");  
  } else {
    //Serial.print("   ");
  }
  if(left) {
    //Serial.print(" < ");  
  } else if(right) {
    //Serial.print(" > ");
  } else {
    //Serial.print(" - ");
  }
  if(forward) {
    //Serial.print(" ^ ");  
  } else if(backward) {
    //Serial.print(" v ");
  }
  Serial.println(" :");

  changeLED=false;
  if(olddriving != driving) {
    changeLED=true;
    olddriving = driving;
  }
  
  if(oldforward != forward) {
    changeLED=true;
    oldforward = forward;
  }

  if(oldbackward != backward) {
    changeLED=true;
    oldbackward = backward;
  }

  if(oldleft != left) {
    changeLED=true;
    oldleft = left;
  }

  if(oldright != right) {
    changeLED=true;
    oldright = right;
  }
  
  if(left || right) {
    blinkercount++;
    if(blinkercount>(blinkerswitch*2)) {
      blinkerstate=false;
      blinkercount=0;
      if(blinkerstate != oldblinkerstate) {
        oldblinkerstate=false;
        blinkerstate=false;
        changeLED=true;
        //Serial.println("blinker off");
      }
    } else {
      if(blinkercount>(blinkerswitch)) {
        blinkerstate=true;
        if(blinkerstate != oldblinkerstate) {
          oldblinkerstate=true;
          blinkerstate=true;
          changeLED=true;
        //Serial.println("blinker on");
        }
      }
    }
  } else {
    blinkercount=0;
  }

  strobecount++;
  //Serial.print(strobecount);
  //Serial.print("-");
  //Serial.print(oldstrobestate);
  //Serial.print("-");
  //Serial.println(strobestate);
  
  if(strobecount<= strobeswitch) {
    //Serial.println("A");
    strobestate=1;
    if(strobestate!=oldstrobestate) {
      
      oldstrobestate=strobestate;
      leds[8]=CRGB::Yellow;
      leds[9]=CRGB::Yellow;
      leds[10]=CRGB::Yellow;
      leds[11]=CRGB::Yellow;
      leds[12]=CRGB::Yellow;
      leds[13]=CRGB::Yellow;
      leds[14]=CRGB::Black;
      leds[15]=CRGB::Black;
      leds[16]=CRGB::Black;
      leds[17]=CRGB::Black;
      leds[18]=CRGB::Black;
      leds[19]=CRGB::Black;
      
      changeLED=true;
      //Serial.println("changeto1");
    }
    
  } else if(strobecount > strobeswitch && strobecount <= (strobeswitch*2)) {
    //Serial.println("B");
    strobestate=2;
    if(strobestate!=oldstrobestate) {
      
      oldstrobestate=strobestate;
       leds[8]=CRGB::Black;
      leds[9]=CRGB::Black;
      leds[10]=CRGB::Black;
      leds[11]=CRGB::Yellow;
      leds[12]=CRGB::Yellow;
      leds[13]=CRGB::Yellow;
      leds[14]=CRGB::Yellow;
      leds[15]=CRGB::Yellow;
      leds[16]=CRGB::Yellow;
      leds[17]=CRGB::Black;
      leds[18]=CRGB::Black;
      leds[19]=CRGB::Black;
      
      changeLED=true;
      //Serial.println("changeto2");
    }
    
  } else if(strobecount > (strobeswitch*2) && strobecount <= (strobeswitch*3)) {
    //Serial.println("C");
    strobestate=3;
    if(strobestate!=oldstrobestate) {
      
      oldstrobestate=strobestate;
       leds[8]=CRGB::Black;
      leds[9]=CRGB::Black;
      leds[10]=CRGB::Black;
      leds[11]=CRGB::Black;
      leds[12]=CRGB::Black;
      leds[13]=CRGB::Black;
      leds[14]=CRGB::Yellow;
      leds[15]=CRGB::Yellow;
      leds[16]=CRGB::Yellow;
      leds[17]=CRGB::Yellow;
      leds[18]=CRGB::Yellow;
      leds[19]=CRGB::Yellow;
      
      changeLED=true;
      //Serial.println("changeto3");
    }
    
  } else if(strobecount > (strobeswitch*3) && strobecount <= (strobeswitch*4)) {
    //Serial.println("D");
    strobestate=4;
    if(strobestate!=oldstrobestate) {
      
      oldstrobestate=strobestate;
       leds[8]=CRGB::Yellow;
      leds[9]=CRGB::Yellow;
      leds[10]=CRGB::Yellow;
      leds[11]=CRGB::Black;
      leds[12]=CRGB::Black;
      leds[13]=CRGB::Black;
      leds[14]=CRGB::Black;
      leds[15]=CRGB::Black;
      leds[16]=CRGB::Black;
      leds[17]=CRGB::Yellow;
      leds[18]=CRGB::Yellow;
      leds[19]=CRGB::Yellow;
      
      changeLED=true;
      //Serial.println("changeto4");
    }
    
  } else {
    strobestate=-1;
    strobecount=0;
    //Serial.println("reset");
  }
    
  if(driving) {
    buzzercount++;
    if(buzzercount>(buzzerswitch*250)) {
      buzzercount=0;
      digitalWrite(buzzerpin, LOW);
      //Serial.println("led off");
    } else if(buzzercount>(buzzerswitch*125)) {
      digitalWrite(buzzerpin, LOW);
      //Serial.println("led off");
       
    } else {
      if(buzzercount>(buzzerswitch)) {
        digitalWrite(buzzerpin, HIGH);
        //Serial.println("led on");
      }
    }
  } else {
    digitalWrite(buzzerpin, LOW);
  }
  //Serial.println(buzzercount);
  //reset
  //for( int i = 0; i < NUM_LEDS; i++) {
    //leds[i] = CRGB::Blue;
  //}

//0 front left scheinwerfer
//1 front left blinker
//2 front right scheinwerfer
//3 front right blinker
//4 back left scheinwerfer/rücklicht
//5 back left blinker
//6 back right scheinwerfer/rücklicht
//7 back right blinker
//8-19 Strobe ligh, 4 groups 3 leds each. 8-10 group 1, 11-13 group 2, 14-16 group 3, 17-19 group 4
  
  if(left && blinkerstate) {
     leds[1]=CRGB::Orange;
     leds[5]=CRGB::Orange;
     
  }
  if(left && !blinkerstate) {
     leds[1]=CRGB::Black;
     leds[5]=CRGB::Black;
     
  }
  if(right && blinkerstate) {
     leds[3]=CRGB::Orange;
     leds[7]=CRGB::Orange;
     
  }
  if(right && !blinkerstate) {
     leds[3]=CRGB::Black;
     leds[7]=CRGB::Black;
     
  }
  if(!left && !right) {
    leds[1]=CRGB::Black;
    leds[5]=CRGB::Black;
    leds[3]=CRGB::Black;
    leds[7]=CRGB::Black;
    oldblinkerstate=false;
    blinkerstate=false; 
  }

  if(!backward) {
    leds[0] = CRGB::White;
    leds[2] = CRGB::White;
    leds[4] = CRGB::Red;
    leds[6] = CRGB::Red;
    
  }

  if(backward) {
    leds[0] = CRGB::Yellow;
    leds[2] = CRGB::Yellow;
    leds[4] = CRGB::White;
    leds[6] = CRGB::White;
    
  }

  if(changeLED) {
    FastLED.show();  
    FastLED.delay(1000/FRAMES_PER_SECOND); 
  }

}
 
void rising2() {
  attachInterrupt(0, falling2, FALLING);
  prev_time2 = micros();
}

void rising3() {
  attachInterrupt(1, falling3, FALLING);
  prev_time3 = micros();
}
 
void falling2() {
  attachInterrupt(0, rising2, RISING);
  pwm_value2 = micros()-prev_time2; //calculate PWN from input

  //if change is big enough, forward it to servo
  if((pwm_value2 - old_pwm_value2) > 50 or (pwm_value2 - old_pwm_value2) < -50) {
    //Serial.print("--IN2: ");
    //Serial.println(pwm_value2);
    //delay(50);                          // give the servo some time to reach desired position
    old_pwm_value2 = pwm_value2;          //store new value in old_pwm_value
    //digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
    //delay(50);                       // wait
    //digitalWrite(LED_BUILTIN, LOW);     //turn led off

    if(pwm_value2> 1550) {
      driving=true;
      forward=true;
      backward=false;
    }
    
    if(pwm_value2< 1450) {
      driving=true;
      forward=false;
      backward=true;
    }

    if(pwm_value2<= 1550 && pwm_value2>= 1450) {
      driving=false;
      forward=false;
      backward=false;
    }
    
  } else {
    //the change was between -50 and 50, this is not enough to forward it to output
    //Serial.print("too low for a change: ");
    //Serial.println(pwm_value);
   }
  
}

void falling3() {
  attachInterrupt(1, rising3, RISING);
  pwm_value3 = micros()-prev_time3; //calculate PWN from input

  //if change is big enough, forward it to servo
  if((pwm_value3 - old_pwm_value3) > 50 or (pwm_value3 - old_pwm_value3) < -50) {
    //Serial.print("++IN3: ");
    //Serial.println(pwm_value3);
    //delay(50);                          // give the servo some time to reach desired position
    old_pwm_value3 = pwm_value3;          //store new value in old_pwm_value
    //digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
    //delay(50);                       // wait
    //digitalWrite(LED_BUILTIN, LOW);     //turn led off

    if(pwm_value3< 1700) {
      left=true;
      right=false;
    }
    
    if(pwm_value3> 1300) {
      left=false;
      right=true;
    }

    if(pwm_value3<= 1700 && pwm_value3>= 1300) {
      left=false;
      right=false;
    }
  } else {
    //the change was between -50 and 50, this is not enough to forward it to output
    //Serial.print("too low for a change: ");
    //Serial.println(pwm_value);
   }
  
}
