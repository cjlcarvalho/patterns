#include "operation.h"
#include "post.h"
#include "facebookpost.h"
#include "twitterpost.h"
#include "operationhistory.h"

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string message;
    int op;

    OperationHistory *history = new OperationHistory;

    cout << "POST MESSAGES APP" << endl;

    while (true) {

        cout << "\nOPERATION LIST" << endl;
        cout << "1 -- ADD MESSAGE" << endl;
        cout << "2 -- UNDO POST" << endl;
        cout << "3 -- REDO POST" << endl;
        cout << "0 -- EXIT" << endl;
        cout << "Op: ";
        cin >> op;
        cin.ignore();

        if (!op)
            break;
        else if (op == 1) {
            cout << "Message: ";
            getline(cin, message);

            Operation *post = new Post(message);

            cout << "Twitter? 0 for No, 1 for Yes: ";
            cin >> op;

            if (op)
                post = new TwitterPost(post);

            cout << "Facebook? 0 for No, 1 for Yes: ";
            cin >> op;

            if (op)
                post = new FacebookPost(post);

            cout << endl;

            post->doOperation();

            history->addOperation(post);
        }
        else if (op == 2) {
            if (!history->undoOperation())
                cout << "There aren't previous posts." << endl;
        }
        else if (op == 3) {
            if (!history->redoOperation())
                cout << "There aren't forward posts." << endl;
        }

        cout << endl;

    }

    return 0;
}
