#include <iostream>
#include <string>
using namespace std;
 
int password_check(string log){
  string right_login, right_password;
  right_login = "qwerty";
  right_password = "123d";
  string password;
  if(log != right_login)
    throw 0;
  else{
    for(int i = 0; i < 3; i++){
      if(i == 0)
        cout << "Enter your password: ";
      cin >> password;
      if(password == right_password){
        cout << "Success!";
        break;
      }
      if((password != right_password) && (i < 2))
        cout << "Error. Try again: ";
      if((password != right_password) && (i == 2))
             throw 2;
      }
    }
  return true;
}
 
int main(){
  string login;
  cout << "Enter your login: ";
  cin >> login;
  try{
    password_check(login);
    }
  catch(int number_error){
    if(number_error == 0)
      cout << "Error! Wrong login! ";
    if(number_error == 2)
      cout << "Error! Wrong password!";
  }
  return 0;
}
