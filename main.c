#include <stdio.h>

int main()
{

    int x,y,z;
    FILE *fp_in_math, *fp_in_english,*fp_in_bangla,*fp_out;
    char *input_file_math = "math.txt";
    char *input_file_english = "english.txt";
    char *input_file_bangla = "bangla.txt";
    char *output_file = "out.txt";

    char line_math_1[50],line_math_2[50],line_math_3[50],line_math_4[50],line_math_5[50],
    line_math_6[50], line_math_7[50], line_math_8[50],line_math_9[50],line_math_10[50],
    line_english_1[50],line_english_2[50],line_english_3[50],line_english_4[50],line_english_5[50],
    line_english_6[50],line_english_7[50],line_english_8[50],line_english_9[50],line_english_10[50],
    line_bangla_1[50],line_bangla_2[50],line_bangla_3[50],line_bangla_4[50],line_bangla_5[50],
    line_bangla_6[50],line_bangla_7[50],line_bangla_8[50],line_bangla_9[50],line_bangla_10[50];

    int math_number[11],english_number[11],bangla_number[11],
    roll_number_math[11], roll_number_english[11],roll_number_bangla[11],output[11];

    fp_in_math = fopen(input_file_math,"r");
    fp_in_english = fopen(input_file_english, "r");
    fp_in_bangla = fopen(input_file_bangla,"r");
    fp_out = fopen(output_file,"w");

    fgets(line_math_1,50,fp_in_math);
    fgets(line_math_2,50,fp_in_math);
    fgets(line_math_3,50,fp_in_math);
    fgets(line_math_4,50,fp_in_math);
    fgets(line_math_5,50,fp_in_math);
    fgets(line_math_6,50,fp_in_math);
    fgets(line_math_7,50,fp_in_math);
    fgets(line_math_8,50,fp_in_math);
    fgets(line_math_9,50,fp_in_math);
    fgets(line_math_10,50,fp_in_math);

    fgets(line_english_1,50,fp_in_english);
    fgets(line_english_2,50,fp_in_english);
    fgets(line_english_3,50,fp_in_english);
    fgets(line_english_4,50,fp_in_english);
    fgets(line_english_5,50,fp_in_english);
    fgets(line_english_6,50,fp_in_english);
    fgets(line_english_7,50,fp_in_english);
    fgets(line_english_8,50,fp_in_english);
    fgets(line_english_9,50,fp_in_english);
    fgets(line_english_10,50,fp_in_english);

    fgets(line_bangla_1,50,fp_in_bangla);
    fgets(line_bangla_2,50,fp_in_bangla);
    fgets(line_bangla_3,50,fp_in_bangla);
    fgets(line_bangla_4,50,fp_in_bangla);
    fgets(line_bangla_5,50,fp_in_bangla);
    fgets(line_bangla_6,50,fp_in_bangla);
    fgets(line_bangla_7,50,fp_in_bangla);
    fgets(line_bangla_8,50,fp_in_bangla);
    fgets(line_bangla_9,50,fp_in_bangla);
    fgets(line_bangla_10,50,fp_in_bangla);

    printf("Line_math_1: %s",line_math_1);
    printf("Line_math_2: %s",line_math_2);
    printf("Line_math_3: %s",line_math_3);
    printf("Line_math_4: %s",line_math_4);
    printf("Line_math_5: %s",line_math_5);
    printf("Line_math_6: %s",line_math_6);
    printf("Line_math_7: %s",line_math_7);
    printf("Line_math_8: %s",line_math_8);
    printf("Line_math_9: %s",line_math_9);
    printf("Line_math_10: %s\n",line_math_10);

    printf("Line_english_1: %s",line_english_1);
    printf("Line_english_2: %s",line_english_2);
    printf("Line_english_3: %s",line_english_3);
    printf("Line_english_4: %s",line_english_4);
    printf("Line_english_5: %s",line_english_5);
    printf("Line_english_6: %s",line_english_6);
    printf("Line_english_7: %s",line_english_7);
    printf("Line_english_8: %s",line_english_8);
    printf("Line_english_9: %s",line_english_9);
    printf("Line_english_10: %s\n\n",line_english_10);

    printf("Line_bangla_1: %s",line_bangla_1);
    printf("Line_bangla_2: %s",line_bangla_2);
    printf("Line_bangla_3: %s",line_bangla_3);
    printf("Line_bangla_4: %s",line_bangla_4);
    printf("Line_bangla_5: %s",line_bangla_5);
    printf("Line_bangla_6: %s",line_bangla_6);
    printf("Line_bangla_7: %s",line_bangla_7);
    printf("Line_bangla_8: %s",line_bangla_8);
    printf("Line_bangla_9: %s",line_bangla_9);
    printf("Line_bangla_10: %s\n\n",line_bangla_10);

    sscanf(line_math_1,"%d %d",&roll_number_math[1],&math_number[1]);
    sscanf(line_math_2,"%d %d",&roll_number_math[2],&math_number[2]);
    sscanf(line_math_3,"%d %d",&roll_number_math[3],&math_number[3]);
    sscanf(line_math_4,"%d %d",&roll_number_math[4],&math_number[4]);
    sscanf(line_math_5,"%d %d",&roll_number_math[5],&math_number[5]);
    sscanf(line_math_6,"%d %d",&roll_number_math[6],&math_number[6]);
    sscanf(line_math_7,"%d %d",&roll_number_math[7],&math_number[7]);
    sscanf(line_math_8,"%d %d",&roll_number_math[8],&math_number[8]);
    sscanf(line_math_9,"%d %d",&roll_number_math[9],&math_number[9]);
    sscanf(line_math_10,"%d %d",&roll_number_math[10],&math_number[10]);

    sscanf(line_english_1,"%d %d",&roll_number_english[1],&english_number[1]);
    sscanf(line_english_2,"%d %d",&roll_number_english[2],&english_number[2]);
    sscanf(line_english_3,"%d %d",&roll_number_english[3],&english_number[3]);
    sscanf(line_english_4,"%d %d",&roll_number_english[4],&english_number[4]);
    sscanf(line_english_5,"%d %d",&roll_number_english[5],&english_number[5]);
    sscanf(line_english_6,"%d %d",&roll_number_english[6],&english_number[6]);
    sscanf(line_english_7,"%d %d",&roll_number_english[7],&english_number[7]);
    sscanf(line_english_8,"%d %d",&roll_number_english[8],&english_number[8]);
    sscanf(line_english_9,"%d %d",&roll_number_english[9],&english_number[9]);
    sscanf(line_english_10,"%d %d",&roll_number_english[10],&english_number[10]);

    sscanf(line_bangla_1,"%d %d",&roll_number_bangla[1],&bangla_number[1]);
    sscanf(line_bangla_2,"%d %d",&roll_number_bangla[2],&bangla_number[2]);
    sscanf(line_bangla_3,"%d %d",&roll_number_bangla[3],&bangla_number[3]);
    sscanf(line_bangla_4,"%d %d",&roll_number_bangla[4],&bangla_number[4]);
    sscanf(line_bangla_5,"%d %d",&roll_number_bangla[5],&bangla_number[5]);
    sscanf(line_bangla_6,"%d %d",&roll_number_bangla[6],&bangla_number[6]);
    sscanf(line_bangla_7,"%d %d",&roll_number_bangla[7],&bangla_number[7]);
    sscanf(line_bangla_8,"%d %d",&roll_number_bangla[8],&bangla_number[8]);
    sscanf(line_bangla_9,"%d %d",&roll_number_bangla[9],&bangla_number[9]);
    sscanf(line_bangla_10,"%d %d",&roll_number_bangla[10],&bangla_number[10]);



    for(x=1;x<=10;x++)
    {


        y = math_number[x]+bangla_number[x]+english_number[x];

        output[x] = y/3;
    }


    for(z=1;z<=10;z++)
    {
        printf("Roll number & average number: %d %d\n",roll_number_math[z],output[z]);
    }

    fprintf(fp_out,"Piashkhali Student roll number & average number:\n");

    for(z=1;z<=10;z++)
    {

        fprintf(fp_out,"  %d   %d\n",roll_number_math[z],output[z]);
    }

    fclose(fp_in_math);
    fclose(fp_in_english);
    fclose(fp_in_bangla);
    fclose(fp_out);

    return 0;
}