#include "iGraphics.h"
#include <iostream>

using namespace std;

//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::Idraw Here::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::://

//Function Declaration---------------------
void iLoadResources();
void LoadMenuPages();

// Menu 
void gotoMainPage(); 
void gotoSecondPage();
void gotoThirdPage();
void gotoExitPage();
void gotoCollectionTab();
void gotoArenaTab();
void gotoAboutUs();
		void gotoCcharater();
		void gotoCaboutus();
		void gotoCarena();
void ShowMenuPage();
void playerTwoGoku();
void playerOneGoku();
void loadCollectionTab();


void playsound();
bool PlayS = true;

// Training
void gotoTrainingGround();

// Win Condition
void Player1win();
void Player2win();
void Player1Victory();
void Player2Victory();

// Timer 
int getDigitImage(int digit);
void loadTimer();
void GamerOverNow();


// icon 
int BackIcon;
int audioicon;



// Selection indicators for characters
int P1SelectedChar = -1; // -1: none, 0: Gojo, 1: Naruto, 2: Ichigo, 3: Luffy, 4: Zoro, 5: Tanjiro
int P2SelectedChar = -1; // -1: none, 0: Ak, 1: Sasuke, 2: Goku, 3: Vegeta, 4: Madara, 5: Itachi

//Variable Declaration----------------------
	// Menu
bool FrontPage = true;
bool FirstPage = false;
bool SecondPage = false;
bool ThirdPage = false;
bool ForthPage = false;

// Training: 
bool TrainingPhase = false;
int TrainingPart = 0;


// Collecton:
bool cCharacter = false;
bool cArena = false;
bool cAboutus = false;
bool CollectionAboutus = false;
bool CollectionArena = false;
bool CollectionCharacters = false;



//for map and character selection 
//first page for character selection;
void loadMapImages();
void drawCharacterSelection();
void drawMapSelection();
void drawFightingPage();
void gotoCharacterSelectionPage();

int playerselectionimg;

void playerOneGojo();
void playerOneIchigo();
void playerOneTanjiro();
void playerOneKunoichi();
void playerOneJinsakai();

void playerTwoShinobi();
void playerTwoRevtan();
void playerTwoAk();
void playerTwoRevIchigo();




// Global variables
int gameState = -1; // -1: Homepage, 0: Character Selection, 1: Map Selection, 2: Fighting
int imgBackground1;
int selectedMap = -1; // -1 means no map selected
int Player1Pick = 0, Player2Pick = 0;
int Player1Character = 0, Player2Character = 0; // 0 to 5 for 6 characters
/*
//Player-specific pick flags
int P1PickGojo = 0, P1PickGoku = 0, P1PickIchigo = 0, P1PickTanjiro = 0, P1PickKunoichi = 0, P1PickJinsakai = 0;
int P2PickRevIchigo = 0, P2PickGoku = 0, P2PickAk = 0, P2PickGhost = 0, P2PickShinobi= 0, P2PickRevtan = 0;
*/
// Map images
int mapImage1, mapImage2, mapImage3, mapImage4, mapImage5, mapImage6;

//for profile showing
int pfpGojo1, pfpGoku2, pfpIchigo1,pfpTanjiro1,  pfpKunoichi1, pfpJinsakai1;
int pfpRevIchigo1, pfpGoku1, pfpAk1, pfpGhost1, pfpShinobi1, pfpRevtan1;
void loadPlayerpfp();


//  Timer 
int timeLeft = 45;  // Initial time
bool gameOver = false;
bool  GameOver = false;

//Score for winner
int P1score =0;
int P2score = 0; 


/*
// Profile images
int pfpGojo, pfpGoku, pfpIchigo, pfpLuffy, pfpKunoichi, pfpTanjiro;
int pfpRevIchigo, pfpGoku, pfpAk, pfpVegeta, pfpShinobi, pfpRevtan;
*/
//Character
	// Goku:
void gokuLoadImage();
void loadGokuOGImagesLeft();
void loadGokuOGImagesRight();
void loadALTGokuImagesLeft();
void loadALTGokuImagesRight();
//ak and gojo
void akLoadImage();
void loadAkImagesLeft();
void loadAkImagesRight();
void gojoLoadImage();
void loadGojoImagesLeft();
void loadGojoImagesRight();

//ninja girl
void shinobiLoadImage();
void loadShinobiImagesLeft();
void loadShinobiImagesRight();
void kunoichiLoadImage();
void loadKunoichiImagesLeft();
void loadKunoichiImagesRight();

//inchigo
void revIchigoLoadImage();
void loadRevIchigoImagesLeft();
void loadRevIchigoImagesRight();
void ichigoLoadImage();
void loadIchigoImagesLeft();
void loadIchigoImagesRight();

//tangiro
void revtanLoadImage();
void loadRevtanImagesLeft();
void loadRevtanImagesRight();
void tanjiroLoadImage();
void loadTanjiroImagesLeft();
void loadTanjiroImagesRight();

//Jin sakai and Gost
void ghostLoadImage();
void loadGhostImagesLeft();
void loadGhostImagesRight();
void jinsakaiLoadImage();
void loadJinsakaiImagesLeft();
void loadJinsakaiImagesRight();

void KAMEHAMEHA_Blast();




// Basic Character MoveMent:----------------------------------------------------

//Character Based:
int P1GokuX = 0, P1GokuY = 200, GokuWidth = 108, GokuHeight = 147, P1PickGoku = 0, P2PickGoku = 0;
int  P2GokuX = 0, P2GokuY = 200;
// Normal Coordination
//ak and gojo
int P1AkX = 0, P1AkY = 200, AkWidth = 108, AkHeight = 147, P1PickAk = 0, P2PickAk = 0;
int P2AkX = 0, P2AkY = 200;
int P1GojoX = 0, P1GojoY = 200, GojoWidth = 108, GojoHeight = 147, P1PickGojo = 0, P2PickGojo = 0;
int P2GojoX = 0, P2GojoY = 200;
//ninjagirl
int P1ShinobiX = 0, P1ShinobiY = 200, ShinobiWidth = 108, ShinobiHeight = 147, P1PickShinobi = 0, P2PickShinobi = 0;
int P2ShinobiX = 0, P2ShinobiY = 200;
int P1KunoichiX = 0, P1KunoichiY = 200, KunoichiWidth = 108, KunoichiHeight = 147, P1PickKunoichi = 0, P2PickKunoichi = 0;
int P2KunoichiX = 0, P2KunoichiY = 200;

//inchigo
int P1RevIchigoX = 0, P1RevIchigoY = 200, RevIchigoWidth = 108, RevIchigoHeight = 147, P1PickRevIchigo = 0, P2PickRevIchigo = 0;
int P2RevIchigoX = 0, P2RevIchigoY = 200;
int P1IchigoX = 0, P1IchigoY = 200, IchigoWidth = 108, IchigoHeight = 147, P1PickIchigo = 0, P2PickIchigo = 0;
int P2IchigoX = 0, P2IchigoY = 200;

//tanjiro
int P1RevtanX = 0, P1RevtanY = 200, RevtanWidth = 108, RevtanHeight = 147, P1PickRevtan = 0, P2PickRevtan = 0;
int P2RevtanX = 0, P2RevtanY = 200;
int P1TanjiroX = 0, P1TanjiroY = 200, TanjiroWidth = 108, TanjiroHeight = 147, P1PickTanjiro = 0, P2PickTanjiro = 0;
int P2TanjiroX = 0, P2TanjiroY = 200;

//jinSakai and Ghost
int P1GhostX = 0, P1GhostY = 200, GhostWidth = 108, GhostHeight = 147, P1PickGhost = 0, P2PickGhost = 0;
int P2GhostX = 0, P2GhostY = 200;
int P1JinsakaiX = 0, P1JinsakaiY = 200, JinsakaiWidth = 108, JinsakaiHeight = 147, P1PickJinsakai = 0, P2PickJinsakai = 0;
int P2JinsakaiX = 0, P2JinsakaiY = 200;


// Game accesories
bool isPaused = false;

void P1healthBar();
void P2healthBar();

void P1powerBar();
void P2powerBar();



//bool  GameOver = false;

int P1Health = 100;
int P2Health = 100;


bool P1attackingP2 = false;
bool P2attackingP1 = false;


//int _Idle = 0;

//bool RightSide = false, LeftSide = false;

//Player One Coordination
int P1x=200;
bool P1RightSide = false, P1LeftSide = false;


// Player 2 Coordination
int P2x = 900;
bool P2RightSide = false, P2LeftSide = false;


// Normal Coordination ----------------------

// Idle -------

int _Idle = 0;
	// Player One:
		int P1idleNum = 0;
		int P1_Idle = 1;

	// Player Two:
		int P2idleNum = 0;
		int P2_Idle = 1;

//Walk-------------------------------------

	//Player One
		int P1_Walk = 0;
		int P1i = 0;

	//Player Two
		int P2_Walk = 0;
		int P2i = 0;


// Damage ------------------------------------------

bool P2_damage = false;
int P2d = 0;


bool P1_damage = false;
int P1d = 0;





// Jump Cordination ------------------------

	//Player one
		bool P1jump = false;
		int P1up = 0, P1jumpPic1 = 0, P1jumpPic3 = 0, P1jumpPic2= 0, P1down = 100;

	//Player Two
		bool P2jump = false;
		int P2up = 0, P2jumpPic1 = 0, P2jumpPic3= 0, P2jumpPic2= 0, P2down = 100;

//Attack Coordination ----------------------------------------------------

	//Player One
		int P1right_Side_range = 0;
		int P1left_Side_range = 0;

		int P1AttackingTime1 = 0;
		int P1Attacking1 = 0;

		int	P1AttackingTime2 = 0;
		int P1Attacking2 = 0;
		int P1blast = 0;
		int P1blx = 0, P1bly = 0;
		int P1range_Attack = 0;


	// Player Two



		int P2right_Side_range = 0;
		int P2left_Side_range = 0;

		int P2AttackingTime1 = 0;
		int P2Attacking1 = 0;

		int	P2AttackingTime2 = 0;
		int P2Attacking2 = 0;
		int P2blast = 0;
		int P2blx = 0, P2bly = 0;
		int P2range_Attack = 0;



//Defend-------------------------------------
	//Player One
int P1DefendTime = 0;
bool P1_Defend =false;
	//Player Two
int P2DefendTime = 0;
bool P2_Defend =false;



// Power Up-----------------------------------
	//Player One
	void P1powerUp();
	bool P1_Power = false;
	int P1power_up = 50;

	//Player Two
	void P2powerUp();
	bool P2_Power = false;
	int P2power_up = 50;

//Ultimate------------------------------------------
// Player One
	int P1UltimateATK = 0;
	int P1ulti = 0;
	bool P1_Ultimate = false;
	int P1Ultimate_Blast = 0;
	int P1KAMEHAMEHA = P1x;
	bool P1RightSideUltimate = false;
	bool P1LeftSideUltimate = false;
	int P1ulti_blast = 0;

// Player Two
	int P2UltimateATK = 0;
	int P2ulti = 0;
	bool P2_Ultimate = false;
	int P2Ultimate_Blast = 0;
	int P2KAMEHAMEHA = P2x;
	bool P2RightSideUltimate = false;
	bool P2LeftSideUltimate = false;
	int P2ulti_blast = 0;



//LoadImages))))))))))))))))))))))))))))))))))))))
// Variables:

	// Menu Pages:

int StartMenu;
int FirstMenu;
int SecondMenu;
int ThirdMenu;
int ForthMenu;
int Menu = 1;

// Training Ground:
		int TrainingGround;

// Collection Tab

int	Ccharacter ;
int CharacterShow ;
int CAboutUs ;
int AboutUs ;
int Carena ;
int arena ;


/// CHaracter Status;
//Life bar
	int P1health1, P1health2, P1health3, P1health4, P1health5, P1health6, P1health7, P1health8, P1health9;
	int P2health1, P2health2, P2health3, P2health4, P2health5, P2health6, P2health7, P2health8, P2health9;

	// PowerBar
	int P1PowerUp1, P1PowerUp2, P1PowerUp3, P1PowerUp4, P1PowerUp5;
	int P2PowerUp1, P2PowerUp2, P2PowerUp3, P2PowerUp4, P2PowerUp5;


// Timer

	int img0, img1, img2, img3, img4, img5, img6, img7, img8, img9;


	// GameOver panel
	int Player1Win, Player2Win;


	


// Character load))))))))))))))))))))))))))))))))))))

int Gokupfp;
// GOKU Right Side------------------
int goku_Idle_R_1, goku_Idle_R_2;
int goku_Lose_R_1, goku_Lose_R_2, goku_Lose_R_3, goku_Lose_R_4, goku_Lose_R_5;
int goku_Victory_R_1, goku_Victory_R_2;
int goku_Damage_R_1, goku_Damage_R_2;
int goku_Defence_R_1;
int goku_Jump_R_1, goku_Jump_R_2, goku_Jump_R_3;
int goku_NormalATK_R_1, goku_NormalATK_R_2, goku_NormalATK_R_3, goku_NormalATK_R_4;
int goku_PowerUp_R_1, goku_PowerUp_R_2;
int goku_StrongATK_R_1, goku_StrongATK_R_2, goku_StrongATK_R_3;
int goku_Ultimate_R_1, goku_Ultimate_R_2, KA_ME_HA_ME_HA_R;
int goku_Walk_R_1, goku_Walk_R_2, goku_Walk_R_3;
int kamehameha_R_1, kamehameha_R_2;

	// GOKU Left Sidde-------------------
int goku_Idle_L_1, goku_Idle_L_2;
int goku_Lose_L_1, goku_Lose_L_2, goku_Lose_L_3, goku_Lose_L_4, goku_Lose_L_5;
int goku_Victory_L_1, goku_Victory_L_2;
int goku_Damage_L_1, goku_Damage_L_2;
int goku_Defence_L_1;
int goku_Jump_L_1, goku_Jump_L_2, goku_Jump_L_3;
int goku_NormalATK_L_1, goku_NormalATK_L_2, goku_NormalATK_L_3, goku_NormalATK_L_4;
int goku_PowerUp_L_1, goku_PowerUp_L_2;
int goku_StrongATK_L_1, goku_StrongATK_L_2, goku_StrongATK_L_3;
int goku_Ultimate_L_1, goku_Ultimate_L_2, KA_ME_HA_ME_HA_L;
int goku_Walk_L_1, goku_Walk_L_2, goku_Walk_L_3;
int kamehameha_L_1, kamehameha_L_2;

	// ALT Right Side------------------------
int ALT_goku_Idle_R_1, ALT_goku_Idle_R_2;

int ALT_goku_Lose_R_1, ALT_goku_Lose_R_2, ALT_goku_Lose_R_3, ALT_goku_Lose_R_4, ALT_goku_Lose_R_5;

int ALT_goku_Victory_R_1, ALT_goku_Victory_R_2;

int ALT_goku_Damage_R_1, ALT_goku_Damage_R_2;

int ALT_goku_Defence_R_1;

int ALT_goku_Jump_R_1, ALT_goku_Jump_R_2, ALT_goku_Jump_R_3;

int ALT_goku_NormalATK_R_1, ALT_goku_NormalATK_R_2, ALT_goku_NormalATK_R_3, ALT_goku_NormalATK_R_4;

int ALT_goku_PowerUp_R_1, ALT_goku_PowerUp_R_2;

int ALT_goku_StrongATK_R_1, ALT_goku_StrongATK_R_2, ALT_goku_StrongATK_R_3;

int ALT_goku_Ultimate_R_1, ALT_goku_Ultimate_R_2, ALT_KA_ME_HA_ME_HA_R;

int ALT_goku_Walk_R_1, ALT_goku_Walk_R_2, ALT_goku_Walk_R_3;


	// ALT Left Side-------------------------
int ALT_goku_Idle_L_1, ALT_goku_Idle_L_2;

int ALT_goku_Lose_L_1, ALT_goku_Lose_L_2, ALT_goku_Lose_L_3, ALT_goku_Lose_L_4, ALT_goku_Lose_L_5;

int ALT_goku_Victory_L_1, ALT_goku_Victory_L_2;

int ALT_goku_Damage_L_1, ALT_goku_Damage_L_2;

int ALT_goku_Defence_L_1;

int ALT_goku_Jump_L_1, ALT_goku_Jump_L_2, ALT_goku_Jump_L_3;

int ALT_goku_NormalATK_L_1, ALT_goku_NormalATK_L_2, ALT_goku_NormalATK_L_3, ALT_goku_NormalATK_L_4;

int ALT_goku_PowerUp_L_1, ALT_goku_PowerUp_L_2;

int ALT_goku_StrongATK_L_1, ALT_goku_StrongATK_L_2, ALT_goku_StrongATK_L_3;

int ALT_goku_Ultimate_L_1, ALT_goku_Ultimate_L_2, ALT_KA_ME_HA_ME_HA_L;

int ALT_goku_Walk_L_1, ALT_goku_Walk_L_2, ALT_goku_Walk_L_3;

//ak and gojo
int pfp;
// Ak Right Side
int ak_Idle_R_1, ak_Idle_R_2;
int ak_Lose_R_1, ak_Lose_R_2, ak_Lose_R_3, ak_Lose_R_4, ak_Lose_R_5;
int ak_Victory_R_1, ak_Victory_R_2;
int ak_Damage_R_1, ak_Damage_R_2;
int ak_Defence_R_1;
int ak_Jump_R_1, ak_Jump_R_2, ak_Jump_R_3;
int ak_NormalATK_R_1, ak_NormalATK_R_2, ak_NormalATK_R_3, ak_NormalATK_R_4;
int ak_PowerUp_R_1, ak_PowerUp_R_2;
int ak_StrongATK_R_1, ak_StrongATK_R_2, ak_StrongATK_R_3;
int ak_Ultimate_R_1, ak_Ultimate_R_2, ak_KA_ME_HA_ME_HA_R;
int ak_Walk_R_1, ak_Walk_R_2, ak_Walk_R_3;
int ak_kamehameha_R_1, ak_kamehameha_R_2;

// Ak Left Side
int ak_Idle_L_1, ak_Idle_L_2;
int ak_Lose_L_1, ak_Lose_L_2, ak_Lose_L_3, ak_Lose_L_4, ak_Lose_L_5;
int ak_Victory_L_1, ak_Victory_L_2;
int ak_Damage_L_1, ak_Damage_L_2;
int ak_Defence_L_1;
int ak_Jump_L_1, ak_Jump_L_2, ak_Jump_L_3;
int ak_NormalATK_L_1, ak_NormalATK_L_2, ak_NormalATK_L_3, ak_NormalATK_L_4;
int ak_PowerUp_L_1, ak_PowerUp_L_2;
int ak_StrongATK_L_1, ak_StrongATK_L_2, ak_StrongATK_L_3;
int ak_Ultimate_L_1, ak_Ultimate_L_2, ak_KA_ME_HA_ME_HA_L;
int ak_Walk_L_1, ak_Walk_L_2, ak_Walk_L_3;
int ak_kamehameha_L_1, ak_kamehameha_L_2;

// Gojo Right Side
int gojo_Idle_R_1, gojo_Idle_R_2;
int gojo_Lose_R_1, gojo_Lose_R_2, gojo_Lose_R_3, gojo_Lose_R_4, gojo_Lose_R_5;
int gojo_Victory_R_1, gojo_Victory_R_2;
int gojo_Damage_R_1, gojo_Damage_R_2;
int gojo_Defence_R_1;
int gojo_Jump_R_1, gojo_Jump_R_2, gojo_Jump_R_3;
int gojo_NormalATK_R_1, gojo_NormalATK_R_2, gojo_NormalATK_R_3, gojo_NormalATK_R_4;
int gojo_PowerUp_R_1, gojo_PowerUp_R_2;
int gojo_StrongATK_R_1, gojo_StrongATK_R_2, gojo_StrongATK_R_3;
int gojo_Ultimate_R_1, gojo_Ultimate_R_2, gojo_KA_ME_HA_ME_HA_R;
int gojo_Walk_R_1, gojo_Walk_R_2, gojo_Walk_R_3;
int gojo_kamehameha_R_1, gojo_kamehameha_R_2;

// Gojo Left Side
int gojo_Idle_L_1, gojo_Idle_L_2;
int gojo_Lose_L_1, gojo_Lose_L_2, gojo_Lose_L_3, gojo_Lose_L_4, gojo_Lose_L_5;
int gojo_Victory_L_1, gojo_Victory_L_2;
int gojo_Damage_L_1, gojo_Damage_L_2;
int gojo_Defence_L_1;
int gojo_Jump_L_1, gojo_Jump_L_2, gojo_Jump_L_3;
int gojo_NormalATK_L_1, gojo_NormalATK_L_2, gojo_NormalATK_L_3, gojo_NormalATK_L_4;
int gojo_PowerUp_L_1, gojo_PowerUp_L_2;
int gojo_StrongATK_L_1, gojo_StrongATK_L_2, gojo_StrongATK_L_3;
int gojo_Ultimate_L_1, gojo_Ultimate_L_2, gojo_KA_ME_HA_ME_HA_L;
int gojo_Walk_L_1, gojo_Walk_L_2, gojo_Walk_L_3;
int gojo_kamehameha_L_1, gojo_kamehameha_L_2;

//ninjagirl

// Shinobi Right Side
int shinobi_Idle_R_1, shinobi_Idle_R_2;
int shinobi_Lose_R_1, shinobi_Lose_R_2, shinobi_Lose_R_3, shinobi_Lose_R_4, shinobi_Lose_R_5;
int shinobi_Victory_R_1, shinobi_Victory_R_2;
int shinobi_Damage_R_1, shinobi_Damage_R_2;
int shinobi_Defence_R_1;
int shinobi_Jump_R_1, shinobi_Jump_R_2, shinobi_Jump_R_3;
int shinobi_NormalATK_R_1, shinobi_NormalATK_R_2, shinobi_NormalATK_R_3, shinobi_NormalATK_R_4;
int shinobi_PowerUp_R_1, shinobi_PowerUp_R_2;
int shinobi_StrongATK_R_1, shinobi_StrongATK_R_2, shinobi_StrongATK_R_3;
int shinobi_Ultimate_R_1, shinobi_Ultimate_R_2, shinobi_KA_ME_HA_ME_HA_R;
int shinobi_Walk_R_1, shinobi_Walk_R_2, shinobi_Walk_R_3;
int shinobi_kamehameha_R_1, shinobi_kamehameha_R_2;

// Shinobi Left Side
int shinobi_Idle_L_1, shinobi_Idle_L_2;
int shinobi_Lose_L_1, shinobi_Lose_L_2, shinobi_Lose_L_3, shinobi_Lose_L_4, shinobi_Lose_L_5;
int shinobi_Victory_L_1, shinobi_Victory_L_2;
int shinobi_Damage_L_1, shinobi_Damage_L_2;
int shinobi_Defence_L_1;
int shinobi_Jump_L_1, shinobi_Jump_L_2, shinobi_Jump_L_3;
int shinobi_NormalATK_L_1, shinobi_NormalATK_L_2, shinobi_NormalATK_L_3, shinobi_NormalATK_L_4;
int shinobi_PowerUp_L_1, shinobi_PowerUp_L_2;
int shinobi_StrongATK_L_1, shinobi_StrongATK_L_2, shinobi_StrongATK_L_3;
int shinobi_Ultimate_L_1, shinobi_Ultimate_L_2, shinobi_KA_ME_HA_ME_HA_L;
int shinobi_Walk_L_1, shinobi_Walk_L_2, shinobi_Walk_L_3;
int shinobi_kamehameha_L_1, shinobi_kamehameha_L_2;

// Kunoichi Right Side
int kunoichi_Idle_R_1, kunoichi_Idle_R_2;
int kunoichi_Lose_R_1, kunoichi_Lose_R_2, kunoichi_Lose_R_3, kunoichi_Lose_R_4, kunoichi_Lose_R_5;
int kunoichi_Victory_R_1, kunoichi_Victory_R_2;
int kunoichi_Damage_R_1, kunoichi_Damage_R_2;
int kunoichi_Defence_R_1;
int kunoichi_Jump_R_1, kunoichi_Jump_R_2, kunoichi_Jump_R_3;
int kunoichi_NormalATK_R_1, kunoichi_NormalATK_R_2, kunoichi_NormalATK_R_3, kunoichi_NormalATK_R_4;
int kunoichi_PowerUp_R_1, kunoichi_PowerUp_R_2;
int kunoichi_StrongATK_R_1, kunoichi_StrongATK_R_2, kunoichi_StrongATK_R_3;
int kunoichi_Ultimate_R_1, kunoichi_Ultimate_R_2, kunoichi_KA_ME_HA_ME_HA_R;
int kunoichi_Walk_R_1, kunoichi_Walk_R_2, kunoichi_Walk_R_3;
int kunoichi_kamehameha_R_1, kunoichi_kamehameha_R_2;

// Kunoichi Left Side
int kunoichi_Idle_L_1, kunoichi_Idle_L_2;
int kunoichi_Lose_L_1, kunoichi_Lose_L_2, kunoichi_Lose_L_3, kunoichi_Lose_L_4, kunoichi_Lose_L_5;
int kunoichi_Victory_L_1, kunoichi_Victory_L_2;
int kunoichi_Damage_L_1, kunoichi_Damage_L_2;
int kunoichi_Defence_L_1;
int kunoichi_Jump_L_1, kunoichi_Jump_L_2, kunoichi_Jump_L_3;
int kunoichi_NormalATK_L_1, kunoichi_NormalATK_L_2, kunoichi_NormalATK_L_3, kunoichi_NormalATK_L_4;
int kunoichi_PowerUp_L_1, kunoichi_PowerUp_L_2;
int kunoichi_StrongATK_L_1, kunoichi_StrongATK_L_2, kunoichi_StrongATK_L_3;
int kunoichi_Ultimate_L_1, kunoichi_Ultimate_L_2, kunoichi_KA_ME_HA_ME_HA_L;
int kunoichi_Walk_L_1, kunoichi_Walk_L_2, kunoichi_Walk_L_3;
int kunoichi_kamehameha_L_1, kunoichi_kamehameha_L_2;

//inchigo

// Revichigo Right Side
int revichigo_Idle_R_1, revichigo_Idle_R_2;
int revichigo_Lose_R_1, revichigo_Lose_R_2, revichigo_Lose_R_3, revichigo_Lose_R_4, revichigo_Lose_R_5;
int revichigo_Victory_R_1, revichigo_Victory_R_2;
int revichigo_Damage_R_1, revichigo_Damage_R_2;
int revichigo_Defence_R_1;
int revichigo_Jump_R_1, revichigo_Jump_R_2, revichigo_Jump_R_3;
int revichigo_NormalATK_R_1, revichigo_NormalATK_R_2, revichigo_NormalATK_R_3, revichigo_NormalATK_R_4;
int revichigo_PowerUp_R_1, revichigo_PowerUp_R_2;
int revichigo_StrongATK_R_1, revichigo_StrongATK_R_2, revichigo_StrongATK_R_3;
int revichigo_Ultimate_R_1, revichigo_Ultimate_R_2, revichigo_KA_ME_HA_ME_HA_R;
int revichigo_Walk_R_1, revichigo_Walk_R_2, revichigo_Walk_R_3;
int revichigo_kamehameha_R_1, revichigo_kamehameha_R_2;


// Revichigo Left Side
int revichigo_Idle_L_1, revichigo_Idle_L_2;
int revichigo_Lose_L_1, revichigo_Lose_L_2, revichigo_Lose_L_3, revichigo_Lose_L_4, revichigo_Lose_L_5;
int revichigo_Victory_L_1, revichigo_Victory_L_2;
int revichigo_Damage_L_1, revichigo_Damage_L_2;
int revichigo_Defence_L_1;
int revichigo_Jump_L_1, revichigo_Jump_L_2, revichigo_Jump_L_3;
int revichigo_NormalATK_L_1, revichigo_NormalATK_L_2, revichigo_NormalATK_L_3, revichigo_NormalATK_L_4;
int revichigo_PowerUp_L_1, revichigo_PowerUp_L_2;
int revichigo_StrongATK_L_1, revichigo_StrongATK_L_2, revichigo_StrongATK_L_3;
int revichigo_Ultimate_L_1, revichigo_Ultimate_L_2, revichigo_KA_ME_HA_ME_HA_L;
int revichigo_Walk_L_1, revichigo_Walk_L_2, revichigo_Walk_L_3;
int revichigo_kamehameha_L_1, revichigo_kamehameha_L_2;

// Ichigo Right Side
int ichigo_Idle_R_1, ichigo_Idle_R_2;
int ichigo_Lose_R_1, ichigo_Lose_R_2, ichigo_Lose_R_3, ichigo_Lose_R_4, ichigo_Lose_R_5;
int ichigo_Victory_R_1, ichigo_Victory_R_2;
int ichigo_Damage_R_1, ichigo_Damage_R_2;
int ichigo_Defence_R_1;
int ichigo_Jump_R_1, ichigo_Jump_R_2, ichigo_Jump_R_3;
int ichigo_NormalATK_R_1, ichigo_NormalATK_R_2, ichigo_NormalATK_R_3, ichigo_NormalATK_R_4;
int ichigo_PowerUp_R_1, ichigo_PowerUp_R_2;
int ichigo_StrongATK_R_1, ichigo_StrongATK_R_2, ichigo_StrongATK_R_3;
int ichigo_Ultimate_R_1, ichigo_Ultimate_R_2, ichigo_KA_ME_HA_ME_HA_R;
int ichigo_Walk_R_1, ichigo_Walk_R_2, ichigo_Walk_R_3;
int ichigo_kamehameha_R_1, ichigo_kamehameha_R_2;

// Ichigo Left Side
int ichigo_Idle_L_1, ichigo_Idle_L_2;
int ichigo_Lose_L_1, ichigo_Lose_L_2, ichigo_Lose_L_3, ichigo_Lose_L_4, ichigo_Lose_L_5;
int ichigo_Victory_L_1, ichigo_Victory_L_2;
int ichigo_Damage_L_1, ichigo_Damage_L_2;
int ichigo_Defence_L_1;
int ichigo_Jump_L_1, ichigo_Jump_L_2, ichigo_Jump_L_3;
int ichigo_NormalATK_L_1, ichigo_NormalATK_L_2, ichigo_NormalATK_L_3, ichigo_NormalATK_L_4;
int ichigo_PowerUp_L_1, ichigo_PowerUp_L_2;
int ichigo_StrongATK_L_1, ichigo_StrongATK_L_2, ichigo_StrongATK_L_3;
int ichigo_Ultimate_L_1, ichigo_Ultimate_L_2, ichigo_KA_ME_HA_ME_HA_L;
int ichigo_Walk_L_1, ichigo_Walk_L_2, ichigo_Walk_L_3;
int ichigo_kamehameha_L_1, ichigo_kamehameha_L_2;

//tanjiro
// Revtan Right Side
int revtan_Idle_R_1, revtan_Idle_R_2;
int revtan_Lose_R_1, revtan_Lose_R_2, revtan_Lose_R_3, revtan_Lose_R_4, revtan_Lose_R_5;
int revtan_Victory_R_1, revtan_Victory_R_2;
int revtan_Damage_R_1, revtan_Damage_R_2;
int revtan_Defence_R_1;
int revtan_Jump_R_1, revtan_Jump_R_2, revtan_Jump_R_3;
int revtan_NormalATK_R_1, revtan_NormalATK_R_2, revtan_NormalATK_R_3, revtan_NormalATK_R_4;
int revtan_PowerUp_R_1, revtan_PowerUp_R_2;
int revtan_StrongATK_R_1, revtan_StrongATK_R_2, revtan_StrongATK_R_3;
int revtan_Ultimate_R_1, revtan_Ultimate_R_2, revtan_KA_ME_HA_ME_HA_R;
int revtan_Walk_R_1, revtan_Walk_R_2, revtan_Walk_R_3;
int revtan_kamehameha_R_1, revtan_kamehameha_R_2;

// Revtan Left Side
int revtan_Idle_L_1, revtan_Idle_L_2;
int revtan_Lose_L_1, revtan_Lose_L_2, revtan_Lose_L_3, revtan_Lose_L_4, revtan_Lose_L_5;
int revtan_Victory_L_1, revtan_Victory_L_2;
int revtan_Damage_L_1, revtan_Damage_L_2;
int revtan_Defence_L_1;
int revtan_Jump_L_1, revtan_Jump_L_2, revtan_Jump_L_3;
int revtan_NormalATK_L_1, revtan_NormalATK_L_2, revtan_NormalATK_L_3, revtan_NormalATK_L_4;
int revtan_PowerUp_L_1, revtan_PowerUp_L_2;
int revtan_StrongATK_L_1, revtan_StrongATK_L_2, revtan_StrongATK_L_3;
int revtan_Ultimate_L_1, revtan_Ultimate_L_2, revtan_KA_ME_HA_ME_HA_L;
int revtan_Walk_L_1, revtan_Walk_L_2, revtan_Walk_L_3;
int revtan_kamehameha_L_1, revtan_kamehameha_L_2;

// Tanjiro Right Side
int tanjiro_Idle_R_1, tanjiro_Idle_R_2;
int tanjiro_Lose_R_1, tanjiro_Lose_R_2, tanjiro_Lose_R_3, tanjiro_Lose_R_4, tanjiro_Lose_R_5;
int tanjiro_Victory_R_1, tanjiro_Victory_R_2;
int tanjiro_Damage_R_1, tanjiro_Damage_R_2;
int tanjiro_Defence_R_1;
int tanjiro_Jump_R_1, tanjiro_Jump_R_2, tanjiro_Jump_R_3;
int tanjiro_NormalATK_R_1, tanjiro_NormalATK_R_2, tanjiro_NormalATK_R_3, tanjiro_NormalATK_R_4;
int tanjiro_PowerUp_R_1, tanjiro_PowerUp_R_2;
int tanjiro_StrongATK_R_1, tanjiro_StrongATK_R_2, tanjiro_StrongATK_R_3;
int tanjiro_Ultimate_R_1, tanjiro_Ultimate_R_2, tanjiro_KA_ME_HA_ME_HA_R;
int tanjiro_Walk_R_1, tanjiro_Walk_R_2, tanjiro_Walk_R_3;
int tanjiro_kamehameha_R_1, tanjiro_kamehameha_R_2;

// Tanjiro Left Side
int tanjiro_Idle_L_1, tanjiro_Idle_L_2;
int tanjiro_Lose_L_1, tanjiro_Lose_L_2, tanjiro_Lose_L_3, tanjiro_Lose_L_4, tanjiro_Lose_L_5;
int tanjiro_Victory_L_1, tanjiro_Victory_L_2;
int tanjiro_Damage_L_1, tanjiro_Damage_L_2;
int tanjiro_Defence_L_1;
int tanjiro_Jump_L_1, tanjiro_Jump_L_2, tanjiro_Jump_L_3;
int tanjiro_NormalATK_L_1, tanjiro_NormalATK_L_2, tanjiro_NormalATK_L_3, tanjiro_NormalATK_L_4;
int tanjiro_PowerUp_L_1, tanjiro_PowerUp_L_2;
int tanjiro_StrongATK_L_1, tanjiro_StrongATK_L_2, tanjiro_StrongATK_L_3;
int tanjiro_Ultimate_L_1, tanjiro_Ultimate_L_2, tanjiro_KA_ME_HA_ME_HA_L;
int tanjiro_Walk_L_1, tanjiro_Walk_L_2, tanjiro_Walk_L_3;
int tanjiro_kamehameha_L_1, tanjiro_kamehameha_L_2;

//Jinsakai 

// Ghost Right Side
int ghost_Idle_R_1, ghost_Idle_R_2;
int ghost_Lose_R_1, ghost_Lose_R_2, ghost_Lose_R_3, ghost_Lose_R_4, ghost_Lose_R_5;
int ghost_Victory_R_1, ghost_Victory_R_2;
int ghost_Damage_R_1, ghost_Damage_R_2;
int ghost_Defence_R_1;
int ghost_Jump_R_1, ghost_Jump_R_2, ghost_Jump_R_3;
int ghost_NormalATK_R_1, ghost_NormalATK_R_2, ghost_NormalATK_R_3, ghost_NormalATK_R_4;
int ghost_PowerUp_R_1, ghost_PowerUp_R_2;
int ghost_StrongATK_R_1, ghost_StrongATK_R_2, ghost_StrongATK_R_3;
int ghost_Ultimate_R_1, ghost_Ultimate_R_2, ghost_KA_ME_HA_ME_HA_R;
int ghost_Walk_R_1, ghost_Walk_R_2, ghost_Walk_R_3;
int ghost_kamehameha_R_1, ghost_kamehameha_R_2;

// Ghost Left Side
int ghost_Idle_L_1, ghost_Idle_L_2;
int ghost_Lose_L_1, ghost_Lose_L_2, ghost_Lose_L_3, ghost_Lose_L_4, ghost_Lose_L_5;
int ghost_Victory_L_1, ghost_Victory_L_2;
int ghost_Damage_L_1, ghost_Damage_L_2;
int ghost_Defence_L_1;
int ghost_Jump_L_1, ghost_Jump_L_2, ghost_Jump_L_3;
int ghost_NormalATK_L_1, ghost_NormalATK_L_2, ghost_NormalATK_L_3, ghost_NormalATK_L_4;
int ghost_PowerUp_L_1, ghost_PowerUp_L_2;
int ghost_StrongATK_L_1, ghost_StrongATK_L_2, ghost_StrongATK_L_3;
int ghost_Ultimate_L_1, ghost_Ultimate_L_2, ghost_KA_ME_HA_ME_HA_L;
int ghost_Walk_L_1, ghost_Walk_L_2, ghost_Walk_L_3;
int ghost_kamehameha_L_1, ghost_kamehameha_L_2;

// Jinsakai Right Side
int jinsakai_Idle_R_1, jinsakai_Idle_R_2;
int jinsakai_Lose_R_1, jinsakai_Lose_R_2, jinsakai_Lose_R_3, jinsakai_Lose_R_4, jinsakai_Lose_R_5;
int jinsakai_Victory_R_1, jinsakai_Victory_R_2;
int jinsakai_Damage_R_1, jinsakai_Damage_R_2;
int jinsakai_Defence_R_1;
int jinsakai_Jump_R_1, jinsakai_Jump_R_2, jinsakai_Jump_R_3;
int jinsakai_NormalATK_R_1, jinsakai_NormalATK_R_2, jinsakai_NormalATK_R_3, jinsakai_NormalATK_R_4;
int jinsakai_PowerUp_R_1, jinsakai_PowerUp_R_2;
int jinsakai_StrongATK_R_1, jinsakai_StrongATK_R_2, jinsakai_StrongATK_R_3;
int jinsakai_Ultimate_R_1, jinsakai_Ultimate_R_2, jinsakai_KA_ME_HA_ME_HA_R;
int jinsakai_Walk_R_1, jinsakai_Walk_R_2, jinsakai_Walk_R_3;
int jinsakai_kamehameha_R_1, jinsakai_kamehameha_R_2;

// Jinsakai Left Side
int jinsakai_Idle_L_1, jinsakai_Idle_L_2;
int jinsakai_Lose_L_1, jinsakai_Lose_L_2, jinsakai_Lose_L_3, jinsakai_Lose_L_4, jinsakai_Lose_L_5;
int jinsakai_Victory_L_1, jinsakai_Victory_L_2;
int jinsakai_Damage_L_1, jinsakai_Damage_L_2;
int jinsakai_Defence_L_1;
int jinsakai_Jump_L_1, jinsakai_Jump_L_2, jinsakai_Jump_L_3;
int jinsakai_NormalATK_L_1, jinsakai_NormalATK_L_2, jinsakai_NormalATK_L_3, jinsakai_NormalATK_L_4;
int jinsakai_PowerUp_L_1, jinsakai_PowerUp_L_2;
int jinsakai_StrongATK_L_1, jinsakai_StrongATK_L_2, jinsakai_StrongATK_L_3;
int jinsakai_Ultimate_L_1, jinsakai_Ultimate_L_2, jinsakai_KA_ME_HA_ME_HA_L;
int jinsakai_Walk_L_1, jinsakai_Walk_L_2, jinsakai_Walk_L_3;
int jinsakai_kamehameha_L_1, jinsakai_kamehameha_L_2;

void loadPlayerpfp(){
    pfpGojo1 = iLoadImage("image/ProfileIMG/photo_2025-03-19_13-39-31-removebg-preview.png");
    pfpGoku1 = iLoadImage("image/ProfileIMG/photo_2025-03-19_13-39-55-removebg-preview.png");
    pfpIchigo1 = iLoadImage("image/ProfileIMG/photo_2025-03-19_13-39-45-removebg-preview.png");
    pfpTanjiro1 = iLoadImage("image/ProfileIMG/photo_2025-03-19_13-40-02-removebg-preview.png");
    pfpKunoichi1 = iLoadImage("image/ProfileIMG/female-ninja-manga-character-for-comics-in-vector-modified-removebg-preview.png");
    pfpJinsakai1 = iLoadImage("image/ProfileIMG/photo_2025-03-19_13-40-08-removebg-preview.png");
   



}


// Functions:
void LoadMenuPages()
{
	
		StartMenu = iLoadImage("image/Menu/StartPage.png");
		FirstMenu = iLoadImage("image/Menu/PlayMenu.png");
		SecondMenu = iLoadImage("image/Menu/TrainingMenu.png");
		ThirdMenu = iLoadImage("image/Menu/CollectionMenu.png");
		ForthMenu = iLoadImage("image/Menu/ExitMenu.png");

	
}


// Arena Load: 
void loadArena()
{
	TrainingGround = iLoadImage("image/Menu/Training/TrainingNew.png");
}



void loadCollectionTab()
{
	Ccharacter = iLoadImage("image/Menu/CollectionTab/Characters.png");
	CharacterShow = iLoadImage("image/Menu/CollectionTab/Characterin.png");
	CAboutUs = iLoadImage("image/Menu/CollectionTab/AboutUs.png");
	AboutUs = iLoadImage("image/Menu/CollectionTab/Aboutusnow.png");
	Carena = iLoadImage("image/Menu/CollectionTab/ArenaTab.png");
	arena = iLoadImage("image/Menu/CollectionTab/ArenaNeww.png");
}






// Character Load -------------------------
// Goku :

void accesshealth()
{
	//P1health1 = iLoadImage("image/Bar/Player1/Health/H1.png");
	P1health1 = iLoadImage("image/Bar/Player1/Health/H1.png");
    P1health2 = iLoadImage("image/Bar/Player1/Health/H2.png");
    P1health3 = iLoadImage("image/Bar/Player1/Health/H3.png");
    P1health4 = iLoadImage("image/Bar/Player1/Health/H4.png");
    P1health5 = iLoadImage("image/Bar/Player1/Health/H5.png");
    P1health6 = iLoadImage("image/Bar/Player1/Health/H6.png");
    P1health7 = iLoadImage("image/Bar/Player1/Health/H7.png");
    P1health8 = iLoadImage("image/Bar/Player1/Health/H8.png");
    P1health9 = iLoadImage("image/Bar/Player1/Health/H9.png");


	P2health1 = iLoadImage("image/Bar/Player2/Health/H1.png");
    P2health2 = iLoadImage("image/Bar/Player2/Health/H2.png");
    P2health3 = iLoadImage("image/Bar/Player2/Health/H3.png");
    P2health4 = iLoadImage("image/Bar/Player2/Health/H4.png");
    P2health5 = iLoadImage("image/Bar/Player2/Health/H5.png");
    P2health6 = iLoadImage("image/Bar/Player2/Health/H6.png");
    P2health7 = iLoadImage("image/Bar/Player2/Health/H7.png");
    P2health8 = iLoadImage("image/Bar/Player2/Health/H8.png");
    P2health9 = iLoadImage("image/Bar/Player2/Health/H9.png");


	P1PowerUp1 = iLoadImage("image/Bar/Player1/Power/P1.png");
    P1PowerUp2 = iLoadImage("image/Bar/Player1/Power/P2.png");
    P1PowerUp3 = iLoadImage("image/Bar/Player1/Power/P3.png");
    P1PowerUp4 = iLoadImage("image/Bar/Player1/Power/P4.png");
    P1PowerUp5 = iLoadImage("image/Bar/Player1/Power/P5.png");


	//P1PowerUp = iLoadImage("image/Bar/Player1/Power/P1.png");
	P2PowerUp1 = iLoadImage("image/Bar/Player2/Power/P1.png");
    P2PowerUp2 = iLoadImage("image/Bar/Player2/Power/P2.png");
    P2PowerUp3 = iLoadImage("image/Bar/Player2/Power/P3.png");
    P2PowerUp4 = iLoadImage("image/Bar/Player2/Power/P4.png");
    P2PowerUp5 = iLoadImage("image/Bar/Player2/Power/P5.png");
}

void P1healthBar()
{
	if(P1Health <=100 && P1Health >= 80)
	{
			iShowImage(40, 370, 499, 499, P1health1);
	}
	if(P1Health < 80 && P1Health >= 70)
	{
			iShowImage(40, 370, 499, 499, P1health2);
	}
	if(P1Health < 70 && P1Health >= 60)
	{
			iShowImage(40, 370, 499, 499, P1health3);
	}
	if(P1Health <60 && P1Health >= 50)
	{
			iShowImage(40, 370, 499, 499, P1health4);
	}
	if(P1Health < 50 && P1Health >= 40)
	{
			iShowImage(40, 370, 499, 499, P1health5);
	}
	if(P1Health < 40 && P1Health >= 30)
	{
			iShowImage(40, 370, 499, 499, P1health6);
	}
	if(P1Health < 30 && P1Health >= 20)
	{
			iShowImage(40, 370, 499, 499, P1health7);
	}
	if(P1Health < 20 && P1Health >= 10)
	{
			iShowImage(40, 370, 499, 499, P1health8);
	}
	if(P1Health < 10 && P1Health > 0)
	{
			iShowImage(40, 370, 499, 499, P1health9);
	}
}

void P1powerBar()
{
	if(P1power_up == 100)
	{
			iShowImage(207, 527, 170, 170, P1PowerUp1);
	}
	if(P1power_up < 100 && P1power_up > 50)
	{
			iShowImage(207, 527, 170, 170, P1PowerUp2);
	}

	if(P1power_up == 50)
	{
			iShowImage(207, 527, 170, 170, P1PowerUp3);
	}
	if(P1power_up < 50 && P1power_up > 10)
	{
			iShowImage(207, 527, 170, 170, P1PowerUp4);
	}
	if(P1power_up <= 10)
	{
			iShowImage(207, 527, 170, 170, P1PowerUp5);
	}
}

void P2healthBar()
{
	
	if (P2Health <= 100 && P2Health >= 80) 
	{
		iShowImage(815, 370, 499, 499, P2health1);
	}
	if (P2Health < 80 && P2Health >= 70) 
	{
		iShowImage(815, 370, 499, 499, P2health2);
	}
	if (P2Health < 70 && P2Health >= 60) 
	{
		iShowImage(815, 370, 499, 499, P2health3);
	}
	if (P2Health < 60 && P2Health >= 50) 
	{
		iShowImage(815, 370, 499, 499, P2health4);
	}
	if (P2Health < 50 && P2Health >= 40) 
	{
		iShowImage(815, 370, 499, 499, P2health5);
	}
	if (P2Health < 40 && P2Health >= 30) 
	{
		iShowImage(815, 370, 499, 499, P2health6);
	}
	if (P2Health < 30 && P2Health >= 20) 
	{
		iShowImage(815, 370, 499, 499, P2health7);
	}
	if (P2Health < 20 && P2Health >= 10) 
	{
		iShowImage(815, 370, 499, 499, P2health8);
	}
	if (P2Health < 10 && P2Health > 0) 
	{
		iShowImage(815, 370, 499, 499, P2health9);
	}

}

void P2powerBar()
{
	if (P2power_up == 100) {
		iShowImage(954, 527, 170, 170, P2PowerUp1);
	}
	if (P2power_up < 100 && P2power_up > 50) {
		iShowImage(954, 527, 170, 170, P2PowerUp2);
	}

	if (P2power_up == 50) {
		iShowImage(954, 527, 170, 170, P2PowerUp3);
	}
	if (P2power_up < 50 && P2power_up > 10) {
		iShowImage(954, 527, 170, 170, P2PowerUp4);
	}
	if (P2power_up <= 10) {
		iShowImage(954, 527, 170, 170, P2PowerUp5);
	}
}



void gokuLoadImage()
{ 
	int Gokupfp = iLoadImage("image/Goku/Profile/Profile.png");
	loadGokuOGImagesLeft();
	loadGokuOGImagesRight();
	loadALTGokuImagesLeft();
	loadALTGokuImagesRight();
}

void loadGokuOGImagesLeft() {
	goku_Idle_L_1 = iLoadImage("image/Goku/OG/Left/Idle/images/Goku_Idle (1).png");
	goku_Idle_L_2 = iLoadImage("image/Goku/OG/Left/Idle/images/Goku_Idle (2).png");

    goku_Lose_L_1 = iLoadImage("image/Goku/OG/Left/BattleLost/images/Goku_Lose (1).png");
    goku_Lose_L_2 = iLoadImage("image/Goku/OG/Left/BattleLost/images/Goku_Lose (2).png");
    goku_Lose_L_3 = iLoadImage("image/Goku/OG/Left/BattleLost/images/Goku_Lose (3).png");
    goku_Lose_L_4 = iLoadImage("image/Goku/OG/Left/BattleLost/images/Goku_Lose (4).png");
    goku_Lose_L_5 = iLoadImage("image/Goku/OG/Left/BattleLost/images/Goku_Lose (5).png");

    goku_Victory_L_1 = iLoadImage("image/Goku/OG/Left/BattleWon/images/Goku_Victory (1).png");
    goku_Victory_L_2 = iLoadImage("image/Goku/OG/Left/BattleWon/images/Goku_Victory (2).png");

    goku_Damage_L_1 = iLoadImage("image/Goku/OG/Left/Damage/images/Goku_Damage (1).png");
    goku_Damage_L_2 = iLoadImage("image/Goku/OG/Left/Damage/images/Goku_Damage (2).png");

    goku_Defence_L_1 = iLoadImage("image/Goku/OG/Left/Defence/images/Goku_Defence (1).png");

    goku_Jump_L_1 = iLoadImage("image/Goku/OG/Left/Jump/images/Goku_Jump (1).png");
    goku_Jump_L_2 = iLoadImage("image/Goku/OG/Left/Jump/images/Goku_Jump (2).png");
    goku_Jump_L_3 = iLoadImage("image/Goku/OG/Left/Jump/images/Goku_Jump (3).png");

    goku_NormalATK_L_1 = iLoadImage("image/Goku/OG/Left/NormalATK/images/Goku_ATK (1).png");
    goku_NormalATK_L_2 = iLoadImage("image/Goku/OG/Left/NormalATK/images/Goku_ATK (2).png");
    goku_NormalATK_L_3 = iLoadImage("image/Goku/OG/Left/NormalATK/images/Goku_ATK (3).png");
    goku_NormalATK_L_4 = iLoadImage("image/Goku/OG/Left/NormalATK/images/Goku_ATK (4).png");

    goku_PowerUp_L_1 = iLoadImage("image/Goku/OG/Left/PowerUp/images/Goku_PowerUp (1).png");
    goku_PowerUp_L_2 = iLoadImage("image/Goku/OG/Left/PowerUp/images/Goku_PowerUp (2).png");

    goku_StrongATK_L_1 = iLoadImage("image/Goku/OG/Left/StrongATK/images/Goku_SATK (1).png");
    goku_StrongATK_L_2 = iLoadImage("image/Goku/OG/Left/StrongATK/images/Goku_SATK (2).png");
    goku_StrongATK_L_3 = iLoadImage("image/Goku/OG/Left/StrongATK/images/Goku_SATK (3).png");

    goku_Ultimate_L_1 = iLoadImage("image/Goku/OG/Left/Ultimate/images/KA_ME_HA_ME_HA (1).png");
    goku_Ultimate_L_2 = iLoadImage("image/Goku/OG/Left/Ultimate/images/KA_ME_HA_ME_HA (2).png");
	KA_ME_HA_ME_HA_L = iLoadImage("image/Goku/OG/Left/Ultimate/images/KA_ME_HA_ME_HA (3).png");

    goku_Walk_L_1 = iLoadImage("image/Goku/OG/Left/Walk/images/Goku_Walk (1).png");
    goku_Walk_L_2 = iLoadImage("image/Goku/OG/Left/Walk/images/Goku_Walk (2).png");
    goku_Walk_L_3 = iLoadImage("image/Goku/OG/Left/Walk/images/Goku_Walk (3).png");
}

void loadGokuOGImagesRight() {
	goku_Idle_R_1 = iLoadImage("image/Goku/OG/Right/Idle/images/Goku_Idle (1).png");
	goku_Idle_R_2 = iLoadImage("image/Goku/OG/Right/Idle/images/Goku_Idle (2).png");

    //goku_Lose_R_1 = iLoadImage("image/Goku/Right/BattleLost/images/Goku_Lose (1).png");
    goku_Lose_R_2 = iLoadImage("image/Goku/OG/Right/BattleLost/images/Goku_Lose (2).png");
    goku_Lose_R_3 = iLoadImage("image/Goku/OG/Right/BattleLost/images/Goku_Lose (3).png");
    goku_Lose_R_4 = iLoadImage("image/Goku/OG/Right/BattleLost/images/Goku_Lose (4).png");
    goku_Lose_R_1 = iLoadImage("image/Goku/OG/Right/BattleLost/images/Goku_Lose (5).png");

    //goku_Victory_R_1 = iLoadImage("image/Goku/Right/BattleWon/images/Goku_Victory (1).png");
    goku_Victory_R_1 = iLoadImage("image/Goku/OG/Right/BattleWon/images/Goku_Victory (2).png");

    goku_Damage_R_1 = iLoadImage("image/Goku/OG/Right/Damage/images/Goku_Damage (1).png");
    goku_Damage_R_2 = iLoadImage("image/Goku/OG/Right/Damage/images/Goku_Damage (2).png");

    goku_Defence_R_1 = iLoadImage("image/Goku/OG/Right/Defence/images/Goku_Defence (1).png"); ////////////

    goku_Jump_R_1 = iLoadImage("image/Goku/OG/Right/Jump/images/Goku_Jump (1).png");
    goku_Jump_R_2 = iLoadImage("image/Goku/OG/Right/Jump/images/Goku_Jump (2).png");////////////
    goku_Jump_R_3 = iLoadImage("image/Goku/OG/Right/Jump/images/Goku_Jump (3).png");

    goku_NormalATK_R_1 = iLoadImage("image/Goku/OG/Right/NormalATK/images/Goku_ATK (1).png");
    goku_NormalATK_R_2 = iLoadImage("image/Goku/OG/Right/NormalATK/images/Goku_ATK (2).png");/////////////
    goku_NormalATK_R_3 = iLoadImage("image/Goku/OG/Right/NormalATK/images/Goku_ATK (3).png");
    goku_NormalATK_R_4 = iLoadImage("image/Goku/OG/Right/NormalATK/images/Goku_ATK (4).png");//

    goku_PowerUp_R_1 = iLoadImage("image/Goku/OG/Right/PowerUp/images/Goku_PowerUp (1).png");
    goku_PowerUp_R_2 = iLoadImage("image/Goku/OG/Right/PowerUp/images/Goku_PowerUp (2).png");////////////

    goku_StrongATK_R_1 = iLoadImage("image/Goku/OG/Right/StrongATK/images/Goku_SAtk (1).png");/////////////////
    goku_StrongATK_R_2 = iLoadImage("image/Goku/OG/Right/StrongATK/images/Goku_SAtk (2).png");
    goku_StrongATK_R_3 = iLoadImage("image/Goku/OG/Right/StrongATK/images/Goku_SAtk (3).png");

    goku_Ultimate_R_1 = iLoadImage("image/Goku/OG/Right/Ultimate/images/KA_ME_HA_ME_HA (1).png");
    goku_Ultimate_R_2 = iLoadImage("image/Goku/OG/Right/Ultimate/images/KA_ME_HA_ME_HA (2).png");
	KA_ME_HA_ME_HA_R = iLoadImage("image/Goku/OG/Right/Ultimate/images/KA_ME_HA_ME_HA (3).png");

    goku_Walk_R_1 = iLoadImage("image/Goku/OG/Right/Walk/images/Goku_Walk (1).png");
    goku_Walk_R_2 = iLoadImage("image/Goku/OG/Right/Walk/images/Goku_Walk (2).png");//////////////////
    goku_Walk_R_3 = iLoadImage("image/Goku/OG/Right/Walk/images/Goku_Walk (3).png");
}

void loadALTGokuImagesLeft() 
{
    ALT_goku_Idle_L_1 = iLoadImage("image/Goku/ALT/Left/Idle/Goku_Idle (1).png");
    ALT_goku_Idle_L_2 = iLoadImage("image/Goku/ALT/Left/Idle/Goku_Idle (2).png");

    ALT_goku_Lose_L_1 = iLoadImage("image/Goku/ALT/Left/BattleLost/Goku_Lose (1).png");
    ALT_goku_Lose_L_2 = iLoadImage("image/Goku/ALT/Left/BattleLost/Goku_Lose (2).png");
    ALT_goku_Lose_L_3 = iLoadImage("image/Goku/ALT/Left/BattleLost/Goku_Lose (3).png");
    ALT_goku_Lose_L_4 = iLoadImage("image/Goku/ALT/Left/BattleLost/Goku_Lose (4).png");
    ALT_goku_Lose_L_5 = iLoadImage("image/Goku/ALT/Left/BattleLost/Goku_Lose (5).png");

    ALT_goku_Victory_L_1 = iLoadImage("image/Goku/ALT/Left/BattleWon/Goku_Victory (1).png");
    ALT_goku_Victory_L_2 = iLoadImage("image/Goku/ALT/Left/BattleWon/Goku_Victory (2).png");

    ALT_goku_Damage_L_1 = iLoadImage("image/Goku/ALT/Left/Damage/Goku_Damage (1).png");
    ALT_goku_Damage_L_2 = iLoadImage("image/Goku/ALT/Left/Damage/Goku_Damage (2).png");

    ALT_goku_Defence_L_1 = iLoadImage("image/Goku/ALT/Left/Defence/Goku_Defence (1).png");

    ALT_goku_Jump_L_1 = iLoadImage("image/Goku/ALT/Left/Jump/Goku_Jump (1).png");
    ALT_goku_Jump_L_2 = iLoadImage("image/Goku/ALT/Left/Jump/Goku_Jump (2).png");
    ALT_goku_Jump_L_3 = iLoadImage("image/Goku/ALT/Left/Jump/Goku_Jump (3).png");

    ALT_goku_NormalATK_L_1 = iLoadImage("image/Goku/ALT/Left/NormalATK/Goku_ATK (1).png");
    ALT_goku_NormalATK_L_2 = iLoadImage("image/Goku/ALT/Left/NormalATK/Goku_ATK (2).png");
    ALT_goku_NormalATK_L_3 = iLoadImage("image/Goku/ALT/Left/NormalATK/Goku_ATK (3).png");
    ALT_goku_NormalATK_L_4 = iLoadImage("image/Goku/ALT/Left/NormalATK/Goku_ATK (4).png");

    ALT_goku_PowerUp_L_1 = iLoadImage("image/Goku/ALT/Left/PowerUp/Goku_PowerUp (1).png");
    ALT_goku_PowerUp_L_2 = iLoadImage("image/Goku/ALT/Left/PowerUp/Goku_PowerUp (2).png");

    ALT_goku_StrongATK_L_1 = iLoadImage("image/Goku/ALT/Left/StrongATK/Goku_SATK (1).png");
    ALT_goku_StrongATK_L_2 = iLoadImage("image/Goku/ALT/Left/StrongATK/Goku_SATK (2).png");
    ALT_goku_StrongATK_L_3 = iLoadImage("image/Goku/ALT/Left/StrongATK/Goku_SATK (3).png");

    ALT_goku_Ultimate_L_1 = iLoadImage("image/Goku/ALT/Left/Ultimate/KA_ME_HA_ME_HA (1).png");
    ALT_goku_Ultimate_L_2 = iLoadImage("image/Goku/ALT/Left/Ultimate/KA_ME_HA_ME_HA (2).png");
    ALT_KA_ME_HA_ME_HA_L = iLoadImage("image/Goku/ALT/Left/Ultimate/KA_ME_HA_ME_HA (3).png");

    ALT_goku_Walk_L_1 = iLoadImage("image/Goku/ALT/Left/Walk/Goku_Walk (1).png");
    ALT_goku_Walk_L_2 = iLoadImage("image/Goku/ALT/Left/Walk/Goku_Walk (2).png");
    ALT_goku_Walk_L_3 = iLoadImage("image/Goku/ALT/Left/Walk/Goku_Walk (3).png");
}

void loadALTGokuImagesRight() {
    ALT_goku_Idle_R_1 = iLoadImage("image/Goku/ALT/Right/Idle/Goku_Idle (1).png");
    ALT_goku_Idle_R_2 = iLoadImage("image/Goku/ALT/Right/Idle/Goku_Idle (2).png");
    
    ALT_goku_Lose_R_1 = iLoadImage("image/Goku/ALT/Right/BattleLost/Goku_Lose (1).png");
    ALT_goku_Lose_R_2 = iLoadImage("image/Goku/ALT/Right/BattleLost/Goku_Lose (2).png");
    ALT_goku_Lose_R_3 = iLoadImage("image/Goku/ALT/Right/BattleLost/Goku_Lose (3).png");
    ALT_goku_Lose_R_4 = iLoadImage("image/Goku/ALT/Right/BattleLost/Goku_Lose (4).png");
    ALT_goku_Lose_R_5 = iLoadImage("image/Goku/ALT/Right/BattleLost/Goku_Lose (5).png");

    ALT_goku_Victory_R_1 = iLoadImage("image/Goku/ALT/Right/BattleWon/Goku_Victory (1).png");
    ALT_goku_Victory_R_2 = iLoadImage("image/Goku/ALT/Right/BattleWon/Goku_Victory (2).png");
    
    ALT_goku_Damage_R_1 = iLoadImage("image/Goku/ALT/Right/Damage/Goku_Damage (1).png");
    ALT_goku_Damage_R_2 = iLoadImage("image/Goku/ALT/Right/Damage/Goku_Damage (2).png");

    ALT_goku_Defence_R_1 = iLoadImage("image/Goku/ALT/Right/Defence/Goku_Defence (1).png");

    ALT_goku_Jump_R_1 = iLoadImage("image/Goku/ALT/Right/Jump/Goku_Jump (1).png");
    ALT_goku_Jump_R_2 = iLoadImage("image/Goku/ALT/Right/Jump/Goku_Jump (2).png");
    ALT_goku_Jump_R_3 = iLoadImage("image/Goku/ALT/Right/Jump/Goku_Jump (3).png");

    ALT_goku_NormalATK_R_1 = iLoadImage("image/Goku/ALT/Right/NormalATK/Goku_ATK (1).png");
    ALT_goku_NormalATK_R_2 = iLoadImage("image/Goku/ALT/Right/NormalATK/Goku_ATK (2).png");
    ALT_goku_NormalATK_R_3 = iLoadImage("image/Goku/ALT/Right/NormalATK/Goku_ATK (3).png");
    ALT_goku_NormalATK_R_4 = iLoadImage("image/Goku/ALT/Right/NormalATK/Goku_ATK (4).png");

    ALT_goku_PowerUp_R_1 = iLoadImage("image/Goku/ALT/Right/PowerUp/Goku_PowerUp (1).png");
    ALT_goku_PowerUp_R_2 = iLoadImage("image/Goku/ALT/Right/PowerUp/Goku_PowerUp (2).png");

    ALT_goku_StrongATK_R_1 = iLoadImage("image/Goku/ALT/Right/StrongATK/Goku_SATK (1).png");
    ALT_goku_StrongATK_R_2 = iLoadImage("image/Goku/ALT/Right/StrongATK/Goku_SATK (2).png");
    ALT_goku_StrongATK_R_3 = iLoadImage("image/Goku/ALT/Right/StrongATK/Goku_SATK (3).png");

    ALT_goku_Ultimate_R_1 = iLoadImage("image/Goku/ALT/Right/Ultimate/KA_ME_HA_ME_HA (1).png");
    ALT_goku_Ultimate_R_2 = iLoadImage("image/Goku/ALT/Right/Ultimate/KA_ME_HA_ME_HA (2).png");
    ALT_KA_ME_HA_ME_HA_R = iLoadImage("image/Goku/ALT/Right/Ultimate/KA_ME_HA_ME_HA (3).png");

    ALT_goku_Walk_R_1 = iLoadImage("image/Goku/ALT/Right/Walk/Goku_Walk (1).png");
    ALT_goku_Walk_R_2 = iLoadImage("image/Goku/ALT/Right/Walk/Goku_Walk (2).png");
    ALT_goku_Walk_R_3 = iLoadImage("image/Goku/ALT/Right/Walk/Goku_Walk (3).png");
}
//gojo and ak load
// Character Load Functions
void akLoadImage() {
    //imgBackground1 = iLoadImage("image/Background/IMG_6045.JPG");
    int Gojopfp = iLoadImage("image/Ak/Profile/36vJgQkSQtms63akgwmldw.webp");
    loadAkImagesLeft();
    loadAkImagesRight();
}

void loadAkImagesLeft() {
    ak_Idle_L_1 = iLoadImage("image/Ak/Left/Idle/satoru_gojo_shinjuku_arc_jus_sprite_sheet_by_finhj_by_finhj_dhxrc7c-(3)_07.png");
    ak_Idle_L_2 = iLoadImage("image/Ak/Left/Idle/satoru_gojo_shinjuku_arc_jus_sprite_sheet_by_finhj_by_finhj_dhxrc7c-(3)_08.png");
    ak_Lose_L_1 = iLoadImage("image/Ak/Left/BattleLost/satoru_gojo_shinjuku_arc_jus_sprite_sheet_by_finhj_by_finhj_dhxrc7c-(3)_03.png");
    ak_Lose_L_2 = iLoadImage("image/Ak/Left/BattleLost/satoru_gojo_shinjuku_arc_jus_sprite_sheet_by_finhj_by_finhj_dhxrc7c-(3)_03.png");
    ak_Lose_L_3 = iLoadImage("image/Ak/Left/BattleLost/satoru_gojo_shinjuku_arc_jus_sprite_sheet_by_finhj_by_finhj_dhxrc7c-(3)_03.png");
    ak_Lose_L_4 = iLoadImage("image/Ak/Left/BattleLost/satoru_gojo_shinjuku_arc_jus_sprite_sheet_by_finhj_by_finhj_dhxrc7c-(3)_03.png");
    ak_Lose_L_5 = iLoadImage("image/Ak/Left/BattleLost/satoru_gojo_shinjuku_arc_jus_sprite_sheet_by_finhj_by_finhj_dhxrc7c-(3)_03.png");
    ak_Victory_L_1 = iLoadImage("image/Ak/Left/BattleWon/satoru_gojo_shinjuku_arc_jus_sprite_sheet_by_finhj_by_finhj_dhxrc7c-(3)_03.png");
    ak_Victory_L_2 = iLoadImage("image/Ak/Left/BattleWon/satoru_gojo_shinjuku_arc_jus_sprite_sheet_by_finhj_by_finhj_dhxrc7c-(3)_03.png");
    ak_Damage_L_1 = iLoadImage("image/Ak/Left/Damage/satoru_gojo_shinjuku_arc_jus_sprite_sheet_by_finhj_by_finhj_dhxrc7c-(3)_32.png");
    ak_Damage_L_2 = iLoadImage("image/Ak/Left/Damage/satoru_gojo_shinjuku_arc_jus_sprite_sheet_by_finhj_by_finhj_dhxrc7c-(3)_32.png");
    ak_Defence_L_1 = iLoadImage("image/Ak/Left/Defence/satoru_gojo_shinjuku_arc_jus_sprite_sheet_by_finhj_by_finhj_dhxrc7c-(3)_30.png");
    ak_Jump_L_1 = iLoadImage("image/Ak/Left/Jump/satoru_gojo_shinjuku_arc_jus_sprite_sheet_by_finhj_by_finhj_dhxrc7c-(3)_19.png");
    ak_Jump_L_2 = iLoadImage("image/Ak/Left/Jump/satoru_gojo_shinjuku_arc_jus_sprite_sheet_by_finhj_by_finhj_dhxrc7c-(3)_22.png");
    ak_Jump_L_3 = iLoadImage("image/Ak/Left/Jump/satoru_gojo_shinjuku_arc_jus_sprite_sheet_by_finhj_by_finhj_dhxrc7c-(3)_25.png");
    ak_NormalATK_L_1 = iLoadImage("image/Ak/Left/NormalATK/satoru_gojo_shinjuku_arc_jus_sprite_sheet_by_finhj_by_finhj_dhxrc7c-(3)_35.png");
    ak_NormalATK_L_2 = iLoadImage("image/Ak/Left/NormalATK/satoru_gojo_shinjuku_arc_jus_sprite_sheet_by_finhj_by_finhj_dhxrc7c-(3)_35.png");
    ak_NormalATK_L_3 = iLoadImage("image/Ak/Left/NormalATK/satoru_gojo_shinjuku_arc_jus_sprite_sheet_by_finhj_by_finhj_dhxrc7c-(3)_35.png");
    ak_NormalATK_L_4 = iLoadImage("image/Ak/Left/NormalATK/satoru_gojo_shinjuku_arc_jus_sprite_sheet_by_finhj_by_finhj_dhxrc7c-(3)_35.png");
    ak_PowerUp_L_1 = iLoadImage("image/Ak/Left/PowerUp/final(up).png");
    ak_PowerUp_L_2 = iLoadImage("image/Ak/Left/PowerUp/final(up).png");
    ak_StrongATK_L_1 = iLoadImage("image/Ak/Left/StrongATK/satoru_gojo_shinjuku_arc_jus_sprite_sheet_by_finhj_by_finhj_dhxrc7c-(3)_42.png");
    ak_StrongATK_L_2 = iLoadImage("image/Ak/Left/StrongATK/satoru_gojo_shinjuku_arc_jus_sprite_sheet_by_finhj_by_finhj_dhxrc7c-(3)_42.png");
    ak_StrongATK_L_3 = iLoadImage("image/Ak/Left/StrongATK/satoru_gojo_shinjuku_arc_jus_sprite_sheet_by_finhj_by_finhj_dhxrc7c-(3)_39.png");
    ak_Ultimate_L_1 = iLoadImage("image/Ak/Left/Ultimate/satoru_gojo_shinjuku_arc_jus_sprite_sheet_by_finhj_by_finhj_dhxrc7c-(3)_50.png");
    ak_Ultimate_L_2 = iLoadImage("image/Ak/Left/Ultimate/satoru_gojo_shinjuku_arc_jus_sprite_sheet_by_finhj_by_finhj_dhxrc7c-(3)_47.png");
    ak_KA_ME_HA_ME_HA_L = iLoadImage("image/Ak/Left/Ultimate/Gojo-Final-OG-right_53.png");
    ak_Walk_L_1 = iLoadImage("image/Ak/Left/Walk/satoru_gojo_shinjuku_arc_jus_sprite_sheet_by_finhj_by_finhj_dhxrc7c-(3)_14.png");
    ak_Walk_L_2 = iLoadImage("image/Ak/Left/Walk/satoru_gojo_shinjuku_arc_jus_sprite_sheet_by_finhj_by_finhj_dhxrc7c-(3)_12.png");
    ak_Walk_L_3 = iLoadImage("image/Ak/Left/Walk/satoru_gojo_shinjuku_arc_jus_sprite_sheet_by_finhj_by_finhj_dhxrc7c-(3)_11.png");
}

void loadAkImagesRight() {
    ak_Idle_R_1 = iLoadImage("image/Ak/Right/Idle/satoru_gojo_shinjuku_arc_jus_sprite_sheet_by_finhj_by_finhj_dhxrc7c-(3)_07.png");
    ak_Idle_R_2 = iLoadImage("image/Ak/Right/Idle/satoru_gojo_shinjuku_arc_jus_sprite_sheet_by_finhj_by_finhj_dhxrc7c-(3)_08.png");
    ak_Lose_R_1 = iLoadImage("image/Ak/Right/BattleLost/satoru_gojo_shinjuku_arc_jus_sprite_sheet_by_finhj_by_finhj_dhxrc7c-(3)_38.png");
    ak_Lose_R_2 = iLoadImage("image/Ak/Right/BattleLost/satoru_gojo_shinjuku_arc_jus_sprite_sheet_by_finhj_by_finhj_dhxrc7c-(3)_38.png");
    ak_Lose_R_3 = iLoadImage("image/Ak/Right/BattleLost/satoru_gojo_shinjuku_arc_jus_sprite_sheet_by_finhj_by_finhj_dhxrc7c-(3)_38.png");
    ak_Lose_R_4 = iLoadImage("image/Ak/Right/BattleLost/satoru_gojo_shinjuku_arc_jus_sprite_sheet_by_finhj_by_finhj_dhxrc7c-(3)_38.png");
    ak_Lose_R_5 = iLoadImage("image/Ak/Right/BattleLost/satoru_gojo_shinjuku_arc_jus_sprite_sheet_by_finhj_by_finhj_dhxrc7c-(3)_38.png");
    ak_Victory_R_1 = iLoadImage("image/Ak/Right/BattleWon/satoru_gojo_shinjuku_arc_jus_sprite_sheet_by_finhj_by_finhj_dhxrc7c-(3)_03.png");
    ak_Victory_R_2 = iLoadImage("image/Ak/Right/BattleWon/satoru_gojo_shinjuku_arc_jus_sprite_sheet_by_finhj_by_finhj_dhxrc7c-(3)_03.png");
    ak_Damage_R_1 = iLoadImage("image/Ak/Right/Damage/satoru_gojo_shinjuku_arc_jus_sprite_sheet_by_finhj_by_finhj_dhxrc7c-(3)_36.png");
    ak_Damage_R_2 = iLoadImage("image/Ak/Right/Damage/satoru_gojo_shinjuku_arc_jus_sprite_sheet_by_finhj_by_finhj_dhxrc7c-(3)_36.png");
    ak_Defence_R_1 = iLoadImage("image/Ak/Right/Defence/satoru_gojo_shinjuku_arc_jus_sprite_sheet_by_finhj_by_finhj_dhxrc7c-(3)_32.png");
    ak_Jump_R_1 = iLoadImage("image/Ak/Right/Jump/satoru_gojo_shinjuku_arc_jus_sprite_sheet_by_finhj_by_finhj_dhxrc7c-(3)_20.png");
    ak_Jump_R_2 = iLoadImage("image/Ak/Right/Jump/satoru_gojo_shinjuku_arc_jus_sprite_sheet_by_finhj_by_finhj_dhxrc7c-(3)_23.png");
    ak_Jump_R_3 = iLoadImage("image/Ak/Right/Jump/satoru_gojo_shinjuku_arc_jus_sprite_sheet_by_finhj_by_finhj_dhxrc7c-(3)_26.png");
    ak_NormalATK_R_1 = iLoadImage("image/Ak/Right/NormalATK/satoru_gojo_shinjuku_arc_jus_sprite_sheet_by_finhj_by_finhj_dhxrc7c-(3)_43.png");
    ak_NormalATK_R_2 = iLoadImage("image/Ak/Right/NormalATK/satoru_gojo_shinjuku_arc_jus_sprite_sheet_by_finhj_by_finhj_dhxrc7c-(3)_43.png");
    ak_NormalATK_R_3 = iLoadImage("image/Ak/Right/NormalATK/satoru_gojo_shinjuku_arc_jus_sprite_sheet_by_finhj_by_finhj_dhxrc7c-(3)_43.png");
    ak_NormalATK_R_4 = iLoadImage("image/Ak/Right/NormalATK/satoru_gojo_shinjuku_arc_jus_sprite_sheet_by_finhj_by_finhj_dhxrc7c-(3)_43.png");
    ak_PowerUp_R_1 = iLoadImage("image/Ak/Right/PowerUp/satoru_gojo_shinjuku_arc_jus_sprite_sheet_by_finhj_by_finhj_dhxrc7c-(3)_62.png");
    ak_PowerUp_R_2 = iLoadImage("image/Ak/Right/PowerUp/satoru_gojo_shinjuku_arc_jus_sprite_sheet_by_finhj_by_finhj_dhxrc7c-(3)_62.png");
    ak_StrongATK_R_1 = iLoadImage("image/Ak/Right/StrongATK/satoru_gojo_shinjuku_arc_jus_sprite_sheet_by_finhj_by_finhj_dhxrc7c-(3)_50.png");
    ak_StrongATK_R_2 = iLoadImage("image/Ak/Right/StrongATK/satoru_gojo_shinjuku_arc_jus_sprite_sheet_by_finhj_by_finhj_dhxrc7c-(3)_50.png");
    ak_StrongATK_R_3 = iLoadImage("image/Ak/Right/StrongATK/satoru_gojo_shinjuku_arc_jus_sprite_sheet_by_finhj_by_finhj_dhxrc7c-(3)_47.png");
    ak_Ultimate_R_1 = iLoadImage("image/Ak/Right/Ultimate/satoru_gojo_shinjuku_arc_jus_sprite_sheet_by_finhj_by_finhj_dhxrc7c-(3)_54.png");
    ak_Ultimate_R_2 = iLoadImage("image/Ak/Right/Ultimate/satoru_gojo_shinjuku_arc_jus_sprite_sheet_by_finhj_by_finhj_dhxrc7c-(3)_57.png");
    ak_KA_ME_HA_ME_HA_R = iLoadImage("image/Ak/Right/Ultimate/Gojo-Final-OG-right_03.png");
    ak_Walk_R_1 = iLoadImage("image/Ak/Right/Walk/satoru_gojo_shinjuku_arc_jus_sprite_sheet_by_finhj_by_finhj_dhxrc7c-(3)_12.png");
    ak_Walk_R_2 = iLoadImage("image/Ak/Right/Walk/satoru_gojo_shinjuku_arc_jus_sprite_sheet_by_finhj_by_finhj_dhxrc7c-(3)_14.png");
    ak_Walk_R_3 = iLoadImage("image/Ak/Right/Walk/satoru_gojo_shinjuku_arc_jus_sprite_sheet_by_finhj_by_finhj_dhxrc7c-(3)_15.png");
}

void gojoLoadImage() {
    int Gojopfp = iLoadImage("image/Gojo/Profile/Profile.png");
    loadGojoImagesLeft();
    loadGojoImagesRight();
}

void loadGojoImagesLeft() {
    gojo_Idle_L_1 = iLoadImage("image/Gojo/Left/Idle/Gojo-Final-OG-right_07.png");
    gojo_Idle_L_2 = iLoadImage("image/Gojo/Left/Idle/Gojo-Final-OG-right_09.png");
    gojo_Lose_L_1 = iLoadImage("image/Gojo/Left/BattleLost/images/Gojo-Final-OG-right_36.png");
    gojo_Lose_L_2 = iLoadImage("image/Gojo/Left/BattleLost/images/Gojo-Final-OG-right_36.png");
    gojo_Lose_L_3 = iLoadImage("image/Gojo/Left/BattleLost/images/Gojo-Final-OG-right_36.png");
    gojo_Lose_L_4 = iLoadImage("image/Gojo/Left/BattleLost/images/Gojo-Final-OG-right_36.png");
    gojo_Lose_L_5 = iLoadImage("image/Gojo/Left/BattleLost/images/Gojo-Final-OG-right_36.png");
    gojo_Victory_L_1 = iLoadImage("image/Gojo/Left/BattleWon/images/Gojo-Final-OG-right_03.png");
    gojo_Victory_L_2 = iLoadImage("image/Gojo/Left/BattleWon/images/Gojo-Final-OG-right_03.png");
    gojo_Damage_L_1 = iLoadImage("image/Gojo/Left/Damage/images/Gojo-Final-OG-right_03.png");
    gojo_Damage_L_2 = iLoadImage("image/Gojo/Left/Damage/images/Gojo-Final-OG-right_03.png");
    gojo_Defence_L_1 = iLoadImage("image/Gojo/Left/Defence/Gojo-Final-OG-right_32.png");
    gojo_Jump_L_1 = iLoadImage("image/Gojo/Left/Jump/Gojo-Final-OG-right_20.png");
    gojo_Jump_L_2 = iLoadImage("image/Gojo/Left/Jump/Gojo-Final-OG-right_23.png");
    gojo_Jump_L_3 = iLoadImage("image/Gojo/Left/Jump/Gojo-Final-OG-right_26.png");
    gojo_NormalATK_L_1 = iLoadImage("image/Gojo/Left/NormalATK/Gojo-Final-OG-right_41.png");
    gojo_NormalATK_L_2 = iLoadImage("image/Gojo/Left/NormalATK/Gojo-Final-OG-right_41 - Copy.png");
    gojo_NormalATK_L_3 = iLoadImage("image/Gojo/Left/NormalATK/Gojo-Final-OG-right_41 - Copy (2).png");
    gojo_NormalATK_L_4 = iLoadImage("image/Gojo/Left/NormalATK/Gojo-Final-OG-right_41 - Copy (2) - Copy.png");
    gojo_PowerUp_L_1 = iLoadImage("image/Gojo/Left/PowerUp/Gojo-Final-OG-right_65.png");
    gojo_PowerUp_L_2 = iLoadImage("image/Gojo/Left/PowerUp/Gojo-Final-OG-right_65.png");
    gojo_StrongATK_L_1 = iLoadImage("image/Gojo/Left/StrongATK/Gojo-Final-OG-right_48.png");
    gojo_StrongATK_L_2 = iLoadImage("image/Gojo/Left/StrongATK/Gojo-Final-OG-right_48.png");
    gojo_StrongATK_L_3 = iLoadImage("image/Gojo/Left/StrongATK/Gojo-Final-OG-right_45.png");
    gojo_Ultimate_L_1 = iLoadImage("image/Gojo/Left/Ultimate/Gojo-Final-OG-right_59.png");
    gojo_Ultimate_L_2 = iLoadImage("image/Gojo/Left/Ultimate/Gojo-Final-OG-right_56.png");
    gojo_KA_ME_HA_ME_HA_L = iLoadImage("image/Gojo/Left/Ultimate/Gojo-Final-OG-right_53.png");
    gojo_Walk_L_1 = iLoadImage("image/Gojo/Left/Walk/Gojo-Final-OG-right_14.png");
    gojo_Walk_L_2 = iLoadImage("image/Gojo/Left/Walk/Gojo-Final-OG-right_15.png");
    gojo_Walk_L_3 = iLoadImage("image/Gojo/Left/Walk/Gojo-Final-OG-right_16.png");
}

void loadGojoImagesRight() {
    gojo_Idle_R_1 = iLoadImage("image/Gojo/Right/Idle/images/Gojo-Final-OG-right_03.png");
    gojo_Idle_R_2 = iLoadImage("image/Gojo/Right/Idle/images/Gojo-Final-OG-right_04.png");
    gojo_Lose_R_1 = iLoadImage("image/Gojo/Right/BattleLost/images/Gojo-Final-OG-right_03.png");
    gojo_Lose_R_2 = iLoadImage("image/Gojo/Right/BattleLost/images/Gojo-Final-OG-right_03.png");
    gojo_Lose_R_3 = iLoadImage("image/Gojo/Right/BattleLost/images/Gojo-Final-OG-right_03.png");
    gojo_Lose_R_4 = iLoadImage("image/Gojo/Right/BattleLost/images/Gojo-Final-OG-right_03.png");
    gojo_Lose_R_5 = iLoadImage("image/Gojo/Right/BattleLost/images/Gojo-Final-OG-right_03.png");
    gojo_Victory_R_1 = iLoadImage("image/Gojo/Right/BattleWon/images/Gojo-Final-OG-right_03.png");
    gojo_Victory_R_2 = iLoadImage("image/Gojo/Right/BattleWon/images/Gojo-Final-OG-right_03.png");
    gojo_Damage_R_1 = iLoadImage("image/Gojo/Right/Damage/images/Gojo-Final-OG-right_03.png");
    gojo_Damage_R_2 = iLoadImage("image/Gojo/Right/Damage/images/Gojo-Final-OG-right_03.png");
    gojo_Defence_R_1 = iLoadImage("image/Gojo/Right/Defence/images/Gojo-Final-OG-right_03.png");
    gojo_Jump_R_1 = iLoadImage("image/Gojo/Right/Jump/images/Gojo-Final-OG-right_03.png");
    gojo_Jump_R_2 = iLoadImage("image/Gojo/Right/Jump/images/Gojo-Final-OG-right_06.png");
    gojo_Jump_R_3 = iLoadImage("image/Gojo/Right/Jump/images/Gojo-Final-OG-right_08.png");
    gojo_NormalATK_R_1 = iLoadImage("image/Gojo/Right/NormalATK/Gojo-Final-OG-right_03.png");
    gojo_NormalATK_R_2 = iLoadImage("image/Gojo/Right/NormalATK/images/Gojo-Final-OG-right_03.png");
    gojo_NormalATK_R_3 = iLoadImage("image/Gojo/Right/NormalATK/images/Gojo-Final-OG-right_03.png");
    gojo_NormalATK_R_4 = iLoadImage("image/Gojo/Right/NormalATK/images/Gojo-Final-OG-right_03.png");
    gojo_PowerUp_R_1 = iLoadImage("image/Gojo/Right/PowerUp/images/Gojo-Final-OG-right_03.png");
    gojo_PowerUp_R_2 = iLoadImage("image/Gojo/Right/PowerUp/images/Gojo-Final-OG-right_03.png");
    gojo_StrongATK_R_1 = iLoadImage("image/Gojo/Right/StrongATK/images/Gojo-Final-OG-right_03.png");
    gojo_StrongATK_R_2 = iLoadImage("image/Gojo/Right/StrongATK/images/Gojo-Final-OG-right_03.png");
    gojo_StrongATK_R_3 = iLoadImage("image/Gojo/Right/StrongATK/images/Gojo-Final-OG-right_03.png");
    gojo_Ultimate_R_1 = iLoadImage("image/Gojo/Right/Ultimate/images/Gojo-Final-OG-right_09.png");
    gojo_Ultimate_R_2 = iLoadImage("image/Gojo/Right/Ultimate/images/Gojo-Final-OG-right_06.png");
    gojo_KA_ME_HA_ME_HA_R = iLoadImage("image/Gojo/Right/Ultimate/images/Gojo-Final-OG-right_03.png");
    gojo_Walk_R_1 = iLoadImage("image/Gojo/Right/Walk/images/Gojo-Final-OG-right_03.png");
    gojo_Walk_R_2 = iLoadImage("image/Gojo/Right/Walk/images/Gojo-Final-OG-right_04.png");
    gojo_Walk_R_3 = iLoadImage("image/Gojo/Right/Walk/images/Gojo-Final-OG-right_05.png");
}

//ninjagirl
void shinobiLoadImage() {
    //imgBackground1 = iLoadImage("image/Background/IMG_6045.JPG");
    int Shinobipfp = iLoadImage("image/Shinobi/Profile/OIP (1).jpg");
    loadShinobiImagesLeft();
    loadShinobiImagesRight();
}

void loadShinobiImagesLeft() {
    shinobi_Idle_L_1 = iLoadImage("image/Shinobi/Left/Idle/Idle__000.png");
    shinobi_Idle_L_2 = iLoadImage("image/Shinobi/Left/Idle/Idle__001.png");

    shinobi_Lose_L_1 = iLoadImage("image/Shinobi/Left/BattleLost/Dead__009.png");
    shinobi_Lose_L_2 = iLoadImage("image/Shinobi/Left/BattleLost/Dead__009.png");
    shinobi_Lose_L_3 = iLoadImage("image/Shinobi/Left/BattleLost/Dead__009.png");
    shinobi_Lose_L_4 = iLoadImage("image/Shinobi/Left/BattleLost/Dead__009.png");
    shinobi_Lose_L_5 = iLoadImage("image/Shinobi/Left/BattleLost/Dead__009.png");

    shinobi_Victory_L_1 = iLoadImage("image/Shinobi/Left/BattleWon/Idle__004.png");
    shinobi_Victory_L_2 = iLoadImage("image/Shinobi/Left/BattleWon/Idle__004.png");

    shinobi_Damage_L_1 = iLoadImage("image/Shinobi/Left/Damage/Throw__007.png");
    shinobi_Damage_L_2 = iLoadImage("image/Shinobi/Left/Damage/Throw__007.png");

    shinobi_Defence_L_1 = iLoadImage("image/Shinobi/Left/Defence/IMG_6058.PNG");

    shinobi_Jump_L_1 = iLoadImage("image/Shinobi/Left/Jump/Jump__009.png");
    shinobi_Jump_L_2 = iLoadImage("image/Shinobi/Left/Jump/Jump__003.png");
    shinobi_Jump_L_3 = iLoadImage("image/Shinobi/Left/Jump/Jump__001.png");

    shinobi_NormalATK_L_1 = iLoadImage("image/Shinobi/Left/NormalATK/Attack__004.png");
    shinobi_NormalATK_L_2 = iLoadImage("image/Shinobi/Left/NormalATK/Attack__004.png");
    shinobi_NormalATK_L_3 = iLoadImage("image/Shinobi/Left/NormalATK/Attack__004.png");
    shinobi_NormalATK_L_4 = iLoadImage("image/Shinobi/Left/NormalATK/Attack__004.png");

    shinobi_PowerUp_L_1 = iLoadImage("image/Shinobi/Left/PowerUp/IMG_6060.PNG");
    shinobi_PowerUp_L_2 = iLoadImage("image/Shinobi/Left/PowerUp/IMG_6060.PNG");

    shinobi_StrongATK_L_1 = iLoadImage("image/Shinobi/Left/StrongATK/Throw__008.png");
    shinobi_StrongATK_L_2 = iLoadImage("image/Shinobi/Left/StrongATK/Throw__008.png");
    shinobi_StrongATK_L_3 = iLoadImage("image/Shinobi/Left/StrongATK/3d-sphere-fire-with-flames.png");

    shinobi_Ultimate_L_1 = iLoadImage("image/Shinobi/Left/Ultimate/Jump_Throw__004.png");
    shinobi_Ultimate_L_2 = iLoadImage("image/Shinobi/Left/Ultimate/Throw__006.png");
    shinobi_KA_ME_HA_ME_HA_L = iLoadImage("image/Shinobi/Left/Ultimate/Gojo-Final-OG-right_03.png");

    shinobi_Walk_L_1 = iLoadImage("image/Shinobi/Left/Walk/Run__008.png");
    shinobi_Walk_L_2 = iLoadImage("image/Shinobi/Left/Walk/Run__007.png");
    shinobi_Walk_L_3 = iLoadImage("image/Shinobi/Left/Walk/Run__006.png");
}

void loadShinobiImagesRight() {
    shinobi_Idle_R_1 = iLoadImage("image/Shinobi/Right/Idle/Idle__000.png");
    shinobi_Idle_R_2 = iLoadImage("image/Shinobi/Right/Idle/Idle__001.png");

    shinobi_Lose_R_1 = iLoadImage("image/Shinobi/Right/BattleLost/Dead__009.png");
    shinobi_Lose_R_2 = iLoadImage("image/Shinobi/Right/BattleLost/Dead__009.png");
    shinobi_Lose_R_3 = iLoadImage("image/Shinobi/Right/BattleLost/Dead__009.png");
    shinobi_Lose_R_4 = iLoadImage("image/Shinobi/Right/BattleLost/Dead__009.png");
    shinobi_Lose_R_5 = iLoadImage("image/Shinobi/Right/BattleLost/Dead__009.png");

    shinobi_Victory_R_1 = iLoadImage("image/Shinobi/Right/BattleWon/Idle__004.png");
    shinobi_Victory_R_2 = iLoadImage("image/Shinobi/Right/BattleWon/Idle__004.png");

    shinobi_Damage_R_1 = iLoadImage("image/Shinobi/Right/Damage/Throw__007.png");
    shinobi_Damage_R_2 = iLoadImage("image/Shinobi/Right/Damage/Throw__007.png");

    shinobi_Defence_R_1 = iLoadImage("image/Shinobi/Right/Defence/IMG_6058.PNG");

    shinobi_Jump_R_1 = iLoadImage("image/Shinobi/Right/Jump/Jump__001.png");
    shinobi_Jump_R_2 = iLoadImage("image/Shinobi/Right/Jump/Jump__003.png");
    shinobi_Jump_R_3 = iLoadImage("image/Shinobi/Right/Jump/Jump__009.png");

    shinobi_NormalATK_R_1 = iLoadImage("image/Shinobi/Right/NormalATK/Attack__004 - Copy.png");
    shinobi_NormalATK_R_2 = iLoadImage("image/Shinobi/Right/NormalATK/Attack__004 - Copy.png");
    shinobi_NormalATK_R_3 = iLoadImage("image/Shinobi/Right/NormalATK/Attack__004 - Copy.png");
    shinobi_NormalATK_R_4 = iLoadImage("image/Shinobi/Right/NormalATK/Attack__004 - Copy.png");

    shinobi_PowerUp_R_1 = iLoadImage("image/Shinobi/Right/PowerUp/IMG_6060.PNG");
    shinobi_PowerUp_R_2 = iLoadImage("image/Shinobi/Right/PowerUp/IMG_6060.PNG");

    shinobi_StrongATK_R_1 = iLoadImage("image/Shinobi/Right/StrongATK/Throw__008.png");
    shinobi_StrongATK_R_2 = iLoadImage("image/Shinobi/Right/StrongATK/Throw__008.png");
    shinobi_StrongATK_R_3 = iLoadImage("image/Shinobi/Right/StrongATK/3d-sphere-fire-with-flames.png");

    shinobi_Ultimate_R_1 = iLoadImage("image/Shinobi/Right/Ultimate/Jump_Throw__004.png");
    shinobi_Ultimate_R_2 = iLoadImage("image/Shinobi/Right/Ultimate/Throw__006.png");
    shinobi_KA_ME_HA_ME_HA_R = iLoadImage("image/Shinobi/Right/Ultimate/Gojo-Final-OG-right_03.png");

    shinobi_Walk_R_1 = iLoadImage("image/Shinobi/Right/Walk/Run__006.png");
    shinobi_Walk_R_2 = iLoadImage("image/Shinobi/Right/Walk/Run__007.png");
    shinobi_Walk_R_3 = iLoadImage("image/Shinobi/Right/Walk/Run__008.png");
}


void kunoichiLoadImage() {
    int Kunoichipfp = iLoadImage("image/Kunoichi/Profile/blue_ninja__by_jjr3cluger2400ktl_dg7aqm1-pre.jpg");
    loadKunoichiImagesLeft();
    loadKunoichiImagesRight();
}

void loadKunoichiImagesLeft() {
    kunoichi_Idle_L_1 = iLoadImage("image/Kunoichi/Left/Idle/Idle__001.png");
    kunoichi_Idle_L_2 = iLoadImage("image/Kunoichi/Left/Idle/Idle__000.png");

    kunoichi_Lose_L_1 = iLoadImage("image/Kunoichi/Left/BattleLost/Dead__009.png");
    kunoichi_Lose_L_2 = iLoadImage("image/Kunoichi/Left/BattleLost/Dead__009.png");
    kunoichi_Lose_L_3 = iLoadImage("image/Kunoichi/Left/BattleLost/Dead__009.png");
    kunoichi_Lose_L_4 = iLoadImage("image/Kunoichi/Left/BattleLost/Dead__009.png");
    kunoichi_Lose_L_5 = iLoadImage("image/Kunoichi/Left/BattleLost/Dead__009.png");

    kunoichi_Victory_L_1 = iLoadImage("image/Kunoichi/Left/BattleWon/Idle__004.png");
    kunoichi_Victory_L_2 = iLoadImage("image/Kunoichi/Left/BattleWon/Idle__004.png");

    kunoichi_Damage_L_1 = iLoadImage("image/Kunoichi/Left/Damage/Throw__007.png");
    kunoichi_Damage_L_2 = iLoadImage("image/Kunoichi/Left/Damage/Throw__007.png");

    kunoichi_Defence_L_1 = iLoadImage("image/Kunoichi/Left/Defence/IMG_6058.PNG");

    kunoichi_Jump_L_1 = iLoadImage("image/Kunoichi/Left/Jump/Jump__009.png");
    kunoichi_Jump_L_2 = iLoadImage("image/Kunoichi/Left/Jump/Jump__003.png");
    kunoichi_Jump_L_3 = iLoadImage("image/Kunoichi/Left/Jump/Jump__001.png");

    kunoichi_NormalATK_L_1 = iLoadImage("image/Kunoichi/Left/NormalATK/Attack__004.png");
    kunoichi_NormalATK_L_2 = iLoadImage("image/Kunoichi/Left/NormalATK/Attack__004.png");
    kunoichi_NormalATK_L_3 = iLoadImage("image/Kunoichi/Left/NormalATK/Attack__004.png");
    kunoichi_NormalATK_L_4 = iLoadImage("image/Kunoichi/Left/NormalATK/Attack__004.png");

    kunoichi_PowerUp_L_1 = iLoadImage("image/Kunoichi/Left/PowerUp/IMG_6060.PNG");
    kunoichi_PowerUp_L_2 = iLoadImage("image/Kunoichi/Left/PowerUp/IMG_6060.PNG");

    kunoichi_StrongATK_L_1 = iLoadImage("image/Kunoichi/Left/StrongATK/Throw__008.png");
    kunoichi_StrongATK_L_2 = iLoadImage("image/Kunoichi/Left/StrongATK/Throw__008.png");
    kunoichi_StrongATK_L_3 = iLoadImage("image/Kunoichi/Left/StrongATK/3d-sphere-fire-with-flames.png");

    kunoichi_Ultimate_L_1 = iLoadImage("image/Kunoichi/Left/Ultimate/Jump_Throw__004.png");
    kunoichi_Ultimate_L_2 = iLoadImage("image/Kunoichi/Left/Ultimate/Throw__006.png");
    kunoichi_KA_ME_HA_ME_HA_L = iLoadImage("image/Kunoichi/Left/Ultimate/Gojo-Final-OG-right_03.png");

    kunoichi_Walk_L_1 = iLoadImage("image/Kunoichi/Left/Walk/Run__008.png");
    kunoichi_Walk_L_2 = iLoadImage("image/Kunoichi/Left/Walk/Run__007.png");
    kunoichi_Walk_L_3 = iLoadImage("image/Kunoichi/Left/Walk/Run__006.png");
}

void loadKunoichiImagesRight() {
    kunoichi_Idle_R_1 = iLoadImage("image/Kunoichi/Right/Idle/Idle__000.png");
    kunoichi_Idle_R_2 = iLoadImage("image/Kunoichi/Right/Idle/Idle__001.png");

    kunoichi_Lose_R_1 = iLoadImage("image/Kunoichi/Right/BattleLost/Dead__009.png");
    kunoichi_Lose_R_2 = iLoadImage("image/Kunoichi/Right/BattleLost/Dead__009.png");
    kunoichi_Lose_R_3 = iLoadImage("image/Kunoichi/Right/BattleLost/Dead__009.png");
    kunoichi_Lose_R_4 = iLoadImage("image/Kunoichi/Right/BattleLost/Dead__009.png");
    kunoichi_Lose_R_5 = iLoadImage("image/Kunoichi/Right/BattleLost/Dead__009.png");

    kunoichi_Victory_R_1 = iLoadImage("image/Kunoichi/Right/BattleWon/Idle__004.png");
    kunoichi_Victory_R_2 = iLoadImage("image/Kunoichi/Right/BattleWon/Idle__004.png");

    kunoichi_Damage_R_1 = iLoadImage("image/Kunoichi/Right/Damage/Throw__007.png");
    kunoichi_Damage_R_2 = iLoadImage("image/Kunoichi/Right/Damage/Throw__007.png");

    kunoichi_Defence_R_1 = iLoadImage("image/Kunoichi/Right/Defence/IMG_6058.PNG");

    kunoichi_Jump_R_1 = iLoadImage("image/Kunoichi/Right/Jump/Jump__001.png");
    kunoichi_Jump_R_2 = iLoadImage("image/Kunoichi/Right/Jump/Jump__003.png");
    kunoichi_Jump_R_3 = iLoadImage("image/Kunoichi/Right/Jump/Jump__009.png");

    kunoichi_NormalATK_R_1 = iLoadImage("image/Kunoichi/Right/NormalATK/Attack__004.png");
    kunoichi_NormalATK_R_2 = iLoadImage("image/Kunoichi/Right/NormalATK/Attack__004.png");
    kunoichi_NormalATK_R_3 = iLoadImage("image/Kunoichi/Right/NormalATK/Attack__004.png");
    kunoichi_NormalATK_R_4 = iLoadImage("image/Kunoichi/Right/NormalATK/Attack__004.png");

    kunoichi_PowerUp_R_1 = iLoadImage("image/Kunoichi/Right/PowerUp/IMG_6060.PNG");
    kunoichi_PowerUp_R_2 = iLoadImage("image/Kunoichi/Right/PowerUp/IMG_6060.PNG");

    kunoichi_StrongATK_R_1 = iLoadImage("image/Kunoichi/Right/StrongATK/Throw__008.png");
    kunoichi_StrongATK_R_2 = iLoadImage("image/Kunoichi/Right/StrongATK/Throw__008.png");
    kunoichi_StrongATK_R_3 = iLoadImage("image/Kunoichi/Right/StrongATK/3d-sphere-fire-with-flames.png");

    kunoichi_Ultimate_R_1 = iLoadImage("image/Kunoichi/Right/Ultimate/Jump_Throw__004.png");
    kunoichi_Ultimate_R_2 = iLoadImage("image/Kunoichi/Right/Ultimate/Throw__006.png");
    kunoichi_KA_ME_HA_ME_HA_R = iLoadImage("image/Kunoichi/Right/Ultimate/Gojo-Final-OG-right_03.png");

    kunoichi_Walk_R_1 = iLoadImage("image/Kunoichi/Right/Walk/Run__006.png");
    kunoichi_Walk_R_2 = iLoadImage("image/Kunoichi/Right/Walk/Run__007.png");
    kunoichi_Walk_R_3 = iLoadImage("image/Kunoichi/Right/Walk/Run__008.png");
}

//for inchigo
void revIchigoLoadImage() {
    //imgBackground1 = iLoadImage("image/Background/IMG_6050.JPG");
    pfp = iLoadImage("image/revIchigo/Profile/TanjiroRight_03.png");
    loadRevIchigoImagesLeft();
    loadRevIchigoImagesRight();
}

void loadRevIchigoImagesLeft() {
    revichigo_Idle_L_1 = iLoadImage("image/RevIchigo/Left/Idle/LeftALTIchigo_03.png");
    revichigo_Idle_L_2 = iLoadImage("image/RevIchigo/Left/Idle/LeftALTIchigo_04.png");

    revichigo_Lose_L_1 = iLoadImage("image/RevIchigo/Left/BattleLost/LeftALTIchigo_32.png");
    revichigo_Lose_L_2 = iLoadImage("image/RevIchigo/Left/BattleLost/LeftALTIchigo_32.png");
    revichigo_Lose_L_3 = iLoadImage("image/RevIchigo/Left/BattleLost/LeftALTIchigo_32.png");
    revichigo_Lose_L_4 = iLoadImage("image/RevIchigo/Left/BattleLost/LeftALTIchigo_32.png");
    revichigo_Lose_L_5 = iLoadImage("image/RevIchigo/Left/BattleLost/LeftALTIchigo_32.png");

    revichigo_Victory_L_1 = iLoadImage("image/RevIchigo/Left/BattleWon/LeftALTIchigo_60.png");
    revichigo_Victory_L_2 = iLoadImage("image/RevIchigo/Left/BattleWon/LeftALTIchigo_60.png");

    revichigo_Damage_L_1 = iLoadImage("image/RevIchigo/Left/Damage/LeftALTIchigo_28.png");
    revichigo_Damage_L_2 = iLoadImage("image/RevIchigo/Left/Damage/LeftALTIchigo_28.png");

    revichigo_Defence_L_1 = iLoadImage("image/RevIchigo/Left/Defence/LeftALTIchigo_19.png");

    revichigo_Jump_L_1 = iLoadImage("image/RevIchigo/Left/Jump/LeftALTIchigo_14.png");
    revichigo_Jump_L_2 = iLoadImage("image/RevIchigo/Left/Jump/LeftALTIchigo_16.png");
    revichigo_Jump_L_3 = iLoadImage("image/RevIchigo/Left/Jump/LeftALTIchigo_22.png");

    revichigo_NormalATK_L_1 = iLoadImage("image/RevIchigo/Left/NormalATK/LeftALTIchigo_40.png");
    revichigo_NormalATK_L_2 = iLoadImage("image/RevIchigo/Left/NormalATK/LeftALTIchigo_40.png");
    revichigo_NormalATK_L_3 = iLoadImage("image/RevIchigo/Left/NormalATK/LeftALTIchigo_40.png");
    revichigo_NormalATK_L_4 = iLoadImage("image/RevIchigo/Left/NormalATK/LeftALTIchigo_40.png");

    revichigo_PowerUp_L_1 = iLoadImage("image/RevIchigo/Left/PowerUp/LeftALTIchigo_48.png");
    revichigo_PowerUp_L_2 = iLoadImage("image/RevIchigo/Left/PowerUp/LeftALTIchigo_51.png");

    revichigo_StrongATK_L_1 = iLoadImage("image/RevIchigo/Left/StrongATK/LeftALTIchigo_36.png");
    revichigo_StrongATK_L_2 = iLoadImage("image/RevIchigo/Left/StrongATK/LeftALTIchigo_36.png");
    revichigo_StrongATK_L_3 = iLoadImage("image/RevIchigo/Left/StrongATK/LeftALTIchigo_44.png");

    revichigo_Ultimate_L_1 = iLoadImage("image/RevIchigo/Left/Ultimate/LeftALTIchigo_67.png");
    revichigo_Ultimate_L_2 = iLoadImage("image/RevIchigo/Left/Ultimate/LeftALTIchigo_64.png");
    revichigo_KA_ME_HA_ME_HA_L = iLoadImage("image/RevIchigo/Left/Ultimate/LeftALTIchigo_56.png");

    revichigo_Walk_L_1 = iLoadImage("image/RevIchigo/Left/Walk/LeftALTIchigo_08.png");
    revichigo_Walk_L_2 = iLoadImage("image/RevIchigo/Left/Walk/LeftALTIchigo_09.png");
    revichigo_Walk_L_3 = iLoadImage("image/RevIchigo/Left/Walk/LeftALTIchigo_10.png");

}

void loadRevIchigoImagesRight() {
    revichigo_Idle_R_1 = iLoadImage("image/RevIchigo/Right/Idle/ALTIchigoRight_02.png");
    revichigo_Idle_R_2 = iLoadImage("image/RevIchigo/Right/Idle/ALTIchigoRight_03.png");

    revichigo_Lose_R_1 = iLoadImage("image/RevIchigo/Right/BattleLost/ALTIchigoRight_31.png");
    revichigo_Lose_R_2 = iLoadImage("image/RevIchigo/Right/BattleLost/ALTIchigoRight_31.png");
    revichigo_Lose_R_3 = iLoadImage("image/RevIchigo/Right/BattleLost/ALTIchigoRight_31.png");
    revichigo_Lose_R_4 = iLoadImage("image/RevIchigo/Right/BattleLost/ALTIchigoRight_31.png");
    revichigo_Lose_R_5 = iLoadImage("image/RevIchigo/Right/BattleLost/ALTIchigoRight_31.png");

    revichigo_Victory_R_1 = iLoadImage("image/RevIchigo/Right/BattleWon/ALTIchigoRight_58.png");
    revichigo_Victory_R_2 = iLoadImage("image/RevIchigo/Right/BattleWon/ALTIchigoRight_58.png");

    revichigo_Damage_R_1 = iLoadImage("image/RevIchigo/Right/Damage/ALTIchigoRight27_.png");
    revichigo_Damage_R_2 = iLoadImage("image/RevIchigo/Right/Damage/ALTIchigoRight_27.png");

    revichigo_Defence_R_1 = iLoadImage("image/RevIchigo/Right/Defence/ALTIchigoRight_18.png");

    revichigo_Jump_R_1 = iLoadImage("image/RevIchigo/Right/Jump/ALTIchigoRight_13.png");
    revichigo_Jump_R_2 = iLoadImage("image/RevIchigo/Right/Jump/ALTIchigoRight_15.png");
    revichigo_Jump_R_3 = iLoadImage("image/RevIchigo/Right/Jump/ALTIchigoRight_20.png");

    revichigo_NormalATK_R_1 = iLoadImage("image/RevIchigo/Right/NormalATK/ALTIchigoRight_39.png");
    revichigo_NormalATK_R_2 = iLoadImage("image/RevIchigo/Right/NormalATK/ALTIchigoRight_39.png");
    revichigo_NormalATK_R_3 = iLoadImage("image/RevIchigo/Right/NormalATK/ALTIchigoRight_39.png");
    revichigo_NormalATK_R_4 = iLoadImage("image/RevIchigo/Right/NormalATK/ALTIchigoRight_39.png");

    revichigo_PowerUp_R_1 = iLoadImage("image/RevIchigo/Right/PowerUp/ALTIchigoRight_47.png");
    revichigo_PowerUp_R_2 = iLoadImage("image/RevIchigo/Right/PowerUp/ALTIchigoRight_49.png");

    revichigo_StrongATK_R_1 = iLoadImage("image/RevIchigo/Right/StrongATK/ALTIchigoRight_35.png");
    revichigo_StrongATK_R_2 = iLoadImage("image/RevIchigo/Right/StrongATK/ALTIchigoRight_35.png");
    revichigo_StrongATK_R_3 = iLoadImage("image/RevIchigo/Right/StrongATK/ALTIchigoRight_43.png");

    revichigo_Ultimate_R_1 = iLoadImage("image/RevIchigo/Right/Ultimate/ALTIchigoRight_65.png");
    revichigo_Ultimate_R_2 = iLoadImage("image/RevIchigo/Right/Ultimate/ALTIchigoRight_62.png");
    revichigo_KA_ME_HA_ME_HA_R = iLoadImage("image/RevIchigo/Right/Ultimate/ALTIchigoRight_54.png");

    revichigo_Walk_R_1 = iLoadImage("image/RevIchigo/Right/Walk/ALTIchigoRight_07.png");
    revichigo_Walk_R_2 = iLoadImage("image/RevIchigo/Right/Walk/ALTIchigoRight_08.png");
    revichigo_Walk_R_3 = iLoadImage("image/RevIchigo/Right/Walk/ALTIchigoRight_09.png");

}

void ichigoLoadImage() {
    pfp = iLoadImage("image/Ichigo/Profile/TanjiroRight_03.png");
    loadIchigoImagesLeft();
    loadIchigoImagesRight();
}

void loadIchigoImagesLeft() {
    ichigo_Idle_L_1 = iLoadImage("image/Ichigo/Left/Idle/Ichigo1_03.png");
    ichigo_Idle_L_2 = iLoadImage("image/Ichigo/Left/Idle/Ichigo1_04.png");

    ichigo_Lose_L_1 = iLoadImage("image/Ichigo/Left/BattleLost/Ichigo1_31.png");
    ichigo_Lose_L_2 = iLoadImage("image/Ichigo/Left/BattleLost/Ichigo1_31.png");
    ichigo_Lose_L_3 = iLoadImage("image/Ichigo/Left/BattleLost/Ichigo1_31.png");
    ichigo_Lose_L_4 = iLoadImage("image/Ichigo/Left/BattleLost/Ichigo1_31.png");
    ichigo_Lose_L_5 = iLoadImage("image/Ichigo/Left/BattleLost/Ichigo1_31.png");

    ichigo_Victory_L_1 = iLoadImage("image/Ichigo/Left/BattleWon/Ichigo1_007.png");
    ichigo_Victory_L_2 = iLoadImage("image/Ichigo/Left/BattleWon/Ichigo1_007.png");

    ichigo_Damage_L_1 = iLoadImage("image/Ichigo/Left/Damage/Ichigo1_27.png");
    ichigo_Damage_L_2 = iLoadImage("image/Ichigo/Left/Damage/Ichigo1_27.png");

    ichigo_Defence_L_1 = iLoadImage("image/Ichigo/Left/Defence/Ichigo1_18.png");

    ichigo_Jump_L_1 = iLoadImage("image/Ichigo/Left/Jump/Ichigo1_12.png");
    ichigo_Jump_L_2 = iLoadImage("image/Ichigo/Left/Jump/Ichigo1_15.png");
    ichigo_Jump_L_3 = iLoadImage("image/Ichigo/Left/Jump/Ichigo1_21.png");

    ichigo_NormalATK_L_1 = iLoadImage("image/Ichigo/Left/NormalATK/Ichigo1_31.png");
    ichigo_NormalATK_L_2 = iLoadImage("image/Ichigo/Left/NormalATK/Ichigo1_31.png");
    ichigo_NormalATK_L_3 = iLoadImage("image/Ichigo/Left/NormalATK/Ichigo1_31.png");
    ichigo_NormalATK_L_4 = iLoadImage("image/Ichigo/Left/NormalATK/Ichigo1_31.png");

    ichigo_PowerUp_L_1 = iLoadImage("image/Ichigo/Left/PowerUp/Ichigo1_46.png");
    ichigo_PowerUp_L_2 = iLoadImage("image/Ichigo/Left/PowerUp/Ichigo1_43.png");

    ichigo_StrongATK_L_1 = iLoadImage("image/Ichigo/Left/StrongATK/Ichigo1_35.png");
    ichigo_StrongATK_L_2 = iLoadImage("image/Ichigo/Left/StrongATK/Ichigo1_35.png");
    ichigo_StrongATK_L_3 = iLoadImage("image/Ichigo/Left/StrongATK/Ichigo1_39.png");

    ichigo_Ultimate_L_1 = iLoadImage("image/Ichigo/Left/Ultimate/Ichigo1_003.png");
    ichigo_Ultimate_L_2 = iLoadImage("image/Ichigo/Left/Ultimate/Ichigo1_004.png");
    ichigo_KA_ME_HA_ME_HA_L = iLoadImage("image/Ichigo/Left/Ultimate/Ichigo1_005.png");

    ichigo_Walk_L_1 = iLoadImage("image/Ichigo/Left/Walk/Ichigo1_08.png");
    ichigo_Walk_L_2 = iLoadImage("image/Ichigo/Left/Walk/Ichigo1_09.png");
    ichigo_Walk_L_3 = iLoadImage("image/Ichigo/Left/Walk/Ichigo1_10.png");

}

void loadIchigoImagesRight() {
    ichigo_Idle_R_1 = iLoadImage("image/Ichigo/Right/Idle/Ichigo1_03.png");
    ichigo_Idle_R_2 = iLoadImage("image/Ichigo/Right/Idle/Ichigo1_04.png");

    ichigo_Lose_R_1 = iLoadImage("image/Ichigo/Right/BattleLost/Ichigo1_30.png");
    ichigo_Lose_R_2 = iLoadImage("image/Ichigo/Right/BattleLost/Ichigo1_30.png");
    ichigo_Lose_R_3 = iLoadImage("image/Ichigo/Right/BattleLost/Ichigo1_30.png");
    ichigo_Lose_R_4 = iLoadImage("image/Ichigo/Right/BattleLost/Ichigo1_30.png");
    ichigo_Lose_R_5 = iLoadImage("image/Ichigo/Right/BattleLost/Ichigo1_30.png");

    ichigo_Victory_R_1 = iLoadImage("image/Ichigo/Right/BattleWon/Ichigo1_07.png");
    ichigo_Victory_R_2 = iLoadImage("image/Ichigo/Right/BattleWon/Ichigo1_07.png");

    ichigo_Damage_R_1 = iLoadImage("image/Ichigo/Right/Damage/Ichigo1_26.png");
    ichigo_Damage_R_2 = iLoadImage("image/Ichigo/Right/Damage/Ichigo1_26.png");

    ichigo_Defence_R_1 = iLoadImage("image/Ichigo/Right/Defence/Ichigo1_18.png");

    ichigo_Jump_R_1 = iLoadImage("image/Ichigo/Right/Jump/Ichigo1_13.png");
    ichigo_Jump_R_2 = iLoadImage("image/Ichigo/Right/Jump/Ichigo1_15.png");
    ichigo_Jump_R_3 = iLoadImage("image/Ichigo/Right/Jump/Ichigo1_20.png");

    ichigo_NormalATK_R_1 = iLoadImage("image/Ichigo/Right/NormalATK/Ichigo1_34.png");
    ichigo_NormalATK_R_2 = iLoadImage("image/Ichigo/Right/NormalATK/Ichigo1_34.png");
    ichigo_NormalATK_R_3 = iLoadImage("image/Ichigo/Right/NormalATK/Ichigo1_34.png");
    ichigo_NormalATK_R_4 = iLoadImage("image/Ichigo/Right/NormalATK/Ichigo1_34.png");

    ichigo_PowerUp_R_1 = iLoadImage("image/Ichigo/Right/PowerUp/Ichigo1_46.png");
    ichigo_PowerUp_R_2 = iLoadImage("image/Ichigo/Right/PowerUp/Ichigo1_49.png");

    ichigo_StrongATK_R_1 = iLoadImage("image/Ichigo/Right/StrongATK/Ichigo1_38.png");
    ichigo_StrongATK_R_2 = iLoadImage("image/Ichigo/Right/StrongATK/Ichigo1_38.png");
    ichigo_StrongATK_R_3 = iLoadImage("image/Ichigo/Right/StrongATK/Ichigo1_42.png");

    ichigo_Ultimate_R_1 = iLoadImage("image/Ichigo/Right/Ultimate/Ichigo1_03.png");
    ichigo_Ultimate_R_2 = iLoadImage("image/Ichigo/Right/Ultimate/Ichigo1_05.png");
    ichigo_KA_ME_HA_ME_HA_R = iLoadImage("image/Ichigo/Right/Ultimate/Ichigo1_06.png");

    ichigo_Walk_R_1 = iLoadImage("image/Ichigo/Right/Walk/Ichigo1_07.png");
    ichigo_Walk_R_2 = iLoadImage("image/Ichigo/Right/Walk/Ichigo1_08.png");
    ichigo_Walk_R_3 = iLoadImage("image/Ichigo/Right/Walk/Ichigo1_09.png");

}

//Tanjiro
void revtanLoadImage() {
    //imgBackground1 = iLoadImage("image/Background/IMG_6045.JPG");
    pfp = iLoadImage("image/Revtan/Profile/TanjiroRight_03.png");
    loadRevtanImagesLeft();
    loadRevtanImagesRight();
}

void loadRevtanImagesLeft() {
    revtan_Idle_L_1 = iLoadImage("image/Revtan/Left/Idle/TanjiroATLeft_03.png");
    revtan_Idle_L_2 = iLoadImage("image/Revtan/Left/Idle/TanjiroATLeft_03.png");
    revtan_Lose_L_1 = iLoadImage("image/Revtan/Left/BattleLost/TanjiroATLeft_23.png");
    revtan_Lose_L_2 = iLoadImage("image/Revtan/Left/BattleLost/TanjiroATLeft_23.png");
    revtan_Lose_L_3 = iLoadImage("image/Revtan/Left/BattleLost/TanjiroATLeft_23.png");
    revtan_Lose_L_4 = iLoadImage("image/Revtan/Left/BattleLost/TanjiroATLeft_23.png");
    revtan_Lose_L_5 = iLoadImage("image/Revtan/Left/BattleLost/TanjiroATLeft_23.png");
    revtan_Victory_L_1 = iLoadImage("image/Revtan/Left/BattleWon/TanjiroATLeft_05.png");
    revtan_Victory_L_2 = iLoadImage("image/Revtan/Left/BattleWon/TanjiroATLeft_05.png");
    revtan_Damage_L_1 = iLoadImage("image/Revtan/Left/Damage/TanjiroATLeft_20.png");
    revtan_Damage_L_2 = iLoadImage("image/Revtan/Left/Damage/TanjiroATLeft_20.png");

    revtan_Defence_L_1 = iLoadImage("image/Revtan/Left/Defence/TanjiroATLeft_13.png");

    revtan_Jump_L_1 = iLoadImage("image/Revtan/Left/Jump/Tanjiro-AT_06.png");
    revtan_Jump_L_2 = iLoadImage("image/Revtan/Left/Jump/Tanjiro-AT_04.png");
    revtan_Jump_L_3 = iLoadImage("image/Revtan/Left/Jump/Tanjiro-AT_03.png");

    revtan_NormalATK_L_1 = iLoadImage("image/Revtan/Left/NormalATK/TanjiroATLeft_15.png");
    revtan_NormalATK_L_2 = iLoadImage("image/Revtan/Left/NormalATK/TanjiroATLeft_15.png");
    revtan_NormalATK_L_3 = iLoadImage("image/Revtan/Left/NormalATK/TanjiroATLeft_15.png");
    revtan_NormalATK_L_4 = iLoadImage("image/Revtan/Left/NormalATK/TanjiroATLeft_15.png");

    revtan_PowerUp_L_1 = iLoadImage("image/Revtan/Left/PowerUp/TanjiroATLeft_27.png");
    revtan_PowerUp_L_2 = iLoadImage("image/Revtan/Left/PowerUp/TanjiroATLeft_27.png");

    revtan_StrongATK_L_1 = iLoadImage("image/Revtan/Left/StrongATK/TanjiroATLeft_30.png");
    revtan_StrongATK_L_2 = iLoadImage("image/Revtan/Left/StrongATK/TanjiroATLeft_30.png");
    revtan_StrongATK_L_3 = iLoadImage("image/Revtan/Left/StrongATK/TanjiroATLeft_33.png");

    revtan_Ultimate_L_1 = iLoadImage("image/Revtan/Left/Ultimate/TanjiroATLeft_45.png");
    revtan_Ultimate_L_2 = iLoadImage("image/Revtan/Left/Ultimate/TanjiroATLeft_42.png");
    revtan_KA_ME_HA_ME_HA_L = iLoadImage("image/Revtan/Left/Ultimate/TanjiroRight_55.png");

    revtan_Walk_L_1 = iLoadImage("image/Revtan/Left/Walk/Tanjiro-AT_11.png");
    revtan_Walk_L_2 = iLoadImage("image/Revtan/Left/Walk/Tanjiro-AT_10.png");
    revtan_Walk_L_3 = iLoadImage("image/Revtan/Left/Walk/Tanjiro-AT_09.png");
}

void loadRevtanImagesRight() {
    revtan_Idle_R_1 = iLoadImage("image/Revtan/Right/Idle/Tanjiro-right_09.png");
    revtan_Idle_R_2 = iLoadImage("image/Revtan/Right/Idle/Tanjiro-right_09.png");

    revtan_Lose_R_1 = iLoadImage("image/Revtan/Right/BattleLost/Tanjiro-right_40.png");
    revtan_Lose_R_2 = iLoadImage("image/Revtan/Right/BattleLost/Tanjiro-right_40.png");
    revtan_Lose_R_3 = iLoadImage("image/Revtan/Right/BattleLost/Tanjiro-right_40.png");
    revtan_Lose_R_4 = iLoadImage("image/Revtan/Right/BattleLost/Tanjiro-right_40.png");
    revtan_Lose_R_5 = iLoadImage("image/Revtan/Right/BattleLost/Tanjiro-right_40.png");

    revtan_Victory_R_1 = iLoadImage("image/Revtan/Right/BattleWon/Tanjiro-right_07.png");
    revtan_Victory_R_2 = iLoadImage("image/Revtan/Right/BattleWon/Tanjiro-right_07.png");

    revtan_Damage_R_1 = iLoadImage("image/Revtan/Right/Damage/Tanjiro-right_37.png");
    revtan_Damage_R_2 = iLoadImage("image/Revtan/Right/Damage/Tanjiro-right_37.png");

    revtan_Defence_R_1 = iLoadImage("image/Revtan/Right/Defence/Tanjiro-right_30.png");

    revtan_Jump_R_1 = iLoadImage("image/Revtan/Right/Jump/Tanjiro-right_14.png");
    revtan_Jump_R_2 = iLoadImage("image/Revtan/Right/Jump/Tanjiro-right_16.png");
    revtan_Jump_R_3 = iLoadImage("image/Revtan/Right/Jump/Tanjiro-right_18.png");

    revtan_NormalATK_R_1 = iLoadImage("image/Revtan/Right/NormalATK/Tanjiro-right_34.png");
    revtan_NormalATK_R_2 = iLoadImage("image/Revtan/Right/NormalATK/Tanjiro-right_34.png");
    revtan_NormalATK_R_3 = iLoadImage("image/Revtan/Right/NormalATK/Tanjiro-right_34.png");
    revtan_NormalATK_R_4 = iLoadImage("image/Revtan/Right/NormalATK/Tanjiro-right_34.png");

    revtan_PowerUp_R_1 = iLoadImage("image/Revtan/Right/PowerUp/Tanjiro-right_44.png");
    revtan_PowerUp_R_2 = iLoadImage("image/Revtan/Right/PowerUp/Tanjiro-right_44.png");

    revtan_StrongATK_R_1 = iLoadImage("image/Revtan/Right/StrongATK/Tanjiro-right_47.png");
    revtan_StrongATK_R_2 = iLoadImage("image/Revtan/Right/StrongATK/Tanjiro-right_47.png");
    revtan_StrongATK_R_3 = iLoadImage("image/Revtan/Right/StrongATK/Tanjiro-right_50.png");

    revtan_Ultimate_R_1 = iLoadImage("image/Revtan/Right/Ultimate/Tanjiro-right_62.png");
    revtan_Ultimate_R_2 = iLoadImage("image/Revtan/Right/Ultimate/Tanjiro-right_59.png");
    revtan_KA_ME_HA_ME_HA_R = iLoadImage("image/Revtan/Right/Ultimate/TanjiroRight_55.png");

    revtan_Walk_R_1 = iLoadImage("image/Revtan/Right/Walk/Tanjiro-right_21.png");
    revtan_Walk_R_2 = iLoadImage("image/Revtan/Right/Walk/Tanjiro-right_22.png");
    revtan_Walk_R_3 = iLoadImage("image/Revtan/Right/Walk/Tanjiro-right_23.png");
}

void tanjiroLoadImage() {
    pfp = iLoadImage("image/Tanjiro/Profile/TanjiroRight_03.png");
    loadTanjiroImagesLeft();
    loadTanjiroImagesRight();
}

void loadTanjiroImagesLeft() {
    tanjiro_Idle_L_1 = iLoadImage("image/Tanjiro/Left/Idle/TanjiroLeft_03.png");
    tanjiro_Idle_L_2 = iLoadImage("image/Tanjiro/Left/Idle/TanjiroLeft_03.png");

    tanjiro_Lose_L_1 = iLoadImage("image/Tanjiro/Left/BattleLost/TanjiroLeft_23.png");
    tanjiro_Lose_L_2 = iLoadImage("image/Tanjiro/Left/BattleLost/TanjiroLeft_23.png");
    tanjiro_Lose_L_3 = iLoadImage("image/Tanjiro/Left/BattleLost/TanjiroLeft_23.png");
    tanjiro_Lose_L_4 = iLoadImage("image/Tanjiro/Left/BattleLost/TanjiroLeft_23.png");
    tanjiro_Lose_L_5 = iLoadImage("image/Tanjiro/Left/BattleLost/TanjiroLeft_23.png");

    tanjiro_Victory_L_1 = iLoadImage("image/Tanjiro/Left/BattleWon/TanjiroLeft_05.png");
    tanjiro_Victory_L_2 = iLoadImage("image/Tanjiro/Left/BattleWon/TanjiroLeft_05.png");

    tanjiro_Damage_L_1 = iLoadImage("image/Tanjiro/Left/Damage/TanjiroLeft_20.png");
    tanjiro_Damage_L_2 = iLoadImage("image/Tanjiro/Left/Damage/TanjiroLeft_20.png");

    tanjiro_Defence_L_1 = iLoadImage("image/Tanjiro/Left/Defence/TanjiroLeft_13.png");

    tanjiro_Jump_L_1 = iLoadImage("image/Tanjiro/Left/Jump/Tanjiro-AT_06.png");
    tanjiro_Jump_L_2 = iLoadImage("image/Tanjiro/Left/Jump/Tanjiro-AT_04.png");
    tanjiro_Jump_L_3 = iLoadImage("image/Tanjiro/Left/Jump/Tanjiro-AT_03.png");

    tanjiro_NormalATK_L_1 = iLoadImage("image/Tanjiro/Left/NormalATK/TanjiroLeft_15.png");
    tanjiro_NormalATK_L_2 = iLoadImage("image/Tanjiro/Left/NormalATK/TanjiroLeft_15.png");
    tanjiro_NormalATK_L_3 = iLoadImage("image/Tanjiro/Left/NormalATK/TanjiroLeft_15.png");
    tanjiro_NormalATK_L_4 = iLoadImage("image/Tanjiro/Left/NormalATK/TanjiroLeft_15.png");

    tanjiro_PowerUp_L_1 = iLoadImage("image/Tanjiro/Left/PowerUp/TanjiroLeft_27.png");
    tanjiro_PowerUp_L_2 = iLoadImage("image/Tanjiro/Left/PowerUp/TanjiroLeft_27.png");

    tanjiro_StrongATK_L_1 = iLoadImage("image/Tanjiro/Left/StrongATK/TanjiroLeft_30.png");
    tanjiro_StrongATK_L_2 = iLoadImage("image/Tanjiro/Left/StrongATK/TanjiroLeft_30.png");
    tanjiro_StrongATK_L_3 = iLoadImage("image/Tanjiro/Left/StrongATK/TanjiroLeft_33.png");

    tanjiro_Ultimate_L_1 = iLoadImage("image/Tanjiro/Left/Ultimate/TanjiroLeft_45.png");
    tanjiro_Ultimate_L_2 = iLoadImage("image/Tanjiro/Left/Ultimate/TanjiroLeft_42.png");
    tanjiro_KA_ME_HA_ME_HA_L = iLoadImage("image/Tanjiro/Left/Ultimate/TanjiroLeft_38.png");

    tanjiro_Walk_L_1 = iLoadImage("image/Tanjiro/Left/Walk/Tanjiro-AT_11.png");
    tanjiro_Walk_L_2 = iLoadImage("image/Tanjiro/Left/Walk/Tanjiro-AT_10.png");
    tanjiro_Walk_L_3 = iLoadImage("image/Tanjiro/Left/Walk/Tanjiro-AT_09.png");
}

void loadTanjiroImagesRight() {
    tanjiro_Idle_R_1 = iLoadImage("image/Tanjiro/Right/Idle/TanjiroRight_09.png");
    tanjiro_Idle_R_2 = iLoadImage("image/Tanjiro/Right/Idle/TanjiroRight_09.png");

    tanjiro_Lose_R_1 = iLoadImage("image/Tanjiro/Right/BattleLost/TanjiroRight_40.png");
    tanjiro_Lose_R_2 = iLoadImage("image/Tanjiro/Right/BattleLost/TanjiroRight_40.png");
    tanjiro_Lose_R_3 = iLoadImage("image/Tanjiro/Right/BattleLost/TanjiroRight_40.png");
    tanjiro_Lose_R_4 = iLoadImage("image/Tanjiro/Right/BattleLost/TanjiroRight_40.png");
    tanjiro_Lose_R_5 = iLoadImage("image/Tanjiro/Right/BattleLost/TanjiroRight_40.png");

    tanjiro_Victory_R_1 = iLoadImage("image/Tanjiro/Right/BattleWon/TanjiroRight_07.png");
    tanjiro_Victory_R_2 = iLoadImage("image/Tanjiro/Right/BattleWon/TanjiroRight_07.png");

    tanjiro_Damage_R_1 = iLoadImage("image/Tanjiro/Right/Damage/TanjiroRight_37.png");
    tanjiro_Damage_R_2 = iLoadImage("image/Tanjiro/Right/Damage/TanjiroRight_37.png");

    tanjiro_Defence_R_1 = iLoadImage("image/Tanjiro/Right/Defence/TanjiroRight_30.png");

    tanjiro_Jump_R_1 = iLoadImage("image/Tanjiro/Right/Jump/TanjiroRight_14.png");
    tanjiro_Jump_R_2 = iLoadImage("image/Tanjiro/Right/Jump/TanjiroRight_16.png");
    tanjiro_Jump_R_3 = iLoadImage("image/Tanjiro/Right/Jump/TanjiroRight_18.png");

    tanjiro_NormalATK_R_1 = iLoadImage("image/Tanjiro/Right/NormalATK/TanjiroRight_34.png");
    tanjiro_NormalATK_R_2 = iLoadImage("image/Tanjiro/Right/NormalATK/TanjiroRight_34.png");
    tanjiro_NormalATK_R_3 = iLoadImage("image/Tanjiro/Right/NormalATK/TanjiroRight_34.png");
    tanjiro_NormalATK_R_4 = iLoadImage("image/Tanjiro/Right/NormalATK/TanjiroRight_34.png");

    tanjiro_PowerUp_R_1 = iLoadImage("image/Tanjiro/Right/PowerUp/TanjiroRight_44.png");
    tanjiro_PowerUp_R_2 = iLoadImage("image/Tanjiro/Right/PowerUp/TanjiroRight_44.png");

    tanjiro_StrongATK_R_1 = iLoadImage("image/Tanjiro/Right/StrongATK/TanjiroRight_47.png");
    tanjiro_StrongATK_R_2 = iLoadImage("image/Tanjiro/Right/StrongATK/TanjiroRight_47.png");
    tanjiro_StrongATK_R_3 = iLoadImage("image/Tanjiro/Right/StrongATK/TanjiroRight_50.png");

    tanjiro_Ultimate_R_1 = iLoadImage("image/Tanjiro/Right/Ultimate/TanjiroRight_62.png");
    tanjiro_Ultimate_R_2 = iLoadImage("image/Tanjiro/Right/Ultimate/TanjiroRight_59.png");
    tanjiro_KA_ME_HA_ME_HA_R = iLoadImage("image/Tanjiro/Right/Ultimate/TanjiroRight_55.png");

    tanjiro_Walk_R_1 = iLoadImage("image/Tanjiro/Right/Walk/TanjiroRight_21.png");
    tanjiro_Walk_R_2 = iLoadImage("image/Tanjiro/Right/Walk/TanjiroRight_22.png");
    tanjiro_Walk_R_3 = iLoadImage("image/Tanjiro/Right/Walk/TanjiroRight_23.png");
}

//jin sakai
void ghostLoadImage() {
    //imgBackground1 = iLoadImage("image/Background/IMG_6049.JPG");
    pfp = iLoadImage("image/Ghost/Profile/Profile.png");
    loadGhostImagesLeft();
    loadGhostImagesRight();
}

void loadGhostImagesLeft() {
    ghost_Idle_L_1 = iLoadImage("image/Ghost/Left/Idle/idle0002.png");
    ghost_Idle_L_2 = iLoadImage("image/Ghost/Left/Idle/idle0013.png");

    ghost_Lose_L_1 = iLoadImage("image/Ghost/Left/BattleLost/death0049.png");
    ghost_Lose_L_2 = iLoadImage("image/Ghost/Left/BattleLost/death0049.png");
    ghost_Lose_L_3 = iLoadImage("image/Ghost/Left/BattleLost/death0049.png");
    ghost_Lose_L_4 = iLoadImage("image/Ghost/Left/BattleLost/death0049.png");
    ghost_Lose_L_5 = iLoadImage("image/Ghost/Left/BattleLost/death0049.png");

    ghost_Victory_L_1 = iLoadImage("image/Ghost/Left/BattleWon/idle0018.png");
    ghost_Victory_L_2 = iLoadImage("image/Ghost/Left/BattleWon/idle0018.png");

    ghost_Damage_L_1 = iLoadImage("image/Ghost/Left/Damage/hurt20001.png");
    ghost_Damage_L_2 = iLoadImage("image/Ghost/Left/Damage/hurt20001.png");

    ghost_Defence_L_1 = iLoadImage("image/Ghost/Left/Defence/block0017.png");

    ghost_Jump_L_1 = iLoadImage("image/Ghost/Left/Jump/jump0027.png");
    ghost_Jump_L_2 = iLoadImage("image/Ghost/Left/Jump/jump0015.png");
    ghost_Jump_L_3 = iLoadImage("image/Ghost/Left/Jump/jump0005.png");

    ghost_NormalATK_L_1 = iLoadImage("image/Ghost/Left/NormalATK/jumpAttack0013.png");
    ghost_NormalATK_L_2 = iLoadImage("image/Ghost/Left/NormalATK/jumpAttack0013.png");
    ghost_NormalATK_L_3 = iLoadImage("image/Ghost/Left/NormalATK/jumpAttack0013.png");
    ghost_NormalATK_L_4 = iLoadImage("image/Ghost/Left/NormalATK/jumpAttack0013.png");

    ghost_PowerUp_L_1 = iLoadImage("image/Ghost/Left/PowerUp/IMG_6068.png");
    ghost_PowerUp_L_2 = iLoadImage("image/Ghost/Left/PowerUp/IMG_6068.png");

    ghost_StrongATK_L_1 = iLoadImage("image/Ghost/Left/StrongATK/crouchAttack0005.png");
    ghost_StrongATK_L_2 = iLoadImage("image/Ghost/Left/StrongATK/crouchAttack0005.png");
    ghost_StrongATK_L_3 = iLoadImage("image/Ghost/Left/StrongATK/IMG_6071.PNG");

    ghost_Ultimate_L_1 = iLoadImage("image/Ghost/Left/Ultimate/landAttack0014.png");
    ghost_Ultimate_L_2 = iLoadImage("image/Ghost/Left/Ultimate/landAttack0015.png");
    ghost_KA_ME_HA_ME_HA_L = iLoadImage("image/Ghost/Left/Ultimate/IMG_6069.PNG");

    ghost_Walk_L_1 = iLoadImage("image/Ghost/Left/Walk/run0017.png");
    ghost_Walk_L_2 = iLoadImage("image/Ghost/Left/Walk/run0013.png");
    ghost_Walk_L_3 = iLoadImage("image/Ghost/Left/Walk/run0002.png");
}

void loadGhostImagesRight() {
    ghost_Idle_R_1 = iLoadImage("image/Ghost/Right/Idle/idle0002.png");
    ghost_Idle_R_2 = iLoadImage("image/Ghost/Right/Idle/idle0013.png");

    ghost_Lose_R_1 = iLoadImage("image/Ghost/Right/BattleLost/death0049.png");
    ghost_Lose_R_2 = iLoadImage("image/Ghost/Right/BattleLost/death0049.png");
    ghost_Lose_R_3 = iLoadImage("image/Ghost/Right/BattleLost/death0049.png");
    ghost_Lose_R_4 = iLoadImage("image/Ghost/Right/BattleLost/death0049.png");
    ghost_Lose_R_5 = iLoadImage("image/Ghost/Right/BattleLost/death0049.png");

    ghost_Victory_R_1 = iLoadImage("image/Ghost/Right/BattleWon/idle0018.png");
    ghost_Victory_R_2 = iLoadImage("image/Ghost/Right/BattleWon/idle0018.png");

    ghost_Damage_R_1 = iLoadImage("image/Ghost/Right/Damage/hurt20001.png");
    ghost_Damage_R_2 = iLoadImage("image/Ghost/Right/Damage/Thurt20001.png");

    ghost_Defence_R_1 = iLoadImage("image/Ghost/Right/Defence/block0017.png");

    ghost_Jump_R_1 = iLoadImage("image/Ghost/Right/Jump/jump0005.png");
    ghost_Jump_R_2 = iLoadImage("image/Ghost/Right/Jump/jump0015.png");
    ghost_Jump_R_3 = iLoadImage("image/Ghost/Right/Jump/jump0027.png");

    ghost_NormalATK_R_1 = iLoadImage("image/Ghost/Right/NormalATK/jumpAttack0013.png");
    ghost_NormalATK_R_2 = iLoadImage("image/Ghost/Right/NormalATK/jumpAttack0013.png");
    ghost_NormalATK_R_3 = iLoadImage("image/Ghost/Right/NormalATK/jumpAttack0013.png");
    ghost_NormalATK_R_4 = iLoadImage("image/Ghost/Right/NormalATK/jumpAttack0013.png");

    ghost_PowerUp_R_1 = iLoadImage("image/Ghost/Right/PowerUp/IMG_6068.png");
    ghost_PowerUp_R_2 = iLoadImage("image/Ghost/Right/PowerUp/IMG_6068.png");

    ghost_StrongATK_R_1 = iLoadImage("image/Ghost/Right/StrongATK/crouchAttack0005.png");
    ghost_StrongATK_R_2 = iLoadImage("image/Ghost/Right/StrongATK/crouchAttack0005.png");
    ghost_StrongATK_R_3 = iLoadImage("image/Ghost/Right/StrongATK/IMG_6071.PNG");

    ghost_Ultimate_R_1 = iLoadImage("image/Ghost/Right/Ultimate/landAttack0014.png");
    ghost_Ultimate_R_2 = iLoadImage("image/Ghost/Right/Ultimate/landAttack0015.png");
    ghost_KA_ME_HA_ME_HA_R = iLoadImage("image/Ghost/Right/Ultimate/IMG_6069.PNG");

    ghost_Walk_R_1 = iLoadImage("image/Ghost/Right/Walk/run0017.png");
    ghost_Walk_R_2 = iLoadImage("image/Ghost/Right/Walk/run0013.png");
    ghost_Walk_R_3 = iLoadImage("image/Ghost/Right/Walk/run0002.png");
}

void jinsakaiLoadImage() {
    pfp = iLoadImage("image/Jinsakai/Profile/Profile.png");
    loadJinsakaiImagesLeft();
    loadJinsakaiImagesRight();
}

void loadJinsakaiImagesLeft() {
    jinsakai_Idle_L_1 = iLoadImage("image/Jinsakai/Left/Idle/idle0013.png");
    jinsakai_Idle_L_2 = iLoadImage("image/Jinsakai/Left/Idle/idle0002.png");

    jinsakai_Lose_L_1 = iLoadImage("image/Jinsakai/Left/BattleLost/death0049.png");
    jinsakai_Lose_L_2 = iLoadImage("image/Jinsakai/Left/BattleLost/death0049.png");
    jinsakai_Lose_L_3 = iLoadImage("image/Jinsakai/Left/BattleLost/death0049.png");
    jinsakai_Lose_L_4 = iLoadImage("image/Jinsakai/Left/BattleLost/death0049.png");
    jinsakai_Lose_L_5 = iLoadImage("image/Jinsakai/Left/BattleLost/death0049.png");

    jinsakai_Victory_L_1 = iLoadImage("image/Jinsakai/Left/BattleWon/idle0018.png");
    jinsakai_Victory_L_2 = iLoadImage("image/Jinsakai/Left/BattleWon/idle0018.png");

    jinsakai_Damage_L_1 = iLoadImage("image/Jinsakai/Left/Damage/hurt20001.png");
    jinsakai_Damage_L_2 = iLoadImage("image/Jinsakai/Left/Damage/hurt20001.png");

    jinsakai_Defence_L_1 = iLoadImage("image/Jinsakai/Left/Defence/block0017.png");

    jinsakai_Jump_L_1 = iLoadImage("image/Jinsakai/Left/Jump/jump0027.png");
    jinsakai_Jump_L_2 = iLoadImage("image/Jinsakai/Left/Jump/jump0015.png");
    jinsakai_Jump_L_3 = iLoadImage("image/Jinsakai/Left/Jump/jump0005.png");

    jinsakai_NormalATK_L_1 = iLoadImage("image/Jinsakai/Left/NormalATK/jumpAttack0013.png");
    jinsakai_NormalATK_L_2 = iLoadImage("image/Jinsakai/Left/NormalATK/jumpAttack0013.png");
    jinsakai_NormalATK_L_3 = iLoadImage("image/Jinsakai/Left/NormalATK/jumpAttack0013.png");
    jinsakai_NormalATK_L_4 = iLoadImage("image/Jinsakai/Left/NormalATK/jumpAttack0013.png");

    jinsakai_PowerUp_L_1 = iLoadImage("image/Jinsakai/Left/PowerUp/IMG_6068.PNG");
    jinsakai_PowerUp_L_2 = iLoadImage("image/Jinsakai/Left/PowerUp/IMG_6068.PNG");

    jinsakai_StrongATK_L_1 = iLoadImage("image/Jinsakai/Left/StrongATK/crouchAttack0001.png");
    jinsakai_StrongATK_L_2 = iLoadImage("image/Jinsakai/Left/StrongATK/crouchAttack0005.png");
    jinsakai_StrongATK_L_3 = iLoadImage("image/Jinsakai/Left/StrongATK/IMG_6071.PNG");

    jinsakai_Ultimate_L_1 = iLoadImage("image/Jinsakai/Left/Ultimate/landAttack0014.png");
    jinsakai_Ultimate_L_2 = iLoadImage("image/Jinsakai/Left/Ultimate/landAttack0015.png");
    jinsakai_KA_ME_HA_ME_HA_L = iLoadImage("image/Jinsakai/Left/Ultimate/IMG_6069.PNG");

    jinsakai_Walk_L_1 = iLoadImage("image/Jinsakai/Left/Walk/run0017.png");
    jinsakai_Walk_L_2 = iLoadImage("image/Jinsakai/Left/Walk/run0013.png");
    jinsakai_Walk_L_3 = iLoadImage("image/Jinsakai/Left/Walk/run0002.png");
}

void loadJinsakaiImagesRight() {
    jinsakai_Idle_R_1 = iLoadImage("image/Jinsakai/Right/Idle/idle0002.png");
    jinsakai_Idle_R_2 = iLoadImage("image/Jinsakai/Right/Idle/idle0013.png");

    jinsakai_Lose_R_1 = iLoadImage("image/Jinsakai/Right/BattleLost/death0049.png");
    jinsakai_Lose_R_2 = iLoadImage("image/Jinsakai/Right/BattleLost/death0049.png");
    jinsakai_Lose_R_3 = iLoadImage("image/Jinsakai/Right/BattleLost/death0049.png");
    jinsakai_Lose_R_4 = iLoadImage("image/Jinsakai/Right/BattleLost/death0049.png");
    jinsakai_Lose_R_5 = iLoadImage("image/Jinsakai/Right/BattleLost/death0049.png");

    jinsakai_Victory_R_1 = iLoadImage("image/Jinsakai/Right/BattleWon/idle0018.png");
    jinsakai_Victory_R_2 = iLoadImage("image/Jinsakai/Right/BattleWon/idle0018.png");

    jinsakai_Damage_R_1 = iLoadImage("image/Jinsakai/Right/Damage/hurt20001.png");
    jinsakai_Damage_R_2 = iLoadImage("image/Jinsakai/Right/Damage/hurt20001.png");

    jinsakai_Defence_R_1 = iLoadImage("image/Jinsakai/Right/Defence/block0017.png");

    jinsakai_Jump_R_1 = iLoadImage("image/Jinsakai/Right/Jump/jump0005.png");
    jinsakai_Jump_R_2 = iLoadImage("image/Jinsakai/Right/Jump/jump0015.png");
    jinsakai_Jump_R_3 = iLoadImage("image/Jinsakai/Right/Jump/jump0027.png");

    jinsakai_NormalATK_R_1 = iLoadImage("image/Jinsakai/Right/NormalATK/jumpAttack0013 - Copy.png");
    jinsakai_NormalATK_R_2 = iLoadImage("image/Jinsakai/Right/NormalATK/jumpAttack0013 - Copy.png");
    jinsakai_NormalATK_R_3 = iLoadImage("image/Jinsakai/Right/NormalATK/jumpAttack0013 - Copy.png");
    jinsakai_NormalATK_R_4 = iLoadImage("image/Jinsakai/Right/NormalATK/jumpAttack0013 - Copy.png");

    jinsakai_PowerUp_R_1 = iLoadImage("image/Jinsakai/Right/PowerUp/IMG_6068.PNG");
    jinsakai_PowerUp_R_2 = iLoadImage("image/Jinsakai/Right/PowerUp/IMG_6068.PNG");

    jinsakai_StrongATK_R_1 = iLoadImage("image/Jinsakai/Right/StrongATK/crouchAttack0001.png");
    jinsakai_StrongATK_R_2 = iLoadImage("image/Jinsakai/Right/StrongATK/crouchAttack0005.png");
    jinsakai_StrongATK_R_3 = iLoadImage("image/Jinsakai/Right/StrongATK/IMG_6071.PNG");

    jinsakai_Ultimate_R_1 = iLoadImage("image/Jinsakai/Right/Ultimate/landAttack0014.png");
    jinsakai_Ultimate_R_2 = iLoadImage("image/Jinsakai/Right/Ultimate/landAttack0015.png");
    jinsakai_KA_ME_HA_ME_HA_R = iLoadImage("image/Jinsakai/Right/Ultimate/IMG_6069.PNG");

    jinsakai_Walk_R_1 = iLoadImage("image/Jinsakai/Right/Walk/run0002.png");
    jinsakai_Walk_R_2 = iLoadImage("image/Jinsakai/Right/Walk/run0013.png");
    jinsakai_Walk_R_3 = iLoadImage("image/Jinsakai/Right/Walk/run0017.png");
}


//win_lose
/* //goku 
// Win condition:
void Player2win()
{
	P1PickGoku = 0;
	P2PickGoku = 0;
	if(P2LeftSide) iShowImage(P2GokuX, 100, GokuWidth, GokuHeight,  goku_Victory_L_1);
	else if(P2LeftSide) iShowImage(P2GokuX, 200, GokuWidth, GokuHeight,  goku_Victory_R_1);

	if(P1LeftSide) iShowImage(P1GokuX, 100, 150, 70,  goku_Lose_L_1);
	else if(P1RightSide) iShowImage(P1GokuX, 100, 150, 70,  goku_Lose_R_1);



}

void Player1win()
{
	P1PickGoku = 0;
	P2PickGoku = 0;
	if(P1LeftSide) iShowImage(P1GokuX, 100, GokuWidth, GokuHeight,  goku_Victory_L_1);
	else if(P1LeftSide) iShowImage(P1GokuX, 100, GokuWidth, GokuHeight,  goku_Victory_R_1);

	if(P1LeftSide) iShowImage(P2GokuX, 100, 150, 70,  goku_Lose_L_1);
	else if(P1RightSide) iShowImage(P2GokuX, 100, 150, 70,  goku_Lose_R_1);
}


// Win condition:
//gojo and ak
void Player2win()
{
	P1PickGojo = 0;
	P2PickAk = 0;
	if(P2LeftSide) iShowImage(P2AkX, 100, AkWidth-10, AkHeight, ak_Victory_L_1);
	else if(P2LeftSide) iShowImage(P2AkX, 100, AkWidth-10, AkHeight, ak_Victory_R_1);

	if(P1LeftSide) iShowImage(P1GojoX, 100, 150, 70,  gojo_Lose_L_1);
	else if(P1RightSide) iShowImage(P1GojoX, 100, 150, 70,  gojo_Lose_R_1);



}

void Player1win()
{
	P1PickGojo = 0;
	P2PickAk = 0;
	if(P1LeftSide) iShowImage(P1GojoX, 100, GojoWidth, GojoHeight,  gojo_Victory_L_1);
	else if(P1LeftSide) iShowImage(P1GojoX, 100, GojoWidth, GojoHeight,  gojo_Victory_R_1);

	if(P1LeftSide) iShowImage(P2AkX, 100, 150, 70, ak_Lose_L_1);
	else if(P1RightSide) iShowImage(P2AkX, 100, 150, 70,  ak_Lose_R_1);
}


//for ninja girl

// Win condition:
void Player2win()
{
	P1PickKunoichi = 0;
	P2PickShinobi = 0;
	if(P2LeftSide) iShowImage(P2ShinobiX, 100, ShinobiWidth-10, ShinobiHeight, shinobi_Victory_L_1);
	else if(P2LeftSide) iShowImage(P2ShinobiX, 100, ShinobiWidth-10, ShinobiHeight, shinobi_Victory_R_1);

	if(P1LeftSide) iShowImage(P1KunoichiX, 100, 150, 70,  kunoichi_Lose_L_1);
	else if(P1RightSide) iShowImage(P1KunoichiX, 100, 150, 70,  kunoichi_Lose_R_1);



}

void Player1win()
{
	P1PickKunoichi = 0;
	P2PickShinobi = 0;
	if(P1LeftSide) iShowImage(P1KunoichiX, 100, KunoichiWidth, KunoichiHeight,  kunoichi_Victory_L_1);
	else if(P1LeftSide) iShowImage(P1KunoichiX, 100, KunoichiWidth, KunoichiHeight,  kunoichi_Victory_R_1);

	if(P1LeftSide) iShowImage(P2ShinobiX, 100, 150, 70, shinobi_Lose_L_1);
	else if(P1RightSide) iShowImage(P2ShinobiX, 100, 150, 70,  shinobi_Lose_R_1);
}

//inchigo


// Win condition:
void Player2win()
{
	P1PickIchigo = 0;
	P2PickIchigo = 0;
	if(P2LeftSide) iShowImage(P2RevIchigoX, 100, RevIchigoWidth-10, RevIchigoHeight, revichigo_Victory_L_1);
	else if(P2LeftSide) iShowImage(P2RevIchigoX, 100, RevIchigoWidth-10, RevIchigoHeight, revichigo_Victory_R_1);

	if(P1LeftSide) iShowImage(P1IchigoX, 100, 150, 70,  ichigo_Lose_L_1);
	else if(P1RightSide) iShowImage(P1IchigoX, 100, 150, 70,  ichigo_Lose_R_1);



}

void Player1win()
{
	P1PickIchigo = 0;
	P2PickIchigo = 0;
	if(P1LeftSide) iShowImage(P1IchigoX, 100, IchigoWidth, IchigoHeight,  ichigo_Victory_L_1);
	else if(P1LeftSide) iShowImage(P1IchigoX, 100, IchigoWidth, IchigoHeight,  ichigo_Victory_R_1);

	if(P1LeftSide) iShowImage(P2RevIchigoX, 100, 150, 70, revichigo_Lose_L_1);
	else if(P1RightSide) iShowImage(P2RevIchigoX, 100, 150, 70,  revichigo_Lose_R_1);
}


//tanjiro

// Win condition:
void Player2win()
{
	P1PickTanjiro = 0;
	P2PickRevtan = 0;
	if(P2LeftSide) iShowImage(P2RevtanX, 100, RevtanWidth-10, RevtanHeight, revtan_Victory_L_1);
	else if(P2LeftSide) iShowImage(P2RevtanX, 100, RevtanWidth-10, RevtanHeight, revtan_Victory_R_1);

	if(P1LeftSide) iShowImage(P1TanjiroX, 100, 150, 70,  tanjiro_Lose_R_1);
	else if(P1RightSide) iShowImage(P1TanjiroX, 100, 150, 70,  tanjiro_Lose_R_1);



}

void Player1win()
{
	P1PickTanjiro = 0;
	P2PickRevtan = 0;
	if(P1LeftSide) iShowImage(P1TanjiroX, 100, TanjiroWidth, TanjiroHeight,  tanjiro_Victory_L_1);
	else if(P1LeftSide) iShowImage(P1TanjiroX, 100, TanjiroWidth, TanjiroHeight,  tanjiro_Victory_R_1);

	if(P1LeftSide) iShowImage(P2RevtanX, 100, 150, 70, revtan_Lose_L_1);
	else if(P1RightSide) iShowImage(P2RevtanX, 100, 150, 70,  revtan_Lose_R_1);
}


//jin sakai 

// Win condition:
void Player2win()
{
	P1PickJinsakai = 0;
	P2PickGhost = 0;
	if(P2LeftSide) iShowImage(P2GhostX, 100, GhostWidth-10, GhostHeight, ghost_Victory_L_1);
	else if(P2LeftSide) iShowImage(P2GhostX, 100, GhostWidth-10, GhostHeight, ghost_Victory_R_1);

	if(P1LeftSide) iShowImage(P1JinsakaiX, 100, 150, 70,  jinsakai_Lose_L_1);
	else if(P1RightSide) iShowImage(P1JinsakaiX, 100, 150, 70,  jinsakai_Lose_R_1);
}

void Player1win()
{
	P1PickJinsakai = 0;
	P2PickGhost = 0;
	if(P1LeftSide) iShowImage(P1JinsakaiX, 100, JinsakaiWidth, JinsakaiHeight,  jinsakai_Victory_L_1);
	else if(P1LeftSide) iShowImage(P1JinsakaiX, 100, JinsakaiWidth, JinsakaiHeight,  jinsakai_Victory_R_1);

	if(P1LeftSide) iShowImage(P2GhostX, 100, 150, 70, ghost_Lose_L_1);
	else if(P1RightSide) iShowImage(P2GhostX, 100, 150, 70,  ghost_Lose_R_1);
}

*/




//map
void loadMapImages() {
    mapImage1 = iLoadImage("image/Maps/World Tournament.JPG");
    mapImage2 = iLoadImage("image/Maps/Planet Namek.JPG");
    mapImage3 = iLoadImage("image/Maps/IMG_6044.JPG");
    mapImage4 = iLoadImage("image/Maps/IMG_6048.JPG");
    mapImage5 = iLoadImage("image/Maps/Leaf Village.JPG");
    mapImage6 = iLoadImage("image/Maps/IMG_6049.JPG");
}
void loadTimer()
{
	img0 = iLoadImage("image/Timer/0.png");
    img1 = iLoadImage("image/Timer/1.png");
    img2 = iLoadImage("image/Timer/2.png");
    img3 = iLoadImage("image/Timer/3.png");
    img4 = iLoadImage("image/Timer/4.png");
    img5 = iLoadImage("image/Timer/5.png");
    img6 = iLoadImage("image/Timer/6.png");
    img7 = iLoadImage("image/Timer/7.png");
    img8 = iLoadImage("image/Timer/8.png");
    img9 = iLoadImage("image/Timer/9.png");

}


void accessGameOver();
void accessGameOver()
{
	Player1Win = iLoadImage("image/GameOver/P1Win.png");
	Player2Win = iLoadImage("image/GameOver/P2Win.png");


}


void iLoadResources()
{
	LoadMenuPages();
	gokuLoadImage();
	akLoadImage();
    gojoLoadImage();
	shinobiLoadImage();
    kunoichiLoadImage();
	revIchigoLoadImage();
    ichigoLoadImage();
	revtanLoadImage();
    tanjiroLoadImage();
	ghostLoadImage();
    jinsakaiLoadImage();

	accesshealth();
	loadArena();
	loadCollectionTab();
	loadMapImages();
	loadPlayerpfp();

	loadTimer();
	accessGameOver();

	imgBackground1 = iLoadImage("image/Maps/BackGround.png");
	playerselectionimg=iLoadImage("image/Menu/CharacterSelection.JPG");
	 BackIcon = iLoadImage("image/Icon/BackIcon.png");
     audioicon = iLoadImage("image/Icon/audio.png");
}

//jinsakai

void playerTwoGhost()
{
    if (P2RightSide)
    {
        // Idle
        if (P2_Idle == 1)
        {
            if (P2idleNum == 0) iShowImage(P2GhostX, P2GhostY, GhostWidth-10, GhostHeight, ghost_Idle_R_1);
            if (P2idleNum == 1) iShowImage(P2GhostX, P2GhostY, GhostWidth-10, GhostHeight, ghost_Idle_R_2);
            if (P2idleNum == 2) iShowImage(P2GhostX, P2GhostY, GhostWidth-10, GhostHeight, ghost_Idle_R_2);
        }

        // Walking
        if (P2_Walk == 1)
        {
            if (P2i == 0) {
                iShowImage(P2GhostX, P2GhostY, GhostWidth-15, GhostHeight, ghost_Walk_R_1);
            }
            else if (P2i == 1) {
                iShowImage(P2GhostX, P2GhostY, GhostWidth-15, GhostHeight, ghost_Walk_R_2);
            }
            if (P2i == 2) {
                iShowImage(P2GhostX, P2GhostY, GhostWidth-15, GhostHeight, ghost_Walk_R_3);
            }
        }

        // Jumping
        if (P2jump)
        {
            if (P2jumpPic1 == 1) {
                iShowImage(P2GhostX, P2GhostY, GhostWidth+30, GhostHeight+20, ghost_Jump_R_1);
            }
            else if (P2jumpPic3 == 1) {
                iShowImage(P2GhostX, P2GhostY, GhostWidth+30, GhostHeight+20, ghost_Jump_R_2);
            }
            else if (P2jumpPic2 == 1) {
                iShowImage(P2GhostX, P2GhostY, GhostWidth+30, GhostHeight+20, ghost_Jump_R_3);
            }
        }

        //Normal Attack
        if (P2Attacking1 == 1)
        {
            iShowImage(P2GhostX, P2GhostY-10, GhostWidth +50, GhostHeight+20, ghost_NormalATK_R_2);
        }

        // Strong Attack
        if (P2Attacking2 == 1)
        {
            iShowImage(P2GhostX, P2GhostY, GhostWidth+30, GhostHeight, ghost_StrongATK_R_2);
        }

		// Damage 
		if(P2_damage)
		{
			iShowImage(P2GhostX, P2GhostY, GhostWidth+30, GhostHeight, ghost_Damage_R_1);
		}

        //Defend
        if (P2_Defend)
            iShowImage(P2GhostX-20, P2GhostY-70, GhostWidth+120, GhostHeight+177, ghost_Defence_R_1);

        // Power Up
        if (P2_Power)
        {
            iShowImage(P2GhostX - 10, P2GhostY - 10, 120, 170, ghost_PowerUp_R_2);
            iShowImage(P2GhostX, P2GhostY, GhostWidth, GhostHeight, ghost_PowerUp_R_1);
        }

        // Ultimate
        if (P2_Ultimate)
        {
            if (P2UltimateATK == 1)
                iShowImage(P2GhostX, P2GhostY, GhostWidth, GhostHeight, ghost_Ultimate_R_1);
            if (P2UltimateATK == 2)
                iShowImage(P2GhostX, P2GhostY, GhostWidth, GhostHeight, ghost_Ultimate_R_2);
        }
    }

    if (P2right_Side_range == 1)
    {
        if (P2range_Attack == 1)
        {
            iShowImage(P2blx + 50 + P2blast, P2bly + 50, 27, 21, ghost_StrongATK_R_3);
        }
    }
    if (P2RightSideUltimate)
    {
        if (P2Ultimate_Blast == 1)
        {
            iShowImage(P2KAMEHAMEHA + P2ulti_blast, P1GhostY-80, 200, 100, ghost_KA_ME_HA_ME_HA_R);
        }
    }

    // LEFT SIDE --------------------------------------------------------
    if (P2LeftSide)
    {
        // Idle
        if (P2_Idle == 1)
        {
            if (P2idleNum == 0) iShowImage(P2GhostX, P2GhostY, GhostWidth, GhostHeight, ghost_Idle_L_1);
            if (P2idleNum == 1) iShowImage(P2GhostX, P2GhostY, GhostWidth, GhostHeight, ghost_Idle_L_2);
            if (P2idleNum == 2) iShowImage(P2GhostX, P2GhostY, GhostWidth, GhostHeight, ghost_Idle_L_2);
        }

        // Walking
        if (P2_Walk == 1)
        {
            if (P2i == 0) {
                iShowImage(P2GhostX, P2GhostY, GhostWidth, GhostHeight, ghost_Walk_L_1);
            }
            else if (P2i == 1) {
                iShowImage(P2GhostX, P2GhostY, GhostWidth, GhostHeight, ghost_Walk_L_2);
            }
            if (P2i == 2) {
                iShowImage(P2GhostX, P2GhostY, GhostWidth, GhostHeight, ghost_Walk_L_3);
            }
        }

        // Jumping
        if (P2jump)
        {
            if (P2jumpPic1 == 1) {
                iShowImage(P2GhostX, P2GhostY, GhostWidth+30, GhostHeight+20, ghost_Jump_L_1);
            }
            else if (P2jumpPic3 == 1) {
                iShowImage(P2GhostX, P2GhostY, GhostWidth+30, GhostHeight+20, ghost_Jump_L_2);
            }
            else if (P2jumpPic2 == 1) {
                iShowImage(P2GhostX, P2GhostY, GhostWidth+30, GhostHeight+20, ghost_Jump_L_3);
            }
        }

        //Normal Attack
        if (P2Attacking1 == 1)
        {
            iShowImage(P2GhostX-30, P2GhostY-10, GhostWidth + 50, GhostHeight+20, ghost_NormalATK_L_2);
        }

        // Strong Attack
        if (P2Attacking2 == 1)
        {
            iShowImage(P2GhostX, P2GhostY, GhostWidth+30, GhostHeight, ghost_StrongATK_L_2);
        }

		// Damage 
		if(P2_damage)
		{
			iShowImage(P2GhostX, P2GhostY, GhostWidth+30, GhostHeight, ghost_Damage_L_1);
		}

        //Defend
        if (P2_Defend)
            iShowImage(P2GhostX-20, P2GhostY-80, GhostWidth + 120, GhostHeight + 177, ghost_Defence_L_1);

        // Power Up
        if (P2_Power)
        {
            iShowImage(P2GhostX - 10, P2GhostY - 10, 120, 170, ghost_PowerUp_L_2);
            iShowImage(P2GhostX, P2GhostY, GhostWidth, GhostHeight, ghost_PowerUp_L_1);
        }

        // Ultimate
        if (P2_Ultimate)
        {
            if (P2UltimateATK == 1)
                iShowImage(P2GhostX, P2GhostY, GhostWidth+10, GhostHeight+20, ghost_Ultimate_L_1);
            if (P2UltimateATK == 2)
                iShowImage(P2GhostX, P2GhostY, GhostWidth+10, GhostHeight+20, ghost_Ultimate_L_2);
        }
    }

    if (P2left_Side_range == 1)
    {
        if (P2range_Attack == 1)
        {
            iShowImage(P2blx - 50 + P2blast, P2bly + 50, 27, 21, ghost_StrongATK_L_3);
        }
    }
    if (P2LeftSideUltimate)
    {
        if (P2Ultimate_Blast == 1)
        {
            iShowImage(P2KAMEHAMEHA - P2ulti_blast, P1GhostY-80, 200, 100, ghost_KA_ME_HA_ME_HA_L);
        }
    }
}

void playerOneJinsakai()
{
    if (P1RightSide)
    {
        // Idle
        if (P1_Idle == 1)
        {
            if (P1idleNum == 0) iShowImage(P1JinsakaiX, P1JinsakaiY, JinsakaiWidth, JinsakaiHeight, jinsakai_Idle_R_1);
            if (P1idleNum == 1) iShowImage(P1JinsakaiX, P1JinsakaiY, JinsakaiWidth, JinsakaiHeight, jinsakai_Idle_R_2);
            if (P1idleNum == 2) iShowImage(P1JinsakaiX, P1JinsakaiY, JinsakaiWidth, JinsakaiHeight, jinsakai_Idle_R_2);
        }

        // Walking
        if (P1_Walk == 1)
        {
            if (P1i == 0){
                iShowImage(P1JinsakaiX, P1JinsakaiY, JinsakaiWidth, JinsakaiHeight, jinsakai_Walk_R_1);
            }
            else if (P1i == 1){
                iShowImage(P1JinsakaiX, P1JinsakaiY, JinsakaiWidth, JinsakaiHeight, jinsakai_Walk_R_2);
            }
            if (P1i == 2){
                iShowImage(P1JinsakaiX, P1JinsakaiY, JinsakaiWidth, JinsakaiHeight, jinsakai_Walk_R_3);
            }
        }

        // Jumping
        if (P1jump)
        {
            if (P1jumpPic1 == 1){
                iShowImage(P1JinsakaiX, P1JinsakaiY, JinsakaiWidth+30, JinsakaiHeight+20, jinsakai_Jump_R_1);
            }
            else if (P1jumpPic3 == 1){
                iShowImage(P1JinsakaiX, P1JinsakaiY, JinsakaiWidth+30, JinsakaiHeight+20, jinsakai_Jump_R_2);
            }
            else if (P1jumpPic2 == 1){
                iShowImage(P1JinsakaiX, P1JinsakaiY, JinsakaiWidth+30, JinsakaiHeight+20, jinsakai_Jump_R_3);
            }
        }

        //Normal Attack
        if (P1Attacking1 == 1)
        {
            iShowImage(P1JinsakaiX, P1JinsakaiY-10, JinsakaiWidth + 50, JinsakaiHeight +20, jinsakai_NormalATK_R_2);
        }

        // Strong Attack
        if (P1Attacking2 == 1)
        {
            iShowImage(P1JinsakaiX, P1JinsakaiY, JinsakaiWidth, JinsakaiHeight, jinsakai_StrongATK_R_2);
        }

		// Damage 
		if(P1_damage)
		{
			iShowImage(P1JinsakaiX, P1JinsakaiY, JinsakaiWidth, JinsakaiHeight, jinsakai_Damage_R_1);
		}

        //Defend
        if (P1_Defend)
            iShowImage(P1JinsakaiX+20, P1JinsakaiY-70, JinsakaiWidth+120, JinsakaiHeight+177, jinsakai_Defence_R_1);

        // Power Up
        if (P1_Power)
        {
            iShowImage(P1JinsakaiX - 10, P1JinsakaiY - 10, 120, 170, jinsakai_PowerUp_R_2);
            iShowImage(P1JinsakaiX, P1JinsakaiY, JinsakaiWidth, JinsakaiHeight, jinsakai_PowerUp_R_1);
        }

        // Ultimate
        if (P1_Ultimate)
        {
            if (P1UltimateATK == 1)
                iShowImage(P1JinsakaiX, P1JinsakaiY, JinsakaiWidth+10, JinsakaiHeight+20, jinsakai_Ultimate_R_1);
            if (P1UltimateATK == 2)
                iShowImage(P1JinsakaiX, P1JinsakaiY, JinsakaiWidth+10, JinsakaiHeight+20, jinsakai_Ultimate_R_2);
        }
    }

    if (P1right_Side_range == 1)
    {
        if (P1range_Attack == 1)
        {
            iShowImage(P1blx + 50 + P1blast, P1bly + 50, 27, 21, jinsakai_StrongATK_R_3);
        }
    }
    if (P1RightSideUltimate)
    {
        if (P1Ultimate_Blast == 1)
        {
            iShowImage(P1KAMEHAMEHA + P1ulti_blast, P1JinsakaiY + 20 , 200, 100, jinsakai_KA_ME_HA_ME_HA_R);
        }
    }

    // LEFT SIDE --------------------------------------------------------
    if (P1LeftSide)
    {
        // Idle
        if (P1_Idle == 1)
        {
            if (P1idleNum == 0) iShowImage(P1JinsakaiX, P1JinsakaiY, JinsakaiWidth, JinsakaiHeight, jinsakai_Idle_L_1);
            if (P1idleNum == 1) iShowImage(P1JinsakaiX, P1JinsakaiY, JinsakaiWidth, JinsakaiHeight, jinsakai_Idle_L_2);
            if (P1idleNum == 2) iShowImage(P1JinsakaiX, P1JinsakaiY, JinsakaiWidth, JinsakaiHeight, jinsakai_Idle_L_2);
        }

        // Walking
        if (P1_Walk == 1)
        {
            if (P1i == 0){
                iShowImage(P1JinsakaiX, P1JinsakaiY, JinsakaiWidth, JinsakaiHeight, jinsakai_Walk_L_1);
            }
            else if (P1i == 1){
                iShowImage(P1JinsakaiX, P1JinsakaiY, JinsakaiWidth, JinsakaiHeight, jinsakai_Walk_L_2);
            }
            if (P1i == 2){
                iShowImage(P1JinsakaiX, P1JinsakaiY, JinsakaiWidth, JinsakaiHeight, jinsakai_Walk_L_3);
            }
        }

        // Jumping
        if (P1jump)
        {
            if (P1jumpPic1 == 1){
                iShowImage(P1JinsakaiX, P1JinsakaiY, JinsakaiWidth+30, JinsakaiHeight+20, jinsakai_Jump_L_1);
            }
            else if (P1jumpPic3 == 1){
                iShowImage(P1JinsakaiX, P1JinsakaiY, JinsakaiWidth+30, JinsakaiHeight+20, jinsakai_Jump_L_2);
            }
            else if (P1jumpPic2 == 1){
                iShowImage(P1JinsakaiX, P1JinsakaiY, JinsakaiWidth+30, JinsakaiHeight+20, jinsakai_Jump_L_3);
            }
        }

        //Normal Attack
        if (P1Attacking1 == 1)
        {
            iShowImage(P1JinsakaiX-30, P1JinsakaiY-20, JinsakaiWidth + 50, JinsakaiHeight+20, jinsakai_NormalATK_L_2);
        }

        // Strong Attack
        if (P1Attacking2 == 1)
        {
            iShowImage(P1JinsakaiX, P1JinsakaiY, JinsakaiWidth, JinsakaiHeight, jinsakai_StrongATK_L_2);
        }

		// Damage 
		if(P1_damage)
		{
			iShowImage(P1JinsakaiX, P1JinsakaiY, JinsakaiWidth, JinsakaiHeight, jinsakai_Damage_L_1);
		}

        //Defend
        if (P1_Defend){
            iShowImage(P1JinsakaiX-70, P1JinsakaiY-80, JinsakaiWidth+120, JinsakaiHeight+177, jinsakai_Defence_L_1);
		}
        // Power Up
        if (P1_Power)
        {
            iShowImage(P1JinsakaiX - 10, P1JinsakaiY - 10, 120, 170, jinsakai_PowerUp_L_2);
            iShowImage(P1JinsakaiX, P1JinsakaiY, JinsakaiWidth, JinsakaiHeight, jinsakai_PowerUp_L_1);
        }

        // Ultimate
        if (P1_Ultimate)
        {
            if (P1UltimateATK == 1)
                iShowImage(P1JinsakaiX, P1JinsakaiY, JinsakaiWidth, JinsakaiHeight, jinsakai_Ultimate_L_1);
            if (P1UltimateATK == 2)
                iShowImage(P1JinsakaiX, P1JinsakaiY, JinsakaiWidth, JinsakaiHeight, jinsakai_Ultimate_L_2);
        }
    }

    if (P1left_Side_range == 1)
    {
        if (P1range_Attack == 1)
        {
            iShowImage(P1blx - 50 + P1blast, P1bly + 50, 27, 21, jinsakai_StrongATK_L_3);
        }
    }
    if (P1LeftSideUltimate)
    {
        if (P1Ultimate_Blast == 1)
        {
            iShowImage(P1KAMEHAMEHA - P1ulti_blast, P1JinsakaiY + 20 , 200, 100, jinsakai_KA_ME_HA_ME_HA_L);
        }
    }
}

// Previous win condition
/*
// Win condition:
void Player2win()
{
	if(GameOver)
	{
	
	cout << P2score << endl;
	P1PickTanjiro = 0;
	P2PickTanjiro = 0;
	if(P2LeftSide) iShowImage(P2TanjiroX, 100, TanjiroWidth, TanjiroHeight,  tanjiro_Victory_L_1);
	else if(P2LeftSide) iShowImage(P2TanjiroX, 200, TanjiroWidth, TanjiroHeight,  tanjiro_Victory_R_1);

	if(P1LeftSide) iShowImage(P1TanjiroX, 100, 150, 70,  tanjiro_Lose_L_1);
	else if(P1RightSide) iShowImage(P1TanjiroX, 100, 150, 70,  tanjiro_Lose_R_1);

	
	if(P2score == 1) 
	{
		Player1Pick = 0;
		Player2Pick = 0;
		P1PickTanjiro = 0;
		P2PickTanjiro = 0;
		
		iShowImage(0, 0, 1280, 720, Player2Win);
		iShowImage(600, 200, TanjiroWidth, TanjiroHeight,  tanjiro_Victory_L_1);
	}
	}
}

void Player1win()
{
	if(GameOver)
	{
	P1PickTanjiro = 0;
	P2PickTanjiro = 0;
	if(P1LeftSide) iShowImage(P1TanjiroX, 100, TanjiroWidth, TanjiroHeight,  tanjiro_Victory_L_1);
	else if(P1LeftSide) iShowImage(P1TanjiroX, 100, TanjiroWidth, TanjiroHeight,  tanjiro_Victory_R_1);

	if(P1LeftSide) iShowImage(P2TanjiroX, 100, 150, 70,  tanjiro_Lose_L_1);
	else if(P1RightSide) iShowImage(P2TanjiroX, 100, 150, 70,  tanjiro_Lose_R_1);

	if(P1score == 1)
		{
			Player1Pick = 0;
			Player2Pick = 0;
			P1PickTanjiro = 0;
			P2PickTanjiro = 0;
			
			iShowImage(0, 0, 1280, 720, Player1Win);
			iShowImage(600, 200, TanjiroWidth, TanjiroHeight,  tanjiro_Victory_R_1);
		}
	}
}
*/



// Win condition:
void Player2win()
{
	if(GameOver)
	{
	
	//cout << P2score << endl;

	if (P1SelectedChar == 0) 
		{
			P1PickGojo = 0 ;
			if(P1LeftSide) iShowImage(P1GojoX, 100, 150, 70,  gojo_Lose_L_1);
		else if(P1RightSide) iShowImage(P1GojoX, 100, 150, 70,  gojo_Lose_R_1);
	}
	if (P1SelectedChar == 1) 
		{
			P1PickGoku = 0 ;
			if(P1LeftSide) iShowImage(P1GokuX, 100, 150, 70,  goku_Lose_L_1);
			else if(P1RightSide) iShowImage(P1GokuX, 100, 150, 70,  goku_Lose_R_1);
	}
	if (P1SelectedChar == 2)
		{
			P1PickIchigo = 0 ;
			if(P1LeftSide) iShowImage(P1IchigoX, 100, 150, 70,  ichigo_Lose_L_1);
			else if(P1RightSide) iShowImage(P1IchigoX, 100, 150, 70,  ichigo_Lose_R_1);
	}
	if (P1SelectedChar == 3) 
		{
			P1PickTanjiro = 0 ;
			if(P1LeftSide) iShowImage(P1TanjiroX, 100, 150, 70,  tanjiro_Lose_L_1);
	else if(P1RightSide) iShowImage(P1TanjiroX, 100, 150, 70,  tanjiro_Lose_R_1);
	}
	if (P1SelectedChar == 4)
		{
			P1PickKunoichi = 0 ;
			if(P1LeftSide) iShowImage(P1KunoichiX, 100, 150, 70,  kunoichi_Lose_L_1);
	else if(P1RightSide) iShowImage(P1KunoichiX, 100, 150, 70,  kunoichi_Lose_R_1);
	}
	if (P1SelectedChar == 5)
		{
			P1PickJinsakai = 0 ;///////////////////////////////////////////
			if(P1LeftSide) iShowImage(P1JinsakaiX, 100, 150, 70,  jinsakai_Lose_L_1);
			else if(P1RightSide) iShowImage(P1JinsakaiX, 100, 150, 70,  jinsakai_Lose_R_1);
		}
	

	// P2 Wiin =---------------------

	if (P2SelectedChar == 0) 
		{
			P2PickRevIchigo = 0;
			if(P2LeftSide) iShowImage(P2RevIchigoX, 100, RevIchigoWidth-10, RevIchigoHeight, revichigo_Victory_L_1);
	else if(P2RightSide) iShowImage(P2RevIchigoX, 100, RevIchigoWidth-10, RevIchigoHeight, revichigo_Victory_R_1);
		}
	if (P2SelectedChar == 1) 
	{
		P2PickGoku = 0;
		if(P2LeftSide) iShowImage(P2GokuX, 100, GokuWidth, GokuHeight,  goku_Victory_L_1);
		else if(P2RightSide) iShowImage(P2GokuX, 200, GokuWidth, GokuHeight,  goku_Victory_R_1);
	}

	if (P2SelectedChar == 2) 
		{
			P2PickAk = 0;
			if(P2LeftSide) iShowImage(P2AkX, 100, AkWidth-10, AkHeight, ak_Victory_L_1);
		else if(P2RightSide) iShowImage(P2AkX, 100, AkWidth-10, AkHeight, ak_Victory_R_1);
	}
	if (P2SelectedChar == 3) 
		{
			P2PickGhost = 0;/////////////////////////////////////////////////
			if(P2LeftSide) iShowImage(P2GhostX, 100, GhostWidth-10, GhostHeight, ghost_Victory_L_1);
			else if(P2RightSide) iShowImage(P2GhostX, 100, GhostWidth-10, GhostHeight, ghost_Victory_R_1);
	}
	if (P2SelectedChar == 4) 
		{
			P2PickShinobi = 0;
			if(P2LeftSide) iShowImage(P2ShinobiX, 100, ShinobiWidth-10, ShinobiHeight, shinobi_Victory_L_1);
			else if(P2RightSide) iShowImage(P2ShinobiX, 100, ShinobiWidth-10, ShinobiHeight, shinobi_Victory_R_1);
	}
	if (P2SelectedChar == 5) 
		{
			P2PickRevtan = 0;
			if(P2LeftSide) iShowImage(P2RevtanX, 100, RevtanWidth, RevtanHeight,  revtan_Victory_L_1);
	else if(P2RightSide) iShowImage(P2RevtanX, 200, RevtanWidth, RevtanHeight,  revtan_Victory_R_1);
	}
	///P2PickTanjiro = 0;
	//if(P2LeftSide) iShowImage(P2TanjiroX, 100, TanjiroWidth, TanjiroHeight,  tanjiro_Victory_L_1);
	//else if(P2LeftSide) iShowImage(P2TanjiroX, 200, TanjiroWidth, TanjiroHeight,  tanjiro_Victory_R_1);

	//if(P1LeftSide) iShowImage(P1TanjiroX, 100, 150, 70,  tanjiro_Lose_L_1);
	//else if(P1RightSide) iShowImage(P1TanjiroX, 100, 150, 70,  tanjiro_Lose_R_1);

	iSetColor(255, 255,255);
	iText(400, 450, "Player Two Win");
	iText(400, 400, "Tap the screen to Continue;");

	
	if(P2score == 1) 
	{
		gameState = 3;
		
		//iShowImage(600, 200, TanjiroWidth, TanjiroHeight,  tanjiro_Victory_L_1);
	}
	}
}

void Player2Victory()
{
	//cout << P2score << endl;
		Player1Pick = 0;
		Player2Pick = 0;
		

		iShowImage(0, 0, 1280, 720, Player2Win);
		//iShowImage(0, 0, 1280, 720, TrainingGround);


		if (P1SelectedChar == 0) P1PickGojo = 0 ;
		else if (P1SelectedChar == 1) P1PickGoku = 0 ;  
		else if (P1SelectedChar == 2) P1PickIchigo = 0 ; 
		else if (P1SelectedChar == 3) P1PickTanjiro = 0 ; 
		else if (P1SelectedChar == 4) P1PickKunoichi = 0 ; 
		else if (P1SelectedChar == 5) P1PickJinsakai = 0 ;
	//P1PickTanjiro = 0;

	if (P2SelectedChar == 0){ P2PickRevIchigo = 0; iShowImage(600, 200, RevIchigoWidth-10, RevIchigoHeight, revichigo_Victory_L_1);}
	else if (P2SelectedChar == 1){ P2PickGoku = 0; iShowImage(600, 200, GokuWidth, GokuHeight,  goku_Victory_L_1); }
	else if (P2SelectedChar == 2){ P2PickAk = 0;  iShowImage(600, 200, AkWidth-10, AkHeight, ak_Victory_L_1); }
	else if (P2SelectedChar == 3){ P2PickGhost = 0; iShowImage(600, 200, GhostWidth-10, GhostHeight, ghost_Victory_L_1);} /////
	else if (P2SelectedChar == 4){ P2PickShinobi = 0; iShowImage(600, 200, ShinobiWidth-10, ShinobiHeight, shinobi_Victory_L_1); }
	else if (P2SelectedChar == 5){ P2PickRevtan = 0;  iShowImage(600, 200, RevtanWidth, RevtanHeight,  revtan_Victory_L_1); }
		
	/*
		P1PickTanjiro = 0;
		P2PickTanjiro = 0;
		*/
		//iShowImage(0, 0, 1280, 720, TrainingGround);
}

void Player1win()
{
	if(GameOver)
	{
		if (P1SelectedChar == 0) 
		{
			P1PickGojo = 0 ;
			if(P1LeftSide) iShowImage(P1GojoX, 100, GojoWidth, GojoHeight,  gojo_Victory_L_1);
			else if(P1LeftSide) iShowImage(P1GojoX, 100, GojoWidth, GojoHeight,  gojo_Victory_R_1);
	}
	if (P1SelectedChar == 1) 
		{
			P1PickGoku = 0 ;
			if(P1LeftSide) iShowImage(P1GokuX, 100, GokuWidth, GokuHeight,  goku_Victory_L_1);
	else if(P1LeftSide) iShowImage(P1GokuX, 100, GokuWidth, GokuHeight,  goku_Victory_R_1);
	}
	if (P1SelectedChar == 2)
		{
			P1PickIchigo = 0 ;
			if(P1LeftSide) iShowImage(P1IchigoX, 100, IchigoWidth, IchigoHeight,  ichigo_Victory_L_1);
			else if(P1LeftSide) iShowImage(P1IchigoX, 100, IchigoWidth, IchigoHeight,  ichigo_Victory_R_1);
	}
	if (P1SelectedChar == 3) 
		{
			P1PickTanjiro = 0 ;
			if(P1LeftSide) iShowImage(P1TanjiroX, 100, TanjiroWidth, TanjiroHeight,  tanjiro_Victory_L_1);
			else if(P1LeftSide) iShowImage(P1TanjiroX, 100, TanjiroWidth, TanjiroHeight,  tanjiro_Victory_R_1);
	}
	if (P1SelectedChar == 4)
		{
			P1PickKunoichi = 0 ;
			if(P1LeftSide) iShowImage(P1KunoichiX, 100, KunoichiWidth, KunoichiHeight,  kunoichi_Victory_L_1);
			else if(P1LeftSide) iShowImage(P1KunoichiX, 100, KunoichiWidth, KunoichiHeight,  kunoichi_Victory_R_1);
	}
	if (P1SelectedChar == 5)
		{
			P1PickJinsakai = 0 ;///////////////////////////////////////////
			if(P1LeftSide) iShowImage(P1JinsakaiX, 100, JinsakaiWidth, JinsakaiHeight,  jinsakai_Victory_L_1);
			else if(P1LeftSide) iShowImage(P1JinsakaiX, 100, JinsakaiWidth, JinsakaiHeight,  jinsakai_Victory_R_1);
		}
	

// Player 2 Lose

	if (P2SelectedChar == 0) 
		{
			P2PickRevIchigo = 0;
			if(P2LeftSide) iShowImage(P2RevIchigoX, 100, 150, 70, revichigo_Lose_L_1);
	else if(P2RightSide) iShowImage(P2RevIchigoX, 100, 150, 70,  revichigo_Lose_R_1);
		}
	if (P2SelectedChar == 1) 
	{
		P2PickGoku = 0;
		if(P2LeftSide) iShowImage(P2GokuX, 100, 150, 70,  goku_Lose_L_1);
	else if(P2RightSide) iShowImage(P2GokuX, 100, 150, 70,  goku_Lose_R_1);
	}

	if (P2SelectedChar == 2) 
		{
			P2PickAk = 0;
			if(P2LeftSide) iShowImage(P2AkX, 100, 150, 70, ak_Lose_L_1);
			else if(P2RightSide) iShowImage(P2AkX, 100, 150, 70,  ak_Lose_R_1);
	}
	if (P2SelectedChar == 3) 
		{
			P2PickGhost = 0;/////////////////////////////////////////////////
			if(P2LeftSide) iShowImage(P2GhostX, 100, 150, 70, ghost_Lose_L_1);
			else if(P2RightSide) iShowImage(P2GhostX, 100, 150, 70, ghost_Lose_R_1);
	}
	if (P2SelectedChar == 4) 
		{
			P2PickShinobi = 0;
			if(P2LeftSide) iShowImage(P2ShinobiX, 100, 150, 70, shinobi_Lose_L_1);
			else if(P2RightSide) iShowImage(P2ShinobiX, 100, 150, 70,  shinobi_Lose_R_1);
	}
	if (P2SelectedChar == 5) 
		{
			P2PickRevtan = 0;
			if(P2LeftSide) iShowImage(P2RevtanX, 100, 150, 70, revtan_Lose_L_1);
			else if(P2RightSide) iShowImage(P2RevtanX, 100, 150, 70,  revtan_Lose_R_1);
	}



	iSetColor(255, 255,255);
	iText(400, 450, "Player One Win");
	iText(400, 400, "Tap the screen to Continue;");




	//P1PickTanjiro = 0;
	//P2PickTanjiro = 0;
	//if(P1LeftSide) iShowImage(P1TanjiroX, 100, TanjiroWidth, TanjiroHeight,  tanjiro_Victory_L_1);
	//else if(P1LeftSide) iShowImage(P1TanjiroX, 100, TanjiroWidth, TanjiroHeight,  tanjiro_Victory_R_1);

	//if(P1LeftSide) iShowImage(P2TanjiroX, 100, 150, 70,  tanjiro_Lose_L_1);
	//else if(P1RightSide) iShowImage(P2TanjiroX, 100, 150, 70,  tanjiro_Lose_R_1);

	if(P1score == 1)
		{
			
			gameState = 3;
					
			
			//iShowImage(600, 200, TanjiroWidth, TanjiroHeight,  tanjiro_Victory_R_1);
		}
	}
}

void Player1Victory()
{
	Player1Pick = 0;
			Player2Pick = 0;
			
			iShowImage(0, 0, 1280, 720, Player1Win);

			//iShowImage(0, 0, 1280, 720, Player2Win);
			if (P1SelectedChar == 0){  P1PickGojo = 0 ; iShowImage(600, 200, GojoWidth, GojoHeight,  gojo_Victory_R_1);}
			if (P1SelectedChar == 1){  P1PickGoku = 0 ;  iShowImage(600, 200, GokuWidth, GokuHeight,  goku_Victory_R_1);}
			if (P1SelectedChar == 2){  P1PickIchigo = 0 ;  iShowImage(600, 200, IchigoWidth, IchigoHeight,  ichigo_Victory_R_1);}
			if (P1SelectedChar == 3){  P1PickTanjiro = 0 ; iShowImage(600, 200, TanjiroWidth, TanjiroHeight,  tanjiro_Victory_R_1);}
			if (P1SelectedChar == 4){  P1PickKunoichi = 0 ; iShowImage(600, 200, KunoichiWidth, KunoichiHeight,  kunoichi_Victory_R_1);}
			if (P1SelectedChar == 5){  P1PickJinsakai = 0 ;iShowImage(600, 200, JinsakaiWidth, JinsakaiHeight,  jinsakai_Victory_R_1);}
	

	if (P2SelectedChar == 0){ P2PickRevIchigo = 0;}
	if (P2SelectedChar == 1){ P2PickGoku = 0; }
	if (P2SelectedChar == 2){ P2PickAk = 0; }
	if (P2SelectedChar == 3){ P2PickGhost = 0;} /////
	if (P2SelectedChar == 4){ P2PickShinobi = 0; }
	if (P2SelectedChar == 5){ P2PickRevtan = 0;}	
}


void GamerOverNow()
{
	if(P1Health <= 0)
		{
			GameOver = true;
			Player2win();

		}
	if(P2Health <= 0)
		{
			GameOver = true;
			Player1win();

		}
	if(timeLeft <= 0)
	{
		if(P1Health < P2Health)
			{
			GameOver = true;
			Player2win();

			}
		else if(P1Health >= P2Health)
			{
			GameOver = true;
			Player1win();

			}
	}

}


void playsound()
{
	if(PlayS)
	{
	if(FrontPage | FirstPage | SecondPage | ThirdPage)
		PlaySound(TEXT("image/BGM/BGM1.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP); 
	else if(TrainingPart == 1)
		PlaySound(TEXT("image/BGM/BGM2.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP); 
	else if(selectedMap == 0)
		PlaySound(TEXT("image/BGM/1.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP); 
	else if(selectedMap == 1)
		PlaySound(TEXT("image/BGM/2.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP); 
	else if(selectedMap == 2)
		PlaySound(TEXT("image/BGM/3.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP); 
	else if(selectedMap == 3)
		PlaySound(TEXT("image/BGM/4.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP); 
	else if(selectedMap == 4)
		PlaySound(TEXT("image/BGM/5.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
	else if(selectedMap == 5)
		PlaySound(TEXT("image/BGM/6.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP); 
	else if(cAboutus)
		PlaySound(TEXT("image/BGM/aboutUs.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP); 
	}
}




void iDraw()
{
	iClear();
	ShowMenuPage();
	if(TrainingPart == 1)
	{
	
	if(Player1Pick == 1 | TrainingPhase)
	
	{
		if(P1PickGoku == 1 | TrainingPhase)
		{
			P1GokuX = P1x;
			P1GokuY = P1up + P1down;

			playerOneGoku();
		}
		P1powerBar();
		if(!TrainingPhase)
		{
		P1healthBar();
		//P1powerBar();

		if(P1Health <= 0)
		{
			GameOver = true;
			//Player2win();

		}
		}

	

	}

	
		
	
	if(Player2Pick == 1 | TrainingPhase)
	{
		if(P2PickGoku == 1 | TrainingPhase)
		{
		P2GokuX = P2x;
		P2GokuY = P2up + P2down;

		playerTwoGoku();
		}
		P2powerBar();
		if(!TrainingPhase)
		{
		P2healthBar();
		//P2powerBar();

		if(P2Health <= 0)
		{
			GameOver = true;
			//Player1win();

		}
		}
	}
	}
	//iShowImage(50, 100, 50, 50, pfp);
    //iShowImage(1100, 100, 50, 50, pfp);

	/*  
	 //ninja girl 
	if (Player1Pick == 1) {
        if (P1PickKunoichi == 1) {
            P1KunoichiX = P1x;
            P1KunoichiY = P1up + P1down;
            playerOneKunoichi();
        }
		
		P1healthBar();
		P1powerBar();

		if(P1Health <= 0)
		{
			GameOver = true;
			Player2win();

		}

    }

    if (Player2Pick == 1) {
        if (P2PickShinobi == 1) {
            P2ShinobiX= P2x;
            P2ShinobiY = P2up + P2down;
            playerTwoShinobi();
        }
		P2healthBar();
		P2powerBar();

		if(P2Health <= 0)
		{
			GameOver = true;
			Player1win();


		}
	}
*/






	if (gameState == 0) drawCharacterSelection();
    else if (gameState == 1) drawMapSelection();
    else if (gameState == 2) drawFightingPage();
	else if(gameState == 3) 
	{
		if(P1score == 1)
			Player1Victory();
		else if (P2score == 1)
			Player2Victory();
	}

	if(gameState == 2)
	{
	if(Player1Pick == 1 && Player2Pick == 1)
	{

	int tens = timeLeft / 10;
    int ones = timeLeft % 10;

    // Draw timer sprites at a fixed position
    iShowImage(600, 600, 50, 50, getDigitImage(tens));  // Tens place
    iShowImage(650, 600, 50, 50, getDigitImage(ones));  // Ones place

    // Display Game Over when timer reaches 0
    

	}
	
	if (timeLeft <= 0) GamerOverNow();
	}


	//iShowImage(1220, 645, 75, 75, audioicon);
}

// Function for Menu;
void ShowMenuPage()
{
	if(FrontPage) 
	{
	iShowImage(0, 0 ,1280, 720, StartMenu);
	//iText(600, 100, "Press Right Mouse Button to Start.");
	}
	if(FirstPage) iShowImage(0, 0 ,1280, 720, FirstMenu);
	if(SecondPage) iShowImage(0, 0 ,1280, 720, SecondMenu);
	if(ThirdPage) iShowImage(0, 0 ,1280, 720, ThirdMenu);
	if(ForthPage) iShowImage(0, 0 ,1280, 720, ForthMenu);

	if(TrainingPhase && TrainingPart == 1) iShowImage(0, 0, 1280, 720, TrainingGround);

	if(CollectionCharacters) iShowImage(0, 0, 1280, 720, Ccharacter);
	if(CollectionArena) iShowImage(0, 0, 1280, 720, Carena);
	if(CollectionAboutus) iShowImage(0, 0, 1280, 720, CAboutUs);
	if(cCharacter) iShowImage(0, 0, 1280, 720, CharacterShow);
	if(cAboutus) iShowImage(0, 0, 1280, 720, AboutUs);
	if(cArena) iShowImage(0, 0, 1280, 720, arena);

	
		


}








/*function iMouseMove() is called when the user presses and drags the mouse.
(mx, my) is the position where the mouse pointer is.
*/


void iMouseMove(int mx, int my)
{
	

	 
}
//*******************************************************************ipassiveMouse***********************************************************************//
void iPassiveMouseMove(int mx, int my)
{
	
}

void iMouse(int button, int state, int mx, int my)
{
	
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{	
		if(mx > 1220 && mx < 1280 && my > 645 && my < 720)
		{
			if(!PlayS)
				{
					PlayS = false;
					playsound();
			}
			if(PlayS)
			{
				PlayS = true;
					playsound();
			}


		}
		//for map selection and character selection
		if (gameState == 0) {
            // Player 1 Selection
			if(mx > 0 && mx < 75 && my > 645 && my < 720) { gameState = -1; FirstPage=true;}
            if (mx >= 36 && mx <= 192 && my >= 368 && my <= 554)
				{
					P1SelectedChar = 0;
					Player1Pick = 1;
					P1PickGojo = 1;
					P1RightSide = true;
				}
            if (mx>217 && mx < 370 && my > 365 && my < 535)
				{
					P1SelectedChar = 1;
					Player1Pick = 1;
					P1PickGoku = 1;
					P1RightSide = true;
				}
            if (mx >= 428 && mx <=578  && my >= 360 && my <= 550)
				{
					P1SelectedChar = 2;
					Player1Pick = 1;
					P1PickIchigo = 1;
					P1RightSide = true;
				}

            if (mx >= 50 && mx <= 160 && my >= 145 && my <= 311) 
				{
					P1SelectedChar = 3;
					Player1Pick = 1;
					P1PickTanjiro = 1;
					P1RightSide = true;
				}
            
			if (mx >= 229 && mx <= 379 && my >= 170 && my <= 320)
				{
					P1SelectedChar = 4;
					Player1Pick = 1;
					P1PickKunoichi = 1;
					P1RightSide = true;
				}
            if (mx >= 411 && mx <= 550 && my >= 168 && my <= 300) ///////////////////////////////////////////////////////// 
				{
					P1SelectedChar = 5;
					Player1Pick = 1;
				    P1PickJinsakai = 1;
					P1RightSide = true;
				}

            // Player 2 Selection
            if (mx >= 700 && mx <= 850 && my >= 409 && my <= 560) 
				{
					P2SelectedChar = 0;
					Player2Pick = 1;
					P2PickRevIchigo = 1;
					P2LeftSide = true;
					
				}
            if (mx >= 869 && mx <= 1019 && my >= 400 && my <= 550)
				{
					P2SelectedChar = 1;
					Player2Pick = 1;
					P2PickGoku = 1;
					P2LeftSide = true;
					
				}
            if (mx >= 1074 && mx <= 1225 && my >= 399 && my <= 550)
				{
					P2SelectedChar = 2;
					Player2Pick = 1;
					P2PickAk = 1;
					P2LeftSide = true;
					
				}
            if (mx >= 697 && mx <= 850 && my >= 177 && my <= 320) 
				{
					P2SelectedChar = 3;
					Player2Pick = 1;
					P2PickGhost = 1;
					P2LeftSide = true;
					
				}
            if (mx >= 885 && mx <= 1035 && my >= 177 && my <= 320)
				{
					P2SelectedChar = 4;
					Player2Pick = 1;
					P2PickShinobi = 1;
					P2LeftSide = true;
					
				}
            if (mx >= 1072 && mx <= 1220 && my >= 183 && my <= 233)
				{
					P2SelectedChar = 5;
					Player2Pick = 1;
					P2PickRevtan= 1;
					P2LeftSide = true;
					
				}
			if ( gameState == 0 && P1SelectedChar != -1 && P2SelectedChar != -1 && mx >= 1050 && mx <= 1250 && my >= 40 && my <= 90) {
                gameState = 1;
			
            }
        }
		
			
		 
        else if (gameState == 1) {
			if(mx > 0 && mx < 75 && my > 645 && my < 720) gameState = 0;

            if (mx >= 100 && mx <= 400 && my >= 450 && my <= 650) selectedMap = 0;
            if (mx >= 500 && mx <= 800 && my >= 450 && my <= 650) selectedMap = 1;
            if (mx >= 900 && mx <= 1200 && my >= 450 && my <= 650) selectedMap = 2;
            if (mx >= 100 && mx <= 400 && my >= 150 && my <= 350) selectedMap = 3;
            if (mx >= 500 && mx <= 800 && my >= 150 && my <= 350) selectedMap = 4;
            if (mx >= 900 && mx <= 1200 && my >= 150 && my <= 350) selectedMap = 5;
			if (gameState == 1 && selectedMap != -1&& mx >= 1050 && mx <= 1250 && my >= 40 && my <= 90){
				gameState = 2;
				playsound();
			}

        }

		else if(gameState == 2 && GameOver && mx > 0 && mx < 1280)
		{
			if(P1Health < P2Health) P2score++;
			else if(P1Health > P2Health) P1score++;


			Player1Pick = 1;
			//P1PickTanjiro = 1;
			P1RightSide = true;
			Player2Pick = 1;
			//P2PickTanjiro = 1;
			P2LeftSide = true;
			GameOver = false;
			P1Health = 100;
			P2Health = 100;
			P1x = 200, P2x = 900;
			timeLeft = 45;


			if (P1SelectedChar == 0) 
		{
			P1PickGojo = 1 ;
	}
	if (P1SelectedChar == 1) 
		{
			P1PickGoku = 1 ;
			
	}
	if (P1SelectedChar == 2)
		{
			P1PickIchigo = 1 ;
	}
	if (P1SelectedChar == 3) 
		{
			P1PickTanjiro = 1 ;
			
	}
	if (P1SelectedChar == 4)
		{
			P1PickKunoichi = 1 ;
			
	}
	if (P1SelectedChar == 5)
		{
			P1PickJinsakai = 1 ;///////////////////////////////////////////
			
		}
	

// Player 2 Lose

	if (P2SelectedChar == 0) 
		{
			P2PickRevIchigo = 1;
			
		}
	if (P2SelectedChar == 1) 
	{
		P2PickGoku = 1;
		
	}

	if (P2SelectedChar == 2) 
		{
			P2PickAk = 1;
			
	}
	if (P2SelectedChar == 3) 
		{
			P2PickGhost = 1;/////////////////////////////////////////////////
			
	}
	if (P2SelectedChar == 4) 
		{
			P2PickShinobi = 1;
			
	}
	if (P2SelectedChar == 5) 
		{
			P2PickRevtan = 1;
			
	}

		}




	if(gameState == 3 && GameOver && mx > 0 && mx < 220 && my > 420 && my < 490)
	{
		gameState = 2;
		P1score = 0;
		P2score = 0;
		Player1Pick = 1;
			//P1PickTanjiro = 1;
			P1RightSide = true;
			Player2Pick = 1;
			//P2PickTanjiro = 1;
			P2LeftSide = true;
			GameOver = false;
			P1Health = 100;
			P2Health = 100;
			P1x = 200, P2x = 900;

			timeLeft = 45;


			if (P1SelectedChar == 0) 
		{
			P1PickGojo = 1 ;
	}
	if (P1SelectedChar == 1) 
		{
			P1PickGoku = 1 ;
			
	}
	if (P1SelectedChar == 2)
		{
			P1PickIchigo = 1 ;
	}
	if (P1SelectedChar == 3) 
		{
			P1PickTanjiro = 1 ;
			
	}
	if (P1SelectedChar == 4)
		{
			P1PickKunoichi = 1 ;
			
	}
	if (P1SelectedChar == 5)
		{
			P1PickJinsakai = 1 ;///////////////////////////////////////////
			
		}
	

// Player 2 Lose

	if (P2SelectedChar == 0) 
		{
			P2PickRevIchigo = 1;
			
		}
	if (P2SelectedChar == 1) 
	{
		P2PickGoku = 1;
		
	}

	if (P2SelectedChar == 2) 
		{
			P2PickAk = 1;
			
	}
	if (P2SelectedChar == 3) 
		{
			P2PickGhost = 1;/////////////////////////////////////////////////
			
	}
	if (P2SelectedChar == 4) 
		{
			P2PickShinobi = 1;
			
	}
	if (P2SelectedChar == 5) 
		{
			P2PickRevtan = 1;
			
	}
	}



	if(gameState == 3 && GameOver && mx > 0 && mx < 220 && my > 190 && my < 250) 
		{
			gotoMainPage();
			P1score = 0;
			P2score = 0;
			P1Health = 100;
			P2Health = 100;
			P1x = 200, P2x = 900;
			timeLeft = 45;


		}

	if(Menu == 1)
	{
		if (FrontPage)
            gotoMainPage();
        else if (FirstPage)
        {	
			
			if(mx>217 && mx < 1030 && my > 162 && my < 615) {
			drawCharacterSelection();
			FirstPage=false;
			//gotoCharacterSelectionPage();


			gameState = 0;
			//cout<<gameState;
			iDraw();
			
			}

			//if(mx>217 && mx < 1030 && my > 162 && my < 615) exit(0);
            if (mx > 70 && mx < 145 && my > 320 && my < 450) gotoExitPage();
            if (mx > 1125 && mx < 1200 && my > 300 && my < 425) gotoSecondPage();
        }
        else if (SecondPage)
        {	///////////
			
            if (mx > 70 && mx < 145 && my > 320 && my < 450) gotoMainPage();
            if (mx > 1125 && mx < 1200 && my > 300 && my < 425) gotoThirdPage();
			if(mx > 180 && mx < 1090 && my > 121 && my < 628) gotoTrainingGround();
        }
        else if (ThirdPage)
        {
			if(mx > 180 && mx < 1090 && my > 121 && my < 628) gotoCollectionTab();
            if (mx > 70 && mx < 145 && my > 320 && my < 450) gotoSecondPage();
            if (mx > 1125 && mx < 1200 && my > 300 && my < 425) gotoExitPage();
        }
        else if (ForthPage)
        {
			if(mx > 180 && mx < 1090 && my > 121 && my < 628) exit(0);
            if (mx > 70 && mx < 145 && my > 320 && my < 450) gotoThirdPage();
            if (mx > 1125 && mx < 1200 && my > 300 && my < 425) gotoMainPage();
        }

	}

		if(Menu == 2)
		{
		if(CollectionCharacters)
			{
				if(mx > 0 && mx < 75 && my > 645 && my < 720) gotoThirdPage();
				if(mx > 70 && mx < 145 && my > 320 && my < 450) gotoArenaTab();
				if(mx > 180 && mx < 1090 && my > 121 && my < 628) gotoCcharater();
				if (mx > 1125 && mx < 1200 && my > 300 && my < 425)gotoAboutUs();
			}
		else if(CollectionArena)
			{
				if(mx > 0 && mx < 75 && my > 645 && my < 720) gotoThirdPage();
				if(mx > 70 && mx < 145 && my > 320 && my < 450) gotoAboutUs();
				if(mx > 180 && mx < 1090 && my > 121 && my < 628) gotoCarena();
				if (mx > 1125 && mx < 1200 && my > 300 && my < 425)gotoCollectionTab();
			}

		else if(CollectionAboutus)
			{
				if(mx > 0 && mx < 75 && my > 645 && my < 720) gotoThirdPage();
				if(mx > 70 && mx < 145 && my > 320 && my < 450) gotoArenaTab();
				if(mx > 180 && mx < 1090 && my > 121 && my < 628) gotoCaboutus();
				if (mx > 1125 && mx < 1200 && my > 300 && my < 425) gotoCollectionTab();
			}

		if(cCharacter)
		{
			if(mx > 0 && mx < 75 && my > 645 && my < 720) gotoCollectionTab();
		}

		if(cAboutus)
		{
			if(mx > 0 && mx < 75 && my > 645 && my < 720) gotoAboutUs();
		}

		if(cArena)
		{
			if(mx > 0 && mx < 75 && my > 645 && my < 720) gotoArenaTab();
		}
		
		}
		
		if(mx > 0 && mx < 75 && my > 645 && my < 720) cout<< CollectionCharacters << cCharacter <<  endl;
		



		if(TrainingPart == 1 && mx > 0 && mx < 75 && my > 645 && my < 720) gotoSecondPage();
		

		/*

			if(TrainingPhase && TrainingPart == 1){

				P1x = 200;
				P2x = 900;
			Player1Pick = 1;
			Player2Pick = 1;
			P2PickGoku = 1;
			P1PickGoku = 1;
			P2PickGoku = 1;
			P2LeftSide = true;
			P1RightSide = true;
			TrainingPhase = true;
			}
			else
			{
				
				Player1Pick = 0;
			Player2Pick = 0;
				P1PickGoku = 0;
			P2PickGoku = 0;
				P2LeftSide = false;
				P1RightSide = false;
				//TrainingPhase = false;
			}
		}
		
    */
	cout << mx << " " << my << endl;
		
	}
	
	
	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		
	}
}

/*
function iKeyboard() is called whenever the user hits a key in keyboard.
key- holds the ASCII value of the key pressed.
*/


void iKeyboard(unsigned char key)
{	 
	
	
	//if (key == 'm' && gameState == 0 && P1SelectedChar != -1 && P2SelectedChar != -1) gameState = 1;
    //if (key == 'f' && gameState == 1 && selectedMap != -1) gameState = 2;



	if (key == 27) 
	{ 
		if (isPaused) {
            // Resume all timers
            iResumeTimer(0);
            iResumeTimer(1);
            iResumeTimer(2);
            // iResumeTimer(3); // Uncomment if you want to resume attack2
            iResumeTimer(4);
            iResumeTimer(5);
            iResumeTimer(6);
            iResumeTimer(7);
            iResumeTimer(8);
            iResumeTimer(9);
            iResumeTimer(10);
            isPaused = false;
        } else {
            // Pause all timers
            iPauseTimer(0);
            iPauseTimer(1);
            iPauseTimer(2);
            // iPauseTimer(3); // Uncomment if you want to pause attack2
            iPauseTimer(4);
            iPauseTimer(5);
            iPauseTimer(6);
            iPauseTimer(7);
            iPauseTimer(8);
            iPauseTimer(9);
            iPauseTimer(10);
            isPaused = true;
        }
    
    }


	// Player One Control-------------------------------------------------------------

		if (key == 'p')
		{
			//if(l >=0 && l <=20)
			if(P1Attacking1 == 0 && !P1jump && !P1_damage && !P1_Defend && !P1_Power)
			{

			P1_Idle = 0;
			P1_Walk = 0;
			P1Attacking1 = 1;
			//at1 = 0;
			P1attackingP2 = true;
			}
		
		}
		if(key == 'o')
		{
			//if(l >=0 && l <=20)
			if(P1Attacking2 == 0 && P1power_up >= 30 && P1range_Attack == 0 && !P1_damage && !P1_Defend && !P1_Power)
			{
				P1blx = P1x;
				P1bly = P1up + P1down;
				 P1power_up=  P1power_up - 30;
				 P1_Idle = 0;
				P1Attacking2 = 1;
				P1range_Attack = 1;
				if(P1RightSide)
					P1right_Side_range = 1;
				if(P1LeftSide)
					P1left_Side_range = 1;
			
			}
		}

		if (key == 'i')
		{
			if(!P1_Defend && !P1jump && !P1_damage && P1Attacking1 == 0  && P1Attacking2 == 0)
			{
				P1_Defend = true;
				P1_Idle = 0;
		
			}
		}

		if ( key == 'l' )
		{
			if(!P1_Power && !P1jump && !P1_damage && P1power_up <= 90 && P1Attacking1 == 0  && P1Attacking2 == 0)
			{
				P1_Idle = 0;
				P1_Power = true;
			
			}
		
		}

		if( key == 'k')
		{
			if(!P1_Ultimate && P1power_up >= 100 && !P1jump && !P1_damage && !P1_Defend && P1Attacking1 == 0  && P1Attacking2 == 0)
			{
				P1KAMEHAMEHA = P1x;
				P1power_up=  P1power_up - 100;
				P1_Idle = 0;
				P1_Ultimate = true;
				P1ulti++;
				if(P1RightSide)
					P1RightSideUltimate = true;
				if(P1LeftSide)
					P1LeftSideUltimate = true;
			}
	
		}	



// Player Two Control-------------------------------------------------------------

		if (key == '1')
		{
			//if(l >=0 && l <=20)
			if(P2Attacking1 == 0 && !P2jump && !P2_damage && !P2_Defend && !P2_Power)
			{

			P2_Idle = 0;
			P2_Walk = 0;
			P2Attacking1 = 1;
			//at1 = 0;
			P2attackingP1 = true;
			}
		
		}
		if(key == '2')
		{
			//if(l >=0 && l <=20)
			if(P2Attacking2 == 0 && P2power_up >= 30 && P2range_Attack == 0 && !P2_damage && !P2_Defend && !P2_Power)
			{
				P2blx = P2x;
				P2bly = P2up + P2down;
				 P2power_up=  P2power_up - 30;
				 P2_Idle = 0;
				P2Attacking2 = 1;
				P2range_Attack = 1;
				if(P2RightSide)
					P2right_Side_range = 1;
				if(P2LeftSide)
					P2left_Side_range = 1;
			
			}
		}

		if (key == '6')
		{
			if(!P2_Defend && !P2jump && !P2_damage && P2Attacking1 == 0  && P2Attacking2 == 0)
			{
				P2_Defend = true;
				P2_Idle = 0;
		
			}
		}

		if ( key == '3' )
		{
			if(!P2_Power && !P2jump && !P2_damage && P2power_up <= 90 && P2Attacking1 == 0  && P2Attacking2 == 0)
			{
				P2_Idle = 0;
				P2_Power = true;
			
			}
		
		}
		
		if( key == '4')
		{
			if(!P2_Ultimate && P2power_up >= 100 && !P2jump && !P2_damage && !P2_Defend && P2Attacking1 == 0  && P2Attacking2 == 0)
			{
				P2KAMEHAMEHA = P2x;
				P2power_up=  P2power_up - 100;
				P2_Idle = 0;
				P2_Ultimate = true;
				P2ulti++;
				if(P2RightSide)
					P2RightSideUltimate = true;
				if(P2LeftSide)
					P2LeftSideUltimate = true;
			}
	
		}	



		if(key == 'a' )
		{
				if(!P1jump && P1x >= 0 && !P1_damage && !GameOver && P1Attacking1 == 0  && P1Attacking2 == 0 && !P1_Defend && !P1_Ultimate && !P1_Power)
			{
				P1LeftSide = true;
				P1RightSide = false;
				P1_Idle = 0;
				P1_Walk = 1;
					P1x= P1x -  40;
					P1i++;
				if(P1i>=3) 
				{
						P1i=0;
				}
				//Gokux = Gokux - 50;
			}
		}

		if(key == 'd')
		{
			if(!P1jump && P1x <= 1232 && !P1_damage && !GameOver && P1Attacking1 == 0  && P1Attacking2 == 0 && !P1_Defend && !P1_Ultimate && !P1_Power)
		{
			P1RightSide = true;
			P1LeftSide = false;
			P1_Idle = 0;
			P1_Walk = 1;
				P1x= P1x + 40;
				P1i++;
			if(P1i>=3) 
			{
					P1i=0;
			}
		}
		}

		if(key == 'w')
		{
			if(!P1jump && !P1_damage)
		{
		P1jump = true;
		P1_Walk = 0;
		P1_Idle = 0;
		}
		}

		if (key == '\r')
		{
		
		}
	
	
}

/*
function iSpecialKeyboard() is called whenver user hits special keys like-
function keys, home, end, pg up, pg down, arraows etc. you have to use
appropriate constants to detect them. A list is:
GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
*/
void iSpecialKeyboard(unsigned char key)
{

	
	if (key == GLUT_KEY_RIGHT)
	{
		if(!P2jump && P2x <= 1232 && !P2_damage && !GameOver && P2Attacking1 == 0 && P2Attacking2 == 0 && !P2_Defend && !P2_Ultimate && !P2_Power)
		{
			P2RightSide = true;
			P2LeftSide = false;
			P2_Idle = 0;
			P2_Walk = 1;
				P2x= P2x + 40;
				P2i++;
			if(P2i>=3) 
			{
					P2i=0;
			}
		}


		
		
	
	}
	if (key == GLUT_KEY_LEFT)
	{
		if(!P2jump && P2x >= 0 && !P2_damage && !GameOver  && P2Attacking1 == 0  && P2Attacking2 == 0 && !P2_Defend && !P2_Ultimate && !P2_Power) 
		{
			P2LeftSide = true;
			P2RightSide = false;
			P2_Idle = 0;
			P2_Walk = 1;
				P2x= P2x -  40;
				P2i++;
			if(P2i>=3) 
			{
					P2i=0;
			}
			//Gokux = Gokux - 50;
		}
		
	}

	if (key == GLUT_KEY_UP)
	{
		

		if(!P2jump && !P2_damage)
			{
				P2jump = true;
				P2_Idle = 0;
				P2_Walk = 0;
			}
	}


	
	if (key == GLUT_KEY_HOME)
	{
		
	}
	
}


void gotoMainPage()
{
	FrontPage = false; 
	FirstPage = true;
	SecondPage = false;
	ThirdPage = false;
	ForthPage = false;
	gameState = -1;
	selectedMap = -1;
	GameOver = false;
	playsound();

}

void gotoSecondPage()
{
	TrainingPhase = false;
	TrainingPart = 0;
	
	FirstPage = false;
	SecondPage = true;
	ThirdPage = false;
				Player1Pick = 0;
				Player2Pick = 0;
				P1PickGoku = 0;
				P2PickGoku = 0;
				P2LeftSide = false;
				P1RightSide = false;
				P1x = 200;
				P2x = 900;
				P1Health = 100;
				P2Health = 100;
				P1score = 0;
				P2score = 0;
				playsound();
	
}

void gotoTrainingGround()/////////////////////////
{
	SecondPage = false;
	TrainingPhase = true;
	TrainingPart = 1;
				P1x = 200;
				P2x = 900;
			Player1Pick = 1;
			Player2Pick = 1;
			P2PickGoku = 1;
			P1PickGoku = 1;
			P2PickGoku = 1;
			P2LeftSide = true;
			P1RightSide = true;

			playsound();
}

void gotoThirdPage()
{
	Menu = 1;
	FrontPage = false; 
	FirstPage = false;
	SecondPage = false;
	ThirdPage = true;
	ForthPage = false;
	CollectionCharacters = false; 
	CollectionAboutus = false;
	CollectionArena = false;
	playsound();
}

void gotoCollectionTab()
{
	Menu = 2;
	ThirdPage = false;
	CollectionCharacters = true;
	CollectionArena = false;
	CollectionAboutus = false;
	cCharacter = false;
}

void gotoArenaTab()
{
	Menu = 2;
	CollectionCharacters = false; 
	CollectionArena = true;
	CollectionAboutus = false;
	cArena = false;
}
void gotoAboutUs()
{
	Menu = 2;
	CollectionCharacters = false; 
	CollectionArena = false;
	CollectionAboutus = true;
	cAboutus = false;
	
}


void gotoCcharater()
{
	CollectionCharacters = false;
	cCharacter = true;
}
void gotoCaboutus()
{
	CollectionAboutus = false;
	cAboutus = true;
	playsound();
}
void gotoCarena()
{
	CollectionArena = false;
	cArena = true;
}

void gotoExitPage()
{
	FrontPage = false; 
	FirstPage = false;
	SecondPage = false;
	ThirdPage = false;
	ForthPage = true;
}
void gotoCharacterSelectionPage(){
	FrontPage = false; 
	FirstPage = false;
	SecondPage = false;
	ThirdPage = false;
	ForthPage = false;
	gameState=0;


}

void drawCharacterSelection(){
	
	iShowImage(0, 0, 1280, 720, playerselectionimg);
	iShowImage(0, 645, 75, 75, BackIcon);
	//iShowImage(0, 645, 75, 75, audioicon);
    //iSetColor(255, 255, 255);
	//iRectangle(220, 412, 150, 127);

	//iFilledRectangle(0,0,1280,720);
    //iText(500, 650, "Character Selection", GLUT_BITMAP_TIMES_ROMAN_24);
	/*
    // Player 1 Characters
    iShowImage(50, 500, 100, 100, pfpGojo);
    iShowImage(200, 500, 100, 100, pfpNaruto);
    iShowImage(350, 500, 100, 100, pfpIchigo);
    iShowImage(50, 350, 100, 100, pfpLuffy);
    iShowImage(200, 350, 100, 100, pfpZoro);
    iShowImage(350, 350, 100, 100, pfpTanjiro);

    // Player 2 Characters
    iShowImage(830, 500, 100, 100, pfpAk);
    iShowImage(980, 500, 100, 100, pfpSasuke);
    iShowImage(1130, 500, 100, 100, pfpGoku);
    iShowImage(830, 350, 100, 100, pfpVegeta);
    iShowImage(980, 350, 100, 100, pfpMadara);
    iShowImage(1130, 350, 100, 100, pfpItachi);
	*/
    // Selection indicators
	iSetColor(0, 0, 255);
    if (P1SelectedChar == 0) iRectangle(37, 412, 150, 127);
    if (P1SelectedChar == 1) iRectangle(220, 412, 150, 127);
    if (P1SelectedChar == 2) iRectangle(431, 411, 150, 127);
    if (P1SelectedChar == 3) iRectangle(37, 179, 150, 127);
    if (P1SelectedChar == 4) iRectangle(229, 170, 150, 127);
    if (P1SelectedChar == 5) iRectangle(414, 184, 150, 127);

    if (P2SelectedChar == 0) iRectangle(700, 409, 150, 127);
    if (P2SelectedChar == 1) iRectangle(869, 399, 150, 127);
    if (P2SelectedChar == 2) iRectangle(1074, 399, 150, 127);
    if (P2SelectedChar == 3) iRectangle(697,177 , 150, 127);
    if (P2SelectedChar == 4) iRectangle(885, 177, 150, 127);
    if (P2SelectedChar == 5) iRectangle(1072, 183, 150, 127);


	
    //iText(500, 50, "Press 'M' to Select Character", GLUT_BITMAP_TIMES_ROMAN_24);
	

	// Proceed button (only active when both players have selected)
    if (P1SelectedChar != -1 && P2SelectedChar != -1) {
        iSetColor(0, 255, 0);
        iFilledRectangle(1050, 40, 200, 50);
        iSetColor(255, 255, 255);
        iText(1107, 56, "Proceed", GLUT_BITMAP_HELVETICA_18);

    }


	/*
    if (key == 'm' && gameState == 0 && P1SelectedChar != -1 && P2SelectedChar != -1) gameState = 1;
    if (key == 'f' && gameState == 1 && selectedMap != -1) gameState = 2;
	*/

}

void drawMapSelection() {
    iShowImage(0, 0, 1280, 720, imgBackground1);
    iSetColor(255, 255, 255);
    iText(587, 675, "Map Selection", GLUT_BITMAP_TIMES_ROMAN_24);
	iShowImage(0, 645, 75, 75, BackIcon);
	//iShowImage(0, 645, 75, 75, audioicon);

    iShowImage(100, 450, 300, 200, mapImage1);
    iShowImage(500, 450, 300, 200, mapImage2);
    iShowImage(900, 450, 300, 200, mapImage3);
    iShowImage(100, 150, 300, 200, mapImage4);
    iShowImage(500, 150, 300, 200, mapImage5);
    iShowImage(900, 150, 300, 200, mapImage6);

	iSetColor(0, 58, 255);
	
	if (selectedMap == 0) iRectangle(100, 450, 300, 200);
    if (selectedMap == 1) iRectangle(500, 450, 300, 200);
    if (selectedMap == 2) iRectangle(900, 450, 300, 200);
    if (selectedMap == 3) iRectangle(100, 150, 300, 200);
    if (selectedMap == 4) iRectangle(500, 150, 300, 200);
    if (selectedMap == 5) iRectangle(900, 150, 300, 200);


	//iSetColor(0, 0, 255);
    //iText(500, 50, "Press 'F' to Start Fight", GLUT_BITMAP_TIMES_ROMAN_24);
	
	 if (selectedMap != -1) {
        iSetColor(0, 255, 0);
        iFilledRectangle(1050, 40, 200, 50);
        iSetColor(255, 255, 255);
        iText(1107, 56, "Start Fight", GLUT_BITMAP_HELVETICA_18);

    }

	
}


int getDigitImage(int digit) {
    if (digit == 0) return img0;
    if (digit == 1) return img1;
    if (digit == 2) return img2;
    if (digit == 3) return img3;
    if (digit == 4) return img4;
    if (digit == 5) return img5;
    if (digit == 6) return img6;
    if (digit == 7) return img7;
    if (digit == 8) return img8;
    if (digit == 9) return img9;
    return -1;
}


void idle()
{

	// For Player 1
	if(!P1jump && P1Attacking1 == 0 && P1Attacking2 == 0 && !P1_Defend && !P1_Power && !P1_Ultimate && !P1_damage)
	{
		if(P1idleNum > 1)
			P1idleNum = 0;
		else
			P1idleNum++;

	if (Player1Pick == 1 && P1_Walk == 1)
	{
		P1_Idle = 1;
		P1_Walk = 0;
	}

	}


	// For Player 2
	if(!P2jump && P2Attacking1 == 0 && P2Attacking2 == 0 && !P2_Defend && !P2_Power && !P2_Ultimate && !P2_damage)
	{
		if(P2idleNum > 1)
			P2idleNum = 0;
		else
			P2idleNum++;

	if (Player2Pick == 1 && P2_Walk == 1)
	{
		P2_Idle = 1;
		P2_Walk = 0;
	}

	}

}

void attack()
{
	// For Player One
	if(P1Attacking1 == 1)
	{
		P1AttackingTime1++;
		if(P1AttackingTime1 >= 1 && P1Attacking1 == 1)
		{
			P1AttackingTime1 = 0; 
			P1Attacking1 = 0 ;
			P1_Idle = 1;
		}
	}

	//For Player Two

	if(P2Attacking1 == 1)
	{
		P2AttackingTime1++;
		if(P2AttackingTime1 >= 1 && P2Attacking1 == 1)
		{
			P2AttackingTime1 = 0; 
			P2Attacking1 = 0 ;
			P2_Idle = 1;
		}
	}







	// For Player One
	if(P1Attacking2 == 1)
	{
		P1AttackingTime2++;
		if(P1AttackingTime2 >= 1 && P1Attacking2 == 1)
		{
			P1AttackingTime2 = 0; 
			P1Attacking2 = 0 ;
			P1_Idle = 1;
		}
	}


	// For Player Two
	if(P2Attacking2 == 1)
	{
		P2AttackingTime2++;
		if(P2AttackingTime2 >= 1 && P2Attacking2 == 1)
		{
			P2AttackingTime2 = 0; 
			P2Attacking2 = 0 ;
			P2_Idle = 1;
		}
	}





	
}


void jumper(){

// Player one

	if(P1jump && P1up <=10){
		if(P1RightSide)
		{
			if(P1x < 1232)
			P1x= P1x + 7;
		}
		else if(P1LeftSide)
		{
			if(P1x > 0)
			P1x = P1x - 7;
		}
		P1up= P1up+10;
		P1jumpPic1= 1;
	}
	else if(P1jump && P1up>= 10 && P1up <=100 ){
		if(P1RightSide)
		{
			if(P1x < 1232)
			P1x= P1x + 7;
		}
		else if(P1LeftSide)
		{
			if(P1x > 0)
			P1x = P1x - 7;
		}
		P1jumpPic1 = 0;
		P1jumpPic3= 1;
		P1up= P1up+5;
	}
	else if(P1jump && P1up >= 100 && P1down >= 0)
	{
		if(P1RightSide)
		{
			if(P1x < 1232)
			P1x= P1x + 7;
		}
		else if(P1LeftSide)
		{
			if(P1x > 0)
			P1x = P1x - 7;
		}
		P1down= P1down-10;
		P1jumpPic3 = 0;
		P1jumpPic2 = 1;
	}
	else if(P1jump && P1up>=100 && P1down<=0)
	{
		P1jumpPic2 =0;
		P1up=0;
		P1down=100;
		P1jump = false;
		P1_Idle = 1;
	}



// Player Two

	if(P2jump && P2up <=10){
		if(P2RightSide)
		{
			if(P1x < 1232)
			P2x= P2x + 7;
		}
		else if(P2LeftSide)
		{
			if(P2x > 0)
			P2x = P2x - 7;
		}
		P2up= P2up+10;
		P2jumpPic1= 1;
	}
	else if(P2jump && P2up>= 10 && P2up <=100 ){
		if(P2RightSide)
		{
			if(P2x < 1232)
			P2x= P2x + 7;
		}
		else if(P2LeftSide)
		{
			if(P2x > 0)
			P2x = P2x - 7;
		}
		P2jumpPic1 = 0;
		P2jumpPic3= 1;
		P2up= P2up + 5;
	}
	else if(P2jump && P2up >= 100 && P2down >= 0)
	{
		if(P2RightSide)
		{
			if(P2x < 1232)
			P2x= P2x + 7;
		}
		else if(P2LeftSide)
		{
			if(P2x > 0)
			P2x = P2x - 7;
		}
		P2down= P2down-10;
		P2jumpPic3 = 0;
		P2jumpPic2 = 1;
	}
	else if(P2jump && P2up>=100 && P2down<=0)
	{
		P2jumpPic2 =0;
		P2up=0;
		P2down=100;
		P2jump = false;
		P2_Idle = 1;
	}

























	// range attack 
	if(P1range_Attack == 1)
	{
		if(P1blast <= 500 && P1blast >= -500)
		{
			if(P1right_Side_range == 1)
			{
				P1left_Side_range = 0;
				P1blast = P1blast + 20;
			}
			else if(P1left_Side_range == 1)
			{
				P1right_Side_range = 0;
				P1blast = P1blast - 20;
			}
		}
			else if(P1blast > 500)
		{
			P1blast = 0;
			P1range_Attack = 0;
			P1Attacking2 = 0;
			P1right_Side_range = 0;
			//blx = P1x;
		}
		else if(P1blast <  -500)
		{
			P1blast = 0;
			P1range_Attack = 0;
			P1Attacking2 = 0;
			P1left_Side_range = 0;
			//blx = P1x;
		}

			
	}


	// For Player Two
	if(P2range_Attack == 1)
	{
		if(P2blast <= 500 && P2blast >= -500)
		{
			if(P2right_Side_range == 1)
			{
				P2left_Side_range = 0;
				P2blast = P2blast + 20;
			}
			else if(P2left_Side_range == 1)
			{
				P2right_Side_range = 0;
				P2blast = P2blast - 20;
			}
		}
			else if(P2blast > 500)
		{
			P2blast = 0;
			P2range_Attack = 0;
			P2Attacking2 = 0;
			P2right_Side_range = 0;
			//blx = P1x;
		}
		else if(P2blast <  -500)
		{
			P2blast = 0;
			P2range_Attack = 0;
			P2Attacking2 = 0;
			P2left_Side_range = 0;
			//blx = P1x;
		}

	}

}
/*
void attack()
{
	
	if(l==0)
	{
		l = 0;
	}
	else 
		l++;
		
	
	if(Attacking1 == 1);
	{	
		
	if(!jump)
	{
	if(GokuNatk == 0 && combo ==0 && l >= 0 && l <= 2) 
		GokuNatk = 1;
	if(GokuNatk == 1 && combo ==0 && l >= 2 && l <= 4)
		GokuNatk = 2;
	else if(GokuNatk == 2 && combo == 0 && l >= 4 && l <= 6)
		GokuNatk = 3;
	else if(GokuNatk == 3 && combo == 0 && l >= 6)
		{
			l = 0;
			GokuNatk = 0;
			Attacking1 = 0;
			_Idle = 1;
		}
	}
	}
	/*
	else if(combo == 1 && GokuNatk2 == 0)
	{
		GokuNatk = 0;
		GokuNatk2 = 1;
	}
	else if(GokuNatk2 == 1 && combo == 1)
	{
		GokuNatk = 0;
		GokuNatk2 = 2;
	}
	else if(GokuNatk2 == 2 && combo == 1)
		{
			GokuNatk = 0;
			GokuNatk2 = 0;
			Attacking1 = 0;
			PlayGoku = 1;
			combo = 0;
		}
		


	if(Attacking2 == 1);
	{
	if(!jump)
	{
	if(GokuSatk == 0 && combo ==0 && _Idle == 0)
		GokuSatk = 1;
	if(GokuSatk == 1 && combo ==0 && _Idle == 0)
		GokuSatk = 2;
	else if(GokuSatk == 2 && combo == 0 && _Idle == 0)
	{
		GokuSatk = 3;
		
	}
	
	else if(GokuSatk == 3 )
	{
		GokuSatk = 0;
		_Idle = 1;
		range_Attack = 1;
		
	}
	/*
	else if(GokuSatk == 3 && combo == 0 && blx >= 500)
		{
			GokuSatk = 0;
			Attacking2 = 0;
			_Idle = 1;
			blx = 0;
			
		}
	else if(GokuSatk == 3 && combo == 0 && blx <= -500)
		{
			GokuSatk = 0;
			Attacking2 = 0;
			_Idle = 1;
			blx = 0;
			
		}
		
	}
	}




}
*/



/*
void attack2()
{
	// For Player One
	if(P1Attacking2 == 1)
	{
		P1AttackingTime2++;
		if(P1AttackingTime2 >= 1 && P1Attacking2 == 1)
		{
			P1AttackingTime2 = 0; 
			P1Attacking2 = 0 ;
			P1_Idle = 1;
		}
	}


	// For Player Two
	if(P2Attacking2 == 1)
	{
		P2AttackingTime2++;
		if(P2AttackingTime2 >= 1 && P2Attacking2 == 1)
		{
			P2AttackingTime2 = 0; 
			P2Attacking2 = 0 ;
			P2_Idle = 1;
		}
	}
}
*/
/*
void range()
{
	//if(range_Attack == 0)
	//{
		
	//}

	// For Player One
	if(P1range_Attack == 1)
	{
		if(P1blast <= 500 && P1blast >= -500)
		{
			if(P1right_Side_range == 1)
			{
				P1left_Side_range = 0;
				P1blast = P1blast + 20;
			}
			else if(P1left_Side_range == 1)
			{
				P1right_Side_range = 0;
				P1blast = P1blast - 20;
			}
		}
			else if(P1blast > 500)
		{
			P1blast = 0;
			P1range_Attack = 0;
			P1Attacking2 = 0;
			P1right_Side_range = 0;
			//blx = P1x;
		}
		else if(P1blast <  -500)
		{
			P1blast = 0;
			P1range_Attack = 0;
			P1Attacking2 = 0;
			P1left_Side_range = 0;
			//blx = P1x;
		}

			
	}


	// For Player Two
	if(P2range_Attack == 1)
	{
		if(P2blast <= 500 && P2blast >= -500)
		{
			if(P2right_Side_range == 1)
			{
				P2left_Side_range = 0;
				P2blast = P2blast + 20;
			}
			else if(P2left_Side_range == 1)
			{
				P2right_Side_range = 0;
				P2blast = P2blast - 20;
			}
		}
			else if(P2blast > 500)
		{
			P2blast = 0;
			P2range_Attack = 0;
			P2Attacking2 = 0;
			P2right_Side_range = 0;
			//blx = P1x;
		}
		else if(P2blast <  -500)
		{
			P2blast = 0;
			P2range_Attack = 0;
			P2Attacking2 = 0;
			P2left_Side_range = 0;
			//blx = P1x;
		}

	}
}
*/
void defend()
{
	// Player One 
	if(P1_Defend)
	{
		cout << P1_Defend << endl;
		P1DefendTime++;
		if(P1_Defend && P1DefendTime >= 2)
			{
				P1_Defend = false;
				P1DefendTime = 0;
				P1_Idle = 1;
		
			}
	}

	


	// Player Two
	if(P2_Defend)
	{
		P2DefendTime++;
		if(P2_Defend && P2DefendTime >= 2)
			{
				P2_Defend = false;
				P2DefendTime = 0;
				P2_Idle = 1;
		
			}
	}

}

void powerUp()
{

	// Player One 
	if(P1_Power)
	{
		if(P1power_up <= 100)
		{
		P1power_up = P1power_up + 10;
		P1_Power = false;
		P1_Idle = 1;
		}
		else
		{
			P1_Power = false;
			P1_Idle = 1;
		}
	}
	

	// Player Two
	if(P2_Power)
	{
		if(P2power_up <= 100)
		{
		P2power_up = P2power_up + 10;
		P2_Power = false;
		P2_Idle = 1;
		}
		else
		{
			P2_Power = false;
			P2_Idle = 1;
		}
	}
		
}


void Ultimate()
{
	// Player One
	if(P1ulti==0)
	{
		P1ulti = 0;
	}
	else
	P1ulti++;
		
	if(P1_Ultimate)
	{
		if(P1ulti > 0 && P1ulti <= 3)
			P1UltimateATK = 1;
		else if(P1ulti > 3 && P1ulti <= 5)
		{
			P1UltimateATK = 2;
		}
		else if(P1ulti > 5)
		{
			P1_Ultimate = false;
				P1_Idle = 1;
				P1ulti = 0;
				P1Ultimate_Blast = 1;
				
		}
		
	
	}
	if(P1_damage && P1_Ultimate)
		{
			P1_Ultimate = false;
			P1_Idle = 1;
			P1ulti = 0;
		}
	


	// Player Two
	if(P2ulti==0)
	{
		P2ulti = 0;
	}
	else
	P2ulti++;
		
	if(P2_Ultimate)
	{
		if(P2ulti > 0 && P2ulti <= 3)
			P2UltimateATK = 1;
		else if(P2ulti > 3 && P2ulti <= 5)
		{
			P2UltimateATK = 2;
		}
		else if(P2ulti > 5)
		{
			P2_Ultimate = false;
				P2_Idle = 1;
				P2ulti = 0;
				P2Ultimate_Blast = 1;
				
		}
		
	
	}

	if(P2_damage && P2_Ultimate)
		{
			P2_Ultimate = false;
			P2_Idle = 1;
			P2ulti = 0;
		}
	
		
		//cout << ulti << endl;
}



void KAMEHAMEHA_Blast()
{
// Player One
	if(P1Ultimate_Blast == 1 && P1ulti_blast <= 1400 && P1ulti_blast >= -1400)
	{
		if(P1RightSideUltimate)
			P1ulti_blast = P1ulti_blast + 20;
		else if(P1LeftSideUltimate)
		P1ulti_blast = P1ulti_blast + 20;
	}
	else if(P1Ultimate_Blast == 1 && P1ulti_blast > 1400)
	{
		P1ulti_blast =0;
		P1Ultimate_Blast = 0;
		P1RightSideUltimate = false;
	}
	else if(P1Ultimate_Blast == 1 && P1ulti_blast <  -1400)
	{
		P1ulti_blast = 0;
		P1Ultimate_Blast = 0;
		P1LeftSideUltimate = false;
	}


// Player Two
	if(P2Ultimate_Blast == 1 && P2ulti_blast <= 1400 && P2ulti_blast >= -1400)
	{
		if(P2RightSideUltimate)
			P2ulti_blast = P2ulti_blast + 20;
		else if(P2LeftSideUltimate)
		P2ulti_blast = P2ulti_blast + 20;
	}
	else if(P2Ultimate_Blast == 1 && P2ulti_blast > 1400)
	{
		P2ulti_blast =0;
		P2Ultimate_Blast = 0;
		P2RightSideUltimate = false;
	}
	else if(P2Ultimate_Blast == 1 && P2ulti_blast <  -1400)
	{
		P2ulti_blast = 0;
		P2Ultimate_Blast = 0;
		P2LeftSideUltimate = false;
	}

	//cout << P2ulti_blast << endl;

}

double p2 = 0;
double p1 = 0;
double rp1 = 0;
double rp2 = 0;

void collision()
{

	double p = P1x;
	double q = P2x;
	double py = P1up + P1down;
	double qy = P2up + P2down;

	double val1 = sqrt((p-q)*(p-q) + (py - qy)*(py-qy));


	//cout << val1 << endl;

	if(val1 < 50 && P1attackingP2 && !P2_Defend)
	{
		P2Health = P2Health - 10;
		P1attackingP2 = false;
		P2_damage = true;
	}
	else if(val1 < 50 && P1attackingP2 && P2_Defend)
	{
		cout << "Worked" << endl;
		P1attackingP2 = false;
		P2_damage = false;
	}
	else if (val1 > 50 && P1attackingP2)
	{
		P1attackingP2 = false;
		P2_damage = false;
	}


	//P1 throwing Ultimate

	if(P1Ultimate_Blast == 1)
	{
		if(P1LeftSide) p1 = P1KAMEHAMEHA - P1ulti_blast;
		else if(P1RightSide) p1 = P1KAMEHAMEHA + P1ulti_blast + 400;
		double q1 = P2x;
		double py1 = P1up + P1down;
		double qy1 = P2up + P2down;

		if(p1 < 0)
		{
			p1 = -p1;
		}

		double uval1 = sqrt((p1 - q1)*(p1 - q1) + (py1 - qy1)*(py1 - qy1));

		if(uval1 < 50)
		{
			P2Health = P2Health - 40;
			P2_damage = true;
		}

		cout << uval1 << endl;
/*
		double up1 = P1ulti_blast ;
		double uq1 = P2x;
		double upy1 = P1up + P1down;
		double uqy1 = P2up + P2down;

		if(up1 < 0)
		{
			p1 = -p1;
		}

		double uval12 = sqrt((up1 - uq1)*(up1 - uq1) + (upy1 - uqy1)*(upy1 - uqy1));

		if(uval12 < 100)
		{
			P2Health = P2Health - 10;
			P2_damage = true;
		}
		*/

	}

	if(P1range_Attack == 1)
	{
		if(P1LeftSide) rp1 = P1blx - 50 + P1blast ;
		else if(P1RightSide) rp1 = P1blx - 50 + P1blast ;
		double rq1 = P2x;
		double rpy1 = P1up + P1down;
		double rqy1 = P2up + P2down;

		if(p1 < 0)
		{
			p1 = -p1;
		}

		double rval1 = sqrt((rp1 - rq1)*(rp1 - rq1) + (rpy1 - rqy1)*(rpy1 - rqy1));

		if(rval1 < 50  && !P2_Defend)
		{
			P2Health = P2Health - 10;
			P2_damage = true;
		}


		//cout << rval1 << endl;
	}





	
	if(val1 < 50 && P2attackingP1 && !P1_Defend)
	{
		P1Health = P1Health - 10;
		P2attackingP1 = false;
		P1_damage = true;
	}
	else if(val1 < 50 && P2attackingP1 && P1_Defend)
	{
		cout << "Worked" << endl;
		P2attackingP1 = false;
		P1_damage = false;
	}
	else if (val1 > 50 && P2attackingP1)
	{
		P2attackingP1 = false;
		P1_damage = false;
	}
	
	if(P2Ultimate_Blast == 1)
	{
		
		if(P2LeftSide) p2 = P2KAMEHAMEHA - P2ulti_blast - 400;
		else if(P2RightSide) p2 = P2KAMEHAMEHA + P2ulti_blast + 400;
		double q2 = P1x;
		double py2 = P2up + P2down;
		double qy2 = P1up + P1down;

		if(p2 < 0)
		{
			p2 = -p2;
		}
		double uval2 = sqrt((p2 - q2)*(p2 - q2) + (py2 - qy2)*(py2 - qy2));

		if(uval2 < 50)
		{
			P1Health = P1Health - 40;
			P1_damage = true;
		}

		cout << uval2 << endl;

	}
	
	//cout << "Health of P1: " << P1Health << endl;
	//cout << "Health of P2: " << P2Health << endl;
	

	if(P2range_Attack == 1)
	{
		if(P2LeftSide) rp1 = P2blx - 50 + P2blast ;
		else if(P2RightSide) rp1 = P2blx - 50 + P2blast ;
		double rq1 = P1x;
		double rpy1 = P2up + P2down;
		double rqy1 = P1up + P1down;

		if(rp1 < 0)
		{
			rp1 = -rp1;
		}

		double rval1 = sqrt((rp1 - rq1)*(rp1 - rq1) + (rpy1 - rqy1)*(rpy1 - rqy1));

		if(rval1 < 50  && !P1_Defend)
		{
			P1Health = P1Health - 10;
			P1_damage = true;
		}

		cout << rval1 << endl;
	}
	




}

//bool P1_damage = false;
//int P1d = 0;

void damage()
{

	// Player 2 taking damage from player 1
	if(P2_damage)
	{
		P2_Idle = 0;
		P2d++;
		if(P2d >= 1 && P2d<= 10)
		{
			if(P1RightSide && P2x <= 1232)
			{
				P2x = P2x + 2;
			}
			if(P1LeftSide && P2x >= 0)
			{
				P2x = P2x - 2;
			}
		}
		else
		{
			P2d = 0;
			P2_damage = false;
			P2_Idle = 1;
		}

	}

	//cout << P2d << endl;

	
// Player 1 taking damage from player 2

	if(P1_damage)
	{
		P1_Idle = 0;
		P1d++;
		if(P1d >= 1 && P1d<= 10)
		{
			if(P2RightSide && P1x <= 1232)
			{
				P1x = P1x + 2;
			}
			if(P2LeftSide && P1x >= 0)
			{
				P1x = P1x - 2;
			}
		}
		else
		{
			P1d = 0;
			P1_damage = false;
			P1_Idle = 1;
		}

	}


}



// Timer

void decreaseTime() {
	if(gameState == 2)
	{
    if (timeLeft > 0) {
        timeLeft--;
    } 
}
}

void drawFightingPage() {
	
	
    if (selectedMap == 0) iShowImage(0, 0, 1280, 720, mapImage1);
    else if (selectedMap == 1) iShowImage(0, 0, 1280, 720, mapImage2);
    else if (selectedMap == 2) iShowImage(0, 0, 1280, 720, mapImage3);
    else if (selectedMap == 3) iShowImage(0, 0, 1280, 720, mapImage4);
    else if (selectedMap == 4) iShowImage(0, 0, 1280, 720, mapImage5);
    else if (selectedMap == 5) iShowImage(0, 0, 1280, 720, mapImage6);
	
	iSetColor(0,0,0);
	iPoint(585, 615, 4);
	iPoint(570, 615, 4);
	iPoint(710, 615, 4);
	iPoint(720, 615, 4);

	if(P1score == 1) 
	{
		iSetColor(0, 255, 0);
		iPoint(585, 615, 4);
	}
	else if(P2score == 1) 
	{
		iSetColor(0, 255, 0);
		iPoint(710, 615, 4);
	}

    if (P1SelectedChar == 0) 
		{
			
			if (Player1Pick == 1) {
        if (P1PickGojo == 1) {
            P1GojoX = P1x;
            P1GojoY = P1up + P1down;
            playerOneGojo();
        }

		iShowImage(130,600,100,100,pfpGojo1);
		P1healthBar();
		P1powerBar();

		if(P1Health <= 0)
		{
			GameOver = true;
			Player2win();

		}


    }

		}/////////////////////////////////////////////////////////////////playerOneGojo();
    else if (P1SelectedChar == 1) 
		{
			if(Player1Pick == 1 | TrainingPhase)
	
	{
		if(P1PickGoku == 1 | TrainingPhase)
		{
			P1GokuX = P1x;
			P1GokuY = P1up + P1down;

			playerOneGoku();
		}
		if(!TrainingPhase)
		{
		iShowImage(130,600,100,100,pfpGoku1);
		P1healthBar();
		P1powerBar();

		if(P1Health <= 0)
		{
			GameOver = true;
			Player2win();

		}
		}

	

	}
			
    
		}//////////////////////////////////////////////////////////Goku
	else if (P1SelectedChar == 2) 
		{
			if (Player1Pick == 1) {
        if (P1PickIchigo == 1) {
            P1IchigoX = P1x;
            P1IchigoY = P1up + P1down;
            playerOneIchigo();
        }

		
		iShowImage(130,600,100,100,pfpIchigo1);
		P1healthBar();
		P1powerBar();

		if(P1Health <= 0)
		{
			GameOver = true;
			Player2win();

		}

    }
	}/////////////////////////////////////////////////////////////playerOneIchigo();
    else if (P1SelectedChar == 3) 
		{
			if(Player1Pick == 1)
	
	{
		if(P1PickTanjiro == 1)
		{
			P1TanjiroX = P1x;
			P1TanjiroY = P1up + P1down;

			playerOneTanjiro();
		}
		iShowImage(130,600,100,100,pfpTanjiro1);
		P1healthBar();
		P1powerBar();

		
	}

	if(P1Health <= 0)
		{
			GameOver = true;
			Player2win();

		}

    }
			
	//////////////////////////////////////////////////playerOneTanjiro();
    else if (P1SelectedChar == 4) 
		{
			if (Player1Pick == 1) {
        if (P1PickKunoichi == 1) {
            P1KunoichiX = P1x;
            P1KunoichiY = P1up + P1down;
            playerOneKunoichi();
        }
		iShowImage(130,600,100,100,pfpKunoichi1);
		P1healthBar();
		P1powerBar();

		if(P1Health <= 0)
		{
			GameOver = true;
			Player2win();

		}

    }

    		
	}/////////////////////////////////////////////////////////////////////Ninja
    else if (P1SelectedChar == 5)
		{
			if (Player1Pick == 1) {
        if (P1PickJinsakai == 1) {
            P1JinsakaiX = P1x;
            P1JinsakaiY = P1up + P1down;
            playerOneJinsakai();
        }
		iShowImage(130,600,100,100,pfpJinsakai1);
		P1healthBar();
		P1powerBar();

		if(P1Health <= 0)
		{
			GameOver = true;
			Player2win();
		}
    }

			
	}///////////////////////////////////////////////////////////////playerOneJinsakai();


///////////////// Player 2


    if (P2SelectedChar == 0) 
	{
		 if (Player2Pick == 1) {
        if (P2PickRevIchigo == 1) {
            P2RevIchigoX = P2x;
            P2RevIchigoY = P2up + P2down;
            playerTwoRevIchigo();
        }

		iShowImage(1120,600,100,100,pfpIchigo1);
		P2healthBar();
		P2powerBar();

		if(P2Health <= 0)
		{
			GameOver = true;
			Player1win();


		}
	}
	}
	////////////////////////////////////////////////////////playerTwoRevIchigo();
    else if (P2SelectedChar == 1)
		{
			if(Player2Pick == 1 | TrainingPhase)

	{
		if(P2PickGoku == 1 | TrainingPhase)
		{
		P2GokuX = P2x;
		P2GokuY = P2up + P2down;

		playerTwoGoku();
		}

		if(!TrainingPhase)
		{
		iShowImage(1120,600,100,100,pfpGoku1);
		
		P2healthBar();
		P2powerBar();

		if(P2Health <= 0)
		{
			GameOver = true;
			Player1win();

		}
		}
	}	
		}/////////////////////////////////////////////////////////////////Goku2
    else if (P2SelectedChar == 2)
		{
			if (Player2Pick == 1) {
        if (P2PickAk == 1) {
            P2AkX = P2x;
            P2AkY = P2up + P2down;
            playerTwoAk();
        }
		iShowImage(1120,600,100,100,pfpGojo1);
		P2healthBar();
		P2powerBar();

		if(P2Health <= 0)
		{
			GameOver = true;
			Player1win();


		}
    }
			
		}///////////////////////////// playerTwoAk();
    else if (P2SelectedChar == 3)
	{
		if (Player2Pick == 1) {
        if (P2PickGhost == 1) {
            P2GhostX= P2x;
            P2GhostY = P2up + P2down;
            playerTwoGhost();
        }
		iShowImage(1120,600,100,100,pfpJinsakai1);
		P2healthBar();
		P2powerBar();

		if(P2Health <= 0)
		{
			GameOver = true;
			Player1win();
		}
	}

	}/////////////////////////// playerTwoGhost();
    else if (P2SelectedChar == 4)
	{
		if (Player2Pick == 1) {
        if (P2PickShinobi == 1) {
            P2ShinobiX= P2x;
            P2ShinobiY = P2up + P2down;
            playerTwoShinobi();
        }
		iShowImage(1120,600,100,100,pfpKunoichi1);
		P2healthBar();
		P2powerBar();

		if(P2Health <= 0)
		{
			GameOver = true;
			Player1win();


		}
	}
		
	}/////////////////////////////////////////////////////
    else if (P2SelectedChar == 5)
	{
		if(Player2Pick == 1)
	{
		if(P2PickTanjiro == 1)
		{
		P2RevtanX = P2x;
		P2RevtanY = P2up + P2down;

		playerTwoRevtan();
		}
		iShowImage(1120,600,100,100,pfpTanjiro1);
		P2healthBar();
		P2powerBar();

		
	}

	if(P2Health <= 0)
		{
			GameOver = true;
			Player1win();

		}
		
	}/////////////////////////////////////////////////////playerTwoRevtan(); 
	

}

void playerTwoGoku()
{
	if(P2RightSide)
		{

// Idle
		if(P2_Idle == 1)
		{
			
			if(P2idleNum == 0) iShowImage(P2GokuX, P2GokuY, GokuWidth, GokuHeight, ALT_goku_Idle_R_1);
			if(P2idleNum == 1) iShowImage(P2GokuX, P2GokuY, GokuWidth, GokuHeight, ALT_goku_Idle_R_2);
			if(P2idleNum == 2) iShowImage(P2GokuX, P2GokuY, GokuWidth, GokuHeight, ALT_goku_Idle_R_2);
		}
		
// Walking
	if(P2_Walk == 1)
	{
	
	if(P2i==0){
	iShowImage(P2GokuX, P2GokuY, GokuWidth, GokuHeight, ALT_goku_Walk_R_1);// ------------------------------------------------------------
	}
	else if(P2i==1){
	iShowImage(P2GokuX, P2GokuY, GokuWidth, GokuHeight, ALT_goku_Walk_R_2);
	}
	if(P2i==2){
	iShowImage(P2GokuX, P2GokuY, GokuWidth, GokuHeight, ALT_goku_Walk_R_3);
	}
	}

// Jumping
	if(P2jump)
	{
		if(P2jumpPic1==1){
		iShowImage(P2GokuX, P2GokuY, GokuWidth, GokuHeight, ALT_goku_Jump_R_1);// ------------------------------------------------------------
		}
		else if(P2jumpPic3==1){
		iShowImage(P2GokuX, P2GokuY, GokuWidth, GokuHeight, ALT_goku_Jump_R_2);// ------------------------------------------------------------
		}
		else if(P2jumpPic2==1){
		iShowImage(P2GokuX, P2GokuY, GokuWidth, GokuHeight, ALT_goku_Jump_R_3);// ------------------------------------------------------------
		}
	}

//Normal Attack
	if(P2Attacking1 == 1)
	{
		/*
		if(GokuNatk == 0)
			iShowImage(P1GokuX, P1GokuY, GokuWidth, GokuHeight, goku_NormalATK_R_1);
	else if(GokuNatk == 1)
			iShowImage(P1GokuX, P1GokuY, GokuWidth, GokuHeight, goku_NormalATK_R_1);
	else if(GokuNatk == 2)
			iShowImage(P1GokuX, P1GokuY, GokuWidth, GokuHeight, goku_NormalATK_R_2);
			*/
	//else if(GokuNatk == 3)
			iShowImage(P2GokuX, P2GokuY, GokuWidth+20, GokuHeight, ALT_goku_NormalATK_R_2);
			
	/*
	else if(GokuNatk2 == 0)
			iShowImage(GokuX, GokuY, GokuWidth, GokuHeight, goku_NormalATK_R_3);
	else if(GokuNatk2 == 1)
			iShowImage(GokuX, GokuY, GokuWidth, GokuHeight, goku_NormalATK_R_4);
	else if(GokuNatk2 == 2)
			iShowImage(GokuX, GokuY, GokuWidth, GokuHeight, goku_NormalATK_R_4);
			*/
	}

// Strong Attack 
	if(P2Attacking2 == 1)
	{
		/*if(GokuSatk == 0)
			iShowImage(P1GokuX, P1GokuY, GokuWidth, GokuHeight, goku_StrongATK_R_1);
	else if(GokuSatk == 1)
			iShowImage(P1GokuX, P1GokuY, GokuWidth, GokuHeight, goku_StrongATK_R_1);
	else if(GokuSatk == 2)
			iShowImage(P1GokuX, P1GokuY, GokuWidth, GokuHeight, goku_StrongATK_R_2);
	else if(GokuSatk == 3)
		{
			iShowImage(P1GokuX, P1GokuY, GokuWidth, GokuHeight, goku_StrongATK_R_2);
			//iShowImage(P1GokuX + bl, P1GokuY + 50, 27 , 21, goku_StrongATK_R_3);
		}
		*/
		iShowImage(P2GokuX, P2GokuY, GokuWidth, GokuHeight, ALT_goku_StrongATK_R_2);
	
	
	}


// Damage 

	if(P2_damage)
	{
		iShowImage(P2GokuX, P2GokuY, GokuWidth, GokuHeight, ALT_goku_Damage_R_1);
			
	}
	
	
//Defend

		if(P2_Defend)
			iShowImage(P2GokuX, P2GokuY, GokuWidth, GokuHeight, ALT_goku_Defence_R_1);

// Power Up

		if(P2_Power)
		{
			iShowImage(P2GokuX - 10, P2GokuY - 10, 120, 170, ALT_goku_PowerUp_R_2);
			iShowImage(P2GokuX, P2GokuY, GokuWidth, GokuHeight, ALT_goku_PowerUp_R_1);
			
			
		}

	// Ultimate 

		if(P2_Ultimate)
		{
			if(P2UltimateATK == 1)
				iShowImage(P2GokuX, P2GokuY, GokuWidth, GokuHeight, ALT_goku_Ultimate_R_1);
			if(P2UltimateATK == 2)
				iShowImage(P2GokuX, P2GokuY ,GokuWidth , GokuHeight , ALT_goku_Ultimate_R_2);
		}
		
		}

		if(P2right_Side_range == 1)
		{
			if(P2range_Attack == 1 )
				{
					iShowImage(P2blx + 50 + P2blast , P2bly + 50 , 27 , 21 , ALT_goku_StrongATK_R_3);
				}
		}
		if(P2RightSideUltimate)
		{

			if(P2Ultimate_Blast == 1)
			{
				
				iShowImage(P2KAMEHAMEHA + P2ulti_blast  , P2GokuY , 400 , GokuHeight , ALT_KA_ME_HA_ME_HA_R);
			}
		}
	
		



// LEFT SIFE --------------------------------------------------------


		if(P2LeftSide)
		{

// Idle
		if(P2_Idle == 1)
		{
			
			if(P2idleNum == 0) iShowImage(P2GokuX, P2GokuY, GokuWidth, GokuHeight, ALT_goku_Idle_L_1);
			if(P2idleNum == 1) iShowImage(P2GokuX, P2GokuY, GokuWidth, GokuHeight, ALT_goku_Idle_L_2);
			if(P2idleNum == 2) iShowImage(P2GokuX, P2GokuY, GokuWidth, GokuHeight, ALT_goku_Idle_L_2);
		}
		
// Walking
	if(P2_Walk == 1)
	{
	
	if(P2i==0){
	iShowImage(P2GokuX, P2GokuY, GokuWidth, GokuHeight, ALT_goku_Walk_L_1);// ------------------------------------------------------------
	}
	else if(P2i==1){
	iShowImage(P2GokuX, P2GokuY, GokuWidth, GokuHeight, ALT_goku_Walk_L_2);
	}
	if(P2i==2){
	iShowImage(P2GokuX, P2GokuY, GokuWidth, GokuHeight, ALT_goku_Walk_L_3);
	}
	}

// Jumping
	if(P2jump)
	{
		if(P2jumpPic1==1){
		iShowImage(P2GokuX, P2GokuY, GokuWidth, GokuHeight, ALT_goku_Jump_L_1);// ------------------------------------------------------------
		}
		else if(P2jumpPic3==1){
		iShowImage(P2GokuX, P2GokuY, GokuWidth, GokuHeight, ALT_goku_Jump_L_2);// ------------------------------------------------------------
		}
		else if(P2jumpPic2==1){
		iShowImage(P2GokuX, P2GokuY, GokuWidth, GokuHeight, ALT_goku_Jump_L_3);// ------------------------------------------------------------
		}
	}

//Normal Attack
	if(P2Attacking1 == 1)
	{
		/*
		if(GokuNatk == 0)
			iShowImage(P1GokuX, P1GokuY, GokuWidth, GokuHeight, goku_NormalATK_L_1);
	else if(GokuNatk == 1)
			iShowImage(P1GokuX, P1GokuY, GokuWidth, GokuHeight, goku_NormalATK_L_1);
	else if(GokuNatk == 2)
			iShowImage(P1GokuX, P1GokuY, GokuWidth, GokuHeight, goku_NormalATK_L_2);
	else if(GokuNatk == 3)
		*/
			iShowImage(P2GokuX, P2GokuY, GokuWidth + 20, GokuHeight, ALT_goku_NormalATK_L_2);
	/*
	else if(GokuNatk2 == 0)
			iShowImage(GokuX, GokuY, GokuWidth, GokuHeight, goku_NormalATK_R_3);
	else if(GokuNatk2 == 1)
			iShowImage(GokuX, GokuY, GokuWidth, GokuHeight, goku_NormalATK_R_4);
	else if(GokuNatk2 == 2)
			iShowImage(GokuX, GokuY, GokuWidth, GokuHeight, goku_NormalATK_R_4);
			*/
	}

// Strong Attack 
	if(P2Attacking2 == 1)
	{
		/*if(GokuSatk == 0)
			iShowImage(P1GokuX, P1GokuY, GokuWidth, GokuHeight, goku_StrongATK_L_1);
	else if(GokuSatk == 1)
			iShowImage(P1GokuX, P1GokuY, GokuWidth, GokuHeight, goku_StrongATK_L_1);
	else if(GokuSatk == 2)
			iShowImage(P1GokuX, P1GokuY, GokuWidth, GokuHeight, goku_StrongATK_L_2);
	else if(GokuSatk == 3)
		{
			iShowImage(P1GokuX, P1GokuY, GokuWidth, GokuHeight, goku_StrongATK_L_2);
			
		}
		*/

		iShowImage(P2GokuX, P2GokuY, GokuWidth, GokuHeight, ALT_goku_StrongATK_L_2);
	}

// Damage
		if(P2_damage)
	{
		iShowImage(P2GokuX, P2GokuY, GokuWidth, GokuHeight, ALT_goku_Damage_L_1);
			
	}



//Defend

		if(P2_Defend)
			iShowImage(P2GokuX, P2GokuY, GokuWidth, GokuHeight, ALT_goku_Defence_L_1);

// Power Up

		if(P2_Power)
		{
			iShowImage(P2GokuX - 10, P2GokuY - 10, 120, 170, ALT_goku_PowerUp_L_2);
			iShowImage(P2GokuX, P2GokuY, GokuWidth, GokuHeight, ALT_goku_PowerUp_L_1);
			
			
		}

	// Ultimate 

		if(P2_Ultimate)
		{
			if(P2UltimateATK == 1)
				iShowImage(P2GokuX, P2GokuY, GokuWidth, GokuHeight, ALT_goku_Ultimate_L_1);
			if(P2UltimateATK == 2)
				iShowImage(P2GokuX, P2GokuY ,GokuWidth , GokuHeight , ALT_goku_Ultimate_L_2);
		}

			
	
		}

		if(P2left_Side_range == 1)
		{
			if(P2range_Attack == 1 )
				{
					iShowImage(P2blx - 50 + P2blast, P2bly + 50 , 27 , 21 , ALT_goku_StrongATK_L_3);
				}
		}
		if(P2LeftSideUltimate)
		{

			if(P2Ultimate_Blast == 1)
			{
				
				iShowImage(P2KAMEHAMEHA - P2ulti_blast - 400  , P1GokuY , 400 , GokuHeight , ALT_KA_ME_HA_ME_HA_L);
			}
		}
}


void playerOneGoku()
{
	if(P1RightSide)
		{

// Idle
		if(P1_Idle == 1)
		{
			
			if(P1idleNum == 0) iShowImage(P1GokuX, P1GokuY, GokuWidth, GokuHeight, goku_Idle_R_1);
			if(P1idleNum == 1) iShowImage(P1GokuX, P1GokuY, GokuWidth, GokuHeight, goku_Idle_R_2);
			if(P1idleNum == 2) iShowImage(P1GokuX, P1GokuY, GokuWidth, GokuHeight, goku_Idle_R_2);
		}
		
// Walking
	if(P1_Walk == 1)
	{
	
	if(P1i==0){
	iShowImage(P1GokuX, P1GokuY, GokuWidth, GokuHeight, goku_Walk_R_1);// ------------------------------------------------------------
	}
	else if(P1i==1){
	iShowImage(P1GokuX, P1GokuY, GokuWidth, GokuHeight, goku_Walk_R_2);
	}
	if(P1i==2){
	iShowImage(P1GokuX, P1GokuY, GokuWidth, GokuHeight, goku_Walk_R_3);
	}
	}

// Jumping
	if(P1jump)
	{
		if(P1jumpPic1==1){
		iShowImage(P1GokuX, P1GokuY, GokuWidth, GokuHeight, goku_Jump_R_1);// ------------------------------------------------------------
		}
		else if(P1jumpPic3==1){
		iShowImage(P1GokuX, P1GokuY, GokuWidth, GokuHeight, goku_Jump_R_2);// ------------------------------------------------------------
		}
		else if(P1jumpPic2==1){
		iShowImage(P1GokuX, P1GokuY, GokuWidth, GokuHeight, goku_Jump_R_3);// ------------------------------------------------------------
		}
	}

//Normal Attack
	if(P1Attacking1 == 1)
	{
		/*
		if(GokuNatk == 0)
			iShowImage(P1GokuX, P1GokuY, GokuWidth, GokuHeight, goku_NormalATK_R_1);
	else if(GokuNatk == 1)
			iShowImage(P1GokuX, P1GokuY, GokuWidth, GokuHeight, goku_NormalATK_R_1);
	else if(GokuNatk == 2)
			iShowImage(P1GokuX, P1GokuY, GokuWidth, GokuHeight, goku_NormalATK_R_2);
			*/
	//else if(GokuNatk == 3)
			iShowImage(P1GokuX, P1GokuY, GokuWidth+20, GokuHeight, goku_NormalATK_R_2);
			
	/*
	else if(GokuNatk2 == 0)
			iShowImage(GokuX, GokuY, GokuWidth, GokuHeight, goku_NormalATK_R_3);
	else if(GokuNatk2 == 1)
			iShowImage(GokuX, GokuY, GokuWidth, GokuHeight, goku_NormalATK_R_4);
	else if(GokuNatk2 == 2)
			iShowImage(GokuX, GokuY, GokuWidth, GokuHeight, goku_NormalATK_R_4);
			*/
	}

// Strong Attack 
	if(P1Attacking2 == 1)
	{
		/*if(GokuSatk == 0)
			iShowImage(P1GokuX, P1GokuY, GokuWidth, GokuHeight, goku_StrongATK_R_1);
	else if(GokuSatk == 1)
			iShowImage(P1GokuX, P1GokuY, GokuWidth, GokuHeight, goku_StrongATK_R_1);
	else if(GokuSatk == 2)
			iShowImage(P1GokuX, P1GokuY, GokuWidth, GokuHeight, goku_StrongATK_R_2);
	else if(GokuSatk == 3)
		{
			iShowImage(P1GokuX, P1GokuY, GokuWidth, GokuHeight, goku_StrongATK_R_2);
			//iShowImage(P1GokuX + bl, P1GokuY + 50, 27 , 21, goku_StrongATK_R_3);
		}
		*/
		iShowImage(P1GokuX, P1GokuY, GokuWidth, GokuHeight, goku_StrongATK_R_2);
	
	
	}


// Damage

	if(P1_damage)
	{
		iShowImage(P1GokuX, P1GokuY, GokuWidth, GokuHeight, goku_Damage_R_1);
			
	}
	
//Defend

		if(P1_Defend)
			iShowImage(P1GokuX, P1GokuY, GokuWidth, GokuHeight, goku_Defence_R_1);

// Power Up

		if(P1_Power)
		{
			iShowImage(P1GokuX - 10, P1GokuY - 10, 120, 170, goku_PowerUp_R_2);
			iShowImage(P1GokuX, P1GokuY, GokuWidth, GokuHeight, goku_PowerUp_R_1);
			
			
		}

	// Ultimate 

		if(P1_Ultimate)
		{
			if(P1UltimateATK == 1)
				iShowImage(P1GokuX, P1GokuY, GokuWidth, GokuHeight, goku_Ultimate_R_1);
			if(P1UltimateATK == 2)
				iShowImage(P1GokuX, P1GokuY ,GokuWidth , GokuHeight , goku_Ultimate_R_2);
		}
		
		}

		if(P1right_Side_range == 1)
		{
			if(P1range_Attack == 1 )
				{
					iShowImage(P1blx + 50 + P1blast , P1bly + 50 , 27 , 21 , goku_StrongATK_R_3);
				}
		}
		if(P1RightSideUltimate)
		{

			if(P1Ultimate_Blast == 1)
			{
				
				iShowImage(P1KAMEHAMEHA + P1ulti_blast, P1GokuY , 400 , GokuHeight , KA_ME_HA_ME_HA_R);
			}
		}
	
		



// LEFT SIFE --------------------------------------------------------


		if(P1LeftSide)
		{

// Idle
		if(P1_Idle == 1)
		{
			
			if(P1idleNum == 0) iShowImage(P1GokuX, P1GokuY, GokuWidth, GokuHeight, goku_Idle_L_1);
			if(P1idleNum == 1) iShowImage(P1GokuX, P1GokuY, GokuWidth, GokuHeight, goku_Idle_L_2);
			if(P1idleNum == 2) iShowImage(P1GokuX, P1GokuY, GokuWidth, GokuHeight, goku_Idle_L_2);
		}
		
// Walking
	if(P1_Walk == 1)
	{
	
	if(P1i==0){
	iShowImage(P1GokuX, P1GokuY, GokuWidth, GokuHeight, goku_Walk_L_1);// ------------------------------------------------------------
	}
	else if(P1i==1){
	iShowImage(P1GokuX, P1GokuY, GokuWidth, GokuHeight, goku_Walk_L_2);
	}
	if(P1i==2){
	iShowImage(P1GokuX, P1GokuY, GokuWidth, GokuHeight, goku_Walk_L_3);
	}
	}

// Jumping
	if(P1jump)
	{
		if(P1jumpPic1==1){
		iShowImage(P1GokuX, P1GokuY, GokuWidth, GokuHeight, goku_Jump_L_1);// ------------------------------------------------------------
		}
		else if(P1jumpPic3==1){
		iShowImage(P1GokuX, P1GokuY, GokuWidth, GokuHeight, goku_Jump_L_2);// ------------------------------------------------------------
		}
		else if(P1jumpPic2==1){
		iShowImage(P1GokuX, P1GokuY, GokuWidth, GokuHeight, goku_Jump_L_3);// ------------------------------------------------------------
		}
	}

//Normal Attack
	if(P1Attacking1 == 1)
	{
		/*
		if(GokuNatk == 0)
			iShowImage(P1GokuX, P1GokuY, GokuWidth, GokuHeight, goku_NormalATK_L_1);
	else if(GokuNatk == 1)
			iShowImage(P1GokuX, P1GokuY, GokuWidth, GokuHeight, goku_NormalATK_L_1);
	else if(GokuNatk == 2)
			iShowImage(P1GokuX, P1GokuY, GokuWidth, GokuHeight, goku_NormalATK_L_2);
	else if(GokuNatk == 3)
		*/
			iShowImage(P1GokuX, P1GokuY, GokuWidth + 20, GokuHeight, goku_NormalATK_L_2);
	/*
	else if(GokuNatk2 == 0)
			iShowImage(GokuX, GokuY, GokuWidth, GokuHeight, goku_NormalATK_R_3);
	else if(GokuNatk2 == 1)
			iShowImage(GokuX, GokuY, GokuWidth, GokuHeight, goku_NormalATK_R_4);
	else if(GokuNatk2 == 2)
			iShowImage(GokuX, GokuY, GokuWidth, GokuHeight, goku_NormalATK_R_4);
			*/
	}

// Strong Attack 
	if(P1Attacking2 == 1)
	{
		/*if(GokuSatk == 0)
			iShowImage(P1GokuX, P1GokuY, GokuWidth, GokuHeight, goku_StrongATK_L_1);
	else if(GokuSatk == 1)
			iShowImage(P1GokuX, P1GokuY, GokuWidth, GokuHeight, goku_StrongATK_L_1);
	else if(GokuSatk == 2)
			iShowImage(P1GokuX, P1GokuY, GokuWidth, GokuHeight, goku_StrongATK_L_2);
	else if(GokuSatk == 3)
		{
			iShowImage(P1GokuX, P1GokuY, GokuWidth, GokuHeight, goku_StrongATK_L_2);
			
		}
		*/

		iShowImage(P1GokuX, P1GokuY, GokuWidth, GokuHeight, goku_StrongATK_L_2);
	}


// Damage

	if(P1_damage)
	{
		iShowImage(P1GokuX, P1GokuY, GokuWidth, GokuHeight, goku_Damage_L_1);
			
	}

//Defend

		if(P1_Defend)
			iShowImage(P1GokuX, P1GokuY, GokuWidth, GokuHeight, goku_Defence_L_1);

// Power Up

		if(P1_Power)
		{
			iShowImage(P1GokuX - 10, P1GokuY - 10, 120, 170, goku_PowerUp_L_2);
			iShowImage(P1GokuX, P1GokuY, GokuWidth, GokuHeight, goku_PowerUp_L_1);
			
			
		}

	// Ultimate 

		if(P1_Ultimate)
		{
			if(P1UltimateATK == 1)
				iShowImage(P1GokuX, P1GokuY, GokuWidth, GokuHeight, goku_Ultimate_L_1);
			if(P1UltimateATK == 2)
				iShowImage(P1GokuX, P1GokuY ,GokuWidth , GokuHeight , goku_Ultimate_L_2);
		}

			
	
		}

		if(P1left_Side_range == 1)
		{
			if(P1range_Attack == 1 )
				{
					iShowImage(P1blx - 50 + P1blast, P1bly + 50 , 27 , 21 , goku_StrongATK_L_3);
				}
		}
		if(P1LeftSideUltimate)
		{

			if(P1Ultimate_Blast == 1)
			{
				
				iShowImage(P1KAMEHAMEHA - P1ulti_blast - 400  , P1GokuY , 400 , GokuHeight , KA_ME_HA_ME_HA_L);
			}
		}

}





void playerTwoAk()
{
    if (P2RightSide)
    {
        // Idle
        if (P2_Idle == 1)
        {
            if (P2idleNum == 0) iShowImage(P2AkX, P2AkY, AkWidth-10, AkHeight, ak_Idle_R_1);
            if (P2idleNum == 1) iShowImage(P2AkX, P2AkY, AkWidth-10 -2, AkHeight, ak_Idle_R_2);
            if (P2idleNum == 2) iShowImage(P2AkX, P2AkY, AkWidth-10 -2, AkHeight, ak_Idle_R_2);
        }

        // Walking
        if (P2_Walk == 1)
        {
            if (P2i == 0) {
                iShowImage(P2AkX, P2AkY, AkWidth-15, AkHeight, ak_Walk_R_1);
            }
            else if (P2i == 1) {
                iShowImage(P2AkX, P2AkY, AkWidth-15, AkHeight, ak_Walk_R_2);
            }
            if (P2i == 2) {
                iShowImage(P2AkX, P2AkY, AkWidth-15, AkHeight, ak_Walk_R_3);
            }
        }

        // Jumping
        if (P2jump)
        {
            if (P2jumpPic1 == 1) {
                iShowImage(P2AkX, P2AkY, AkWidth+20, AkHeight, ak_Jump_R_1);
            }
            else if (P2jumpPic3 == 1) {
                iShowImage(P2AkX, P2AkY, AkWidth+20, AkHeight, ak_Jump_R_2);
            }
            else if (P2jumpPic2 == 1) {
                iShowImage(P2AkX, P2AkY, AkWidth+20, AkHeight, ak_Jump_R_3);
            }
        }

        //Normal Attack
        if (P2Attacking1 == 1)
        {
            iShowImage(P2AkX, P2AkY, AkWidth + 30, AkHeight, ak_NormalATK_R_2);
        }

        // Strong Attack
        if (P2Attacking2 == 1)
        {
            iShowImage(P2AkX, P2AkY, AkWidth+30, AkHeight, ak_StrongATK_R_2);
        }

		// Damage 

		if(P2_damage)
		{
			iShowImage(P2AkX, P2AkY, AkWidth+30, AkHeight, ak_Damage_R_1);
			
		}

        //Defend
        if (P2_Defend)
            iShowImage(P2AkX, P2AkY, AkWidth, AkHeight, ak_Defence_R_1);

        // Power Up
        if (P2_Power)
        {
            iShowImage(P2AkX - 10, P2AkY - 10, 120, 170, ak_PowerUp_R_2);
            iShowImage(P2AkX, P2AkY, AkWidth, AkHeight, ak_PowerUp_R_1);
        }

        // Ultimate
        if (P2_Ultimate)
        {
            if (P2UltimateATK == 1)
                iShowImage(P2AkX, P2AkY, AkWidth, AkHeight, ak_Ultimate_R_1);
            if (P2UltimateATK == 2)
                iShowImage(P2AkX, P2AkY, AkWidth, AkHeight, ak_Ultimate_R_2);
        }
    }

    if (P2right_Side_range == 1)
    {
        if (P2range_Attack == 1)
        {
            iShowImage(P2blx + 50 + P2blast, P2bly + 50, 27, 21, ak_StrongATK_R_3);
        }
    }
    if (P2RightSideUltimate)
    {
        if (P2Ultimate_Blast == 1)
        {
            iShowImage(P2KAMEHAMEHA + P2ulti_blast, P1AkY + 30, 100, 80, ak_KA_ME_HA_ME_HA_R);
        }
    }

    // LEFT SIDE --------------------------------------------------------
    if (P2LeftSide)
    {
        // Idle
        if (P2_Idle == 1)
        {
            if (P2idleNum == 0) iShowImage(P2AkX, P2AkY, AkWidth, AkHeight, ak_Idle_L_1);
            if (P2idleNum == 1) iShowImage(P2AkX, P2AkY, AkWidth-2, AkHeight, ak_Idle_L_2);
            if (P2idleNum == 2) iShowImage(P2AkX, P2AkY, AkWidth-2, AkHeight, ak_Idle_L_2);
        }

        // Walking
        if (P2_Walk == 1)
        {
            if (P2i == 0) {
                iShowImage(P2AkX, P2AkY, AkWidth, AkHeight, ak_Walk_L_1);
            }
            else if (P2i == 1) {
                iShowImage(P2AkX, P2AkY, AkWidth, AkHeight, ak_Walk_L_2);
            }
            if (P2i == 2) {
                iShowImage(P2AkX, P2AkY, AkWidth, AkHeight, ak_Walk_L_3);
            }
        }

        // Jumping
        if (P2jump)
        {
            if (P2jumpPic1 == 1) {
                iShowImage(P2AkX, P2AkY, AkWidth+20, AkHeight, ak_Jump_L_1);
            }
            else if (P2jumpPic3 == 1) {
                iShowImage(P2AkX, P2AkY, AkWidth+20, AkHeight, ak_Jump_L_2);
            }
            else if (P2jumpPic2 == 1) {
                iShowImage(P2AkX, P2AkY, AkWidth+20, AkHeight, ak_Jump_L_3);
            }
        }

        //Normal Attack
        if (P2Attacking1 == 1)
        {
            iShowImage(P2AkX, P2AkY, AkWidth + 30, AkHeight, ak_NormalATK_L_2);
        }

        // Strong Attack
        if (P2Attacking2 == 1)
        {
            iShowImage(P2AkX, P2AkY, AkWidth+30, AkHeight, ak_StrongATK_L_2);
        }

		// Damage 

		if(P2_damage)
		{
			iShowImage(P2AkX, P2AkY, AkWidth+30, AkHeight, ak_Damage_L_1);
			
		}

        //Defend
        if (P2_Defend)
            iShowImage(P2AkX, P2AkY, AkWidth, AkHeight, ak_Defence_L_1);

        // Power Up
        if (P2_Power)
        {
            iShowImage(P2AkX - 10, P2AkY - 10, 120, 170, ak_PowerUp_L_2);
            iShowImage(P2AkX, P2AkY, AkWidth, AkHeight, ak_PowerUp_L_1);
        }

        // Ultimate
        if (P2_Ultimate)
        {
            if (P2UltimateATK == 1)
                iShowImage(P2AkX, P2AkY, AkWidth, AkHeight, ak_Ultimate_L_1);
            if (P2UltimateATK == 2)
                iShowImage(P2AkX, P2AkY, AkWidth, AkHeight, ak_Ultimate_L_2);
        }
    }

    if (P2left_Side_range == 1)
    {
        if (P2range_Attack == 1)
        {
            iShowImage(P2blx - 50 + P2blast, P2bly + 50, 27, 21, ak_StrongATK_L_3);
        }
    }
    if (P2LeftSideUltimate)
    {
        if (P2Ultimate_Blast == 1)
        {
            iShowImage(P2KAMEHAMEHA - P2ulti_blast, P1AkY+ 30, 100, 80, ak_KA_ME_HA_ME_HA_L);
        }
    }
}

void playerOneGojo()
{
    if (P1RightSide)
    {
        // Idle
        if (P1_Idle == 1)
        {
            if (P1idleNum == 0) iShowImage(P1GojoX, P1GojoY, GojoWidth, GojoHeight, gojo_Idle_R_1);
            if (P1idleNum == 1) iShowImage(P1GojoX, P1GojoY, GojoWidth, GojoHeight, gojo_Idle_R_2);
            if (P1idleNum == 2) iShowImage(P1GojoX, P1GojoY, GojoWidth, GojoHeight, gojo_Idle_R_2);
        }

        // Walking
        if (P1_Walk == 1)
        {
            if (P1i == 0){
                iShowImage(P1GojoX, P1GojoY, GojoWidth, GojoHeight, gojo_Walk_R_1);
            }
            else if (P1i == 1){
                iShowImage(P1GojoX, P1GojoY, GojoWidth, GojoHeight, gojo_Walk_R_2);
            }
            if (P1i == 2){
                iShowImage(P1GojoX, P1GojoY, GojoWidth, GojoHeight, gojo_Walk_R_3);
            }
        }

        // Jumping
        if (P1jump)
        {
            if (P1jumpPic1 == 1){
                iShowImage(P1GojoX, P1GojoY, GojoWidth, GojoHeight, gojo_Jump_R_1);
            }
            else if (P1jumpPic3 == 1){
                iShowImage(P1GojoX, P1GojoY, GojoWidth, GojoHeight, gojo_Jump_R_2);
            }
            else if (P1jumpPic2 == 1){
                iShowImage(P1GojoX, P1GojoY, GojoWidth, GojoHeight, gojo_Jump_R_3);
            }
        }

        //Normal Attack
        if (P1Attacking1 == 1)
        {
            iShowImage(P1GojoX, P1GojoY, GojoWidth + 20, GojoHeight, gojo_NormalATK_R_2);
        }

        // Strong Attack
        if (P1Attacking2 == 1)
        {
            iShowImage(P1GojoX, P1GojoY, GojoWidth, GojoHeight, gojo_StrongATK_R_2);
        }

		// Damage
		if(P1_damage)
		{
			iShowImage(P1GojoX, P1GojoY, GojoWidth, GojoHeight, gojo_Damage_R_1);
			
		}

        //Defend
        if (P1_Defend)
            iShowImage(P1GojoX, P1GojoY, GojoWidth, GojoHeight, gojo_Defence_R_1);

        // Power Up
        if (P1_Power)
        {
            iShowImage(P1GojoX - 10, P1GojoY - 10, 120, 170, gojo_PowerUp_R_2);
            iShowImage(P1GojoX, P1GojoY, GojoWidth, GojoHeight, gojo_PowerUp_R_1);
        }

        // Ultimate
        if (P1_Ultimate)
        {
            if (P1UltimateATK == 1)
                iShowImage(P1GojoX, P1GojoY, GojoWidth, GojoHeight, gojo_Ultimate_R_1);
            if (P1UltimateATK == 2)
                iShowImage(P1GojoX, P1GojoY, GojoWidth, GojoHeight, gojo_Ultimate_R_2);
        }
    }

    if (P1right_Side_range == 1)
    {
        if (P1range_Attack == 1)
        {
            iShowImage(P1blx + 50 + P1blast, P1bly + 50, 27, 21, gojo_StrongATK_R_3);
        }
    }
    if (P1RightSideUltimate)
    {
        if (P1Ultimate_Blast == 1)
        {
            iShowImage(P1KAMEHAMEHA + P1ulti_blast, P1GojoY+ 30, 100, 80, gojo_KA_ME_HA_ME_HA_R);
        }
    }

    // LEFT SIDE --------------------------------------------------------
    if (P1LeftSide)
    {
        // Idle
        if (P1_Idle == 1)
        {
            if (P1idleNum == 0) iShowImage(P1GojoX, P1GojoY, GojoWidth, GojoHeight, gojo_Idle_L_1);
            if (P1idleNum == 1) iShowImage(P1GojoX, P1GojoY, GojoWidth, GojoHeight, gojo_Idle_L_2);
            if (P1idleNum == 2) iShowImage(P1GojoX, P1GojoY, GojoWidth, GojoHeight, gojo_Idle_L_2);
        }

        // Walking
        if (P1_Walk == 1)
        {
            if (P1i == 0){
                iShowImage(P1GojoX, P1GojoY, GojoWidth, GojoHeight, gojo_Walk_L_1);
            }
            else if (P1i == 1){
                iShowImage(P1GojoX, P1GojoY, GojoWidth, GojoHeight, gojo_Walk_L_2);
            }
            if (P1i == 2){
                iShowImage(P1GojoX, P1GojoY, GojoWidth, GojoHeight, gojo_Walk_L_3);
            }
        }

        // Jumping
        if (P1jump)
        {
            if (P1jumpPic1 == 1){
                iShowImage(P1GojoX, P1GojoY, GojoWidth, GojoHeight, gojo_Jump_L_1);
            }
            else if (P1jumpPic3 == 1){
                iShowImage(P1GojoX, P1GojoY, GojoWidth, GojoHeight, gojo_Jump_L_2);
            }
            else if (P1jumpPic2 == 1){
                iShowImage(P1GojoX, P1GojoY, GojoWidth, GojoHeight, gojo_Jump_L_3);
            }
        }

        //Normal Attack
        if (P1Attacking1 == 1)
        {
            iShowImage(P1GojoX, P1GojoY, GojoWidth + 20, GojoHeight, gojo_NormalATK_L_2);
        }

        // Strong Attack
        if (P1Attacking2 == 1)
        {
            iShowImage(P1GojoX, P1GojoY, GojoWidth, GojoHeight, gojo_StrongATK_L_2);
        }

		// Damage
		if(P1_damage)
		{
			iShowImage(P1GojoX, P1GojoY, GojoWidth, GojoHeight, gojo_Damage_L_1);
			
		}

        //Defend
        if (P1_Defend)
            iShowImage(P1GojoX, P1GojoY, GojoWidth, GojoHeight, gojo_Defence_L_1);

        // Power Up
        if (P1_Power)
        {
            iShowImage(P1GojoX - 10, P1GojoY - 10, 120, 170, gojo_PowerUp_L_2);
            iShowImage(P1GojoX, P1GojoY, GojoWidth, GojoHeight, gojo_PowerUp_L_1);
        }

        // Ultimate
        if (P1_Ultimate)
        {
            if (P1UltimateATK == 1)
                iShowImage(P1GojoX, P1GojoY, GojoWidth, GojoHeight, gojo_Ultimate_L_1);
            if (P1UltimateATK == 2)
                iShowImage(P1GojoX, P1GojoY, GojoWidth, GojoHeight, gojo_Ultimate_L_2);
        }
    }

    if (P1left_Side_range == 1)
    {
        if (P1range_Attack == 1)
        {
            iShowImage(P1blx - 50 + P1blast, P1bly + 50, 27, 21, gojo_StrongATK_L_3);
        }
    }
    if (P1LeftSideUltimate)
    {
        if (P1Ultimate_Blast == 1)
        {
            iShowImage(P1KAMEHAMEHA - P1ulti_blast, P1GojoY+ 30, 100, 80, gojo_KA_ME_HA_ME_HA_L);
        }
    }
}

void playerTwoShinobi()
{
    if (P2RightSide)
    {
        // Idle
        if (P2_Idle == 1)
        {
            if (P2idleNum == 0) iShowImage(P2ShinobiX, P2ShinobiY, ShinobiWidth-10, ShinobiHeight, shinobi_Idle_R_1);
            if (P2idleNum == 1) iShowImage(P2ShinobiX, P2ShinobiY, ShinobiWidth-10, ShinobiHeight, shinobi_Idle_R_2);
            if (P2idleNum == 2) iShowImage(P2ShinobiX, P2ShinobiY, ShinobiWidth-10, ShinobiHeight, shinobi_Idle_R_2);
        }

        // Walking
        if (P2_Walk == 1)
        {
            if (P2i == 0) {
                iShowImage(P2ShinobiX, P2ShinobiY, ShinobiWidth-15, ShinobiHeight, shinobi_Walk_R_1);
            }
            else if (P2i == 1) {
                iShowImage(P2ShinobiX, P2ShinobiY, ShinobiWidth-15, ShinobiHeight, shinobi_Walk_R_2);
            }
            if (P2i == 2) {
                iShowImage(P2ShinobiX, P2ShinobiY, ShinobiWidth-15, ShinobiHeight, shinobi_Walk_R_3);
            }
        }

        // Jumping
        if (P2jump)
        {
            if (P2jumpPic1 == 1) {
                iShowImage(P2ShinobiX, P2ShinobiY, ShinobiWidth+30, ShinobiHeight+20, shinobi_Jump_R_1);
            }
            else if (P2jumpPic3 == 1) {
                iShowImage(P2ShinobiX, P2ShinobiY, ShinobiWidth+30, ShinobiHeight+20, shinobi_Jump_R_2);
            }
            else if (P2jumpPic2 == 1) {
                iShowImage(P2ShinobiX, P2ShinobiY, ShinobiWidth+30, ShinobiHeight+20, shinobi_Jump_R_3);
            }
        }

        //Normal Attack
        if (P2Attacking1 == 1)
        {
            iShowImage(P2ShinobiX, P2ShinobiY-10, ShinobiWidth +50, ShinobiHeight+20, shinobi_NormalATK_R_2);
        }

        // Strong Attack
        if (P2Attacking2 == 1)
        {
            iShowImage(P2ShinobiX, P2ShinobiY, ShinobiWidth+30, ShinobiHeight, shinobi_StrongATK_R_2);
        }


		// Damage 

		if(P2_damage)
		{
			iShowImage(P2ShinobiX, P2ShinobiY, ShinobiWidth+30, ShinobiHeight, shinobi_Damage_R_1);
			
		}



        //Defend
        if (P2_Defend)
            iShowImage(P2ShinobiX-20, P2ShinobiY-70, ShinobiWidth+120, ShinobiHeight+177, shinobi_Defence_R_1);

        // Power Up
        if (P2_Power)
        {
            iShowImage(P2ShinobiX - 10, P2ShinobiY - 10, 120, 170, shinobi_PowerUp_R_2);
            iShowImage(P2ShinobiX, P2ShinobiY, ShinobiWidth, ShinobiHeight, shinobi_PowerUp_R_1);
        }

        // Ultimate
        if (P2_Ultimate)
        {
            if (P2UltimateATK == 1)
                iShowImage(P2ShinobiX, P2ShinobiY, ShinobiWidth, ShinobiHeight, shinobi_Ultimate_R_1);
            if (P2UltimateATK == 2)
                iShowImage(P2ShinobiX, P2ShinobiY, ShinobiWidth, ShinobiHeight, shinobi_Ultimate_R_2);
        }
    }

    if (P2right_Side_range == 1)
    {
        if (P2range_Attack == 1)
        {
            iShowImage(P2blx + 50 + P2blast, P2bly + 50, 27, 21, shinobi_StrongATK_R_3);
        }
    }
    if (P2RightSideUltimate)
    {
        if (P2Ultimate_Blast == 1)
        {
            iShowImage(P2KAMEHAMEHA + P2ulti_blast, P1ShinobiY-80,  100, 150, shinobi_KA_ME_HA_ME_HA_R);
        }
    }

    // LEFT SIDE --------------------------------------------------------
    if (P2LeftSide)
    {
        // Idle
        if (P2_Idle == 1)
        {
            if (P2idleNum == 0) iShowImage(P2ShinobiX, P2ShinobiY, ShinobiWidth, ShinobiHeight, shinobi_Idle_L_1);
            if (P2idleNum == 1) iShowImage(P2ShinobiX, P2ShinobiY, ShinobiWidth, ShinobiHeight, shinobi_Idle_L_2);
            if (P2idleNum == 2) iShowImage(P2ShinobiX, P2ShinobiY, ShinobiWidth, ShinobiHeight, shinobi_Idle_L_2);
        }

        // Walking
        if (P2_Walk == 1)
        {
            if (P2i == 0) {
                iShowImage(P2ShinobiX, P2ShinobiY, ShinobiWidth, ShinobiHeight, shinobi_Walk_L_1);
            }
            else if (P2i == 1) {
                iShowImage(P2ShinobiX, P2ShinobiY, ShinobiWidth, ShinobiHeight, shinobi_Walk_L_2);
            }
            if (P2i == 2) {
                iShowImage(P2ShinobiX, P2ShinobiY, ShinobiWidth, ShinobiHeight, shinobi_Walk_L_3);
            }
        }

        // Jumping
        if (P2jump)
        {
            if (P2jumpPic1 == 1) {
                iShowImage(P2ShinobiX, P2ShinobiY, ShinobiWidth+30, ShinobiHeight+20, shinobi_Jump_L_1);
            }
            else if (P2jumpPic3 == 1) {
                iShowImage(P2ShinobiX, P2ShinobiY, ShinobiWidth+30, ShinobiHeight+20, shinobi_Jump_L_2);
            }
            else if (P2jumpPic2 == 1) {
                iShowImage(P2ShinobiX, P2ShinobiY, ShinobiWidth+30, ShinobiHeight+20, shinobi_Jump_L_3);
            }
        }

        //Normal Attack
        if (P2Attacking1 == 1)
        {
            iShowImage(P2ShinobiX-30, P2ShinobiY-10, ShinobiWidth + 50, ShinobiHeight+20, shinobi_NormalATK_L_2);
        }

        // Strong Attack
        if (P2Attacking2 == 1)
        {
            iShowImage(P2ShinobiX, P2ShinobiY, ShinobiWidth+30, ShinobiHeight, shinobi_StrongATK_L_2);
        }

		// Damage 

		if(P2_damage)
		{
			iShowImage(P2ShinobiX, P2ShinobiY, ShinobiWidth+30, ShinobiHeight, shinobi_Damage_L_1);
			
		}

        //Defend
        if (P2_Defend)
            iShowImage(P2ShinobiX-20, P2ShinobiY-80, ShinobiWidth + 120, ShinobiHeight + 177, shinobi_Defence_L_1);

        // Power Up
        if (P2_Power)
        {
            iShowImage(P2ShinobiX - 10, P2ShinobiY - 10, 120, 170, shinobi_PowerUp_L_2);
            iShowImage(P2ShinobiX, P2ShinobiY, ShinobiWidth, ShinobiHeight, shinobi_PowerUp_L_1);
        }

        // Ultimate
        if (P2_Ultimate)
        {
            if (P2UltimateATK == 1)
                iShowImage(P2ShinobiX, P2ShinobiY, ShinobiWidth+10, ShinobiHeight+20, shinobi_Ultimate_L_1);
            if (P2UltimateATK == 2)
                iShowImage(P2ShinobiX, P2ShinobiY, ShinobiWidth+10, ShinobiHeight+20, shinobi_Ultimate_L_2);
        }
    }

    if (P2left_Side_range == 1)
    {
        if (P2range_Attack == 1)
        {
            iShowImage(P2blx - 50 + P2blast, P2bly + 50, 27, 21, shinobi_StrongATK_L_3);
        }
    }
    if (P2LeftSideUltimate)
    {
        if (P2Ultimate_Blast == 1)
        {
            iShowImage(P2KAMEHAMEHA - P2ulti_blast, P1ShinobiY-80,  100, 150, shinobi_KA_ME_HA_ME_HA_L);
        }

    }
}

void playerOneKunoichi()
{
    if (P1RightSide)
    {
        // Idle
        if (P1_Idle == 1)
        {
            if (P1idleNum == 0) iShowImage(P1KunoichiX, P1KunoichiY, KunoichiWidth, KunoichiHeight, kunoichi_Idle_R_1);
            if (P1idleNum == 1) iShowImage(P1KunoichiX, P1KunoichiY, KunoichiWidth, KunoichiHeight, kunoichi_Idle_R_2);
            if (P1idleNum == 2) iShowImage(P1KunoichiX, P1KunoichiY, KunoichiWidth, KunoichiHeight, kunoichi_Idle_R_2);
        }

        // Walking
        if (P1_Walk == 1)
        {
            if (P1i == 0){
                iShowImage(P1KunoichiX, P1KunoichiY, KunoichiWidth, KunoichiHeight, kunoichi_Walk_R_1);
            }
            else if (P1i == 1){
                iShowImage(P1KunoichiX, P1KunoichiY, KunoichiWidth, KunoichiHeight, kunoichi_Walk_R_2);
            }
            if (P1i == 2){
                iShowImage(P1KunoichiX, P1KunoichiY, KunoichiWidth, KunoichiHeight, kunoichi_Walk_R_3);
            }
        }

        // Jumping
        if (P1jump)
        {
            if (P1jumpPic1 == 1){
                iShowImage(P1KunoichiX, P1KunoichiY, KunoichiWidth+30, KunoichiHeight+20, kunoichi_Jump_R_1);
            }
            else if (P1jumpPic3 == 1){
                iShowImage(P1KunoichiX, P1KunoichiY, KunoichiWidth+30, KunoichiHeight+20, kunoichi_Jump_R_2);
            }
            else if (P1jumpPic2 == 1){
                iShowImage(P1KunoichiX, P1KunoichiY, KunoichiWidth+30, KunoichiHeight+20, kunoichi_Jump_R_3);
            }
        }

        //Normal Attack
        if (P1Attacking1 == 1)
        {
            iShowImage(P1KunoichiX, P1KunoichiY-10, KunoichiWidth + 50, KunoichiHeight +20, kunoichi_NormalATK_R_2);
        }

        // Strong Attack
        if (P1Attacking2 == 1)
        {
            iShowImage(P1KunoichiX, P1KunoichiY, KunoichiWidth, KunoichiHeight, kunoichi_StrongATK_R_2);
        }

		// Damage 

		if(P1_damage)
		{
			iShowImage(P1KunoichiX, P1KunoichiY, KunoichiWidth, KunoichiHeight, kunoichi_Damage_R_1);
			
		}

        //Defend
        if (P1_Defend)
            iShowImage(P1KunoichiX+20, P1KunoichiY-70, KunoichiWidth+120, KunoichiHeight+177, kunoichi_Defence_R_1);

        // Power Up
        if (P1_Power)
        {
            iShowImage(P1KunoichiX - 10, P1KunoichiY - 10, 120, 170, kunoichi_PowerUp_R_2);
            iShowImage(P1KunoichiX, P1KunoichiY, KunoichiWidth, KunoichiHeight, kunoichi_PowerUp_R_1);
        }

        // Ultimate
        if (P1_Ultimate)
        {
            if (P1UltimateATK == 1)
                iShowImage(P1KunoichiX, P1KunoichiY, KunoichiWidth+10, KunoichiHeight+20, kunoichi_Ultimate_R_1);
            if (P1UltimateATK == 2)
                iShowImage(P1KunoichiX, P1KunoichiY, KunoichiWidth+10, KunoichiHeight+20, kunoichi_Ultimate_R_2);
        }
    }

    if (P1right_Side_range == 1)
    {
        if (P1range_Attack == 1)
        {
            iShowImage(P1blx + 50 + P1blast, P1bly + 50, 27, 21, kunoichi_StrongATK_R_3);
        }
    }
    if (P1RightSideUltimate)
    {
        if (P1Ultimate_Blast == 1)
        {
            iShowImage(P1KAMEHAMEHA + P1ulti_blast, P1KunoichiY + 30 , 100, 150, kunoichi_KA_ME_HA_ME_HA_R);
        }
    }

    // LEFT SIDE --------------------------------------------------------
    if (P1LeftSide)
    {
        // Idle
        if (P1_Idle == 1)
        {
            if (P1idleNum == 0) iShowImage(P1KunoichiX, P1KunoichiY, KunoichiWidth, KunoichiHeight, kunoichi_Idle_L_1);
            if (P1idleNum == 1) iShowImage(P1KunoichiX, P1KunoichiY, KunoichiWidth, KunoichiHeight, kunoichi_Idle_L_2);
            if (P1idleNum == 2) iShowImage(P1KunoichiX, P1KunoichiY, KunoichiWidth, KunoichiHeight, kunoichi_Idle_L_2);
        }

        // Walking
        if (P1_Walk == 1)
        {
            if (P1i == 0){
                iShowImage(P1KunoichiX, P1KunoichiY, KunoichiWidth, KunoichiHeight, kunoichi_Walk_L_1);
            }
            else if (P1i == 1){
                iShowImage(P1KunoichiX, P1KunoichiY, KunoichiWidth, KunoichiHeight, kunoichi_Walk_L_2);
            }
            if (P1i == 2){
                iShowImage(P1KunoichiX, P1KunoichiY, KunoichiWidth, KunoichiHeight, kunoichi_Walk_L_3);
            }
        }

        // Jumping
        if (P1jump)
        {
            if (P1jumpPic1 == 1){
                iShowImage(P1KunoichiX, P1KunoichiY, KunoichiWidth+30, KunoichiHeight+20, kunoichi_Jump_L_1);
            }
            else if (P1jumpPic3 == 1){
                iShowImage(P1KunoichiX, P1KunoichiY, KunoichiWidth+30, KunoichiHeight+20, kunoichi_Jump_L_2);
            }
            else if (P1jumpPic2 == 1){
                iShowImage(P1KunoichiX, P1KunoichiY, KunoichiWidth+30, KunoichiHeight+20, kunoichi_Jump_L_3);
            }
        }

        //Normal Attack
        if (P1Attacking1 == 1)
        {
            iShowImage(P1KunoichiX-30, P1KunoichiY-20, KunoichiWidth + 50, KunoichiHeight+20, kunoichi_NormalATK_L_2);
        }

        // Strong Attack
        if (P1Attacking2 == 1)
        {
            iShowImage(P1KunoichiX, P1KunoichiY, KunoichiWidth, KunoichiHeight, kunoichi_StrongATK_L_2);
        }

		// Damage 

		if(P1_damage)
		{
			iShowImage(P1KunoichiX, P1KunoichiY, KunoichiWidth, KunoichiHeight, kunoichi_Damage_L_1);
			
		}

        //Defend
        if (P1_Defend){
            iShowImage(P1KunoichiX-70, P1KunoichiY-80, KunoichiWidth+120, KunoichiHeight+177, kunoichi_Defence_L_1);
		}
        // Power Up
        if (P1_Power)
        {
            iShowImage(P1KunoichiX - 10, P1KunoichiY - 10, 120, 170, kunoichi_PowerUp_L_2);
            iShowImage(P1KunoichiX, P1KunoichiY, KunoichiWidth, KunoichiHeight, kunoichi_PowerUp_L_1);
        }

        // Ultimate
        if (P1_Ultimate)
        {
            if (P1UltimateATK == 1)
                iShowImage(P1KunoichiX, P1KunoichiY, KunoichiWidth, KunoichiHeight, kunoichi_Ultimate_L_1);
            if (P1UltimateATK == 2)
                iShowImage(P1KunoichiX, P1KunoichiY, KunoichiWidth, KunoichiHeight, kunoichi_Ultimate_L_2);
        }
    }

    if (P1left_Side_range == 1)
    {
        if (P1range_Attack == 1)
        {
            iShowImage(P1blx - 50 + P1blast, P1bly + 50, 27, 21, kunoichi_StrongATK_L_3);
        }
    }
    if (P1LeftSideUltimate)
    {
        if (P1Ultimate_Blast == 1)
        {
            iShowImage(P1KAMEHAMEHA - P1ulti_blast, P1KunoichiY + 30 , 100, 150, kunoichi_KA_ME_HA_ME_HA_L);
        }
    }
}

//for inchigo 

void playerTwoRevIchigo()
{
    if (P2RightSide)
    {
        // Idle
        if (P2_Idle == 1)
        {
            if (P2idleNum == 0) iShowImage(P2RevIchigoX, P2RevIchigoY, RevIchigoWidth-10, RevIchigoHeight, revichigo_Idle_R_1);
            if (P2idleNum == 1) iShowImage(P2RevIchigoX, P2RevIchigoY, RevIchigoWidth-10, RevIchigoHeight, revichigo_Idle_R_2);
            if (P2idleNum == 2) iShowImage(P2RevIchigoX, P2RevIchigoY, RevIchigoWidth-10, RevIchigoHeight, revichigo_Idle_R_2);
        }

        // Walking
        if (P2_Walk == 1)
        {
            if (P2i == 0) {
                iShowImage(P2RevIchigoX, P2RevIchigoY, RevIchigoWidth-15, RevIchigoHeight, revichigo_Walk_R_1);
            }
            else if (P2i == 1) {
                iShowImage(P2RevIchigoX, P2RevIchigoY, RevIchigoWidth-15, RevIchigoHeight, revichigo_Walk_R_2);
            }
            if (P2i == 2) {
                iShowImage(P2RevIchigoX, P2RevIchigoY, RevIchigoWidth-15, RevIchigoHeight, revichigo_Walk_R_3);
            }
        }

        // Jumping
        if (P2jump)
        {
            if (P2jumpPic1 == 1) {
                iShowImage(P2RevIchigoX, P2RevIchigoY, RevIchigoWidth+20, RevIchigoHeight, revichigo_Jump_R_1);
            }
            else if (P2jumpPic3 == 1) {
                iShowImage(P2RevIchigoX, P2RevIchigoY, RevIchigoWidth+20, RevIchigoHeight, revichigo_Jump_R_2);
            }
            else if (P2jumpPic2 == 1) {
                iShowImage(P2RevIchigoX, P2RevIchigoY, RevIchigoWidth+20, RevIchigoHeight, revichigo_Jump_R_3);
            }
        }

        // Normal Attack
        if (P2Attacking1 == 1)
        {
            iShowImage(P2RevIchigoX, P2RevIchigoY, RevIchigoWidth + 30, RevIchigoHeight, revichigo_NormalATK_R_2);
        }

        // Strong Attack
        if (P2Attacking2 == 1)
        {
            iShowImage(P2RevIchigoX, P2RevIchigoY, RevIchigoWidth+30, RevIchigoHeight, revichigo_StrongATK_R_2);
        }

		// Damage 

		if(P2_damage)
		{
			iShowImage(P2RevIchigoX, P2RevIchigoY, RevIchigoWidth+30, RevIchigoHeight, revichigo_Damage_R_1);
			
		}


        // Defend
        if (P2_Defend)
            iShowImage(P2RevIchigoX, P2RevIchigoY, RevIchigoWidth, RevIchigoHeight, revichigo_Defence_R_1);

        // Power Up
        if (P2_Power)
        {
            iShowImage(P2RevIchigoX - 10, P2RevIchigoY - 10, 120, 170, revichigo_PowerUp_R_2);
            iShowImage(P2RevIchigoX, P2RevIchigoY, RevIchigoWidth, RevIchigoHeight, revichigo_PowerUp_R_1);
        }

        // Ultimate
        if (P2_Ultimate)
        {
            if (P2UltimateATK == 1)
                iShowImage(P2RevIchigoX, P2RevIchigoY, RevIchigoWidth, RevIchigoHeight, revichigo_Ultimate_R_1);
            if (P2UltimateATK == 2)
                iShowImage(P2RevIchigoX, P2RevIchigoY, RevIchigoWidth, RevIchigoHeight, revichigo_Ultimate_R_2);
        }
    }

    if (P2right_Side_range == 1)
    {
        if (P2range_Attack == 1)
        {
            iShowImage(P2blx + 50 + P2blast, P2bly + 50, 27, 21, revichigo_StrongATK_R_3);
        }
    }
    if (P2RightSideUltimate)
    {
        if (P2Ultimate_Blast == 1)
        {
            iShowImage(P2KAMEHAMEHA + P2ulti_blast, P2RevIchigoY- 50, 150, 80, revichigo_KA_ME_HA_ME_HA_R);
        }
    }

    // LEFT SIDE --------------------------------------------------------
    if (P2LeftSide)
    {
        // Idle
        if (P2_Idle == 1)
        {
            if (P2idleNum == 0) iShowImage(P2RevIchigoX, P2RevIchigoY, RevIchigoWidth, RevIchigoHeight, revichigo_Idle_L_1);
            if (P2idleNum == 1) iShowImage(P2RevIchigoX, P2RevIchigoY, RevIchigoWidth, RevIchigoHeight, revichigo_Idle_L_2);
            if (P2idleNum == 2) iShowImage(P2RevIchigoX, P2RevIchigoY, RevIchigoWidth, RevIchigoHeight, revichigo_Idle_L_2);
        }

        // Walking
        if (P2_Walk == 1)
        {
            if (P2i == 0) {
                iShowImage(P2RevIchigoX, P2RevIchigoY, RevIchigoWidth, RevIchigoHeight, revichigo_Walk_L_1);
            }
            else if (P2i == 1) {
                iShowImage(P2RevIchigoX, P2RevIchigoY, RevIchigoWidth, RevIchigoHeight, revichigo_Walk_L_2);
            }
            if (P2i == 2) {
                iShowImage(P2RevIchigoX, P2RevIchigoY, RevIchigoWidth, RevIchigoHeight, revichigo_Walk_L_3);
            }
        }

        // Jumping
        if (P2jump)
        {
            if (P2jumpPic1 == 1) {
                iShowImage(P2RevIchigoX, P2RevIchigoY, RevIchigoWidth+20, RevIchigoHeight, revichigo_Jump_L_1);
            }
            else if (P2jumpPic3 == 1) {
                iShowImage(P2RevIchigoX, P2RevIchigoY, RevIchigoWidth+20, RevIchigoHeight, revichigo_Jump_L_2);
            }
            else if (P2jumpPic2 == 1) {
                iShowImage(P2RevIchigoX, P2RevIchigoY, RevIchigoWidth+20, RevIchigoHeight, revichigo_Jump_L_3);
            }
        }

        // Normal Attack
        if (P2Attacking1 == 1)
        {
            iShowImage(P2RevIchigoX, P2RevIchigoY, RevIchigoWidth + 30, RevIchigoHeight, revichigo_NormalATK_L_2);
        }

        // Strong Attack
        if (P2Attacking2 == 1)
        {
            iShowImage(P2RevIchigoX, P2RevIchigoY, RevIchigoWidth+30, RevIchigoHeight, revichigo_StrongATK_L_2);
        }

		if(P2_damage)
		{
			iShowImage(P2RevIchigoX, P2RevIchigoY, RevIchigoWidth+30, RevIchigoHeight, revichigo_Damage_L_1);
			
		}

        // Defend
        if (P2_Defend)
            iShowImage(P2RevIchigoX, P2RevIchigoY, RevIchigoWidth, RevIchigoHeight, revichigo_Defence_L_1);

        // Power Up
        if (P2_Power)
        {
            iShowImage(P2RevIchigoX - 10, P2RevIchigoY - 10, 120, 170, revichigo_PowerUp_L_2);
            iShowImage(P2RevIchigoX, P2RevIchigoY, RevIchigoWidth, RevIchigoHeight, revichigo_PowerUp_L_1);
        }

        // Ultimate
        if (P2_Ultimate)
        {
            if (P2UltimateATK == 1)
                iShowImage(P2RevIchigoX, P2RevIchigoY, RevIchigoWidth, RevIchigoHeight, revichigo_Ultimate_L_1);
            if (P2UltimateATK == 2)
                iShowImage(P2RevIchigoX, P2RevIchigoY, RevIchigoWidth, RevIchigoHeight, revichigo_Ultimate_L_2);
        }
    }

    if (P2left_Side_range == 1)
    {
        if (P2range_Attack == 1)
        {
            iShowImage(P2blx - 50 + P2blast, P2bly + 50, 27, 21, revichigo_StrongATK_L_3);
        }
    }
    if (P2LeftSideUltimate)
    {
        if (P2Ultimate_Blast == 1)
        {
            iShowImage(P2KAMEHAMEHA - P2ulti_blast, P2RevIchigoY- 50, 150, 80, revichigo_KA_ME_HA_ME_HA_L);
        }
    }
}


void playerOneIchigo()
{
    if (P1RightSide)
    {
        // Idle
        if (P1_Idle == 1)
        {
            if (P1idleNum == 0) iShowImage(P1IchigoX, P1IchigoY, IchigoWidth, IchigoHeight, ichigo_Idle_R_1);
            if (P1idleNum == 1) iShowImage(P1IchigoX, P1IchigoY, IchigoWidth, IchigoHeight, ichigo_Idle_R_2);
            if (P1idleNum == 2) iShowImage(P1IchigoX, P1IchigoY, IchigoWidth, IchigoHeight, ichigo_Idle_R_2);
        }

        // Walking
        if (P1_Walk == 1)
        {
            if (P1i == 0){
                iShowImage(P1IchigoX, P1IchigoY, IchigoWidth, IchigoHeight, ichigo_Walk_R_1);
            }
            else if (P1i == 1){
                iShowImage(P1IchigoX, P1IchigoY, IchigoWidth, IchigoHeight, ichigo_Walk_R_2);
            }
            if (P1i == 2){
                iShowImage(P1IchigoX, P1IchigoY, IchigoWidth, IchigoHeight, ichigo_Walk_R_3);
            }
        }

        // Jumping
        if (P1jump)
        {
            if (P1jumpPic1 == 1){
                iShowImage(P1IchigoX, P1IchigoY, IchigoWidth, IchigoHeight, ichigo_Jump_R_1);
            }
            else if (P1jumpPic3 == 1){
                iShowImage(P1IchigoX, P1IchigoY, IchigoWidth, IchigoHeight, ichigo_Jump_R_2);
            }
            else if (P1jumpPic2 == 1){
                iShowImage(P1IchigoX, P1IchigoY, IchigoWidth, IchigoHeight, ichigo_Jump_R_3);
            }
        }

        //Normal Attack
        if (P1Attacking1 == 1)
        {
            iShowImage(P1IchigoX, P1IchigoY, IchigoWidth + 20, IchigoHeight, ichigo_NormalATK_R_2);
        }

        // Strong Attack
        if (P1Attacking2 == 1)
        {
            iShowImage(P1IchigoX, P1IchigoY, IchigoWidth, IchigoHeight, ichigo_StrongATK_R_2);
        }
		
		// Damage
		if(P1_damage)
		{
			iShowImage(P1IchigoX, P1IchigoY, IchigoWidth, IchigoHeight, ichigo_Damage_R_1);
			
		}

        //Defend
        if (P1_Defend)
            iShowImage(P1IchigoX, P1IchigoY, IchigoWidth, IchigoHeight, ichigo_Defence_R_1);

        // Power Up
        if (P1_Power)
        {
            iShowImage(P1IchigoX - 10, P1IchigoY - 10, 120, 170, ichigo_PowerUp_R_2);
            iShowImage(P1IchigoX, P1IchigoY, IchigoWidth, IchigoHeight, ichigo_PowerUp_R_1);
        }

        // Ultimate
        if (P1_Ultimate)
        {
            if (P1UltimateATK == 1)
                iShowImage(P1IchigoX, P1IchigoY, IchigoWidth, IchigoHeight, ichigo_Ultimate_R_1);
            if (P1UltimateATK == 2)
                iShowImage(P1IchigoX, P1IchigoY, IchigoWidth, IchigoHeight, ichigo_Ultimate_R_2);
        }
    }

    if (P1right_Side_range == 1)
    {
        if (P1range_Attack == 1)
        {
            iShowImage(P1blx + 50 + P1blast, P1bly + 50, 27, 21, ichigo_StrongATK_R_3);
        }
    }
    if (P1RightSideUltimate)
    {
        if (P1Ultimate_Blast == 1)
        {
            iShowImage(P1KAMEHAMEHA + P1ulti_blast, P1IchigoY- 50, 150, 80, ichigo_KA_ME_HA_ME_HA_R);
        }
    }

    // LEFT SIDE --------------------------------------------------------
    if (P1LeftSide)
    {
        // Idle
        if (P1_Idle == 1)
        {
            if (P1idleNum == 0) iShowImage(P1IchigoX, P1IchigoY, IchigoWidth, IchigoHeight, ichigo_Idle_L_1);
            if (P1idleNum == 1) iShowImage(P1IchigoX, P1IchigoY, IchigoWidth, IchigoHeight, ichigo_Idle_L_2);
            if (P1idleNum == 2) iShowImage(P1IchigoX, P1IchigoY, IchigoWidth, IchigoHeight, ichigo_Idle_L_2);
        }

        // Walking
        if (P1_Walk == 1)
        {
            if (P1i == 0){
                iShowImage(P1IchigoX, P1IchigoY, IchigoWidth, IchigoHeight, ichigo_Walk_L_1);
            }
            else if (P1i == 1){
                iShowImage(P1IchigoX, P1IchigoY, IchigoWidth, IchigoHeight, ichigo_Walk_L_2);
            }
            if (P1i == 2){
                iShowImage(P1IchigoX, P1IchigoY, IchigoWidth, IchigoHeight, ichigo_Walk_L_3);
            }
        }

        // Jumping
        if (P1jump)
        {
            if (P1jumpPic1 == 1){
                iShowImage(P1IchigoX, P1IchigoY, IchigoWidth, IchigoHeight, ichigo_Jump_L_1);
            }
            else if (P1jumpPic3 == 1){
                iShowImage(P1IchigoX, P1IchigoY, IchigoWidth, IchigoHeight, ichigo_Jump_L_2);
            }
            else if (P1jumpPic2 == 1){
                iShowImage(P1IchigoX, P1IchigoY, IchigoWidth, IchigoHeight, ichigo_Jump_L_3);
            }
        }

        //Normal Attack
        if (P1Attacking1 == 1)
        {
            iShowImage(P1IchigoX, P1IchigoY, IchigoWidth + 20, IchigoHeight, ichigo_NormalATK_L_2);
        }

        // Strong Attack
        if (P1Attacking2 == 1)
        {
            iShowImage(P1IchigoX, P1IchigoY, IchigoWidth, IchigoHeight, ichigo_StrongATK_L_2);
        }

		if(P1_damage)
		{
			iShowImage(P1IchigoX, P1IchigoY, IchigoWidth, IchigoHeight, ichigo_Damage_L_1);
			
		}

        //Defend
        if (P1_Defend)
            iShowImage(P1IchigoX, P1IchigoY, IchigoWidth, IchigoHeight, ichigo_Defence_L_1);

        // Power Up
        if (P1_Power)
        {
            iShowImage(P1IchigoX - 10, P1IchigoY - 10, 120, 170, ichigo_PowerUp_L_2);
            iShowImage(P1IchigoX, P1IchigoY, IchigoWidth, IchigoHeight, ichigo_PowerUp_L_1);
        }

        // Ultimate
        if (P1_Ultimate)
        {
            if (P1UltimateATK == 1)
                iShowImage(P1IchigoX, P1IchigoY, IchigoWidth, IchigoHeight, ichigo_Ultimate_L_1);
            if (P1UltimateATK == 2)
                iShowImage(P1IchigoX, P1IchigoY, IchigoWidth, IchigoHeight, ichigo_Ultimate_L_2);
        }
    }

    if (P1left_Side_range == 1)
    {
        if (P1range_Attack == 1)
        {
            iShowImage(P1blx - 50 + P1blast, P1bly + 50, 27, 21, ichigo_StrongATK_L_3);
        }
    }
    if (P1LeftSideUltimate)
    {
        if (P1Ultimate_Blast == 1)
        {
            iShowImage(P1KAMEHAMEHA - P1ulti_blast, P1IchigoY - 50, 150, 80, ichigo_KA_ME_HA_ME_HA_L);
        }
    }
}

//tanjiro and revtan 

void playerTwoRevtan()
{
    if (P2RightSide)
    {
        // Idle
        if (P2_Idle == 1)
        {
            if (P2idleNum == 0) iShowImage(P2RevtanX, P2RevtanY, RevtanWidth-10, RevtanHeight, revtan_Idle_R_1);
            if (P2idleNum == 1) iShowImage(P2RevtanX, P2RevtanY, RevtanWidth-10, RevtanHeight, revtan_Idle_R_2);
            if (P2idleNum == 2) iShowImage(P2RevtanX, P2RevtanY, RevtanWidth-10, RevtanHeight, revtan_Idle_R_2);
        }

        // Walking
        if (P2_Walk == 1)
        {
            if (P2i == 0) {
                iShowImage(P2RevtanX, P2RevtanY, RevtanWidth-15, RevtanHeight, revtan_Walk_R_1);
            }
            else if (P2i == 1) {
                iShowImage(P2RevtanX, P2RevtanY, RevtanWidth-15, RevtanHeight, revtan_Walk_R_2);
            }
            if (P2i == 2) {
                iShowImage(P2RevtanX, P2RevtanY, RevtanWidth-15, RevtanHeight, revtan_Walk_R_3);
            }
        }

        // Jumping
        if (P2jump)
        {
            if (P2jumpPic1 == 1) {
                iShowImage(P2RevtanX, P2RevtanY, RevtanWidth+20, RevtanHeight, revtan_Jump_R_1);
            }
            else if (P2jumpPic3 == 1) {
                iShowImage(P2RevtanX, P2RevtanY, RevtanWidth+20, RevtanHeight, revtan_Jump_R_2);
            }
            else if (P2jumpPic2 == 1) {
                iShowImage(P2RevtanX, P2RevtanY, RevtanWidth+20, RevtanHeight, revtan_Jump_R_3);
            }
        }

        //Normal Attack
        if (P2Attacking1 == 1)
        {
            iShowImage(P2RevtanX, P2RevtanY, RevtanWidth + 30, RevtanHeight, revtan_NormalATK_R_2);
        }

        // Strong Attack
        if (P2Attacking2 == 1)
        {
            iShowImage(P2RevtanX, P2RevtanY, RevtanWidth+30, RevtanHeight, revtan_StrongATK_R_2);
        }

		if(P2_damage)
		{
			iShowImage(P2RevtanX, P2RevtanY, RevtanWidth+30, RevtanHeight, revtan_Damage_R_1);
			
		}

        //Defend
        if (P2_Defend)
            iShowImage(P2RevtanX, P2RevtanY, RevtanWidth, RevtanHeight, revtan_Defence_R_1);

        // Power Up
        if (P2_Power)
        {
            iShowImage(P2RevtanX - 10, P2RevtanY - 10, 120, 170, revtan_PowerUp_R_2);
            iShowImage(P2RevtanX, P2RevtanY, RevtanWidth, RevtanHeight, revtan_PowerUp_R_1);
        }

        // Ultimate
        if (P2_Ultimate)
        {
            if (P2UltimateATK == 1)
                iShowImage(P2RevtanX, P2RevtanY, RevtanWidth, RevtanHeight, revtan_Ultimate_R_1);
            if (P2UltimateATK == 2)
                iShowImage(P2RevtanX, P2RevtanY, RevtanWidth, RevtanHeight, revtan_Ultimate_R_2);
        }
    }

    if (P2right_Side_range == 1)
    {
        if (P2range_Attack == 1)
        {
            iShowImage(P2blx + 50 + P2blast, P2bly + 50, 27, 21, revtan_StrongATK_R_3);
        }
    }
    if (P2RightSideUltimate)
    {
        if (P2Ultimate_Blast == 1)
        {
            iShowImage(P2KAMEHAMEHA + P2ulti_blast, P2RevtanY-80, 130, 120, revtan_KA_ME_HA_ME_HA_R);
        }
    }

    // LEFT SIDE --------------------------------------------------------
    if (P2LeftSide)
    {
        // Idle
        if (P2_Idle == 1)
        {
            if (P2idleNum == 0) iShowImage(P2RevtanX, P2RevtanY, RevtanWidth, RevtanHeight, revtan_Idle_L_1);
            if (P2idleNum == 1) iShowImage(P2RevtanX, P2RevtanY, RevtanWidth, RevtanHeight, revtan_Idle_L_2);
            if (P2idleNum == 2) iShowImage(P2RevtanX, P2RevtanY, RevtanWidth, RevtanHeight, revtan_Idle_L_2);
        }

        // Walking
        if (P2_Walk == 1)
        {
            if (P2i == 0) {
                iShowImage(P2RevtanX, P2RevtanY, RevtanWidth, RevtanHeight, revtan_Walk_L_1);
            }
            else if (P2i == 1) {
                iShowImage(P2RevtanX, P2RevtanY, RevtanWidth, RevtanHeight, revtan_Walk_L_2);
            }
            if (P2i == 2) {
                iShowImage(P2RevtanX, P2RevtanY, RevtanWidth, RevtanHeight, revtan_Walk_L_3);
            }
        }

        // Jumping
        if (P2jump)
        {
            if (P2jumpPic1 == 1) {
                iShowImage(P2RevtanX, P2RevtanY, RevtanWidth+20, RevtanHeight, revtan_Jump_L_1);
            }
            else if (P2jumpPic3 == 1) {
                iShowImage(P2RevtanX, P2RevtanY, RevtanWidth+20, RevtanHeight, revtan_Jump_L_2);
            }
            else if (P2jumpPic2 == 1) {
                iShowImage(P2RevtanX, P2RevtanY, RevtanWidth+20, RevtanHeight, revtan_Jump_L_3);
            }
        }

        //Normal Attack
        if (P2Attacking1 == 1)
        {
            iShowImage(P2RevtanX, P2RevtanY, RevtanWidth + 30, RevtanHeight, revtan_NormalATK_L_2);
        }

        // Strong Attack
        if (P2Attacking2 == 1)
        {
            iShowImage(P2RevtanX, P2RevtanY, RevtanWidth+30, RevtanHeight, revtan_StrongATK_L_2);
        }

		// Damage
		if(P2_damage)
		{
			iShowImage(P2RevtanX, P2RevtanY, RevtanWidth+30, RevtanHeight, revtan_Damage_L_1);
			
		}

        //Defend
        if (P2_Defend)
            iShowImage(P2RevtanX, P2RevtanY, RevtanWidth, RevtanHeight, revtan_Defence_L_1);

        // Power Up
        if (P2_Power)
        {
            iShowImage(P2RevtanX - 10, P2RevtanY - 10, 120, 170, revtan_PowerUp_L_2);
            iShowImage(P2RevtanX, P2RevtanY, RevtanWidth, RevtanHeight, revtan_PowerUp_L_1);
        }

        // Ultimate
        if (P2_Ultimate)
        {
            if (P2UltimateATK == 1)
                iShowImage(P2RevtanX, P2RevtanY, RevtanWidth, RevtanHeight, revtan_Ultimate_L_1);
            if (P2UltimateATK == 2)
                iShowImage(P2RevtanX, P2RevtanY, RevtanWidth, RevtanHeight, revtan_Ultimate_L_2);
        }
    }

    if (P2left_Side_range == 1)
    {
        if (P2range_Attack == 1)
        {
            iShowImage(P2blx - 50 + P2blast, P2bly + 50, 27, 21, revtan_StrongATK_L_3);
        }
    }
    if (P2LeftSideUltimate)
    {
        if (P2Ultimate_Blast == 1)
        {
            iShowImage(P2KAMEHAMEHA - P2ulti_blast, P2RevtanY-80, 130, 120, revtan_KA_ME_HA_ME_HA_L);
        }
    }
}

void playerOneTanjiro()
{
    if (P1RightSide)
    {
        // Idle
        if (P1_Idle == 1)
        {
            if (P1idleNum == 0) iShowImage(P1TanjiroX, P1TanjiroY, TanjiroWidth, TanjiroHeight, tanjiro_Idle_R_1);
            if (P1idleNum == 1) iShowImage(P1TanjiroX, P1TanjiroY, TanjiroWidth, TanjiroHeight, tanjiro_Idle_R_2);
            if (P1idleNum == 2) iShowImage(P1TanjiroX, P1TanjiroY, TanjiroWidth, TanjiroHeight, tanjiro_Idle_R_2);
        }

        // Walking
        if (P1_Walk == 1)
        {
            if (P1i == 0){
                iShowImage(P1TanjiroX, P1TanjiroY, TanjiroWidth, TanjiroHeight, tanjiro_Walk_R_1);
            }
            else if (P1i == 1){
                iShowImage(P1TanjiroX, P1TanjiroY, TanjiroWidth, TanjiroHeight, tanjiro_Walk_R_2);
            }
            if (P1i == 2){
                iShowImage(P1TanjiroX, P1TanjiroY, TanjiroWidth, TanjiroHeight, tanjiro_Walk_R_3);
            }
        }

        // Jumping
        if (P1jump)
        {
            if (P1jumpPic1 == 1){
                iShowImage(P1TanjiroX, P1TanjiroY, TanjiroWidth, TanjiroHeight, tanjiro_Jump_R_1);
            }
            else if (P1jumpPic3 == 1){
                iShowImage(P1TanjiroX, P1TanjiroY, TanjiroWidth, TanjiroHeight, tanjiro_Jump_R_2);
            }
            else if (P1jumpPic2 == 1){
                iShowImage(P1TanjiroX, P1TanjiroY, TanjiroWidth, TanjiroHeight, tanjiro_Jump_R_3);
            }
        }

        //Normal Attack
        if (P1Attacking1 == 1)
        {
            iShowImage(P1TanjiroX, P1TanjiroY, TanjiroWidth + 20, TanjiroHeight, tanjiro_NormalATK_R_2);
        }

        // Strong Attack
        if (P1Attacking2 == 1)
        {
            iShowImage(P1TanjiroX, P1TanjiroY, TanjiroWidth, TanjiroHeight, tanjiro_StrongATK_R_2);
        }

		// Damage
		if(P1_damage)
		{
			iShowImage(P1TanjiroX, P1TanjiroY, TanjiroWidth, TanjiroHeight, tanjiro_Damage_R_1);
			
		}

        //Defend
        if (P1_Defend)
            iShowImage(P1TanjiroX, P1TanjiroY, TanjiroWidth, TanjiroHeight, tanjiro_Defence_R_1);

        // Power Up
        if (P1_Power)
        {
            iShowImage(P1TanjiroX - 10, P1TanjiroY - 10, 120, 170, tanjiro_PowerUp_R_2);
            iShowImage(P1TanjiroX, P1TanjiroY, TanjiroWidth, TanjiroHeight, tanjiro_PowerUp_R_1);
        }

        // Ultimate
        if (P1_Ultimate)
        {
            if (P1UltimateATK == 1)
                iShowImage(P1TanjiroX, P1TanjiroY, TanjiroWidth, TanjiroHeight, tanjiro_Ultimate_R_1);
            if (P1UltimateATK == 2)
                iShowImage(P1TanjiroX, P1TanjiroY, TanjiroWidth, TanjiroHeight, tanjiro_Ultimate_R_2);
        }
    }

    if (P1right_Side_range == 1)
    {
        if (P1range_Attack == 1)
        {
            iShowImage(P1blx + 50 + P1blast, P1bly + 50, 27, 21, tanjiro_StrongATK_R_3);
        }
    }
    if (P1RightSideUltimate)
    {
        if (P1Ultimate_Blast == 1)
        {
            iShowImage(P1KAMEHAMEHA + P1ulti_blast, P1TanjiroY-80, 130, 120, tanjiro_KA_ME_HA_ME_HA_R);
        }
    }

    // LEFT SIDE --------------------------------------------------------
    if (P1LeftSide)
    {
        // Idle
        if (P1_Idle == 1)
        {
            if (P1idleNum == 0) iShowImage(P1TanjiroX, P1TanjiroY, TanjiroWidth, TanjiroHeight, tanjiro_Idle_L_1);
            if (P1idleNum == 1) iShowImage(P1TanjiroX, P1TanjiroY, TanjiroWidth, TanjiroHeight, tanjiro_Idle_L_2);
            if (P1idleNum == 2) iShowImage(P1TanjiroX, P1TanjiroY, TanjiroWidth, TanjiroHeight, tanjiro_Idle_L_2);
        }

        // Walking
        if (P1_Walk == 1)
        {
            if (P1i == 0){
                iShowImage(P1TanjiroX, P1TanjiroY, TanjiroWidth, TanjiroHeight, tanjiro_Walk_L_1);
            }
            else if (P1i == 1){
                iShowImage(P1TanjiroX, P1TanjiroY, TanjiroWidth, TanjiroHeight, tanjiro_Walk_L_2);
            }
            if (P1i == 2){
                iShowImage(P1TanjiroX, P1TanjiroY, TanjiroWidth, TanjiroHeight, tanjiro_Walk_L_3);
            }
        }

        // Jumping
        if (P1jump)
        {
            if (P1jumpPic1 == 1){
                iShowImage(P1TanjiroX, P1TanjiroY, TanjiroWidth, TanjiroHeight, tanjiro_Jump_L_1);
            }
            else if (P1jumpPic3 == 1){
                iShowImage(P1TanjiroX, P1TanjiroY, TanjiroWidth, TanjiroHeight, tanjiro_Jump_L_2);
            }
            else if (P1jumpPic2 == 1){
                iShowImage(P1TanjiroX, P1TanjiroY, TanjiroWidth, TanjiroHeight, tanjiro_Jump_L_3);
            }
        }

        //Normal Attack
        if (P1Attacking1 == 1)
        {
            iShowImage(P1TanjiroX, P1TanjiroY, TanjiroWidth + 20, TanjiroHeight, tanjiro_NormalATK_L_2);
        }

        // Strong Attack
        if (P1Attacking2 == 1)
        {
            iShowImage(P1TanjiroX, P1TanjiroY, TanjiroWidth, TanjiroHeight, tanjiro_StrongATK_L_2);
        }

		if(P1_damage)
		{
			iShowImage(P1TanjiroX, P1TanjiroY, TanjiroWidth, TanjiroHeight, tanjiro_Damage_L_1);
			
		}

        //Defend
        if (P1_Defend)
            iShowImage(P1TanjiroX, P1TanjiroY, TanjiroWidth, TanjiroHeight, tanjiro_Defence_L_1);

        // Power Up
        if (P1_Power)
        {
            iShowImage(P1TanjiroX - 10, P1TanjiroY - 10, 120, 170, tanjiro_PowerUp_L_2);
            iShowImage(P1TanjiroX, P1TanjiroY, TanjiroWidth, TanjiroHeight, tanjiro_PowerUp_L_1);
        }

        // Ultimate
        if (P1_Ultimate)
        {
            if (P1UltimateATK == 1)
                iShowImage(P1TanjiroX, P1TanjiroY, TanjiroWidth, TanjiroHeight, tanjiro_Ultimate_L_1);
            if (P1UltimateATK == 2)
                iShowImage(P1TanjiroX, P1TanjiroY, TanjiroWidth, TanjiroHeight, tanjiro_Ultimate_L_2);
        }
    }

    if (P1left_Side_range == 1)
    {
        if (P1range_Attack == 1)
        {
            iShowImage(P1blx - 50 + P1blast, P1bly + 50, 27, 21, tanjiro_StrongATK_L_3);
        }
    }
    if (P1LeftSideUltimate)
    {
        if (P1Ultimate_Blast == 1)
        {
            iShowImage(P1KAMEHAMEHA - P1ulti_blast, P1TanjiroY-80, 130, 120, tanjiro_KA_ME_HA_ME_HA_L);
        }
    }
}

int main()
{
	///srand((unsigned)time(NULL));
	playsound();
	iInitialize(1280, 720, "Ultimate Brawl");
	iSetTimer(100, idle);
	iSetTimer(20,  jumper);
	iSetTimer(400,  attack);
	//iSetTimer(400,  attack2);
	//iSetTimer(20, range);
	iSetTimer(400, defend);
	iSetTimer(500, powerUp);
	iSetTimer(800, Ultimate);
	iSetTimer(20, KAMEHAMEHA_Blast);
	iSetTimer(100, collision);
	iSetTimer(50, damage);
	iSetTimer(1000, decreaseTime);
	iLoadResources();
	
	///updated see the documentations
	iStart();
	return 0;
}