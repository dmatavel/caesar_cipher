
# caesar_cipher

## Name

caesar_cipher - encrypt a text like a Caesar.

## **Synopsis**

**caesar_cipher** - The program will display options to cipher or decipher a text.

## Description

caesar_cipher encrypts or decrypts a string using the encryption algorithm [*caesar cipher*](https://en.wikipedia.org/wiki/Caesar_cipher). After execution, the program displays its **options**: 1) **cipher**: prompts the user for a plaintext a cipher **key** to encrypt it; 2) **decipher**: prompts the user for a encrypted text to be decrypted and the corresponding **key**; 3) **quit**: exit the program.

## **Download**

You can download the source code [here](https://github.com/dmatavel/caesar_cipher/archive/refs/heads/main.zip) or click the "Code" button at the upper-right corner of this repository, selecting "Download Zip".

Alternatively, you can clone this repository in your machine. Simple copy and paste or write the following command in your terminal:

    cd ~/Downloads/ &&`git clone https://github.com/dmatavel/caesar_cipher.git`

It assumes that you have [Git](https://git-scm.com/) installed and a **Downloads** folder in your **Home** directory. If you face any error, check this requirements.

## Compilation and execution

caesar_cipher uses the [readline()](https://www.man7.org/linux/man-pages/man3/readline.3.html) function to receive user inputs.

To install and use the function package and libraries on a Debian-based GNU/Linux system, in case it's not installed by default, which it's very unexpected to happen, run this command in your terminal:

    sudo apt install readline-common

Install readline() development library:
    
     sudo apt install libreadline-dev

If you downloaded the zip file, extract it and enter the **caesar_cipher-main** folder. With a right click on your file browser, select the option **Open in Terminal** or something like that. If you've cloned the repository, simple go inside the program's directory. Copy and paste or write in your terminal:

    make caesar_cipher

It is expected that an executable named **caesar_cipher** to be created. After that, run the program with:

    ./caesar_cipher

## Bugs and contribution

Report bugs sending an email for matavelidanilo@gmail.com or opening an issue on the project's GitHub repository. Pull requests with fixes, features or any other upgrades are highly welcome.  

## Supported OSs

file_editor was developed and tested in a GNU/Linux Debian based system (Ubuntu 22.04 LTS). 

## CS50 students

caesar_cipher was first developed as an exercise for CS50: Introduction to Computer Science course. If you are a student at CS50: Introduction to Computer Science, please be aware that this project may have been modified in relation to the project that was submitted for evaluation during the course. You can take it as a reference for your studies, but not as a parameter for correcting your project.

## License

This program is free software: you can redistribute it and/or modify it under the terms of the GNU Lesser General Public License version 3, as published by the Free Software Foundation.

This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranties of MERCHANTABILITY, SATISFACTORY QUALITY, or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. 

You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>.
