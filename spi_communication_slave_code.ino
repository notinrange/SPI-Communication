#include<SPI.h>                       //Library foe SPI
#define LEDpin 7
#define buttonpin 2
volatile boolean received;
volatile byte Slavereceived,Slavesend;
int buttonvalue;
int x;

void setup()
{
  Serial.begin(115200);              // Starts Serial Communication ait BAud Rate 115200
  
  pinMode(buttonpin,INPUT);           // Set pin 2 as input
  pinMode(LEDpin,OUTPUT);  // Set pin 7 as Output
  pinMode(MISO,OUTPUT); // Sets MISO as OUTPUT
  
  SPCR != _BV(SPE);    // Turn on SPI in slave mode
  received = false;
  
  
  SPI.attachInterrupt();
  
}


ISR(SPI_STC_vect)        // interrupt routine function
{
  Slavereceived = SPDR;  // Value recieved from master if store in variable slave recieved
  received = true;        // Sts received as true
}

void loop(void)
{
  if(received)           // Logic to SET LED ON or OFF depending upon the value received fron the master 
  {
    if(Slavereceived == 1){
      digitalWrite(LEDpin,HIGH);
      Serial.println("Slave LED ON");
    }
    else
    {
    digitalWrite(LEDpin,LOW);
    Serial.println("Slave LED OFF");
    }
    
    
    buttonvalue = digitalRead(buttonpin);
    
    if(buttonvalue == HIGH)
    {
      x = 1;
    }
    else
    {
      x = 0;
    }
    Slavesend = x;
    SPDR = Slavesend;  // Sends the x value to master via SPDR
    delay(1000);
  }
  
}
    
    
  
  

