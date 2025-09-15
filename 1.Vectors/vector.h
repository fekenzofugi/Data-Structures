#ifndef VECTOR_H
#define VECTOR_H

typedef struct _vector {
    int *data; // Pointer to the memory to store the data
    int n; // Number of elements stored
    int capacity; // Memory Capacity
} Vector;

typedef Vector *vector_p;

vector_p create_empty_vector(int capacity);

void destroy_vector(vector_p v);

void add_element(vector_p v, int value);

void remove_element_at_index(vector_p v, int index);

int search(vector_p v, int value);

void print_vector(vector_p v);
#endif