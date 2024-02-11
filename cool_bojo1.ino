int IN1 =3;
int IN2 =4;
int IN3 =5;
int IN4 =6;
int ENABLE12=9;
int ENABLE34=8;
char dir;
void setup()
{Serial.begin(9600);
pinMode(IN1,OUTPUT);
  pinMode(IN2,OUTPUT);
  pinMode(IN3,OUTPUT);
  pinMode(IN4,OUTPUT);
  }


  void loop()
  {digitalWrite(ENABLE12,1);
     digitalWrite(ENABLE34,1);
   
    if(Serial.available()>1)
      
    {dir = Serial.read();
    switch(dir)
    
   { case 'F':
    digitalWrite(IN1,1);
    digitalWrite(IN2,0);
    digitalWrite(IN3,1);
    digitalWrite(IN4,0);
    break;

    case 'B':
    digitalWrite(IN1,0);
    digitalWrite(IN2,1);
    digitalWrite(IN3,0);
    digitalWrite(IN4,1);
    break;

    case 'L':
    digitalWrite(IN1,1);
    digitalWrite(IN2,0);
    digitalWrite(IN3,0);
    digitalWrite(IN4,0);
    break;

    case 'R':
    digitalWrite(IN1,0);
    digitalWrite(IN2,0);
    digitalWrite(IN3,1);
    digitalWrite(IN4,0);
    break;

    case 'S':
    digitalWrite(IN1,0);
    digitalWrite(IN2,0);
    digitalWrite(IN3,0);
    digitalWrite(IN4,0);
    break;
      }
    
    }    }