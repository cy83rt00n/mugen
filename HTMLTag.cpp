#include "HTMLTag.h"

/**
 * Constructor
 */
HTMLTag::HTMLTag(std::string name)
{
	this->tag = name;
	this->innerText = "";
}

/**
 * Sets up a text
 */
void HTMLTag::text(std::string innerText)
{
	this->innerText = innerText;
}

/**
 * Sets up attributes
 */
void HTMLTag::setAttribute(std::pair<std::string,std::string> attribute) 
{
	this->attributes.insert(attribute);
}

/**
 * Returns tag text representation
 */
std::string HTMLTag::markup()
{
	std::string markup;
	std::string attributes;
	std::map<std::string,std::string>::iterator a;

	for(a=this->attributes.begin();a!=this->attributes.end();a++) {
		attributes += '"' + a->first + '"' + '=' + '"' + a->second + '"' + ' ';
	}

	markup = "<" + this->tag + ' ' + attributes + ">" + this->innerText + "<" + "/" + this->tag + ">";

	return markup;
}