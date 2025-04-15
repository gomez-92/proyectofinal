#ifndef CONFIG_H
#define CONFIG_H

// Definimos constantes numéricas
#define MODO_PRODUCCION 1
#define MODO_DESARROLLO 2

// Seleccionamos el modo
#define MODO MODO_PRODUCCION

#if MODO == MODO_PRODUCCION
  #define RED_WIFI_NOMBRE "Personal-709"
  #define RED_WIFI_PASSWORD "29523CD709" 
#else
  #define RED_WIFI_NOMBRE "MarioRN9"
  #define RED_WIFI_PASSWORD "Mario12456" 
#endif

#endif