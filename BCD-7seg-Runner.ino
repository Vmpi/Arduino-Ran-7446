/*
  This program was made to test a BCD to 7-Segment decoder chip.

  Arduino:  7446 Chip:
  5v      -   Vcc (Pin 16)
  GND     -   Ground (Pin 8)
  Pin 1   -   Pin 7 
  Pin 2   -   Pin 1
  Pin 3   -   Pin 2
  Pin 4   -   Pin 6
*/

int n = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(1,OUTPUT); // Goes to pin 7
  pinMode(2,OUTPUT); // Goes to pin 1
  pinMode(3,OUTPUT); // Goes to pin 2
  pinMode(4,OUTPUT); // Goes to pin 6

  randomSeed(analogRead(0));
}

void loop() {
  // put your main code here, to run repeatedly:
  ///*
  if(n>9){
    n = 0;
  }
  
  binaryEncoder(n);
  n += 1;
  //*/
  //binaryEncoder(random(10));
  delay(500);
}

void binaryEncoder(int number){
  switch(number){
    case 0:
      digitalWrite(1,LOW);
      digitalWrite(2,LOW);
      digitalWrite(3,LOW);
      digitalWrite(4,LOW);
      break;
    case 1:
      digitalWrite(1,HIGH);
      digitalWrite(2,LOW);
      digitalWrite(3,LOW);
      digitalWrite(4,LOW);
      break;
    case 2:
      digitalWrite(1,LOW);
      digitalWrite(2,HIGH);
      digitalWrite(3,LOW);
      digitalWrite(4,LOW);
      break;
    case 3:
      digitalWrite(1,HIGH);
      digitalWrite(2,HIGH);
      digitalWrite(3,LOW);
      digitalWrite(4,LOW);
      break;
    case 4:
      digitalWrite(1,LOW);
      digitalWrite(2,LOW);
      digitalWrite(3,HIGH);
      digitalWrite(4,LOW);
      break;
    case 5:
      digitalWrite(1,HIGH);
      digitalWrite(2,LOW);
      digitalWrite(3,HIGH);
      digitalWrite(4,LOW);
      break;
    case 6:
      digitalWrite(1,LOW);
      digitalWrite(2,HIGH);
      digitalWrite(3,HIGH);
      digitalWrite(4,LOW);
      break;
    case 7:
      digitalWrite(1,HIGH);
      digitalWrite(2,HIGH);
      digitalWrite(3,HIGH);
      digitalWrite(4,LOW);
      break;
    case 8:
      digitalWrite(1,LOW);
      digitalWrite(2,LOW);
      digitalWrite(3,LOW);
      digitalWrite(4,HIGH);
      break;
    case 9:
      digitalWrite(1,HIGH);
      digitalWrite(2,LOW);
      digitalWrite(3,LOW);
      digitalWrite(4,HIGH);
      break;
    case 10:
      digitalWrite(1,LOW);
      digitalWrite(2,HIGH);
      digitalWrite(3,LOW);
      digitalWrite(4,HIGH);
      break;
    case 11:
      digitalWrite(1,HIGH);
      digitalWrite(2,HIGH);
      digitalWrite(3,LOW);
      digitalWrite(4,HIGH);
      break;
    case 12:
      digitalWrite(1,LOW);
      digitalWrite(2,LOW);
      digitalWrite(3,HIGH);
      digitalWrite(4,HIGH);
      break;
    case 13:
      digitalWrite(1,HIGH);
      digitalWrite(2,LOW);
      digitalWrite(3,HIGH);
      digitalWrite(4,HIGH);
      break;
    case 14:
      digitalWrite(1,LOW);
      digitalWrite(2,HIGH);
      digitalWrite(3,HIGH);
      digitalWrite(4,HIGH);
      break;
    case 15:
      digitalWrite(1,HIGH);
      digitalWrite(2,HIGH);
      digitalWrite(3,HIGH);
      digitalWrite(4,HIGH);
      break;
    default:
      digitalWrite(1,LOW);
      digitalWrite(2,LOW);
      digitalWrite(3,LOW);
      digitalWrite(4,LOW);
      break;
  }
}
