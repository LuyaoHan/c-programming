#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  * The nature of struct is a continuous block of adddresses.
  */
struct PublicClass
{
  unsigned int id_number; 
};

struct PrivateClass
{
  /* anonymous union */
  union 
  {
    struct PublicClass pe;
    char name[256];
  };
  unsigned int age;
  unsigned int phone_number;
};

/**
	* @brief Name setter.
	* @note  The secret sauce for having a private method is that the public class pointer is converted to a private class pointer.
	*        The private class is not known by the outer world.
	*/
void set_name(struct PublicClass* p_public_class)
{
  strcpy(((struct PrivateClass*)p_public_class)->name, "Luyao");
}

void get_name(struct PublicClass* p_public_class)
{
  char buf[256];
  memcpy(buf, ((struct PrivateClass*)p_public_class)-> name, 256);
  printf("Name is: %s\n", buf);
}

void main() 
{
	/* Both public class and private class needs to be initialized to avoid memory run-time error. */
  struct PublicClass public_class;
	struct PrivateClass private_class;
	
  set_name(&public_class);
  get_name(&public_class);

}
