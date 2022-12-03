#include <iostream>
#include <vector>
using namespace std;

vector<double> GetVector() {
    vector<double> vector;
    double s;
    try {
        do {
            cin >> s;
            if (cin.fail()) {
                throw new exception;
            }
            vector.push_back(s);
        } while (cin.peek() != '\n');
    } catch(exception) {
        if (cin.peek() != '\n') {
            cout << "You entered illegal input. Next time enter Numbers only.";
            exit(1);
        }
    }
    //fixed(cout);
    //cout.precision(10);
    return vector;
}

//void Euclidean(vector<float> vector1, vector<float> vector2) {
//    float distance;
//
//}

vector<double> ThrowZeros(vector<double> vector, int size) {
    for (int i = 0; i < size; ++i) {
        vector.push_back(0);
    }
    return vector;
}

int main() {
    vector<double> vector1 = GetVector(), vector2 = GetVector();
    if (vector1.size() > vector2.size()) {
        vector2 = ThrowZeros(vector2, vector1.size()-vector2.size());
    } else if (vector1.size() < vector2.size()) {
        vector1 = ThrowZeros(vector1, vector2.size()-vector1.size());
    }
    for (int i = 0; i < vector1.size(); i++)
        cout << vector1[i] << " ";
    return 0;
}