#include <stdio.h>
#include <stdlib.h>
#include "ds.h"

int main() {
    // Test Data Structure
    vector_p vector = create_vector(100);

    insert_element(vector, 10);
    
    print_vector(vector);

    destroy_vector(vector);
}