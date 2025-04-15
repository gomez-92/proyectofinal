#ifndef LED_H
#define LED_H

class Led{
    public:
      Led(int pin);
      bool getEstado();
      void setEstado(bool estado);
      void encender();
      void apagar();
      void toogle();
    private:
      bool estado;
      int pin;
};

#endif