#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

char* regrow(char*oldArr, int& s, char v);
void copy_r(char* newArr, char* oldArr);
char* shrink(char*oldArr, int& s, char v);
void copy_s(char* newArr, char* oldArr, char v);
bool isVowel(char n);

int main()
{
    char fileName[50];
    cout << "Enter the name of file: ";
    cin >> fileName;
    ifstream fin;
    fin.open(fileName);
    if(! fin)
    {
        cout << "Can't find file with name '" << fileName << "'." << endl;
    }
    else
    {
        char* data = new char[1];
        int size = 1;
        char val;
        fin >> val;
        data[0] = val;
        while(fin >> val)
        {
            data = regrow(data, size, val);
        }
        data = regrow(data, size, '\0');
        cout << "Original text: " << data << endl;
        for(int i = 0; i < size; i++)
        {
            if(isVowel(data[i]))
            {
                data = shrink(data, size, data[i]);
            }
        }
        data = regrow(data, size, '\0');
        cout << "Modified text: " << data;
        delete[]data;
        fin.close();
    }
}

char* regrow(char*oldArr,int& s, char v)
{
    char* newArr = new char[s + 1];
    copy_r(newArr, oldArr);
    newArr[s] = v;
    s++;
    delete[]oldArr;
    return newArr;
}
void copy_r(char* newArr, char* oldArr)
{
    strcpy(newArr, oldArr);
}
char* shrink(char*oldArr, int& s, char v)
{
    char* newArr = new char[s - 1];
    copy_s(newArr, oldArr, v);
    s--;
    delete[]oldArr;
    return newArr;
}
void copy_s(char* newArr, char* oldArr, char v)
{
    int j = 0;
    for(int i = 0; oldArr[i]!= '\0'; i++)
    {
        if(!(v == oldArr[i]))
        {
            newArr[j] = oldArr[i];
            j++;
        }
    }
}
bool isVowel(char n)
{
    return (n == 'a' || n == 'e' || n == 'i' || n =='o' || n == 'u');
}