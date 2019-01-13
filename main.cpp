#include <iostream>

using namespace std;

class kenar{
public:
    int kenar1;
    int kenar2;
    int kenar3;
protected:
    int alan;
    int hacim;
    
};

class kare: private kenar{
public:
    kare(int a,int b){
        kenar1=a;
        kenar2=b;
    }
    
    int getArea(){
        alan=kenar1*kenar2;
        return alan;
    }
    
    
};

class boyut: private kenar{

public:
    boyut(int a, int b, int c){
        kenar1=a;
        kenar2=b;
        kenar3=c;
    }
    int getVolume(){
        hacim=kenar1*kenar2*kenar3;
        return hacim;
    }

};

int main ()
{
    
    int x,y,z;
    int secim=0;
    cout<<"What do you want to calculate?"<<endl<<"1. Area"<<endl<<"2. Volume"<<endl<<"3. Exit"<<endl;
    
    cin>>secim;
    
    while(secim!=3){
        if (secim==1){
            cout<<"What is the size of first edge?"<<endl;
            cin>>x;
            cout<<endl<<"What is the size of second edge?"<<endl;
            cin>>y;
            kare k1(x,y);
            cout<<"The area size is "<<k1.getArea()<<"."<<endl;
        }
        else if(secim==2){
            cout<<"What is the size of first edge?"<<endl;
            cin>>x;
            cout<<endl<<"What is the size of second edge?"<<endl;
            cin>>y;
            cout<<endl<<"What is the height?"<<endl;
            cin>>z;
            boyut b1(x,y,z);
            cout<<"The volume is "<<b1.getVolume()<<"."<<endl;
        }
        else
            cout<<"You've enter an invalid value."<<endl;
        
        cout<<"What do you want to calculate?"<<endl<<"1. Area"<<endl<<"2. Volume"<<endl<<"3. Exit"<<endl;
        
        cin>>secim;
    }
    
    return 0;
}
