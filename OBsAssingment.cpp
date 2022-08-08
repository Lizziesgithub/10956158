#include <iostream> 
using namespace std;
void AverageProject(){
	int Number;    int Sum;   float count;   float AverageProject;
	Sum = 0;   count = 0;
	cout<<"Please enter your number : ";
	cin << Number; 
	cout<<"**********************************************************************************"<<endl;
	cout<<"Prime numbers below "<<Number<<" are listed below."<<endl;
	cout<<"**********************************************************************************"<<endl;
    for(int m=2;m<Number;m++){
    	int flag=0;
    	for(int i=2;i<=m/2;i++){
    		if(m%i==0){
    			flag=1; break;
	    	}
		}
		if (flag==0){
		cout<<m<<endl;
		Sum+=m;
		count+=1;
	    }
	}
	AverageProject = Sum/count;
	cout<<"The sum of the the printed prime numbers above is "<<Sum<<endl;
	cout<<"The count of the prime numbers is "<<count<<endl;
	cout<<"The average of the sum of the prime numbers above is "<<AverageProject<<endl;
}
int main(){
	AverageProject();
	return(0); 
	}