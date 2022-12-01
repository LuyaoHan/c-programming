### It is not uncommon that sometimes I will run into an "lvalue" error thrown by the compiler.

	What does it mean?
	If I have a varaible:
		Blinkers_Logic_t blinkersLogic 

	And I wish to make this variable store content of another variable emulatedBlinkersLogic, what should I do?

	1. If we do deep copy, we can do memcpy from string.h library, that is
		memcpy(&blinkersLogic, &emulatedBlinkersLogic, sizeof(Blinkers_Logic_t));

		This is a deep copy, because after the copy, there will be two copy of same contents storing in both variables.

	2. We can also do shallow copy, that is, just make the first variable blinkersLogic "point" to the address of the second variable, emulatedBlinkersLogic.

		It is tempting to do:
		&blinkersLogic = emulatedBlinkersLogic 

		Now the compiler will throw a warning/error: "lvalue required as left operand of assignment"

		What the programmer intended to do is to repoint the address of blinkersLogic, but instruction level is it not possible because there binkkersLogic is a contiguous memory, it is created to store actual contents, not storing an address.

		So doing &blinkersLogic assignment is pointless, compiler SHOULD give an error.


		In this case, if we need to repoint the first variable's point, we need to declare it as a pointer, that is

			Blinkers_Logic_t *p_blinkersLogic;

		And we can repoint this address to

			p_blinkersLogic = &emulatedBlinkersLogic;


		Since the ampersand '&' is used on the right side, this operation is now valid.


