# algorithms_and_data_structures
![build status](https://github.com/praise-toy-applications/algorithms-and-data-structures/actions/workflows/algorithms_and_data_structures.yaml/badge.svg)


## objectives
- implement barebones foundational data structures and algorithms at lower levels of the stack.
- aquire a deeper understanding of these constructs at an implementation level.

## theory 
- [link to the theory](https://github.com/praisetompane/computer_and_information/tree/main/0_foundations/0_theory_of_computation/3_design_and_analysis_of_algorithms)

## project structure:
- docs: project documentation lives in here.
- each datastructure is an independent module.
    - example:
        - array
        - linkedlist
        - ...

## setup instructions:
- install `gcc` or higher.
    - [gcc download](https://gcc.gnu.org/install/index.html)

- clone repo: 
```shell
git clone git@github.com:praisetompane/algorithms_and_data_structures.git
```

## build:
```shell
make build
```

## testing:
### run tests:
```shell
make test
```
## install:
```
sudo make install
```

## uninstall:
```
sudo make uninstall
```

## usage:
```C
#include "array.h"
#include <stdio.h>
#include <assert.h>

int main()
{
    printf("Test creating, adding and reading from Integer array\n");
    array numbers = new (INT, 10);
    assert(numbers.length == 0);
    
    int number = 2;
    add(&numbers, 0, &number);

    int read_int;
    read(&numbers, 0, &read_int);
    assert(read_int == number);
    printf("\n");
    
}
```
## git conventions:
- **NB:** the master is locked and all changes must come through a Pull Request.
- commit messages:
    - provide concise commit messages that describe what you have done.
        ```shell
        # example:
        git commit -m "feat(core): algorithm" -m"implement my new shiny faster algorithm"
        ```
    - screen shot of Githb view
    - references: 
        - https://www.conventionalcommits.org/en/v1.0.0/
        - https://www.freecodecamp.org/news/how-to-write-better-git-commit-messages/