#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  * The nature of struct is a continuous block of adddresses.
  *
  *
  */
struct PublicEntity
{
  
};

struct PrivateEntity
{
  /* anonymous union */
  union 
  {
    struct PublicEntity pe;
    char name[256];
  };
  unsigned int age;
  unsigned int phone_number;
};


void set_name(struct PublicEntity* p_public_entity)
{
  strcpy(((struct PrivateEntity*)p_public_entity)->name, "Luyao");
}

void get_name(struct PublicEntity* p_public_entity)
{
  char buf[256];
  memcpy(buf, ((struct PrivateEntity*)p_public_entity)-> name, 256);
  printf("Name is: %s\n", buf);
}

void main() 
{
  struct PublicEntity public_entity;
	struct PrivateEntity private_entity;
  set_name(&public_entity);
  get_name(&public_entity);

}
