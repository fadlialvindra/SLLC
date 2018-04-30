#include <iostream>

using namespace std;
class Node
{
  public:
    int data;
    Node *next;
};

Node *head;
Node *del;

void init()
{
    head = NULL;
}
bool isEmpty()
{
    if (head == NULL)
        return 1;
    return 0;
}
void barudepan(int databaru){
	Node *baru,*bantu;
	baru = new Node;
	baru->data = databaru;
	baru->next = baru;
	if(isEmpty()==1){
	 head=baru;
	 head->next=head;
	}
	else {
		bantu = head;
		while(bantu->next!=head){
			bantu=bantu->next;
		}
		baru->next = head;
		head = baru;
      	bantu->next = head;
	}
	cout<<"Data masuk\n";
}
void tambahBelakang(int databaru)
{
    Node *baru;
    baru = new Node();
    baru->data = databaru;
    baru->next = baru;

    if (isEmpty())
    {
        head = baru;
        head->next = head;
    }
    else
    {
        Node *bantu;
        bantu = head;
        while (bantu->next != head)
        {
            bantu = bantu->next;
        }
        bantu->next = baru;
        baru->next = head;
    }
    cout<<"Data masuk\n";
}

void hapuspalak(){
	int bantu;
	if (head==NULL){
		cout<<"\nData kosong"<<endl;
	} else {
		bantu = head->data;
		del = head;
		head = head->next;
		delete del;
		
		cout<<"\nData yang diapus adalah "<<bantu<<endl;
	}
}

void hapusBelakang(){
		Node *hapus,*bantu;
		if (isEmpty()==0){
			int d;
			hapus = head;
			if(head->next == head){
				head = NULL;
			}else{
				bantu = head;
				while(bantu->next->next != head){
					bantu = bantu->next;
				}
				hapus = bantu->next;
	         		d = bantu->data;
				bantu->next = head;
				delete hapus;
			}
			cout<<"terhapus\n";
		} else cout<<"Masih kosong\n";
	}

void cetak(){
    if (!isEmpty()){
        Node *bantu;
        bantu = head;
        do{
            cout<<bantu->data<<" ";
            bantu=bantu->next;
        }while (bantu!=head);
    } else {
        cout<<"List Kosong";
    }
}

void pilih()
{
    int a, n, data;
    cout<<"1. Tambah Depan\n2. Tambah Belakang\n3. Hapus Palak\n4. Hapus Belakang\n";
    cout<<"Masukkan Pilihan : "; cin>>a;
    cout<<endl;
    switch(a)
    {
        case 1 : 
        init();
        cout<<"Masukkan Banyak data : "; cin>>n;
        for (int i=0;i<n;i++)
        {
            cout<<"Masukkan Data "<<i+1<<" : ";cin>>data;
            barudepan(data);
        }
        cetak();
        cout<<endl;
        break;

        case 2 : 
        init();
        cout<<"Masukkan Banyak data : "; cin>>n;
        for (int i=0;i<n;i++)
        {
            cout<<"Masukkan Data "<<i+1<<" : ";cin>>data;
            tambahBelakang(data);
        }
        cetak();
        cout<<endl;
        break;
		    
	case 3 : 
        init();
        cout<<"Masukkan Banyak data : "; cin>>n;
        for (int i=0;i<n;i++)
        {
            cout<<"Masukkan Data "<<i+1<<" : ";cin>>data;
            tambahBelakang(data);
        }
        hapuspalak();
        cetak();
        cout<<endl;
        break;

	case 4 : 
        init();
        cout<<"Masukkan Banyak data : "; cin>>n;
        for (int i=0;i<n;i++)
        {
            cout<<"Masukkan Data "<<i+1<<" : ";cin>>data;
            tambahBelakang(data);
        }
        hapusBelakang();
        cetak();
        cout<<endl;
        break;	    
    }
}

int main()
{
    pilih();
    return 0;
}
