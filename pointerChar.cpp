#include<iostream>
using namespace std;

int main(){
    char ch[100]="CyberBeast";
    char *cptr=ch;
    cout<<"The entire sting is "<<ch<<endl;
    cout<<"The address of ch is "<<&ch<<endl;
    cout<<"The address of ch[0] is "<<&ch[0]<<endl; //this line //
    /*cout behavior is whenever it encounters the string or string address
    it will start printing the string untill it finds null character*/
    cout<<"The value from second index  in cptr is  "<<cptr+2<<endl;
    cout<<"The address of cptr is "<<&cptr<<endl;
    cout<<"cptr+1 is "<<cptr+1<<endl;
    cout<<"*cptr+1 is "<<*cptr+1<<endl;
    cout << "The address of ch[0] is " << static_cast<void*>(&ch[0]) << endl; /*chatbhai also failed first lol*/

    return 0;
}
