/*Programmer: Beth Hanson
Class: CptS 121, Summer 2018
Programming Assignment: Project 8
File: main.c
Date: 07/19/18
Description: Strings and Dynamic Memory*/

#include "project8.h"

int main() {
	//todo: remove unused variables
	char **generated_sentences = NULL;
	char **articles = NULL, **nouns = NULL, **verbs = NULL, **prepositions = NULL;
	char temp[76] = "";
	char *string_input_ok = NULL;
	int input_ok = -1, sentences_to_generate = 0, max_length_of_string = 0;
	int num_words = 0, num_articles = 0, num_nouns = 0, num_verbs = 0, num_prepositions = 0;
	FILE *infile = NULL;


	infile = fopen("wordbank.txt", "r");
	srand(time(NULL));
	input_ok = fscanf(infile, "%d ", &sentences_to_generate);

	generated_sentences = (char **)malloc(sentences_to_generate * sizeof(char*));

	//Read in parts of speech
	//todo: refactor into array of structs with parts of speech and num of, or parralel arrays
	for (int i = 0; i < PARTS_OF_SPEECH; i++)
	{	
		input_ok = fscanf(infile, "%s %d ", temp, &num_words);
		part_of_speech pos_to_process = pos_string_to_enum(temp);
		switch (pos_to_process)
		{
		case Articles: 
			num_articles = num_words;
			articles = (char**)malloc(num_articles * sizeof(char*));
			for (int i = 0; i < num_articles; i++)
			{
				input_ok = fscanf(infile, "%s", temp);
				max_length_of_string = strlen(temp) + 1; 
				articles[i] = (char*)malloc(max_length_of_string * sizeof(char));
				strcpy(articles[i], temp);
			}
			break;
		case Nouns:
			nouns = (char**)malloc(num_words * sizeof(char*));
			num_nouns = num_words;
			for (int i = 0; i < num_nouns; i++)
			{
				input_ok = fscanf(infile, "%s", temp);
				max_length_of_string = strlen(temp) + 1;
				nouns[i] = (char*)malloc(max_length_of_string * sizeof(char));
				strcpy(nouns[i], temp);
			}
			break;
		case Verbs:
			verbs = (char**)malloc(num_words * sizeof(char*));
			num_verbs = num_words;
			for (int i = 0; i < num_verbs; i++)
			{
				input_ok = fscanf(infile, "%s", temp);
				max_length_of_string = strlen(temp) + 1;
				verbs[i] = (char*)malloc(max_length_of_string * sizeof(char));
				strcpy(verbs[i], temp);
			}
			break;
		case Prepositions:
			prepositions = (char**)malloc(num_words * sizeof(char*));
			num_prepositions = num_words;
			for (int i = 0; i < num_prepositions; i++)
			{
				input_ok = fscanf(infile, "%s", temp);
				max_length_of_string = strlen(temp) + 1;
				prepositions[i] = (char*)malloc(max_length_of_string * sizeof(char));
				strcpy(prepositions[i], temp);
			}
			break;
		default:
			puts("INVALID PART OF SPEECH!");
			break;
		}
	}
	//Sort words
	bubbleSort(articles, num_articles);
	bubbleSort(nouns, num_nouns);
	bubbleSort(verbs, num_verbs);
	bubbleSort(prepositions, num_prepositions);

		//make sentences from parts of speech
	for (int i = 0; i < sentences_to_generate; i++) {
		//article 
		strcpy(temp, articles[rand() % num_articles]);
		strcat(temp, " ");
		//noun 
		strcat(temp, nouns[rand() % num_nouns]);
		strcat(temp, " ");
		//verb 
		strcat(temp, verbs[rand() % num_verbs]);
		strcat(temp, " ");
		//preposition 
		strcat(temp, prepositions[rand() % num_prepositions]);
		strcat(temp, " ");
		//article 
		strcat(temp, articles[rand() % num_articles]);
		strcat(temp, " ");
		//noun
		strcat(temp, nouns[rand() % num_nouns]);
		strcat(temp, " ");
		generated_sentences[i] = (char*)malloc(strlen(temp) * sizeof(char));
		strcpy(generated_sentences[i], temp);
	}

	printf("Word Bank:\n");
	printf("Articles: ");
	for (int i = 0; i < num_articles; i++) {
		printf("%s ", articles[i]);
	}
	printf("\nNouns: ");
	for (int i = 0; i < num_nouns; i++) {
		printf("%s ", nouns[i]);
	}
	printf("\nVerbs: ");
	for (int i = 0; i < num_verbs; i++) {
		printf("%s ", verbs[i]);
	}
	printf("\nPrepositions: ");
	for (int i = 0; i < num_prepositions; i++) {
		printf("%s ", prepositions[i]);
	}

	printf("\nRandom Sentences \n");
	for (int i = 0; i < sentences_to_generate; i++) {
		printf("%d. %s \n", i, generated_sentences[i]);
	}

	for (int i = 0; i < num_articles; i++)
	{
		free(articles[i]);
	}
	for (int i = 0; i < num_nouns; i++)
	{
		free(nouns[i]);
	}
	for (int i = 0; i < num_verbs; i++)
	{
		free(verbs[i]);
	}
	for (int i = 0; i < num_prepositions; i++)
	{
		free(prepositions[i]);
	}
	for (int i = 0; i < sentences_to_generate; i++)
	{
		free(generated_sentences[i]);
	}
	free(articles);
	free(nouns);
	free(verbs);
	free(prepositions);
	free(generated_sentences);

	//todo: close your damn file pointer
	system("pause");
	return 0;
}