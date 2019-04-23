#include <fstream>
#include <iostream>
using namespace std;


void eulerS(float step,string name);
void implicitS(float step, string name);



int main(){
  
    float delta = 0.1;
    string nombre = "01";
    eulerS(delta,nombre);
    implicitS(delta,nombre);
    
    delta = 0.01;
    nombre = "001";
    eulerS(delta,nombre);
    implicitS(delta,nombre);
    
    delta = 1;
    nombre = "1";
    eulerS(delta,nombre);
    implicitS(delta,nombre);
  
    return 0;
}

void eulerS(float step, string name){
    
    string filename = "euler_"+name+".dat";
    ofstream outfile;
    outfile.open(filename);
    
    
    float y0 = 1;
    float t_in = 0;
    float t_f = 4;
    
    float t = t_in;
    float y = y0;
    
    while (t < t_f) {
        outfile << t << " " <<  y << endl;
        t += step;
        y = y - step*y;
    }
    
    outfile.close();
}


void implicitS(float step, string name){
    
    string filename = "implicit_"+name+".dat";
    ofstream outfile;
    outfile.open(filename);
    
    float y0 = 1;
    float t_in = 0;
    float t_f = 4;
    
    float t = t_in;
    float y = y0;
    
    while (t < t_f) {
        outfile << t << " " <<  y << endl;
        t += step;
        y = y / (1+step);
    } 
    
    outfile.close();
}