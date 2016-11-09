#include "Document_INFO.h"

/*����ID  ������  ��������*/
void Document_Info::Set_Document_Info(string &str, int length, int count)
{
	pair<map<string, vector<int>>::iterator, bool> pr;
	
	vector<int> parameter;
	parameter.push_back(count);
	parameter.push_back(length);

	pr = doc_info.insert(pair<string, vector<int>>(str, parameter));
}

/*Doc_dat.txt*/
void Document_Info::Get_Document_Info()
{
	int count = 1;
	file.open("doc_dat.txt");

	file << "����ID\t\t\t������\t\t��������\n\n";

	for (iter = doc_info.begin(); iter != doc_info.end(); ++iter)
	{
		file << (iter->second)[0] << "\t\t" << iter->first  << "\t\t" << (iter->second)[1];
		file << "\n";
	}

	file.close();
}

