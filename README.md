Introduction

This repo contains the construction of a robotic hand based on the open source model InMoov. The hand was built
using low-cost materials, making it an economical and viable solution for reproduction. 
To build the robotic hand, we reproduced the design of the
open source project InMoov, which offers a model for
the development of 3D printed robotics. 

Construction

The pieces were edited in the
Ultimaker Cura software to optimize their structure and prepare them for
printing. The printing was done using an Anycubic Kobra printer with 1.75 mm diameter PLA filament. The pieces are then glued together with two-component epoxy glue.
The hand movement system was implemented using six MG996R servo motors (five for each finger and one for the wrist), which
offer a torque of up to 11 kg/cm and a rotation of 180°. To control the tension, we used 0.4 mm gauge fishing line, combined
with a 60 Lb brake system, which ensures the necessary resistance to keep the structure in position after each movement. The motors
and the thread generate a pulley system, through which the fingers can
be closed or opened. In the case of the wrist, there is a servomotor placed
in this part, connected to a gear that causes the rotation.

Program

The servos were controlled and programmed using an Arduino UNO microcontroller board, programmed in the Arduino IDE environment, with
a code designed by us specifically for this project. The program
asks the user if they want to perform a predetermined or a custom movement. If a custom movement is chosen, the angle or position of each finger needs to be indicated. The user interface was designed with flexibility and ease of use in mind, allowing the user to
customize hand movements or select from a set of predetermined movements.

InMoov: https://inmoov.fr/
