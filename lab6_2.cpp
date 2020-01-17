#include<iostream>
using namespace std;
#include<string>

int main(){
    string name;
    cout<<"Fahsai: Sawadee ka...Can you tell me your name?\n";
    cout<<"?????: ";
    getline(cin,name);
    cout<<"Fahsai: Wow!!! "<<name<<" that is a really cool name.\n";
    cout<<"Fahsai: I think you are Engineering student. What is your student ID?\n";
    cout<<name<<": ";
    int id;
    cin>>id;
    cout<<"Fahsai: I think you may be GEAR "<<(id/10000000)-12<<".  I have a free movie tickets for you.\n";
    cout<<"Fahsai: Let's go to cinema together!!!\nFahsai: What movie do you want to watch?\n";
    cout<<name<<": ";
    cin.ignore();
    string movie;
    getline(cin,movie);
    cout<<"Fahsai: So....which day are you free to go with me?\n";
    string when;
    cout<<name<<": ";
    getline(cin,when);
    cout<<"Fahsai: "<<when<<"....that is OK!!! I'm looking forward to watch "<<movie<<" with you.\n";
    cout<<name<<": ";
    string ans;
    getline(cin,ans);
    cout<<"Fahsai: 555+ see you "<<when<<". Bye Bye \\(^ ^)/";


}
