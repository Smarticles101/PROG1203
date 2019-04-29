#include <string>
#include <iomanip>
#include <iostream>
#include <dirent.h>
#include <vector>

#include "Word.h"
#include "Concordance.h"

int main() {
    DIR *dir;
    struct dirent *ent;
    std::vector<std::string> files = std::vector<std::string>();
    std::string choice;
    std::string file;

    if ((dir = opendir (".")) != NULL) {
        /* print all the files and directories within directory */
        while ((ent = readdir (dir)) != NULL) {
            std::string t = std::string(ent->d_name);

            if (t.size() >= 4 && t.substr(t.size() - 4, 4) == ".txt") {
                files.emplace_back(ent->d_name);
            }
        }

        closedir(dir);
    } else {
        /* could not open directory */
        perror ("");
        return EXIT_FAILURE;
    }

    for (auto const f : files) {
        std::cout << std::setw(15) << std::right << f << std::endl;
    }

    std::cout << "Select a file :: ";
    getline(std::cin, choice);
    std::cout << choice << std::endl;

    for (auto const f : files) {
        if (f == choice) {
            std::ofstream outfile("concordance_"+choice);
            outfile << Concordance(std::ifstream(choice)).toString();
            outfile.close();
        }
    }
}
