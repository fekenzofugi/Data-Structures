#include <stdio.h>
#include <stdlib.h>
#include "vector.h"

vector_p create_empty_vector(int capacity) {
    vector_p v = malloc(sizeof(Vector));
    v->data = malloc(capacity * sizeof(int));
    v->capacity = capacity;
    v->n = 0;
    return v;
}

void destroy_vector(vector_p v) {
    free(v->data);
    free(v);
}

void add_element(vector_p v, int value) {
    v->data[v->n] = value;
    v->n+=1;
}

void remove_element_at_index(vector_p v, int index) {
    for (int i = index; i < v->n - 1; i++) {
        v[i] = v[i + 1];
    }
    v->n-=1;
}

int search(vector_p v, int value) {
    for (int i = 0; i < v->n; i++) {
        if (v->data[i] == value)
            return i;
    }
    return -1;
}

void print_vector(vector_p v) {
    for (int i = 0; i < v->n; i++) {
        printf("%d", v->data[i]);
    }
    printf("\n");
}