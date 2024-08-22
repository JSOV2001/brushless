# Brushless motor

## Circuit diagram
![brushless_bb](https://github.com/user-attachments/assets/6ced5fd0-8614-4f5e-8682-1826f8c16924)

## Aditional information
* In the line: 

	   // Activate ESC
	   ESC.writeMicroseconds(1000);

	The *1000* means a PWM of 1ms. But, you migh have to change *1000* for *2000* if your ESC is activated by a PWM of 2 ms 
