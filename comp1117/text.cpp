//Name: Shim Hyunju
//UID: 3035345693

#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

using namespace std;

int main()
{
    int count = 0, pos_count = 0, position[20];
    int choice, wordposition;
    string filenames [19], writings[19], temp, keyword;
    ifstream contents, textfiles;

    // open the table of content
    contents.open("table_of_content.txt");

    // Output message if there is error in file opening of table_of_content
    if (contents.fail())
    {
        cout << "Error in file opening" << endl;
        exit(1);
    }

    // Save each line of table_of_content as filename array
    for (int i = 0; i < 20; i++)
        getline(contents, filenames[i], '\n');

    //close the input stream after saving all the lines as filename array
    contents.close();


    //count how many lines there are and save the number into count
    for (int j = 0; filenames[j].length() != 0; j++)
    {
        count ++;
    }

    cout << count << " students' text files are read." << endl;

    // sort the filenames alphabetically
    for(int i=0; i < count; i ++)
    {
        for (int j = i+1; j< count; j++)
        {
            if (filenames[i] > filenames [j])
            {
                temp = filenames[i];
                filenames[i] = filenames [j];
                filenames[j] = temp;
            }
        }
    }



    // open each writing file and save it into writings array
    for (int i = 0; i < count; i++)
    {
        textfiles.open(filenames[i].c_str());
        getline(textfiles, writings[i]);
        textfiles.close();
    }


    // output first time
    cout << "------" << endl;
    cout << "Options:" << endl << "1. Keyword search" << endl<< "2. Exit" << endl << "Your choice:" << endl;
    cin >> choice;


    while (choice == 1)
    {
        cout << "The keyword is:" << endl;
        cin >> keyword;

        //keyword search
        //post condition: save number of keyword into position array
        for (int b =0; b < count; b++ )
        {
            wordposition = writings[b].find(keyword);
            while (wordposition !=string::npos)
            {
                pos_count++;
                wordposition = writings[b].find(keyword, wordposition+1);
            }
            position[b] = pos_count;
            pos_count = 0;
        }

        // output filename and count in each line
        for (int c =0; c < count; c++)
        {
            cout << filenames[c] << " ";
            cout << position[c]<< endl;
        }

        //repeat until the user inputs 2
        cout << "------" << endl << "Options:" << endl << "1. Keyword search" << endl<< "2. Exit" << endl << "Your choice:" << endl;
        cin >> choice;
    }

    return 0;

}
