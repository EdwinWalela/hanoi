#include <iostream>
using namespace std;

int counter = 0;
void move(int n, char initial, char dest, char temp);//function prototype

void move(int n, char initial, char dest, char temp){
//Goal:: move n disks from A to C (A is full, B & C are empty)
    if(n != 0){
        move(n-1,initial,temp,dest);//first,move (n-1) from A to B using C
        // move disk n from A to C
        cout<<"  Moving disk "<<n<<" from "<<initial<<" to "<<dest<<endl<<endl;
        counter++;
        move(n-1,temp,dest,initial); //move (n-1) from B to C (using A)
    }
}

int main()
{
    system("cls");
    int number;
    cout<<"Number of disks to move: ";
    cin>>number;
    cout<<"-----------------------------"<<endl;
    move(number,'A','C','B');
    cout<<"-----------------------------"<<endl;
    cout<<"\nTask completed in "<<counter<<" moves !... :)"<<endl;
}


