#pragma once
#include <cassert>
#include <iostream>
template <typename T>

class TestVector
{
public:
    TestVector(int size);
    ~TestVector();
    void pushBack(const T& newElement);
    const T& at(int position);

private:

    int mVectorSize = 0;
    int mVectorCapacity = 0;
    T* mVect = nullptr;

};


template<typename T>
TestVector<T>::TestVector(int size) : mVectorSize{ size }, mVectorCapacity{size}
{
	assert(size > 0);
	mVect = new T[size];
}

template<typename T>

TestVector<T>::~TestVector()
{
	delete[] mVect;
}

template<typename T>
void TestVector<T>::pushBack(const T& newElement)
{
	if (mVectorSize == mVectorCapacity)
	{
		mVectorCapacity *= 2;
		T* temporalVect = new T[mVectorCapacity];
		for (size_t i = 0; i < mVectorSize - 1; i++)
		{
			temporalVect[i] = mVect[i];
		}
		delete[] mVect;
		mVect = temporalVect;
		
	}
		mVect[mVectorSize] = newElement;
		std::cout << "\n" <<"pushback"<< "\n";
		++mVectorSize;
		std::cout << mVect[mVectorSize];
}

template<typename T>

const T& TestVector<T>::at(int position)
{
	std::cout << "\n";
	std::cout << mVect[0] << "\n";
	assert(mVectorSize > 0 && (position - 1) < mVectorSize);
	return mVect[position-1];

}
