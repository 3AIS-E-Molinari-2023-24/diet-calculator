#include "calc_lib.h"

//Per gli uomini: peso_ideale = (altezza in metri) * (altezza in metri) * 24.
//Per le donne: peso_ideale = (altezza in metri) * (altezza in metri) * 21.5.
double pesoIdeale(double altezza, char sesso)
{
    if(sesso = 'M'){
        return altezza*altezza*24;
    }else{
        return altezza*altezza*21,5;
    }
}