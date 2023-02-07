#include <iostream>
using namespace std;
int main ()
{
    int max;
   
    int min=10000;
    
    string A;
    
    string B;
    
	cout<<" Enter the count of students : ";
   
    int count;
   
    cin>> count;
    
    for (int i=0 ; i<count ; i++){

	string name[count];
	
	cout<<" Enter student names : "<<endl;
	
	for (int i=0 ; i<count ; i++)
	
{	cin>>name[i];
}
    int grade[i];

    cout<<" Enter student Grade : "<<endl;
    
    for (int i=0 ; i<count ; i++){
    
    cin>>grade[i];
    
    if(grade[i] < min)
    {
    	min = grade[i];
    	
    	B = name[i];

	}
  
  
    if(grade[i] > max)
    {
    	max = grade[i];
    	
    	 A = name[i];

	} 
    
}
	for (int i=0 ; i<count ; i++){

	
	cout<<endl<<name[i]<<" : "<<grade[i]<<endl;
}

    cout <<endl<<" max grade belongs to : "<<A;
    
    cout <<endl<<" min grade belongs to : "<<B;
    
	return 0;
	
}



}
	
