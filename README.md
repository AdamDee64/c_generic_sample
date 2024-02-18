A sample creating a generic function using _Generic in a macro in the C Programming language.<br>

This example is a simple number clamping function.<br>
Clamping values to a specific range is a useful thing to do in many types of programming, but if you want to clamp an int, a float, or any type to a given range you must create a function to handle each case.<br>
for example: <br> 
clamp_float(float value, float min, float max)<br>
clamp_int(int value, int min, int max)<br>

The _Generic keyword used in a macro allows for us to be able to call these functions with a generic function call regardless of the type<br>
In this way, no matter the number, you just have to remember one generic function and the macro will choose the right one depending on the type it needs<br>

