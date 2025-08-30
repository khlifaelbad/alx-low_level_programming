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
## 0. **She locked away a secret, deep inside herself, something she once knew to be true... but chose to forget**

Write a function that prints a string, followed by a new line.
- Prototype: **void _puts_recursion(char *s)**;
- ***FYI***: The standard library provides a similar function: **puts**. Run **man puts** to learn more.
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
## 1. **Why is it so important to dream? Because, in my dreams we are together**
Write a function that prints a string in reverse.
- Prototype: **void _print_rev_recursion(char *s)**;
```
julien@ubuntu:~/0x08. Recursion$ cat 1-main.c
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    _print_rev_recursion("\nColton Walker");
    return (0);
}
julien@ubuntu:~/0x08. Recursion$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 1-main.c 1-print_rev_recursion.c -o 1-print_rev_recursion
julien@ubuntu:~/0x08. Recursion$ ./1-print_rev_recursion 
reklaW notloC
julien@ubuntu:~/0x08. Recursion$ 
```
**Repo**
- GitHub repository: alx-low_level_programming
- Directory: 0x08-recursion
- File: 1-print_rev_recursion.c
---
## 2. **Dreams feel real while we're in them. It's only when we wake up that we realize something was actually strange**
Write a function that returns the length of a string.
- Prototype: **int _strlen_recursion(char *s);**
- ***FYI***: The standard library provides a similar function: **strlen**. Run man **strlen** to learn more.
```
julien@ubuntu:~/0x08. Recursion$ cat 2-main.c 
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;

    n = _strlen_recursion("Corbin Coleman");
    printf("%d\n", n);
    return (0);
}
julien@ubuntu:~/0x08. Recursion$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89  2-main.c 2-strlen_recursion.c -o 2-strlen_recursion
julien@ubuntu:~/0x08. Recursion$ ./2-strlen_recursion 
14
julien@ubuntu:~/0x08. Recursion$ 
```
**Repo**
- GitHub repository: **alx-low_level_programming**
- Directory: **0x08-recursion**
- File: **2-strlen_recursion.c**

---
## 3. **You mustn't be afraid to dream a little bigger, darling**
Write a function that returns the factorial of a given number.
- Prototype: **int factorial(int n);**
- If **n** is lower than **0**, the function should return **-1** to indicate an error
- Factorial **of 0 is 1**
```
julien@ubuntu:~/0x08. Recursion$ cat 3-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = factorial(1);
    printf("%d\n", r);
    r = factorial(5);
    printf("%d\n", r);
    r = factorial(10);
    printf("%d\n", r);
    r = factorial(-1024);
    printf("%d\n", r);
    return (0);
}
julien@ubuntu:~/0x08. Recursion$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-factorial.c -o 3-factorial
julien@ubuntu:~/0x08. Recursion$ ./3-factorial 
1
120
3628800
-1
julien@ubuntu:~/0x08. Recursion$
```
**Repo**
- GitHub repository: alx-low_level_programming
- Directory: 0x08-recursion
- File: 3-factorial.c
---
## 4. **Once an idea has taken hold of the brain it's almost impossible to eradicate**
Write a function that returns the value of **x** raised to the power of **y**.
- Prototype: **int _pow_recursion(int x, int y);**
- If **y** is lower than **0**, the function should return **-1**
- ***FYI***: The standard library provides a different function: pow. Run **man pow** to learn more.
```
julien@ubuntu:~/0x08. Recursion$ cat 4-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = _pow_recursion(1, 10);
    printf("%d\n", r);
    r = _pow_recursion(1024, 0);
    printf("%d\n", r);
    r = _pow_recursion(2, 16);
    printf("%d\n", r);
    r = _pow_recursion(5, 2);
    printf("%d\n", r);
    r = _pow_recursion(5, -2);
    printf("%d\n", r);
    r = _pow_recursion(-5, 3);
    printf("%d\n", r);
    return (0);
}
julien@ubuntu:~/0x08. Recursion$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 4-pow_recursion.c -o 4-pow
julien@ubuntu:~/0x08. Recursion$ ./4-pow
1
1
65536
25
-1
-125
julien@ubuntu:~/0x08. Recursion$ 
```
**Repo**
- GitHub repository: **alx-low_level_programming**
- Directory: **0x08-recursion**
- File: **4-pow_recursion.c**
---
## **5. Your subconscious is looking for the dreamer**
Write a function that returns the natural square root of a number.
- Prototype: **int _sqrt_recursion(int n);**
- If **n** does not have a natural square root, the function should return **-1**
- **FYI:** The standard library provides a different function: **sqrt.** Run man **sqrt** to learn more.
```
julien@ubuntu:~/0x08. Recursion$ cat 5-main.c 
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = _sqrt_recursion(1);
    printf("%d\n", r);
    r = _sqrt_recursion(1024);
    printf("%d\n", r);
    r = _sqrt_recursion(16);
    printf("%d\n", r);
    r = _sqrt_recursion(17);
    printf("%d\n", r);
    r = _sqrt_recursion(25);
    printf("%d\n", r);
    r = _sqrt_recursion(-1);
    printf("%d\n", r);
    return (0);
}
julien@ubuntu:~/0x08. gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 5-sqrt_recursion.c -o 5-sqrt
julien@ubuntu:~/0x08. Recursion$ ./5-sqrt 
1
32
4
-1
5
-1
julien@ubuntu:~/0x08. Recursion$ 
```
**Repo:**
- GitHub repository: **alx-low_level_programming**
- Directory: **0x08-recursion**
- File: **5-sqrt_recursion.c**
---
## **6. Inception. Is it possible?**
Write a function that returns **1** if the input integer is a **prime number**, otherwise return **0**.
- Prototype: **int is_prime_number(int n);**
```
julien@ubuntu:~/0x08. Recursion$ cat 6-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = is_prime_number(1);
    printf("%d\n", r);
    r = is_prime_number(1024);
    printf("%d\n", r);
    r = is_prime_number(16);
    printf("%d\n", r);
    r = is_prime_number(17);
    printf("%d\n", r);
    r = is_prime_number(25);
    printf("%d\n", r);
    r = is_prime_number(-1);
    printf("%d\n", r);
    r = is_prime_number(113);
    printf("%d\n", r);
    r = is_prime_number(7919);
    printf("%d\n", r);
    return (0);
}
julien@ubuntu:~/0x08. Recursion$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 6-main.c 6-is_prime_number.c -o 6-prime
julien@ubuntu:~/0x08. Recursion$ ./6-prime 
0
0
0
1
0
0
1
1
julien@ubuntu:~/0x08. Recursion$ 
```
**Repo**
- GitHub repository: **alx-low_level_programming**
- Directory: **0x08-recursion**
- File: **6-is_prime_number.c**
---
## **7. They say we only use a fraction of our brain's true potential. Now that's when we're awake. When we're asleep, we can do almost anything7.**
- Prototype: **int is_palindrome(char *s);**
- An empty string is a palindrome
```
julien@ubuntu:~/0x08. Recursion$ cat 100-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = is_palindrome("level");
    printf("%d\n", r);
    r = is_palindrome("redder");
    printf("%d\n", r);
    r = is_palindrome("test");
    printf("%d\n", r);
    r = is_palindrome("step on no pets");
    printf("%d\n", r);
    return (0);
}
julien@ubuntu:~/0x08. Recursion$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-main.c 100-is_palindrome.c -o 100-palindrome
julien@ubuntu:~/0x08. Recursion$ ./100-palindrome 
1
1
0
1
julien@ubuntu:~/0x08. Recursion$
```
**Repo**
- GitHub repository: **alx-low_level_programming**
- Directory: **0x08-recursion**
- File: **100-is_palindrome.c**
---
## **8. Inception. Now, before you bother telling me it's impossible..**
Write a function that compares two strings and returns **1** if the strings can be considered identical, otherwise return **0**.

- Prototype: int wildcmp(char *s1, char *s2);
- **s2** can contain the special character ***.**
- The special char * can replace any string (including an empty string)
```
julien@ubuntu:~/0x08. Recursion$ cat 101-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = wildcmp("main.c", "*.c");
    printf("%d\n", r);
    r = wildcmp("main.c", "m*a*i*n*.*c*");
    printf("%d\n", r);
    r = wildcmp("main.c", "main.c");
    printf("%d\n", r);
    r = wildcmp("main.c", "m*c");
    printf("%d\n", r);
    r = wildcmp("main.c", "ma********************************c");
    printf("%d\n", r);
    r = wildcmp("main.c", "*");
    printf("%d\n", r);
    r = wildcmp("main.c", "***");
    printf("%d\n", r);
    r = wildcmp("main.c", "m.*c");
    printf("%d\n", r);
    r = wildcmp("main.c", "**.*c");
    printf("%d\n", r);
    r = wildcmp("main-main.c", "ma*in.c");
    printf("%d\n", r);
    r = wildcmp("main", "main*d");
    printf("%d\n", r);
    r = wildcmp("abc", "*b");
    printf("%d\n", r);
    return (0);
}
julien@ubuntu:~/0x08. Recursion$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 101-main.c 101-wildcmp.c -o 101-wildcmp
julien@ubuntu:~/0x08. Recursion$ ./101-wildcmp 
1
1
1
1
1
1
1
0
1
1
0
0
julien@ubuntu:~/0x08. Recursion$ 
```
**Repo:**
- GitHub repository: **alx-low_level_programming**
- Directory: **0x08-recursion**
- File: **101-wildcmp.c**
---


