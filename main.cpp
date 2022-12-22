//
//  main.cpp
//  Laba2
//
//  Created by Даша Пархоменко on 18.12.2022.
//

#include <iostream>
#include "Data.hpp"
#include "Nudl.hpp"
#include "LinkedList.hpp"
#include "Hash.hpp"
#include "Map.hpp"
#include "CreateFile.hpp"
#include "Menu.hpp"

using namespace::std;




int main(int argc, const char * argv[])
{
 
  /*  cout<<"#### Тесты списка ####"<<endl;
    LinkedList<int, int> list = LinkedList<int, int>();
    cout<<"GetLength= "<<list.GetLength()<<endl<<endl;
    
    Data<int, int> qw;
    qw.key = 11;
    qw.DATA = 33;
    list.Append(qw);
    list.PrintLinkedList();
    cout<<"GetLength= "<<list.GetLength()<<endl;
    
    for (int i=0; i<20; i++)
    {
        qw.key = (1 + rand()%((1000+1)-1));
        qw.DATA = (1 + rand()%((1000+1)-1));
        list.Append(qw);
    }
    list.PrintLinkedList();
    cout<<"GetLength= "<<list.GetLength()<<endl;
    
    cout<<"GetFirst().key= "<<list.GetFirst().key<<"  GetFirst().DATA="<<list.GetFirst().DATA<<endl;
    cout<<"GetLast().key= "<<list.GetLast().key<<"  GetLast().DATA="<<list.GetLast().DATA<<endl;
    cout<<"GetIndex(11).key= "<<list.GetIndex(11).key<<"  GetIndex(11).DATA="<<list.GetIndex(11).DATA<<endl;
    
    qw.key = 22;
    qw.DATA = 55;
    list.Prepend(qw);
    list.PrintLinkedList();
    cout<<"GetLength= "<<list.GetLength()<<endl<<endl;
    
    qw.key = 777;
    qw.DATA = 888;
    list.SetAt(qw, 20);
    list.Remove(11);
    list.PrintLinkedList();
    cout<<"GetLength= "<<list.GetLength()<<endl<<endl;
    
    
    list.Delit(99);
    list.PrintLinkedList();
    cout<<"GetLength= "<<list.GetLength()<<endl<<endl;
    
    Nudl<int,int> * r = list.Find(222222);
    int res;
    if (r!=NULL)
        res = r->data.DATA;
    else
        res =0;
    cout<<"### Выводим занчение по ключу: ключ = Find(817) :"<<res<<endl;
    cout<<"#### Тесты списка завершены - ok ####"<<endl;
    
   
    */
    // list.~LinkedList<int, int>();
    
    // insert code here...
  
  
    
   
    Create_Files();
    
    
    //menu<int, int>();
    
    
    Main_menu();
    
    //std::cout << "Hello, World!\n";
    return 0;
}

