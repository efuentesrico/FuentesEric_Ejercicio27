#include <iostream>
using namespace std

void integrate(float w);


int main(void){
    
    float w;
    cout<<"Ingrese la constante."<<endl;
    cin>>w;
    integrate(w);
    
    return 0;
}
void integrate(float w){
    float t;
    float deltat;
    float y;
    float tf;
    t = 0.0;
    deltat = 0.0001;
    y=1;
    tf=4/w;
    
    while(t<tf){
        cout<<t<<" "<<y<<endl;
        t=t+deltat;
        y=y-(deltat*w*y);
    }
}