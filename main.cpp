// COMSC-210 | Lab 19 | Johnathan Perez Baltazar

#include <iostream>
#include <vector>
using namespace std;

struct Node{
    int rating;
    string reviewComment;
    Node* next;
};

class Movie{
    private:
        string title;
        Node *listHead;
    public:
    // Default constructor
        Movie(){title = ""; listHead = nullptr;}

    void setTitle(string t){title = t;}
    string getTitle(){return title;}

    void addReview(int r, string c){
        Node* newNode = new Node;
        newNode->rating = r;
        newNode->reviewComment = c;
        newNode->next = listHead;
        listHead = newNode;
    }
    void addReview(Node* newNode){
        newNode->next = listHead;
        listHead = newNode;
    }
    void displayReviews(){
        Node* current = listHead;
        while(current != nullptr){
            cout << "Rating: " << current->rating << ", Comment: " << current->reviewComment << endl;
            current = current->next;
        }
    }
};

Node *reviewList();

/**
 * @brief - Description of main
 * @return 
*/
int main() {
    bool exit = false;
    vector<Movie> movieLists;

    while (!exit){
        Movie m;
        string title;

        cout << "Enter movie title: ";
        getline(cin, title);
        m.setTitle(title);
        m.addReview(reviewList());
        movieLists.push_back(m);

        cout << "Do you want to add another movie? (y/n): ";
        string choice; cin >> choice;
        cin.ignore();

        if (choice != "y" && choice != "Y"){
            exit = true;
        }
    }

    for (int i = 0; i < movieLists.size(); i++){
        cout << "Movie: " << movieLists[i].getTitle() << endl;
        movieLists[i].displayReviews();
    }

    return 0;
}

Node *reviewList(){
    int rating;
    string comment;
    Node *head = nullptr;
    bool exit = false;

    while (!exit){
        cout << "Enter rating (1-5): ";
        cin >> rating;
        cin.ignore();
        cout << "Enter review comment: ";
        getline(cin, comment);

        Node* newNode = new Node;
        newNode->rating = rating;
        newNode->reviewComment = comment;

        newNode->next = head;
        head = newNode;

        cout << "Do you want to add another review? (y/n): ";
        string choice; cin >> choice;
        cin.ignore();
        if (choice != "y" && choice != "Y"){
            exit = true;
        }
    }
    return head;
}