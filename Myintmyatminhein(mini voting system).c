#include <stdio.h>
int member[]={1,2,3,4,5};
int votingpplid[]={10,20,30,40,50};
int votingpplpas[]={11,22,33,44,55};
int vpplid=0;
int vpplpas=0;
int main(){
 intro();
 return 0;
}
void intro(){
    printf("Welcome to the mini voting system for best singer award\n");
    printf("Enter your Id to vote:");
    scanf ("%d", &vpplid);
    printf("Enter your password to vote:");
    scanf ("%d", &vpplpas);
    for (int i=0; i<5;i++){
        if (vpplid==votingpplid[i]){
                if(vpplpas==votingpplpas[i]){
                    memberlist1();
                    votemember();
                    break;

                }   else{
        printf("wrong id or password, Try again");
        break;
    }
        }

    }


}
void memberlist(i){
    switch(i)
        {
            case 0:
            printf("Member Id: %d, Memeber name : Zaw Zaw\n", member[i]);
            break;
            case 1:
            printf("Member Id: %d, Memeber name : Mg Mg\n", member[i]);
            break;
            case 2:
            printf("Member Id: %d, Memeber name : Kaung Kaung\n", member[i]);
            break;
            case 3:
            printf("Member Id: %d, Memeber name : Su Su\n", member[i]);
            break;
            case 4:
            printf("Member Id: %d, Memeber name : Myint Myat\n", member[i]);
            break;

        }
   }

void memberlist1(i){
     for(int i=0;i<5;i++){
         memberlist(i);
     }
}
void votemember(){
    int* voteaddress;
    int votemm;
    voteaddress= &votemm;

    printf("Enter member id for voting:");
    scanf("%d", &votemm);
    for(int i=0;i<5;i++){
        if (*voteaddress==member[i]){
            printf("Voting complete\n");
            printf ("Your voting is :");
            memberlist(i);
            break;
        }
        else {
            printf("Choose valid member id");
            break;
        }
    }


}



