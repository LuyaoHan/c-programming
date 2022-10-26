In c if you want to do classes:
1. Each .c is compiled to its own object
2. The header file with same name exposes its api to other "classes" (which are actually objects)
3. If a function is declared as static it cannot be access from another file. That's why it is file static!
If a function is defined in .c file but not in header file, and you call that file in c compiler will error out saying this symbol is undefined.
Also note that this header file will need to be in the Makefile's include path.
4. Only place function signatures (not implementations) and type declarations (enum/struct I invented) into header, not the definition.
If you have variables actually in header, any other files including it will assign memory for it more than one time, and the compiler will complain about multiple definition.
5. If you want to use use c++ like member functions (public private...) use function pointers:
	void (*functionName) (int, void *, char...) etc.
