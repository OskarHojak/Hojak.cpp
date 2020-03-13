#include <iostream>
#include <fstream>
using namespace std;


	int main(int argc, char** argv) {
	
		fstream plik1;  
  	   	string napis[1000];
      	 int licznik[1000];
 		 int i=0;
 
   
 		  plik1.open("C:\\Zadanie\liczby.txt");
   
   if(plik1.good()) 
 	     while(!plik1.eof())  
    	   {
        
			plik1>>tekst[i];
			plik1>>liczba[i];
	    	napis[i] = napis[i].substr(0, liczby[i]); 
      		i++;
       	 	}
      
	   	plik1.close();
	  
	    
	     
  	plik1.open("C:\\Zadanie\liczby2.txt");
	
	for(int j=0;j<i;j++)
	{

		plik1<<napis[j]<<" "<<" "<<endl;
	}
 	cout<<"Gotowe. Plik został zapisany w liczby2.txt";
    plik1.close(); 

	                      
	return 0;
}
