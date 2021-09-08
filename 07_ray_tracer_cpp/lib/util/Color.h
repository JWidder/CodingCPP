#pragma once

#define VALUE_RED 0
#define VALUE_GREEN 1
#define VALUE_BLUE 2

namespace util
{
	class Color {
	private:
		double value[3];
	public:
		Color() {
			value[VALUE_RED] = 1.0;
			value[VALUE_GREEN] = 1.0;
			value[VALUE_BLUE] = 1.0;
		}
	};
}