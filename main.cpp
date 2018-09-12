#include <cstdlib>
#include <iostream>

#include "vector.h"

using namespace std;

template <typename T>
struct Dimensions {
      // sizes : tamaño de cada diemnsion
      // coordinates: coordenadas
      // dimensions: cantidad de dimensiones
    int operator()(int* coordinates, int* sizes, int dimensions) {
        // TODO
        int position = 0;
        for(int i=dimensions-1;i>=0;--i){
            position *= sizes[i];
            position += coordinates[i];
        }
        return position;
    }
};

struct Integer {
       typedef int T;
       typedef Dimensions<T> Operation;
};

int main(int argc, char *argv[]) {
    int dimsz[3] = {2,2,2};
    Vector<Integer> v(3, dimsz);
    // cout<<v({1,0,1},dimsz,3);
    system("pause");
    return EXIT_SUCCESS;
}
