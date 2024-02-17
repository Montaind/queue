#pragma once
#include <iostream>

template<typename T>
class Queue {
public:
	Queue() : start(-1), end(-1) {}
	~Queue() {
		delete[] a;
	}
	void add(T data) {
		if (end + 1 > count - 1) {
			if (start == -1 && end == -1) {
				std::cout << "Queue empty" << "\n";
			}
		}
	}
private:
	T* a = new T[10];
	int start;
	int end;
	int count = 10;
};