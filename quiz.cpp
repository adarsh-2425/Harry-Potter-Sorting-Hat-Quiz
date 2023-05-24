//Harry Potter Sorting Hat Quiz

#include <iostream>
using namespace std;

int main() {
    
    int gryffinder = 0, hufflepaw = 0, ravenclaw = 0, slytherin = 0;
    int a1, a2, a3, a4;
    string name;
    
    cout << "Welcome to the Hogwarts School of Witchcraft and Wizardry!" << endl;
    cout << "Before we begin, we need to sort you into one of our four houses." << endl;
    cout << "Please answer the following questions truthfully." << endl;
    cout << "\n\n";
    cout << "What is your name? ";
    getline (cin, name);
    
   //Question 1
    cout << "Question 1: What is your preferred way of spending your free time?\n" << endl;
    cout << "1. Exploring the great outdoors" << endl;
    cout << "2. Reading a book or studying" << endl;
    cout << "3. Hanging out with friends and family" << endl;
    cout << "4. Playing games or doing something competitive" << endl;

    cin >> a1;
    
    switch (a1) {
        case 1: 
            gryffinder++;
            break;
        case 2: 
            ravenclaw++;
            break;
        case 3: 
            hufflepaw++;
            break;
        case 4: 
            slytherin++;
            break;
        default:
            cout << "Get Out!!";
            return 0;
    }
    
    //Question 2
    cout << "Question 2: What quality do you value the most in yourself and others?\n" << endl;
    cout << "1. Bravery" << endl;
    cout << "2. Intelligence" << endl;
    cout << "3. Loyalty" << endl;
    cout << "4. Ambition" << endl;
    
    cin >> a2;
    
    switch (a2) {
        case 1: 
            gryffinder++;
            break;
        case 2: 
            ravenclaw++;
            break;
        case 3: 
            hufflepaw++;
            break;
        case 4: 
            slytherin++;
            break;
        default:
            cout << "Get Out!!";
            return 0;
    }
    
    //Question 3
    cout << "Question 3: What is your biggest fear?\n" << endl;
    cout << "1. Losing someone you love" << endl;
    cout << "2. Failure" << endl;
    cout << "3. Being Alone" << endl;
    cout << "4. Being Powerless" << endl;
    
    cin >> a3;
    
    switch (a3) {
        case 1: 
            gryffinder++;
            break;
        case 2: 
            ravenclaw++;
            break;
        case 3: 
            hufflepaw++;
            break;
        case 4: 
            slytherin++;
            break;
        default:
            cout << "Get Out!!";
            return 0;
    }
    
    //Question 4
    cout << "Question 4: If you could have any of thesemagical creatures as your pet, which one would you choose?\n" << endl;
    cout << "1. Dragon" << endl;
    cout << "2. Phoenix" << endl;
    cout << "3. Unicorn" << endl;
    cout << "4. Basilisk" << endl;
    
    cin >> a4;
    
    switch (a4) {
        case 1: 
            gryffinder++;
            break;
        case 2: 
            ravenclaw++;
            break;
        case 3: 
            hufflepaw++;
            break;
        case 4: 
            slytherin++;
            break;
        default:
            cout << "Get Out!!";
            return 0;
    }
    
    cout<<"\n--------------------\n\n\n";

    // Determine the house based on the answers
    if (gryffinder > hufflepaw && gryffinder > ravenclaw && gryffinder > slytherin)
        cout << name << ", you belong to Gryffinder!" << endl;
        
    else if (hufflepaw > gryffinder && hufflepaw > ravenclaw && hufflepaw > slytherin)
        cout << name << ", you belong to Hufflepaw!" << endl;
    
    else if (ravenclaw > hufflepaw && ravenclaw > gryffinder && ravenclaw > slytherin)
        cout << name << ", you belong to Ravenclaw!" << endl;
    
    else
        cout << name << ", you belong to Slytherin!" << endl;

    return 0;
}

