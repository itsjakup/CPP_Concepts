

#include<iostream>
using namespace std ;
int main ()
{
	int m,n,i,j,sasia =0;
	cout<<"vendos madhesine e matrices ";
	cin>>m>>n;
	int M [m][n];
	for (int i=0;i<m;i++)
	{
		for (int j=0;j<n;j++)
		cin>>M[i][j];
		
	}
	for (int i=0;i<m;i++)
	{
		for (int j=0;j<n;j++)
		cout<<M[i][j]<<" ";
		cout<<endl;
		
	}
		for (j = 0; j < n; j++) {
        sasia = 0;
        for (i = 0; i < m; i++) {
            if (M[i][j] % 2 == 0)
                sasia++;
        }

        if (sasia == 0)
            cout << "Ne kolonen ska nr cift" << endl;
    }

		return 0;
}


/*//collatz numbers me funksion

#include <iostream>
using namespace std;

int collatz_number(int n) {
    while (n != 1) {
        cout << n << " ";
        if (n % 2 == 0)
            n = n / 2;
        else
            n = 3 * n + 1;
    }
    cout << n << endl;
    
    return n;
}

int main() {
    int n;
    cin >> n;
    
    collatz_number(n);
    
    return 0;
}*/


/*#include <iostream>
using namespace std;
int main() {
    int n, i, nota;
    cout << "Numri i studenteve: ";
    cin >> n;

    int v[n];
    for (i = 0; i < n; i++) {
        cout << "Nota e studentit " << i + 1 << ": ";
           cin >> v[i];
    }

    int studenteMbi7 = 0;
    for (i = 0; i < n; i++){
        if (v[i] >= 7){
            studenteMbi7++;
        }
    }

    float perqindja = (float(studenteMbi7) / n) * 100.0;

    cout << "Perqindja e studenteve me nota mbi 7 eshte: " << perqindja << "%" <<endl;

    return 0;
}*/


/*//krijimi i matrices identitet
#include <iostream>
using namespace std;
int main(){
	int a,b,i,j;
	    cin>>a>>b;
	  
	    int matrix[a][b];
	        for(i=0; i<a; i++){
	      	    for(j=0; j<b; j++){
	      	cin>>matrix[i][j];
	      	 }
		  }
		//kthimi ne 1 i elementeve te eiagonales
		  for(i=0; i<a; i++){
	      	    for(j=0; j<b; j++){
	      	if(i==j)
	      	   matrix[i][j]=1;
	      	else
	    matrix[i][j]=0;
	      	 }
		  }
		//tani e afishojme
		for(i=0; i<a; i++){
			for(j=0; j<b; j++){
			   cout<<matrix[i][j];
		 }
		 cout<<endl;
     }
     
		return 0;
}*/


/*#include <iostream>
using namespace std;
int main()
{
	int i,n,s=0;
	
	cout<<"vendos nr e nxenesve ";
	  cin>>n;
	      int v[n];
	          cout<<"vendos notat ";
	          
        	for (i=0;i<n;i++)
	            cin>>v[i];
	            
	    for (i=0;i<n;i++)
	          cout<<v[i]<<" ";
	              cout<<endl;
	
	for (i=0; i<n; i++)
		s+=v[i];
		
		float nota_mesatare, p;
		nota_mesatare = float(s)/n;
	
	cout<<" nota mesatare eshte "<<nota_mesatare<<endl;
	
	  int sasia = 0;

	for (i=0;i<n;i++){
		if (v[i] >= nota_mesatare){
	     	sasia ++;
	}
	   }
	
	   p = (sasia / float (n)) * 100.0;
		
	cout << "Perqindja e studenteve me nota mbi 7 eshte " << p << "%" <<endl;
	return 0 ;
}*/



/*//ushtrimi me mesataren dhe perqindjen
#include<iostream>
using namespace std;

int main()
{
    int i, n, s = 0;
    double nota_mesatare, P;

    cout << "Vendos numrin e nxenesve: ";
    cin >> n;

    int v[n];

    cout << "Vendos notat: ";
    for (i = 0; i < n; i++)
        cin >> v[i];

    cout << "Notat e vendosura: ";
    for (i = 0; i < n; i++)
        cout << v[i] << " ";
    cout << endl;

    for (i = 0; i < n; i++)
    {
        s = v[i]+s;
        nota_mesatare = double(s) / n;
    }

    cout << "Nota mesatare eshte: " << nota_mesatare << endl;

    int sasia = 0;
    for (i = 0; i < n; i++) {
        if (v[i] > nota_mesatare)
            sasia++;
    }

    P = (sasia / double(n)) * 100.0;

    cout << "Perqindja e studenteve me nota mbi mesatare eshte: " << P << "%" << endl;

    

    return 0;
}*/



/*//ushtrimi me matricen identitet
#include <iostream>
using namespace std;
int main(){
	
	int a,b,i,j;
	cout<<" vendos dimensionet e matrices: ";
	   cin>>a>>b;
	   
	int matrix[a][b];
	    for(i=0; i<a; i++){
	    	for(j=0; j<b; j++){
	    		cin>>matrix[i][j];
			}
		}
		
	for(i=0; i<a; i++){
		for(j=0; j<b; j++){
			cout<<matrix[i][j]<<" ";
		}
		cout<<endl;
	}
	  bool identity = true;
	   for(i=0; i<a; i++){
		   for(j=0; j<b; j++){
	if ((i == j && matrix[i][j] != 1) || (i != j && matrix[i][j] != 0))
      identity = false;
	  }
   }
		if(identity)
		cout<<" matrix is an identity matrix";
	else 
	    cout<<" matrix is not an identity matriz";
cout<<endl;
		
   return 0;
}*/



/*//ushtrimi me progresionin aritmetik
#include <iostream>
using namespace std;
int arithmetic_progression(int sasia_e_kufizave, int kufiza_e_pare , int hapi){
	int i;
	for(i=0; i<sasia_e_kufizave; i++){
	cout<<kufiza_e_pare<<" ";
        kufiza_e_pare += hapi;
     }
    return sasia_e_kufizave;
 }

int main(){
	int sasia_e_kufizave, kufiza_e_pare, hapi;
	    cout<<" vendos sasine e kufizave: ";
	        cin>>sasia_e_kufizave;
	        
	   cout<<" vendos kufizen e pare: ";
	       cin>>kufiza_e_pare;
	       
	   cout<<" vendos hapin: ";
	   cin>>hapi;
	   
	 arithmetic_progression(sasia_e_kufizave, kufiza_e_pare, hapi);
	return 0;
}*/


/*//ushtrimi me prodhimin e rreshtave me kolonat e matrices
#include <iostream>
using namespace std;
int main(){
	int a,b,i,j, p=1;
	   cout<<" vendos permasat e matrices: ";
	     cin>>a>>b;
	int matrix[a][b];
	  //i japim elementet
	    for(i=0; i<a; i++){
	    	for(j=0; j<b; j++){
	    		cin>>matrix[i][j];
			}
		}
		//afishojme njeher matrice e pare
	for(i=0; i<a; i++){
	    	for(j=0; j<b; j++){
	    		cout<<matrix[i][j]<<" ";
			}
			cout<<endl;
		}
	
	//matrica e re
	for(i=0; i<a; i++){
	    	for(j=0; j<b; j++){
	    		p*=matrix[i][j];
			}
			cout<<" matrica e re eshte; "<<i+1<<p<<endl;
		}
	return 0;
}*/


/*//numrat e persosur
#include <iostream>
using namespace std;
int numrat_e_persosur(int numri){
	int i, n, sum = 0;
	   for(numri = 1; numri <= n; numri++){
        for(i = 2; i < numri; i++){
            if (numri % i == 0){
               break;
            }
        }
        
        if(i == numri){
            n++;
            sum+=i;
        }
    }
	  return n;
}

int main(){
	int numri;
	  cout<<" vendos nje numer: ";
	cin>>numri;
	   int numrat = numrat_e_persosur(numri);
	 cout<<" numrat e persosur per kete numer jane: "<<numrat;
	return 0;
}*/


/*ushtrim me pointer
#include <iostream>
using namespace std;
int main(){
	int a, b, s=0;
	 int *p1 = &a; 
	    int *p2 = &b;
	    cout<<" Vendos vleren e pointerit te pare:";
	cin>>*p1;
	  cout<<"Vendos vleren e pointerit te dyte: ";
	  cin>>*p2;
	   cout<<" Shuma e pointerave eshte "<<*p1 + *p2<<endl;
	return 0; 
}*/



/*//kerkimi binar
#include <iostream>
using namespace std;
int main(){
    int n, i, vlera, test, min, max;
    
    cout<<"vendos numrin e elementeve: ";
    cin>>n;
    
    int v[n];
    cout<<"vendos vlerat: ";
    for (i=0; i<n; i++)
        cin>>v[i];

    cout<<"vendos vleren qe do kerkosh: ";
    cin>>vlera;

    max = n - 1;
    min = 0;
    while (max >= min) {
        test = (min + max) / 2;
        if (v[test] == vlera) {
            cout << "vlera u gjet." << endl;
            break;
        } else if (v[test] > vlera) {
            max = test - 1;
        } else {
            min = test + 1;
        }
    }

    if (max < min)
        cout << "Vlera nuk u gjet." << endl;
    return 0;
}*/


/*//renditja selektuese
#include <iostream>
using namespace std;
int main(){
	int n, i, j, temp;
    cout<<"vendos madhesine e vektorit: ";
    cin>>n;

    int v[n];
        cout<<"vendos elementet e vektorit: ";
    for(i=0; i<n; i++){
        cin>>v[i];
      }

for (i=0; i<n-1; i++){
        for (j=i+1; j<n; j++){
            if (v[j]<v[i]){
                temp=v[i];
                 v[i]=v[j];
                  v[j]=temp;
            }
        }

    }
    
 cout<<"vektori i renditur: ";
    for (i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}*/



/*//bubble sort
#include <iostream>
using namespace std;
int main(){
	int n,i,j,temp;
	cout<<"vendos madhesine e vektorit: ";
	cin>>n;
	  int v[n];
	  cout<<"vendos elementet e vektorit: ";
	    for(i=0; i<n; i++){
        cin>>v[i];
    }
	  
	  //vektori i ri
	    for(i=0; i<n; i++){
	    	for(j=0; j<i-1; j++){
	    		if(v[j]>v[j+1]){
	    			temp=v[j];
	    			v[j]=v[j+1];
	    			v[j+1]=temp;
			     }
			}
		}
		
	cout<<"vektori i ri i renditur: ";
	 for(i=0; i<n; i++){
	    cout<<v[i]<<" ";
	}
		cout<<endl;
	return 0;
}*/













