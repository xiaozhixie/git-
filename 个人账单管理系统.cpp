#include<iostream>
#include<string>
#include<fstream>
using namespace std;
void menu(){
		cout<<"================================="<<endl;
        cout<<"    ��ӭʹ�ø����˵�����ϵͳ     "<<endl;
        cout<<"================================="<<endl;
        cout<<"��ѡ�������"<<endl;
        cout<<"1. ��¼����"<<endl;
        cout<<"2. ��¼֧��"<<endl;
        cout<<"3. �鿴�����˵�"<<endl;
        cout<<"4. ��ѯ�˵�"<<endl;
        cout<<"7. �˳�ϵͳ"<<endl;
        cout<<"������ѡ����ţ�"; 
	}
int main(){
	ofstream ofs;
	ifstream ifs;
	while(1){
	menu();
	int choice;
	double revenue;
	double consume;
	string date;
	string date1;
	string startdate;
	string enddate;
	string category1;
	string category;
	string remark;
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
		case 3 :
			cout<<"����Ϊ���������¼��"<<endl;
			ifs.open("�����¼.txt",ios::in);
			while(ifs>>date&&ifs>>revenue&&ifs>>category&&ifs>>remark){
				cout<<date<<" "<<revenue<<" "<<category<<" "<<remark<<endl;
			}
			ifs.close();
			cout<<"----------------------------------"<<endl; 
			cout<<"����Ϊ����֧����¼��"<<endl;
			ifs.open("֧����¼.txt",ios::in);
			while(ifs>>date&&ifs>>consume&&ifs>>category&&ifs>>remark){
				cout<<date<<" "<<consume<<" "<<category<<" "<<remark<<endl;
			}
			ifs.close(); 
		    break;
		case 4 :
			cout<<"----��ѯ�˵�����----"<<endl; 
			cout<<"1.��ָ�����ڲ�ѯ"<<endl;
			cout<<"2.�����ڷ�Χ��ѯ"<<endl;
			cout<<"3.������ѯ"<<endl;
			int choice1;
			cin>>choice1;
			switch(choice1){
			  case 1 :
				cout<<"������ָ�����ڣ�YYYY-MM-DD����";
				cin>>date1;
				cout<<"����Ϊ���������¼��"<<endl;
			    ifs.open("�����¼.txt",ios::in);
			    while(ifs>>date&&ifs>>revenue&&ifs>>category&&ifs>>remark){
				    if(date1.compare(date)==0){
					   cout<<date<<" "<<revenue<<" "<<category<<" "<<remark<<endl;
				    }
		    	}
			    ifs.close();
			    cout<<"----------------------------------"<<endl; 
		       	cout<<"����Ϊ����֧����¼��"<<endl;
		    	ifs.open("֧����¼.txt",ios::in);
		    	while(ifs>>date&&ifs>>consume&&ifs>>category&&ifs>>remark){
			     	if(date1.compare(date)==0){
					   cout<<date<<" "<<consume<<" "<<category<<" "<<remark<<endl;
				    }
		     	}
		     	ifs.close();
		     	break;
		      case 2 :
		      	cout<<"�����뿪ʼ���ڣ�YYYY-MM-DD����";
		      	cin>>startdate;
		      	cout<<"������������ڣ�YYYY-MM-DD����";
		      	cin>>enddate;
		      	cout<<"����Ϊ���������¼��"<<endl;
			    ifs.open("�����¼.txt",ios::in);
			    while(ifs>>date&&ifs>>revenue&&ifs>>category&&ifs>>remark){
				    if(date>=startdate && date<=enddate){
					   cout<<date<<" "<<revenue<<" "<<category<<" "<<remark<<endl;
				    }
		    	}
			    ifs.close();
			    cout<<"----------------------------------"<<endl; 
		       	cout<<"����Ϊ����֧����¼��"<<endl;
		    	ifs.open("֧����¼.txt",ios::in);
		    	while(ifs>>date&&ifs>>consume&&ifs>>category&&ifs>>remark){
			     	if(date>=startdate && date<=enddate){
					   cout<<date<<" "<<consume<<" "<<category<<" "<<remark<<endl;
				    }
		     	}
		     	ifs.close();
		      	break;
		      case 3 :
		      	cout<<"�����������в�ѯ��";
		      	cin>>category1;
				cout<<"����Ϊ���������¼��"<<endl;
			    ifs.open("�����¼.txt",ios::in);
			    while(ifs>>date&&ifs>>revenue&&ifs>>category&&ifs>>remark){
				    if(category.compare(category1)==0){
					   cout<<date<<" "<<revenue<<" "<<category<<" "<<remark<<endl;
				    }
		    	}
			    ifs.close();
			    cout<<"----------------------------------"<<endl; 
		       	cout<<"����Ϊ����֧����¼��"<<endl;
		    	ifs.open("֧����¼.txt",ios::in);
		    	while(ifs>>date&&ifs>>consume&&ifs>>category&&ifs>>remark){
			     	if(category.compare(category1)==0){
					   cout<<date<<" "<<consume<<" "<<category<<" "<<remark<<endl;
				    }
		     	}
		     	ifs.close();
		      	break;
			}
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
