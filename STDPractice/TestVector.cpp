#include "TestVector.h"



template<typename T>
 TestVector<T>::TestVector(int size): mVectorSize{size}
{
	 assert(size > 0);
	 mVect = new T[size];
}

template<typename T>

TestVector<T>::~TestVector()
{
	delete[] vect;
}

template<typename T>
void TestVector<T>::pushBack(T& newElement)
{
	if (mVectorSize == mVectorCapacity) 
	{
		T* temporalVect = mVect;
		mVect = new T[mVectorSize * 2];
		for (size_t i = 0; i < mVectorSize-1; i++)
		{
			*mVect[i] = *temporalVect;
			++temporalVect;

		}
		delete[] temporalVect;
		*mVect[mVectorSize] = newElement;
		++mVectorSize;
		mVectorCapacity *= 2;
	}
	else
	{
		*mVect[mVectorSize] = newElement;
	}
}

template<typename T>

T& TestVector<T>::at(int position)
{
	asert(mVectorSize > 0 && position - 1 < mVectorSize);
	return *(mVect+ position)
	
}
