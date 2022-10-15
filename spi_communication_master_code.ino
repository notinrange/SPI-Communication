#include<SPI.h>                       //Library foe SPI
#define LED 7
#define ipbutton 2
int buttonvalue;
int x;

void setup(void)
{
  Serial.begin(115200);              // Starts Serial Communication ait BAud Rate 115200
  
  pinMode(ipbutton,INPUT);           // Set pin 2 as input
  pinMode(LED,OUTPUT);               // Set pin 7 as Output
  
  SPI.begin();                       // Begins the SPI Communication
  SPI.setClockDivider(SPI_CLOCK_DIV8);// Sets clock for SPI communication at 8(16/8 = 2Khz)
  digitalWrite(SS,HIGH);              // Setting SlaveSelect as High (so master doesn't connect to slave)
}

void loop(void)
{
  byte Mastersend,Mastereceive;
  buttonvalue = digitalRead(ipbutton);  // Read the status of pin2
  
  if(buttonvalue == HIGH)    // Logic for setting x value (To be sent to slave) depending upon input from pin 2
  {
    x = 1;
  }
  else 
  {
    x = 0;
  }
  
  digitalWrite(SS,LOW);      // start communication with slave connected to master
  
  Mastersend = x;
  Mastereceive = SPI.transfer(Mastersend); // send the mastersend value to slave also receives value from slave
  
  if(Mastereceive == 1)   // Logic for setting the LED output sepending upon value received from slave
  {
    digitalWrite(LED,HIGH);          // Sets Pin 7 HIGH
    Serial.println("Master LED ON");
    
  }
  else 
  {
    digitalWrite(LED,LOW);
    Serial.println("Master LED OFF");// Sets pin 7 Low
  }
  delay(1000);
}
    
