#include<iostream> 

double sum(double a ,double b ) {
	return(a+b) ; 

}

double mul(double a , double b) {

	return(a*b) ; 
}




in main () {
	
 double a , b ; 

 cout<<"enter two numbers "<<endl ; 
 cin>>a ;
 cin>>b ;
 cout<<"the sum is :"<<sum(a,b) << endl ;     
return(0) ; 

} 