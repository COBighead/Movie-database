//
// Created by rbp on 2020/12/9.
//


#ifndef ZHANG_PENG_FINAL_PROJECT_FUNCTIONS2_H
#define ZHANG_PENG_FINAL_PROJECT_FUNCTIONS2_H

#include <iostream>
#include <vector>
#include <fstream>
#include <string>
using namespace std;

class Player{
private:
    //string the different class for the data
    string year;
    string award;
    string winner;
    string name;
    string film;
public:

    void setyear(string _year){year=_year;}
    void setaward(string _award){ award=_award;}
    void setwinner(string _winner){winner=_winner;}
    void setname(string _name){name=_name;}
    void setfilm(string _film){film=_film;}



    string getyear() const{return year;}
    string getaward() const{return award;}
    string getwinner() const{return winner;}
    string getname(){return name;}
    string getfilm() const{return film;}

};

void readname(vector<Player> &players); //Read in file of movie information to vector in order to create a database.
void addname(vector<Player>&plyaers);//Create a new element and let user input information about the new movie. Write the information into new element.
void searchname(vector<Player>&players);//User inputs name, the function traverses the vector to compare the information and return result.
void sort(vector<Player>&players);//Using bubble sort to sort data by single designated field .
void display(vector<Player>&players);//Display the data file
void complete(vector<Player>&players);//Function traverse the whole database to match the information in every field with the information that user inputs.
void partial(vector<Player>&players);//Function traverse the whole database to see if any information contains keyword that user inputs.
void output(vector<Player>&players);//Output a new file from modified database.

#endif //ZHANG_PENG_FINAL_PROJECT_FUNCTIONS2_H
