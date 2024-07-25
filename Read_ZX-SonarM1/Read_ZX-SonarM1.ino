#include <POP32.h>
void setup() {
}
void loop() {
  int dist = analog(0) / 41;
  oled.text(0, 0, "dist: %d cm  ", dist);
  oled.show();
}
