//MENU DRIVEN PROGRAM FOR IMAGE PROCESSING
// C program to read a BMP Image and
// write the same into a PGM Image file
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX_VALUE 255
#define THRESHOLD 128
#define WHITE 255
#define BLACK 0
#define MAX_COLOR 255
#define BRIGHTNESS_FACTOR 25
#define THRESHOLD1 40
int save_image()
{
    int i, j, temp = 0;
    int width = 13, height = 13;

    // Suppose the 2D Array to be converted to Image is as given below
    int image[13][13] = {
      { 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15 },
      { 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31},
      { 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47},
      { 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63},
      { 79, 79, 79, 79, 79, 79, 79, 79, 79, 79, 79, 79, 79},
      { 95, 95, 95, 95, 95, 95, 95, 95, 95, 95, 95, 95, 95 },
      { 111, 111, 111, 111, 111, 111, 111, 111, 111, 111, 111, 111, 111},
      { 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127},
      { 143, 143, 143, 143, 143, 143, 143, 143, 143, 143, 143, 143, 143},
      { 159, 159, 159, 159, 159, 159, 159, 159, 159, 159, 159, 159, 159},
      { 175, 175, 175, 175, 175, 175, 175, 175, 175, 175, 175, 175, 175},
      { 191, 191, 191, 191, 191, 191, 191, 191, 191, 191, 191, 191, 191},
      { 207, 207, 207, 207, 207, 207, 207, 207, 207, 207, 207, 207, 207}
    };

    FILE* pgmimg;
    pgmimg = fopen("pgmimg.pgm", "wb");

    // Writing Magic Number to the File
    fprintf(pgmimg, "P2\n");

    // Writing Width and Height
    fprintf(pgmimg, "%d %d\n", width, height);

    // Writing the maximum gray value
    fprintf(pgmimg, "255\n");
    int count = 0;
    for (i = 0; i < height; i++) {
        for (j = 0; j < width; j++) {
            temp = image[i][j];

            // Writing the gray values in the 2D array to the file
            fprintf(pgmimg, "%d ", temp);
        }
        fprintf(pgmimg, "\n");
    }
    fclose(pgmimg);
}
int info_image()
{
    int i, j, temp = 0;
    int width = 13, height = 13;

    // Suppose the 2D Array to be converted to Image is as given below
    int image[13][13] = {
      { 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15 },
      { 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31},
      { 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47},
      { 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63},
      { 79, 79, 79, 79, 79, 79, 79, 79, 79, 79, 79, 79, 79},
      { 95, 95, 95, 95, 95, 95, 95, 95, 95, 95, 95, 95, 95 },
      { 111, 111, 111, 111, 111, 111, 111, 111, 111, 111, 111, 111, 111},
      { 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127},
      { 143, 143, 143, 143, 143, 143, 143, 143, 143, 143, 143, 143, 143},
      { 159, 159, 159, 159, 159, 159, 159, 159, 159, 159, 159, 159, 159},
      { 175, 175, 175, 175, 175, 175, 175, 175, 175, 175, 175, 175, 175},
      { 191, 191, 191, 191, 191, 191, 191, 191, 191, 191, 191, 191, 191},
      { 207, 207, 207, 207, 207, 207, 207, 207, 207, 207, 207, 207, 207}
    };

    FILE* pgmimg;
    pgmimg = fopen("pgmimg.pgm", "wb");

    // Writing Magic Number to the File
    fprintf(pgmimg, "P2\n");

    // Writing Width and Height
    fprintf(pgmimg, "%d %d\n", width, height);

    // Writing the maximum gray value
    fprintf(pgmimg, "255\n");
    int count = 0;
    for (i = 0; i < height; i++) {
        for (j = 0; j < width; j++) {
            temp = image[i][j];

            // Writing the gray values in the 2D array to the file
            fprintf(pgmimg, "%d ", temp);
        }
        fprintf(pgmimg, "\n");
    }
    fclose(pgmimg);
    for(i=0;i<height;i++)
        for(j=0;j<width;j++)
    {
        printf("\nPixel value at cordinate x=%d and y=%d is %d",i,j,image[i][j]);
    }
}
int crop_image()
{
    int i, j, temp = 0;
    int width = 13, height = 13;

    // Suppose the 2D Array to be converted to Image is as given below
    int image[13][13] = {
      { 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15 },
      { 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31},
      { 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47},
      { 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63},
      { 79, 79, 79, 79, 79, 79, 79, 79, 79, 79, 79, 79, 79},
      { 95, 95, 95, 95, 95, 95, 95, 95, 95, 95, 95, 95, 95 },
      { 111, 111, 111, 111, 111, 111, 111, 111, 111, 111, 111, 111, 111},
      { 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127},
      { 143, 143, 143, 143, 143, 143, 143, 143, 143, 143, 143, 143, 143},
      { 159, 159, 159, 159, 159, 159, 159, 159, 159, 159, 159, 159, 159},
      { 175, 175, 175, 175, 175, 175, 175, 175, 175, 175, 175, 175, 175},
      { 191, 191, 191, 191, 191, 191, 191, 191, 191, 191, 191, 191, 191},
      { 207, 207, 207, 207, 207, 207, 207, 207, 207, 207, 207, 207, 207}
    };

    FILE* pgmimg;
    pgmimg = fopen("pgmimg.pgm", "wb");

    // Writing Magic Number to the File
    fprintf(pgmimg, "P2\n");

    // Writing Width and Height
    fprintf(pgmimg, "%d %d\n", width, height);

    // Writing the maximum gray value
    fprintf(pgmimg, "255\n");
    int count = 0;
    for (i = 0; i < height; i++) {
        for (j = 0; j < width; j++) {
            temp = image[i][j];

            // Writing the gray values in the 2D array to the file
            fprintf(pgmimg, "%d ", temp);
        }
        fprintf(pgmimg, "\n");
    }
    fclose(pgmimg);
    for(i=0;i<height;i++)
        for(j=0;j<width;j++)
    {
        printf("\nPixel value at cordinate x=%d and y=%d is %d",i,j,image[i][j]);
    }
}
int colortosepia()
{
	FILE *fIn = fopen("lena_color.bmp","r");					//Input File name
	FILE *fOut = fopen("lena_sepia.bmp","w+");		    		//Output File name

	int i,r,g,b;
	unsigned char byte[54];

	if(fIn==NULL)												// check if the input file has not been opened succesfully.
	{
		printf("File does not exist.\n");
	}

	for(i=0;i<54;i++)											//read the 54 byte header from fIn
	{
		byte[i] = getc(fIn);
	}

	fwrite(byte,sizeof(unsigned char),54,fOut);					//write the header back

	// extract image height, width and bitDepth from imageHeader
	int height = *(int*)&byte[18];
	int width = *(int*)&byte[22];
	int bitDepth = *(int*)&byte[28];

	printf("width: %d\n",width);
	printf("height: %d\n",height );

	int size = height*width;									//calculate image size

	unsigned char buffer[size][3];								//to store the image data

	for(i=0;i<size;i++){
		r = 0;
		g = 0;
		b = 0;
		buffer[i][2] = getc(fIn);									//blue
		buffer[i][1] = getc(fIn);									//green
		buffer[i][0] = getc(fIn);									//red

		//conversion formula of rgb to sepia
		r = (buffer[i][0]*0.393) + (buffer[i][1]*0.769)	+ (buffer[i][2]*0.189);
		g = (buffer[i][0]*0.349) + (buffer[i][1]*0.686)	+ (buffer[i][2]*0.168);
		b = (buffer[i][0]*0.272) + (buffer[i][1]*0.534)	+ (buffer[i][2]*0.131);

		if(r > MAX_VALUE){											//if value exceeds
			r = MAX_VALUE;
		}
		if(g > MAX_VALUE){
			g = MAX_VALUE;
		}
		if(b > MAX_VALUE){
			b = MAX_VALUE;
		}
		putc(b,fOut);
		putc(g,fOut);
		putc(r,fOut);

	}


	fclose(fOut);
	fclose(fIn);


	return 0;
}
int binary_image()
{

	FILE *fIn = fopen("lena512.bmp","r");				//Input File name
	FILE *fOut = fopen("b_w.bmp","w+");		            //Output File name

	int i;
	unsigned char byte[54];								//to get the image header
	unsigned char colorTable[1024];						//to get the colortable

	if(fIn==NULL)										// check if the input file has not been opened succesfully.
	{
		printf("File does not exist.\n");
	}

	for(i=0;i<54;i++)									//read the 54 byte header from fIn
	{
		byte[i]=getc(fIn);
	}

	fwrite(byte,sizeof(unsigned char),54,fOut);			//write the header back

	// extract image height, width and bitDepth from imageHeader
	int height = *(int*)&byte[18];
	int width = *(int*)&byte[22];
	int bitDepth = *(int*)&byte[28];

	printf("width: %d\n",width);
	printf("height: %d\n",height );

	int size=height*width;								//calculate image size

	if(bitDepth<=8)										//if ColorTable present, extract it.
	{
		fread(colorTable,sizeof(unsigned char),1024,fIn);
		fwrite(colorTable,sizeof(unsigned char),1024,fOut);
	}

	unsigned char buffer[size];							//to store the image data

	fread(buffer,sizeof(unsigned char),size,fIn);		//read image data

	for(i=0;i<size;i++)									//store 0(black) and 255(white) values to buffer
		{
			buffer[i] = (buffer[i] > THRESHOLD) ? WHITE : BLACK;
		}

	fwrite(buffer,sizeof(unsigned char),size,fOut);		//write back to the output image

	fclose(fIn);
	fclose(fOut);

	return 0;
}
int blur_image()
{
    FILE *fIn = fopen("images/lena_color.bmp","r");			// Input File name
	FILE *fOut = fopen("lena_blur_color.bmp","w+");		    	// Output File name

	int i,j,y, x;
	unsigned char byte[54];

	if(fIn==NULL)							// check if the input file has not been opened succesfully.
	{
		printf("File does not exist.\n");
	}

	for(i=0;i<54;i++)						// read the 54 byte header from fIn
	{
		byte[i] = getc(fIn);
	}

	fwrite(byte,sizeof(unsigned char),54,fOut);			// write the header back

	// extract image height, width and bitDepth from imageHeader
	int height = *(int*)&byte[18];
	int width = *(int*)&byte[22];
	int bitDepth = *(int*)&byte[28];

	printf("width: %d\n",width);
	printf("height: %d\n",height );

	int size = height*width;					// calculate the image size

	unsigned char buffer[size][3];					// store the input image data
	unsigned char out[size][3];					// store the output image data

	for(i=0;i<size;i++)						// read image data character by character
	{
		buffer[i][2]=getc(fIn);					// blue
		buffer[i][1]=getc(fIn);					// green
		buffer[i][0]=getc(fIn);					// red
	}

	float v=1.0 / 9.0;						// initialize the blurrring kernel
	float kernel[3][3]={{v,v,v},
						{v,v,v},
						{v,v,v}};

	for(x=1;x<height-1;x++)
	{
		for(y=1;y<width-1;y++)
		{
			float sum0= 0.0;
			float sum1= 0.0;
			float sum2= 0.0;
			for(i=-1;i<=1;++i)
			{
				for(j=-1;j<=1;++j)
				{
					// matrix multiplication with kernel with every color plane
					sum0=sum0+(float)kernel[i+1][j+1]*buffer[(x+i)*width+(y+j)][0];
					sum1=sum1+(float)kernel[i+1][j+1]*buffer[(x+i)*width+(y+j)][1];
					sum2=sum2+(float)kernel[i+1][j+1]*buffer[(x+i)*width+(y+j)][2];
				}
			}
			out[(x)*width+(y)][0]=sum0;
			out[(x)*width+(y)][1]=sum1;
			out[(x)*width+(y)][2]=sum2;
		}
	}

	for(i=0;i<size;i++)						//write image data back to the file
	{
		putc(out[i][2],fOut);
		putc(out[i][1],fOut);
		putc(out[i][0],fOut);
	}

	fclose(fOut);
	fclose(fIn);
	return 0;
}
int brightning_image()
{
	FILE *fIn = fopen("lena512.bmp","r");			//Input File name
	FILE *fOut = fopen("lena_bright.bmp","w+");	    	//Output File name

	int i;
	unsigned char byte[54],colorTable[1024];

	if(fIn==NULL)						// check if the input file has not been opened succesfully.
	{
		printf("File does not exist.\n");
		exit(1);
	}

	for(i=0;i<54;i++)					//read the 54 byte header from fIn
	{
		byte[i] = getc(fIn);
	}

	fwrite(byte,sizeof(unsigned char),54,fOut);		//write the header back

	// extract image height, width and bitDepth from imageHeader
	int height = *(int*)&byte[18];
	int width = *(int*)&byte[22];
	int bitDepth = *(int*)&byte[28];

	printf("width: %d\n",width);
	printf("height: %d\n",height );

	int size = height*width;				//calculate image size

	if(bitDepth <= 8)					//if ColorTable present, extract it.
	{
		fread(colorTable,sizeof(unsigned char),1024,fIn);
		fwrite(colorTable,sizeof(unsigned char),1024,fOut);
	}


	unsigned char buffer[size];				//to store the image data
	int temp;

	fread(buffer,sizeof(unsigned char),size,fIn);		//read image data

	for(i=0;i<size;i++)					//increasing pixel values to get image bright
	{
		temp = buffer[i] + BRIGHTNESS_FACTOR;
		buffer[i] = (temp > MAX_COLOR) ? MAX_COLOR : temp;
	}

	fwrite(buffer,sizeof(unsigned char),size,fOut);		//write back to the output image

	fclose(fIn);
	fclose(fOut);

	return 0;
}
int dark_img()
{
	FILE *fIn = fopen("lena512.bmp","r");					//Input File name
	FILE *fOut = fopen("lena_dark.bmp","w+");		    	//Output File name

	int i;
	unsigned char byte[54],colorTable[1024];

	if(fIn==NULL)											// check if the input file has not been opened succesfully.
	{
		printf("File does not exist.\n");
	}

	for(i=0;i<54;i++)										//read the 54 byte header from fIn
	{
		byte[i] = getc(fIn);
	}

	fwrite(byte,sizeof(unsigned char),54,fOut);				//write the header back

	// extract image height, width and bitDepth from imageHeader
	int height = *(int*)&byte[18];
	int width = *(int*)&byte[22];
	int bitDepth = *(int*)&byte[28];

	printf("width: %d\n",width);
	printf("height: %d\n",height );

	int size = height*width;								//calculate image size

	if(bitDepth <= 8)										//if ColorTable present, extract it.
	{
		fread(colorTable,sizeof(unsigned char),1024,fIn);
		fwrite(colorTable,sizeof(unsigned char),1024,fOut);
	}

	unsigned char buffer[size];								//to store the image data

	fread(buffer,sizeof(unsigned char),size,fIn);			//read image data

	for(i=0;i<size;i++)										//decreasing pixel values to get image bright
	{
		if(buffer[i] > THRESHOLD1)
			buffer[i] = buffer[i] - THRESHOLD1;
	}

	fwrite(buffer,sizeof(unsigned char),size,fOut);			//write back to the output image

	fclose(fIn);
	fclose(fOut);

	return 0;
}
int copy(int argc,char *argv[])
{


    // Note the start time for profiling purposes.

	FILE *fo = fopen("images/lena_copy.bmp","wb"); // Output File name

	int i;

	FILE *streamIn;
        streamIn = fopen("images/lena512.bmp", "r"); // Input file name

        if (streamIn == (FILE *)0) // check if the input file has not been opened succesfully.
	{
            printf("File opening error ocurred. Exiting program.\n");
            exit(0);
 	}

 	unsigned char header[54]; // to store the image header
	unsigned char colorTable[1024]; // to store the colorTable, if it exists.

 	int count = 0;
 	for(i=0;i<54;i++)
 	{
 		header[i] = getc(streamIn);  // strip out BMP header

 	}
 	int width = *(int*)&header[18]; // read the width from the image header
 	int height = *(int*)&header[22]; // read the height from the image header
	int bitDepth = *(int*)&header[28]; // read the bitDepth from the image header

	if(bitDepth <= 8)
		fread(colorTable, sizeof(unsigned char), 1024, streamIn);


	printf("width: %d\n",width);
	printf("height: %d\n",height );

	fwrite(header, sizeof(unsigned char), 54, fo); // write the image header to output file

 	unsigned char buf[height * width]; // to store the image data

	fread(buf, sizeof(unsigned char), (height * width), streamIn);

	if(bitDepth <= 8)
		fwrite(colorTable, sizeof(unsigned char), 1024, fo);

	fwrite(buf, sizeof(unsigned char), (height * width), fo);

	fclose(fo);
 	fclose(streamIn);



}
int rotate_img()
{
	FILE *fIn = fopen("lena512.bmp","r");					//Input File name
	FILE *fOut = fopen("lena_rotate.bmp","w+");		    	//Output File name

	int i,j,choice;
	unsigned char byte[54],colorTable[1024];

	if(fIn==NULL)											// check if the input file has not been opened succesfully.
	{
		printf("File does not exist.\n");
	}

	for(i=0;i<54;i++)										//read the 54 byte header from fIn
	{
		byte[i] = getc(fIn);
	}

	fwrite(byte,sizeof(unsigned char),54,fOut);				//write the header back

	// extract image height, width and bitDepth from imageHeader
	int height = *(int*)&byte[18];
	int width = *(int*)&byte[22];
	int bitDepth = *(int*)&byte[28];

	printf("width: %d\n",width);
	printf("height: %d\n",height );

	int size = height*width;								//calculate image size

	if(bitDepth <= 8)										//if ColorTable present, extract it.
	{
		fread(colorTable,sizeof(unsigned char),1024,fIn);
		fwrite(colorTable,sizeof(unsigned char),1024,fOut);
	}

	unsigned char buffer[width][height];					//to store the image data
	unsigned char out_buffer[width][height];

	fread(buffer,sizeof(unsigned char),size,fIn);			//read the image data

	printf("Enter your choice :\n");
	printf("1. Rotate right\n");
	printf("2. Rotate left\n");
	printf("3. Rotate 180\n");

	scanf("%d",&choice);

	switch(choice)												//to rotate image in 3 direction
	{
		case 1:
			for(i=0;i<width;i++)								//to rotate right
			{
				for(j=0;j<height;j++)
				{
					out_buffer[j][height-1-i]=buffer[i][j];
				}
			}
			break;
		case 2:
			for(i=0;i<width;i++)								//to rotate left
			{
				for(j=0;j<height;j++)
				{
					out_buffer[j][i]=buffer[i][j];
				}
			}
			break;
		case 3:
			for(i=0;i<width;i++)								//to rotate 180 degree
			{
				for(j=0;j<height;j++)
				{
					out_buffer[width-i][j]=buffer[i][j];
				}
			}
			break;
		default:
			break;
	}

	fwrite(out_buffer,sizeof(unsigned char),size,fOut);		//write back to the output image

	fclose(fIn);
	fclose(fOut);

	return 0;
}
int negative_img()
{
	FILE* fp = fopen("images/lena512.bmp", "rb");   //read the file//

	unsigned char *imageData; // to store the image information
	unsigned char *newimageData; // to store the new image information, i.e. the negative image
        unsigned char imageHeader[54]; // to get the image header
        unsigned char colorTable[1024]; // to get the colortable

	int i,j; // loop counter variables

	fread(imageHeader, sizeof(unsigned char), 54, fp); // read the 54-byte from fp to imageHeader


	// extract image height and width from imageHeader
        int width = *(int*)&imageHeader[18];
        int height = *(int*)&imageHeader[22];
	int bitDepth = *(int*)&imageHeader[28];

        int imgDataSize = width * height; // calculate image size

        imageData = (unsigned char*)malloc (imgDataSize * sizeof(unsigned char)); // allocate the block of memory as big as the image size
        newimageData = (unsigned char*)malloc (imgDataSize * sizeof(unsigned char));

	if(bitDepth <= 8)	// COLOR TABLE Present
		fread(colorTable, sizeof(unsigned char), 1024, fp); // read the 1024-byte from fp to colorTable


	fread( imageData, sizeof(unsigned char), imgDataSize, fp);


	//Calculate the mean of the image
	for(i = 0; i < height; i++){
	      for(j = 0; j < width; j++){
		     newimageData[i*width + j] = 255 - imageData[i*width + j];
		 }
	}

	FILE *fo = fopen("images/lena_negative.bmp", "wb");

        fwrite(imageHeader, sizeof(unsigned char), 54, fo); // write the header back.

	if(bitDepth <= 8)	// COLOR TABLE Present
        	fwrite(colorTable, sizeof(unsigned char), 1024, fo); // write the color table back

        fwrite( newimageData, sizeof(unsigned char), imgDataSize, fo); // write the values of the negative image.

        fclose(fo);
	fclose(fp);

}
// header=imageHeader, data=imageData,
int bmptotext(int argc, char*argv[]){

FILE *ptr_bmp_in;
FILE *ptr_text_out;
int c;

ptr_bmp_in=fopen("sun.bmp","rb");
ptr_text_out=fopen("sun_text.txt","w");

if(!ptr_bmp_in)
{
    printf("Unable to open file\n");
    return 1;
}

while((c=fgetc(ptr_bmp_in)) != EOF)
    {
        for(int i=0;i<=7;i++)
        {
            if(c&(1<<(7-i)))
            {
                fputc('1',ptr_text_out);
            }
            else
            {
                fputc('0',ptr_text_out);
            }
        }
    }


    fclose(ptr_bmp_in);
    fclose(ptr_text_out);
    printf("Writing done\n");

    return 0;
}
char bytefromtext(unsigned char* text)
{
    char result = 0;
    for(int i=0;i<8;i++)
    {
        if(text[i]=='1')
        {
            result |= (1 << (7-i));
        }
    }
    return result;
}

int texttobmp(int argc, char*argv[]){

FILE *ptr_txt_in;
FILE *ptr_bmp_out;
unsigned char buf[8];
int c;
int j = 0;


ptr_txt_in=fopen("sun_text.txt","r");
ptr_bmp_out=fopen("sun_output.bmp","wb");


if(!ptr_txt_in)
{
    printf("Unable to open file\n");
    return 1;
}

while((c=fgetc(ptr_txt_in)) != EOF)
    {
        buf[j++] = c;
        if(j==8)
        {
            fputc(bytefromtext(buf),ptr_bmp_out);
            j=0;
        }
    }


    fclose(ptr_txt_in);
    fclose(ptr_bmp_out);
    printf("Writing done\n");

    return 0;
}

int rgbtogray()
{
    FILE *fIn = fopen("sun.bmp", "rb");
    FILE *fOut = fopen("tiger_gray.bmp", "wb");
    if (!fIn || !fOut)
    {
        printf("File error.\n");
        return 0;
    }

    unsigned char header[54];
    fread(header, sizeof(unsigned char), 54, fIn);
    fwrite(header, sizeof(unsigned char), 54, fOut);

    int width = *(int*)&header[18];
    int height = abs(*(int*)&header[22]);
    int stride = (width * 3 + 3) & ~3;
    int padding = stride - width * 3;

    printf("width: %d (%d)\n", width, width * 3);
    printf("height: %d\n", height);
    printf("stride: %d\n", stride);
    printf("padding: %d\n", padding);

    unsigned char pixel[3];
    for (int y = 0; y < height; ++y)
    {
        for (int x = 0; x < width; ++x)
        {
            fread(pixel, 3, 1, fIn);
            unsigned char gray = pixel[0] * 0.3 + pixel[1] * 0.58 + pixel[2] * 0.11;
            memset(pixel, gray, sizeof(pixel));
            fwrite(&pixel, 3, 1, fOut);
        }
        fread(pixel, padding, 1, fIn);
        fwrite(pixel, padding, 1, fOut);
    }
    fclose(fOut);
    fclose(fIn);
    return 0;
}
int main()
{
    int ch;
    while(1)
    {
        printf("\nENTER\n 1 TO SAVE IMAGE \n 2 TO FIND INFORMATION OF IMAGE \n 3 TO CROP IMAGE \n 4 TO APPLY SEPIA FILTER \n 5 TO GET BINARY IMAGE \n 6  TO GET BLUR IMAGE \n 7 TO BRIGHT THE IMAGE \n 8 TO DARK THE IMAGE \n 9 TO ROTATE THE IMAGE \n 10 TO GET NEGATIVE OF IMAGE \n 11 TO CONVERT RGB TO GRAY \n 12 TO EXIT \n");
      scanf("%d",&ch);
      switch(ch)
      {
          case 1:save_image();break;
          case 2:info_image();break;
          case 3:crop_image();break;
          case 4:colortosepia();break;
          case 5:binary_image();break;
          case 6:blur_image();break;
          case 7:brightning_image();break;
          case 8:dark_img();break;
          case 9:rotate_img();break;
          case 10:negative_img();break;
          case 11:rgbtogray();break;
          case 12:exit(0);break;
      }
    }

}
