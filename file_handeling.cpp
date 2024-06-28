#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    fstream file;
    file.open("sample.txt", ios::out);
    if (!file)
    {
        cout << "Error in creating file" << endl;
        return 0;
    }
    cout << "File created sucessfully" << endl;

    file << "Hello C++";

    file.close();

    file.open("sample.txt", ios::in);
    if (!file)
    {
        cout << "Error in opening file" << endl;
    }

    char ch;
    cout << "File content";
    while (!file.eof())
    {
        file >> ch; // read from file
        cout << ch; // display from file
    }

    file.close();
    return 0;
    
}