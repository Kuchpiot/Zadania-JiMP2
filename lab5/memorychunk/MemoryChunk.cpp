//
// Created by piotr on 28.03.17.
//

#include "MemoryChunk.h"

namespace memorychunk
{
    MemoryChunk::MemoryChunk(size_t sz)
    {
        memory_adress_ = new int8_t [sz];
    }

    int8_t* MemoryChunk::MemoryAt(size_t offset) const
    {
        return &memory_adress_[offset];
    }
    size_t MemoryChunk::ChunkSize() const
    {
        return sizeof(memory_adress_) / sizeof(int8_t);
    }

    //1. Konstruktor kopiujacy
    MemoryChunk::MemoryChunk(const MemoryChunk &mem)
    {
        size_t sz = sizeof(mem.memory_adress_);
        memory_adress_ = new int8_t[sz];
        std::copy(mem.memory_adress_, mem.memory_adress_ + sz, memory_adress_);
    }

    //2. Konstruktor przenoszacy
    MemoryChunk::MemoryChunk(MemoryChunk &&mem)
    {
        memory_adress_ = nullptr;
        std::swap(memory_adress_, mem.memory_adress_);
        delete [] &mem.memory_adress_;
    }

    //3. Operator przypisania kopiujacy
    MemoryChunk& MemoryChunk::operator=(const MemoryChunk &mem)
    {
//        if(this == &mem)
//        {
//            return mem;
//        }

        delete [] memory_adress_;

        size_t sz = sizeof(mem.memory_adress_);
        memory_adress_ = new int8_t[sz];
        std::copy(mem.memory_adress_, mem.memory_adress_ + sz, memory_adress_);
    }

    //4. Operator przypisania przenoszacy
    MemoryChunk& MemoryChunk::operator=(MemoryChunk &&mem)
    {
        if(this == &mem)
        {
            return mem;
        }

        delete [] memory_adress_;

        memory_adress_ = nullptr;
        std::swap(memory_adress_, mem.memory_adress_);
        delete [] &mem.memory_adress_;

    }

    //5. Destruktor
    MemoryChunk::~MemoryChunk()
    {
        memory_adress_ = nullptr;
        delete [] memory_adress_;
    }
}