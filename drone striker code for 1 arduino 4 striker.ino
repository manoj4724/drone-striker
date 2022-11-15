#include <Servo.h>
#include <Servo.h>

Servo tap_servo1, tap_servo2,tap_servo3,tap_servo4;

int sensor_pin1 = 4;
int tap_servo_pin1 = 5;

int sensor_pin2 = 6;
int tap_servo_pin2 =7;

int sensor_pin3 = 6;
int tap_servo_pin3 =7;

int sensor_pin4 = 6;
int tap_servo_pin4 =7;


int val1,val2,val3,val4;

void setup()
{
  pinMode(sensor_pin1,INPUT);
  pinMode(sensor_pin2,INPUT);
  pinMode(sensor_pin3,INPUT);
  pinMode(sensor_pin4,INPUT);

  
  tap_servo1.attach(tap_servo_pin1);
  tap_servo2.attach(tap_servo_pin2);
  tap_servo3.attach(tap_servo_pin3);
  tap_servo4.attach(tap_servo_pin4);

}

void loop(){
  val1 = digitalRead(sensor_pin1);
   val2 = digitalRead(sensor_pin2);

  if (val1==0)
  {tap_servo1.write(0);
  }
  if (val1==1)
  {tap_servo1.write(90);
    }

    if (val2==0)
  {tap_servo2.write(0);
  }
  if (val2==1)
  {tap_servo2.write(90);
    }

      if (val3==0)
  {tap_servo2.write(0);
  }
  if (val3==1)
  {tap_servo2.write(90);
    }

      if (val4==0)
  {tap_servo2.write(0);
  }
  if (val4==1)
  {tap_servo2.write(90);
    }


}
