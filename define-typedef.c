#include <stdbool.h>

/**
	* @brief #define vs typedef
	*        
	*        Similarity: Both of them declares like an alias to entities in C source.
	*        Difference:
	*           #define is parsed by the pre-processor. 
	*           The pre-processor mechanically does subsitution on string-token to values.
	*           No domain limitation. 
	*
	*           
	*           typedef is used to data types a new name.
	*           
	*         #define fruit int
	*         unsigned fruit i;      // works
	*
	*         typedef int fruit;    
	*         unsigned fruit i;    // does not work
	*/

/**
	* @brief The #define directive causes the compiler to substitute token-string for each occurance of identifier in the source file.
	*/

/* #define    CUSTOM_NAME    VALUE */
#define       GPIO_0          0      /* All "GPIO_0" in source text will be substituted by 0. */
#define       PWM             255    /* All "GPIO_0" in source text will be substituted by 0. */
#define       LCD_ON          true   /* All "GPIO_0" in source text will be substituted by 0. */

