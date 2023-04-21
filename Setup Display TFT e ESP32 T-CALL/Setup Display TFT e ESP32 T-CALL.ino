/********************************************************************
  AUTOR: WALTER DAWID RETZER
  
  PROJETO: SETUP DISPLAY TFT E ESP32 T-CALL
  
  VERSION: 1.0.0
  DATA: 19/02/2021
  
*********************************************************************
  INFORMAÇÕES:

  DISPLAY: TFT SPI TOUCH 3.5' 480 X 320, ILI9488
  ESP32: LILYGO-T-CALL-SIM800L V1.3
  
 
 *********************************************************************
  CONFIGURAÇÃO DOS BORNES DO PROTÓTIPO:

  DISPLAY TFT       ESP32
  PIN VDO           3V3
  PIN GND           GND
  PIN CS            PIN 15
  PIN RST           PIN 0
  PIN D/C           PIN 02
  PIN SDI(MOSI)     PIN 13 (MOSI/SDA/SDI) 
  PIN SCK           PIN 14
  PIN BL            PIN 22 OU 3V3
  PIN SDO (MISO)    NOT CONNECTED

***********************************************************************/
// Código:

#include <SPI.h>
#include <TFT_eSPI.h>

TFT_eSPI tft = TFT_eSPI();

void setup(void) {
  
  tft.init();

  tft.fillScreen(TFT_BLACK);
  tft.setCursor(0, 0, 4);
  tft.setTextColor(TFT_WHITE, TFT_BLACK);
  tft.println("Inicinado Display....\n");
  tft.println("Hello World!!");

  delay(5000);
}

void loop() {

  tft.fillScreen(TFT_BLACK);
  delay(5000);

  tft.fillScreen(TFT_WHITE);
  delay(5000);

  tft.fillScreen(TFT_RED);
  delay(5000);

  tft.fillScreen(TFT_GREEN);
  delay(5000);

  tft.fillScreen(TFT_BLUE);
  delay(5000);
}
