# loop-time-calculator

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

  by Gustavo Silveira
  a.k.a. Nerd Musician
  gustavosilveira@musiconerd.com
  https://go.musiconerd.com