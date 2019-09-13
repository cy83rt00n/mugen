#include <iostream>
#include <string>
#include <map>
#include <iterator>
#include "HTMLTag.h"

int main(int argc, char* argv[]) 
{

	std::string msg = "Enter some text up to 254 symbols!";
	std::string inp;

	std::cout << msg << std::endl;

	std::getline(std::cin, inp);

	std::pair<std::string,std::string> attr;

	HTMLTag div  = HTMLTag("div");
	HTMLTag p = HTMLTag("p");

	p.setAttribute(std::pair<std::string,std::string>("id","p-tag-id"));
	div.setAttribute(std::pair<std::string,std::string>("class","div-tag-classname"));
	p.text(inp);
	div.text(p.markup());

	std::cout << div.markup() << std::endl;

	return 0;
	
}