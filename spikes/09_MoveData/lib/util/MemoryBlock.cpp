#include "MemoryBlock.h"

// Destructor.
MemoryBlock::~MemoryBlock()
{
    std::cout << "In ~MemoryBlock(). length = "
        << _length << ".";

    if (_data != nullptr)
    {
        std::cout << " Deleting resource.";
        // Delete the resource.
        delete[] _data;
    }

    std::cout << std::endl;
}

MemoryBlock::MemoryBlock(const MemoryBlock& other)
    : _length(other._length)
    , _data(new int[other._length])
{
    std::cout << "In MemoryBlock(const MemoryBlock&). length = "
        << other._length << ". Copying resource." << std::endl;

    std::copy(other._data, other._data + _length, _data);
}

MemoryBlock& MemoryBlock::MemoryBlock::operator=(const MemoryBlock& other)
{
    std::cout << "In operator=(const MemoryBlock&). length = "
        << other._length << ". Copying resource." << std::endl;

    if (this != &other)
    {
        // Free the existing resource.
        delete[] _data;

        _length = other._length;
        _data = new int[_length];
        std::copy(other._data, other._data + _length, _data);
    }
    return *this;
}

size_t MemoryBlock::Length() const
{
    return _length;
}


// Move constructor.
MemoryBlock::MemoryBlock(MemoryBlock&& other) noexcept
    : _data(nullptr)
    , _length(0)
{
    std::cout << "In MemoryBlock(MemoryBlock&&). length = "
        << other._length << ". Moving resource." << std::endl;

    // Copy the data pointer and its length from the
    // source object.
    _data = other._data;
    _length = other._length;

    // Release the data pointer from the source object so that
    // the destructor does not free the memory multiple times.
    other._data = nullptr;
    other._length = 0;
}

// Move assignment operator.
MemoryBlock& MemoryBlock::operator=(MemoryBlock&& other) noexcept
{
    std::cout << "In operator=(MemoryBlock&&). length = "
        << other._length << "." << std::endl;

    if (this != &other)
    {
        // Free the existing resource.
        delete[] _data;

        // Copy the data pointer and its length from the
        // source object.
        _data = other._data;
        _length = other._length;

        // Release the data pointer from the source object so that
        // the destructor does not free the memory multiple times.
        other._data = nullptr;
        other._length = 0;
    }
    return *this;
}

