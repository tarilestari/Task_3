#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    char jwb, z;
    int pil;
    list L;
    address y, cari;
    infotype x;

    L.first=NULL;
    while (jwb='y')
    menu:
    system("cls");
    cout<<"DATA MATA KULIAH"<<endl;
    cout<<"================"<<endl;
    cout<<"1.Insert First"<<endl;
    cout<<"2.Insert After"<<endl;
    cout<<"3.Insert Last"<<endl;
    cout<<"4.Delete First"<<endl;
    cout<<"5.Delete After"<<endl;
    cout<<"6.Delete Last"<<endl;
    cout<<"7.View Data"<<endl;
    cout<<"8.Search Data"<<endl;
    cout<<"================"<<endl;
    cout<<"Masukkan pilihan Anda : ";
    inputlagi:
    cin<<pil;
    if (pil>9)
    {
        cout<<"Pilihan tidak tersedia, input kembali : ";
        goto inputlagi;
    }
    else
    {
        switch(pil)
        {
            case 1:
                system("cls");
                create_new(&x);
                y=allocate(x);
                insert_first(&L,y);
                cout<<endl;
                break;
            case 2:
                system("cls");
                address r;

                cout<<"Masukkan Kode MK : ";
                cin>>z;
                r=(L).first;
                while(info(r).id!=z)
                {
                    r=next(r);
                }
                create_new(&x);
                y=allocate(x);
                insert_after(&L,y,r);
                break;
            case 3:
                system("cls");
                create_new(&x);
                y=allocate(x);
                insert_last(&L,y);
                cout<<endl;
                break;
            case 4:
                system("cls");
                address p;

                p=new element_list;
                delete_first(&L,&p);
                cout<<endl;
                break;
            case 5:
                system("cls");
                address g,h;

                cout<<"Masukkan Kode MK : ";
                cin>>z;
                g=(L).first;
                while(info(g).id!=z)
                {
                    g=next(g);
                }
                h=new element_list;
                delete_after(&L,&y,&r);
                cout<<endl;
                break;
            case 6:
                system("cls");
                address q;

                p=new element_list;
                delete_last(&L,&q);
                cout<<endl;
                break;
            case 7:
                system("cls");
                view_data(L);
                cout<<endl;
                break;
            case 8:
                system("cls");
                find_data(&x);
                cari=search_data(L,x);
                cout<<"Data Mata Kuliah ke-"<<cari<<endl;
                cout<<"======================="<<endl;
                view_data(L);
        }
    }
    return 0;
}
