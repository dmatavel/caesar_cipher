# caesar_cipher

## 1 **Description**

This program encrypts a message using the encryption method known as the [*caesar cipher*](https://en.wikipedia.org/wiki/Caesar_cipher).

## 2 **Installation:**

*caesar_cipher* uses the [readline()](https://www.man7.org/linux/man-pages/man3/readline.3.html) function to receive user input (the message to be encrypted).

To install and use the function package and libraries on a Debiam-based GNU/Linux system (in case it's not installed by default, which it's very unexpected to happen), run the following commands:
  
  - run `sudo apt install readline-common` and wait for the process to finish.

Install readline() development library:
    
  - run `sudo apt install libreadline-dev` and wait for the process to finish.

Download and extract the program's [source code](https://github.com/dmatavel/caesar_cipher/archive/refs/heads/main.zip).

Go into the program folder and compile the files by running `make`. This will create an executable file called *caesar_cipher*.

## 3 **Instructions:**

Run the program with `./caesar_cipher`
Insert a number of a correspondent option:
- 1 to cipher a text;
- 2 to decipher;
- 3 to quit the program.
Both cipher and decipher options will pronpt the user for a text and a key to encrypt or decrypt the text.
