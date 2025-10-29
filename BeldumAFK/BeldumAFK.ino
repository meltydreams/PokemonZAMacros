#include <NintendoSwitchControlLibrary.h>

void setup() {
  // put your setup code here, to run once:
  pushButton(Button::B, 50, 5);
}

void loop() {
  // put your main code here, to run repeatedly:
  pushButton(Button::A);
}
