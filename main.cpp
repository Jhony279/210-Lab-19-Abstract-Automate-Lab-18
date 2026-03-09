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
    void displayReviews(){
        Node* current = listHead;
        while(current != nullptr){
            cout << "Rating: " << current->rating << ", Comment: " << current->reviewComment << endl;
            current = current->next;
        }
    }
};

/**
 * @brief - Description of main
 * @return 
*/
int main() {
    bool exit = false;
    vector<Movie> movieLists;

    while (!exit){
        Movie m;
        int rating;
        string title, comment;

        cout << "Enter movie title: ";
        getline(cin, title);
        Movie m(title);
    }

    return 0;
}
