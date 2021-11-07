
				Library Call 											| 							System Call
The C library is the same on every ANSI C implementation					The Systems call are different in each OS
Is a call to a routine in a library 										Is a call to the kernel for a service
Linked with the user program 												Is an entry point to the OS
Executes in the user address space 											Executes in the kernel address space
Counts as part of the "user" time 											Counts as part of the "system" time
Has the lower overhead of a procedure call 									Has high overhead context switch to kernel and back
There are about 300 routines in the C library libc 							There are about 90 system calls in UNIX,(fewer in MS-DOS)
Documented in Section 3 of the UNIX OS manual								Documented in Section 2 of the UNIX OS manual
Typical C libray calls:system,fprintf,malloc								Typical system calls:chdir fork,write,brk




