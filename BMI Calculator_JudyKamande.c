// Dceitel & Deitel Chap 2.32
// C-Program: Body Mass Index (BMI) Calculator

#include: <stdio.h>

  int main()
  {

    int weightKG; 
    int heightM;
    double BMI;

// BMI = weightKG / (heightM * heightM)

    printf ("Enter your weight in Kilograms -- \n");
    scanf ("%d", &weightKG);
    printf ("Enter your height in Metres -- \n");
    scanf ("%d", &heightM);
    
    BMI = weightKG / (heightM^2);
    printf ("Your BMI is %f -- ", BMI);

	// Provided values
	puts ("BMI VALUES \n ________________ \n");
	puts ("Underweight: \t less than 18.5 \n");
	puts ("Normal: \t between 18.5 and 24.9 \n");
	puts ("Overweight: \t between 25 and 29.9 \n");
	puts ("Obese: 30 or greater \n _____________ \n");

// Beginning if-function 

  if (BMI < 18.5) {
	puts ("You are UNDERWEIGHT."); }

  if (BMI >= 18.5) && (BMI <= 24.9) {
	puts ("Your weight is NORMAL."); }

  if (BMI >= 25) && (BMI <= 29.9) {
	puts ("You are OVERWEIGHT"); }

 if (BMI >= 30) {
	puts ("You are OBESE"); }

return 0;

}




