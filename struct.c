#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

struct pokemon {char name[6]; int health; int attack; int defense; int speed;};

void print_pokemon(struct pokemon p) {
  printf("Your Pokemon:\n\tname: %s\n\thealth: %d\n\tattack: %d\n\tdefense: %d\n\tspeed: %d\n\n", p.name, p.health, p.attack, p.defense ,p.speed);
}

struct pokemon rand_pokemon() {
  struct pokemon p;
  char vowels[] = "aeiouy";
  char cons[] = "bcdfghjklmnpqrstvwxz";

  //create name
  p.name[0] = cons[rand() % 20];
  p.name[1] = vowels[rand() % 5];
  p.name[2] = '\0';
  char* end = "mon";
  strcat(p.name, end);

  //set health
  p.health = 50 + rand() % 50;
  //set attack
  p.attack = 50 + rand() % 50;
  //set defense
  p.defense = 50 + rand() % 50;
  //set speed
  p.speed = 50 + rand() % 50;

  //return struct pokemon
  return p;
}

void set_everything(struct pokemon* p, int new_health, int new_attack, int new_defense, int new_speed) {
  //writing this is shorter than using the fxns below
  p->health = new_health;
  p->attack = new_attack;
  p->defense = new_defense;
  p->speed = new_speed;
}

void set_health(struct pokemon* p, int new_health) {
  p->health = new_health;
}

void set_attack(struct pokemon* p, int new_attack) {
  p->attack = new_attack;
}

void set_defense(struct pokemon* p, int new_defense) {
  p->defense = new_defense;
}

void set_speed(struct pokemon* p, int new_speed) {
  p->speed = new_speed;
}

int main() {
  srand(time(NULL));
  struct pokemon p = rand_pokemon();
  print_pokemon(p);

  printf("changing health to 101\n\tset_health(&p, 101)\n");
  set_health(&p, 101);
  print_pokemon(p);

  printf("changing attack to 404\n\tset_attack(&p, 404)\n");
  set_attack(&p, 404);
  print_pokemon(p);

  printf("changing defense to 302\n\tset_defense(&p, 302)\n");
  set_defense(&p, 302);
  print_pokemon(p);

  printf("changing speed to 132\n\tset_speed(&p, 132)\n");
  set_speed(&p, 132);
  print_pokemon(p);

  printf("changing all stats to 0 Dx\n\tchange_everything(&p, 0, 0, 0, 0)\n");
  set_everything(&p, 0, 0, 0, 0);
  print_pokemon(p);

  printf("%s has fainted! Dx\n\n", p.name);

  return 0;
}
