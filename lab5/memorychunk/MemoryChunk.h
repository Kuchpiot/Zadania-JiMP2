//
// Created by piotr on 28.03.17.
//

#ifndef JIMP_EXERCISES_MEMORYCHUNK_H
#define JIMP_EXERCISES_MEMORYCHUNK_H

#include <cstdint>
#include <algorithm>

namespace memorychunk
{
    class MemoryChunk
    {
    public:
        //Rule of five
        //1. Konstruktor kopiujacy
        MemoryChunk(const MemoryChunk &mem);

        //2. Konstruktor przenoszacy
        MemoryChunk(MemoryChunk &&mem);

        //3. Operator przypisania kopiujacy
        MemoryChunk &operator=(const MemoryChunk &mem);

        //4. Operator przypisania przenoszacy
        MemoryChunk &operator=(MemoryChunk &&mem);

        //5. Destruktor
        ~MemoryChunk();

        MemoryChunk(size_t sz);
        int8_t *MemoryAt(size_t offset) const;
        size_t ChunkSize() const;

    private:
        int8_t *memory_adress_;
    };
}

#endif //JIMP_EXERCISES_MEMORYCHUNK_H
