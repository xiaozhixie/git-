#include<iostream>
#include<string>
#include<fstream>
using namespace std;
void menu(){        //菜单显示 
		cout<<"================================="<<endl;
        cout<<"    欢迎使用个人账单管理系统     "<<endl;
        cout<<"================================="<<endl;
        cout<<"请选择操作："<<endl;
        cout<<"1. 记录收入"<<endl;
        cout<<"2. 记录支出"<<endl;
        cout<<"7. 退出系统"<<endl;
        cout<<"请输入选择序号："; 
	}
int main(){
	ofstream ofs;
	while(1){
	menu();
	int choice;
	double revenue; //收入 
	double consume; //支出 
	string date;    //日期 
	string category;  //类别 
	string remark;  //备注 
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
