
# 🖥️ Hello World

Welcome to the **Hello World Animation** project! This fun and quirky code animates the famous "Hello World" message one character at a time in your terminal. 🌟

## 📋 Overview

This program uses a simple loop and `usleep` to create a smooth, character-by-character reveal of the classic "Hello World" message. It's a great demonstration of basic C programming and terminal output manipulation.

## 🛠️ Code Explanation

Here's a breakdown of what the code does:

1. **Initialization**: The `word` array is initialized with spaces and then null-terminated to form an empty string.
2. **Character Animation**: Each character of "Hello World" is incremented from a space to its target character with a delay, creating an animation effect.

```c
#include <stdio.h>
#include <unistd.h>

int main(void)
{
    char word[12];
    for (int i = 0; i < 11; i++) word[i] = ' ';
    word[11] = '\0';

    printf("\033[H\033[J"); 
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
```
![Hello World Animation](URL_TO_YOUR_GIF_HERE)

## 🚀 How to Run

1. **Clone the Repository**:
    ```sh
    git clone https://github.com/B3TA-BLOCKER/hello-world.git
    cd hello-world
    ```

2. **Install `gcc`** (if not already installed):

    - **Ubuntu/Debian**:
        ```sh
        sudo apt update
        sudo apt install gcc
        ```

    - **MacOS**:
        ```sh
        xcode-select --install
        ```

    - **Windows**:
        Download and install [MinGW](https://sourceforge.net/projects/mingw/).

3. **Compile the Code**:
    ```sh
    gcc -o hello hello_world.c
    ```

4. **Run the Program**:
    ```sh
    ./hello
    ```

Sit back and enjoy the animation! 🎉


## 🎨 Customization

Feel free to tweak the `usleep` values to speed up or slow down the animation. You can also modify the target message by adjusting the loops and target characters.

## 📦 Requirements

- A C compiler (e.g., `gcc`)
- A terminal to run the compiled program
