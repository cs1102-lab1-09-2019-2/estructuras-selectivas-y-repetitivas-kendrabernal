
#include <iostream>
#include <vector>

using namespace std;


int main() {
  int numeros[1000],n,mayor=0;
  cout<<"n: ";
  cin>>n;

  for (int i=0;i<n;i++){
    
    cin>>numeros[i];

    if (numeros[i]>mayor){
      mayor=numeros[i];
    }

  }
  cout<<"\nEl valor maximo es: "<<mayor<<endl;

}
