#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

struct pokemon {char * name; int health;};

void print_pokemon(struct pokemon) {
  printf("\tname: %s\n\thealth: %d\n\n", p.name, p.health);
}

struct pokemon rand_pokemon() {
  struct pokemon p;
  // char vowels[] = "aeiouy";
  // char cons[] = "bcdfghjklmnpqrstvwxz";
  // p.name = strcat(cons[rand1], strcat(cons[rand2], "mon"));
  p.name = "yo";

  p.health = rand();

  return p;
}

int main() {
  struct pokemon p = rand_pokemon();
  print_pokemon(p);
  return 0;
}
