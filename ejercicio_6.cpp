#include <iostream>

using namespace std;

#include<vector>

extern "C" {
    #include <stdio.h>
}

int contar_ovejas(bool* array, int size) {
    int count = 0;
    for(int i = 0; i < size; ++i) {
        if(array[i]) {
            ++count;
        }
    }
    return count;
}

int main() {
    bool ovejas[] = {
        false, false, true, true, false, true,
        true, false, true, true, false, true,
        false, false, true, true, false, true,
        true, false, true, true, false, true,
        true, false, true, false, false, true
    };
    int size = sizeof(ovejas)/sizeof(ovejas[0]);
    printf("Hay %d ovejas presentes en el array.\n", contar_ovejas(ovejas, size));
    return 0;
}
