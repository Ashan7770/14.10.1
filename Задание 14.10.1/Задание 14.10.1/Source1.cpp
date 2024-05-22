#include <iostream>
#include "Header.h"

using namespace std;


string Branch::gTiis() {
	return t;
}

void Branch::sTiis(string* t) {
	this->t = *t;
}
void Branch::Add(string aData, Branch*& aBranch)
{
	if (!aBranch)
	{
		aBranch = new Branch;
		aBranch->TBranch = 0;
		aBranch->Data = aData;
		return;
	}
	Branch::Add(aData, aBranch->TBranch);
}

void Branch::print(Branch* aBranch)
{
	if (!aBranch)
		return;
	string ee = t;
	print(aBranch->TBranch);	
	if (ee == aBranch->Data) {
		cout << "Вы угадали!  " << endl;
	}
	else {
		cout << "Слово подобного нет!\nВот, что было:" << endl;
		cout << aBranch->Data << endl;
		return;
	}
	
}
void Branch::FreeTree(Branch* aBranch)
{
	if (!aBranch) return;
	FreeTree(aBranch->TBranch);
	delete aBranch;
	return;
}