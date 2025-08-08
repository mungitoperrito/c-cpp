#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Max number of candidates
#define MAX 9

// Candidates have name and vote count
typedef struct
{
    string name;
    int votes;
} candidate;

// Array of candidates
candidate candidates[MAX];

// Number of candidates
int candidate_count;

// Function prototypes
bool vote(string name);
void print_winner(void);

int main(int argc, string argv[])
{
    // Check for invalid usage
    if (argc < 2)
    {
        printf("Usage: plurality [candidate ...]\n");
        return 1;
    }

    // Populate array of candidates
    candidate_count = argc - 1;
    if (candidate_count > MAX)
    {
        printf("Maximum number of candidates is %i\n", MAX);
        return 2;
    }
    for (int i = 0; i < candidate_count; i++)
    {
        candidates[i].name = argv[i + 1];
        candidates[i].votes = 0;
    }

    int voter_count = get_int("Number of voters: ");

    // Loop over all voters
    for (int i = 0; i < voter_count; i++)
    {
        string name = get_string("Vote: ");

        // Check for invalid vote
        if (!vote(name))
        {
            printf("Invalid vote.\n");
        }
    }

    // Display winner of election
    print_winner();
}

// Update vote totals given a new vote
bool vote(string name)
{
    for (int c = 0; c < candidate_count; c++)
    {
        if (strcmp(candidates[c].name, name) == 0)
        {
            candidates[c].votes++;
            return true;
        }
    }

    return false;
}

// Print the winner (or winners) of the election
void print_winner(void)
{
    int max_votes = 0;
    candidate winners[candidate_count];
    int winner_count = 0;

    for (int c = 0; c < candidate_count; c++)
    {
        // Add to list of tied winners
        if (candidates[c].votes == max_votes)
        {
            winners[winner_count] = candidates[c];
            winner_count++;
        }
        // Update if there is a clear winner
        else if (candidates[c].votes > max_votes)
        {
            winner_count = 0;
            winners[winner_count] = candidates[c];
            max_votes = winners[winner_count].votes;
            winner_count++;
        }
        else
        {
            ;
        }
    }

    // Print winners
    for (int w = 0; w < winner_count; w++)
    {
        // Checker doesn't like multiple winners on the same line
        // printf("%s ", winners[w].name);

        printf("%s\n", winners[w].name);
    }
    // Checker doesn't like multiple winners on the same line
    // printf("\n");

    return;
}
