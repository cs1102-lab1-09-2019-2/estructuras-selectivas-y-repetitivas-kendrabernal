#include <iostream>

using namespace std;
int main() {
  int N;
  bool intercalado=false;
  cin>>N;
  for (int i=0; i<N;i++){
    for (int j=0; j<N;j++){ 
      
      if(!intercalado){
        cout<<"@";
        
        
      }else
        cout<<"#";
        intercalado=!intercalado;
       
      
    }
    if (N%2==0){
      cout<<endl;
      intercalado=!intercalado;
    }else
      cout<<endl;

    
    
  }
  
}
