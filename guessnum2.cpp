#include"stdio.h"
R_Data::R_Data()
{
	Reader s;
	top = 0;
	fstream file("reader.txt", ios::in);
	while (1)
	{
		file.read((char *)&s, sizeof(s));
		if (!file)break;
		top++;
		read[top] = s;
	}
	maxid = read[top].getid();
	file.close();
}
int R_Data::addreader(char *na)
{
	top++;
	maxid++;
	read[top].addreader(maxid, na);
	return 1;
}
Reader *R_Data::search(int readerid)
{
	for (int i = 1; i <= top; i++)
		if (read[i].getid() == readerid && read[i].gettag() == 0)
			return &(read[i]);
	return NULL;
}
void R_Data::show()
{
	if (top==0)
	{
		cout<<endl<<"û�ж��߼�¼"<<endl;
		return;
	}
	for (int i = 1; i <= top; i++)
		read[i].show();
}
void R_Data::readerdata()
{
	char choice = 1;
	 char rname[20];
	 int readerid;

	 Reader *r;
	 while (choice != 0)
	 {
		 cout << endl << "***************���߹���***************" << endl;
		 cout << "1:���Ӷ�����Ϣ" << endl << "2:�޸Ķ�����Ϣ" << endl<< "3:ɾ��������Ϣ" << endl<< "4:���Ҷ�����Ϣ" << endl<< "5:��ʾ���ж���" << endl<< "0:�˳����߹���" << endl<< "��ѡ����Ҫ���еĲ���:";
		 cin >> choice;
		 {
			 case1:
				 cout << "�����������:";
				 cin >> rname;
				 addreader(rname);
				 break;
			 case2:
				 cout << "������߱��:";
				 cin >> readerid;
				 r = search(readerid);
				 if (r = NULL)
				 {
					 cout << endl << "�����ڱ��Ϊ" << readerid << "�Ķ���" << endl;
					 break;
				 }
				 cout << "�����µĶ�������";
				 cin >> rname;
				 r->setname(rname);
				 break;
			 case3:
				 cout << "������߱�ţ�";
				 cin >> readerid;
				 r = search(readerid);
				 if (r == NULL)
				 {
					 cout << endl << "�����ڱ��Ϊ" << readerid << "�Ķ���" << endl;
					 break;
				 }
				 r->delbook();
				 break;
			 case4:
				 cout << "������߱�ţ�";
				 cin >> readerid;
				 r = search(readerid);
				 if (r == NULL)
				 {
					 cout << "���߲�����" << endl;
					 break;
				 }
				 r->show();
				 break;
			 case5:
				 show();
				 break;
			 case0:
				 break;
			 default:
		   cout << "�����������������룡" << endl;
		 }
	 }
}

