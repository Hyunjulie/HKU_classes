// Tutorial 7
// To read the data from students.txt
// Output the student with score above average to an output file
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream infile;
    ofstream outfile;
    string name[100];
    int score[100];
    int count = 0;
    double avg = 0.0;

    // Open file
    infile.open("students.txt");
    if (infile.fail())
    {
        cout << "Cannot open students.txt.\n" << endl;
    }
    else
    {
        while (infile >> name[count])
        {
            infile >> score[count];
            avg += score[count];
            count++;
        }

        infile.close();

        avg /= count;

        // Open output file
        outfile.open("good.txt");
        if (outfile.fail())
        {
            cout << "Cannot open good.txt.\n" << endl;
        }
        else
        {
            // Print the students' names with score above average
            for (int i = 0; i < count; i++)
            {
                if (score[i] > avg)
                    outfile << name[i] << '\t' << score[i] << endl;
            }
            outfile.close();
        }
    }
    return 0;
}
