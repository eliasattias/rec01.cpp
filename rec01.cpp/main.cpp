//
//  main.cpp
//  rec01.cpp
//
//  Created by Elias Attias on 1/31/20.
//  Copyright © 2020 Elias Attias. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

//13

void display(const vector<int>& vec){
    for(int i:vec){
        cout << i << " ";
    }
}

//14
void times(vector<int>& vec){
    for (int i = 0; i < vec.size(); i++){
        vec[i] *= 2;
    }
    for(int i:vec){
         cout << i << " ";
    }
}

//15
void doubles(vector<int>& vec){
    for(int& i:vec){
        i = i*2;
    }
    for(int i:vec){
         cout << i << " ";
    }
}

int main(){
    //1
    std::cout << "Hello" << std::endl; // Only include iostream
    
    //2
    cout << "Hello" << endl;
    
    //3
    int x;
    cout << "x: " << x << endl;
    
    //4
    int y = 17;
    int z = 2000000017;
    double pie = 3.14159;
    cout << "size of x: " << sizeof(x) << endl;
    cout << "size of y: " << sizeof(y) << endl;
    cout << "size of z: " << sizeof(z) << endl;
    cout << "size of pie: " << sizeof(pie) << endl;
    
    //5
//    x = "felix"; Compilation error
    
    //6
    if (y >= 10 && y <= 20){
        cout << "y is between 10 and 20, inclusive" << endl;
    }
    
    //7
    for (int i = 10; i <= 20; i ++){
        cout << i << " ";
    }
    cout << endl;
    
    int number = 10;
    while(number <= 20){
        cout << number << " ";
        number ++;
    }
    
    cout << endl;
    int integer = 10;
    do {
        cout << integer << " ";
        integer ++;
    }while (integer <= 20);
    
    //8
    cout << endl;
    ifstream file;
    string filename;
    do{
        cout << "could not open the file, enter name: " << endl;
        cin >> filename;
        file.open(filename);
    }
    while(!file);
    
    //9
    string word;
    while (file >> word){
        cout << word << endl;
    }
    
    //10
    vector<int> vectorOfInts;
    for(int x = 10; x <= 100; x+=2){
        vectorOfInts.push_back(x);
    }
    
    //11
    for (int i = 0; i < vectorOfInts.size(); i++){
        cout << vectorOfInts[i] << " ";
    }
    cout << endl;
    for (int y : vectorOfInts){
        cout << y << " ";
    }
    cout << endl;
    
    //12
    vector<int> vecOfPrime{2,3,5,7,11,13,17,19};
    for(int i:vecOfPrime){
        cout << i << " ";
    }
    
    //13
    vector<int> vectOfInt(10,3);
    cout << endl;
    display(vectOfInt);
    
    //14
    cout << endl;
    times(vectOfInt);
    
    //15
    cout << endl;
    doubles(vectOfInt);
    
    //Additional section added during lab
    cout << endl;
    for (int i = vectOfInt.size() - 1; i >= 0; i--){
        cout << vectOfInt[i] << " ";
    }
    cout << endl;
}


    
