// -------- Includes the necessary classes and libraries ------------
#include <Arduino.h> 
#include "Button.h"
//#include "Potentiometer.h"
#include "Joystick.h"
 
const char * ssid = "CWDATA"; //Insert your wifi name
const char * password = "sebastiansigervov"; //Insert your wifi password
 
 /*
 * Sets the pinNumbers for the different sensors.
 */
int PIN_BUTTON = 23;
Button button (PIN_BUTTON); 
Joystick joystick(36, 35);

 
void setup() {
      Serial.begin(9600);
      WiFi.mode(WIFI_STA);
      WiFi.begin(ssid, password);
    
}

/*
* The loop function constineuosly looks for updates and calls the button, joystick and potentiometer functions if there are any.
*/
void loop() {
 
  button.buttonPressed();
  delay (100);
  joystick.movement(); 
  
  //potentiometer.changePixelColor();
  
 
}