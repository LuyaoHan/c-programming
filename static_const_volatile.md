# Static keyword:
	- static on local variable "local static"
		The value of the variable holds through out the entire program lifespan, it does not perish with even exit of the function. 

	- static on file variable "file static"
		The value of the variable holds through out the entire program lifespan, it can be accessed in the scope of this file.

	- static on functions "static functions"
		The function can only be accessed in the current source (obj), and linker will report error if other files try to access this static function.

	- static in c++:
		Static constructs including variables / function which can be called/accessed even when the class prototype hasn't been instanlized (allocated memory) on stack.

# volatile keyword:
	Used so that the compiler does not optimize the modified code.	
	- volatile variable could be changed in the following situations:
		- ISR 
		- multithreaded situation
		- registers mapped to the external hardware

	void criticalCode(volatile int* a) {
		return *a * *a; // derefereing a twice while a is a volatile variable can have issue when a changes just after *a has been done.

		// Correct way to do it is:
		// int num = *a;
 		// return num * num;
	}
	
	- When there are inline assmebly codes in the C code, you also do
		__asm volatile ("<The actual assembly code>"); 
		so that the compiler does not optimize away the assembly code you have written.

# const keyword
	- const is a compile time modifier, it just means the programmer can set the value once, but the external hardware may set it many times.
		So you can definitely have const volatile int, measning the programmer can change it once and the external hardware / ISR / multithreaded application may change it 
		many times.
	
	Always read from right to left as that's how the compiler lexical parsing works:
	- int *const p;  p constant pointer to integer -- meaning p is a non-modifiable(const) pointer to an integer. That integer can be changed, but the pointer itself cannot be changed.
	- const int *p;  p pointer int const -- meaning p is a modifiable pointer to a non-modifiable(const) integer. That integer cannot be changed, but the pointer itself can be changed.
	- int const *p;  Same as the above, const int and int const are the same.
