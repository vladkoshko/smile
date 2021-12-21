#include <stdio.h>

const int width = 20;
const int height = 20;

int main()
{
  for (int i = 0; i < height; i++) {
    for (int j = 0; j < width; j++) {
      if (i == 5 && (j == 3 || j == 13)) {
        printf("#");
      } else if (i == 10 && (j == 1 || j == 15)) {
        printf("#");
      } else if (i == 11) {
        if (j == 2)
        {
          for (int t = 0; t < 13; t++)
          {
            printf("#");
          }
        } else printf(" ");
      } else printf(" ");

    }

    printf("\n");
  }
}
