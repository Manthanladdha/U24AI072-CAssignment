#include <stdio.h>

int main()
{
    int vote_count[5] = {0, 0, 0, 0, 0};
    int spoilt_ballots = 0;
    int vote, total_votes;

    printf("Enter the total number of votes: ");
    scanf("%d", &total_votes);

    // Loop to read each ballot
    for (int i = 0; i < total_votes; i++)
    {
        printf("Enter vote (1 to 5) for ballot %d: ", i + 1);
        scanf("%d", &vote);

        if (vote >= 1 && vote <= 5)
        {
            // If the vote is valid (between 1 and 5), increment the appropriate candidate's vote count
            vote_count[vote - 1]++;
        }
        else
        {
            // If the vote is outside the valid range, increment the spoilt ballots count
            spoilt_ballots++;
        }
    }

    printf("\nElection Results:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Candidate %d: %d votes\n", i + 1, vote_count[i]);
    }
    printf("Spoilt Ballots: %d\n", spoilt_ballots);

    return 0;
}
