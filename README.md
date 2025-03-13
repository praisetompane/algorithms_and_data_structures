# data_structures
![build status](https://github.com/praisetompane/data_structures/actions/workflows/data_structures.yaml/badge.svg)

## Objectives
- Reimplementation of foundational data structures at a lower level of the stack.
- Educational project to aquire a deeper understanding of these constructs.

## [Theory](https://github.com/praisetompane/computation_and_information/tree/main/0_theory_of_computation/4_design_and_analysis_of_algorithms/0_data_structures_design_and_analysis)

## Project Structure
- docs: project documentation lives in here.
- each data structure is an independent module.
    - example:
        - [array](./array/array.h)
        - [linkedlist](./linkedlist/linkedlist.h)
        - ...

## Dependencies
- [Docker](https://docs.docker.com/get-started/)

## Setup Instructions
- The repository is configured to use [devcontainers](https://containers.dev) for development.
    - [Developing inside a Container](https://code.visualstudio.com/docs/devcontainers/containers)


## Installation

#### Clone Repository
```shell
git clone git@github.com:praisetompane/data_structures.git
```

#### Build
```shell
make build
```

#### Test
```shell
make test
```

#### Execute Installation Script 
```
sudo make install
```

## Uninstall
```
sudo make uninstall
```


## Usage
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

## Git Conventions
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
