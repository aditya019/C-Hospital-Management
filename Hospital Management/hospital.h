#include <string>
#include <vector>
using namespace std;

class Hospital {
    public:
        string hospital_name;
        int patients;
        int doctors;
        int employees;
        Hospital();
};

class Patient : public Hospital {
public:
    vector<int> p_id;
    vector<int> p_age;
    vector<char> p_sex;
    vector<string> p_status;
    vector<string> p_name;
    void displayP(int);
    void displayPAll();
    void setValueP();
    void newP();
    void dischargeP();
};

class Doctors : public Hospital {
public: 
    vector<int> d_id;
    vector<string> d_name;
    vector<int> d_salary;
    vector<string> d_exp;
    void displayD(int);
    void diplayDAll();
    void setValueD();
    void displayExp();
};

class Employees : public Hospital {
public:
    vector<int> e_id;
    vector<string> e_name;
    vector<int> p_salary;
    vector<string> e_trade;
    void displayE(int);
    void setValueE();
    void displayEAll(); 
};