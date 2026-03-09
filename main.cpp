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
};

/**
 * @brief - Description of main
 * @return 
*/
int main() {
    vector<Movie> movieLists;

    return 0;
}
