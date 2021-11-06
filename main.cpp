#include "functions.h"
#include "functions2.h"

int main() {
    vector<Movie> best;
    readmov(best);//read in movies
    vector<Player> good;
    readname(good);//read in actor-actress
    char choice;
    bool isContinues = false;


    do{

        cout << "Put A (movies) or B (actor-actress) to choose the database you want to access." << endl;
        cout << "Enter any other input to exit." << endl;
        cin >> choice;

        if (choice == 'A') {
            int option;

            do {
                cout << "Main Menu" << endl;
                cout << "*******************" << endl;
                cout << "1. Add new movie" << endl;
                cout << "2. Search by name" << endl;
                cout << "3. Sort data" << endl;
                cout << "4. Complete search" << endl;
                cout << "5. Partial search" << endl;
                cout << "6. Output new file " << endl;
                cout << "7. Preview movie list" << endl;
                cout << "8. Exit" << endl;
                cin >> option;

                switch (option) {
                    case 1: {
                        addmov(best);
                    }
                        break;
                    case 2: {
                        searchname(best);
                    }
                        break;
                    case 3: {
                        sort(best);
                    }
                        break;
                    case 4: {
                        complete(best);
                    }
                        break;
                    case 5: {
                        partial(best);
                    }
                        break;
                    case 6: {
                        output(best);
                    }
                        break;
                    case 7: {
                        display(best);
                    }
                        break;
                    case 8:
                        break;

                }
            } while (option != 8);//create a menu that continues until user input "8"
        }
        else if (choice == 'B'){
            int option;
            do{
                cout<<"Main Menu"<<endl;
                cout<<"*******************"<<endl;
                cout<<"1. Add new actor or actress"<<endl;
                cout<<"2. Search by name"<<endl;
                cout<<"3. Sort data"<<endl;
                cout<<"4. Complete search"<<endl;
                cout<<"5. Partial search"<<endl;
                cout<<"6. Output new file "<<endl;
                cout<<"7. Preview actor-actress list"<<endl;
                cout<<"8. Exit"<<endl;
                cin>>option;

                switch (option) {
                    case 1:{addname(good);}
                        break;
                    case 2:{searchname(good);}
                        break;
                    case 3:{sort(good);}
                        break;
                    case 4:{complete(good);}
                        break;
                    case 5:{partial(good);}
                        break;
                    case 6:{output(good);}
                        break;
                    case 7:{display(good);}
                        break;
                    case 8:
                        break;

                }
            }
            while (option!=8);//create a menu that continues until user input "8"
        }
        else
            isContinues = true;

        cin.clear();
    }while(!isContinues);//create a menu that continues until user input other letter to stop the program
    cout << "Thanks for using." << endl;
    return 0;
}