#include "hospital.cpp"
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <type_traits>
#include <vector>
using namespace std;

int main(){
    Hospital h;
    Patient p;
    int i;
    fstream file;
    file.open("Patients/pid.txt", ios::in);
    if(!(file.peek() == std::fstream::traits_type::eof())){
        cout<<"going in set value p"<<endl;
        p.setValueP();
    }
    file.close();
    if(p.p_id.size() > 0){
        p.p_id.pop_back();
        p.p_sex.pop_back();
        p.p_age.pop_back();
    }
    for(i=0; i<p.p_id.size(); i++){
        cout<<p.p_id[i]<<endl;
    }
    for(i=0; i<p.p_sex.size(); i++){
        cout<<p.p_sex[i]<<endl;
    }
    for(i=0; i<3; i++){
        p.newP();
    }
    for(i=0; i<p.p_id.size(); i++){
        cout<<p.p_id[i]<<endl;
    }
    char ch;
    cin.ignore();
    cout<<"enter a to view 1 enter b for all to exit x"<<endl;
    cin>>ch;
    while(ch!='x'){
        if(ch == 'a'){
            int j;
            cout<<"enter id"<<endl;
            cin>>j;
            p.displayP(j-1);
        }
        else if(ch == 'b'){
            p.displayPAll();
        }
        else if(ch == 'x'){
            break;
        }
        else{
            cout<<"enter a to view 1 enter b for all to exit x"<<endl;
            cin>>ch;
            continue;
        }
        cout<<"enter a to view 1 enter b for all to exit x"<<endl;
        cin>>ch;
    }
    system("pause");
    return 0;
}