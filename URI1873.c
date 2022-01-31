
/*
#include <stdio.h>


int main(){

    void jogo(char r[], char s[]);
    int N,i;
    char rajesh[8], sheldon[8];

    scanf("%d",&N);
        for(i = 0; i < N; i++){
            scanf("%s %s",rajesh,sheldon);
            jogo(rajesh,sheldon);
        }
    return 0;
}

void jogo(char r[], char s[]) {

if ()
    printf("empate");

}
*/
#include<bits/stdc++.h>
#include<stdlib.h>


string decide(string &s1, string &s2)
{
	if (s1 == s2) return "empate\n";

	if (s1 == "tesoura" && s2 == "papel") return "rajesh\n";
	else if (s2 == "tesoura" && s1 == "papel") return "sheldon\n";

	if (s1 == "papel" && s2 == "pedra") return "rajesh\n";
	else if (s2 == "papel" && s1 == "pedra") return "sheldon\n";

	if (s1 == "pedra" && s2 == "lagarto") return "rajesh\n";
	else if (s1 == "lagarto" && s2 == "pedra") return "sheldon\n";

	if (s1 == "lagarto" && s2 == "spock") return "rajesh\n";
	else if (s1 == "spock" && s2 == "lagarto") return "sheldon\n";

	if (s1 == "spock" && s2 == "tesoura") return "rajesh\n";
	else if (s2 == "spock" && s1 == "tesoura") return "sheldon\n";

	if (s1 == "tesoura" && s2 == "lagarto") return "rajesh\n";
	else if (s2 == "tesoura" && s1 == "lagarto") return "sheldon\n";

	if (s1 == "lagarto" && s2 == "papel") return "rajesh\n";
	else if (s1 == "papel" && s2 == "lagarto") return "sheldon\n";

	if (s1 == "papel" && s2 == "spock") return "rajesh\n";
	else if (s1 == "spock" && s2 == "papel") return "sheldon\n";

	if (s1 == "spock" && s2 == "pedra") return "rajesh\n";
	else if (s1 == "pedra" && s2 == "spock") return "sheldon\n";

	if (s1 == "pedra" && s2 == "tesoura") return "rajesh\n";
	return "sheldon\n";


	int main()
	{
	    string s1,s2;
	    int c;
	    scanf("%d",&c);
	    while(c--){
            scanf("%s %s",s1,s2);

            printf("%s",decide(s1,s2))
	    }

	}
