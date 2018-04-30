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

void menu(){
	int pilih, data;
	char ulang;
	do{
		system("cls");
      cout<<"Tugas SLLC MANTAP"<<endl;
      cout<<"================="<<endl;
      cout<<"Menu : "<<endl;
      cout<<"1. Input data"<<endl;
      cout<<"2. Hapus data"<<endl;
      cout<<"3. Exit"<<endl;
      cout<<"Your Choice : ";
      cin>>pilih;

      switch(pilih)
      {
      case 1 :
            cout<<"\nInput Data : ";
            cin>>data;
            barudepan(data);
            break;
      case 2 :
            hapuspalak();
            break;
      case 3 :
            exit(0);
            break;
      default :
            cout<<"\nPilih ulang"<<endl;
      }
      cout<<"\nBack to Menu?(y/n)";
      cin>>ulang;
      }while(ulang=='y' || ulang=='Y');
		
	}


int main()
{
    init();
    menu();
    
    return 0;
}
