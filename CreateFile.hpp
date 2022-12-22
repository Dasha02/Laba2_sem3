//
//  CreateFile.hpp
//  Laba2
//
//  Created by Даша Пархоменко on 18.12.2022.
//

#ifndef CreateFile_hpp
#define CreateFile_hpp

#include <stdio.h>

#include <iostream>
#include <fstream>
#include <string>


using namespace::std;
int random_int2(int max, int min);
void Create_Files();

int random_int2(int max=1, int min=0)
{
    return (min + rand()%((max+1)-min));
}

void Create_Files()
{
    setlocale(LC_ALL, "ru");
    
    string name_file_Name = "Names.txt";
    string name_file_tel = "tel.txt";
    string st[]={"Иванов", "Салтыков", "Фомичев", "Петрова", "Косыгина", "Жукова", "Браверман", "Голиков", "Хрусталев", "Кандыбин", "Глушко", "Шеремет", "Плющев", "Прохиндеева", "Светляков", "Понырев", "Простоквашин", "Целуев", "Чаплин", "Гускьков", "Щипач", "Ворнов", "Кочетков", "Ivanov", "Vasiliev", "Petrov", "Smirnov", "Mikhailov", "Fedorov", "Sokolov", "Yakovlev", "Popov", "Andreev", "Alexeev", "Alexandrov", "Lebedev", "Grigoriev", "Stepanov", "Semenov", "Pavlov", "Bogdanov", "Nikolaev", "Dmitriev", "Egorov", "Wolves", "Kuznetsov", "Nikitin", "Solovyov", "Timofeev", "Eagles", "Afanasyev", "Filippov", "Sergeyev","Zakharov", "Matveev", "Фоменко", "Хлыстов", "Огузов", "Простаков","Петров", "Иванов", "Сидоров", "Фомичев","Огузов", "Bogdanov", "Nikolaev", "Dmitriev", "Egorov", "Wolves", "Kuznetsov", "Nikitin", "Solovyov", "Timofeev", "Eagles", "Afanasyev", "Filippov", "Sergeyev","Zakharov", "Matveev", "Фоменко", "Хлыстов", "Огузов","Ivanov", "Vasiliev", "Petrov", "Smirnov", "Mikhailov", "Fedorov", "Sokolov", "Yakovlev", "Popov", "Andreev", "Alexeev", "Alexandrov", "Lebedev", "Grigoriev", "Stepanov", "Semenov", "Pavlov", "Bogdanov", "Nikolaev", "Dmitriev", "Egorov", "Wolves", "Kuznetsov", "Nikitin", "Solovyov", "Timofeev", "Eagles", "Afanasyev", "Filippov", "Sergeyev","Zakharov","Петров", "Иванов", "Сидоров", "Фомичев","Огузов", "Bogdanov", "Nikolaev", "Dmitriev", "Egorov", "Wolves", "Kuznetsov", "Nikitin", "Solovyov", "Timofeev", "Eagles", "Afanasyev", "Filippov", "Sergeyev","Zakharov", "Matveev", "Фоменко", "Хлыстов", "Огузов","Ivanov", "Vasiliev", "Petrov", "Smirnov", "Mikhailov", "Fedorov", "Sokolov", "Yakovlev", "Popov", "Andreev", "Alexeev", "Alexandrov", "Lebedev", "Grigoriev", "Stepanov", "Semenov", "Pavlov", "Bogdanov", "Nikolaev", "Dmitriev", "Egorov", "Wolves", "Kuznetsov","end"};
    string ss, tel;
    ofstream fileN;
    fileN.open(name_file_Name);
    int k;
    if (!fileN.is_open())
        cout<<"error"<<endl;
    else
    {
        for (int i=0; i<2000; i++)
        {
            k = random_int2(158,0);
            fileN<<st[k]<<endl;
            // cout<<st[i]<<endl;
        }
    }
    fileN.close();
    
    fileN.open(name_file_tel);
    if (!fileN.is_open())
        cout<<"error"<<endl;
    else
    {
        for (int i=0; i<2000; i++)
        {
            ss = "+7 (495) " + to_string(random_int2(9999999,1000000));
            fileN<<ss<<endl;
            //cout<<st[i]<<endl;
        }
        
    }
    fileN.close();
    
    
    ifstream fileNr;
    fileNr.open(name_file_Name);
    if (!fileNr.is_open())
        cout<<"error"<<endl;
    else
    {
        // fileN<<"tyr"<<endl;
        while (!fileNr.eof())
        {
            getline(fileNr,ss);
            cout<<ss<<endl;
        }
        
    }
    fileNr.close();
    
    fileNr.open(name_file_tel);
    if (!fileNr.is_open())
        cout<<"error"<<endl;
    else
    {
        // fileN<<"tyr"<<endl;
        while (!fileNr.eof())
        {
            getline(fileNr,ss);
            cout<<ss<<endl;
        }
    }
    return;
}

#endif /* CreateFile_hpp */
