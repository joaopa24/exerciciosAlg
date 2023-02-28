#include <iostream>
using namespace std;

///
int main()
{
    int matri, matri1=0, matri2=0;
    float nota, nota1=0, nota2=0;
    
    cin>>matri;
    while(matri != 0){
	     cin>>nota;
	     if(nota>=nota1){
			 matri2 = matri1;
			 nota2 = nota1;
			 
			 matri1 = matri;
			 nota1 = nota;
	     } else if(nota>nota2){
	         nota2 = nota;
	         matri2 = matri;
	     }
	     cin>>matri;
	}
	
	cout<<matri1<<" "<<nota1<<endl;
	cout<<matri2<<" "<<nota2<<endl;
	
	//outro método
	//int matri = 1;
	//while (matri != 0){
	 //  cin>>matri;
	  // if(matri != 0){
	   //   cin>>nota;
	  // }
	//}
    return 0;
}
