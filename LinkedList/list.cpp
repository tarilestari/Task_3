#include <iostream>
#include "list.h"

address allocate (infotype a)
{
    address p;

    p=new element_list;
    info(p)=a;
    return p;
}

void insert_first (list *L, address p)
{
    if((*L).first==NULL)
    {
        (*L).first=p;
        next((*L).first)=NULL;
    }
    else
    {
        next(p)=NULL;
        next(p)=(*L).first;
        (*L).first=p;
    }
}

void insert_after(list *L, address p, address s)
{
    address q;

    q=(*L).first;
    while (info(q).id!=info(s).id)
    {
        q=next(q);
    }
    next(p)=NULL;
    next(p)=next(q);
    next(q)=p;
}

void delete_last(list *L,address *p)
{
    address q;

    q=(*L).first;
    while(next(next(q))!=NULL)
    {
        q=next(q);
    }
    *p=next(q);
    next(q)=NULL;
    delete p;
}

void view_data(list L)
{
    address q;

    q=(L).first;
    while(q!=NULL)
    {
        cout<<"===================="<<endl;
        cout<<"Nama MK : "<<info(q).name<<endl;
        cout<<"Kode MK (5 digit) : "<<info(q).id<<endl;
        cout<<"Nama Dosen MK : "<<info(q).namelec<<endl;
        cout<<"SKS : "<<info(q).sks<<endl;
        cout<<"Shift : "<<info(q).shift<<endl;
        cout<<"===================="<<endl;
        q=next(q);
    }
    cout<<"=====SELESAI====="<<endl;
}

address search_data(list L, infotype a)
{
    address q;

    q=(L).first;
    while(info(q).id!=a.id)
    {
        q=next(q);
    }
    return q;
}
