Project: Line Following Robot


Overview: This project is an autonomous robot designed to follow a black line on a white surface using infrared (IR) sensors and DC motors controlled by an Arduino Uno. Built in middle school (7th–8th grade), this was one of my first serious robotics projects and marked the beginning of my interest in embedded systems, autonomy, and engineering problem-solving.

How It Works
  IR Sensors (Input): The IR transmitter shines infrared light, which reflects strongly from white surfaces and is absorbed by black surfaces. By measuring the reflected intensity, the robot distinguishes between line (black) and background (white).
  
  Arduino Logic:
    Both sensors on black → move forward.
    Left sensor on black, right on white → turn right.
    Right sensor on black, left on white → turn left.
    Both sensors on white → stop (off the track).
  
  Motors (Output): Motor directions are controlled through digital pins, translating sensor input into real-time navigation.
  
  Hardware Components
    Arduino Uno
    2 IR sensors (IR LED + photodiode pairs)
    2 DC motors (with driver circuit or direct wiring)
    Power supply (battery pack or USB from computer)
    Chassis 
    White paper track with black tape or marker line

Skills & Concepts Learned
  Physics of light: Black absorbs IR, white reflects.
  Electronics: Working with IR transmitter/receiver circuits.
  Programming: Implementing conditional logic with sensor thresholds.

  Debugging: I initially commented out and rewrote multiple motor-control strategies when the robot didn’t behave as expected. This iterative process taught me that motor orientation, sensor calibration, and code logic are interconnected.
  Systems Thinking: Learned how sensors, actuators, and code integrate into a functioning system.
  Code Highlights
    analogRead() used to interpret reflected IR intensity.
    Threshold-based decisions to distinguish surfaces.
    Serial monitoring (Serial.println()) used to calibrate sensor values during testing.
    Commented-out sections (later deleted) showed my trial-and-error approach, documenting how I refined logic to match my specific wiring and sensor behavior
Possible Improvements:
  If I were to redo this project today, I would:
    Further refine and calibrate sensor thresholds.
    Explore PID control for smoother, more precise turns.
    Add documentation with wiring diagrams, photos, and videos for clarity.
