#include <POP32.h> 
void setup(){
  servo(1,19);delay(300);
  servo(2,90);delay(300);
}
void loop(){
  waitSW_A();Keep();
  waitSW_A();Drop();
}
void Keep(){
  servo(2,4);delay(300);
  servo(1,95);delay(300); 
  servo(2,90);delay(300); 
}
void Drop(){
  servo(2,4);delay(300);
  servo(1,19);delay(300);
  servo(2,90);delay(300);
}
