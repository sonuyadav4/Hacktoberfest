#include<iostream>
using namespace std;
class comp {
private:
    int real;
    int img;
public:
comp(int real,int img){
this->real=real;
this->img=img;
}
void print(){
cout<<real<<"+"<<"i"<<img<<endl;
}
void add(comp const &c2){
this->real=real+c2.real;
this->img=c2.img+img;
}
void mult(comp const &c2){
int a=(this->real*c2.real)-(this->img*c2.img);
int b=(this->real*c2.img)+(this->img*c2.real);
this->real=a;
this->img=b;

}
};
int main(){
comp c1(5,8);
comp c2(6,9);
c1.add(c1);
c1.print();
c2.print();
c1.mult(c2);
c1.print();
c2.print();
}
