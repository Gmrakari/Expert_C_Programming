
#include <iostream>


The operators << (to put,or "insert")and >> (to get,or"extract") are used instead of functions like 
putchar() and getchar()

The << and >> operators are still used for shift left and right as in C,but they overloaded for C++ I/O.
The compiler looks at the types of their operands to decide whether to generate code for a shift,or for I/O.
If the leftmost operand is a stream,I/O was intended.Using operators,not functions,has four big advantages:

	The operators can be defined for every type.Thus,we do not need an individual function or (equivalently)
a string format specifier like "%d"for each different type.

	There is some notational convenience in using an operator rather than a function when you wish to output 
multiple messages.Just as you can write an expression i + j + k + l,the left-associativity of the operator
ensures that you can sensibly chain multiple I/O operands together:cou<<"the value is " << i << endl;

	It provides an additional layer that simplifies format control and the use of functions like scanf().
Let's face it,the scanf() family could certainly use a bit of simolifying 
(despite the face that the manual for it is quite short)
	It is possible,and desirable,to overload the extract and insert operators(as these double hevrons are called)
for reading and writing an entire object as a single operation.This is just an application of overloading as shown
in the previous setion.

