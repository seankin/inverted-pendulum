# Inverted Pendulum Project 

This project was used along side studying my Engineering degree specialising in Electronics to learn about control theory and physics in a practical way. 

#explain the control theory prolem 
The inverted pendulum or cart pole is a classic problem in control theory.

#hardware and material requirements 

-PLA driven by a DC motor via a toothed belt
-3D printer 

-rotary encoder opposite the motor (acts as a pulley for the belt and allows us to track the motion of the cart)
-second rotary encoder on the cart is a pivot for the pole and measures its angle. 

-The motor is controlled by a 32 amp Sabertooth motor controller.

-Monitored the encoders with an Arduino.

- piece of extruded aluminum rail called V-Slot, (1.5 m long)

# Materials 

-V-Slot Linear Rail – 20x20mm - Clear Anodise, 1500mm

-Wisamic Incremental Rotary Encoder Dc5-24V Wide Voltage Power Supply Shaft 6Mm x 2

-20-teeth timing pulley wheel + 5m GT2 toothed belt

-ARDUINO MEGA 2560 REV3 [A000067]

-ICQUANZX DC Gear Motor 12V 200R High Torque Electric Micro Speed Reduction Geared Motor Centric Output Shaft Diameter Gearbox

-L298N DC Motor Driver Module

# Method


-The rotary encoders were monitored by an Arduino Uno
-Two different controllers (one to pump energy into the system and swing the cart into the upright position, and an linear quadratic regulator to balance it upright)
-Python program contains commands the motor controller over serial and can query the Arduino whenever it needs to know the state of the system.

#LQR Controller

-linear quadratic regulator or LQR controller. 


![Alt text](photos/IMG_4753.heic?raw=true "Arduino")


![Alt text](photos/schematic.png?raw=true "Schematic")


#Math 

-q is the position of the cart
-θ is the angle of the pole counter-clockwise from vertical 
-f is the force on the cart
-A and B are matrices that define the dynamics
-Q and R are matrices that define the cost. 


# Resourses 

http://blog.benwiener.com/programming/2018/05/10/cart-pole.html

http://underactuated.mit.edu/index.html

https://github.com/philzook58/cart_pole

https://www.philipzucker.com/cart-pole-using-lyapunov-lqr-control-openai-gym/

http://underactuated.csail.mit.edu/pend.html

http://web.mit.edu/klund/www/papers/UNP_pendulum.pdf

https://www.i-programmer.info/news/105-artificial-intelligence/11336-worm-balanced-a-pole-on-its-tail.html

https://www.i-programmer.info/news/169/6769.html

http://web.mit.edu/klund/www/papers/Roberge1960.pdf

https://www.quanser.com/products/rotary-inverted-pendulum/

https://ocw.mit.edu/courses/mechanical-engineering/2-003sc-engineering-dynamics-fall-2011/lagrange-equations/MIT2_003SCF11_rec8notes1.pdf

