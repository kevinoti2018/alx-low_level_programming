# C - Malloc Free :page_with_curl: 0x0B-malloc_free
## About this project:
In this project i learnt and practiced;
- What is the difference between automatic and dynamic allocation
- What is  and               total        used        free      shared  buff/cache   available
Mem:       16095688     4594112     3833884        4188     7667692    11173752
Swap:       8388604         512     8388092 and how to use them
- Why and when use 
- How to use  to check for memory leak
## Tasks file description:
  * [main.h](./main.h): Header file containing prototypes for all functions written in this project.

  * [0-create_array.c](./0-create_array.c): C function that returns a pointer to a
  newly-allocated space in memory containing an array of characters.
    * The array of characters is initialized to the parameter .
    * If the function fails or receives  equal to  - returns .

  * [1-strdup.c](./1-strdup.c): C function that returns a pointer to a newly-allocated space
  in memory containing a copy of the string passed as parameter.
    * Returns a pointer to a new string which is a duplicate of the string .
    * Memory for the new string is obtained with  and can be freed with               total        used        free      shared  buff/cache   available
Mem:       16095688     4594324     3832104        4188     7669260    11173424
Swap:       8388604         512     8388092.
    * If  is  or insufficient memory was available - returns .

  * [2-str_concat.c](./2-str_concat.c): C function that returns a pointer to a
  newly-allocated space in memory containing the concatenation of two strings passed as
  parameters.
    * The returned pointer contains the contents of  followed by  and is
    null-terminated.
    * The function treats  as an empty string.
    * If the function fails - returns .

  * [3-alloc_grid.c](./3-alloc_grid.c): C function that returns a
  pointer to a newly-allocated space in memory containing a two-dimensional array of integers.
    * Each element of the two-dimensional array is initialized to .
    * If the function fails or either of  or  is
     or negative - returns .

  * [4-free_grid.c](./4-free_grid.c): C function that frees a two-dimensional array previsouly
  created by the  function defined in .
    * The program does not crash upon receiving invalid two-dimensional arrays.

  * [100-argstostr.c](./100-argstostr.c): C function that returns a pointer to a
  newly-allocated space in memory containing the concatenation of all the arguments of the
  program.
    * Each argument is followed by a  in the new string.
    * If , , or the function fails - returns .

  * [101-strtow.c](./101-strtow.c): C function that splits a string into words.
    * Returns a pointer to a newly-allocated space in memory containing
    an array of strings (words).
    * Each element of the array of strings contains a single word, null-terminated.
    * The last element of the returned array is .
    * Words are separated by spaces.
    * If , , or the function fails - returns .
