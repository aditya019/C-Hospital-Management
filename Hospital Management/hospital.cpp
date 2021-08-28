#include "hospital.h"
#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <fstream>
using namespace std;

Hospital::Hospital() {
    hospital_name = "";
    patients = 0;
    doctors = 0;
    employees = 0;
}

void Patient::displayP(int v){
    cout<<p_id[v]<<"  "<<p_name[v]<<"  "<<p_sex[v]<<"  "<<p_age[v]<<"   "<<p_status[v]<<endl;
}

void Patient::displayPAll(){
    cout<<"ID"<<"   "<<"NAME"<<"   "<<"SEX"<<"   "<<"AGE"<<"   "<<"STATUS"<<endl;
    for(int i =0; i<p_id.size(); i++){
    cout<<p_id[i]<<"  "<<p_name[i]<<"  "<<p_sex[i]<<"  "<<p_age[i]<<"   "<<p_status[i]<<endl;
    }
}

void Patient::setValueP(){
    fstream file;
    int id;
    string name;
    int age;
    char sex;
    string status;
    fstream file1;
    fstream file2;
    fstream file3;
    fstream file4;
    fstream file5;
    file1.open("Patients/pid.txt", ios::in);
    file1.seekg(0, ios::beg);
    while(file1){
        file1>>id;
        if(id != 0){
            p_id.push_back(id);
        }
    }
    file1.close();
    file2.open("Patients/pname.txt", ios::in);
    file2.seekg(0, ios::beg);
    while(file2){
        getline(file2, name);
        if(name != ""){
            p_name.push_back(name);
        }
    }
    file2.close();
    file3.open("Patients/page.txt", ios::in);
    file3.seekg(0, ios::beg);
    while(file3){
        file3>>age;
        if(age != 0){
            p_age.push_back(age);
        }
    }
    file3.close();
    file4.open("Patients/psex.txt", ios::in);
    file4.seekg(0, ios::beg);
    while(file4){
        file4>>sex;
        if(sex){
            p_sex.push_back(sex);
        }
    }
    file4.close();
    file5.open("Patients/pstatus.txt", ios::in);
    file5.seekg(0, ios::beg);
    while(file5){
        getline(file5, status);
        if(status != ""){
            p_status.push_back(status);
        }
    }
    file5.close();
}

void Patient::newP(){
    fstream file1;
    fstream file2;
    fstream file3;
    fstream file4;
    fstream file5;
    string name;
    int id;
    char sex;
    string status;
    int age;
    cout<<"Enter id of Patient"<<endl;
    file1.open("Patients/pid.txt", ios::in | ios::out | ios::app);
    cin>>id;
    file1<<id<<endl;
    p_id.push_back(id);
    file1.close();
    cout<<"Enter Name of new patient"<<endl;
    file2.open("Patients/pname.txt", ios::in | ios::out | ios::app);
    cin.ignore();
    getline(cin, name);
    file2<<name<<endl;
    p_name.push_back(name);
    file2.close();
    cout<<"Enter sex of patient (m/f/o)"<<endl;
    file3.open("Patients/psex.txt", ios::in | ios::out | ios::app);
    cin>>sex;
    file3<<sex<<endl;
    p_sex.push_back(sex);
    file3.close();
    cout<<"Enter Status of Patient"<<endl;
    file4.open("Patients/pstatus.txt", ios::in | ios::out | ios::app);
    cin.ignore();
    getline(cin, status);
    p_status.push_back(status);
    file4<<status<<endl;
    file4.close();
    cout<<"Enter age of patient"<<endl;
    file5.open("Patients/page.txt", ios::in | ios::out | ios::app);
    cin>>age;
    file5<<age<<endl;
    p_age.push_back(age);
    file5.close();
}