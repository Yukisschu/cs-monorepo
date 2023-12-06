# CS50 Solutions

## Introduction

This repository collects my solutions to the C problem sets and labs in the [CS50](https://learning.edx.org/course/course-v1:HarvardX+CS50+X/home) courses offered by Harvard University.

The code within this repository was developed using the CS50 codespace and relies on some functions from the [cs50 library](https://github.com/cs50/libcs50). For your convenience, I have restructured the documents and included the necessary library files to make them easy to try in any environment.

## Usage

1. **Clone or Download:**
   - Clone this repository to your computer using `git clone [REPO_URL]`.
   - Alternatively, download and extract the repository ZIP file.

2. **Navigate to Directory:**
   - Open your terminal and navigate to the project directory using the `cd FILE_PATH/cs50` command.
   - Alternatively, open the repo folder in a code editor like VS Code.

3. **Compile the Program:**
   - In the terminal, use the following command to compile the *.c files:

     ```
     cc [FILENAME].c -o [FILENAME] cs50.c
     ```

     Replace `[FILENAME]` with the name of the file.

4. **Run the Program:**
   - Execute the compiled program with the following command:

     ```
     ./[FILENAME]
     ```

     If you are playing the Wordle game, provide additional input for the word length. For example:

     ```
     ./wordle 5
     ```

     This indicates a word length of 5 characters. Adjust the number accordingly (e.g., `./wordle 6`, `./wordle 7`).