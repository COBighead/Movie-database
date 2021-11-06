//
// Created by rbp on 2020/12/9.
//

#include "functions2.h"

void readname(vector<Player> &players){
    ifstream infile;
    string head,tempstring;
    Player temp;
    infile.open("actor-actress.csv");
    if (!infile.is_open()){
        cerr<<"Can't open file!"<<endl;
        exit(1);
    }//exception handling
    getline(infile,head);//omitting first line
    while (!infile.eof())
    {
        getline(infile,tempstring,',');
        temp.setyear(tempstring);
        getline(infile,tempstring,',');
        temp.setaward(tempstring);
        getline(infile,tempstring,',');
        temp.setwinner(tempstring);
        getline(infile,tempstring,',');
        temp.setname(tempstring);
        getline(infile,tempstring);
        temp.setfilm(tempstring);
        players.push_back(temp);//get all the information about actors or actress from the file
    }
    cout<<"Reading Actor-actress file successful!"<<endl;
}

void addname(vector<Player>&plyaers){
    Player temp;
    string tempstring;
    cout<<"Add Player"<<endl;
    cout<<"*******************"<<endl;
    cout<<"Please enter year"<<endl;
    cin>>tempstring;
    temp.setyear(tempstring);

    cout<<"Add Player"<<endl;
    cout<<"*******************"<<endl;
    cout<<"Please enter award"<<endl;
    cin>>tempstring;
    temp.setaward(tempstring);

    cout<<"Add Player"<<endl;
    cout<<"*******************"<<endl;
    cout<<"Please enter winner"<<endl;
    cin>>tempstring;
    temp.setwinner(tempstring);

    cout<<"Add Player"<<endl;
    cout<<"*******************"<<endl;
    cout<<"Please enter name"<<endl;
    cin>>tempstring;
    temp.setname(tempstring);

    cout<<"Add Player"<<endl;
    cout<<"*******************"<<endl;
    cout<<"Please enter film"<<endl;
    cin>>tempstring;
    temp.setfilm(tempstring);

    plyaers.push_back(temp);//add new object to vector

    cout<<"Your Player has been added successfully!"<<endl;
}

void searchname(vector<Player>&players){
    string keyword;
    bool found= false;
    cout<<"Search players by name"<<endl;
    cout<<"*******************"<<endl;
    cout<<"Please enter name"<<endl;
    cin.ignore();
    getline(cin,keyword);

    for (int i=0; i < players.size(); i++)
    {
        if (players[i].getname() == keyword)
        {
            cout<<"Players found!"<<endl;
            cout<<"*******************"<<endl;

            cout << "Year: " << players[i].getyear() << endl;
            cout << "Award: " << players[i].getaward() << endl;
            cout << "Winner: " << players[i].getwinner() << endl;
            cout << "Name: " << players[i].getname() << endl;
            cout << "Film: " << players[i].getfilm() << endl;
            found= true;//return actor or actress that are found
        }
    }

    if(!found)
    {
        cout<<"Player not found!"<<endl;
    }
    cout<<endl;
}


void sort(vector<Player>&players){
    string field;
    Player temp;
    bool nomatch=true;
    cout<<"Sort"<<endl;
    cout<<"*******************"<<endl;
    cout<<"Please enter the field you want to sort by(year,award,winner,name,film)"<<endl;
    cin.ignore();
    getline(cin,field);



    if (field=="year")//using bubble sort algorithm to sort for each field
    {
        for (int i=0; i < players.size() - 1; i++)
        {
            for (int j=0; j < players.size() - 1 - i; j++)
            {
                if (players[j].getaward() > players[j + 1].getaward())
                {
                    temp=players[j];
                    players[j]=players[j + 1];
                    players[j + 1]=temp;
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

    if (field=="award")
    {
        for (int i=0; i < players.size() - 1; i++)
        {
            for (int j=0; j < players.size() - 1 - i; j++)
            {
                if (players[j].getaward() > players[j + 1].getaward())
                {
                    temp=players[j];
                    players[j]=players[j + 1];
                    players[j + 1]=temp;
                }
            }
        }
        cout<<endl;
        cout<<"*******************"<<endl;
        cout<<"Sorted by award successful"<<endl;
        cout<<"*******************"<<endl;
        cout<<endl;
        nomatch= false;
    }

    if (field=="winner")
    {
        for (int i=0; i < players.size() - 1; i++)
        {
            for (int j=0; j < players.size() - 1 - i; j++)
            {
                if (players[j].getwinner() > players[j + 1].getwinner())
                {
                    temp=players[j];
                    players[j]=players[j + 1];
                    players[j + 1]=temp;
                }
            }
        }
        cout<<endl;
        cout<<"*******************"<<endl;
        cout<<"Sorted by winner successful"<<endl;
        cout<<"*******************"<<endl;
        cout<<endl;
        nomatch= false;
    }

    if (field=="name")
    {
        for (int i=0; i < players.size() - 1; i++)
        {
            for (int j=0; j < players.size() - 1 - i; j++)
            {
                if (players[j].getname() > players[j + 1].getname())
                {
                    temp=players[j];
                    players[j]=players[j + 1];
                    players[j + 1]=temp;
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

    if (field=="film")
    {
        for (int i=0; i < players.size() - 1; i++)
        {
            for (int j=0; j < players.size() - 1 - i; j++)
            {
                if (players[j].getfilm() > players[j + 1].getfilm())
                {
                    temp=players[j];
                    players[j]=players[j + 1];
                    players[j + 1]=temp;
                }
            }
        }
        cout<<endl;
        cout<<"*******************"<<endl;
        cout<<"Sorted by film successful"<<endl;
        cout<<"*******************"<<endl;
        cout<<endl;
        nomatch= false;
    }
    if (nomatch)
        cout<<"Enter valid field (year,award,winner,name,film)"<<endl;
}


void complete(vector<Player>&players){
    string keyword;
    vector<Player> newlist;//create a new vector container to store search results
    string option;
    cout<<"Complete search"<<endl;
    cout<<"*******************"<<endl;
    cout<<"Please enter keyword"<<endl;
    cin.ignore();
    getline(cin,keyword);
    cout<<keyword<<endl;
    int count=1;//record number of actor or actress
    for (int i=0; i < players.size(); i++)
    {
        if (players[i].getyear() == keyword || players[i].getaward() == keyword || players[i].getwinner() == keyword || players[i].getname() == keyword || players[i].getfilm() == keyword)
        {
            cout << count <<" Player found"<<endl;
            cout <<"*******************"<<endl;
            cout << "Year: " << players[i].getyear() << endl;
            cout << "Award: " << players[i].getaward() << endl;
            cout << "Winner: " << players[i].getwinner() << endl;
            cout << "Name: " << players[i].getname() << endl;
            cout << "Film: " << players[i].getfilm() << endl;
            cout<<endl;
            count++;
            newlist.push_back(players[i]);
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


void partial(vector<Player>&players){
    string keyword;
    vector<Player> newlist;
    string option;
    cout<<"Partial search"<<endl;
    cout<<"*******************"<<endl;
    cout<<"Please enter keyword"<<endl;
    cin.ignore();
    getline(cin,keyword);
    string::size_type match;// variable used to check if sub string exists.

    int count=1;
    for (int i=0; i < players.size(); i++)
    {
        match=players[i].getname().find(keyword);
        if (match!=string::npos)//when keyword is sub string of match
        {
            cout<<"Player "<<count<<" found"<<endl;
            cout<<"*******************"<<endl;
            cout << "Year: " << players[i].getyear() << endl;
            cout << "Award: " << players[i].getaward() << endl;
            cout << "Winner: " << players[i].getwinner() << endl;
            cout << "Name: " << players[i].getname() << endl;
            cout << "Film: " << players[i].getfilm() << endl;
            newlist.push_back(players[i]);//store that actor or actress
            cout<<endl;
            count++;
            continue;// not need to find the rest parts of this movie, so continue to next loop
        }
        match=players[i].getyear().find(keyword);

        if (match!=string::npos)
        {
            cout<<"Player "<<count<<" found"<<endl;
            cout<<"*******************"<<endl;
            cout << "Year: " << players[i].getyear() << endl;
            cout << "Award: " << players[i].getaward() << endl;
            cout << "Winner: " << players[i].getwinner() << endl;
            cout << "Name: " << players[i].getname() << endl;
            cout << "Film: " << players[i].getfilm() << endl;
            newlist.push_back(players[i]);
            cout<<endl;
            count++;
            continue;
        }

        match=players[i].getaward().find(keyword);

        if (match!=string::npos)
        {
            cout<<"Player "<<count<<" found"<<endl;
            cout<<"*******************"<<endl;
            cout << "Year: " << players[i].getyear() << endl;
            cout << "Award: " << players[i].getaward() << endl;
            cout << "Winner: " << players[i].getwinner() << endl;
            cout << "Name: " << players[i].getname() << endl;
            cout << "Film: " << players[i].getfilm() << endl;
            newlist.push_back(players[i]);
            cout<<endl;
            count++;
            continue;
        }

        match=players[i].getwinner().find(keyword);

        if (match!=string::npos)
        {
            cout<<"Player "<<count<<" found"<<endl;
            cout<<"*******************"<<endl;
            cout << "Year: " << players[i].getyear() << endl;
            cout << "Award: " << players[i].getaward() << endl;
            cout << "Winner: " << players[i].getwinner() << endl;
            cout << "Name: " << players[i].getname() << endl;
            cout << "Film: " << players[i].getfilm() << endl;
            newlist.push_back(players[i]);
            cout<<endl;
            count++;
            continue;
        }

        match=players[i].getname().find(keyword);

        if (match!=string::npos)
        {
            cout<<"Player "<<count<<" found"<<endl;
            cout<<"*******************"<<endl;
            cout << "Year: " << players[i].getyear() << endl;
            cout << "Award: " << players[i].getaward() << endl;
            cout << "Winner: " << players[i].getwinner() << endl;
            cout << "Name: " << players[i].getname() << endl;
            cout << "Film: " << players[i].getfilm() << endl;
            newlist.push_back(players[i]);
            cout<<endl;
            count++;
            continue;
        }

        match=players[i].getfilm().find(keyword);

        if (match!=string::npos)
        {
            cout<<"Player "<<count<<" found"<<endl;
            cout<<"*******************"<<endl;
            cout << "Year: " << players[i].getyear() << endl;
            cout << "Award: " << players[i].getaward() << endl;
            cout << "Winner: " << players[i].getwinner() << endl;
            cout << "Name: " << players[i].getname() << endl;
            cout << "Film: " << players[i].getfilm() << endl;
            newlist.push_back(players[i]);
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

void output(vector<Player>&players)
{
    ofstream outfile("newlist.csv");
    outfile<<"Year,Award,Winner,Name,Film"<<endl;//first line to show the class of data
    for (int i=0; i < players.size(); i++)//output each line
    {
        outfile << players[i].getyear() << "," << players[i].getaward() << "," << players[i].getwinner() << "," << players[i].getname() << "," << players[i].getfilm() << "," << endl;
    }
    outfile.close();
    cout<<"Output Successful"<<endl;
    cout<<endl;
}

void display(vector<Player>&players){

    cout << "Year,Award,Winner,Name,Film"<<endl;//first line to show the class of data
    for (int i=0; i < players.size(); i++)//output each line data
    {
        cout << players[i].getyear() << "," << players[i].getaward() << "," <<  players[i].getwinner() << "," << players[i].getname() << "," << players[i].getfilm()<< endl;
    }
}