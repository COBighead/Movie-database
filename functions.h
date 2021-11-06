//
// Created by zct on 2020/11/7.
//


#ifndef ZHANG_PENG_FINAL_PROJECT_FUNCTIONS_H
#define ZHANG_PENG_FINAL_PROJECT_FUNCTIONS_H

#include <iostream>
#include <vector>
#include <fstream>
#include <string>
using namespace std;

class Movie{
private:
    string name;
    string year;
    string nomin;
    string rating;
    string duration;
    string genre1,genre2;
    string release;
    string meta;
    string syno;
public:
    void setname(string _name){name=_name;}
    void setyear(string _year){year=_year;}
    void setnomin(string _nomin){nomin=_nomin;}
    void setrating(string _rating){rating=_rating;}
    void setduration(string _duration){duration=_duration;}
    void setgenre1(string _genre1){genre1=_genre1;}
    void setgenre2(string _genre2){genre2=_genre2;}
    void setrelease(string _release){release=_release;}
    void setmeta(string _meta){meta=_meta;}
    void setsyno(string _syno){syno=_syno;}

    string getname(){return name;}
    string getyear() const{return year;}
    string getnomin() const{return nomin;}
    string getrating() const{return rating;}
    string getduration() const{return duration;}
    string getgenre1() {return genre1;}
    string getgenre2() {return genre2;}
    string getrelease() {return release;}
    string getmeta() const {return meta;}
    string getsyno() {return syno;}

};

void readmov(vector<Movie> &movies);//Read in file of movie information to vector in order to create a database.
void addmov(vector<Movie>&movies);//Create a new element and let user input information about the new movie. Write the information into new element.
void searchname(vector<Movie>&movies);//User inputs name, the function traverses the vector to compare the information and return result.
void sort(vector<Movie>&movies);//Using bubble sort to sort data by single designated field .
void display(vector<Movie>&movies);//Display the data file
void complete(vector<Movie>&movies);//Function traverse the whole database to match the information in every field with the information that user inputs.
void partial(vector<Movie>&movies);//Function traverse the whole database to see if any information contains keyword that user inputs.
void output(vector<Movie>&movies);//Output a new file from modified database.

#endif //ZHANG_PENG_FINAL_PROJECT_FUNCTIONS_H
