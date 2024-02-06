#include <iostream>
#include <string>

using namespace std;

struct Sequence
{
  string sequence;
  int reward;
};

int main()
{
  int buffer_size, matrix_width, matrix_height, number_of_sequences;

  cin >> buffer_size;
  cin >> matrix_width >> matrix_height;

  string matrix[matrix_width][matrix_height];

  for (int i = 0; i < matrix_height; i++)
  {
    for (int j = 0; j < matrix_width; j++)
    {
      getline(cin, matrix[j][i]);
    }
  }

  cin >> number_of_sequences;

  Sequence sequences[number_of_sequences];

  for (int i = 0; i < matrix_height; i++)
  {
    getline(cin, sequences[i].sequence);
    cin >> sequences[i].reward;
  }

  return 0;
}
