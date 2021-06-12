/*
  LiquidCrystal Library - Hello World

 Demonstrates the use a 16x2 LCD display.  The LiquidCrystal
 library works with all LCD displays that are compatible with the
 Hitachi HD44780 driver. There are many of them out there, and you
 can usually tell them by the 16-pin interface.

 This sketch prints "Hello World!" to the LCD
 and shows the time.

  The circuit:
 * LCD RS pin to digital pin 12
 * LCD Enable pin to digital pin 11
 * LCD D4 pin to digital pin 5
 * LCD D5 pin to digital pin 4
 * LCD D6 pin to digital pin 3
 * LCD D7 pin to digital pin 2
 * LCD R/W pin to ground
 * LCD VSS pin to ground
 * LCD VCC pin to 5V
 * 10K resistor:
 * ends to +5V and ground
 * wiper to LCD VO pin (pin 3)

 Library originally added 18 Apr 2008
 by David A. Mellis
 library modified 5 Jul 2009
 by Limor Fried (http://www.ladyada.net)
 example added 9 Jul 2009
 by Tom Igoe
 modified 22 Nov 2010
 by Tom Igoe
 modified 7 Nov 2016
 by Arturo Guadalupi


*/

// include the library code:
#include <LiquidCrystal.h>


void animation(void);
void reverse_animation(void);

void animation1(void);

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
    lcd.begin(16,2);     // or lcd.begin(8,2);
    lcd.setCursor(0,0); // Works for showing characters on the right half of GDM1601A controlled 16x1 LCD displays.
    lcd.print("Hello   ");
    lcd.setCursor(40,0); // Works for showing characters on the right half of GDM1601A controlled 16x1 LCD displays.
    lcd.print("World   ");
    delay(2000);
    //lcd.clear();
}

void loop() 
{
   animation1();
   lcd.clear();
   animation1();
   lcd.clear();
   
   animation();
   reverse_animation();
   animation();
   reverse_animation();
   animation();
   reverse_animation();

   lcd.clear();
  

}

void animation(void)
{
      // 1
    lcd.setCursor(0,0); 
    lcd.print("Hello   ");
    lcd.setCursor(40,0); //
    lcd.print("   World");
    delay(300);

    // 2
    lcd.setCursor(0,0); 
    lcd.print("Hello   ");
    lcd.setCursor(40,0); //
    lcd.print("        ");
    lcd.scrollDisplayRight();
    lcd.setCursor(0,0);
    lcd.print("        ");
    lcd.setCursor(40,0); //
    lcd.print("   World");
    lcd.scrollDisplayLeft();
    lcd.setCursor(0,0); 
    //lcd.print(" 1234567");
    lcd.print(" Hello  ");
    lcd.setCursor(40,0); //
    //lcd.print("7654321 ");
    lcd.print("  World ");
    delay(300);

    // 3
    lcd.setCursor(0,0); 
    //lcd.print(" 1234567");
    lcd.print(" Hello  ");
    lcd.setCursor(40,0); //
    lcd.print("        ");
    lcd.scrollDisplayRight();
    lcd.setCursor(0,0);
    lcd.print("        ");
    lcd.setCursor(40,0); //
    //lcd.print("7654321 ");
    lcd.print("  World ");
    lcd.scrollDisplayLeft();
    lcd.setCursor(0,0); 
    //lcd.print("  123456");
    lcd.print("  Hello ");
    lcd.setCursor(40,0); //
    //lcd.print("654321  ");
    lcd.print(" World  ");
    delay(300);
    
    // 4
    lcd.setCursor(0,0); 
    //lcd.print("  123456");
    lcd.print("  Hello ");
    lcd.setCursor(40,0); //
    lcd.print("        ");
    lcd.scrollDisplayRight();
    lcd.setCursor(0,0);
    lcd.print("        ");
    lcd.setCursor(40,0); //
    //lcd.print("654321  ");
    lcd.print(" World  ");
    lcd.scrollDisplayLeft();
    lcd.setCursor(0,0); 
    //lcd.print("   12345");
    lcd.print("   Hello");
    lcd.setCursor(40,0); //
    //lcd.print("54321   ");
    lcd.print("World   ");
    delay(300);

    // 5
    lcd.setCursor(0,0); 
    //lcd.print("   12345");
    lcd.print("   Hello");
    lcd.setCursor(40,0); //
    lcd.print("        ");
    lcd.scrollDisplayRight();
    lcd.setCursor(0,0);
    lcd.print("        ");
    lcd.setCursor(40,0); //
    //lcd.print("54321   ");
    lcd.print("World   ");
    lcd.scrollDisplayLeft();
    lcd.setCursor(0,0); 
    //lcd.print("    1234");
    lcd.print("    Hell");
    lcd.setCursor(40,0); //
    //lcd.print("4321    ");
    lcd.print("orld    ");
    delay(300);

    // 6
    lcd.setCursor(0,0); 
    //lcd.print("    1234");
    lcd.print("    Hell");
    lcd.setCursor(40,0); //
    lcd.print("        ");
    lcd.scrollDisplayRight();
    lcd.setCursor(0,0);
    lcd.print("        ");
    lcd.setCursor(40,0); //
    //lcd.print("4321    ");
    lcd.print("orld    ");
    lcd.scrollDisplayLeft();
    lcd.setCursor(0,0); 
    //lcd.print("     123");
    lcd.print("     Hel");
    lcd.setCursor(40,0); //
    //lcd.print("321     ");
    lcd.print("rld     ");
    delay(300);

    // 7
    lcd.setCursor(0,0); 
    //lcd.print("     123");
    lcd.print("     Hel");
    lcd.setCursor(40,0); //
    lcd.print("        ");
    lcd.scrollDisplayRight();
    lcd.setCursor(0,0);
    lcd.print("        ");
    lcd.setCursor(40,0); //
    //lcd.print("321     ");
    lcd.print("rld     ");
    lcd.scrollDisplayLeft();
    lcd.setCursor(0,0); 
    //lcd.print("      12");
    lcd.print("      He");
    lcd.setCursor(40,0); //
    //lcd.print("21      ");
    lcd.print("ld      ");
    delay(300);

     // 8
    lcd.setCursor(0,0); 
    //lcd.print("      12");
    lcd.print("      He");
    lcd.setCursor(40,0); //
    lcd.print("        ");
    lcd.scrollDisplayRight();
    lcd.setCursor(0,0);
    lcd.print("        ");
    lcd.setCursor(40,0); //
    //lcd.print("21      ");
    lcd.print("ld      ");
    lcd.scrollDisplayLeft();
    lcd.setCursor(0,0); 
    //lcd.print("       1");
    lcd.print("       H");
    lcd.setCursor(40,0); //
    //lcd.print("1       ");
    lcd.print("d       ");
    delay(300);

     // 9
    lcd.setCursor(0,0); 
    //lcd.print("       1");
    lcd.print("       H");
    lcd.setCursor(40,0); //
    lcd.print("        ");
    lcd.scrollDisplayRight();
    lcd.setCursor(0,0);
    lcd.print("        ");
    lcd.setCursor(40,0); //
    //lcd.print("1       ");
    lcd.print("d       ");
    lcd.scrollDisplayLeft();
    lcd.setCursor(0,0); 
    lcd.print("        ");
    lcd.setCursor(40,0); //
    lcd.print("        ");
    delay(300);
}

void reverse_animation(void)
{
  
  // reverse

     // 9
    lcd.setCursor(0,0); 
    //lcd.print("       1");
    lcd.print("       H");
    lcd.setCursor(40,0); //
    lcd.print("        ");
    lcd.scrollDisplayRight();
    lcd.setCursor(0,0);
    lcd.print("        ");
    lcd.setCursor(40,0); //
    //lcd.print("1       ");
    lcd.print("d       ");
    lcd.scrollDisplayLeft();
    lcd.setCursor(0,0); 
    lcd.print("        ");
    lcd.setCursor(40,0); //
    lcd.print("        ");
    delay(300);

     // 8
    lcd.setCursor(0,0); 
    //lcd.print("      12");
    lcd.print("      He");
    lcd.setCursor(40,0); //
    lcd.print("        ");
    lcd.scrollDisplayRight();
    lcd.setCursor(0,0);
    lcd.print("        ");
    lcd.setCursor(40,0); //
    //lcd.print("21      ");
    lcd.print("ld      ");
    lcd.scrollDisplayLeft();
    lcd.setCursor(0,0); 
    //lcd.print("       1");
    lcd.print("       H");
    lcd.setCursor(40,0); //
    //lcd.print("1       ");
    lcd.print("d       ");
    delay(300);

    // 7
    lcd.setCursor(0,0); 
    //lcd.print("     123");
    lcd.print("     Hel");
    lcd.setCursor(40,0); //
    lcd.print("        ");
    lcd.scrollDisplayRight();
    lcd.setCursor(0,0);
    lcd.print("        ");
    lcd.setCursor(40,0); //
    //lcd.print("321     ");
    lcd.print("rld     ");
    lcd.scrollDisplayLeft();
    lcd.setCursor(0,0); 
    //lcd.print("      12");
    lcd.print("      He");
    lcd.setCursor(40,0); //
    //lcd.print("21      ");
    lcd.print("ld      ");
    delay(300);

    // 6
    lcd.setCursor(0,0); 
    //lcd.print("    1234");
    lcd.print("    Hell");
    lcd.setCursor(40,0); //
    lcd.print("        ");
    lcd.scrollDisplayRight();
    lcd.setCursor(0,0);
    lcd.print("        ");
    lcd.setCursor(40,0); //
    //lcd.print("4321    ");
    lcd.print("orld    ");
    lcd.scrollDisplayLeft();
    lcd.setCursor(0,0); 
    //lcd.print("     123");
    lcd.print("     Hel");
    lcd.setCursor(40,0); //
    //lcd.print("321     ");
    lcd.print("rld     ");
    delay(300);
    
     // 5
    lcd.setCursor(0,0); 
    //lcd.print("   12345");
    lcd.print("   Hello");
    lcd.setCursor(40,0); //
    lcd.print("        ");
    lcd.scrollDisplayRight();
    lcd.setCursor(0,0);
    lcd.print("        ");
    lcd.setCursor(40,0); //
    //lcd.print("54321   ");
    lcd.print("World   ");
    lcd.scrollDisplayLeft();
    lcd.setCursor(0,0); 
    //lcd.print("    1234");
    lcd.print("    Hell");
    lcd.setCursor(40,0); //
    //lcd.print("4321    ");
    lcd.print("orld    ");
    delay(300);

    // 4
    lcd.setCursor(0,0); 
    //lcd.print("  123456");
    lcd.print("  Hello ");
    lcd.setCursor(40,0); //
    lcd.print("        ");
    lcd.scrollDisplayRight();
    lcd.setCursor(0,0);
    lcd.print("        ");
    lcd.setCursor(40,0); //
    //lcd.print("654321  ");
    lcd.print(" World  ");
    lcd.scrollDisplayLeft();
    lcd.setCursor(0,0); 
    //lcd.print("   12345");
    lcd.print("   Hello");
    lcd.setCursor(40,0); //
    //lcd.print("54321   ");
    lcd.print("World   ");
    delay(300);
  
    // 3
    lcd.setCursor(0,0); 
    //lcd.print(" 1234567");
    lcd.print(" Hello  ");
    lcd.setCursor(40,0); //
    lcd.print("        ");
    lcd.scrollDisplayRight();
    lcd.setCursor(0,0);
    lcd.print("        ");
    lcd.setCursor(40,0); //
    //lcd.print("7654321 ");
    lcd.print("  World ");
    lcd.scrollDisplayLeft();
    lcd.setCursor(0,0); 
    //lcd.print("  123456");
    lcd.print("  Hello ");
    lcd.setCursor(40,0); //
    //lcd.print("654321  ");
    lcd.print(" World  ");
    delay(300);

    // 2
    lcd.setCursor(0,0); 
    lcd.print("Hello   ");
    lcd.setCursor(40,0); //
    lcd.print("        ");
    lcd.scrollDisplayRight();
    lcd.setCursor(0,0);
    lcd.print("        ");
    lcd.setCursor(40,0); //
    lcd.print("   World");
    lcd.scrollDisplayLeft();
    lcd.setCursor(0,0); 
    //lcd.print(" 1234567");
    lcd.print(" Hello  ");
    lcd.setCursor(40,0); //
    //lcd.print("7654321 ");
    lcd.print("  World ");
    delay(300);
     // 1
    lcd.setCursor(0,0); 
    lcd.print("Hello   ");
    lcd.setCursor(40,0); //
    lcd.print("   World");
    delay(300);
  
}

void animation1(void)
{
    lcd.setCursor(0,0); // 
    lcd.print("Hello   ");
    lcd.setCursor(40,0); // 
    lcd.print("World   ");
    for (int positionCounter = 0; positionCounter < 8; positionCounter++) 
    {
      // scroll one position right:
      lcd.scrollDisplayRight();
      // wait a bit:
      delay(500);
    }
 
}
