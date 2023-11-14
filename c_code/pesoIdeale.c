#include "calc_lib.h"
#include <math.h>

//Per gli uomini: peso_ideale = (altezza in metri) * (altezza in metri) * 24.
//Per le donne: peso_ideale = (altezza in metri) * (altezza in metri) * 21.5.
double pesoIdeale(double altezza, char sesso)
{
    if (sesso == 'M'){
        return pow(altezza,2)*24;
    }else{
        return pow(altezza,2)*21.5;
    }
}