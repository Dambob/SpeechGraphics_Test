/*
   File: Optional.h

   Description:
   Container class to support optional values.
*/

#pragma once

#include <mutex>

template <class T>
class Optional
{
public:
	Optional<T>()
	{
		hasValue = false;
		value = T();
	};

	Optional<T>(T v)
	{
		hasValue = true;
		value = v;
	};

	bool isSet()
	{
		std::scoped_lock<std::mutex> lock(accessMutex);
		return hasValue;
	};

	void set(T newValue)
	{
		std::scoped_lock<std::mutex> lock(accessMutex);
		value = newValue;
		hasValue = true;
	};

	// Return the value or, if empty, the provded "empty" value
	T get_or(T emptyValue)
	{
		std::scoped_lock<std::mutex> lock(accessMutex);
		if (hasValue)
		{
			return value;
		}
		else
		{
			return emptyValue;
		}
	};

	void clear()
	{
		std::scoped_lock<std::mutex> lock(accessMutex);
		hasValue = false;
		value = T();
	}

private:
	bool hasValue;
	T value;
	std::mutex accessMutex;
};