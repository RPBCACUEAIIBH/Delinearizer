1. Add library to your arduino IDE 
 - Open terminal in your Arduino/libraries directory, and run "git clone https://github.com/RPBCACUEAIIBH/Delinearizer" and restart the IDE.
 - Download as .zip package, go to the Sketch/Include Library/Add .ZIP Library... in you Arduino IDE, select it, and click ok.
2. Open the example sketch to see how to use it.

Basically it has a few functions, you feed it a float value that you increment/decrement linearly in a for loop and it returns it's non linear equivalent depending on the function you call.
The input value must be a float between 0.0 and 100.0, and the returned value is also a float between 0.0 and 100.0. Linear percentage in - Non linear percentage out.

This is what it does:
![Delinearizer.png](https://raw.githubusercontent.com/RPBCACUEAIIBH/Delinearizer/Arduino/Documentation/Delinearizer.png)
