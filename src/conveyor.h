// Лабораторная работа №1 по дисциплине МРЗвИС
// Выполнена студентами группы 821704 БГУИР
// Гавриленко Яна Васильевна
// Ильюкевич Вадим Александрович


#include <iostream>
#include <vector>
#include <iomanip>
#include <math.h>

using namespace std;

class Algor {
private:
	struct container { bool arr[12]; }; //в классе есть вектор с контейнерами, контейнеры это 4-х разрядное чмсло
	vector<container> vect;

	int firstN;
	int secondN;
	int Result;
	bool firstNumber[6];
	bool secondNumber[6];
public:
	void setVectValue();
	void additional(bool[12], int);
	void rightShift(bool[12]);
	void showVector(int);
	void push(bool[12]);
	void showInitialCondition();
	void showFirst();
	void showSecond();
	void showTable(int);
	void setResult();
	void showResult(int);
	Algor() {
		for (int i = 0; i < 6; i++) {
			firstNumber[i] = 0;
			secondNumber[i] = 0;
		}
		firstN = 0;
		secondN = 0;
	};
	Algor(int firstNum, int secondNum) {
		firstN = firstNum;
		secondN = secondNum;
		for (int i = 5; i >= 0; i--) {
			firstNumber[i] = firstNum % 2;
			firstNum /= 2;
			secondNumber[i] = secondNum % 2;
			secondNum /= 2;
		}
		setVectValue();
		setResult();
	};
};

