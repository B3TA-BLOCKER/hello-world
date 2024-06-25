// hello world 

#include <stdio.h>
#include <unistd.h>

int main(void)
{
    char word[12]; // declare a character array 
    for (int i = 0; i < 11; i++) word[i] = ' '; // initialize the array with spaces
    word[11] = '\0'; // Null-terminate the string

    printf("\033[H\033[J"); // Clear the screen
    printf("%s\n", word);
    word[0] += 64;
    while (word[0] != 'h') { word[0]++; usleep(100000); printf("%s\n", word); }
    word[1] += 64;
    while (word[1] != 'e') { word[1]++; usleep(100000); printf("%s\n", word); }
    word[2] += 64;
    while (word[2] != 'l') { word[2]++; usleep(100000); printf("%s\n", word); }
    word[3] += 64;
    while (word[3] != 'l') { word[3]++; usleep(100000); printf("%s\n", word); }
    word[4] += 64;
    while (word[4] != 'o') { word[4]++; usleep(100000); printf("%s\n", word); }
    word[6] += 64;
    while (word[6] != 'w') { word[6]++; usleep(100000); printf("%s\n", word); }
    word[7] += 64;
    while (word[7] != 'o') { word[7]++; usleep(100000); printf("%s\n", word); }
    word[8] += 64;
    while (word[8] != 'r') { word[8]++; usleep(100000); printf("%s\n", word); }
    word[9] += 64;
    while (word[9] != 'l') { word[9]++; usleep(100000); printf("%s\n", word); }
    word[10] += 64;
    while (word[10] != 'd') { word[10]++; usleep(100000); printf("%s\n", word); }
}
