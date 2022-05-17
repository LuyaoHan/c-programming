What is a task?
  A function with its context stack. 
	context = PC + registers R0-R16 when a function is running. 

Why do keep all registers when saving context?
  Because after it switch out, and execute the new task we don't know which register will be changed. 
