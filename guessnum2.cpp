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
		cout<<endl<<"没有读者记录"<<endl;
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
		 cout << endl << "***************读者管理***************" << endl;
		 cout << "1:增加读者信息" << endl << "2:修改读者信息" << endl<< "3:删除读者信息" << endl<< "4:查找读者信息" << endl<< "5:显示所有读者" << endl<< "0:退出读者管理" << endl<< "请选择你要进行的操作:";
		 cin >> choice;
		 {
			 case1:
				 cout << "输入读者姓名:";
				 cin >> rname;
				 addreader(rname);
				 break;
			 case2:
				 cout << "输入读者编号:";
				 cin >> readerid;
				 r = search(readerid);
				 if (r = NULL)
				 {
					 cout << endl << "不存在编号为" << readerid << "的读者" << endl;
					 break;
				 }
				 cout << "输入新的读者名：";
				 cin >> rname;
				 r->setname(rname);
				 break;
			 case3:
				 cout << "输入读者编号：";
				 cin >> readerid;
				 r = search(readerid);
				 if (r == NULL)
				 {
					 cout << endl << "不存在编号为" << readerid << "的读者" << endl;
					 break;
				 }
				 r->delbook();
				 break;
			 case4:
				 cout << "读入读者编号：";
				 cin >> readerid;
				 r = search(readerid);
				 if (r == NULL)
				 {
					 cout << "读者不存在" << endl;
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
		   cout << "输入有误，请重新输入！" << endl;
		 }
	 }
}

