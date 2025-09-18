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