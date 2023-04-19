#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

//Burak Önce  20120205052
//Bu program dizinin içinde en çok bulunan elemanı yazdırır. 

void encokf(int a[],int b[],int uzunluk)
{

    for(int x=0;x<19;x++) //en çok bulunan elemanı bulmak için bir döngü
    {
    for(int y=0;y<19;y++)  //tüm elemanlara bakılması için gerekli 2. döngü
        {

      if(a[x]==a[y])    //eşitliğe bakılır
      b[x]++;           //kendimizin atadığı ve tüm elemanları 0 olan dizi eşitlik durumunda arttırılır

        }

    }   

            for(int x=0; x<19; x++)
            { // dizi sıralanması için döngü

                for(int y=0,atama; y<19; y++)

                     if(b[x] > b[y]) //b dizisi kendi içinde sıralanır bu duruma göre de a dizisi belirlenir
                    {

                        atama=b[x];  //dizi içi yer değiştirme
                        b[x]=b[y];
                        b[y]=atama;

                        atama=a[x];  //dizi içi yer değiştirme
                        a[x]=a[y];
                        a[y]=atama;

                    }

            }

printf("%d",a[0]);

}

int main() {
  
int a[]={34,2,3,5,2,6,8,8,9,8,55,4,32,2,8,90,3434,9,34};
int b[]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

encokf(a,b,19);

  return 0;
}