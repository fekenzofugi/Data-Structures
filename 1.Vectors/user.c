#include "vector.h"
#include <stdio.h>


int main() {
    vector_p v = create_empty_vector(10);
    add_element(v, 10);
    print_vector(v);
    return 0;
}