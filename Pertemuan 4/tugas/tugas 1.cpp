#include <iostream>
using namespace std;


class contoh {
    private:
       
        int nilai;
        
    public:
        
        contoh(int n) {    
            nilai = n;
        }
        int getNum() {
            return nilai;
        }
};


int main() {
   
    contoh obj(666);
    cout << "Nilai Yang Diinput: " << obj.getNum() << endl;

    return 0;
}
