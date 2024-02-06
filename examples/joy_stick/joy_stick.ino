#include <JoyStick.h>

JoyStick joy_stick(A0, A1, 0, 512, 512, 10, 10);

void setup() {
  Serial.begin(9600);
}

void loop() {
    Serial.print("\n");

    Serial.print("X: ");
    Serial.print(joy_stick.get_x());
    Serial.print(" Y: ");
    Serial.print(joy_stick.get_y());
    Serial.print(" SW: ");
    Serial.println(joy_stick.get_SW());

    Serial.print(" X Direction: ");
    Serial.print(joy_stick.get_x_direction());
    Serial.print(" Y Direction: ");
    Serial.print(joy_stick.get_y_direction());
    Serial.print(" Direction: ");
    Serial.println(joy_stick.get_direction());

    Serial.print(" X Precent: ");
    Serial.print(joy_stick.get_x_precent());
    Serial.print(" Y Precent: ");
    Serial.println(joy_stick.get_y_precent());

    delay(250);
}
