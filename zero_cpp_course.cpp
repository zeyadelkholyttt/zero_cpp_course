// Using online ide of C++
#include <iomanip>
#include <iostream>
using namespace std;
int Escape_sec(){
	//this code explain escape sequences
	cout << "line1 \n";
	// this escape sec make a new line
	cout << "line2 \\\n";
	// this escape sec make a backslash
	cout << "line\"3\"\n";
	// this escape sec make a "
	cout << "line\t4\n";
	// this escape sec make tape
	cout <<"line\b5\n";
	// line make a back space. output= lin 5
	cout << "line1\rline6\n";
	// the escape sec make a curser back to first and overwrite the txt
	cout << "this is a line bro";
	// this escape sec make a alert
	return 0;
}

int tsk_tagecalc() {
	// this is a code to convert a age in years to days,hours,min and sec
	/*int age;
	cin >> age;
	int age_days = age * 365;
	int age_hours = age_days * 24;
	int age_min = age_hours * 60;
	int age_seconds = age_min * 60;
	cout << age_days << " day\n";
	cout << age_hours << " hours\n";
	cout << age_min << " minates\n";
	cout << age_seconds << " seconds\n";
*/	
	
	return 0;
}
int data_types(){
	//this fucntion will explain the data types
	// this is the differance between data size "sizeof give the size of data in memory"
	int hi=17;
	string str = "this is string";
	bool status = true;
	//cout << sizeof(hi) << "\n";
	//cout << sizeof(str) << "\n";
	//cout << sizeof(status) << "\n";
	cout << setprecision(13);
	float f1 = 10.1234657891;
	cout << f1 << "\n";

	double dob = 10.1234567981;
	cout << dob << "\n";
	//from that we know that the flout only can contain 7 degits after the flout point (.)
	auto num =10;
	cout << num << "\n";
	//this detect function (auto) detect the data type automaticly with intionlaizer value
	int nums = 100;
	cout << &nums;
	// this code (variable with & in start)
	return 0;
}
int tsk_unitcoverter(){
	int kb;
	cout << "enter the data size in kb : ";
	cin >> kb;
	int bytes = kb * 1024;
	int bits = bytes *8;
	cout << "\n" << kb << " kilobyte = " << bytes <<" byte\n";
	
	cout << bytes << " byte = " << bits<<" bit\n";
	return 0;
}
int tsk_asciiconverter(){
		
	// this is a small app to convert ascii to characters and the inverse
	int choose;
	cout << "for ascii value to char choose 1 for char to ascii value choose 2" << endl;
	cin >> choose;
	if (choose == 1)
	{
		char input;
		cout << "enter ur char value : ";
		cin >> input;
		cout << "ur ascii is : ";
		cout << int(input);
	}else if (choose == 2)
	{
		int input;
		cout << "enter ur ascii value : ";
		cin >> input;
		cout << "ur char is : ";
		cout << char(input);
	}
	
	
	return 0;
}
int typedata_modifiers(){
	//sighned int accept both +,- sighn
	signed int negative = -1;
	cout << negative << endl;
	// this code make a problem
	unsigned int nga = -1;
	cout << nga << endl;
	// u can change the name of data type
	using hibro = int ;
	hibro hello = 555;
	cout << hello << endl;
	// or we can use typedef to make the same
	typedef long long int bignum;
	bignum broo = 2;
	cout << broo << endl;
	//modifaing the data 
	// u can change the size of int to make it bigger or make it smaller by using long and short
	short shrt = 1;
	cout << sizeof(shrt) << endl;
	long lng = 1;
	cout << sizeof(lng) << endl;
	long long llng ;
	cout << sizeof(lng) << endl;


}
int type_casting(){
	//type casting function like 
	int a = 1;
	double b = 1.5;
	cout << a + int(b) << endl;
	cout << sizeof(a + int(b)) << endl;

	// type casting normal method
	
	cout << a + (int)b << endl;
	cout << sizeof(a + (int)b) << endl;
	
}
int ops(){


	//modulo ====> reminder after division (%)
	cout << 10 % 5 << endl;
	cout << 11 % 5 << endl;
	// cout << 10.5 % 5 << endl; the num must be intager to make the modulo
}
int assignment(){
/* using varialbe (operation)= num; 
this make you make operation with the variable on the first num on the operation
this replace varialbe = variable (op) num*/
// first way
	int a = 10;
	a = a *10;
	cout << a << endl;
// second way
	a = 10;
	a *= 10;
	cout << a << endl;
}
int main()
{
	assignment();	
	return 0;
}