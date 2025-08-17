#define pi 3.141592653589793
#include <stdio.h>
  int main(){
  float volume_ratio = 4.0f/3.0f;
  float radius;
 scanf("%f",&radius); 
 float volume = (volume_ratio * radius * radius * pi * radius); 
  printf("%f",volume);
}
