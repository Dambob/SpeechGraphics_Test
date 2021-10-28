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
		return hasValue;
	};

	void set(T newValue)
	{
		value = newValue;
		hasValue = true;
	};

	// Return the value or, if empty, the provded "empty" value
	T get_or(T emptyValue)
	{
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
		hasValue = false;
		value = T();
	}

private:
	bool hasValue;
	T value;
};