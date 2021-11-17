/*
structure for cricket
*/

#include <stdio.h>

#include <string.h>

struct cricket {
  char name[100];
  char team_name[100];
  int avg;
}
player[3], temp;

int main() {
  int i, j, n;
  n = 3;
  for (i = 0; i < n; i++) {
    printf("\nenter the name : ");
    scanf("%s", player[i].name);
    printf("\nenter the team name : ");
    scanf("%s", player[i].team_name);
    printf("\nenter the team avg : ");
    scanf("%d", & player[i].avg);
  }

  /*sort based on avg name and team name*/

  for (i = 0; i < n - 1; i++) {
    for (j = i + 1; j < n; j++) {
      if (strcmp(player[i].name, player[j].name) > 0) {
        temp = player[i];
        player[i] = player[j];
        player[j] = temp;
      }
    }
  }

  printf("\n\nAfter name sort");
  for (i = 0; i < n; i++) {
    printf("\n%s %s %d", player[i].name, player[i].team_name, player[i].avg);
  }

  for (i = 0; i < n - 1; i++) {
    for (j = i + 1; j < n; j++) {
      if (strcmp(player[i].team_name, player[j].team_name) > 0) {
        temp = player[i];
        player[i] = player[j];
        player[j] = temp;
      }
    }
  }

  printf("\n\nAfter team name sort");

  for (i = 0; i < n; i++) {
    printf("\n%s %s %d", player[i].name, player[i].team_name, player[i].avg);
  }

  for (i = 0; i < n - 1; i++) {
    for (j = i + 1; j < n; j++) {
      if (player[i].avg > player[j].avg) {
        temp = player[i];
        player[i] = player[j];
        player[j] = temp;
      }
    }
  }

  printf("\n\nAfter avg sort");

  for (i = 0; i < n; i++) {
    printf("\n%s %s %d", player[i].name, player[i].team_name, player[i].avg);
  }

  return 0;
}

/*
output


enter the name : a2

enter the team name : t1

enter the team avg : 41

enter the name : a2

enter the team name : t3

enter the team avg : 35

enter the name : a1

enter the team name : t2

enter the team avg : 42


After name sort
a1 t2 42
a2 t3 35
a3 t1 41

After team name sort
a3 t1 41
a1 t2 42
a2 t3 35

After avg sort
a2 t3 35
a3 t1 41
a1 t2 42
*/