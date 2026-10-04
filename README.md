# Sorting algorithms in C

Holberton School coursework implementing four sorting algorithms. This repository demonstrates array operations, doubly linked lists, pointer manipulation, and Big O analysis.

| Algorithm | Source | Data structure | Best / average / worst time |
| --- | --- | --- | --- |
| Bubble sort | `0-bubble_sort.c` | Integer array | O(n) / O(n²) / O(n²) |
| Insertion sort | `1-insertion_sort_list.c` | Doubly linked list | O(n) / O(n²) / O(n²) |
| Selection sort | `2-selection_sort.c` | Integer array | O(n²) / O(n²) / O(n²) |
| Quick sort | `3-quick_sort.c` | Integer array, Lomuto partition | O(n log n) / O(n log n) / O(n²) |

The numbered `*-O` files record the complexity answers for the coursework. The algorithms print the array or list after swaps so their steps can be inspected.

## Build the examples

Requirements: GCC and a Linux/POSIX terminal. Each numbered `*-main.c` is a separate demonstration program; compile one at a time.

```bash
mkdir -p build
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 0-main.c 0-bubble_sort.c print_array.c -o build/bubble
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 1-main.c 1-insertion_sort_list.c print_list.c -o build/insertion
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 2-main.c 2-selection_sort.c print_array.c -o build/selection
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 3-main.c 3-quick_sort.c print_array.c -o build/quick
./build/bubble
./build/insertion
./build/selection
./build/quick
```

Each demonstration finishes with the input values in ascending order. The `*-main.c` files are coursework examples, not a comprehensive automated test suite.

## Files

- `sort.h`: function declarations and linked-list structure.
- `print_array.c`, `print_list.c`: display helpers.
- Numbered algorithm sources: implementations.
- Numbered main files: example inputs and execution.

Generated executables and editor backups are excluded from version control. This repository is an educational algorithms project.

[Gerald Mulero (@Gerald219)](https://github.com/Gerald219)
