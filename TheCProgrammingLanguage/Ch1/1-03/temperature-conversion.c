#include <stdio.h>

main()
{

  float fahrenheit, celsius;
  int upper, lower, scale;

  lower = 0;
  upper = 300;
  scale = 20;
  fahrenheit = lower;
  
  printf("Fahrenheit\tCelsius\n");
  while (fahrenheit <= upper) {
    celsius = (5.0/9.0) * (fahrenheit-32.0);
    printf("%10.0f\t%7.1f\n", fahrenheit, celsius);
    fahrenheit = fahrenheit + scale;
  }
}
