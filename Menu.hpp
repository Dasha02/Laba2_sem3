//
//  Menu.hpp
//  Laba2
//
//  Created by Даша Пархоменко on 18.12.2022.
//

#ifndef Menu_hpp
#define Menu_hpp


#include "Map.hpp"
#include "Data.hpp"
#include <chrono>
#include <ctime>
#include <fstream>

#include <stdio.h>

using namespace::std;

void Main_menu();
template <typename D, typename T>
void menu();
template <typename T>
void menu();
void menu();


int menu_var(int count);
int random_int(int max, int min);
int menu_01 ();
int menu_02 ();
int input_count ();

void Menu();


int menu_var(int count)
{
    int v;
    cin>>v;
    while ( v < 0 || v > count) {
        cout<<("ошибка, попробйте еще раз==>"); // выводим сообщение об ошибке
        cin>>v; // считываем строку повторно
    }
    return v;
}

int random_int(int max=1, int min=0)
{
    return (min + rand()%((max+1)-min));
}

int menu_01 ()
{
    int r;
    cout<<endl<<"ПРОВЕРКА АЛГОРИТМОВ ХЭШИРОВАНИЯ И УСТРАНЕНИЯ КОЛИЗИЙ!"<<endl<<"ВЫБЕРИТЕ ФОРМАТ DATA<D,T>"<< endl;
   
    cout<<"1 - DATA < int,    int    >"<< endl;
    cout<<"2 - DATA < string, int    >"<< endl;
    cout<<"3 - DATA < string, string >"<< endl;
    cout<<"0 - КОНЕЦ РАБОТЫ"<<endl;
    cout<<"ВЫБЕРИТЕ ФОРМАТ ==> ";
    r=menu_var(3);
    return r;
}

int menu_02 ()
{
    int r;
    cout<<endl<<"Mеню выбора работ с картой хэширования!"<<endl<<"############################"<< endl;
   
    cout<<"1 - вывести карту на экран"<< endl;
    cout<<"2 - поиcк элемента"<< endl;
    cout<<"3 - удаление элеменрта"<< endl;
    cout<<"4 - вставить новый элемент"<<endl;
    cout<<"0 - ВЕРНУТЬСЯ НА ГЛАВНОЕ МЕНЮ"<<endl;
    cout<<"введите номер ==> ";
    r=menu_var(4);
    return r;
}


void Main_menu()
{
    while (1 == 1)
    {
        int var = menu_01();
        switch (var)
        {
            case 0:
                return;
                
            case 1:
                menu<int, int>();
                break;
            
            case 2:
                menu<int>();
                break;
                
            case 3:
                menu();
                break;
                
            default:
                break;
        }
    }
    

}


template <typename D, typename T>
void menu()
{
    cout<<"### Введите количество  элементов ==> ";
    int n_count = menu_var(10000000);
    Data<D,T> * dt = new Data<D,T>[n_count];
    for (int i=0; i<n_count; i++)
    {
        dt[i].key = random_int(2000,0);
        dt[i].DATA = random_int(100000,-100000);
    }
    auto begin1 = chrono::steady_clock::now();
    Map<D,T> map(n_count/8);
    for (int i=0; i<n_count; i++)
        map.insert(dt[i]);
    auto end1 = chrono::steady_clock::now();
    auto elapsed_ms_selectionSort1 = chrono::duration_cast<chrono::milliseconds>(end1 - begin1);
    cout<<"Время выполнениия создания карты хэширования = " <<  elapsed_ms_selectionSort1.count() <<" ms" <<endl;
    
    
    while (1==1)
    {
        int var = menu_02();
        switch (var)
        {
            case 0:
                return ;
                
            case 1:
            {
                cout<<"### Таблица ###"<<endl;
                map.print();
                break;
            }
            case 2:
            {
                int key;
                cout<<"Введите ключ = ";
                cin>> key;
                Nudl<D,T> * res = map.Find(key);
                if (res == NULL)
                {
                    cout<<"### элемента нет в списке ####"<<endl;
                    break;
                }
          //      Data<D,T> result = map.Find(key);
                cout<< res->data.key<< " ==> "<<res->data.DATA<<endl;
                break;
            }
                
            case 3:
            {
                int key;
                cout<<"Введите ключ = ";
                cin>> key;
                map.delit(key);
                
                break;
            }
            case 4:
            {
                Data<D,T> input;
                cout<<"Введите ключ = ";
                cin>> input.key;
                cout<<"Введите DATA = ";
                cin>> input.DATA;
                map.insert(input);
                break;
            }
                
            default:
                break;
        }
    }
    return;
}


template <typename T>
void menu()
{
    cout<<"### Введите количество  элементов ==> ";
    int n_count = menu_var(10000000);
    string st[]={"Ivanov", "Vasiliev", "Petrov", "Smirnov", "Mikhailov", "Fedorov", "Sokolov", "Yakovlev", "Popov", "Andreev", "Alexeev", "Alexandrov", "Lebedev", "Grigoriev", "Stepanov", "Semenov", "Pavlov", "Bogdanov", "Nikolaev", "Dmitriev", "Egorov", "Wolves", "Kuznetsov", "Nikitin", "Solovyov", "Timofeev", "Eagles", "Afanasyev", "Filippov", "Sergeyev","Zakharov", "Matveev", "Фоменко", "Хлыстов", "Огузов", "Простаков","Петров", "Иванов", "Сидоров", "Фомичев","Огузов", "Bogdanov", "Nikolaev", "Dmitriev", "Egorov", "Wolves", "Kuznetsov", "Nikitin", "Solovyov", "Timofeev", "Eagles", "Afanasyev", "Filippov", "Sergeyev","Zakharov", "Matveev", "Фоменко", "Хлыстов", "Огузов","Ivanov", "Vasiliev", "Petrov", "Smirnov", "Mikhailov", "Fedorov", "Sokolov", "Yakovlev", "Popov", "Andreev", "Alexeev", "Alexandrov", "Lebedev", "Grigoriev", "Stepanov", "Semenov", "Pavlov", "Bogdanov", "Nikolaev", "Dmitriev", "Egorov", "Wolves", "Kuznetsov", "Nikitin", "Solovyov", "Timofeev", "Eagles", "Afanasyev", "Filippov", "Sergeyev","Zakharov","Петров", "Иванов", "Сидоров", "Фомичев","Огузов", "Bogdanov", "Nikolaev", "Dmitriev", "Egorov", "Wolves", "Kuznetsov", "Nikitin", "Solovyov", "Timofeev", "Eagles", "Afanasyev", "Filippov", "Sergeyev","Zakharov", "Matveev", "Фоменко", "Хлыстов", "Огузов","Ivanov", "Vasiliev", "Petrov", "Smirnov", "Mikhailov", "Fedorov", "Sokolov", "Yakovlev", "Popov", "Andreev", "Alexeev", "Alexandrov", "Lebedev", "Grigoriev", "Stepanov", "Semenov", "Pavlov", "Bogdanov", "Nikolaev", "Dmitriev", "Egorov", "Wolves", "Kuznetsov","end"};
    
    
    Data<string,T> * dt = new Data<string,T>[n_count];
    for (int i=0; i<n_count; i++)
    {
        dt[i].key = st[random_int(135,0)];
        dt[i].DATA = random_int(100000,-100000);
    }
    auto begin1 = chrono::steady_clock::now();
    Map<string,T> map(n_count/8);
    for (int i=0; i<n_count; i++)
        map.insert(dt[i]);
    auto end1 = chrono::steady_clock::now();
    auto elapsed_ms_selectionSort1 = chrono::duration_cast<chrono::milliseconds>(end1 - begin1);
    cout<<"Время выполнениия создания карты хэширования = " <<  elapsed_ms_selectionSort1.count() <<" ms" <<endl;
    
    
    while (1==1)
    {
        int var = menu_02();
        switch (var)
        {
            case 0:
                return ;
                break;
                
            case 1:
            {
                cout<<"### Таблица ###"<<endl;
                map.print();
                break;
            }
            case 2:
            {
                string key;
                cout<<"Введите ключ = ";
                cin>> key;
                Nudl<string,T> * res = map.Find(key);
                if (res == NULL)
                {
                    cout<<"### элемента нет в списке ####"<<endl;
                    break;
                }
                cout<< res->data.key<< " ==> "<<res->data.DATA<<endl;
                
                //Data<string,T> result = map.Find(key);
                //cout<< result.key<< " ==> "<<result.DATA<<endl;
                break;
            }
                
            case 3:
            {
                string key;
                cout<<"Введите ключ = ";
                cin>> key;
                map.delit(key);
                
                break;
            }
            case 4:
            {
                Data<string,T> input;
                cout<<"Введите ключ = ";
                cin>> input.key;
                cout<<"Введите DATA = ";
                cin>> input.DATA;
                map.insert(input);
                break;
            }
                
            default:
                break;
        }
    }
    return;
}


void menu()
{
    cout<<"### Введите количество  элементов ==> ";
    int n_count = menu_var(10000000);
    ifstream file_in_01("Names.txt");
    ifstream file_in_02("tel.txt");
    string array_01[200], array_02[200];
    
    if (!file_in_01.is_open() && !file_in_02.is_open())
        cout<<"error"<<endl;
    else
    {
        for(int i=0; i<100; i++)
        {
            getline(file_in_01,array_01[i]);
            getline(file_in_02,array_02[i]);
        }
    }
    Data<string,string> * dt = new Data<string,string>[n_count];
    
    for (int i=0; i<n_count; i++)
    {
        dt[i].key = array_01[random_int(100,0)];
        dt[i].DATA = array_02[random_int(100,0)];
    }
    auto begin1 = chrono::steady_clock::now();
    Map<string,string> map(n_count/8);
    for (int i=0; i<n_count; i++)
        map.insert(dt[i]);
    auto end1 = chrono::steady_clock::now();
    auto elapsed_ms_selectionSort1 = chrono::duration_cast<chrono::milliseconds>(end1 - begin1);
    cout<<"Время выполнениия создания карты хэширования = " <<  elapsed_ms_selectionSort1.count() <<" ms" <<endl;
    
    
    while (1==1)
    {
        int var = menu_02();
        switch (var)
        {
            case 0:
                return ;
                break;
                
            case 1:
            {
                cout<<"### Таблица ###"<<endl;
                map.print();
                break;
            }
            case 2:
            {
                string key;
                cout<<"Введите ключ = ";
                cin>> key;
                Nudl<string,string> * res = map.Find(key);
                if (res == NULL)
                {
                    cout<<"### элемента нет в списке ####"<<endl;
                    break;
                }
                cout<< res->data.key<< " ==> "<<res->data.DATA<<endl;
                
                //Data<string,string> result = map.Find(key);
                //cout<< result.key<< " ==> "<<result.DATA<<endl;
                break;
            }
                
            case 3:
            {
                string key;
                cout<<"Введите ключ = ";
                cin>> key;
                map.delit(key);
                
                break;
            }
            case 4:
            {
                Data<string,string> input;
                cout<<"Введите ключ = ";
                cin>> input.key;
                cout<<"Введите DATA = ";
                cin>> input.DATA;
                map.insert(input);
                break;
            }
                
            default:
                break;
        }
    }
    return;
}




#endif /* Menu_hpp */
