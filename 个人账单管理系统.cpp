#include<iostream>
#include<string>
#include<fstream>
using namespace std;
void menu(){        //�˵���ʾ 
		cout<<"================================="<<endl;
        cout<<"    ��ӭʹ�ø����˵�����ϵͳ     "<<endl;
        cout<<"================================="<<endl;
        cout<<"��ѡ�������"<<endl;
        cout<<"1. ��¼����"<<endl;
        cout<<"2. ��¼֧��"<<endl;
        cout<<"7. �˳�ϵͳ"<<endl;
        cout<<"������ѡ����ţ�"; 
	}
int main(){
	ofstream ofs;
	while(1){
	menu();
	int choice;
	double revenue; //���� 
	double consume; //֧�� 
	string date;    //���� 
	string category;  //��� 
	string remark;  //��ע 
	cin>>choice;
	switch(choice){
		case 1 : 
		    cout<<"������������Ϣ��";
		    cout<<"���ڣ�YYYY-MM-DD����";
			cin>> date;
		    cout<<"��";
			cin>> revenue; 
			while(1){
				if(revenue<0){
				cout<<"��������,���������룺";
				cin>>revenue;
				continue;
			}
			break;
			}
			cout<<"����繤�ʡ�����ȣ���";
			cin>> category;
			cout<<"��ע��";
			cin>> remark;
			ofs.open("�����¼.txt",ios::out|ios::app);
			ofs<<date<<" ";
			ofs<<revenue<<" ";
			ofs<<category<<" ";
			ofs<<remark<<" "<<endl;
			ofs.close();
			cout<<"�����ѳɹ���¼��"<<endl; 
			break;
		case 2 : 
		    cout<<"������֧����Ϣ��";
		    cout<<"���ڣ�YYYY-MM-DD����";
			cin>> date;
		    cout<<"��";
			cin>> consume; 
			while(1){
				if(consume<0){
				cout<<"��������,���������룺";
				cin>>consume;
				continue;
			}
			break;
			} 
			cout<<"���";
			cin>> category;
			cout<<"��ע��";
			cin>> remark; 
			ofs.open("֧����¼.txt",ios::out|ios::app);
			ofs<<date<<" ";
			ofs<<consume<<" ";
			ofs<<category<<" ";
			ofs<<remark<<" "<<endl;
			ofs.close(); 
			cout<<"֧���ѳɹ���¼��"<<endl;
			break;
		case 7 : 
		    cout<<"�Ѱ�ȫ�˳���"<<endl;
		    exit(0); 
		default : 
		    cout<<"�����������������룡"<<endl;
		    break;
	}
	system("pause");
	system("cls");
	}
	system("pause");
	return 0;
} 
