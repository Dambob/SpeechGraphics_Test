/*
   File: Optional.h

   Description:
   Container class to support optional values.
*/

#pragma once

template <class T>
class Optional
{
public:
	Optional<T>()
	{
		isSet = false;
	};

	Optional<T>(T v)
	{
		isSet = false;
		value = v;
	};

private:
	bool isSet;
	T value;
};