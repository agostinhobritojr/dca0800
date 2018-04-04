#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>

using namespace std;

int main(void){
  ifstream fin;
  string nome;
  vector<string> nomes;
  srand(time(0));
  fin.open("alunos.txt");
  while(fin.good()){
	getline(fin, nome);
	if(fin.good()){
	  nomes.push_back(nome);
	}
  }
  random_shuffle(nomes.begin(), nomes.end());
  for(int i=0; i<nomes.size(); i++){
	if (i == nomes.size()/2){
	  cout << "---------------" << endl;
	}
	cout << nomes[i] << endl;
  }
}  
