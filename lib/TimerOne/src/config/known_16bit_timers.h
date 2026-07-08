#ifndef KNOWN_16BIT_TIMERS_H
#define KNOWN_16BIT_TIMERS_H

/* Minimal compatibility header for TimerOne on AVR boards.
 * The original library expects this file to exist for timer pin mapping.
 */

#if defined(__AVR_ATmega8__)
#define TIMER1_A_PIN 9
#define TIMER1_B_PIN 10
#elif defined(__AVR_ATmega48__) || defined(__AVR_ATmega88__) || defined(__AVR_ATmega168__) || defined(__AVR_ATmega328__) || defined(__AVR_ATmega328P__)
#define TIMER1_A_PIN 9
#define TIMER1_B_PIN 10
#elif defined(__AVR_ATmega1280__) || defined(__AVR_ATmega2560__)
#define TIMER1_A_PIN 11
#define TIMER1_B_PIN 12
#elif defined(__AVR_ATmega32U4__)
#define TIMER1_A_PIN 9
#define TIMER1_B_PIN 10
#else
#define TIMER1_A_PIN 9
#define TIMER1_B_PIN 10
#endif

#endif
