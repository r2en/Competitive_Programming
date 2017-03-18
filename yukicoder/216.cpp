#include <iostream>
using namespace std;

class Data{
    int height;
    int bottom;
    int area;
public:
    Data();
    ~Data(){}
    void calc();
    void show();
};

Data::Data(){
    height = 10;
    bottom = 5;
    area = 0;
}

void Data::calc(){
    area = height * bottom / 2;
}

void Data::show(){
    cout << area << "\n";
}

int main(){
    int n;
    int a[100];
    int b[100];
    scanf("%d",&n);
    Data obj;
    for(int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
    for(int i = 0; i < n; i++){
        scanf("%d",&b[i]);
    }
    obj.calc();
    obj.show();
    return 0;
}