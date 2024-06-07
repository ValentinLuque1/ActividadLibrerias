#include "mkl25z4.h"
#include "ctrlLed.h"

int main(){
    SIM -> SCGC5 |= SIM_SCGC5_PORTE_MASK;
     PORTE -> PCR [11] |= PORT_PCR_MUX(1);      //LEDS
     PORTE -> PCR [12] |= PORT_PCR_MUX(1);
     PORTE -> PCR [13] |= PORT_PCR_MUX(1);
     PORTE -> PCR [14] |= PORT_PCR_MUX(1);

     PORTE -> PCR [21] |= PORT_PCR_MUX(0);      //BOTONES
     PORTE -> PCR [20] |= PORT_PCR_MUX(0);

     while (1)
     {
        if( estBtn(21) == 'i' && estBtn(20) == 'i'){
            estLed(11,1);
            estLed(12,0);
            estLed(13,0);
            estLed(14,0);
        }   else if(estBtn(21) == 'i' && estBtn(20) == 'a'){
            estLed(11,0);
            estLed(12,1);
            estLed(13,0);
            estLed(14,0);
        }   else if(estBtn(21) == 'a' && estBtn(20) == 'i'){
            estLed(11,0);
            estLed(12,0);
            estLed(13,1);
            estLed(14,0);
        }   else if(estBtn(21) == 'a' && estBtn(20) == 'a'){
            estLed(11,0);
            estLed(12,0);
            estLed(13,0);
            estLed(14,1);
        }      
     }
return 0;
}
