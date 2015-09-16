#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED
#define first(p) (L).first
#define info(p) (p)->info
#define next(p) (p)->next;
using namespace std;

struct mata_kuliah
{
    char name[25];
    char id[5];
    char namelec[25];
    int sks, shift;
};

struct element_list
{
    infotype info;
    address next;
};

struct list
{
    address first;
};

typedef mk infotype;
typedef struct element_list *address;

address allocate (infotype a);
void create_new (infotype *a);
void insert_first (list *L, address p);
void insert_after(list *L, address p, address s);
void insert_last(list *L,address p);
void delete_first(list *L,address *p);
void delete_after(list *L, address *p, address*s);
void delete_last(list *L,address *p);
void view_data (list L);
address search_data(list L, infotype a);
void find_data (list L);

#endif // LIST_H_INCLUDED
