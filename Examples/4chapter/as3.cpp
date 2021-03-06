#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

class Equation{
    private:
        int _a,_b,_c;
    public:
        Equation(int a, int b, int c):_a(a),_b(b),_c(c){
      
        
        }
        void solve(){
            
            int i,delta;
            double r1,r2,tmp;
            int a=_a,b=_b,c=_c;
            
            cout<<fixed;

            if (a == 0){
            
                if (b == 0){
                
                    if (c==0){
                    
                        i = 5;
                    }
                    else {
                    
                        i = 4;
                    }
                
                }
                else {
                
                    i = 6;
                    r1 = -c/double(b);
                }
            }
            else {
            
                delta = b*b - 4*a*c;
                
                if (delta > 0){
                    i = 1;
                    r1 = (-b + sqrt(delta))/double(2*a);
                    r2 = (-b - sqrt(delta))/double(2*a);
                    if (r1 > r2){
                        tmp = r1;
                        r1 = r2;
                        r2 = tmp;
                    }

                }
                else if (delta==0){
                
                    i = 2;
                    r1 = (-b+sqrt(delta))/double(2*a);
                }
                else{
                
                    i = 3;
                    
                }
            
            }

            cout<<i<<endl;

            switch (i){
                case 1:
                    cout<<setprecision(2)<<r1<<" "<<r2<<endl;
                    break;
                case 2:
                    cout<<setprecision(2)<<r1<<endl;
                    break;
                case 3:
                    break;
                case 4:
                    break;
                case 5:
                    break;
                case 6:
                    cout<<setprecision(2)<<r1<<endl;
                    break;
            
            }
        
        
        }

};


int main(){
    int a,b,c;
    cin>>a>>b>>c;
    Equation tmp(a,b,c);
    tmp.solve();

    return 0;
}
