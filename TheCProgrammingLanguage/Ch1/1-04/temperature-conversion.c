#include <stdio.h>

main()
{

  float fahrenheit, celsius;
  int upper, lower, scale;

  lower = 0;
  upper = 300;
  scale = 20;
  fahrenheit = lower;
  
  printf("Fahrenheit       Celsius\n");
  while (fahrenheit <= upper) {
    celsius = (5.0/9.0) * (fahrenheit-32.0);
    printf("%10.0f       %7.1f\n", fahrenheit, celsius);
    fahrenheit = fahrenheit + scale;
  }

  celsius = lower;

  printf("   Celsius    Fahrenheit\n");
  while (celsius <= upper) {
    fahrenheit = 32.0 + (celsius*(9.0/5.0));
    printf("%10.1f    %10.0f\n", celsius, fahrenheit);
    celsius = celsius + scale;
  }
}
