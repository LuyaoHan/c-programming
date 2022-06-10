/**
  ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ********
  * @file      :     variadic-macro.c
  * @author    :     Luyao Han
  * @email     :     luyaohan1001@gmail.com
  * @brief     :     A simple note on variadic macros
  * @date      :     05-29-2022
  * Copyright (C) 2022-2122 Luyao Han. The following code may be shared or modified for personal use / non-commercial use only.
  ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ********  */



/**
	* @brief The keyword "__VA_ARGS__" indicates that it can take variable number of arguments. 
	* @note  It is a function of the C99 preprocessor.
	*        A macro can be declared to accept a variable number of arguments much as a function can. 
	*        For example:
	*        #define eprintf(...) fprintf (stderr, __VA_ARGS__)
	*        
	*        In this case fprintf can take different number of arguments:
  *          eprintf ("%s:%d: ", input_file, lineno)
  *            →  fprintf (stderr, "%s:%d: ", input_file, lineno)
	*
	*/

#define eprintf(...) fprintf (stderr, __VA_ARGS__)
