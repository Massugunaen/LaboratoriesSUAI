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

//#include <conio.h> 
//#include <stdio.h> 
//#include <iostream>
//#define true 1 
//#define false 0
//using namespace std;
//
//string fuck (std::string lol, std::string kek){
//	std::string bratnavek = lol + kek;
//	return bratnavek;
//};
//
//
//int main(void){
//	std::string a = "Hello";
//	std::string b = "wORLD";
//	
//	std::cout << fuck(a,b) << std::endl;
//	
//}


//#include <iostream>
//
//int sum (int input, int output){
//    do{
//        std::cin >> input;
//        output = output + input;
//    }while (input != 0);
//    return output;
//};
//
//int main() {
//    int input, output;
//    std::cin>> input;
//    std::cout << sum(input,output);
//    
//    return 0;
//}





//#include <iostream>
//using namespace std;
//
//int summ (int enter, int counter)
//{
//if (enter == 0) {
//return counter;
//} else {
//cin >> enter;
//return summ (enter, counter + enter);
//}
//}
//
//int main() {
//int enter=-1,counter = 0;
//cout << summ (enter, counter);
//return 0;
//}



//#include <iostream>
//#include <cmath>
//
//double power(double a,int n) {
//    if (n == 0) {
//        return 1;
//    }
//    {
//        return (pow(a,n));
//    }
//};
//
//int main() {
//    int a,n;
//    std::cout<< power(a,n) << std::endl;
//    return 0;
//}

//#include <conio.h> 
//#include <stdio.h> 
//#include <iostream>
//#include <vector>
//
//int main() {
//
//int n;
//std::cin >> n;
//std::vector <int> a(n);
//
//for (int i = 0; i < n; i++) {
//	std::cin >> a[i];
//}
//for (int i = n - 1; i >= 0; i --){
//	std::cout << a[i] << " ";
//}
//
//return 0;
//}


//#include <conio.h> 
//#include <cstdio> 
//#include <iostream>
//#include <vector>
//
//
//int main(){
//	
//	bool x;
//	FILE * file = fopen("SuperSecretChat.txt", "r");
//	
//	if (file != NULL){
//		
//	}
//}


//int main(){
//	const char *t = "text";
//	const char *p = "text";
//	
//	if (*t !=*p){
//		std::cout << "yes" << std::endl;
//	}
//	else {
//		std::cout << "no" << std::endl;
//	}
//}


//#include <iostream>
//#include <vector>
//
//int main(){
//    int n;
//    std::cin >> n;
//    vector <int> a(n);
//
//    for (int i = 0; i < n; i++) {
//        std::cin >> a[i];
//    }
//
//    for(int i = 0; i < n; i++) {
//        if (a[i] > 0) {
//            std::cout << a[i];
//        }
//    }
//}

//#include <iostream>
//#include <cmath>

//double S (double a, double b, double c){
//    double p = ((1/2)*(a+b+c));
//    double s = pow((p*(p-a)*(p-b)*(p-c)),(1/2));
//    return s;
//}
//
//int main() {
//    double a,b,c,s;
//    std::cin >> a >> b >> c;
//    double p;
//    double half = 0.5;
//    p = half*(a+b+c);
//    
//    s = pow((p*(p-a)*(p-b)*(p-c)),half);
//    std::cout << s << std::endl;
//    
//    return 0;
//}




#include <iostream>

int main() {
    int input, minimal;
    std::cin >> input;
    int arr[input];

    for (int i = 0; i < input; i++) {
        std::cin >> arr[i];
    }

    for (int i = 0; i < input; i++) {
        if (arr[i]%2 == 1) {
            minimal = arr[i];
        }
    }
    
    for ()
    
    

    std::cout << minimal;

    return 0;
}


#include <iostream>
#include <cmath>

int main() {
    int i, i1, i2;
    std::cin >> i >> i1 >> i2;

    if (i >= i1 && ) {
        
    }
    
    // if (i >= i1) {
        
    // }
    
    // if (i >= i1) {
        
    // }
    
    return 0;
}


#include <iostream>

int main() {
    int input, max_el, counter=0;
    std::cin >> input;

    while (input != 0) {
        std::cin >> input;
        
		if (input < max_el) {
            max_el = input;
        }
    }
    std::cout << max_el;


    return 0;
}











