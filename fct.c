/**
 * Fonction retournant le resultat de la multiplication de a*b
 * 
 * Algorithme : addition successive
 *
 * @param a (int ) : premier nombre
 * @param b (int)  : deuxieme nombre
 * @return (int) : résultat de la multiplication
 */
int mult(int a,int b){
	int i; // indice de la boucle
	int res = 0; // resultat de la multiplication

	// res = a + a + a + a + .... + a (b fois)
	for (i=0; i<b;i++)
		res+=a;	

	return res;
}