// file i/o
#include <fstream>
using namespace std;

int main()
{
    int a, b, c;
    ifstream in_stream;
    in_stream.open("infile.txt");

     if (!in_stream.fail()) {
        in_stream >> a >> b >> c;
        in_stream.close();

   ofstream out_stream;
   out_stream.open("outfile.txt");

   if (!out_stream.fail())
   {
        out_stream << "The sum of the three numbers:\n";
        out_stream << a + b + c << endl;
        out_stream.close();
   }
 }
  return 0;
}
