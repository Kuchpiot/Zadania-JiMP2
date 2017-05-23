#include "Creator.h"

static T* Product::Create()
{
    return new T();
}
