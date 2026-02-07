#include<iostream>
#include<string>
using namespace std;

int main ()
{
    char str[] = {'a', 'b', 'c', '\0'};  // a character array with a null character at the end is a string in c++
    cout << str << endl;                 // if a null character is not added at the end then its not a valid string
    cout << strlen(str) << endl;          

    char str1[] = "hello";
    cout << str1 << endl;
    cout << strlen(str1) << endl;
    cout << str1[5] << endl;   // nothing will be printed 

    char str2[100];
    cin >> str2;        // words after the space wont be considered as input 
    cout << str2 <<endl;

    cin.getline(str2, 100);
    cout << str2 << endl;

    cin.getline(str2,100, '$'); // $ is the delimiter
    cout << str2 << endl;


    char str3[] = "welcome to vs code";
    int len =0;
    for(int i=0; str3[i]!='\0'; i++)
    {
        len++;
    }
    cout << len << endl;


    string s;
    cin>> s;
    cout << s << endl;
    getline(cin,s);

    string s1 = "world";
    string s2 = "hello";
    s2 = s2+s1;
    cout << s2 << endl;
    cout << (s2<s1) << endl;
    cout << s2.length() << endl;

    for(int i=0; i<s2.length(); i++)
    {
        cout << s2[i] << " ";
    }
    cout << endl;
    for(char ch: s1)
    {
        cout << ch << " ";
    }
}