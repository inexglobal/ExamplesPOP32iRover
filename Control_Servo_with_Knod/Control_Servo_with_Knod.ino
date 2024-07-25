#include <POP32.h>
int x;
void setup() {}
void loop() {
  x = knob(180);
  servo(1, x);
  oled.text(1, 3, "%d  ", x);
  oled.show();
}
