#include<iostream>
#include<string>
#include<fstream>
using namespace std;
void menu(){
		cout<<"================================="<<endl;
        cout<<"    欢迎使用个人账单管理系统     "<<endl;
        cout<<"================================="<<endl;
        cout<<"请选择操作："<<endl;
        cout<<"1. 记录收入"<<endl;
        cout<<"2. 记录支出"<<endl;
        cout<<"3. 查看所有账单"<<endl;
        cout<<"4. 查询账单"<<endl;
        cout<<"7. 退出系统"<<endl;
        cout<<"请输入选择序号："; 
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
		    cout<<"请输入收入信息：";
		    cout<<"日期（YYYY-MM-DD）：";
			cin>> date;
		    cout<<"金额：";
			cin>> revenue; 
			while(1){
				if(revenue<0){
				cout<<"输入有误,请重新输入：";
				cin>>revenue;
				continue;
			}
			break;
			}
			cout<<"类别（如工资、奖金等）：";
			cin>> category;
			cout<<"备注：";
			cin>> remark;
			ofs.open("收入记录.txt",ios::out|ios::app);
			ofs<<date<<" ";
			ofs<<revenue<<" ";
			ofs<<category<<" ";
			ofs<<remark<<" "<<endl;
			ofs.close();
			cout<<"收入已成功记录！"<<endl; 
			break;
		case 2 : 
		    cout<<"请输入支出信息：";
		    cout<<"日期（YYYY-MM-DD）：";
			cin>> date;
		    cout<<"金额：";
			cin>> consume; 
			while(1){
				if(consume<0){
				cout<<"输入有误,请重新输入：";
				cin>>consume;
				continue;
			}
			break;
			} 
			cout<<"类别：";
			cin>> category;
			cout<<"备注：";
			cin>> remark; 
			ofs.open("支出记录.txt",ios::out|ios::app);
			ofs<<date<<" ";
			ofs<<consume<<" ";
			ofs<<category<<" ";
			ofs<<remark<<" "<<endl;
			ofs.close(); 
			cout<<"支出已成功记录！"<<endl;
			break;
		case 3 :
			cout<<"下面为所有收入记录："<<endl;
			ifs.open("收入记录.txt",ios::in);
			while(ifs>>date&&ifs>>revenue&&ifs>>category&&ifs>>remark){
				cout<<date<<" "<<revenue<<" "<<category<<" "<<remark<<endl;
			}
			ifs.close();
			cout<<"----------------------------------"<<endl; 
			cout<<"下面为所有支出记录："<<endl;
			ifs.open("支出记录.txt",ios::in);
			while(ifs>>date&&ifs>>consume&&ifs>>category&&ifs>>remark){
				cout<<date<<" "<<consume<<" "<<category<<" "<<remark<<endl;
			}
			ifs.close(); 
		    break;
		case 4 :
			cout<<"----查询账单功能----"<<endl; 
			cout<<"1.按指定日期查询"<<endl;
			cout<<"2.按日期范围查询"<<endl;
			cout<<"3.按类别查询"<<endl;
			int choice1;
			cin>>choice1;
			switch(choice1){
			  case 1 :
				cout<<"请输入指定日期（YYYY-MM-DD）：";
				cin>>date1;
				cout<<"下面为所有收入记录："<<endl;
			    ifs.open("收入记录.txt",ios::in);
			    while(ifs>>date&&ifs>>revenue&&ifs>>category&&ifs>>remark){
				    if(date1.compare(date)==0){
					   cout<<date<<" "<<revenue<<" "<<category<<" "<<remark<<endl;
				    }
		    	}
			    ifs.close();
			    cout<<"----------------------------------"<<endl; 
		       	cout<<"下面为所有支出记录："<<endl;
		    	ifs.open("支出记录.txt",ios::in);
		    	while(ifs>>date&&ifs>>consume&&ifs>>category&&ifs>>remark){
			     	if(date1.compare(date)==0){
					   cout<<date<<" "<<consume<<" "<<category<<" "<<remark<<endl;
				    }
		     	}
		     	ifs.close();
		     	break;
		      case 2 :
		      	cout<<"请输入开始日期（YYYY-MM-DD）：";
		      	cin>>startdate;
		      	cout<<"请输入结束日期（YYYY-MM-DD）：";
		      	cin>>enddate;
		      	cout<<"下面为所有收入记录："<<endl;
			    ifs.open("收入记录.txt",ios::in);
			    while(ifs>>date&&ifs>>revenue&&ifs>>category&&ifs>>remark){
				    if(date>=startdate && date<=enddate){
					   cout<<date<<" "<<revenue<<" "<<category<<" "<<remark<<endl;
				    }
		    	}
			    ifs.close();
			    cout<<"----------------------------------"<<endl; 
		       	cout<<"下面为所有支出记录："<<endl;
		    	ifs.open("支出记录.txt",ios::in);
		    	while(ifs>>date&&ifs>>consume&&ifs>>category&&ifs>>remark){
			     	if(date>=startdate && date<=enddate){
					   cout<<date<<" "<<consume<<" "<<category<<" "<<remark<<endl;
				    }
		     	}
		     	ifs.close();
		      	break;
		      case 3 :
		      	cout<<"请输入类别进行查询：";
		      	cin>>category1;
				cout<<"下面为所有收入记录："<<endl;
			    ifs.open("收入记录.txt",ios::in);
			    while(ifs>>date&&ifs>>revenue&&ifs>>category&&ifs>>remark){
				    if(category.compare(category1)==0){
					   cout<<date<<" "<<revenue<<" "<<category<<" "<<remark<<endl;
				    }
		    	}
			    ifs.close();
			    cout<<"----------------------------------"<<endl; 
		       	cout<<"下面为所有支出记录："<<endl;
		    	ifs.open("支出记录.txt",ios::in);
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
		    cout<<"已安全退出！"<<endl;
		    exit(0); 
		default : 
		    cout<<"输入有误，请重新输入！"<<endl;
		    break;
	}
	system("pause");
	system("cls");
	}
	system("pause");
	return 0;
} 
