/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cmath>
using namespace std; 
//If11. Змінні цілого типу: A і B. Якщо їх значення не рівні, присвоїти кожній змінній більше з них,
// а якщо рівні, то присвоїти змінним нульові значення. Вивести нові значення змінних A і B.
void task_if11 (); // завдання 1 декларація функції

// Дано координати точки на площині (x, y). 
// Визначити, чи потрапляє точка в фігуру заданого кольору
// (або групу фігур) і вивести відповідне повідомлення.
void task_geom33(); //завдання 2 декларація функції
void task_geom33_3(); //завдання 3 декларація функції

int main()
{   
    std::cout<<"Task number:";
    int  menu;
    cin >> menu;
    // перемикання між завданнями
    switch (menu)
    {
        case 1: task_if11 (); break; // завдання 1
        case 2: task_geom33(); break; // завдання 2
        case 3: task_geom33_3 ();break; // завдання 3
        default:cout <<"Wrong task! (Only 1,2,3)"<< endl; // повідомлення про помилку
    }
    system ("pause");
    
    return 0;
}
// Завдання 1 реалізація
void task_if11()
{
    int a;
    int b;
    cout << "**************************If 11**************************"<< endl;
    cout << "Integer number:";
    
    cin >> a;
    cin >> b;
    if (cin) {   
        if (a != b ){
            if (a > b){
                a = a;
                b = a;
            cout << "After compare:"<<a <<endl;
            cout << "After compare:"<<b <<endl;
            }
            else {
                a = b;
                b = b;
            cout << "After compare:"<<a <<endl;
            cout << "After compare:"<< b <<endl;
            }
        }
        else {
            a =0;
            b =0;
            cout << "After compare:"<<a <<endl;
            cout << "After compare:"<<b <<endl;
        }    
         
    }
    else
        cout << "wrong integer"<< endl;
        
}
void task_geom33 () 
{ 
    
    int r;
    float x, y, xc, yc; r;
    bool ar1, ar2;
    cout << "*********** Point in geometry region 1 ************" << endl; 
    cout << "Parameters r:";  cin>> r;// перевірка коректності даних !!!
// перевірка коректності даних !!!
    if (!cin)
    cout << "Must be numeric!" << endl;
    else {
        cout << "Point x, y:"; cin >> x >> y; // перевірка коректності даних !!!
        if (!cin)
        cout << "Must be numeric!" << endl;
        else {
            if (x>0 && y> r/sqrt(2) && x<r*sqrt (2) && y < r+r/ sqrt (2))
            cout << "Int1" << endl;
            // умова 2 фрагмента
            else { 
                if (x>0 && y<0 && x<sqrt(2)*r && y> -r )
                cout<< "Int2" << endl;
                
            
                else cout << "Out of region" << endl;
            }
        }
    }
}
void task_geom33_3 () 
{   int r;
    int S1, S2;
    cout << "*********** Area  region 1 ************" << endl; 
    cout << "Parameters r:";  cin>> r;// перевірка коректності даних !!!
// перевірка коректності даних !!!
    if (!cin)
    cout << "Must be numeric!" << endl;
    else {
        S1 = (3.14*r*r/4);
        S2 = (r*r*sqrt(2) - (3.14*r*r/4 - r*r));
        cout << "Area region 1 :"<<S1 <<endl;
        cout << "Area region 2 :"<<S2 <<endl;
    }
}
           