/**
	* Understanding Frame Pointers. Each function has local memory associated with it to hold incoming parameters, local variables, and (in some cases) temporary variables. 
	* This region of memory is called a stack frame and is allocated on the process’ stack. 
	* A frame pointer (the ebp register on intel x86 architectures, rbp on 64-bit architectures) contains the base address of the function’s frame. 
	* The code to access local variables within a function is generated in terms of offsets to the frame pointer. 
	* The stack pointer (the esp register on intel x86 architectures or rsp on 64-bit architectures) may change during the execution of a function as values are pushed or popped off the stack (such as pushing parameters in preparation to calling another function). 
	* The frame pointer doesn’t change throughout the function.
	*
	*/
