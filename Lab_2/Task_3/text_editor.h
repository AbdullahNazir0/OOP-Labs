#ifndef TEXT_EDITOR_H
#define TEXT_EDITOR_H

#include <iostream>

void addText(std::string& main, std::string& toAdd);
void deleteText(std::string& text, int start, int end);
void displayText(std::string& text);

#endif