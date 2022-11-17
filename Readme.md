# Program to measure distance without VL53L0X.h
Japanese available in readme2.md.
This is a program to make the distance sensor VL53L0X work only with the Arduino standard library Wire.h.
## About the specification
  At this stage, only distance measurement is supported.
  Addresses, etc. are extracted from VL53L0X.h, so you can implement it by adding more if necessary.
  The distance is recorded in centimeters in the global function Dist.

## Known Bugs
  When the power is turned on and off multiple times in a row, an inappropriate value is output.
  This also occurs in the original library. Please rest the Arduino if necessary.

# Boards whose operation was verified
  M5Stacks ToF unit 2 version
  Arduino Uno R2
  Arduino nano every
  Raspberry PI series (needs rewritten)
