#ifndef VECTOR_H
#define VECTOR_H

template <typename Tr>
class Vector {
    public:
        typedef typename Tr::T T;
        typedef typename Tr::Operation Operation;

    private:
        T* data; //cantidad de elementos width*height
        int dataSize;

        int dimensions;
        int* dimensionSizes;

        Operation op;

    public:
        Vector() : data(nullptr) {};

        //dimensions: cantidad de dimensiones
        //dimensionSizes: tamaño de cada dimension
        Vector(int dimensions, int* dimensionSizes) : dimensions(dimensions), dimensionSizes(dimensionSizes) {
            // TODO
            dataSize = 1;
            for(int i=0;i<dimensions;i++)
                dataSize *= dimensionSizes[i];
            data = new T[dataSize];
        };

        void set(T datum, int* coordinates); // TODO

        T get(int* coordinates); // TODO
        ~Vector(){};
};

#endif
