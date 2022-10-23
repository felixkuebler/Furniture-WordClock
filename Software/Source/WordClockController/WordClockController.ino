
#include "pin_util.h"
#include "time_util.h"

void setup() {
  // put your setup code here, to run once:

}

void loop() {

  int hour = 10;
  int minutes = 25;

  int pin_hour = hour_to_pinout(hour);
  int* pins_minutes = min_to_pinout(minutes);

}
