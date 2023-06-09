/*
  Loop Time Calculation Example

  This Arduino code demonstrates how to calculate the time taken by each loop
  iteration using the micros() and millis() functions. The loopTime() function
  calculates and displays the loop time in both microseconds and milliseconds.

  The loopTime() function is called within the loop() function to measure the
  time taken by each iteration. The previousTimeMicros and previousTimeMillis
  variables store the previous time, which is subtracted from the current time
  to calculate the loop time.

  Hardware Required:
  - Arduino board

  This code is released under the MIT License.
*/

unsigned long previousTimeMicros = 0; // Variable to store the previous time in microseconds
unsigned long currentTimeMicros = 0;  // Variable to store the current time in microseconds
unsigned long previousTimeMillis = 0; // Variable to store the previous time in milliseconds
unsigned long currentTimeMillis = 0;  // Variable to store the current time in milliseconds

void loopTime() {
  currentTimeMicros = micros();                 // Get the current time in microseconds
  unsigned long loopTimeMicros = currentTimeMicros - previousTimeMicros; // Calculate the time taken by the loop in microseconds
  previousTimeMicros = currentTimeMicros;       // Update the previous time for the next iteration

  currentTimeMillis = millis();                 // Get the current time in milliseconds
  unsigned long loopTimeMillis = currentTimeMillis - previousTimeMillis; // Calculate the time taken by the loop in milliseconds
  previousTimeMillis = currentTimeMillis;       // Update the previous time for the next iteration

  Serial.print("Loop time: ");
  Serial.print(loopTimeMicros);
  Serial.print(" microseconds / ");
  Serial.print(loopTimeMillis);
  Serial.println(" milliseconds");
}

void setup() {
  Serial.begin(9600); // Initialize serial communication
}

void loop() {
  // Your main code logic goes here

  loopTime(); // Call the function to calculate loop time
}
