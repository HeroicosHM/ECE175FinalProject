#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Function called to start game, given the array to store the username in and the value of what game in the loop is being played.
void start_game(char player_name[], int game) {
  int len,  half_len;

  //Gets player name.
  printf("\nEnter your name: ");

  //Doesnt read prooperly the second time around without this.
  if (game > 0) {
    //Get Player Username:
    fgets(player_name, 20, stdin);
    fgets(player_name, 20, stdin);
  } else {
    //Get Player Username:
    fgets(player_name, 20, stdin);
  }

  //Make sure the username is properly going to be read as a string.
  player_name[strlen(player_name) - 1] = '\0';

  //Langth of the username (for graphics purposes.)
  len = strlen(player_name);

  //Printing out the start of the game. Its mostly hardcoded, but it does adapt its own width based on the size of the user_name
  //entered by the player. Its not really worth commenting all of it. It uses the print_multi function in order to
  //adapt the width (passing the necessary character and the width to be added.)
  printf("%c", 201);
  print_multi(205, len + 40);
  printf("%c\n%c      %s, Let's Play Jacks or Better      %c\n%c", 187, 186, player_name, 186, 204);
  print_multi(205, len + 40);
  printf("%c\n%c", 185, 186);

  half_len = len/2;

  if ((len % 2) == 1) {
    print_multi(' ', half_len + 14);
  } else {
    print_multi(' ', half_len + 13);
  }
  //(♠, ♣, ♥, ♦)
  printf("Winning Ranks");
  print_multi(' ', half_len + 14);
  printf("%c\n%c", 186, 204);
  print_multi(205, len + 40);
  printf("%c\n%c 1 > Royal Flush        ", 185, 186);
  print_multi(' ', len);
  printf("10%c J%c Q%c K%c A%c %c\n%c 2 > Straight Flush      ", 3, 3, 3, 3, 3, 186, 186);
  print_multi(' ', len);
  printf("2%c 3%c 4%c 5%c 6%c %c\n%c 3 > Four of a Kind       ", 4, 4, 4, 4, 4, 186, 186);
  print_multi(' ', len);
  printf("9%c 9%c 9%c 9%c %c %c\n%c 4 > Full House          ", 4, 3, 5, 6, 219, 186, 186);
  print_multi(' ', len);
  printf("9%c 9%c 9%c 3%c 3%c %c\n%c 5 > Flush               ", 4, 3, 5, 5, 3, 186, 186);
  print_multi(' ', len);
  printf("%c%c %c%c %c%c %c%c %c%c %c\n%c 6 > Straight            ", 219, 5, 219, 5, 219, 5, 219, 5, 219, 5, 186, 186);
  print_multi(' ', len);
  printf("4%c 5%c 6%c 7%c 8%c %c\n%c 7 > Three of a Kind       ", 219, 219, 219, 219, 219, 186, 186);
  print_multi(' ', len);
  printf("9%c 9%c 9%c %c %c %c\n%c 8 > Two Pair             ",  4, 3, 5, 219, 219, 186, 186);
  print_multi(' ', len);
  printf("K%c K%c 6%c 6%c %c %c\n%c 9 > Jacks or Better        ", 3, 4, 3,  5, 219, 186, 186);
  print_multi(' ', len);
  printf("J%c J%c %c %c %c %c\n%c", 4, 3, 219, 219, 219, 186, 200);
  print_multi(205, len + 40);
  printf("%c\n\n", 188);
}
