#include <bits/stdc++.h>
using namespace std;

struct Node
{
    // data
    int x;
    // references
    // la mot con tro kieu node
    Node* next;
};
typedef Node* node;

// Tao 1 node moi tu thong tin da co
node taoNode(int data)
{
    // Cap phat dong 1 node
    // Node *tmp = new Node()
    node tmp = new Node();
    tmp->x = data;
    tmp->next = NULL;
    return tmp;
}

int Size(node head)
{
    int dem = 0;
    while(head != NULL)
    {
        ++dem;
        head = head->next; // head->next: dia chi cua node tiep theo trong dslk
    }
    return dem;
}

void display(node head)
{
    cout <<"----------------------------\n";
    cout <<"Danh sach lien ket: \n";
    while(head != NULL)
    {
        cout << head->x << " ";
        head = head->next;
    }
    cout <<"\n----------------------------\n";
}

void themdau(node &head, int data)
{
    node moi = taoNode(data);
    if(head == NULL)
    {
        head = moi;
    }
    else{
        // B1: cap nhat phan tham chieu
        moi->next = head;
        head = moi;
    }
}

void themcuoi(node &head, int data)
{
    node moi = taoNode(data);
    if(head == NULL)
    {
        head = moi;
    }
    else{
        node tmp = head;
        while(tmp->next != NULL)
        {
            tmp = tmp ->next;
        }
        tmp->next = moi;
    }
}

void themgiua(node &head, int data, int vitri)
{
    int n = Size(head);
    if(vitri < 1 || vitri > n + 1)
    {
        cout <<"Vi tri chen khong hop le! \n";
        return;
    }
    if(vitri == 1)
    {
        themdau(head, data);
    }
    else if(vitri == n + 1)
    {
        themcuoi(head, data);
    }
    else{
        node tmp = head;
        for(int i = 1; i <= vitri - 2; i++)
        {
            tmp = tmp ->next;
        }
        node moi = taoNode(data);
        moi->next = tmp->next;
        tmp->next = moi;
    }    

}

void xoadau(node &head)
{   
    if(head == NULL)
    {
        cout <<"Danh sach lien ket rong !\n";
        return;
    }
    node tmp = head;
    head = head->next;
    delete tmp;
}

void xoacuoi(node &head)
{
    if(head == NULL)
    {
        cout <<"Danh sach lien ket rong !\n";
        return;
    }
    node p = head, q = NULL;
    while(p->next != NULL)
    {
        q = p;
        p = p->next;
    }
    delete p;
    if(q == NULL) // dslk chi co 1 phan tu
    {
        head = NULL;
    }
    else
    {
        q->next = NULL;
    }
}

void xoagiua(node &head, int pos)
{
    int n = Size(head);
    if(pos < 1 || pos > n)
    {
        cout <<"Vi tri xoa khong hop le! \n";
        return;
    }
    node p = head, q = NULL;
    for(int i = 1; i < pos; i++)
    {
        q = p;
        p = p->next;
    }
    if(q != NULL)
    {
        q->next = p->next;
    }
    else{
        head = head->next;
    }
    delete p;

}

// Tim kiem 1 phan tu trong danh sach lien ket
bool timkiem(node head, int val)
{
    while (head != NULL)
    {
        if(head->x == val)
        {
            return true;
        }
        head = head->next;
    }
    return false;
}

void sapxep(node &head)
{
    for(node i = head; i != NULL; i = i->next)
    {
        // selection sort
        node min = i;
        for(node j = i->next; j != NULL; j = j->next)
        {
            if(j->x < min->x)
            {
                min = j;
            }
        }
        int tmp = min->x;
        min->x = i->x;
        i->x = tmp;
        // swap(min->x, i->x)
    }
}

void daodslk(node &head)
{
    vector<int> v;
    node p = head;
    while(p != NULL)
    {
        v.push_back(p->x);
        p = p->next;
    }
    reverse(v.begin(), v.end());
    node tmp = head; int i = 0;
    while(tmp != NULL)
    {
        tmp->x = v[i++];
        tmp = tmp->next;
    }

}

int main(int argc, char const *argv[])
{
    node head = NULL;
    while(1)
    {
        cout <<"-----------------MENU-----------------\n";
        cout <<"1. Them mot node vao dau danh sach lien ket\n";
        cout <<"2. Them mot node vao cuoi danh sach lien ket\n";
        cout <<"3. Chen mot node vao giua danh sach lien ket\n";
        cout <<"4. Xoa mot node dau danh sach lien ket\n";
        cout <<"5. Xoa mot node cuoi danh sach lien ket\n";
        cout <<"6. Xoa mot node giua danh sach lien ket\n";
        cout <<"7. Tim kiem mot phan tu trong danh sach lien ket\n";
        cout <<"8. Sap xep danh sach lien ket tang dan\n";
        cout <<"9. Lat nguoc danh sach lien ket\n";
        cout <<"10. Hien thi danh sach lien ket\n";
        cout <<"0. Ket thuc chuong trinh\n";
        cout <<"--------------------------------------\n";
        int n; 
        cout << "Nhap lua chon: ";
        cin >> n;
        if(n == 1)
        {
            int x;
            cout <<"Nhap gia tri can them: "; 
            cin >> x;
            themdau(head, x);
        }
        else if(n == 2)
        {
            int x;
            cout <<"Nhap gia tri can them: "; 
            cin >> x;
            themcuoi(head, x);
        }
        else if(n == 3)
        {
            int x, pos;
            cout <<"Nhap gia tri can them: "; 
            cin >> x;
            cout <<"Nhap vi tri can chen: ";
            cin >> pos;
            themgiua(head, x, pos);
        }
        else if(n == 4)
        {
            xoadau(head);
        }
        else if(n == 5)
        {
            xoacuoi(head);
        }
        else if(n == 6)
        {
            int pos;
            cout <<"Nhap vi tri can xoa: "; 
            cin >> pos;
            xoagiua(head, pos);
        }
        else if(n == 7)
        {
            int val;
            cout <<"Nhap gia tri can tim kiem: "; 
            cin >> val;
            if(timkiem(head, val))
            {
                cout << "Tim thay! \n";
            }
            else{
                cout << "Khong tim thay! \n";
            }
        }
        else if(n == 8)
        {
            sapxep(head);
        }
        else if(n == 9)
        {
            daodslk(head);
        }
        else if(n == 10)
        {
            display(head);
        }
        else if(n == 0)
        {
            break;
        }
    }
    return 0;
}
