# C - Recursion

![image](https://github.com/user-attachments/assets/07e65bd7-82e9-423d-aaf7-442e83427c60)

                                                             

## Description

This project focuses on **recursion** in C programming. Recursion is a method where a function calls itself to solve a problem. The goal of this project is to understand how recursion works, when to use it, and how to implement it effectively in different scenarios.

---


## Ressources
 Read or watch
- [0x08. Recursion, introduction](https://intranet.alxswe.com/rltoken/dzZB83Hm3lO7dScjhebAxw)
- [What on Earth is Recursion?](https://intranet.alxswe.com/rltoken/xYjKl3024oN58Bi_621_vQ)
- [C - Recursion](https://intranet.alxswe.com/rltoken/u4ojc5CZpf4qiuQvmXCiOA)
- [C Programming Tutorial 85, Recursion pt.1](https://intranet.alxswe.com/rltoken/Wv-wffgpXelN9ZTrbmiOyA)
- [C Programming Tutorial 86, Recursion pt.2](https://intranet.alxswe.com/rltoken/7GVdI-KT-M1vOIzwEjSahQ)

## Additional Resources
- [Recursion & Recursive functions in C Programming](https://intranet.alxswe.com/rltoken/TreRmmRkZ3jYdFZZW6p6vw)

## Learning Objectives
At the end of this project, you are expected to be able to [explain to anyone](https://intranet.alxswe.com/rltoken/Uip4OgfLQdGP921TAMtCHQ), without the help of Google:

## General
- What is recursion?
- How to implement recursion?
- In what situations you should implement recursion?
- In what situations you shouldn’t implement recursion?

# Requirements

## General
- Allowed editors: **vi, vim, emacs**
- All your files will be compiled on Ubuntu 20.04 LTS using **gcc**, using the options **-Wall -Werror -Wextra -pedantic -std=gnu89**
- All your files should end with a new line
- A **README.md** file, at the root of the folder of the project is mandatory
- Your code should use the **Betty** style. It will be checked using **betty-style.pl** and **betty-doc.pl**
- You are not allowed to use global variables
- No more than 5 functions per file
- You are not allowed to use the standard library. Any use of functions like **printf**, **puts**, etc… is forbidden
- You are allowed to use **_putchar**
- You don’t have to push **_putchar.c**, we will use our file. If you do it won’t be taken into account
- In the following examples, the **main.c** files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own **main.c** files at compilation. Our **main.c** files might be different from the one shown in the examples
- The prototypes of all your functions and the prototype of the function **_putchar** should be included in your header file called **main.h**
- Don’t forget to push your header file
- You are not allowed to use any kind of loops
- You are not allowed to use **static** variables

# Quiz questions
## Question #0:
What does this code print?

```
void print(int nb)
{
    printf("%d", nb);
    nb --;
    if (nb > 0) 
    {
        print(nb);
    }
}

int main(void)
{
    print(2);
    return (0);
}
```
- [ ] 210
- [x] 21
- [ ] 12
- [ ] 012

## Question #1:
What does this code print?
```
int print(int nb)
{
    if (nb < 0) 
    {
        return (0);
    }
    printf("%d", nb + print(nb - 1));
    nb --;
    return (nb);
}

int main(void)
{
    print(4);
    return (0);
}
```
- [ ] 01234568
- [x] 00246
- [ ] 64200

## Question #2:
What does this code print?
```
void print(int nb)
{
    printf("%d", nb);
    nb ++;
    if (nb < 10) 
    {
        print(nb);
    }
}

int main(void)
{
    print(4);
    return (0);
}
```
- [x] 456789
- [ ] 345678910
- [ ] 109876543
- [ ] 987654

## Question #3:
What does this code print?
```
void print(int nb)
{
    if (nb < 0) 
    {
        return;
    }
    printf("%d", nb);
    nb --;
    print(nb);
}

int main(void)
{
    print(4);
    return (0);
}
```
- [ ] 4321
- [ ] 1234
- [x] 43210
- [ ] 01234

## Question #4:
What does this code print?
```
void print(int nb)
{
    printf("%d", nb);
    -- nb;
    if (nb > 0) 
    {
        print(nb);
    }
}

int main(void)
{
    print(4);
    return (0);
}
```
- [ ] 3210
- [ ] 321
- [ ] 43210
- [x] 4321
---
# Tasks
### 0.**She locked away a secret, deep inside herself, something she once knew to be true... but chose to forget**

Write a function that prints a string, followed by a new line.
- Prototype: **void _puts_recursion(char *s)**;
***FYI***: The standard library provides a similar function: **puts**. Run **man puts** to learn more.
```
julien@ubuntu:~/0x08. Recursion$ cat 0-main.c
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    _puts_recursion("Puts with recursion");
    return (0);
}
julien@ubuntu:~/0x08. Recursion$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 0-main.c 0-puts_recursion.c -o 0-puts_recursion
julien@ubuntu:~/0x08. Recursion$ ./0-puts_recursion 
Puts with recursion
julien@ubuntu:~/0x08. Recursion$ 
```
**Repo:**
- GitHub repository: **alx-low_level_programming**
- Directory: **0x08-recursion**
- File: **0-puts_recursion.c**
---

