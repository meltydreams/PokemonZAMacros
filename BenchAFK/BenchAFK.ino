#include <NintendoSwitchControlLibrary.h>
void setup() {
  // put your setup code here, to run once:
  pushButton(Button::B, 250, 5);

}

void loop() {
  // put your main code here, to run repeatedly:
  tiltLeftStick(Stick::NEUTRAL, Stick::MAX, 1000);
  pushButton(Button::A, 500, 3);
  delay(3000);
}
