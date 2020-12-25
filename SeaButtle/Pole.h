#ifndef Pole_h
#define Pole_h

#include <vector>
#include <random>
using namespace std;

class Pole{
public:
    vector<vector<int>> pole;
    int shots[10][10];
    int AdrKor[5][10];
    Pole(){
        for (int i = 0; i < 10; i++){
            AdrKor[0][i] = 0;
            AdrKor[1][i] = 0;
            AdrKor[2][i] = 0;
            AdrKor[3][i] = 0;
            AdrKor[4][i] = 0;
        }
        for (int i = 0; i < 10; i++){
            for (int j = 0; j < 10; j++){
                shots[i][j] = 0;
            }
        }
    }
    Pole(vector<vector<int>> m){
        for (int i = 0; i < 10; i++){
            for (int j = 0; j < 10; j++){
                m[i][j] = 0;
            }
        }
        for (int i = 0; i < 10; i++){
            AdrKor[0][i] = 0;
            AdrKor[1][i] = 0;
            AdrKor[2][i] = 0;
            AdrKor[3][i] = 0;
            AdrKor[4][i] = 0;
        }
        for (int i = 0; i < 10; i++){
            for (int j = 0; j < 10; j++){
                shots[i][j] = 0;
            }
        }
        pole = m;
    }
    void clear(){
        for (int i = 0; i < 10; i++){
            for (int j = 0; j < 10; j++){
                pole[i][j] = 0;
            }
        }
    }
    void print(){
        cout <<"   | A | B | C | D | E | F | G | H | I | J |" <<endl;
        cout <<"--------------------------------------------" <<endl;
        for (int i = 0; i < 10 ; i++){
            cout <<setfill(' ') <<setw(2) << i+1;
            cout << " | ";
            for (int j = 0; j < 10; j++){
                if (pole[i][j] == 0) cout <<" ";
                else cout << pole[i][j];
                cout <<" | ";
            }
            cout <<endl;
            cout <<setfill('-') <<setw(44) <<"-" <<endl;
        }
    }
};

int poiskAdresa(int row, int col, int pal, int polog, int user);

void pointKor(int row, int col, int pal, int polog, int user);

int read(char y);

void pointKorablVruchnuy();

void pointHardPC();

void pointKorablPC(int pal, int colum);

void pointKorabl(int pal, int colum);

int find_korPC(int x, int y);

int find_korIg(int x, int y);

int Pobeda();

void kill_or_not(Pole& m, Pole& n);

void printpole();

void HodIgroka();

void HodPC();

#endif /* Pole_h */
