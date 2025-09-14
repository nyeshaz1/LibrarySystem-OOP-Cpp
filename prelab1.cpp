#include<iostream>
using namespace std;
class library{
	const int bookid;
	string title;
	string genre;

	public:
		static int totalbooks; // to count total books and keep track of id 
		//constructor 
		library(string t , string g):bookid(++totalbooks){ // here i used initializer list 
			title =t;
			genre=g;
		}
		void display() const {
			cout<<"Book ID : "<<bookid
			<<"\nTitle : "<<title
			<<"\nGenre : "<<genre<<endl;
		}
		
};
int library::totalbooks=0;
int main(){
    
	library p1("life ","fiction"),p2("PST","history"),p3("chemistry ","education");// creating three objects and calling them with aguments 
	// to display each object 
	p1.display();
	p2.display();
	p3.display();
	// finally the totAL books 
	cout<<"Total books: "<<library::totalbooks<<endl;
	return 0;
}