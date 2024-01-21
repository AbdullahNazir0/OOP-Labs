#include <iostream>
#include "text_editor.h"
using namespace std;

int main()
{
    string textDocument = "This is the sample text document.";
    string subText;
    int start, end;
    while(true)
    {
        int choice;
        cout << "Enter 1 to add text to the text document.\n"
                "Enter 2 to delete text from the text document.\n"
                "Enter 3 to display the text document.\n"
                "Enter 0 to terminate.\n"
                "You Entered: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Enter the text you want to add to the text document: ";
                cin >> subText;
                addText(textDocument, subText);
                cout << "Text added successfully." << endl;
                break;
            case 2:
                cout << "Enter the starting and ending index of the part of text document that you want to delete: ";
                cin >> start >> end;
                deleteText(textDocument, start, end);
                cout << "Text deleted successfully." << endl;
                break;
            case 3:
                cout << "The text document is " << endl;
                displayText(textDocument);
                break;
            case 0:
                return 0;
                break;
            default:
                cout << "Invalid input. Please Try Again." << endl;
                break;
        }
    }
}