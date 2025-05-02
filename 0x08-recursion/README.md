# 0x08. C - Recursion

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
