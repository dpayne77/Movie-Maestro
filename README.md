# Movie-Maestro 🎞️
Project 3 for data structures

Team Members: David Payne, C.J. Annunziato, Matthew Dong
**Project Title**: “Movie Maestro”
**Problem**: Our program intends to solve the problem of not easily being able to find movies based on rating by filtering through director name, actor name, genre, and gross box office income in USD from IMDb. This solves the larger problem of searching for a movie to watch.

**Motivation**: This is a problem of convenience because currently on the IMDb website, an actor’s or director’s profile lists only four movies in the “Known For” section and does not display a full list. There is no option to search through movies by genre or gross on IMDB either. As movie sorting connoisseurs, we are passionate about movies and would love to have an easier way of having more options to search for different movies.

**Features**: Our project will utilize a command-line interface, and the user will be prompted to first select how they want to filter their search: by director name, actor name, genre, or gross box office income. If the user chooses director, actor, or genre, the next line will ask the user to input the term to be searched for (e.g. “Chadwick Boseman”, “Action”). The last question will ask the user how they want to search, either merge sort or quick sort. Finally, a table of data will be displayed with the leftmost column being the user’s chosen search filter, and subsequent columns being genre with each row value containing the movie name and rating. In the case of genre being selected as the filter, there will only be one column. The table is sorted from highest to lowest rating by default for all search options. There will be a little box at the top indicating how much time the selected sorting algorithm took to compare the two algorithms.

**Data**: Source: https://www.kaggle.com/datasets/rajugc/imdb-movies-dataset-based-on-genre?select=family.csv 
In total this dataset has 298,972 touples, across 10 different csv files. Each csv file is a different genre.
For each movie, there are columns for movie id, movie name, year released, certificates, runtime, genre, rating, description, director, director id, star, star id, votes, and gross income in US Dollars.
For our program, we will use the movie name, gross income, director, star, genre, and rating categories.

**Tools**: C++ will be used for the backend of the sorting algorithms and classes and the frontend. 

**Strategy**: For this project, we plan on comparing different sorting algorithms. We plan on using sorting algorithms “Merge Sort” and “Quick Sort.” In our implementation we will use these sorting algorithms to sort movies by IMDb rating, based on the different filters that the user implements. For example, a user can select to search for a specific director, and choose either merge sort or quick sort to generate a list of the top rated movies that the director they selected made. 

Movies will be stored in a class that stores the name of the movie, rating, director, actors, genre. We will then have arrays for separate genres of the movies, which hold movies objects. These are the arrays that will be used with the sorting algorithms.

We will have to implement the merge sort and quick sort algorithms.

Distribution of Roles and Responsibilities: 
CJ Annunziato: Parsing, Database, Merge Sort
David Payne: User Interface, Quick Sort
Matthew Dong: Sorting Algorithms, Movie class

References: 
https://www.kaggle.com/datasets/rajugc/imdb-movies-dataset-based-on-genre?select=family.csv
https://www.imdb.com/
