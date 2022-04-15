#pragma once

#include <iostream>

class MemoryBlock
{
public:

    // Simple constructor that initializes the resource.
    explicit MemoryBlock(size_t length)
        : _length(length)
        , _data(new int[length])
    {
        std::cout << "In MemoryBlock(size_t). length = "
            << _length << "." << std::endl;
    }

    ~MemoryBlock();

    // Copy constructor.
    MemoryBlock(const MemoryBlock& other);

    // Copy assignment operator.
    MemoryBlock& operator=(const MemoryBlock& other);

    // Retrieves the length of the data resource.
    size_t Length() const;

    // Move constructor.
    MemoryBlock(MemoryBlock&& other) noexcept;

    // Move assignment operator.
    MemoryBlock& operator=(MemoryBlock&& other) noexcept;

private:
    size_t _length; // The length of the resource.
    int* _data; // The resource.
};