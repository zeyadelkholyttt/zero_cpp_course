// Using online ide of C++
#include <iomanip>
#include <iostream>
#include <array>
#include <string.h>
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
	//sighned int accept both +,- sign
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
	//modifying the data 
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
	// cout << 10.5 % 5 << endl; the num must be integer to make the modulo
}
int assignment(){
/* using variable (operation)= num; 
this make you make operation with the variable on the first num on the operation
this replace variable = variable (op) num*/
// first way
	int a = 10;
	a = a *10;
	cout << a << endl;
// second way
	a = 10;
	a *= 10;
	cout << a << endl;
}
int in_de_crement(){
	// pre = do and then increment
	int num = 0;
	cout << num++ << endl;// 0 - nothing changed
	cout << num << endl;// the value increased by 1
	cout << "============" << endl;
	//post = add and then do the command
	int another_num = 0;
	cout << ++another_num << endl;// 1 , adding and then out
	// decrement
	cout << "==========" << endl;
	//use the post and pre as same as in increment
	int an_other_num = 0;
	cout << an_other_num++ << endl;
	cout << an_other_num << endl;
	cout << --an_other_num << endl;


}
int comparison_operators(){

	// this operators use for compare between to values
	/*  == equal
	    != not equal
		>  Greater than
		<  less than
		>= Greater than or equal
		<= less than or equal
		*/
	cout << (100 == 10) << endl;// 0 = False
	cout << (100 < 100) << endl;// 0 = False
	cout << (100 >= 100) << endl;// 1 = True
}
int logic_operators(){
	//this logic ops / or as i call it logic gates
	/*
	&& and
	|| or
	! not

	*/
	cout << (100 == 5 && 10 == 10) << endl;// 0 = false
		
	cout << (100 == 5 || 10 == 10) << endl;// 1 = true

	cout << !(100 == 5 || 10 == 10) << endl;// 0 = false
}
int operator_precedence(){
	// this a absolute math concept 
	/*
	to calculate you must do this in order 
	1- plus and minus
	2- multiply and divide
	=*= from lift to write if you have two have same precedence
	*/
}
int control_flow_IF(){
	/*if condition is a way to control the flow of data 
	we can use the all the operators which we learned it at past
	 */
	int age = 17;
	

	if (age > 18) {
		cout << "you aren't a kid" << endl;

	}else {
		cout << "go out you are a kid" << endl;
	}
}
int ternary_IF(){
	// using if condition in one line
	/*
	syntax :
	(condition 	?do if it true :do if it false)
	*/
	int num;
	cout << "just write any num" << endl;
	cin >> num;

	string msg = (num == 20 ? "join bro" : "go out of here");
	cout << msg << endl;
}
int nested_ternary_IF(){
	// this explain how to make a nested ternary if statement
	/*
	condition ? do if true : (another condition)
	*/
	int another_num_again;
	cout << "again write a num" << endl;
	cin >> another_num_again;
	cout << (another_num_again >= 10 ? (10 == another_num_again ? "that's good " : "i didn't have any ideas to massage but the code must be ok") : "go to ur mum" ) << endl ;
}
void odd_even_checker(){

	// this is a application done in the ep 35 in the course 
	/*
	i will done it independently before i watch the course 
	*/
	int the_num;
	cout << "enter a num to check " << endl;
	cin >> the_num;
	double the_modules = the_num % 2;
	cout << (the_modules != 1 ? "this is a even num" : "this is a odd num") << endl;
}
void find_greater(){

	// this app get 3 variables (nums) and printing the biggest one of them
	int a, b, c;
	cin >> a >> b >> c;
	if (a > b && a > c ) {
		cout << "the " << a << " is the biggest num" << endl;
	}else if (b > a && b > c)
	{
		cout << "the " << b << " is the biggest " << endl;

	}else if (c > a && c > b)
	{
		cout << "the " << c << " is the biggest" << endl;
	}else {
		cout << "plz enter a correct num" << endl;
	}
}
void calculator(){

		// this is a simple calculator 
		int num_one, num_two, op;

		cout << "enter the nums" << endl;	
		cin >> num_one >> num_two;
		cout << "enter the num of op\n 1_addition\n 2_subtraction \n 3_multiplication\n 4_dividing " << endl;
		cin >> op;
		if (op == 1) {
			cout << num_one + num_two<< endl;
		}else if (op == 2)
		{
			cout << num_one - num_two << endl;
		}else if (op == 3){
			
			cout << num_one * num_two << endl;

		}else if (op == 4){

			
			cout << num_one / num_two << endl;
		}else{
			cout << "go to your mum don't play here" << endl;
		}		
}
void _switch(){
	// this code explain the switch in cpp
	int days;
	cout << "enter the day" << endl;
	cin >> days;
	switch (days)
	{
	case 1:
		cout << "day 1 " << endl;
		break;
	case 2:
	
		cout << "day 2 " << endl;
		// without break print default before the case 2
	default:
		cout << "enter a number " << endl;
		break;
	}
	// to use switch the variable must be integer or character
	// switch are another way to make if condition
}
void switch_calculator (){
	// the course in ep 37 there are 3 apps to practice i just done one of theme if you need the 3 apps to do with your self just go to course
	int num_one, num_two, op;
	cout << "enter the nums" << endl;	
	cin >> num_one >> num_two;
	cout << "enter the num of op\n 1_addition\n 2_subtraction \n 3_multiplication\n 4_dividing " << endl;
	cin >> op;
	switch (op){

	case 1 :
		cout << num_one + num_two << endl;	
		break;
	case 2 :

		cout << num_one - num_two << endl;	
		break;
	case 3 :
	
		cout << num_one * num_two << endl;	
		break;
	case 4 :
	
		cout << num_one / num_two << endl;
		break;	
	}	
}	
void arrays() {
	//this class explain arrays
	/*
	array is a collection of elements of the same type
	place in the contiguous memory locations
	the syntax:
	* data type (name of array) [the num of items] = {i, t, e, ms};
	- we can do a array without num of arrays in the [] and compiler will add them by automaticaly
	- also we can remove the =
	* you can access the array item by using array name[index num (starts from 0)]
	* to get the memory location add & before the array
	* you can make array empty and update it later by :
	== array name [index] = the update value
	*/

	int nums[4] = {1, 2, 3, 4};
	cout << sizeof(int) << endl; //4 Bytes
	cout << sizeof(nums) << endl;//16 Bytes
	cout << nums[0] << endl;
	cout << "Location : " << &nums[2] << endl;
	nums[3] = 3;
	cout << nums[3] << endl;
}
void twod_arrays(){
	// this code explain the 3d arrays 
	// to access the array with to dimensional you need to add another [] to get the columns and rows
	// just look to syntax 
	int two_d_array[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	cout << two_d_array[0][1] << endl;
	// the values of array must be constant (value or const)
}
void _template(){
	// this is a template like array method this used to replace the c style array(last class) because c style have a lot of bugs and problems
	/*
	syntax:
	template<type, size > identifier 
	*/ 
	array<int, 4> points = {1, 2, 3, 4};
	cout << points[0] << endl;
	cout << points.size() << endl;
	points.fill(8);
	cout << points[0] << endl;
}
void array_training(){
	// this is a training for arrays
	int ans[1];
	int points =0; 
	int nums[3][3] = {
		{1, 2, 4},
		{2, 4, 16},
		{4, 4, 8}
	};
	cout << "the first sequence :" << nums[0][0] << " | " << nums[0][1] << " | ?" << endl;
	cin >>  ans[0];
	if (ans[0] == nums[0][2]){
		++points;

	}

	cout << "the second sequence :" << nums[1][0] << " | " << nums[1][1] << " | ?" << endl;
	cin >>  ans[0];
	if (ans[0] == nums[1][2]){
		++points;

	}


	cout << "the third sequence :" << nums[2][0] << " | " << nums[2][1] << " | ?" << endl;
	cin >>  ans[0];
	if (ans[0] == nums[2][2]){
		++points;

	}

	cout << "your points is : " << points << "/3"<< endl;
}
void concatenating(){
	// explaining the concatenation of strings in cpp
	char first_word[] = "Zeyad ";
	char second_word[] = "Elkholy";
	cout << first_word << second_word << endl;
	cout << strcat(first_word, second_word) << endl;
	string firstname = "zeyad ";
	string second = "elkholy";
	cout << firstname + second<< endl;
	cout << firstname.append(second) << endl;



}
void forloops(){

	// this code explain for loops 
	/*
	syntax :
	for (init; condition; update){

		the code
	}	
	*/
	for (int i = 0; i < 500; i++){
		cout << i << endl;


	}
	
}
void advanced_for(){

	// you can write the for loop in other syntax or you can modify the syntax
	// you can get rid of condition and initializer but you need to but the semicolons and but them in another place
	int nums[]= {1, 2, 3, 4, 5, 6};
	int NumsCount = sizeof(nums)/sizeof(nums[0]);
	int i = 2;
	for (;;){

		cout <<	nums[i] << endl;
		i++;
		if (i == NumsCount)
		{
			break;
		}

	}
} 
void ForTraining(){

	// this a training in for loops you can find the solution on the ep 49 but i will ans this
	int nums[]= {100, 200, 300, 400, 500, 600};
	int NumsCounter = sizeof(nums)/sizeof(nums[0]);
	// for (int i=0; i < NumsCounter; i++ ){
	// 	cout << nums[i] << endl;

	// 	i++;
	// }

	// for (int i=0; i < NumsCounter;i += 2){
	// 	cout << nums[i] << endl;

	// }

	for (int i=NumsCounter-1; i > 1;){
		cout << nums[i] << endl;
		i--;
	}
}
void NestedLoop(){

	// loop in another loop
	string products[]{"Item1", "Item2", "Item3", "Item 3amer"};
	string sizes[] = {"small", "large", "x-large"};
	for (int i=0; i < 4;i++ ){
		cout << products[i] << endl;
		for (int z=0; z <3 ; z++){
			cout << sizes[z] << endl;
		}
	}
}
void While(){

	// this code explain the loop with while 
	/*
	syntax:
	while (condition){


	}
	you can but break in any where in the while function or not (will cause infinite loop)	
	*/
	int i =0;
	while (i < 5){
		cout << i << endl;
		if (i == 3)
		{
			break;
		}
		i++;
	}
}
void DoWhile(){
	// do the code > check the condition > terminate or repeat
	/*
	syntax :
	do
	{
		(/block of code/)
	}(condition)
	*/
	int num=0;
	while (num <6){
		cout << num << endl;
		num++;
	};// stop before 6
	cout << "================\n"; 
	do 
	{
		cout << num << endl;
	}while(num < 6);//stop in 6
}
void Continue(){

	// continue = skip the code after that in this condition 
	int nums[]= {1, 2, 3, 4, 5, 6};
	for (int i =0; i < 6; i++){
		cout << "the num is : " << endl;
		if (nums[i] == 4){
			continue;
		}
		cout << nums[i] << endl;
	}

}
void LoopsTraining(){
	//some application for loops
	int nums[]= {1, 5, -3, 4, 7, -8};
	int start= 0;
	for (int i; i < 6; i++){
		int evorod= nums[i] %2 ;
		if (evorod == 0 || nums[i] > 0){
			
		}
	}

	int end = start + nums[i];
	cout << end << endl;


}
int main()
{
	LoopsTraining();	
	return 0;
}