#pragma once
template <typename T>
class TestVector
{
public:
    TestVector(int size);
    ~TestVector();
    void pushBack(T& newElement);
    T& at(int position);

private:

    int mVectorSize = 0;
    int mVectorCapacity = 0;
    T* mVect = nullptr;

};


