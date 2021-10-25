#include <iostream>
#include <string>
using namespace std;

int main() {
    /*
    // Instantiate and copy 
    string str ("Hello string");
    string strCopy (str);
    string strPartialCopy (str.begin(), str.begin()+7);
    string strRepeat (10, 'a');

    cout << str<< endl;
    cout << strCopy << endl;
    cout << strPartialCopy << endl;
    cout << strRepeat << endl;

    // npos
    string s1 = "maibel";
    string s2 = "lol";
    int found = s1.find(s2);
 
    if (found != string::npos) {
        cout << "first " << s2 << " found at: " << (found) << endl;
    }  else {
        cout << s2 << " is not in the string" << endl;
    }

    // Accesing
    string str = "hello string";
    for (int i = 0; i < str.length() ; i++){
        cout << str[i] << " " ;
    }

    for (auto ch : str) {
          cout<< ch<< " ";
    }

    string:: iterator it;
    for (it = str.begin(); it != str.end(); it++) {
        cout<< *it << " ";
    }

    //Concatenation
    string name = "Maribel";
    name += " Melendez"; 
    cout << name << endl;

    string firstName = "Mar";
    string lastName = " Melendez";
    firstName.append(lastName);
    cout << firstName << endl;

    firstName.push_back('D');
    cout << firstName << endl;

    // Find
    string str1 = "hello! here i am";
    string str2 = "here";

    cout << str1.find(str2) << endl; //7
    cout << str1.find("he") << endl; //0
    int index = str1.find("he");
    cout << str1.find("he", index + 1) << endl; //7

    index = str1.find(str2, 8); // big number, don't find it
    if (index != string::npos) {
        cout << "We found it!" << endl;
    } else {
        cout << "sorry not in the string" << endl;
    }

    // character
    string str3 = "hello! here i am";
    char char1 = 'l';

    cout << str3.find(char1) << endl; //7

   // Erase
   // with position and count
   string str ("Hello string! wake up to a beautiful day!");
   str.erase(13,10); //remove from index 26 the following 10 characters
   cout << str << endl; //Hello string! wake up to a day!

   // with iterator
   // first find character 'l' in the string
   auto iCharL = find(str.begin(),str.end(),'H'); 
   str.erase(iCharL);
   cout << str << endl;

   // range
   str.erase(str.begin(),str.end());

   if(str.empty()) {
       cout << "The string is empty" << endl;
   } // The string is empty

    string str ("Hi there!");
    reverse(str.begin(),str.end());
    cout << str << endl;
    //!ereht iH

    string name ("Maribel");
    cout << name.size() << endl;
    // 7

    // Case conversion
    string foo ("cASe CONversion");
    transform(foo.begin(), foo.end(), foo.begin(), ::toupper);
    cout << foo << endl;
    transform(foo.begin(), foo.end(), foo.begin(), ::tolower);
    cout << foo << endl;

     */

}