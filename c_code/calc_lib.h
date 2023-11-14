//signs for the calculator
#ifndef CALC_LIB_H
#define CALC_LIB_H


//Funzione di calcolare il BMR
//Per gli uomini: BMR = 88.362 + (13.397 * peso in kg) + (4.799 * altezza in cm) - (5.677 * età in anni).
//Per le donne: BMR = 447.593 + (9.247 * peso in kg) + (3.098 * altezza in cm) - (4.330 * età in anni).
double bmr(double peso, double altezza, int eta, char sesso); //sesso = M | F

//funzione per il calcolo del BMI
//bmi=peso/(altezza in metri)^2
double bmi(double altezza, double peso);

//funzione per il calcolo del peso ideale
//Per gli uomini: peso_ideale = (altezza in metri) * (altezza in metri) * 24.
//Per le donne: peso_ideale = (altezza in metri) * (altezza in metri) * 21.5.
double pesoIdeale (double altezza, char sesso);




#endif