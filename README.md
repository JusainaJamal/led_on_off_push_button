LED ON/OFF with Arduino using Push Button
This simple Arduino project demonstrates how to control an LED using a push button. The LED turns ON while the button is pressed, and turns OFF when the button is released.

🛠️ Components Required:
Arduino Uno (or compatible board)

LED

Resistor

Push Button

Jumper Wires

🔌 Circuit Connections:
Component	Arduino Pin
LED +	Pin 13
LED –	GND (through resistor)
Push Button one leg	Pin 4
Push Button other leg	GND (with internal pull-up enabled)

💻 Code Overview:
This code uses Arduino’s internal pull-up resistor for the button input, meaning the button pin reads HIGH when not pressed and LOW when pressed
