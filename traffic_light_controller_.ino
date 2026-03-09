/*** header block ***
 * code file name:             test_analog_output.ino
 * code description:           test program for analog output subsystem
 * board used (UNO/MEGA/etc):  Acebot ESP 32
 * circuit components needed:  analog output device, e.g. LED, 
 *                             connected to analog (PWM) output pin
 * IDE version used:           Arduino IDE 2.3.2
 * programmer(s) name:         Kelsang Sherpa
 * date code created/modified: 2026_0304
 * code version/revision:      v1, based on Fade.ino example
 ***/

// compiler directives: none

// pin name definitions
#define ANALOG_OUT_PIN_R 17 //Red LED pin (fast)
#define ANALOG_OUT_PIN_Y 18   // Yellow LED pin (medium)
#define ANALOG_OUT_PIN_G 19   // Green LED pin (slow)

// global variables (3 sets)
int  brightnessR = 0;
int  brightnessY = 0;
int  brightnessG = 0;

int  fadeAmountR = 10;   // Red fades fastest
int  fadeAmountY = 5;    // Yellow medium
int  fadeAmountG = 2;    // Green slowest

long fadeDelayR  = 15;   // smaller delay = faster updates
long fadeDelayY  = 30;
long fadeDelayG  = 60;

// timers for each LED (so each one can run at a different speed)
unsigned long lastUpdateR = 0;
unsigned long lastUpdateY = 0;
unsigned long lastUpdateG = 0;

// optional: limit printing speed so Serial Monitor is readable
unsigned long lastPrint = 0;
long printDelay = 100; // ms

void setup() {
  Serial.begin(115200);

  Serial.println("DESIGN Program: 3-LED Analog Output (R fast, Y medium, G slow)");
  delay(1000);
}

void loop() {
  // Always output current brightness to LEDs
  analogWrite(ANALOG_OUT_PIN_R, brightnessR);
  analogWrite(ANALOG_OUT_PIN_Y, brightnessY);
  analogWrite(ANALOG_OUT_PIN_G, brightnessG);

  unsigned long now = millis();

  // ---------------- RED LED update (fast) ----------------
  if (now - lastUpdateR >= fadeDelayR) {
    brightnessR = brightnessR + fadeAmountR;

    // reverse at ends (separate if statement)
    if (brightnessR <= 0 || brightnessR >= 255) {
      fadeAmountR = -fadeAmountR;
    }

    lastUpdateR = now;
  }

  // ---------------- YELLOW LED update (medium) ----------------
  if (now - lastUpdateY >= fadeDelayY) {
    brightnessY = brightnessY + fadeAmountY;

    // reverse at ends (separate if statement)
    if (brightnessY <= 0 || brightnessY >= 255) {
      fadeAmountY = -fadeAmountY;
    }

    lastUpdateY = now;
  }

  // ---------------- GREEN LED update (slow) ----------------
  if (now - lastUpdateG >= fadeDelayG) {
    brightnessG = brightnessG + fadeAmountG;

    // reverse at ends (separate if statement)
    if (brightnessG <= 0 || brightnessG >= 255) {
      fadeAmountG = -fadeAmountG;
    }

    lastUpdateG = now;
  }

  // Print brightness values in Serial Monitor (required)
  if (now - lastPrint >= printDelay) {
    Serial.print("brightnessR: "); Serial.print(brightnessR);
    Serial.print("  brightnessY: "); Serial.print(brightnessY);
    Serial.print("  brightnessG: "); Serial.println(brightnessG);
    lastPrint = now;
  }
}
