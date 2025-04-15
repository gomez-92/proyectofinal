#include <Arduino.h>
#include "Led.h"
#include "Utils.h"
#include "Config.h"
#include "WifiCon.h"

WifiCon conexion(RED_WIFI_NOMBRE, RED_WIFI_PASSWORD);
Led indicador(LED_BUILTIN);

void setup() {
  Serial.begin(115200);
  Serial.println("ESP32 inicializada!");
  //conexion.conectar();
  // put your setup code here, to run once:

}

void loop() {
  if(!conexion.isConectado()){
    Serial.println("Intentando conectar...");
    conexion.conectar();
    parpadearLed(indicador, 5);
  }else{
    indicador.encender();
  }
  delay(2000);
  // put your main code here, to run repeatedly:

}
