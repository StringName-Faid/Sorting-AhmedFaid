#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int num;
    vector<string> nameList;

    cout << "Insert number of students" << endl;
    cin >> num;

    cout << "Insert student names" << endl;

    for(int i=0; i < num; i++){
        string name;
        cin >> name;
        nameList.push_back(name);
    }

    for(int i=0; i < nameList.size()-1; i++){

        for(int j=i+1; j < nameList.size(); j++){

            string temp;

            if(nameList[i] > nameList[j]){
                temp = nameList[i];
                nameList[i] = nameList[j];
                nameList[j] = temp;
            }
        }
    }

    cout <<"sorted list" << endl << endl;

    for(int i=0; i < nameList.size(); i++){
        cout << nameList[i]<< endl;
    }
    return 0;
}
