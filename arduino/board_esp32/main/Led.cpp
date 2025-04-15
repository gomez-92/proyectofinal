#include <Arduino.h>
#include "Led.h"

Led::Led(int pin){
  this->pin = pin;
  pinMode(this->pin, OUTPUT);
  digitalWrite(this->pin, LOW);
  this->apagar();
};

bool Led::getEstado(){
  return estado;
};

void Led::setEstado(bool estado){
  this->estado = estado;
};

void Led::encender(){
  digitalWrite(this->pin, HIGH);
  this->estado = true;
};

void Led::apagar(){
  digitalWrite(this->pin, LOW);
  this->estado = false;
};

void Led::toogle(){
  if(this->estado){
    this->apagar();
  }
  else{
    this->encender();
  }
  
};