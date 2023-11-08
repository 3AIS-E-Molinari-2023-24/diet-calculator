#include "calc_lib.h"

//Per gli uomini: BMR = 88.362 + (13.397 * peso in kg) + (4.799 * altezza in cm) - (5.677 * età in anni).
//Per le donne: BMR = 447.593 + (9.247 * peso in kg) + (3.098 * altezza in cm) - (4.330 * età in anni).

double bmr(double peso, double altezza, int eta, char sesso){

    if (sesso == 'M'){

        return 88.362 + (13.397 * peso) + (4.799 * altezza) - (5.677 * eta);
    }
    else {

        return 447.593 + (9.247 * peso) + (3.098 * altezza) - (4.330 * eta);
    }
}