#ifndef __STATE_H__
#define __STATE_H__

#include <string>
#include <vector>

namespace SimpleHTN
{
	typedef uint32_t Key;
	typedef uint32_t Value;

	class State
	{
	public:
		bool			GetValue(const Key key, Value& outValue) const;
		inline Value	GetValueUnsafe(const Key key) const
		{
			return _values[key];
		}

		bool			SetValue(const Key key, const Value inValue);
		inline void		SetValueUnsafe(const Key key, const Value inValue)
		{
			_values[key] = inValue;
		}

		State() : _name(""), _values() {}
		State(std::string a_name) : _name(a_name), _values() {}

		~State() {}

		inline std::string get_name() const { return _name; }
		inline void set_name(const std::string a_name) { _name = a_name; }
		void Clear() {
			_name = "";
			
			_values.clear();
		}
	protected:
		std::vector<Value> _values;
		std::string _name;
	};
}

#endif // __STATE_H__