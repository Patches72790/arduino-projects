#include "avr/interrupt.h"
#include "avr/io.h"
#include "stdbool.h"
#include "string.h"
#include "util/delay.h"

#define BLINK_MS 1000

int main() {
  // DDRB |= 0x20;
  // opens the port to be read
  DDRB |= _BV(PORTB5);

  // blink loop
  while (true) {
    // toggles the light on port
    PORTB ^= _BV(PORTB5);
    _delay_ms(BLINK_MS);
  }
}
