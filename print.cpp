#include <iostream>
#include <iomanip>

using namespace std;
class subboard{
private:
    char curent[3][3]={'~','~','~','~','~','~','~','~','~'};
    char won='~';
public:
bool isWon(){
    if(won=='~') return false;
    else return true;
};
void isWon(char winner){
    won=winner;
}
void palcechar(int row, int col, char cariter){
    curent[row][col]=cariter;
}
void printrow(int row){
    for(int i=0; i<3; i++){
        cout<< curent[row][i];
        if(i<2) cout<<'|';
    }
}
};

int main(){
    subboard *bigboy[3][3];
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            bigboy[i][j]=new subboard;
        }
    }


    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            for(int k=0; k<3; k++){
                bigboy[i][j]->printrow(k);
                if(k<2)cout<<" | | ";
            }
            cout<<endl;
            if(j<2)cout<<"-+-+- | | -+-+- | | -+-+-"<<endl;
        }
        if(i<2){
            cout<<"----- + + ----- + + -----"<<endl;
            cout<<"----- + + ----- + + -----"<<endl;
        }
        
    }

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            delete bigboy[i][j];
            bigboy[i][j]=nullptr;
        }
    }
    return 0;
}