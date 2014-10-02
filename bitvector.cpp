/** 
 *   Date:    1 Oct, 2014
 *   Author:  Lisong Guo  <lisong.guo@me.com>
 *   
 *   A class that implements bit vector / bitmap 
 */
#include <iostream>
using namespace std;


class BitVector{
  private:
    int * bits;

  public:
    BitVector(int size){
        // An integer is 4 bytes, i.e. 32 bits
        bits = new int[ size >> 5 ]; 
    }

    ~BitVector(){
        // avoid memory leak.
        delete [] bits;
    }

    bool isSet(int num){
        int wordNum = num >> 5;
        int bitNum = num & 0x1F;
        return (bits[wordNum] & (1 << bitNum)) != 0 ;
    }

    void set(int num){
        int wordNum = num >> 5;
        int bitNum = num & 0x1F;
        bits[wordNum] |= 1 << bitNum;
    }

};


int main(){
    BitVector * bv = new BitVector(1000); 

    bv->set(100);
    if( bv->isSet(100) ){
        cout << "True" << endl;
    }

    return 0;
}









