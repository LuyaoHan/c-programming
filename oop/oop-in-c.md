## How to do object oriented programming in c?

A combination of struct + function pointer + static keyword can allow C to do powerful OOP-style programming.

#### Module.h
```c
    #include <stdio.h>
    typedef struct {
        void (* start) (void);
        void (* stop) (void);
        int (* readID) (void);
    } Module_Handle_t;
```
For example, the above module.h exposes to other modules its three methods in the header file. 
The structs Module_Handle_t contains the function pointers for start, stop, and readID methods.

This has allowed *encapsulation*.


The actual function bodies need to be implemented in the below Module.c file, and the addresses associated to the function pointers in Module_Handle_t. 

We can implement differently off course, and in a sense this is *polymorphism*.

Since the function implementation (startProcedure, stopProcedure, and readID) are static functions, they are not accessible from other files except for module.c itself. This is formed the notion of a *class*.

In module.c, a const static attribute privateID exists.
Because it is also static, no other files can access it, this becomes a *private attribute*. We provided a the readID method in Module_Handle_t, also a function pointer, it is essentially a *accesser*. This has achieved *data hiding*.
#### Module.c
```c
    /* static attribute: only accessible by methods in this file. */
    static const int privateID = 0x31337;

    /* start method implementation. */
    static void startProcedure(void) {
        ...
    }

    /* stop method implementation. */
    static void stopProcedure(void) {
        ...
    }

    /* read method implementation. */
    static int readID(void) {
        return  privateID;
    }

    /* Implicit casting to Module_Handle_t on the right side, gets the pointer and assign to the handle. */
    Module_Handle_t *hModule = &(Module_Handle_t){
        .start = startProcedure,
        .stop = stopProcedure,
        .readID = readID
    }
```

Now, say we need to use module in the main procedure.
Since hModule was declared in another source file, Module.c, we need to tell the compiler this symbol exist in another object file. 
#### Main.c
```c
    void main {
        /* extern keyword to tell compiler to look for hModule symbol in the global scope. */
        extern Module_Handle_t *hModule;
        hModule->start();
    }
```

