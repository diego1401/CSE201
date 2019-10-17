#include "LinkedList.cpp"
#include <cstdlib>

int main(){
    LinkedList L;
    for (int i=0;i<101;i++){
        int r = rand() % 11;
        L.append(r);
        }
    L.display();
    return 0;
    }
