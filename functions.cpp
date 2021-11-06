//
// Created by zct on 2020/11/7.
//

#include "functions.h"
void readmov(vector<Movie> &movies){
    ifstream infile;
    string head,tempstring;
    Movie temp;
    infile.open("pictures.csv");
    if (!infile.is_open()){
        cerr<<"Can't open file!"<<endl;
        exit(1);
    }//exception handling
    getline(infile,head);//omitting first line
    while (!infile.eof())//read until file ends
    {
        getline(infile,tempstring,',');
        temp.setname(tempstring);
        getline(infile,tempstring,',');
        temp.setyear(tempstring);
        getline(infile,tempstring,',');
        temp.setnomin(tempstring);
        getline(infile,tempstring,',');
        temp.setrating(tempstring);
        getline(infile,tempstring,',');
        temp.setduration(tempstring);
        getline(infile,tempstring,',');
        temp.setgenre1(tempstring);
        getline(infile,tempstring,',');
        temp.setgenre2(tempstring);
        getline(infile,tempstring,',');
        temp.setrelease(tempstring);
        getline(infile,tempstring,',');
        temp.setmeta(tempstring);
        getline(infile,tempstring);
        temp.setsyno(tempstring);
        movies.push_back(temp);
    }
    cout<<"Reading Pictures file Successful!"<<endl;
}

void addmov(vector<Movie>&movies){
    Movie temp;
    string tempstring;
    cout<<"Add movies"<<endl;
    cout<<"*******************"<<endl;
    cout<<"Please enter name"<<endl;
    cin>>tempstring;
    temp.setname(tempstring);//set up object's each attribute

    cout<<"Add movies"<<endl;
    cout<<"*******************"<<endl;
    cout<<"Please enter year"<<endl;
    cin>>tempstring;
    temp.setyear(tempstring);

    cout<<"Add movies"<<endl;
    cout<<"*******************"<<endl;
    cout<<"Please enter nominations"<<endl;
    cin>>tempstring;
    temp.setnomin(tempstring);

    cout<<"Add movies"<<endl;
    cout<<"*******************"<<endl;
    cout<<"Please enter rating"<<endl;
    cin>>tempstring;
    temp.setrating(tempstring);

    cout<<"Add movies"<<endl;
    cout<<"*******************"<<endl;
    cout<<"Please enter duration"<<endl;
    cin>>tempstring;
    temp.setduration(tempstring);

    cout<<"Add movies"<<endl;
    cout<<"*******************"<<endl;
    cout<<"Please enter genre1"<<endl;
    cin>>tempstring;
    temp.setgenre1(tempstring);

    cout<<"Add movies"<<endl;
    cout<<"*******************"<<endl;
    cout<<"Please enter genre2"<<endl;
    cin>>tempstring;
    temp.setgenre2(tempstring);

    cout<<"Add movies"<<endl;
    cout<<"*******************"<<endl;
    cout<<"Please enter release month"<<endl;
    cin>>tempstring;
    temp.setrelease(tempstring);

    cout<<"Add movies"<<endl;
    cout<<"*******************"<<endl;
    cout<<"Please enter metacritic"<<endl;
    cin>>tempstring;
    temp.setmeta(tempstring);

    cout<<"Add movies"<<endl;
    cout<<"*******************"<<endl;
    cout<<"Please enter release synopsis"<<endl;
    cin>>tempstring;
    temp.setsyno(tempstring);

    movies.push_back(temp);//add new object to vector

    cout<<"Your movie has been added successfully!"<<endl;
}

void searchname(vector<Movie>&movies){
    string keyword;
    bool found= false;
    cout<<"Search movies by name"<<endl;
    cout<<"*******************"<<endl;
    cout<<"Please enter name"<<endl;
    cin.ignore();
    getline(cin,keyword);

    for (int i=0;i<movies.size();i++)
    {
        if (movies[i].getname()==keyword)
        {
            cout<<"Movies found!"<<endl;
            cout<<"*******************"<<endl;
            cout<<"Name: "<<movies[i].getname()<<endl;
            cout<<"Year: "<<movies[i].getyear()<<endl;
            cout<<"Nomination: "<<movies[i].getnomin()<<endl;
            cout<<"Rating: "<<movies[i].getrating()<<endl;
            cout<<"Duration: "<<movies[i].getduration()<<endl;
            cout<<"Genre1: "<<movies[i].getgenre1()<<endl;
            cout<<"Genre2: "<<movies[i].getgenre2()<<endl;
            cout<<"Release: "<<movies[i].getrelease()<<endl;
            cout<<"Metacritic: "<<movies[i].getmeta()<<endl;
            cout<<"Synopsis: "<<movies[i].getsyno()<<endl;
            found= true;//return movies that are found
        }
    }

    if(!found)
    {
        cout<<"Movie not found!"<<endl;
    }
    cout<<endl;
}


void sort(vector<Movie>&movies){
    string field;
    Movie temp;
    bool nomatch=true;
    cout<<"Sort"<<endl;
    cout<<"*******************"<<endl;
    cout<<"Please enter the field you want to sort by(name,year,nominations,rating,duration,genre1,genre2,release,metacritic,synopsis)"<<endl;
    cin.ignore();
    getline(cin,field);

    if (field=="name")//using bubble sort algorithm to sort for each field
    {
        for (int i=0;i<movies.size()-1;i++)
        {
            for (int j=0;j<movies.size()-1-i;j++)
            {
                if (movies[j].getname()>movies[j+1].getname())
                {
                    temp=movies[j];
                    movies[j]=movies[j+1];
                    movies[j+1]=temp;
                }
            }
        }
        cout<<endl;
        cout<<"*******************"<<endl;
        cout<<"Sorted by name successful"<<endl;
        cout<<"*******************"<<endl;
        cout<<endl;
        nomatch= false;
    }

    if (field=="year")
    {
        for (int i=0;i<movies.size()-1;i++)
        {
            for (int j=0;j<movies.size()-1-i;j++)
            {
                if (movies[j].getyear()>movies[j+1].getyear())
                {
                    temp=movies[j];
                    movies[j]=movies[j+1];
                    movies[j+1]=temp;
                }
            }
        }
        cout<<endl;
        cout<<"*******************"<<endl;
        cout<<"Sorted by year successful"<<endl;
        cout<<"*******************"<<endl;
        cout<<endl;
        nomatch= false;
    }

    if (field=="nominations")
    {
        for (int i=0;i<movies.size()-1;i++)
        {
            for (int j=0;j<movies.size()-1-i;j++)
            {
                if (movies[j].getnomin()>movies[j+1].getnomin())
                {
                    temp=movies[j];
                    movies[j]=movies[j+1];
                    movies[j+1]=temp;
                }
            }
        }
        cout<<endl;
        cout<<"*******************"<<endl;
        cout<<"Sorted by nominations successful"<<endl;
        cout<<"*******************"<<endl;
        cout<<endl;
        nomatch= false;
    }

    if (field=="rating")
    {
        for (int i=0;i<movies.size()-1;i++)
        {
            for (int j=0;j<movies.size()-1-i;j++)
            {
                if (movies[j].getrating()>movies[j+1].getrating())
                {
                    temp=movies[j];
                    movies[j]=movies[j+1];
                    movies[j+1]=temp;
                }
            }
        }
        cout<<endl;
        cout<<"*******************"<<endl;
        cout<<"Sorted by rating successful"<<endl;
        cout<<"*******************"<<endl;
        cout<<endl;
        nomatch= false;
    }

    if (field=="duration")
    {
        for (int i=0;i<movies.size()-1;i++)
        {
            for (int j=0;j<movies.size()-1-i;j++)
            {
                if (movies[j].getduration()>movies[j+1].getduration())
                {
                    temp=movies[j];
                    movies[j]=movies[j+1];
                    movies[j+1]=temp;
                }
            }
        }
        cout<<endl;
        cout<<"*******************"<<endl;
        cout<<"Sorted by duration successful"<<endl;
        cout<<"*******************"<<endl;
        cout<<endl;
        nomatch= false;
    }

    if (field=="genre")
    {
        for (int i=0;i<movies.size()-1;i++)
        {
            for (int j=0;j<movies.size()-1-i;j++)
            {
                if (movies[j].getgenre1()>movies[j+1].getgenre1())
                {
                    temp=movies[j];
                    movies[j]=movies[j+1];
                    movies[j+1]=temp;
                }
            }
        }
        cout<<endl;
        cout<<"*******************"<<endl;
        cout<<"Sorted by genre successful"<<endl;
        cout<<"*******************"<<endl;
        cout<<endl;
        nomatch= false;
    }

    if (field=="release")
    {
        for (int i=0;i<movies.size()-1;i++)
        {
            for (int j=0;j<movies.size()-1-i;j++)
            {
                if (movies[j].getrelease()>movies[j+1].getrelease())
                {
                    temp=movies[j];
                    movies[j]=movies[j+1];
                    movies[j+1]=temp;
                }
            }
        }
        cout<<endl;
        cout<<"*******************"<<endl;
        cout<<"Sorted by release successful"<<endl;
        cout<<"*******************"<<endl;
        cout<<endl;
        nomatch= false;
    }

    if (field=="metacritic")
    {
        for (int i=0;i<movies.size()-1;i++)
        {
            for (int j=0;j<movies.size()-1-i;j++)
            {
                if (movies[j].getmeta()>movies[j+1].getmeta())
                {
                    temp=movies[j];
                    movies[j]=movies[j+1];
                    movies[j+1]=temp;
                }
            }
        }
        cout<<endl;
        cout<<"*******************"<<endl;
        cout<<"Sorted by metacritic successful"<<endl;
        cout<<"*******************"<<endl;
        cout<<endl;
        nomatch= false;
    }
    if (nomatch)
        cout<<"Enter valid field (name, year, nominations, ...)"<<endl;
}


void complete(vector<Movie>&movies){
    string keyword;
    vector<Movie> newlist;//create a new vector container to store search results
    string option;
    cout<<"Complete search"<<endl;
    cout<<"*******************"<<endl;
    cout<<"Please enter keyword"<<endl;
    cin.ignore();
    getline(cin,keyword);
    cout<<keyword<<endl;
    int count=1;//record number of movie
    for (int i=0;i<movies.size();i++)
    {
        if (movies[i].getname()==keyword||movies[i].getrelease()==keyword||movies[i].getgenre1()==keyword||movies[i].getgenre2()==keyword||movies[i].getduration()==keyword||movies[i].getrating()==keyword||movies[i].getnomin()==keyword||movies[i].getyear()==keyword||movies[i].getmeta()==keyword)
        {
            cout<<"Movie "<<count<<" found"<<endl;
            cout<<"*******************"<<endl;
            cout<<"Name: "<<movies[i].getname()<<endl;
            cout<<"Year: "<<movies[i].getyear()<<endl;
            cout<<"Genre 1: "<<movies[i].getgenre1()<<endl;
            cout<<"Genre 2: "<<movies[i].getgenre2()<<endl;
            cout<<"Duration: "<<movies[i].getduration()<<endl;
            cout<<"Rating: "<<movies[i].getrating()<<endl;
            cout<<"Nomination: "<<movies[i].getnomin()<<endl;
            cout<<"Release Month: "<<movies[i].getrelease()<<endl;
            cout<<"Metacritic: "<<movies[i].getmeta()<<endl;
            cout<<endl;
            count++;
            newlist.push_back(movies[i]);
        }
    }

    cout<<"Do you want further search?"<<endl;
    cout<<"press 1 for yes."<<endl;
    cout<<"press other keys for no."<<endl;
    cin>>option;
    if (option=="1")
        complete(newlist);
    else
        cin.ignore();
}


void partial(vector<Movie>&movies){
    string keyword;
    vector<Movie> newlist;
    string option;
    cout<<"Partial search"<<endl;
    cout<<"*******************"<<endl;
    cout<<"Please enter keyword"<<endl;
    cin.ignore();
    getline(cin,keyword);
    string::size_type match;// variable used to check if sub string exists.

    int count=1;
    for (int i=0;i<movies.size();i++)
    {
        match=movies[i].getname().find(keyword);
        if (match!=string::npos)//when keyword is sub string of match
        {
            cout<<"Movie "<<count<<" found"<<endl;
            cout<<"*******************"<<endl;
            cout<<"Name: "<<movies[i].getname()<<endl;
            cout<<"Year: "<<movies[i].getyear()<<endl;
            cout<<"Genre 1: "<<movies[i].getgenre1()<<endl;
            cout<<"Genre 2: "<<movies[i].getgenre2()<<endl;
            cout<<"Duration: "<<movies[i].getduration()<<endl;
            cout<<"Rating: "<<movies[i].getrating()<<endl;
            cout<<"Nomination: "<<movies[i].getnomin()<<endl;
            cout<<"Release Month: "<<movies[i].getrelease()<<endl;
            cout<<"Metacritic: "<<movies[i].getmeta()<<endl;
            newlist.push_back(movies[i]);//store that movie
            cout<<endl;
            count++;
            continue;// not need to compare the rest parts of this movie, so go to next loop
        }
        match=movies[i].getyear().find(keyword);

        if (match!=string::npos)
        {
            cout<<"Movie "<<count<<" found"<<endl;
            cout<<"*******************"<<endl;
            cout<<"Name: "<<movies[i].getname()<<endl;
            cout<<"Year: "<<movies[i].getyear()<<endl;
            cout<<"Genre 1: "<<movies[i].getgenre1()<<endl;
            cout<<"Genre 2: "<<movies[i].getgenre2()<<endl;
            cout<<"Duration: "<<movies[i].getduration()<<endl;
            cout<<"Rating: "<<movies[i].getrating()<<endl;
            cout<<"Nomination: "<<movies[i].getnomin()<<endl;
            cout<<"Release Month: "<<movies[i].getrelease()<<endl;
            cout<<"Metacritic: "<<movies[i].getmeta()<<endl;
            newlist.push_back(movies[i]);
            cout<<endl;
            count++;
            continue;
        }

        match=movies[i].getnomin().find(keyword);

        if (match!=string::npos)
        {
            cout<<"Movie "<<count<<" found"<<endl;
            cout<<"*******************"<<endl;
            cout<<"Name: "<<movies[i].getname()<<endl;
            cout<<"Year: "<<movies[i].getyear()<<endl;
            cout<<"Genre 1: "<<movies[i].getgenre1()<<endl;
            cout<<"Genre 2: "<<movies[i].getgenre2()<<endl;
            cout<<"Duration: "<<movies[i].getduration()<<endl;
            cout<<"Rating: "<<movies[i].getrating()<<endl;
            cout<<"Nomination: "<<movies[i].getnomin()<<endl;
            cout<<"Release Month: "<<movies[i].getrelease()<<endl;
            cout<<"Metacritic: "<<movies[i].getmeta()<<endl;
            newlist.push_back(movies[i]);
            cout<<endl;
            count++;
            continue;
        }

        match=movies[i].getrating().find(keyword);

        if (match!=string::npos)
        {
            cout<<"Movie "<<count<<" found"<<endl;
            cout<<"*******************"<<endl;
            cout<<"Name: "<<movies[i].getname()<<endl;
            cout<<"Year: "<<movies[i].getyear()<<endl;
            cout<<"Genre 1: "<<movies[i].getgenre1()<<endl;
            cout<<"Genre 2: "<<movies[i].getgenre2()<<endl;
            cout<<"Duration: "<<movies[i].getduration()<<endl;
            cout<<"Rating: "<<movies[i].getrating()<<endl;
            cout<<"Nomination: "<<movies[i].getnomin()<<endl;
            cout<<"Release Month: "<<movies[i].getrelease()<<endl;
            cout<<"Metacritic: "<<movies[i].getmeta()<<endl;
            newlist.push_back(movies[i]);
            cout<<endl;
            count++;
            continue;
        }

        match=movies[i].getduration().find(keyword);

        if (match!=string::npos)
        {
            cout<<"Movie "<<count<<" found"<<endl;
            cout<<"*******************"<<endl;
            cout<<"Name: "<<movies[i].getname()<<endl;
            cout<<"Year: "<<movies[i].getyear()<<endl;
            cout<<"Genre 1: "<<movies[i].getgenre1()<<endl;
            cout<<"Genre 2: "<<movies[i].getgenre2()<<endl;
            cout<<"Duration: "<<movies[i].getduration()<<endl;
            cout<<"Rating: "<<movies[i].getrating()<<endl;
            cout<<"Nomination: "<<movies[i].getnomin()<<endl;
            cout<<"Release Month: "<<movies[i].getrelease()<<endl;
            cout<<"Metacritic: "<<movies[i].getmeta()<<endl;
            newlist.push_back(movies[i]);
            cout<<endl;
            count++;
            continue;
        }

        match=movies[i].getgenre1().find(keyword);

        if (match!=string::npos)
        {
            cout<<"Movie "<<count<<" found"<<endl;
            cout<<"*******************"<<endl;
            cout<<"Name: "<<movies[i].getname()<<endl;
            cout<<"Year: "<<movies[i].getyear()<<endl;
            cout<<"Genre 1: "<<movies[i].getgenre1()<<endl;
            cout<<"Genre 2: "<<movies[i].getgenre2()<<endl;
            cout<<"Duration: "<<movies[i].getduration()<<endl;
            cout<<"Rating: "<<movies[i].getrating()<<endl;
            cout<<"Nomination: "<<movies[i].getnomin()<<endl;
            cout<<"Release Month: "<<movies[i].getrelease()<<endl;
            cout<<"Metacritic: "<<movies[i].getmeta()<<endl;
            newlist.push_back(movies[i]);
            cout<<endl;
            count++;
            continue;
        }

        match=movies[i].getgenre2().find(keyword);

        if (match!=string::npos)
        {
            cout<<"Movie "<<count<<" found"<<endl;
            cout<<"*******************"<<endl;
            cout<<"Name: "<<movies[i].getname()<<endl;
            cout<<"Year: "<<movies[i].getyear()<<endl;
            cout<<"Genre 1: "<<movies[i].getgenre1()<<endl;
            cout<<"Genre 2: "<<movies[i].getgenre2()<<endl;
            cout<<"Duration: "<<movies[i].getduration()<<endl;
            cout<<"Rating: "<<movies[i].getrating()<<endl;
            cout<<"Nomination: "<<movies[i].getnomin()<<endl;
            cout<<"Release Month: "<<movies[i].getrelease()<<endl;
            cout<<"Metacritic: "<<movies[i].getmeta()<<endl;
            newlist.push_back(movies[i]);
            cout<<endl;
            count++;
            continue;
        }

        match=movies[i].getrelease().find(keyword);

        if (match!=string::npos)
        {
            cout<<"Movie "<<count<<" found"<<endl;
            cout<<"*******************"<<endl;
            cout<<"Name: "<<movies[i].getname()<<endl;
            cout<<"Year: "<<movies[i].getyear()<<endl;
            cout<<"Genre 1: "<<movies[i].getgenre1()<<endl;
            cout<<"Genre 2: "<<movies[i].getgenre2()<<endl;
            cout<<"Duration: "<<movies[i].getduration()<<endl;
            cout<<"Rating: "<<movies[i].getrating()<<endl;
            cout<<"Nomination: "<<movies[i].getnomin()<<endl;
            cout<<"Release Month: "<<movies[i].getrelease()<<endl;
            cout<<"Metacritic: "<<movies[i].getmeta()<<endl;
            newlist.push_back(movies[i]);
            cout<<endl;
            count++;
            continue;
        }

        match=movies[i].getmeta().find(keyword);

        if (match!=string::npos)
        {
            cout<<"Movie "<<count<<" found"<<endl;
            cout<<"*******************"<<endl;
            cout<<"Name: "<<movies[i].getname()<<endl;
            cout<<"Year: "<<movies[i].getyear()<<endl;
            cout<<"Genre 1: "<<movies[i].getgenre1()<<endl;
            cout<<"Genre 2: "<<movies[i].getgenre2()<<endl;
            cout<<"Duration: "<<movies[i].getduration()<<endl;
            cout<<"Rating: "<<movies[i].getrating()<<endl;
            cout<<"Nomination: "<<movies[i].getnomin()<<endl;
            cout<<"Release Month: "<<movies[i].getrelease()<<endl;
            cout<<"Metacritic: "<<movies[i].getmeta()<<endl;
            newlist.push_back(movies[i]);
            cout<<endl;
            count++;
            continue;
        }
    }
    cout<<"Do you want further search?"<<endl;
    cout<<"press 1 for yes."<<endl;
    cout<<"press other keys for no."<<endl;
    cin>>option;
    if (option=="1")
        partial(newlist);
    else
        cin.ignore();
}

void output(vector<Movie>&movies)
{
    ofstream outfile("newlist.csv");
    outfile<<"name,year,nominations,rating,duration,genre1,genre2,release,metacritic,synopsis"<<endl;//first line
    for (int i=0;i<movies.size();i++)//output each line
    {
        outfile<<movies[i].getname()<<","<<movies[i].getyear()<<","<<movies[i].getnomin()<<","<<movies[i].getrating()<<","<<movies[i].getduration()<<","<<movies[i].getgenre1()<<","<<movies[i].getgenre2()<<","<<movies[i].getrelease()<<","<<movies[i].getmeta()<<","<<movies[i].getsyno()<<endl;
    }
    outfile.close();
    cout<<"Output Successful!"<<endl;
    cout<<endl;

}

void display(vector<Movie>&movies){

    for (int i=0;i<movies.size();i++)//display each movies' name, year and rating
    {
        cout<<movies[i].getname()<<", "<<movies[i].getyear()<<", rating: "<<movies[i].getrating()<<endl;
    }
}