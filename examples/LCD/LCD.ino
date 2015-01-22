#include <SPI.h>
#include "rgb_lcd.h"
#include <LCD.h>
#include <string>
#include <Wire.h>

int colorR = 150;
int colorG = 150;
int colorB = 150;
int cols = 16;
int lines = 2;
LCD lcd(colorR,colorG,colorB,cols,lines);
char LCD_out[16];
char LCD_out2[16];
int H = 0;
int M = 0;
int S = 0;
void setup() 
{
  //begin serial communication
  Serial.begin(57600);
  Serial.println("Initializing..."); 
  lcd.begin();
  delay(100);
  lcd.Print_To_Screen("Initializing...","");
  delay(900);
}

void loop() 
{ 
  S++;
  if (S == 60){S=0;M++;}
  if (M == 60){M=0;H++;}
  sprintf(LCD_out,"H: %i M:%i\0", H,M);//Format hours and mins
  sprintf(LCD_out2,"Seconds: %i\0", S);//Format seconds
  lcd.Print_To_Screen(LCD_out,LCD_out2);
  Serial.print("H:");
  Serial.print(H);
  Serial.print(" M:");
  Serial.println(M);
  Serial.print("S:");
  Serial.println(S);
  delay(1000);
}




