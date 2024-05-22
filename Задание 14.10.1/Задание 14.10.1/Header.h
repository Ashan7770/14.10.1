#pragma once
using namespace std;
struct Branch
{
	string Data;
	Branch* TBranch;
	void sTiis(string* t);
	string gTiis();
	void print(Branch* aBranch);
	void FreeTree(Branch* aBranch);
	void Add(string aData, Branch*& aBranch);
private:
	string t;
};
