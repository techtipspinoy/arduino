 //Wash Control Version 2, Build 1138152025


int OnOff = 8;
int StopReset = 9;
//int FullWash = 8;
//int Wash = 7;


//variables 

int Received = 0;
int OnOff_state = 0;
int StopReset_state = 0;
//int FullWash_state = 0;
//int Wash_state = 0;


void setup() {
  
  Serial.begin(9600);
  pinMode(OnOff,OUTPUT);
  pinMode(StopReset,OUTPUT);
  //pinMode(FullWash,OUTPUT);
  //pinMode(Wash,OUTPUT);
  
}

void loop() {

  if(Serial.available()>0)
 { 
    Received = Serial.read();
}

////////////////On/Off/////////////////////
if (OnOff_state == 0 && Received == 'a')
  {
    digitalWrite(OnOff,HIGH);
    OnOff_state=1;
    Received=0;  
  }
if (OnOff_state ==1 && Received == 'a')
  {
    digitalWrite(OnOff,LOW);
    OnOff_state=0;
    Received=0;
  }
///////////////////////////////////////////


////////////////Stop/Reset/////////////////////
if (StopReset_state == 0 && Received == 'b')
  {
    digitalWrite(StopReset,HIGH);
    StopReset_state=1;
    Received=0;  
  }
if (StopReset_state ==1 && Received == 'b')
  {
    digitalWrite(StopReset,LOW);
    StopReset_state=0;
    Received=0;
  }

}
///////////////////////////////////////////

/*
////////////////FullWash/////////////////////
if (FullWash_state == 0 && Received == 'a')
  {
    digitalWrite(FullWash,HIGH);
    FullWash_state=1;
    Received=0;  
  }
if (FullWash_state ==1 && Received == 'a')
  {
    digitalWrite(FullWash,LOW);
    FullWash_state=0;
    Received=0;
  }
///////////////////////////////////////////


////////////////Wash/////////////////////
if (Wash_state == 0 && Received == 'a')
  {
    digitalWrite(Wash,HIGH);
    Wash_state=1;
    Received=0;  
  }
if (Wash_state ==1 && Received == 'a')
  {
    digitalWrite(Wash,LOW);
    Wash_state=0;
    Received=0;
  }
///////////////////////////////////////////

}
*/
