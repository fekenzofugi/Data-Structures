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

After this quick overview, let's see how to implement a static vector Abstract Data Type (ADT).

# Static Vector
The code is structured as follows: 
* `vector.h`: Interface.
* `vector.c`: Implementation.
* `user.c`: Client.

Starting with the interface we have
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

void insert_element_at_position(vector_p vector, int position);

void remove_element_at_position(vector_p vector, int position);

int search_element(vector_p vector, int element);

void print_vector(vector_p vector);

#endif
```

We have the following implementation to these functions:

```c
vector_p create_vector(int n) {
    // Allocate memory for the Vector ADT
    vector_p vector = malloc(sizeof(Vector));
    // Allocate memory for the data in the vector
    (*vector).data = malloc(n * sizeof(int));
    
}

void destroy_vector(vector_p vector);

void insert_element_at_position(vector_p vector, int position);

void remove_element_at_position(vector_p vector, int position);

int search_element(vector_p vector, int element);

void print_vector(vector_p vector);
```