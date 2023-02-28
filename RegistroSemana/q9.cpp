#include <iostream>
using namespace std;

struct corredor{
    int code;
    string name;
    int age;
    int weight;
    char gender;
    int qtdTreinos = 0;
};

struct treinos{
    int days;
    int code;
    double distance;
    int time;
};

treinos *aumenta(treinos *t, int &tamanho) {
	   treinos *aux = new treinos[tamanho+2];
	   for(int i=0;i<tamanho;i++){
	     aux[i] = t[i];
	   }
	   delete [] t;
	   tamanho+=2;
	   t = aux;

	   return t;
}

int olderMan(corredor *v, int &tamanho) {
       int older = v[0].age;
       int pos = 0;
       for(int i=0;i<tamanho;i++){
	     if(v[i].age > older and v[i].gender == 'M'){
	        older = v[i].age;
	        pos = i;
	     }
	   }
       return pos;
}

double calcDis(int codeRunner, treinos *v, int &tam){
     double distance = 0;
     for(int i=0; i<tam; i++){
         if(v[i].code == codeRunner){
	        distance+=v[i].distance;
	     }
     }
     return distance;
}  

int main(){
    int number;
    cin>>number;
    
    corredor v[number];
	for(int i=0; i<number; i++){
	    cin>>v[i].code;
	    cin>>v[i].name;
	    cin>>v[i].age;
	    cin>>v[i].weight;
	    cin>>v[i].gender; 
	}
	
	int day, i=0, tam=3;
	treinos *vt = new treinos[tam];
	do {
		cin>>day;
		if (day != -1) {
			if (i == tam){
            //aumenta treinos
		    vt = aumenta(vt,tam);
			}
			vt[i].days = day;
			cin>>vt[i].code>>vt[i].distance>>vt[i].time;
			i++;
		}
	}while (day != -1);
	
	int posOlder = olderMan(v, number); 

	int oldercode = v[posOlder].code;
	double distanceOlder = calcDis(oldercode, vt, tam);
	
	cout<<v[posOlder].name<<" "<<distanceOlder<<endl;
	
	for(int i=0; i<number; i++){
	  for(int j=0; j<tam; j++){
	    if(v[i].code == vt[j].code){
	       v[i].qtdTreinos += 1;
	    }
	  }
	}
	
	int maxT = 0;
	int posT = 0;
	for(int i=0; i<number; i++){
	   if(v[i].qtdTreinos > maxT){
	     maxT = v[i].qtdTreinos;
	     posT = i;
	   }
	}
    
    cout<<v[posT].name<<" "<<v[posT].age<<endl;
    
    for(int i=0; i<number; i++){
	  float sum=0;	
	  for(int j=0; j<tam; j++){
	    if(v[i].code == vt[j].code){
		  sum += vt[j].time;
		}
	  }
	  cout<<v[i].name<<" "<<sum/v[i].qtdTreinos<<endl;
	}
	 
    return 0;
}
