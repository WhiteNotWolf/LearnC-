#include <iostream>
#include <iterator>

int i = 10;

 int main(){
    int a[10];
    for(int j = 0; j < 3; j++)
        std::cin >> a[j];
    int *beg = std::begin(a);
    int *ed = std::end(a);
    while(beg < ed){
        std::cout << *beg << std::endl;
        beg++;
    }
    return 0;
}