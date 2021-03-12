# ft_printf

Recode C Standard Library function *printf()*.

Now part of my personal [libft](https://github.com/dfinnis/Libft) library, used for output and visualizers for further C projects ([Push_swap](https://github.com/dfinnis/Push_swap), [Lem_in](https://github.com/dfinnis/Lem_in), [Corewar](https://github.com/dfinnis/Corewar), & [md5](https://github.com/dfinnis/md5))

#### Final Score 112/100


## Getting Started

First clone this repo.

```git clone https://github.com/dfinnis/ft_printf.git; cd ft_printf```

Make to compile *libftprintf.a*.

```make; make clean```

Include *ft_printf.h* at the top of a C file, then you can use *ft_printf* just like *printf*.

### Example

Let's create an example *test.c* in the root of this project.

```c
#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
	ft_printf("%s, %s!\n", "Oh", "Hi!");
	printf("%s, %s!\n", "Oh", "Hi!");
	return (0);
}
```

Compile and run *test.c*.

```gcc test.c libftprintf.a -I includes -o test; ./test```

<img src="https://github.com/dfinnis/ft_printf/blob/master/img/test.png" width="70%">


## Parameters

The number of parameters is indefinite (variadic arguments were used). *ft_printf* has the following functionality:

* **Conversions:** `c`, `s`, `p`, `d`, `i`, `o`, `O`, `u`, `U`, `x`, `X`, `f`, `%%`, `b` (binary)
* **Style flags:** `#`, `0`, `-`, `+`, `space`, `*`
* **Conversion flags:** `hh`, `h`, `l`, `ll`, `L`, `z`, `j`
* Manage minimum field-width
* Manage precision



## Team

I wrote this project in a team with the wonderful [@svaskeli](https://github.com/sharvas)
