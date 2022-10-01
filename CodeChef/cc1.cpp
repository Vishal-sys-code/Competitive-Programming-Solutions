/*
 ICPC JUDGE:- CLARIFICARION
 writer:- 
 solver:- 
 typer:- 
 edge_case checker:- 
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio();
	cin.tie();
	cout.tie();

	int n;
	cin >> n;
	int player1=0;
	int player2=0;
	int lead = 0;
	int player1_points;
	int player2_points;
	int winner;
	

	for(int i=0;i<n;i++){
	    //taking inputs for the player1 and player2
	    cin >> player1_points >> player2_points;
	    
		player1 = player1 + player1_points;
		player2 = player2 + player2_points;
		
		//checking conditions for the round1 and round2 scores
		if((player1 > player2) and (lead < (player1 - player2))){
			lead = (player1 - player2);
			winner = 1;
		}
		
		else if((player1 < player2) and (lead < (player2 - player1))){
			lead = abs(player2 - player1);
			winner = 2;
		}
		
	}
    //getting final result
	cout << winner << " " << lead << "\n";
	return 0;
}
