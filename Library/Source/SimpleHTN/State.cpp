#include "SimpleHTN/State.h"

using namespace SimpleHTN;

bool State::GetValue(const Key key, Value& outValue) const
{
	if (key < _values.size())
	{
		outValue = _values[key];
		return true;
	}

	return false;
}

bool State::SetValue(const Key key, const Value inValue)
{
	if (key < _values.size())
	{
		_values[key] = inValue;
		return true;
	}

	return false;
}