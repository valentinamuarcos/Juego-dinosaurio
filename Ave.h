#ifndef AVE_h
#define AVE_h
#include "Arduino.h"

class Ave {
  private:    
    int x;         

  public:
    Ave(int posicionInicial);
    void mover();
    int obtenerPosicion();    
};

#endif
