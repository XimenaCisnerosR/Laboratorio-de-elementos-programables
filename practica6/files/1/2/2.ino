// Codigo Attiny85
//
#include <TinyWireM.h>
#include <Tiny4kOLED.h>
int boton=LOW;
#define pwmPin  3 

void prepareDisplay() {
  oled.clear();
  oled.begin();
  oled.setFont(FONT6X8);
  oled.setCursor(5,1);
  oled.print(F("TEMP:"));
  oled.setCursor(5,3);
  oled.print(F("RPM:")); 
}

void setup()
{
  pinMode(3, OUTPUT);
  pinMode(4, INPUT);
}


void loop()
{
  boton=digitalRead(4);
  
  if(boton==HIGH){

    oled.print(" ON");
  }
  else{
    
    oled.print(" OFF");
  }
}