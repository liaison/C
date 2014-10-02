/** 
 *   Date:    1 Oct, 2014
 *   Author:  Lisong Guo  <lisong.guo@me.com>
 *   
 *   A template class that can be used as a shifted list.
 */
#include <iostream>
using namespace std;


template <class T>
class ShiftedList{
  private:
    T * array;
    int size, offset;

  private: 
    int convertIndex(int i){
        int index = (i - offset) % size;
        while(index < 0) index += size;
        return index;
    }

  public:
    ShiftedList(int sz): offset(0), size(sz) {
        array = new T[size]; 
    }

    ~ShiftedList(){
        // avoid memory leak.
        delete [] array;
    }

    void setAt(int i, T t){
        array[convertIndex(i)] = t;
    }

    T getAt(int i){
        return array[convertIndex(i)];
    }

};


int main(){
    ShiftedList<int> * sl = new ShiftedList<int>(100); 

    sl->setAt(100, 1);
    cout << "Index:" << 100 << " value:" << sl->getAt(100) << endl; 
    
    return 0;
}









