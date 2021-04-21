#include <LiquidCrystal.h>
LiquidCrystal lcd(4, 5, 6, 7, 8, 9);
#define sensorpin A1
int senseread;

void setup() {
  
  Serial.begin(9600);
  lcd.begin(16, 2); 
  lcd.clear();
}

void loop() {
 
 lcd.setCursor(0, 1); 
 senseread = analogRead(sensorpin);
 Serial.print("Force sensor reading is ");
 Serial.print(senseread);
 Serial.println("");
 lcd.clear();

 if (senseread < 125){
  Serial.println("Less than 1/8");
  lcd.println("Less than 1/8");}
  
 
 else if (senseread < 250){
  Serial.println("Less than 1/4");
  lcd.println("Less than 1/4");}

 else if (senseread < 500){
  Serial.println("Less than 1/2");
  lcd.println("Less than 1/2");}

  else if (senseread < 750){
  Serial.println("Less than 3/4");
  lcd.println("Less than 3/4");}

  else if (senseread < 900){
  Serial.println("Less than Full");
  lcd.println("Less than Full");}

  else{
  Serial.println("Full");
  lcd.println("Full");
 }
  delay(500);
  lcd.clear();
}
