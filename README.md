# caesar_cipher

**Description:** This program encrypts a message using the encryption method known as the [*caesar cipher*](https://en.wikipedia.org/wiki/Caesar_cipher).

**Installation:**

* *caesar_cipher* uses the [readline()](https://www.man7.org/linux/man-pages/man3/readline.3.html) function to receive user input (the message to be encrypted). To install and use the function package and libraries on a Debiam-based GNU/Linux system (in case it's not installed by default, which it's very unexpected to happen), run the following commands:
  
  - run `sudo apt install readline-common` and wait for the process to finish.

  1.1 Install readline() development library:
    
  - run `sudo apt install libreadline-dev` and wait for the process to finish.

* Download and extract the program's [source code](https://github.com/dmatavel/caesar_cipher/archive/refs/heads/main.zip).

* Go into the program folder and compile the files by running `make`. This will create an executable file called *caesar_cipher*.

**Instructions:**

* Run the program with `./caesar_cipher [key]`. A [key] must be an integer number between 1 and 25, and it will be used to encrypt the message.

If the key entered is a valid one, the program will ask the user to enter the message to be encrypted, then the message will be processed, encrypted and printed on the screen in its encrypted form.
