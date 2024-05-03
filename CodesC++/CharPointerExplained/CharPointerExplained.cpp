#include <iostream>
#include <string>

using namespace std;

int main(){
    int arr[] = {110, 109, 36, 108, 0};
    char arrr[] = {'n','m','$','l','\0'};
    char * srr[] = {"Hello", "World"};

    cout<<arr<<endl;
    cout<<&(arr)<<endl;
    cout<<arrr<<endl;

    cout<<&srr[0]<<endl;
    cout<<srr<<endl;
    cout<<(void *) (srr[0])<<endl;

    return 0;
}