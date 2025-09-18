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