#pragma once
#include <iostream>
#include <vector>

class Movies {
private:
	std::string movie_id;
	std::string movie_name;
	int year;
	std::string certificate;
	std::string runtime;
	std::vector<std::string> genre;
	float rating;
	std::string description;
	std::vector<std::string> director;
	std::string director_id;
	std::vector<std::string> star;
	std::vector<std::string> star_id;
	int votes;
	int gross;

public:
	Movies(std::string movie_id, std::string movie_name, int year, std::string certificate, std::string runtime, std::vector<std::string> genre, float rating, std::string description, std::vector<std::string> director, std::string director_id, std::vector<std::string> star, std::vector<std::string> star_id, int votes, int gross);
	Movies();

	void setMovieID(std::string movie_id);
	std::string getMovieID();

	void setMovieName(std::string movie_name);
	std::string getMovieName();

	void setYear(int year);
	int getYear();

	void setCertificate(std::string certificate);
	std::string getCertificate();

	void setRuntime(std::string runtime);
	std::string getRuntime();

	void setGenre(std::string genre);
	std::vector<std::string> getGenre();

	void setRating(float rating);
	float getRating();

	void setDescription(std::string description);
	std::string getDescription();

	void setDirector(std::string director);
	std::vector<std::string> getDirector();

	void setDirectorID(std::string director_id);
	std::string getDirectorID();

	void setStar(std::string star);
	std::vector<std::string> getStar();

	void setStarID(std::string star_id);
	std::vector<std::string> getStarID();

	void setVotes(int votes);
	int getVotes();

	void setGross(int gross);
	int getGross();

};

Movies::Movies(std::string movie_id, std::string movie_name, int year, std::string certificate, std::string runtime, std::vector<std::string> genre, float rating, std::string description, std::vector<std::string> director, std::string director_id, std::vector<std::string> star, std::vector<std::string> star_id, int votes, int gross) {
	this->movie_id = movie_id;
	this->movie_name = movie_name;
	this->year = year;
	this->certificate = certificate;
	this->runtime = runtime;
	this->genre = {genre};
	this->rating = rating;
	this->description = description;
	this->director = {director};
	this->director_id = director_id;
	this->star = {star};
	this->star_id = {star_id};
	this->votes = votes;
	this->gross = gross;
}

Movies::Movies() {
	movie_id = "";
	movie_name = "";
	year = -1;
	certificate = "";
	runtime = "";
	genre = {};
	rating = -1.0f;
	description = "";
	director = {};
	director_id = "";
	star = {};
	star_id = {};
	votes = -1;
	gross = -1;
}

void Movies::setMovieID(std::string movie_id) {
	this->movie_id = movie_id;
}

std::string Movies::getMovieID() {
	return movie_id;
}

void Movies::setMovieName(std::string movie_name) {
	this->movie_name = movie_name;
}

std::string Movies::getMovieName() {
	return movie_name;
}

void Movies::setYear(int year) {
	this->year = year;
}

int Movies::getYear() {
	return year;
}

void Movies::setCertificate(std::string certificate) {
	this->certificate = certificate;
}

std::string Movies::getCertificate() {
	return certificate;
}

void Movies::setRuntime(std::string runtime) {
	this->runtime = runtime;
}

std::string Movies::getRuntime() {
	return runtime;
}

void Movies::setGenre(std::string genre) {
	this->genre.push_back(genre);
}

std::vector<std::string> Movies::getGenre() {
	return genre;
}

void Movies::setRating(float rating) {
	this->rating = rating;
}

float Movies::getRating() {
	return rating;
}

void Movies::setDescription(std::string description) {
	this->description = description;
}

std::string Movies::getDescription() {
	return description;
}

void Movies::setDirector(std::string director) {
	this->director.push_back(director);
}

std::vector<std::string> Movies::getDirector() {
	return director;
}

void Movies::setDirectorID(std::string director_id) {
	this->director_id = director_id;
}

std::string Movies::getDirectorID() {
	return director_id;
}

void Movies::setStar(std::string star) {
	this->star.push_back(star);
}

std::vector<std::string> Movies::getStar() {
	return star;
}

void Movies::setStarID(std::string star_id) {
	this->star_id.push_back(star_id);
}

std::vector<std::string> Movies::getStarID() {
	return star_id;
}

void Movies::setVotes(int votes) {
	this->votes = votes;
}

int Movies::getVotes() {
	return votes;
}

void Movies::setGross(int gross) {
	this->gross = gross;
}

int Movies::getGross() {
	return gross;
}


