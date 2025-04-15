#include <WiFi.h>
#include "WifiCon.h"
#include <Arduino.h>

WifiCon::WifiCon(String nombreRed, String contraseña):
    nombreRed(nombreRed), contraseña(contraseña), timeout(3000){};

WifiCon::WifiCon(String nombreRed, String contraseña, unsigned long timeout): 
    nombreRed(nombreRed), contraseña(contraseña), timeout(timeout){};

WifiCon::~WifiCon(){
    desconectar();
}

void WifiCon::conectar(){
    //Config config = Config.getInstance();
    if (WiFi.status() != WL_CONNECTED)
    {
        WiFi.begin(nombreRed, contraseña);
        unsigned long start = millis();
        while (WiFi.status() != WL_CONNECTED && ((millis() - start) < timeout)){}
        delay(500);
    }
}

void WifiCon::desconectar(){
    if (WiFi.status() == WL_CONNECTED)
    {
        WiFi.disconnect();
    }
}

bool WifiCon::isConectado(){
    return WiFi.status() == WL_CONNECTED;
}

void WifiCon::setTimeOut(unsigned long timeout){
    this->timeout = timeout;
}