// Tutorial 7
// To read the data from good.txt
// Store the data in structure
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct student
{
    string name;
    int score;
};

int main()
{
    ifstream infile;
    ofstream outfile;
    student s[100];
    int count = 0;

    // Open file
    infile.open("good.txt");
    if (infile.fail())
    {
        cout << "Cannot open good.txt.\n" << endl;
    }
    else

    {
        while (infile >> s[count].name)
        {
            infile >> s[count].score;
            count++;
        }

        infile.close();

        // Sort the data
        for (int i = 0; i < count - 1; i++)
        {
            for (int j = 0; j < count - i - 1; j++)
            {
                if (s[j].score < s[j + 1].score)
                {
                    student tmp = s[j];
                    s[j] = s[j + 1];
                    s[j + 1] = tmp;
                }
            }
        }

        // Open output file
        outfile.open("good2.txt");
        if (outfile.fail())
        {
            cout << "Cannot open good2.txt.\n" << endl;
        }
        else
        {
            // Print the students' names with score above average
            for (int i = 0; i < count; i++)
            {
                outfile << s[i].name << '\t' << s[i].score << endl;
            }
            outfile.close();
        }
    }
    return 0;
}
