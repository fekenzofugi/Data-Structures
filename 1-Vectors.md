# Vectors

The ```Vector``` data structure is native in C, in the form of an array. A vector is a of a contiguous (sequential) piece of memory, used to store data.

The memory used in a vector can be allocated statically
```c 
int vector[100]; // Static
```
or dinamically
```c
int *vector = malloc(100 * sizeof(int)); // Dinamic
```

The advantage of using the vector data structure is the `O(1)` access time, using indexes.

After this quick overview, let's see how to implement a static vector Abstract Data Type (ADT). The code is structured as follows: 
* `ds.h`: Interface.
* `ds.c`: Implementation.

# Static Vector

<strong>INTERFACE:</strong>

```c 
#ifndef VECTOR_H
#define VECTOR_H

typedef struct _vector {
    int *data; // Pointer to the memory location
    int n; // Number of Elements
    int capacity; // Total Memory Allocated
} Vector;

typedef Vector *vector_p;

vector_p create_vector(int n);

void destroy_vector(vector_p vector);

void insert_element(vector_p vector, int value);

void remove_element_at_position(vector_p vector, int position);

int search_element(vector_p vector, int element);

void print_vector(vector_p vector);

#endif
```

<strong>IMPLEMENTATION:</strong>

```c
#include <stdio.h>
#include <stdlib.h>
#include "ds.h"

vector_p create_vector(int n) {
    // Allocate memory for the Vector ADT
    vector_p vector = malloc(sizeof(Vector));
    // Allocate memory for the data in the vector
    vector->data = malloc(n * sizeof(int));
    
    return vector;
}

void destroy_vector(vector_p vector) {
    free(vector->data);
    free(vector);
}

void insert_element(vector_p vector, int value) {
    vector->data[vector->n] = value;
    vector->n +=1;
}

void remove_element_at_position(vector_p vector, int position) {
    for (int i = position; i < vector->n - 1; i++) {
        vector->data[i] = vector->data[i+1];
    }
    vector->n -=1;
}

// Linear Search O(n): Because the vector is not sorted.
int search_element(vector_p vector, int element) {
    for (int i = 0; i < vector->n; i++) {
        if (vector->data[i] == element) {
            return i;
        }
    }
    return -1;
}

void print_vector(vector_p vector) {
    for (int i = 0; i < vector->n; i++) {
        printf("%d", vector->data[i]);
    }
    printf("\n");
}
```

# Static Vector Sorted
For the sorted vector, we'll use the same interface.

<strong>IMPLEMENTATION:</strong>
```c

```
