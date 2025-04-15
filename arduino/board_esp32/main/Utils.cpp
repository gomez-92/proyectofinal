#include "Utils.h"

void parpadearLed(Led led, int repite){
  unsigned long periodo = 500;
  if(repite > 1){
    periodo = periodo / repite;
  }

  for(int i=0; i<repite*2; i++){
    led.toogle();
    delay(periodo);
  }

  led.apagar();
};