 #include <iostream>

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "Address str - " << &str << std::endl;
	std::cout << "Address strPTR - " << stringPTR << std::endl;
	std::cout << "Address strREF - " << &stringREF << std::endl << std::endl;
	
	std::cout << "Str with ptr - " << *stringPTR << std::endl;
	std::cout << "Str with ref - " << stringREF << std::endl;

	return (0);
}
