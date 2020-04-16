![Ship$](/shellimg.jpeg) 
# Ship$: SHELLter in Place  

Year 1 - Low-level programming & Algorithm ― Linux and Unix system programming - [Holberton School](https://www.holbertonschool.com/)</br>

### Ship$

SHELLter in Place, or Ship$, is a simple command line interpreter written in C.</br>

### Deployment

This program was built during the COVID-19 pandemic & "Shelter in Place" order in California, USA.</br>

### Compilation

Ship$ is compiled this way:  </br>
`-Wall -Werror -Wextra -pedantic *.c -o hsh`</br>

### To run the shell

`./hsh`  </br>

ShiP$ can run in interactive or non-interactive mode.</br>

#### Interactive Mode

In interactive mode, run the program and wait for the `ShiP$` prompt to appear. Type commands freely, exiting with the `exit` command.</br>

#### Non-Interactive Mode

In non-interactive mode, echo your desired command and pipe it into the program like this:</br>

`echo "ls" | ./hsh`</br>

In non-interactive mode, the program exits after finishing your  command(s).</br>

### Commands

Ship$ runs executable commands in the PATH, and handles the following built-ins:</br>

-   `exit [status]`
-   `env`
-   `setenv`
-   `unsetenv`
-   `cd`

Ship$ is also built to handle:</br>

-   logical `&&` & `||`
-   comments beginning with `#`
-   commands separator `;`
-   `Ctrl-D`

### Example - Interactive Mode
`Ship$ ls` </br>
`a.out	       double_free.c	    isin_dir.c		setenv_list2.c	_strtok.c
AUTHORS        get_cmds.c	    man_1_simple_shell	setenv_list.c	whitcher.c
authors.sh     get_tokens_strtok.c  put_prompt.c	shell.h
cd.c	       helpers1.c	    README.md		shellimg.jpeg
cmd_handler.c  helpers2.c	    rem_comments.c	simple_shell.c`</br>
`Ship$`</br>

`Ship$ pwd` </br>
`/home/vagrant/simple_shell`</br>
`Ship$ cd ..`</br>
`Ship$ pwd`</br>
`/home/vagrant`</br>
`Ship$ `</br>

`Ship$ which ls`</br>
`/bin/ls` </br>
`Ship$ `</br>

`Ship$ exit`</br>
`vagrant@vagrant-ubuntu-trusty-64:~/simple_shell$ `</br>
### Example - Non-Interactive Mode
`vagrant@vagrant-ubuntu-trusty-64:~/simple_shell$ echo "ls" | ./hsh` </br>
`a.out	       double_free.c	    hsh			rem_comments.c	simple_shell.c
AUTHORS        get_cmds.c	    isin_dir.c		setenv_list2.c	_strtok.c
authors.sh     get_tokens_strtok.c  man_1_simple_shell	setenv_list.c	whitcher.c
cd.c	       helpers1.c	    put_prompt.c	shell.h
cmd_handler.c  helpers2.c	    README.md		shellimg.jpeg`</br>
`vagrant@vagrant-ubuntu-trusty-64:~/simple_shell$` </br>

### Release History

-   0.0.1 - First release - 17 Apr 2020</br>

### About

All files were created and compiled on `Ubuntu 14.04.4 LTS` using `GCC 4.8.4` with the following flags: `-Wall -Werror -Wextra -pedantic`</br>

This README was created with https://stackedit.io/app#</br>

All files made possible through the superior utility of [Vim](https://www.vim.org/).</br>


### Authors

-   Zac Woll [Github](https://github.com/zacwoll) - [Twitter](https://twitter.com/ZakWoll)</br>
-   Tabitha O'Melay [Github](https://github.com/tabbykatz) - [Twitter](https://twitter.com/tabby__katz)</br>
