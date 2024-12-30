#pragma once
#include "..\Array\array.h"

template <typename T>
class Stack {
private:
	Array<T> array;

public:
	void push(const T& val) {
		array.LF_append(val);
	}

	void pop() {
		array.L_pop();
	}

	T top() {
		return array.LF_top();
	}

	void clear() {
		array.LF_clear();
	}

	void print() {
		array.print();
	}
};
