#include<stdio.h>
#include <stdlib.h>
#include <time.h>

int rng(){
  int n =rand() % 100;
  return n+1;
int main(){
  //using time as seed to make every no. different in every run   . Random will be store the target number to guess 
  srand(time(0));
  int Random = rng();


  return 0;
}
