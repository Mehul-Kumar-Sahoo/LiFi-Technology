# LiFi-Technology

Skills : Arduino, Basic electronics

I'm Mehul Kumar Sahoo ECE student at IIT(BHU). I along with my 3 team members Vaibhav Bansal, Mamalesh Rajkumar Hake and M.D. Athar have made an arduino circuit to transmit and receive data using light. It is a part of our 2nd semester project at IIT(BHU).

## Componets Required:
- Arduino Uno
- Bread board
- Jumper Cables
- Photoresistor
- Resistor
- LED
- Bluetooth Module
- Potentiometer

## Circuit Diagram
![Circuit Diagram](https://user-images.githubusercontent.com/93527557/185404721-a11342c3-0fb1-4b75-9980-d93b46a1fa04.jpeg)

## Project Overview
### Sender
- In this, we will input the data from the system, and the data is processed on the Arduino. Each character is converted into its ASCII value.
- Then, the ASCII value in decimal form is converted into its binary form.
- After that, the data is transferred using led, in which a low state means 0 and a high state means 1.
- WE SEND THE DATA IN INTERVALS OF 100 MILLISECONDS SO THAT RECEIVER CAN READ THE DATA CORRECTLY.

### Receiver
- The resistance of the photoresistor changes when light falling on the photoresistor changes.
- After finding the resistance, we set a threshold value of the resistance so that we can differentiate between the values 0 and 1.
- It will keep taking the values until all the data is transferred.
- After the transfer of every 8 bits, the ASCII value of the character will be calculated in decimal form, converted into nature, and added to the string.
