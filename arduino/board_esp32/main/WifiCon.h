#ifndef WIFI_CONEXION_H
#define WIFI_CONEXION_H

#include <Arduino.h>

class WifiCon {
public:
  WifiCon(String nombreRed, String contraseña);
  WifiCon(String nombreRed, String contraseña, unsigned long timeout);
  ~WifiCon();
  void conectar();
  void desconectar();
  bool isConectado();
  void setTimeOut(unsigned long timeout);
private:
  String nombreRed;
  String contraseña;
  unsigned long timeout;
};

#endif