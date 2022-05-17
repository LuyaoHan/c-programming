RTOS vs normal bare metal schedulling?
  function_1()
  {
    t_a1;
		t_a2;
		t_a3;
  }

  function_2()
  {
		t_b1;
		t_b2;
		t_b3;
	}

  Normal bare metal sequence:

	  t_a1;
	  t_a2;
	  t_a3;

	  t_b1;
	  t_b2;
	  t_b3;


  RTOS sequence:

	  t_a1;
	  t_b1;

	  t_a2;
	  t_b2;

	  t_a3;
	  t_b3;



What is a task?
  A function with its context stack. 
	context = PC + registers R0-R16 when a function is running. 
	That's why when declaring tasks, the stacks size need to be specified.
	All the calling relationship is stored in the stack. 

Why do keep all registers when saving context?
  Because after it switch out, and execute the new task we don't know which register will be changed. 

How is context saved when swtching tasks? 
  There are two cases:
	1. function_a(R0, R1, R2)
     {
			 function_b(R0, R1, R2)
     }
     In this case function_a R0, R1, R2 is just used for passing params to sub-functions.
		 These are not saved in function_a context.

  2. function_loop()
	   {
       while(1);
		 }

     interrupt_handler() 
	   {

		 }
     In this case there's no relationship between loop and handler function, so all registers are saved in context.


