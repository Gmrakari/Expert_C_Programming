

x = x + 1;		/* regular */
++x;			/* pre-increment */
x++;			/* post-increment */
x += 1;			/* assignment operator */

node[i>>3] += -(0x01 << (i & 0x7));

mango[i++] += y;

mango[i] = mango[i] + y;i++;

mango[i++] = mango[i++] + y;

"++x"means take the location of x,increment the contents there,put this value in a register;
"x++"menas take the location of x,load the contents into a register,increment the value of x in memory

CC -S -XC banana.c

-S causes the compilation to stop at the assembler phase,leaving the assembly language in file banana.s.


The -Xc tell the compiler to reject any non-ANSI C constructs.It's a good idea to always use this 
option when writing new code,because it will help you attain maximum program protability.

frotz[--j + i++] += --y;

--y;
--j;
frotz[j+i] = frotz[j + i] + y;
i++;










