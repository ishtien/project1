#include<iostream>
#include<ctime>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
	char map[22][52];
	char map1[22][52];
	int countdown,mana,card1,card2,card3,card4;
	srand((unsigned)time(NULL));
	cout<<"4 2 8 1 3 6 5 7"<<endl;
	while(1){
		cin >> countdown >> mana >> card1 >> card2 >> card3 >> card4;
		for(int j=0;j<22;j++){
			for(int k=0;k<52;k++){
				cin>>map[j][k];
			}
		}
		for(int j=0;j<22;j++){
			for(int k=0;k<52;k++){
				cin>>map1[j][k];
			}
		}
		int x=rand()%10+5,y=rand()%10+20;
		if(mana>0){
			int tmp=rand();
			tmp=tmp%2;
//			cout<<"1 5 12 20 ";
//			cout<<"1 "<<card1<<"3"<<"9";
//			cout<<"0";
			if(tmp==0){
				cout<<"1 "<<"2 7 "<<"19 ";
				cout<<"1 "<<"1 18 "<<"17 ";
				cout<<"1 "<<"8 5 "<<"23 ";
				cout<<"1 "<<"4 17 "<<"20 ";
				cout<<"0 "<<endl;
			}else if(tmp==1){
				cout<<"1 "<<"5 6 "<<"19 ";
				cout<<"1 "<<"6 4 "<<"17 ";
				cout<<"1 "<<"3 6 "<<"23 ";
				cout<<"1 "<<"7 16 "<<"23 ";
				cout<<"0 "<<endl;
			}
/*			}else if(tmp==2){
				cout<<"1 3 "<<x<<" "<<y<<" ";
				cout<<"1 7 "<<x<<" "<<y<<" ";
				cout<<"0 "<<endl;
			}else if(tmp==3){
				cout<<"1 4"<<x<<" "<<y<<" ";
				cout<<"1 8 "<<x<<" "<<y<<" ";
				cout<<"0 "<<endl;
			}else if(tmp==4){
				cout<<"1 5"<<x<<" "<<y<<" ";
*/		}
	}
	return 0;
}
