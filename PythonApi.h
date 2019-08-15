#ifndef _Python_Api_h_

#include <iostream>
using namespace std;
void console(string str1, string str2)
{
	string str3 = str1+" "+str2;
	const char *cmd = str3.c_str();
	system(cmd);
}
class PythonAPI
{
	public:
	PythonAPI(){}
	~PythonAPI(){}
	
	bool run_file(string filename)
	{
		console("python", filename);
		return true;
	}
	string execute_str(string str)
	{
		console("echo '" + str + "'|", "python"); 
		return str;
	}
};
PythonAPI papi;
#endif
