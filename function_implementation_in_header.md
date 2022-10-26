### Is it a good practice to define C++ functions inside header files?

	So it is a bad practice. You use keep function definition in the header and implementation in the source (.c/.cpp) files.


	What if I don't do that? Then! After preprocessing, each source file will contain the header file. Then, at the linking stage you will end up with a multiple definition error because you will have multiple definitions of the same function. Which is a link time error.

	Using inline or static will get rid of the linking error. Unless you want the function to be inline, it is best to declare the function in the header and define it in a single source file and link it.
