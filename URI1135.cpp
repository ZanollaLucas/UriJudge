#include <cstdio>
#include <vector>
#include <algorithm>

#define MAXP 20
#define MAXN 100005


using namespace std;

int tabela[MAXN][MAXP];
int profundidade[MAXN];
long long dist0[MAXN];

int LCA(int u, int v)
{
    if (profundidade[v] < profundidade[u])
        swap(u, v);

    int difer = profundidade[v] - profundidade[u];

    for (int i = 0; i < MAXP; i++)
        if ((difer >> i) & 1)
            v = tabela[v][i];

    if (u == v)
        return u;

	// altura igualada
    for (int i = MAXP-1; i >= 0; i--)
        if (tabela[u][i] != tabela[v][i])
        {
            u = tabela[u][i];
            v = tabela[v][i];
        }

    return tabela[u][0]; // esse é o LCA
}

int main(){

    FILE* saida = freopen("saida.txt", "w", stdout);

    int n;

   // tabela[0][0] = -1; // não tem pai pois é a raiz


    while(scanf("%d",&n),n){

        int formi;
        long long comprimento,resposta;

        for(int i=1;i<n;i++){
            scanf("%d %lld",&formi,&comprimento);
            tabela[i][0] = formi;
			dist0[i] = comprimento + dist0[formi]; //somo o comprimento até o formigueiro 0
			profundidade[i] = profundidade[formi] + 1; //adiciona a profundidade para fazer o lca
        }

        for(int j = 1; (1 << j) < n; j++) //utiliza deslocamento de bit para melhorar desempenho
            for(int i = 0; i< n; i++)
                if(tabela[i][j-1] != -1) //verifica se é raiz
                    tabela[i][j] = tabela[tabela[i][j-1]][j-1]; //completa a tabela com o pai

        int q;
        scanf("%d",&q);
		while (q--) {
            int s, t;
			scanf("%d %d\n", &s, &t);
            resposta = dist0[s] + dist0[t] - 2*dist0[LCA(s,t)];
			if(q) printf("%lld ", resposta);
            else printf("%lld\n", resposta);
		}
	}
 fclose(saida);
return 0;
}
