#include <iostream>
#include <string>
using namespace std;

 int main()
{
     string name;
     string name2;
     cin >> name;
     for (int i = 0; i < name.size(); i++){
          if (name2.find(name[i]) != std::string::npos){
              
          }
          else {
              name2 += name[i];
          }
     }
     if (name2.size() % 2 == 0)
     {
         cout << "CHAT WITH HER!";
     }
     else cout << "IGNORE HIM!";
}
 

 
