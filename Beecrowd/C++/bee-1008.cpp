#include <iostream>
#include <iomanip>
using namespace std;
 
int main(){
    
    int number, hours;
    double recieved, salary;
    cin >> number >> hours >> recieved;
    salary = recieved * hours;
    
    cout << "NUMBER = " << number << "\n";
    cout << "SALARY = U$ " << setprecision(2) << fixed << salary << "\n";
 
    return 0;
}

/* 1008 - Salary
https://www.beecrowd.com.br/judge/en/problems/view/1008 */