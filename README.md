# Movie-Maestro 🎞️
Project 3 for COP3530: Data Structures and Algorithms, Spring 2023

**Report Link**: https://docs.google.com/document/d/1ZtFmy2zIavzoIuMKWwf1fFdtQhapecIpyZwWZgdCN1Q/edit?usp=sharing

**Video Link**: https://www.youtube.com/watch?v=f-_azuiAo7g

**Team Members**: David Payne, C.J. Annunziato, Matthew Dong

**Project Title**: “Movie Maestro”

**Problem**: Our program intends to solve the problem of not easily being able to find movies based on rating by filtering through director name, actor name, genre, and gross domestic box office income in USD from IMDb. This solves the larger problem of searching for a movie to watch.

**Motivation**: This is a problem of convenience because currently on the IMDb website, an actor’s or director’s profile lists only four movies in the “Known For” section and does not display a full list. There is no option to search through movies by genre or gross on IMDB either. As movie sorting connoisseurs, we are passionate about movies and desire an interface that allows us to search for movies in multiple ways from a central location. 
 
**Features implemented**: Our project utilizes a command-line interface, and the user is prompted to first select how they want to filter their search: by actor name, director name, genre, or gross box office income. If the user chooses director, actor, or genre, the next line will ask the user to input the term to be searched for (e.g. “Chadwick Boseman”, “Action”). The last question asks the user how they want to search, either merge sort or quick sort. Finally, the program prints the movie name, rating, year made, runtime, genres, director, actors, gross income, and description of each movie that matched the criteria of the user’s search. Movie Maestro will also show the time it took to complete each search with the sorting algorithm specified by the user. The intention of this was to compare mergesort and quicksort. The program will print the top 25 movies based on the user’s search and give the option to type ‘Y’ or ‘N’ if the user wants to see more movies based on the search.

**Description of data**:  
Data Source: https://www.kaggle.com/datasets/rajugc/imdb-movies-dataset-based-on-genre?select=family.csv 
In total this dataset has 298,972 tuples, across 10 different csv files. Each csv file contains movies of a different genre.
For each movie, there are columns for movie id, movie name, year released, certificates, runtime, genre, rating, description, director, director id, star, star id, votes, and gross income in US Dollars.
For our program, we used the movie name, gross income, runtime, year made, directors, stars, genre, rating categories, and description columns for our output, and we used the ratings or gross income for our sorting algorithms. For our program, we combined each separate csv file into one csv and removed any duplicate movies.

**Tools/Languages/APIs/Libraries used:** C++ was used for the backend of the sorting algorithms and classes and the frontend. We did not use any libraries other than the C++ standard libraries. Our group used Clion and edited the CMake file to allow for a larger stack memory size when completing large merge sort calculations.
We also used Python with the pandas library to combine the genre-separated datasets we found from Kaggle and ignore the duplicate movies to create a larger dataset that had every movie across all genres. The C++ and Python code can be found on github.

**Algorithms implemented:** For this project, we compared different sorting algorithms. We compared the sorting algorithms “Merge Sort” and “Quicksort.” In our implementation we used these sorting algorithms to sort movies by IMDb rating or gross income, based on the different filters that the user implements. For example, a user can select to search for a specific director, and choose either merge sort or quick sort to generate a list of the top rated movies that the director they selected made. The program also outputs the time it took for each sorting algorithm to complete the sort. 

**Additional Data Structures/Algorithms used:**
Movies were stored in a class that stores the name of the movie, rating, director, actors, year made, runtime, description, gross domestic income, and genre. A vector of Movie classes holds all of the movies after they are parsed from the dataset. This vector is copied into an array when it is passed into the sorting algorithms to be sorted.

**Distribution of Responsibility and Roles: **
CJ Annunziato: Parsing, Dataset, Merge Sort, User Interface
David Payne: User Interface, Quick Sort, Searching functions
Matthew Dong: Sorting Algorithms, Movie class


**References**:

https://www.kaggle.com/datasets/rajugc/imdb-movies-dataset-based-on-genre?select=family.csv

https://www.imdb.com/
