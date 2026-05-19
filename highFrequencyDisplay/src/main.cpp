#include <Arduino.h>
#include <U8g2lib.h>
#include <SPI.h>
#include <Wire.h>



// End of constructor list
U8G2_SSD1322_NHD_256X64_1_4W_HW_SPI u8g2(U8G2_R0, 10, 8 , 9);

void setup(void) {


  u8g2.begin();  
}

void loop(void) {
  u8g2.firstPage();
  do {  

    u8g2.setFont(u8g2_font_logisoso42_tn);
    u8g2.drawStr(0,50,"105.40");
  } while ( u8g2.nextPage() );
  delay(1000);
}

