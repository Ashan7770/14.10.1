#include <iostream>
#include <string>
#include "Header.h"
using namespace std;
                              
int main()
{
		system("chcp 1251");
		string qq;
		string qqw;
		int ww,w;
	do{
		Branch* Root = 0;
		Branch* gg = new Branch;
		string ito[] = { "Меч","Глаз","Благо" };
		int rok = sizeof(ito) / sizeof(ito[0]);
		cout << rok << endl;
		for (int i = 0; i < rok; i++)
		{
			gg->Add(ito[i], Root);
		}
		cout << "Угадайте слова, которые есть в массиве. Но не подглядывайте)))" << endl;
		cin >> qq;
		gg->sTiis(&qq);
		gg->print(Root);
		gg->FreeTree(Root);
		cout << "Желаете еще раз угадать? (да/нет)" << endl;
		do {
			cin >> qqw;
			if (qqw == "да") {
				ww = 1;
				w = 0;
			}
			else if (qqw == "нет") {
				cout << "Досвидания." << endl;
				ww = 0;
				w = 0;
			}
			else {
				cout << "Вас понять тяжеловато...Как и делать это Д.З. Попробуйте еще раз (да/нет)" << endl;
				w = 1;
			}
		} while (w == 1);
	} while (1==ww);
	return 0;
}