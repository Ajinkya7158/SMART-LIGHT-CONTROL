#include <SoftwareSerial.h>
#define LED_PIN 9 
SoftwareSerial Bluetooth(10, 11); 
void setup() {
  pinMode(LED_PIN, OUTPUT);
  Bluetooth.begin(9600); 
  Serial.begin(9600);    
  Serial.println("Bluetooth LED Controller Initialized");
}
void loop() {
  if (Bluetooth.available()) {
    char command = Bluetooth.read(); 
    Serial.print("Received Command: ");
    Serial.println(command);
    if (command == '1') {     
      digitalWrite(LED_PIN, HIGH);
      Serial.println("LED ON");
    } else if (command == '0') {
      digitalWrite(LED_PIN, LOW);
      Serial.println("LED OFF");
    } else if (command >= 'a' && command <= 'z') {
      int brightness = map(command, 'a', 'z', 0, 255);
      analogWrite(LED_PIN, brightness);
      Serial.print("LED Brightness: ");
      Serial.println(brightness);
    }
  }
}
