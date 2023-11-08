//signs for the calculator
#ifndef CALC_LIB_H
#define CALC_LIB_H


//Funzione di calcolare il BMR
//Per gli uomini: BMR = 88.362 + (13.397 * peso in kg) + (4.799 * altezza in cm) - (5.677 * età in anni).
//Per le donne: BMR = 447.593 + (9.247 * peso in kg) + (3.098 * altezza in cm) - (4.330 * età in anni).
double bmr(double peso, double altezza, int eta, char sesso); //sesso = M | F




#endif