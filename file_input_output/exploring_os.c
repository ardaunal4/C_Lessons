#include<stdio.h>
#include<unistd.h> // chdir() and getcwd functions
#include<dirent.h>

int main()
{
    char path[520];
    
    chdir("..");
    getcwd(path, 512);
    printf("This program's parent directory is : %s\n", path);

    /*
    // handling with directory
    DIR *directory; // argument DIR is directory handle which's return value is the address of a dirent structure(a pointer)

    directory = opendir("."); // open directory
    if (directory == NULL)
    {
        puts("Unable to open current directory!");
        return (1);
    }

    puts("Opened current directory");

    closedir(directory);
    */

    // Read file names at current directory
     
    DIR *directory;
    struct dirent *file;

    directory = opendir(".");

    if (directory == NULL)
    {
        puts("Unable to open current directory!");
        return (1);
    }
    
    while ((file = readdir(directory)) != NULL)
        printf("Found the file %s\n", file->d_name); // read all the file's names from directory

    closedir(directory);


    return 0;
}