/*

https://deepbluembedded.com/
https://wokwi.com/

https://wokwi.com/stm32
https://wokwi.com/esp32

https://deepbluembedded.com/stm32-arm-programming-tutorials/
https://deepbluembedded.com/esp32-programming-tutorials/

https://www.geeksforgeeks.org/electronics-engineering/embedded-c/
https://realtimelogic.com/articles/Embedded-Web-Server-Tutorials
https://www.mygreatlearning.com/blog/embedded-c/

https://www.tutorialspoint.com/embedded_systems/index.htm

*/

// https://wokwi.com/projects/365549388158011393
// STM32 Nucleo-C031C6 SPI LCD Example

#include "SPI.h"
#include "Adafruit_GFX.h"
#include "Adafruit_ILI9341.h"

#define TFT_DC (2)
#define TFT_CS (3)
Adafruit_ILI9341 tft = Adafruit_ILI9341(TFT_CS, TFT_DC);

void setup()
{
    Serial.begin(115200);
    Serial.println("Hello, World!");

    tft.begin();
    tft.setCursor(25, 110);
    tft.setTextColor(ILI9341_RED);
    tft.setTextSize(TFT_CS);
    tft.println("Hello STM2");
    tft.setCursor(26, 150);
    tft.setTextColor(ILI9341_GREEN);
    tft.setTextSize(TFT_DC);
    tft.println("Do SPI");
}

void loop()
{
    delay(10);
}
