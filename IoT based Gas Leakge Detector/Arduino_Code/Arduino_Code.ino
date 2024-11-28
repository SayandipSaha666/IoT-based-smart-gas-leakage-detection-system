//virtual pins in Blynk V0->Switch,V1->Gauge reading 

#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
//#include <BlynkSimpleEsp8266.h>

#define BLYNK_TEMPLATE_ID "YOUR_BLYNK_TEMPLATE_ID"
#define BLYNK_TEMPLATE_NAME "YOUR_BLYNK_TEMPLATE_NAME"
#define BLYNK_AUTH_TOKEN "YOUR_BLYNK_AUTH_TOKEN"


char ssid[] = "YOUR_SSID";
char pass[] = "YOUR_PASSWORD";
char auth[] = "YOUR_AUTHENTICATION_KEY";
BlynkTimer timer;

#define Buzzer 14 //pin D5 -> equivalent GPIO 14
#define Green 12 //Pin D6
#define Red 13 //Pin D7
#define Sensor A0
#define exhaustfan 15 //pin D8 

void setup() {
  Serial.begin(9600);
  pinMode(exhaustfan,OUTPUT);
  pinMode(Green, OUTPUT);
  pinMode(Red, OUTPUT);
  pinMode(Buzzer, OUTPUT);
  pinMode(Sensor, INPUT);
  Blynk.begin(auth, ssid, pass,"blynk.cloud",80);
  timer.setInterval(100L, notification); 
  Serial.print("Connected");// corrected function name
}

void notification() { // corrected function name
  int sensor1 = analogRead(Sensor);
  Serial.println(sensor1);
  sensor1 = map(sensor1, 0, 1024, 0, 100); 
  Blynk.virtualWrite(V1, sensor2);
    if (sensor2 <= 20) {
      digitalWrite(Green, HIGH);
      digitalWrite(Red, LOW);
      digitalWrite(Buzzer, LOW);
      digitalWrite(exhaustfan,LOW);
      //Blynk.virtualWrite(V1,LOW);
    } else if (sensor2 > 20 && sensor2 <= 50) {
      Blynk.logEvent("warning");
      digitalWrite(Green, LOW);
      digitalWrite(Buzzer, LOW);
      digitalWrite(exhaustfan,HIGH); //TO ENABLE WARNING LED IN BLYNK APP
      digitalWrite(Red, HIGH);
      delay(1000);
      digitalWrite(Red, LOW);
      delay(1000);
      //Blynk.virtualWrite(V1,HIGH);
    }
    else {
      Blynk.logEvent("warning");
      digitalWrite(Green,LOW);
      digitalWrite(Buzzer,HIGH);
      digitalWrite(exhaustfan,HIGH);
      digitalWrite(Red, HIGH);
      delay(500);
      digitalWrite(Red, LOW);
      delay(500);
    }
}
void loop() {
  Blynk.run();
  timer.run();
}
