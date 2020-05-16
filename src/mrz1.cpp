// Лабораторная работа №1 по дисциплине МРЗвИС
// Выполнена студентами группы 821704 БГУИР
// Гавриленко Яна Васильевна
// Ильюкевич Вадим Александрович



#include <iostream>
#include <conio.h>
#include "conveyor.h"
#include <vector>

using namespace std;


int main() {
	setlocale(LC_ALL, "Rus");
	int numPairs, first, second, count = 0;
	vector <Algor> vec;
	cout << "Количество пар чисел: "; cin >> numPairs;

	while (count != numPairs) {
		cout << "\n" << count + 1 << " пара: " << "\n";
		while (true) {
			cout << "Введите первое число: "; cin >> first;
			if (first >= 0 && first < 64) break;			
			else cout << "Некоректный ввод!" << endl;
		}
		while (true) {
			cout << "Введите второе число: "; cin >> second;
			if (second >= 0 && second < 64) break;		
			else cout << "Некоректный ввод!" << endl;
		}
		Algor pair(first, second);
		vec.push_back(pair);
		count++;
	}
	char choose;
	int counter = 1, tact = 0;
	while (true) {
		system("cls");
		for (int i = 0; i < vec.size(); i++) {
			cout << "\t" << i + 1 << " пара: ";
			vec[i].showInitialCondition();
			cout << endl;
		}
		if (numPairs <= 3) {
			cout << "\n";
			cout << endl;
			cout << " № такта  |   частичное  произведение    |             сдвиг            |        частичная сумма       |" << endl;
			cout << "__________|______________________________|______________________________|______________________________|" << endl;
		}
		if (numPairs == 1) {
			if (tact == 0) {
				cout << "       0  |        "; vec[0].showTable(0);
			}
			else if (tact > 0) {
				if (tact - 1 >= 0 && tact == numPairs) {
				cout << "       1  |        ";	
					vec[tact - 1].showVector(0); cout << "        |             -----            |             -----            | "; cout << endl;
				}
				if (tact - 2 >= 0 && tact - 1 == numPairs) {
				cout << "       2  |        ";	
					vec[tact - 2].showVector(3); cout << "        |        "; vec[tact - 2].showVector(1); cout << "        |             -----            | "; cout << endl;
				}
				if (tact - 3 >= 0 && tact - 2 == numPairs) {
					cout << "       3  |        "; 
					vec[tact - 3].showVector(6); cout << "        |        "; vec[tact - 3].showVector(4); cout << "        |        "; vec[tact - 3].showVector(2); cout << "        | "; cout << endl;
				}
				if (tact - 4 >= 0 && tact - 3 == numPairs) {
					cout << "       4  |        ";
					vec[tact - 4].showVector(9); cout << "        |        "; vec[tact - 4].showVector(7); cout << "        |        "; vec[tact - 4].showVector(5); cout << "        | "; cout << endl;
				}
				if (tact - 5 >= 0 && tact - 4 == numPairs) {
					cout << "       5  |        ";
					vec[tact - 5].showVector(12); cout << "        |        "; vec[tact - 5].showVector(10); cout << "        |        "; vec[tact - 5].showVector(8); cout << "        | "; cout << endl;
				}
				if (tact - 6 >= 0 && tact - 5 == numPairs) {
					cout << "       6  |        ";
					vec[tact - 6].showVector(15); cout << "        |        "; vec[tact - 6].showVector(13); cout << "        |        "; vec[tact - 6].showVector(11); cout << "        | "; cout << endl;
				}
				if (tact - 7 >= 0 && tact - 6 == numPairs) {
					cout << "       7  |        ";
					cout << "     -----            |        ";  vec[tact - 7].showVector(16); cout << "        |        "; vec[tact - 7].showVector(14); cout << "        | "; cout << endl;
				}
				if (tact - 8 >= 0 && tact - 7 == numPairs) {
					cout << "       8  |        ";	
					cout << "     -----            |             -----            |        "; vec[tact - 8].showVector(17); cout << "        | "; cout << endl;
				}				
			}
			cout << "\nНомер обрабатываемой пары: 1";
			cout << endl;
		}

		if (numPairs == 2) {
			if (tact == 0) {
				cout << "       0  |        "; vec[0].showTable(0);
				
			}
			else if (tact > 0) {
				if (tact - 1 >= 0 && tact + 1 == numPairs) {
					cout << "       1  |        "; 
					vec[tact - 1].showVector(0); cout << "        |             -----            |             -----            | "; cout << endl;
				}
				 if (tact - 2 >= 0 && tact == numPairs) {
					cout << "       2  |        ";
					vec[tact - 2].showVector(3); cout << "        |        "; vec[tact - 2].showVector(1); cout << "        |             -----            | "; cout << endl;
				}
				 if (tact - 3 >= 0 && tact - 1 == numPairs) {
					cout << "       3  |        ";
					vec[tact - 3].showVector(6); cout << "        |        "; vec[tact - 3].showVector(4); cout << "        |        "; vec[tact - 3].showVector(2); cout << "        | "; cout << endl;
				}
				if (tact - 4 >= 0 && tact - 2 == numPairs) {
					cout << "       4  |        "; 
					vec[tact - 4].showVector(9); cout << "        |        "; vec[tact - 4].showVector(7); cout << "        |        "; vec[tact - 4].showVector(5); cout << "        | "; cout << endl;
				}
				if (tact - 5 >= 0 && tact - 3 == numPairs) {
					cout << "       5  |        ";
					vec[tact - 5].showVector(12); cout << "        |        "; vec[tact - 5].showVector(10); cout << "        |        "; vec[tact - 5].showVector(8); cout << "        | "; cout << endl;
				}
				if (tact - 6 >= 0 && tact - 4 == numPairs) {
					cout << "       6  |        "; 
					vec[tact - 6].showVector(15); cout << "        |        "; vec[tact - 6].showVector(13); cout << "        |        "; vec[tact - 6].showVector(11); cout << "        | "; cout << endl;
				}
				if (tact - 7 >= 0 && tact - 5 == numPairs) {
					cout << "       7  |        "; 
					vec[tact - 6].showVector(0); cout << "        |        "; vec[tact - 7].showVector(16); cout << "        |        "; vec[tact - 7].showVector(14); cout << "        | "; cout << endl;
				}
				if (tact - 8 >= 0 && tact - 6 == numPairs) {
					cout << "       8  |        ";
					vec[tact - 7].showVector(3); cout << "        |        "; vec[tact - 7].showVector(1); cout << "        |        "; vec[tact - 8].showVector(17); cout << "        | "; cout << endl;
				}
				if (tact - 9 >= 0 && tact - 7 == numPairs) {
					cout << "       9  |        ";
					vec[tact - 8].showVector(6); cout << "        |        "; vec[tact - 8].showVector(4); cout << "        |        "; vec[tact - 8].showVector(2); cout << "        | "; cout << endl;
				}
				if (tact - 10 >= 0 && tact - 8 == numPairs) {
					cout << "       10 |        "; 
					vec[tact - 9].showVector(9); cout << "        |        "; vec[tact - 9].showVector(7); cout << "        |        "; vec[tact - 9].showVector(5); cout << "        | "; cout << endl;
				}
				if (tact - 11 >= 0 && tact - 9 == numPairs) {
					cout << "       11 |        "; 
					vec[tact - 10].showVector(12); cout << "        |        "; vec[tact - 10].showVector(10); cout << "        |        "; vec[tact - 10].showVector(8); cout << "        | "; cout << endl;
				}
				if (tact - 12 >= 0 && tact - 10 == numPairs) {
					cout << "       12 |        "; 
					vec[tact - 11].showVector(15); cout << "        |        "; vec[tact - 11].showVector(13); cout << "        |        "; vec[tact - 11].showVector(11); cout << "        | "; cout << endl;
				}
				if (tact - 13 >= 0 && tact - 11 == numPairs) {
					cout << "       13 |        "; 
					cout << "     -----            |        ";  vec[tact - 12].showVector(16); cout << "        |        "; vec[tact - 12].showVector(14); cout << "        | "; cout << endl;
				}
				if (tact - 14 >= 0 && tact - 12 == numPairs) {
					cout << "       14 |        "; 
					cout << "     -----            |             -----            |        "; vec[tact - 13].showVector(17); cout << "        | "; cout << endl;
				}	
			}
			cout<<endl;
			if(tact<7) cout << "Номер обрабатываемой пары: 1"; else 
				if(tact<9) cout << "Номера обрабатываемых пар: 1, 2"; else cout << "Номер обрабатываемой пары: 2"; 
			cout << endl;
		}

		if (numPairs == 3) {
			if (tact == 0) {
				cout << "       0  |        "; vec[0].showTable(0);
			}
			else if (tact > 0) {
				if (tact - 1 >= 0 && tact + 2 == numPairs) {
					cout << "       1  |        "; 
					vec[tact - 1].showVector(0); cout << "        |             -----            |             -----            | "; cout << endl;
				}
				 if (tact - 2 >= 0 && tact + 1 == numPairs) {
					cout << "       2  |        ";
					vec[tact - 2].showVector(3); cout << "        |        "; vec[tact - 2].showVector(1); cout << "        |             -----            | "; cout << endl;
				}
				 if (tact - 3 >= 0 && tact == numPairs) {
					cout << "       3  |        ";
					vec[tact - 3].showVector(6); cout << "        |        "; vec[tact - 3].showVector(4); cout << "        |        "; vec[tact - 3].showVector(2); cout << "        | "; cout << endl;
				}
				if (tact - 4 >= 0 && tact - 1 == numPairs) {
					cout << "       4  |        "; 
					vec[tact - 4].showVector(9); cout << "        |        "; vec[tact - 4].showVector(7); cout << "        |        "; vec[tact - 4].showVector(5); cout << "        | "; cout << endl;
				}
				if (tact - 5 >= 0 && tact - 2 == numPairs) {
					cout << "       5  |        ";
					vec[tact - 5].showVector(12); cout << "        |        "; vec[tact - 5].showVector(10); cout << "        |        "; vec[tact - 5].showVector(8); cout << "        | "; cout << endl;
				}
				if (tact - 6 >= 0 && tact - 3 == numPairs) {
					cout << "       6  |        "; 
					vec[tact - 6].showVector(15); cout << "        |        "; vec[tact - 6].showVector(13); cout << "        |        "; vec[tact - 6].showVector(11); cout << "        | "; cout << endl;
				}
				if (tact - 7 >= 0 && tact - 4 == numPairs) {
					cout << "       7  |        "; 
					vec[tact - 6].showVector(0); cout << "        |        "; vec[tact - 7].showVector(16); cout << "        |        "; vec[tact - 7].showVector(14); cout << "        | "; cout << endl;
				}
				if (tact - 8 >= 0 && tact - 5 == numPairs) {
					cout << "       8  |        ";
					vec[tact - 7].showVector(3); cout << "        |        "; vec[tact - 7].showVector(1); cout << "        |        "; vec[tact - 8].showVector(17); cout << "        | "; cout << endl;
				}
				if (tact - 9 >= 0 && tact - 6 == numPairs) {
					cout << "       9  |        ";
					vec[tact - 8].showVector(6); cout << "        |        "; vec[tact - 8].showVector(4); cout << "        |        "; vec[tact - 8].showVector(2); cout << "        | "; cout << endl;
				}
				if (tact - 10 >= 0 && tact - 7 == numPairs) {
					cout << "       10 |        "; 
					vec[tact - 9].showVector(9); cout << "        |        "; vec[tact - 9].showVector(7); cout << "        |        "; vec[tact - 9].showVector(5); cout << "        | "; cout << endl;
				}
				if (tact - 11 >= 0 && tact - 8 == numPairs) {
					cout << "       11 |        "; 
					vec[tact - 10].showVector(12); cout << "        |        "; vec[tact - 10].showVector(10); cout << "        |        "; vec[tact - 10].showVector(8); cout << "        | "; cout << endl;
				}
				if (tact - 12 >= 0 && tact - 9 == numPairs) {
					cout << "       12 |        "; 
					vec[tact - 11].showVector(15); cout << "        |        "; vec[tact - 11].showVector(13); cout << "        |        "; vec[tact - 11].showVector(11); cout << "        | "; cout << endl;
				}
				if (tact - 13 >= 0 && tact - 10 == numPairs) {
					cout << "       13 |        "; 
					vec[tact - 11].showVector(0); cout << "        |        "; vec[tact - 12].showVector(16); cout << "        |        "; vec[tact - 12].showVector(14); cout << "        | "; cout << endl;
				}
				if (tact - 14 >= 0 && tact - 11 == numPairs) {
					cout << "       14 |        "; 
					vec[tact - 12].showVector(3); cout << "        |        "; vec[tact - 12].showVector(1); cout << "        |        "; vec[tact - 13].showVector(17); cout << "        | "; cout << endl;
				}
				if (tact - 15 >= 0 && tact - 12 == numPairs) {
					cout << "       15 |        "; 
					vec[tact - 13].showVector(6); cout << "        |        "; vec[tact - 13].showVector(4); cout << "        |        "; vec[tact - 13].showVector(2); cout << "        | "; cout << endl;
				}
				if (tact - 16 >= 0 && tact - 13 == numPairs) {
					cout << "       16 |        "; 
					vec[tact - 14].showVector(9); cout << "        |        "; vec[tact - 14].showVector(7); cout << "        |        "; vec[tact - 14].showVector(5); cout << "        | "; cout << endl;
				}
				if (tact - 17 >= 0 && tact - 14 == numPairs) {
					cout << "       17 |        "; 
					vec[tact - 15].showVector(12); cout << "        |        "; vec[tact - 15].showVector(10); cout << "        |        "; vec[tact - 15].showVector(8); cout << "        | "; cout << endl;
				}
				if (tact - 18 >= 0 && tact - 15 == numPairs) {
					cout << "       18 |        "; 
					vec[tact - 16].showVector(15); cout << "        |        "; vec[tact - 16].showVector(13); cout << "        |        "; vec[tact - 16].showVector(11); cout << "        | "; cout << endl;
				}
				if (tact - 19 >= 0 && tact - 16 == numPairs) {
					cout << "       19 |        "; 
					cout << "     -----            |        ";  vec[tact - 17].showVector(16); cout << "        |        "; vec[tact - 17].showVector(14); cout << "        | "; cout << endl;
				}
				if (tact - 20 >= 0 && tact - 17 == numPairs) {
					cout << "       20 |        "; 
					cout << "     -----            |             -----            |        "; vec[tact - 18].showVector(17); cout << "        | "; cout << endl ;
				}				
			}
			cout<<endl;
			if(tact<7) cout << "Номер обрабатываемой пары: 1"; else 
				if(tact<9) cout << "Номера обрабатываемых пар: 1, 2"; else 
					if(tact<13) cout << "Номер обрабатываемой пары: 2"; else 
						if(tact<15) cout << "Номера обрабатываемых пар: 2, 3"; else	cout << "Номер обрабатываемой пары: 3";
			cout << endl;
		}

		if (tact == numPairs * 6 + 2) {
			cout << "Кол-во пар: " << numPairs << "\tКол-во тактов: " << tact;
			break;
		}
		tact++;
		cout << "\nСледующий такт - 1\nВсе такты - 2\nВыход из программы - 3" << endl;
		while (true) {
			choose = _getch();
			if (choose == '1') break;
			if (choose == '2') {
				while (tact != numPairs * 6 + 2) {
					tact++;
				}
				break;

			}
			if (choose == '3') exit(0);
		}
	}

	cout << "\n\n\tРезультаты вычислений:" << endl;
	for (int i = 0; i < vec.size(); i++) {
		vec[i].showResult(i);
	}
}
