<<<<<<< HEAD
#include <fstream>
#include <string>
#include <iostream>

using namespace std;

void reading(double* p, int N, string filename);
void noise(double*p, int N);
void print(double* p, const int N, const string fname);


int main(void){
  int N=237;
  double* p = new double[N];
  const string filename = "noisy.txt";
  const string outputfile = "glatt.txt";
  
  
  reading(p,N, filename);
  noise(p,N);
  print(p,N, outputfile);
  
  delete[] p;
  return 0;
}
void reading(double* p, const int N, const string fname){
  ifstream in (fname.c_str());
  for(int i=1; i<N; i++){
    in>> p[i];
  }
  in.close();
}



void noise(double* p, int N){
  double tmp=p[0];
  double t;
  p[0]=(p[N-1] +tmp +p[1])/3; // erster Eintrag; da periodisch mit letztem Eintrag des Arrays
  
  for(int i=1;i<N-1;i++){
    t = p[i];
    p[i]=(tmp + t + p[i+1])/3;
    tmp=t;
  }

  p[N-1]=(tmp + p[N-1] + p[0])/3; //letzter Eintrag
}


void print(double* p, const int N, const string fname){
    ofstream out(fname.c_str());
    for(int i = 0; i < N; i++)
	out << p[i] << endl;
    out.close();
}
=======
// TTEEEEST
>>>>>>> 0e55b8d5fe4b666e79fea7e8ff59b8244f76d5ee
