#include <iostream>
#include <string>
#include <ctime>

using namespace std;

class Session {
    public:
    string sessionName;
    int numberOfRounds = 0;
    int numberOfPlayers = 0;
    Session() = default;
    Session(string name, int num);
    void init();
    int sessionNumber();
};

Session::Session(string name, int num) {
    this->sessionName = name;
    this->numberOfPlayers = num;
}
void Session::init() {

    cout<<"Welcome to the Game ...\n";
    cout<<"[+] Assign a name to the Session : ";
    getline(cin, this->sessionName);
    cout<<"[+] Enter the number of players : ";
    cin>>numberOfPlayers;
    cout<<"\n[*] Here We Go !!!\n";
}

class Round : public Session {
    int answer;
    int playerNumber;
    Round(Session);
    void init(int);
    void end(Session);
};
Round::Round(Session s) {
    s.numberOfRounds += 1;
}

// generate and store the random number in a variable for reference as well as initialize players
void Round::init(int num) {
    this->playerNumber = num;
    srand((unsigned) time(NULL));
    this->answer = 1 + (rand() % 100);
}

// actions on ending of the round when certain conditions are met
void Round::end(Session s) {
    string fileName = to_string(s.sessionNumber());
    int len = fileName.size();
    char *fName;
    for(int i = 0; i < len; i++) {
        fName[i] = fileName[i];
    }
    FILE* fp = fopen(fName, "a");
    fprintf(fp, "%s %d", "Round", s.numberOfRounds);
}

class Player {
    private:
    int points;


    public:
    bool iscorrect = false;
    friend class Round;
};

int main() {
    string name;
    int num;
    cout<<"Welcome to the Game ...\n";
    cout<<"[+] Assign a name to the Session : ";
    getline(cin, name);
    cout<<"[+] Enter the number of players : ";
    cin>>num;
    Session s(name, num);

    initRound:
    Round r(s);
    r.init(num);
    Player *players = new Player[num];
    for(int i = 0; i < num; i++) {
        if (players[i].iscorrect) {
            break;
        }
    }
    return 0;
}
