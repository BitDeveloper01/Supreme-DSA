/*
#include <iostream>
using namespace std;

int getLength(char ch[])    //get wrong output (+1 extra)
{
    int length=0;
    int i=0;
    while(ch[i] != '\0')
    {
        length++;
        i++;
    }
    return length;
}

void reverseString(char ch[])
{
    int i=0;
    int n=getLength(ch);
    int j=n-1;

    while(i<=j)
    {
        swap(ch[i], ch[j]);
        i++;
        j--;
    }
}

void replaceSpace(char sentence[])
{
    int n=getLength(sentence);
    for(int i=0; i<n; i++)
    {
        if(sentence == ' ') sentence[i]='@';
    }
}

bool checkPalinedrome(char ch[])
{
    int i=0;
    int j=(getLength(ch))-1;

    while(i<=j)
    {
        if(ch[i] != ch[j])  return false;
        i++, j--;
    }
    return true;
}

void convertIntoUpperCase(char ch[])
{
    int n=getLength(ch);
    for(int i=0; i<n; i++)
    {
        if(ch[i] >= 'a' && ch[i] <= 'z')
            ch[i]=ch[i]-'a'+'A';
    }
}

int main()
{
    char ch[100];   //initialization
    cin.getline(ch,50);

    cout << getLength(ch) << endl;
    cout << ch << endl;

    return 0;
}
*/


    //  STRING
#include <iostream>
#include <string>
using namespace std;

bool compareStringf(string a, string b)
{
  if(a.length() != b.length())  return false;
  else
  {
    for(int i=0; i<a.length(); i++)
    {
      if(a[i] != b[i])  return false;
    }
    return true;
  }
}

int main()
{
            //      string declaration
    string str1;

    cout << "Enter str = ";
            //      take input
    //cin >> str;   // without space
    getline(cin,str1);   //with space
    
    cout <<str1 << endl;

    //some commonly used function
    string str2="Asif Hashmi";
    cout << str2.length() << endl;  //length
    cout << str2.empty() << endl;   //is empty
    str2.push_back('A');     cout << str2 << endl;  //push back
    str2.pop_back();         cout << str2 << endl;  //pop back
    cout << str2.substr(5,6) << endl;   //sub string
    cout << str1.compare(str2) << endl;     //compare  // if equal return 0 


    //Find Function
    string target;
    cout << "Enter the sub-string which you have to find in str2 : ";
    getline(cin, target);
    if(str2.find(target) == string::npos)   cout << "not found"<< endl;
    else    cout << str2.find(target)<< endl;   //if found return the first starting index of found element


    //Replace Function
    string str="This is my first message";
    string word="Hashmi";
    str.replace(0, 4, word);
    cout << str << endl;

    //Erase Function
    str="this is an example string";
    str.erase(10,5);
    cout << str << endl;


    return 0;
}




