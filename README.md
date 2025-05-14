# algorithms_and_data_structures
![build status](https://github.com/praisetompane/algorithms_and_data_structures/actions/workflows/algorithms_and_data_structures.yaml/badge.svg)

## Objectives
- Implement foundational data structures and algorithms at a lower level of the stack for educational purposes.


## Project Structure
- docs: Project documentation lives in here.
- src: Each data structure is an independent module.

## [Theory](https://github.com/praisetompane/computation_and_information/tree/main/0_theory_of_computation/4_design_and_analysis_of_algorithms/0_data_structures_design_and_analysis)

## Dependencies
- [Docker](https://docs.docker.com/get-started/)

## Setup Instructions
- The repository is configured to use [devcontainers](https://containers.dev) for development.
    - [Developing inside a Container](https://code.visualstudio.com/docs/devcontainers/containers)


## Installation

#### Clone Repository
```shell
git clone git@github.com:praisetompane/algorithms_and_data_structures.git
```

#### Build
```shell
make build
```

#### Test
```shell
make test
```

#### Install 
```
sudo make install
```

#### Uninstall
```
sudo make uninstall
```


## Usage
```C
#include "array.h"
#include <stdio.h>

int main()
{
    printf("Test creating, adding and reading from Integer Array\n");
    Array numbers = array(INT, 10);

    int number = 2;
    add(&numbers, 0, &number);

    int read_int;
    read(&numbers, 0, &read_int);
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
