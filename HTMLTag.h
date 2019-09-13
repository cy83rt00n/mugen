#include <string>
#include <map>
#include <iterator>


/**
 * Represents HTML tag.
 */
class HTMLTag 
{
	public:
		std::string tag,innerText;
		std::map<std::string,std::string>  attributes;
		HTMLTag(std::string name);
		void setAttribute(std::pair<std::string,std::string> attribute);
		void text(std::string text);
		std::string markup();
};