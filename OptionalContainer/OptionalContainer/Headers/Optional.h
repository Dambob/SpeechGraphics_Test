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
		set = false;
	};

	Optional<T>(T v)
	{
		set = true;
		value = v;
	};

	bool isSet()
	{
		return set;
	}

private:
	bool set;
	T value;
};