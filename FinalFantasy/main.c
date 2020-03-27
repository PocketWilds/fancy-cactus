#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Job
{
    char Name[16];
    int Level;
    int Experience;
};

void displayJob(struct Job job)
{
    printf(job.Name);
    printf("\n");
    printf("Level: %d\n", job.Level);
    printf("Experience: %d\n", job.Experience);
    printf("\n");
}

void gainExperience(struct Job* job, int gainedExperience)
{
    int levelsGained;
    int extraExperience;

    job->Experience += gainedExperience;
    levelsGained = job->Experience / 100;
    extraExperience = job->Experience % 100;
    job->Experience = extraExperience;
    job->Level += levelsGained;
}

int main()
{
    struct Job job1;
    struct Job job2;

    strcpy(job1.Name, "Bard");
    job1.Experience = 2;
    job1.Level = 3;

    strcpy(job2.Name, "Dancer");
    job2.Level = 15;
    job2.Experience = 47;

    gainExperience(&job2, 450);

    displayJob(job1);
    displayJob(job2);

    return 0;
}


