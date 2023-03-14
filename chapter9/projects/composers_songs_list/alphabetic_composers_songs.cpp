/**
 * @file alphabetic_composers_songs.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-03-14
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "F:/GitHubRepos/absolute_cpp/common.hpp" // common header file

using namespace std;

/**
 * @brief Read from a file - composers.txt
 * Remove all extraneous words like 'an', 'the', 'a', 'of', 'and', 'in', 'on', 'at', 'for', 'to', 'from', 'by', 'with', 'as', 'into', 'like', 'through', 'after', 'over', 'between', 'out', 'against', 'during', 'without', 'before', 'under', 'around', 'among', 'behind', 'beyond', 'up', 'down', 'off', 'above', 'below', 'near', 'across', 'along', 'around', 'behind', 'beneath', 'beside', 'besides', 'between', 'beyond', 'but', 'by', 'despite', 'down', 'during', 'except', 'for', 'from', 'in', 'inside', 'into', 'like', 'near', 'of', 'off', 'on', 'onto', 'out', 'outside', 'over', 'past', 'since', 'through', 'throughout', 'till', 'to', 'toward', 'under', 'underneath', 'until', 'up', 'upon', 'with', 'within', 'without'
 * Keep Song name and Artist name in a 2D array
  * Remove numbers from the song name
  * Remove dashes from the txt file and replace them with spaces
    * Sort the array in alphabetical order
    * Print the array
    * Sort by artist and sort songs by each composer in alphabetical order
 * display everything in a table
 */

string extraneous_words[1000] = 
    {
    "an", "the", "of", "and", "in", "on", "at", "for", "to", "from", "by", "with", "as", "into", "like", "through", "after", "over", "between", "out", "against", "during", "without", "before", "under", "around", "among", "behind", "beyond", "up", "down", "off", "above", "below", "near", "across", "along", "around", "behind", "beneath", "beside", "besides", "between", "beyond", "but", "by", "despite", "down", "during", "except", "for", "from", "in", "inside", "into", "like", "near", "of", "off", "on", "onto", "out", "outside", "over", "past", "since", "through", "throughout", "till", "to", "toward", "under", "underneath", "until", "up", "upon", "with", "within", "without"
    };

class Composer_Songs 
{
    private:
        string **composers_songs = new string *[2];
        string **composers_songs_sorted = new string *[2];
        string **composers_songs_sorted_by_artist = new string *[2];
        string **composers_songs_sorted_by_artist_and_song = new string *[2];
        FILE *fp;

    public:
        Composer_Songs();
        ~Composer_Songs();
        void read_from_file();
        void print_from_file(); 
        void remove_dashes();
        void remove_numbers();
        void print_cleaned_up_file();
        void remove_extraneous_words();
        void sort_composers_songs();
        void sort_composers_songs_by_artist();
        void sort_composers_songs_by_artist_and_song();
        void print_composers_songs();
        void print_composers_songs_sorted();
        void print_composers_songs_sorted_by_artist();
        void print_composers_songs_sorted_by_artist_and_song();     
};

Composer_Songs::Composer_Songs()
{
    composers_songs[0] = new string[1000];
    composers_songs[1] = new string[1000];
    composers_songs_sorted[0] = new string[1000];
    composers_songs_sorted[1] = new string[1000];
    composers_songs_sorted_by_artist[0] = new string[1000];
    composers_songs_sorted_by_artist[1] = new string[1000];
    composers_songs_sorted_by_artist_and_song[0] = new string[1000];
    composers_songs_sorted_by_artist_and_song[1] = new string[1000];
}

Composer_Songs::~Composer_Songs()
{
    delete [] composers_songs[0];
    delete [] composers_songs[1];
    delete [] composers_songs_sorted[0];
    delete [] composers_songs_sorted[1];
    delete [] composers_songs_sorted_by_artist[0];
    delete [] composers_songs_sorted_by_artist[1];
    delete [] composers_songs_sorted_by_artist_and_song[0];
    delete [] composers_songs_sorted_by_artist_and_song[1];
}

void Composer_Songs::read_from_file()
{
    /**
     * @brief read from the file and store the data in a 2D array
     * 
     */
    fp = fopen("F:/GitHubRepos/absolute_cpp/Chapter_10/composers.txt", "r");
    if (fp == NULL)
    {
        cout << "Error opening file" << endl;
        exit(1);
    }
    for (int i = 0; i < 1000; i++)
    {
        getline(fp, composers_songs[0][i], '-');
        getline(fp, composers_songs[1][i]);
    }
    fclose(fp);
}
void Composer_Songs::print_from_file()
{
    for (int i = 0; i < 1000; i++)
    {
        cout << composers_songs[0][i] << " " << composers_songs[1][i] << endl;
    }
}

void Composer_Songs::remove_dashes()
{
    for (int i = 0; i < 1000; i++)
    {
        for (int j = 0; j < composers_songs[0][i].length(); j++)
        {
            if (composers_songs[0][i][j] == '-')
            {
                composers_songs[0][i][j] = ' ';
            }
        }
    }
}

void Composer_Songs::remove_numbers()
{
    for (int i = 0; i < 1000; i++)
    {
        for (int j = 0; j < composers_songs[0][i].length(); j++)
        {
            if (composers_songs[0][i][j] == '1' || composers_songs[0][i][j] == '2' || composers_songs[0][i][j] == '3' || composers_songs[0][i][j] == '4' || composers_songs[0][i][j] == '5' || composers_songs[0][i][j] == '6' || composers_songs[0][i][j] == '7' || composers_songs[0][i][j] == '8' || composers_songs[0][i][j] == '9' || composers_songs[0][i][j] == '0')
            {
                composers_songs[0][i][j] = ' ';
            }
        }
    }
}

void Composer_Songs::remove_extraneous_words()
{
    for (int i = 0; i < 1000; i++)
    {
        for (int j = 0; j < 1000; j++)
        {
            if (composers_songs[0][i] == extraneous_words[j])
            {
                composers_songs[0][i] = "";
            }
            if (composers_songs[1][i] == extraneous_words[j])
            {
                composers_songs[1][i] = "";
            }
        }
    }
}

void Composer_Songs::sort_composers_songs()
{
    for (int i = 0; i < 1000; i++)
    {
        for (int j = 0; j < 1000; j++)
        {
            if (composers_songs[0][i] < composers_songs[0][j])
            {
                composers_songs_sorted[0][i] = composers_songs[0][j];
                composers_songs_sorted[1][i] = composers_songs[1][j];
            }
        }
    }
}

void Composer_Songs::sort_composers_songs_by_artist()
{
    for (int i = 0; i < 1000; i++)
    {
        for (int j = 0; j < 1000; j++)
        {
            if (composers_songs[1][i] < composers_songs[1][j])
            {
                composers_songs_sorted_by_artist[0][i] = composers_songs[0][j];
                composers_songs_sorted_by_artist[1][i] = composers_songs[1][j];
            }
        }
    }
}

void Composer_Songs::sort_composers_songs_by_artist_and_song()
{
    for (int i = 0; i < 1000; i++)
    {
        for (int j = 0; j < 1000; j++)
        {
            if (composers_songs[1][i] < composers_songs[1][j])
            {
                composers_songs_sorted_by_artist_and_song[0][i] = composers_songs[0][j];
                composers_songs_sorted_by_artist_and_song[1][i] = composers_songs[1][j];
            }
            else if (composers_songs[1][i] == composers_songs[1][j])
            {
                if (composers_songs[0][i] < composers_songs[0][j])
                {
                    composers_songs_sorted_by_artist_and_song[0][i] = composers_songs[0][j];
                    composers_songs_sorted_by_artist_and_song[1][i] = composers_songs[1][j];
                }
            }
        }
    }
}

void Composer_Songs::print_composers_songs()
{
    for (int i = 0; i < 1000; i++)
    {
        cout << composers_songs[0][i] << " " << composers_songs[1][i] << endl;
    }
}

void Composer_Songs::print_composers_songs_sorted()
{
    for (int i = 0; i < 1000; i++)
    {
        cout << composers_songs_sorted[0][i] << " " << composers_songs_sorted[1][i] << endl;
    }
}

void Composer_Songs::print_composers_songs_sorted_by_artist()
{
    for (int i = 0; i < 1000; i++)
    {
        cout << composers_songs_sorted_by_artist[0][i] << " " << composers_songs_sorted_by_artist[1][i] << endl;
    }
}

void Composer_Songs::print_composers_songs_sorted_by_artist_and_song()
{
    for (int i = 0; i < 1000; i++)
    {
        cout << composers_songs_sorted_by_artist_and_song[0][i] << " " << composers_songs_sorted_by_artist_and_song[1][i] << endl;
    }
}

int main()
{
    Composer_Songs cs;
    cs.read_from_file();
    cs.remove_extraneous_words();
    cs.sort_composers_songs();
    cs.sort_composers_songs_by_artist();
    cs.sort_composers_songs_by_artist_and_song();
    cs.print_composers_songs();
    cs.print_composers_songs_sorted();
    cs.print_composers_songs_sorted_by_artist();
    cs.print_composers_songs_sorted_by_artist_and_song();
    return 0;
}


