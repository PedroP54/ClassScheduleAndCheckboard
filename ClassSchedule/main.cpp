/*
Pedro Aragon
C++ Fall 2022
Due: Sep 14, 2022
Lab 2 Exploring Output
This lab is to show our ability to creat a class schedule and creating a checkboard
*/
#include <iostream>
#include <string>

void OutputHeader();
const std::string m = "Monday";
const std::string t = "Tuesday";
const std::string w = "Wednesday";
const std::string x = "Thursday";
const std::string f = "Friday";
const std::string c = "Chemestry 165";
const std::string z = "C++ 162";
const std::string e = "Engineering Problems 180";
const std::string C = "Calculus II 216";
const std::string eam = "8:00";
const std::string et = "8:20";
const std::string T = "10:00";
const std::string tw = "12:00";
const std::string s = "\t";
const std::string p = "  *  *  *  *";
const std::string P = "*  *  *  *";
int main()
{

	OutputHeader();
	std::cout << std::endl << m << s << s << eam << s << c;
	std::cout << std::endl << m << s << s << T << s << z;
	std::cout << std::endl << t << s << s << et << s << e;
	std::cout << std::endl << t << s << s << T << s << z;
	std::cout << std::endl << t << s << s << tw << s << C;
	std::cout << std::endl << w << s << eam << s << c;
	std::cout << std::endl << w << s << T << s << z;
	std::cout << std::endl << w << s << tw << s << C;
	std::cout << std::endl << x << s << et << s << e;
	std::cout << std::endl << x << s << T << s << z;
	std::cout << std::endl << x << s << tw << s << C;
	std::cout << std::endl << f << s << s << eam << s << c;
	std::cout << std::endl << f << s << s << T << s << z;
	std::cout << std::endl << f << s << s << tw << s << C;
	/*I did my class schedule for Fall of 2022 by assigning letters to diferrent words and times, to be able to understand the use of a string and optimize and simplify my work 
	*/
	std::cout << std::endl << p;
	std::cout << std::endl << P;
	std::cout << std::endl << p;
	std::cout << std::endl << P;
	std::cout << std::endl << p;
	std::cout << std::endl << P;
	std::cout << std::endl << p;
	std::cout << std::endl << P;
	/* On this part I did a checkboar that was really easy to do, the only toruble that I encounter was when I used the shortcout for Tab, some starts were aline*/
	return 0;
}

void OutputHeader()
{
	std::cout << "Class Schedule and Checbkoard";
}
