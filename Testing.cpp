//#include <iostream>
//#include <cmath>
//
//int V1(int x,int y,int z){
//	int q;
//    return q = x*y*z;
//    };
//
//int V2(int x1,int y1,int z1){
//	int q2;
//    return q2 = x1*y1*z1;
//    };
//
//int main() {
//    int A1,B1,C1,A2,B2,C2;
//    std::cin >> A1 >> B1 >> C1 >> A2 >> B2 >> C2;
//    
//    if(V1(A1,B1,C1)==V2(A2,B2,C2)){
//        std::cout << "Boxes are equal" << std::endl;
//    }
//    else if(V1(A1,B1,C1) < V2(A2,B2,C2)){
//        std::cout << "The first box is smaller than the second one" << std::endl;
//    }
//    else if(V1(A1,B1,C1) > V2(A2,B2,C2)){
//        std::cout << "The first box is larger than the second one" << std::endl;
//    }
//    else{
//        std::cout << "Boxes are incomparable" << std::endl;
//    }
//    return 0;
//}


//#include <iostream>
//#include <cmath>
//
//int main(void){
//	int a,b;
//	char c;
//	std::cin >> a >> b;
//	std::cin >> c;
//	if (c == '%'){
//		std::cout << a%b << std::endl;
//	}
//	return 0;
//}


//#include <conio.h> 
//#include <stdio.h> 
//#include <iostream>
//using namespace std; 
//
//int main() {
//	int x = getch();
//	std::cout << ("%d", x) << std::endl;
//	getch();
//}

#include <conio.h> 
#include <stdio.h> 
#include <iostream>
#define true 1 
#define false 0
using namespace std;

string fuck (std::string lol, std::string kek){
	std::string bratnavek = lol + kek;
	return bratnavek;
};


int main(void){
	std::string a = "Hello";
	std::string b = "wORLD";
	
	std::cout << fuck(a,b) << std::endl;
	
}
