### When to use comma and when to use colon?
	For user-defined types, including union, enum, and struct. Only enum uses commas.


	Example:
	typedef enum {
		RED,
		BLUE,			// <--- note that only enum uses comma.
		YELLOW
	} eColor_t;

	typedef struct {
		int maxSpeed;
		int mileage;	
		Color_t color;	// <--- A struct uses semicolon.
	} Car_t;

	typedef union {
		float 		f;
		uint32_t    num;  // <--- A union uses semicolon.
	} Union_t;


	Even though a struct, when being declared, uses semicolon (;) to separate its components,
	It uses comma (,) when it is initialized.

	Example:

	Car_t racecar = {
		.maxSpeed = 200,	// <--- notice that when struct is being initalized, the initialization list is separated by comma.
		.mileage = 34,
		.color = RED	
	};


	Other notes:
		typedef syntax goes by:
			typedef <something_you_defined> <Cool_Alias_Name>

			The thing being defind could be enum ...

			If you don't want to use typedef you will have to write:
				enum eColor {RED, BLUE, YELLOW};
				struct Car {int maxSpeed, int mileage};

			With typedef this can be

				typedef enum eColor {RED, BLUE, YELLOW} eColor_t;
							 |
							 | (eColor here Can be omitted, or we can keep it.)
	
				typedef struct Car {int maxSpeed, int mileage} Car_t;
							 	|
							 	| (Car here Can be omitted, or we can keep it.)

			When we are using typedef, the name of the enum/struct/union is omitted, it is fine as long as we give it an 
			alis name such as eColor_t or Car_t with typedef syntax. And the inner part without a enum/struct is anonymous structure.



