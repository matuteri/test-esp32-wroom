#include <Arduino.h>

// put function declarations here:
int myFunction(int, int);
#define LED_BUILTIN  2
int a = 0;
int b = 1;

void setup() {
  // put your setup code here, to run once:
  int result = myFunction(2, 3);
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(14, OUTPUT);
  pinMode(27, OUTPUT);

  analogWrite(LED_BUILTIN, a);   // turn the LED on (HIGH is the voltage level)
  analogWrite(14, a);   // turn the LED on (HIGH is the voltage level)
  analogWrite(27, 255);   // turn the LED on (HIGH is the voltage level)

}

void loop() {
// put your main code here, to run repeatedly:
//  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
//  delay(10);                       // wait for a second
//  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
//  delay(1000);                       // wait for a second

  analogWrite(LED_BUILTIN, a);   // turn the LED on (HIGH is the voltage level)
  analogWrite(14, a);   // turn the LED on (HIGH is the voltage level)
  delay(30);
  a = a + b;
  if (a > 255 )
    b = -1 ;
  if (a < 1 )
    b = 1 ;

//  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
//  delay(1000);                       // wait for a second


}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}