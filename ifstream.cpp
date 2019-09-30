void blankspace()
{
	ifstream fin;
	fin.open("out.txt");
	char ch;
	int count=0;
	while(!fin.eof())
	{
		fin.get(ch);
		if(ch==' ')
			count++;
	}
	cout<<"Number of blank spaces in file are "<<count;
	fin.close();
}
