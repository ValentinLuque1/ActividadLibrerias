#include "ctrlLed.h"
#include "mkl25z4.h"

void estLed( int pin, int est){
    PTE -> PSOR |= (est << pin);
}

char estBtn(int btn){
    int IoA = PTE -> PDIR &(1u << btn);
        if(IoA == 1){
            return 'a';
        }   else {
            return 'i';
        }
}
