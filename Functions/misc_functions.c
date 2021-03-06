//Need I Say Anything?
void print_game_over(void) {
  printf("\n      ___           ___           ___           ___\n");
  printf("     /\\__\\         /\\  \\         /\\  \\         /\\__\\\n");
  printf("    /:/ _/_       /::\\  \\       |::\\  \\       /:/ _/_\n");
  printf("   /:/ /\\  \\     /:/\\:\\  \\      |:|:\\  \\     /:/ /\\__\\\n");
  printf("  /:/ /::\\  \\   /:/ /::\\  \\   __|:|\\:\\  \\   /:/ /:/ _/_\n");
  printf(" /:/__\\/\\:\\__\\ /:/_/:/\\:\\__\\ /::::|_\\:\\__\\ /:/_/:/ /\\__\\\n");
  printf(" \\:\\  \\ /:/  / \\:\\/:/  \\/__/ \\:\\~~\\  \\/__/ \\:\\/:/ /:/  /\n");
  printf("  \\:\\  /:/  /   \\::/__/       \\:\\  \\        \\::/_/:/  /\n");
  printf("   \\:\\/:/  /     \\:\\  \\        \\:\\  \\        \\:\\/:/  /\n");
  printf("    \\::/  /       \\:\\__\\        \\:\\__\\        \\::/  /\n");
  printf("     \\/__/         \\/__/         \\/__/         \\/__/\n");

  printf("\n      ___                         ___           ___\n");
  printf("     /\\  \\          ___          /\\__\\         /\\  \\\n");
  printf("    /::\\  \\        /\\  \\        /:/ _/_       /::\\  \\\n");
  printf("   /:/\\:\\  \\       \\:\\  \\      /:/ /\\__\\     /:/\\:\\__\\\n");
  printf("  /:/  \\:\\  \\       \\:\\  \\    /:/ /:/ _/_   /:/ /:/  /\n");
  printf(" /:/__/ \\:\\__\\  ___  \\:\\__\\  /:/_/:/ /\\__\\ /:/_/:/__/___\n");
  printf(" \\:\\  \\ /:/  / /\\  \\ |:|  |  \\:\\/:/ /:/  / \\:\\/:::::/  /\n");
  printf("  \\:\\  /:/  /  \\:\\  \\|:|  |   \\::/_/:/  /   \\::/~~/~~~~\n");
  printf("   \\:\\/:/  /    \\:\\__|:|__|    \\:\\/:/  /     \\:\\~~\\\n");
  printf("    \\::/  /      \\::::/__/      \\::/  /       \\:\\__\\\n");
  printf("     \\/__/        ~~~~           \\/__/         \\/__/\n");
}

//Function to print multiple characters at once given the character and the number of them to print.
void print_multi(int x, int len) {
  for(int i = 0; i < len; i++) {
    printf("%c", x);
  }
}

//Function to return the number of digits in a given integer.
int num_digits(int x) {
  int count = 0;
  while (x != 0) {
    count++;
    x/=10;
  }
  return count;
}
