In c if you want to do classes:
1. Each .c is compiled to its own object
2. The header file with same name exposes its api to other "classes" (which are actually objects)
3. If you have a definition in the .c file it is known to the compiler, even if you don't include it in the header file and other objects calls this symbol it is still resolvable. (But it is not good practice.) Note that if you use static keyword in a c file, it is definitely true you cannot call this function from another file because a function being static is only linkable within the object code.
4. Only place function signatures (not implementations) and type declarations (enum/struct I invented) into header, not the definition.
If you have variables actually in header, any other files including it will assign memory for it more than one time, and the compiler will complain about multiple definition.
5. If you want to use use c++ like member functions (public private...) use function pointers:
	void (*functionName) (int, void *, char...) etc.
