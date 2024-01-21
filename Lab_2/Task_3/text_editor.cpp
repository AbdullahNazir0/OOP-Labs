#include "text_editor.h"
#include <iostream>
#include <cstring>

void addText(std::string& main, std::string& toAdd)
{
    main.append(toAdd);
}

void deleteText(std::string& text, int start, int length)
{
if (start >= 0 && start < text.length()) {
        text.erase(start, length);
    }
}

void displayText(std::string& text)
{
    std::cout << text << std::endl;
}
