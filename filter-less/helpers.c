#include "helpers.h"
#include<math.h>

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            float average = (image[i][j].rgbtRed + image[i][j].rgbtGreen + image[i][j].rgbtBlue) / 3.0;

            image[i][j].rgbtBlue = round(average);
            image[i][j].rgbtGreen = round(average);
            image[i][j].rgbtRed = round(average);
        }
    }
    return;
}

// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            float sepiaRed, sepiaGreen, sepiaBlue;
            float originalRed = image[i][j].rgbtRed;
            float originalBlue = image[i][j].rgbtBlue;
            float originalGreen = image[i][j].rgbtGreen;

            sepiaRed = .393 * originalRed + .769 * originalGreen + .189 * originalBlue;
            sepiaGreen = .349 * originalRed + .686 * originalGreen + .168 * originalBlue;
            sepiaBlue = .272 * originalRed + .534 * originalGreen + .131 * originalBlue;

            sepiaRed = (round(sepiaRed) > 255) ? 255 : round(sepiaRed);
            sepiaGreen = (round(sepiaGreen) > 255) ? 255 : round(sepiaGreen);
            sepiaBlue = (round(sepiaBlue) > 255) ? 255 : round(sepiaBlue);

            image[i][j].rgbtRed = sepiaRed;
            image[i][j].rgbtGreen = sepiaGreen;
            image[i][j].rgbtBlue = sepiaBlue;
        }
    }
    return;
}
// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width / 2; j++)
        {
            RGBTRIPLE temp = image[i][width - 1 - j];
            image[i][width - 1 - j] = image[i][j];
            image[i][j] = temp;
        }
    }
    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    RGBTRIPLE copy[height][width];
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            int N = 0;
            float totalRed = 0, totalGreen = 0, totalBlue = 0;
            copy[i][j] = image[i][j];
            for (int k = i - 1; k < i + 2; k++)
            {
                for (int l = j - 1; l + 2; l++)
                {
                    if ( k >= 0 && k < height && l >= 0 && l < width)
                    {
                        N++;
                        totalRed += image[k][l].rgbtRed
                        totalGreen += image[k][l].rgbtGreen
                        totalBlue += image[k][l].rgbtBlue
                    }
                }
            }
            float avgRed = totalRed/N;
            float avgGreen = totalGreen/N;
            float avgBlue = totalBlue/N;

            copy[i][j].rgbtRed = round(avgRed);
            copy[i][j].rgbtGreen = round(avgGreen);
            copy[i][j].rgbtBlue = round(avgBlue);
        }
    }

    return;
}
