#include <Adafruit_NeoPixel.h>
#include <LiquidCrystal.h>

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(64, 0, NEO_GRB + NEO_KHZ800);  //led declare syntax

int r = 0;
int g = 0;
int b = 0;

LiquidCrystal lcd(1,2,3,4,5,6,7,8,9,10);  //lcd declaration
void setup() {
  // put your setup code here, to run once:
lcd.begin(16,2);
pinMode(0,OUTPUT);
for(int s=1;s<100;s++)
  {
    lcd.setCursor(0,0);
    lcd.print("     Packet     ");
    lcd.setCursor(0,1);
    lcd.print(s);
    delay (2000);
      
  lcd.setCursor(0,0);
  lcd.print("     Bits     ");
  lcd.setCursor(0,1);
  lcd.print("  Transmission  ");
  delay(2000);
  lcd.clear();
  //--------------------------------------------
  lcd.setCursor(0,0);
  lcd.print(" ---Stage_1--- ");
  delay (2000);
  lcd.clear();
//--------------------------------------------  
  lcd.setCursor(0,0);
  lcd.print("Creating");
  lcd.setCursor(0,1);
  lcd.print("Bits...");
  for(int i=0;i<=23;i++)
  {
    setColor();
    pixels.setPixelColor(i, pixels.Color(r,g,b));
    pixels.show();
    delay(1);
    
 
  }
//--------------------------------------------
  lcd.clear();
  lcd.print("Transmitting");
  lcd.setCursor(0,1);
  lcd.print("Bits...");
  //--------------------------------------------
  for(int i=0;i<16;i++)
  {
    pixels.setPixelColor(i, pixels.Color(0,0,0));
    pixels.show();
    delay(1);
    
  for(int j=i+24;j<=i+25;j++)
    {
      setColor();
      pixels.setPixelColor(j, pixels.Color(r,g,b));
      pixels.show();
      delay(1);
        break;
     }
  }
  //--------------------------------------------
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Receiving");
  lcd.setCursor(0,1);
  lcd.print("Bits...");
  for(int i=16;i<=23;i++)
  {
    pixels.setPixelColor(i, pixels.Color(0,0,0));
    pixels.show();
    delay(1);
     
    for(int k=i+35;k<=i+36;k++)
    {
        setColor();
      pixels.setPixelColor(k, pixels.Color(r,g,b));
      pixels.show();
      delay(1);
        break;
     }
  }

 for(int i=24;i<=29;i++)
 {
    pixels.setPixelColor(i, pixels.Color(0,0,0));
    pixels.show();
    delay(1);
    
    for(int j=i+35;j<=i+36;j++)
    {
        setColor();
      pixels.setPixelColor(j, pixels.Color(r,g,b));
      pixels.show();
      delay(1);
        break;
     }
 }
  
  
 for(int i=29;i<=39;i++)
 {
    pixels.setPixelColor(i, pixels.Color(0,0,0));
    pixels.show();
    delay(1);
    
    for(int j=i+11;j<=i+12;j++)
    {
        setColor();
      pixels.setPixelColor(j, pixels.Color(r,g,b));
      pixels.show();
      delay(1);
        break;
     }
 }
//--------------------------------------------
lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Bits");
  lcd.setCursor(0,1);
  lcd.print("Received !!!");
  delay(1);
//--------------------------------------------
  for(int i=40;i<=63;i++)
  {
    pixels.setPixelColor(i, pixels.Color(0,0,0));
    pixels.show();
    delay(1);
  }
   
//--------------------------------------------
  lcd.clear();
  lcd.print(" ---Stage_2--- ");
  delay (1);
  lcd.clear();
//--------------------------------------------
  lcd.setCursor(0,0);
  lcd.print("Preparing");
  lcd.setCursor(0,1);
  lcd.print("Acknowledgement...");
  for(int i=51;i>=40;i--)
  {
    setColor1();
    pixels.setPixelColor(i, pixels.Color(r,g,b));
    pixels.show();
    delay(1);
  }
  for(int i=63;i>=52;i--)
  {
    setColor1();
    pixels.setPixelColor(i, pixels.Color(r,g,b));
    pixels.show();
    delay(1);
  }
//--------------------------------------------
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Sending ");
  lcd.setCursor(0,1);
  lcd.print("Acknowledgement...");
    for(int i=51;i>=40;i--)
    {
      pixels.setPixelColor(i, pixels.Color(0,0,0));
      pixels.show();
      delay(500);
      for(int j=i-12;j>=i-13;j--)
      {
        setColor1();
        pixels.setPixelColor(j, pixels.Color(r,g,b));
        pixels.show();
        delay(1);
          break;
      }
  
    }
  
  for(int i=63;i>=52;i--)
    {
      pixels.setPixelColor(i, pixels.Color(0,0,0));
      pixels.show();
      delay(500);
      for(int j=i-37;j>=i-38;j--)
      {
        setColor1();
        pixels.setPixelColor(j, pixels.Color(r,g,b));
        pixels.show();
        delay(1);
          break;
      }
  
    }
//--------------------------------------------
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Receiving");
  lcd.setCursor(0,1);
  lcd.print("Acknowledgement...");
//--------------------------------------------
 
 for(int i=39;i>=24;i--)
 {
    pixels.setPixelColor(i, pixels.Color(0,0,0));
    pixels.show();
    delay(1);
    
    for(int j=i-24;j<=i-23;j--)
    {
        setColor1();
      pixels.setPixelColor(j, pixels.Color(r,g,b));
      pixels.show();
      delay(1);
        break;
     }
 }
 //--------------------------------------------
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Acknowledgement...");
  lcd.setCursor(0,1);
  lcd.print("Received");
//--------------------------------------------
  delay(1);
//--------------------------------------------
  for(int i=23;i>=0;i--)
  {
    pixels.setPixelColor(i, pixels.Color(0,0,0));
    pixels.show();
    delay(1);
  }
//--------------------------------------------
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Execution");
  lcd.setCursor(0,1);
  lcd.print("Successful !!!!!");
  delay (3000);
  lcd.clear();
  }
}

void loop() {
 
}

//--------------------------------------------
void setColor1()
{
  r = random(255);
  g = random(0);
  b = random(0);
}
//--------------------------------------------
void setColor()
{
  r = random(0);
  g = random(255);
  b = random(0);
}