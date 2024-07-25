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
  servo2(90,4,20);delay(300);
  servo(1,95);delay(300); 
  servo2(4,90,20);delay(300);
}
void Drop(){
  servo2(90,4,20);delay(300);
  servo(1,19);delay(300);
  servo2(4,90,20);delay(300);
}
void servo2(int pos1,int pos2,int speeds){
  int i;
  if (pos1>pos2){
    for (i=pos1;i>pos2;i--){
    servo(2,i);delay(speeds);
    } 
  }
  else{
    for (i=pos1;i<pos2;i++){
    servo(2,i);delay(speeds);
    } 
  }
}

