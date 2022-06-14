
B

fjdkfjdkfdfdf
dfldfkdfd
fdf
df
fnnfdmfd
fd
fdf
Dfi
C
C
A
B
B
B
B
dfd
f
df
df
df
df
d
f
df

fdf
dfd
f
d
f
d
f
dfd
f

df
d
fd
f
d
# Our own simple shell

This is our self owned simple shell in C language.

### About

Shell is a user interface to use the services of a computer. It can be a command-line interface –the one we will build- or graphical user interface, like regular software such as Windows Office.

### Compilation

This simple shell is compiled with:

```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
```

### Output

This program have exact same output as `sh` as well as the exact same error output. The only difference is when it prints an error, the name of the program is equivalent to `argv[0]`.

#### Example of error with `sh`:

```
$ echo "qwerty" | /bin/sh
/bin/sh: 1: qwerty: not found
$ echo "qwerty" | /bin/../bin/sh
/bin/../bin/sh: 1: qwerty: not found
$
```

#### Error with our program:

```
$ echo "qwerty" | ./hsh
./hsh: 1: qwerty: not found
$ echo "qwerty" | ./././hsh
./././hsh: 1: qwerty: not found
$
```

### Testing

#### Our shell work like this in interactive mode:

```
$ ./hsh
($) /bin/ls
hsh main.c shell.c
($)
($) exit
$
```

#### But also in non-interactive mode:

```
$ echo "/bin/ls" | ./hsh
hsh main.c shell.c test_ls_2
$
$ cat test_ls_2
/bin/ls
/bin/ls
$
$ cat test_ls_2 | ./hsh
hsh main.c shell.c test_ls_2
hsh main.c shell.c test_ls_2
$
```

### Examples

```
$ /bin/pwd
/home/vagrant/shell
```

```

```

$ Ethio
./hsh: No such file or directory

```

```
f
df
