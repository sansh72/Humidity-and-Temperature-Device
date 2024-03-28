#include <DHT.h>
#define Type DHT11
#include <LiquidCrystal.h>
int sensePin = 2;
int rs = 7;
int en = 8;
int d4 = 9;
int d5 = 10;
int d6 = 11;
int d7 = 12;
float Humidity;
float TempC;
float TempF;
int setTime;
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);
DHT HT(sensePin,Type);

void setup() {

  HT.begin();
  lcd.begin(16,2);
  Serial.begin(9600);
 
}

void loop() {

  
  Humidity = HT.readHumidity();
  TempC = HT.readTemperature();
  TempF = HT.readTemperature(true);

  lcd.setCursor(0,0);
  lcd.print("Humidity: ");
  lcd.print(Humidity);

  lcd.setCursor(0,1);
  lcd.print("Temp: ");
  lcd.print(TempC);
  lcd.print("C");

  Serial.print("Humidity: ");
  Serial.print(Humidity);
  Serial.print("TempC: ");
  Serial.print(TempC);
  Serial.print("TempF: ");
  Serial.println(TempF);
  delay(100);



}
