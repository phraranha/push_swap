# Push Swap

## Overview
The `push_swap` project is a sorting algorithm challenge using a stack-based approach, intended to sort data with minimal operations. This program takes a sequence of numbers as input, stores them in a stack, and sorts them by pushing and popping values between two stacks (`a` and `b`) using a limited set of operations.

## Features
- **Stack-based sorting:** Sorts numbers using two stacks (`a` and `b`) with limited operations.
- **Optimized for specific cases:** Includes specialized handling for lists of 3 and 5 numbers to minimize the number of operations.
- **Radix sort for larger lists:** Uses radix sort to efficiently sort large lists with minimal operations.
- **Detection of duplicates:** Ensures that input data contains no duplicate numbers.
- **Error handling:** Validates inputs, supports large numbers within integer limits, and gracefully handles incorrect data.

## Usage

### Requirements
- This project is written in C and requires `gcc` or another C compiler to build.

### Building the Project
Compile the program using `make`:
```bash
make
```

### Running the Program
To use `push_swap`, run the executable with a sequence of numbers:
```bash
./push_swap 4 67 3 87 23
```

### Available Operations
The program uses a predefined set of operations to sort:
- `sa`, `sb`, `ss`: Swap the first two elements of stack `a` or `b`, or both (`ss`).
- `pa`, `pb`: Push the top element from stack `a` to `b`, or vice versa.
- `ra`, `rb`, `rr`: Rotate stack `a` or `b` upwards, or both (`rr`).
- `rra`, `rrb`, `rrr`: Rotate stack `a` or `b` downwards, or both (`rrr`).

### Example
```bash
./push_swap 3 2 5 1 4
```
Output will be a sequence of operations that sort the stack.

## Code Structure

- **Vector Operations** (`ft_vector_*.c`): Custom dynamic array (vector) implementation to manage stack data.
- **Sorting Algorithms**:
  - **sort_three**: Optimized sorting for 3 numbers.
  - **sort_five**: Optimized sorting for up to 5 numbers.
  - **radix_sort**: Efficient sorting for larger lists using radix sort.
- **Utility Functions**:
  - `is_digit`, `is_sign`, `arg_is_number`: Input validation helpers.
  - `ft_check_double`: Checks for duplicate numbers in the input.
  - `first_confirmed_ordered`: Checks if the array is already sorted.
  - `biggest_finder`, `smallest_finder`: Find maximum and minimum values in a stack.

## Error Handling
The program handles several error cases:
- **Invalid input:** If any argument is not a valid integer, it outputs "Error" and exits.
- **Duplicate values:** If there are duplicate numbers, it outputs "Error" and exits.
- **Out of integer bounds:** If a number is outside the range of a 32-bit signed integer, it outputs "Error" and exits.

