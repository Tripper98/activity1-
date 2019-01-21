#include<iostream> 

double sum(double a ,double b ) {
	return(a+b) ; 

}

double mul(double a , double b) {

	return(a*b) ; 
}

double div(double a , double b) {

    if (b==0) cout<<"erreur " ;
 	return(a/b) ; 
}

double mod(double a , double b) {

	return(a%b) ; 
}


in main () {
	
 double a , b ; 

 cout<<"enter two numbers "<<endl ; 
 cin>>a ;
 cin>>b ;
 cout<<"the sum is :"<<sum(a,b) << endl ;
 cout<<"the division is :"<<div(a,b) << endl ;
 cout<<"the multiplication is :"<<mul(a,b) << endl ;
 cout<<a<<"% "<<b<<":"<<sum(a,b) << endl ;     
return(0) ; 

} 