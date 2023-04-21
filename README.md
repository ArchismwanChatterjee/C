
# ES-CS201/291 Programs

[![PRs Welcome](https://img.shields.io/badge/PRs-welcome-brightgreen.svg?style=flat-square)](https://makeapullrequest.com)

This repository contains programs for ES-CS201 and ES-CS291 under MAKAUT.
All programs must follow the syllabus given below (as of 2023).


## Syllabus

![App Screenshot](https://s3.us-west-2.amazonaws.com/secure.notion-static.com/bde41f5f-d10b-41f2-8416-735b617bb3f2/Untitled.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=AKIAT73L2G45EIPT3X45%2F20230325%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20230325T052245Z&X-Amz-Expires=86400&X-Amz-Signature=908c05ae113a34dabaf85bbfffa2ba2907eef391636d55ac338d69a3bfec86a1&X-Amz-SignedHeaders=host&response-content-disposition=filename%3D%22Untitled.png%22&x-id=GetObject)


## Getting started

To get a copy of these programs up and running on your local machine, simply clone this repository:
```bash
git clone https://github.com/ArchismwanChatterjee/C
```
[if you are scared of CLI don't worry we got you covered](https://www.youtube.com/watch?v=PvUexC0-D2s)
## Prerequisites

You will need the following tools installed on your system to run these programs:

* Any Code Editor you like we prefer [VS Code](https://code.visualstudio.com/download)

* setup C compiler, we prefer [MinGW](https://sourceforge.net/projects/mingw/)    

    [You can follow this tutorial to install gcc in vscode for windows](https://www.youtube.com/watch?v=Ubfgi4NoTPk)

* Lastly make sure you have prettier extension installed in vscode for formatting
    [here is how you can do it](https://www.youtube.com/watch?v=__eiQumLOEo)

    you are now ready to contribute ;)
## Contributing

- Navigate to the specified folder the format is section name and then day name
    
    (any extra programs should be written in the extra folder under the specified concept)

    Example:
    ```
     A/D1 would contain Section A Day 1 programs
    ```
-   Write the question using comment lines and then code 
    if possible display the result in comment lines.

     Example

```C
// Convert Farenheit to Celcius
#include <stdio.h>

int main()
{
    float fahrenheit, celcius;

    printf("Enter temp in farenheit\n");
    scanf("%f", &fahrenheit);

    celcius = (5.0 / 9) * (fahrenheit - 32);

    printf("The temperature in celcius is %f °", celcius);

    return 0;
}
/*
Enter temp in farenheit
32
The temperature in celcius is 0.000000
*/

```

-   Use suitable comment lines.

-   There's no restriction on your approach to solve.

-   Maintain readability(use appropriate variable names and comments)




## Documentation and Concepts
check out

[Documentation.md](https://github.com/ArchismwanChatterjee/C/blob/main/documentation.md) and [Concepts.md](https://github.com/ArchismwanChatterjee/C/blob/main/concepts.md)


