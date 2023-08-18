#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <conio.h>
using namespace std;

void mermaid_path(char name[], int heaven, int hell, int heart_of_the_wronged, int soul_of_the_pure, int diamond_dagger, int golden_key)
{
	cout << "You choose to go with the mermaid despite the nagging doubts in the back of your mind";
	cin.get();
	cout << "She leads you along the coast towards a some cliffs and rock fronts. You gaze towards the sea, wondering what intentions your newfound friend has.";
	cin.get();
	cout << "You think of asking Ava what her intentions were. What do you choose to say?";
	cin.get();
	int d;
	cout << "1. Where are you taking me? WHY are you taking me?" << endl;
	cout << "2. So...beautiful night isn't it..." << endl;
	cout << "3. Remain quiet" << endl;
	cout << endl;
	cout << "Enter 1 or 2 or 3: ";
	cin >> d;
	cout << endl;
	while (d != 1 && d != 2)
	{
		cout << "Invalid choice. Enter again." << endl;
		cin >> d;
		cout << endl;
	}
	cout << endl;
	if (d == 1)
    {
		heaven++;
		cout << "'Where are you taking me? WHY are you taking me?'";
		cin.get();
		cout << "Ava stays quiet for a few seconds.";
		cin.get();
		cout << "'...You're lost. My purpose is to help you...for now. As for our destination. You'll see soon enough.'";
		cin.get();
		cout << "You agree that you are lost. You just want to go home. But where even is home? Something is slowly coming back to you. But like most of your memory, it slips away, just out of reach. You sigh heavily. ";
		cin.get();
	}
	else if (d == 2)
	{
		hell++;
		cout << "'So...beautiful night isn't it...'";
		cin.get();
		cout << "....";
		cin.get();
		cout << "You feel extremely foolish at your sorry attempt at conversation";
	}
	else if (d == 3)
	{
		cout << "You decide to remain quiet and put your trust in fate, feverishly hoping your beautiful friend does not turn out to be a psychotic axe murderer.";
		cin.get();
	}
	cout << "You walk along Ava as she swims along the shore. You reach the bottom of the cliffs where there are nothing but sharp rocks, beyond which is the sea.";
	cin.get();
	cout << "'So...what now?'";
	cin.get();
	cout << "'Come with me.'";
	cin.get();
	cout << "And with that, the mermaid dives into the frigid waters.";
	cin.get();
	cout << "You stare after her incredulously, wondering if you remember how to swim. What do you do?" << endl;
	cout << endl;
	int e;
	cout << "1. Go after her" << endl;
	cout << "2. Wait for her to resurface" << endl;
	cout << endl;
	cout << "Enter 1 or 2: ";
	cin >> e;
	cout << endl;
	while (e != 1 && e != 2)
	{
		cout << "Invalid choice. Enter again." << endl;
		cin >> e;
		cout << endl;
	}
	if (e == 1)
	{
		heaven++;
		cout << "You jump into the water, expecting to be frozen on impact. Instead, the water feels like nothing and you realize with relief that you indeed know how to swim.";
		cin.get();
		cout << "You dive deeper. You can easily see everything in the water. There is no blurriness in your eyes. After swimming for a few minutes you find yourself at the mouth of an underwater cave. The mermaid is waiting for you at the entrance.";
		cin.get();
		cout << "'Follow me.'" << endl;
		cout << endl;
	}
	else if (e == 2)
	{
		hell++;
		cout << "You decide not to follow her and wonder if she will resurface with something for you.";
		cin.get();
		cout << "Sure enough, after a few minutes, she resurfaces, with a clearly annoyed look on her face.";
		cin.get();
		cout << "She raises her arms.";
		cin.get();
		cout << "'Ah shit...'";
		cin.get();
		cout << "Giant arms form from the water and move towards you with incredible speed. You barely have time to react before the arms take a hold of you and pull you underwater.";
		cin.get();
		cout << "You are dragged deeper into the water and soon you reach the mouth of an underwater cave. The giant hands dissolve and the mermaid stands at the mouth of the cave.";
		cin.get();
		cout << "'Follow me.'";
		cin.get();
	}
	cout << "What do you do?" << endl;
	int f;
    cout << "1. Try to escape" << endl;
	cout << "2. Move towards her" << endl;
	cout << endl;
	cout << "Enter 1 or 2: ";
	cin >> f;
	cout << endl;
	while (f != 1 && f != 2)
	{
		cout << "Invalid choice. Enter again." << endl;
		cin >> f;
		cout << endl;
	}
	if (f == 1)
	{
		hell++;
		cout << "You try to make a beeline towards the surface. This time Ava herself grabs hold of your arm and drags you into the cave. Her touch is mind-numbingly cold and you feel like your skin is on fire.";
		cin.get();
		cout << "Ow...ow...ok I won't try to escape anymore! Let me go!";
		cin.get();
		cout << "The mermaid lets go of your arm and gives you a look as to say 'Riiiight'. You mumble something about curses and witch's toes and follow her inside.";
		cin.get();
	}
	else if (f == 2)
	{
		heaven++;
		cout << "You move towards her and she swims into the cave. Remembering your last cave experience, you utter a few choice curses and follow her inside.";
		cin.get();
	}
	cout << "You swim after Ava for quite some time. Her silvery body and hair emit a faint glow that is the only source of luminosity in the pitch black cave.";
	cin.get();
	cout << "You both turn a corner and the cave suddenly floods with light. Thousands upon thousands of crystals and precious gems glow on the walls.";
	cin.get();
	cout << "Your mind is immediately filled with greed and the lust to collect as many gems as you can gather. However, you tramp down these feelings and continue following the mermaid";
	cin.get();
	cout << "You pass an enormous rainbow stone perched on a rock. It's multicoloured light reflects on the cave walls and the glow is extremely inviting. Your hands itch to grab hold of the stone. What do you do?";
	cout << endl;
	int g;
	cout << "1. Take the gem" << endl;
	cout << "2. Leave it" << endl;
	cout << endl;
	cout << "Enter 1 or 2: ";
	cin >> g;
	cout << endl;
	while (g != 1 && g != 2)
	{
		cout << "Invalid choice. Enter again." << endl;
		cin >> g;
		cout << endl;
	}
	if (g == 1)
	{
		hell++;
		cout << "You pick the gem off the rock. Suddenly the cave starts to rumble. Rocks begin to fall from the ceiling. Without a word, the mermaid grabs a hold of your arm and frantically swims back towards the entrance. Just as you almost reached the mouth of the cave, a giant boulder dropped from overhead. In a split second, the mermaid pushes you out of the way and disappears under the rubble. You float there, stunned, then frantically start to dig, hoping your companion was alive. You finally find the mermaid but her body has been crushed. She gasps, taking her final breath, then her eyes turn glassy. You float in the water, numb. Suddenly the dead mermaid's chest starts to glow. What do you do? " << endl;
		cout << endl;              
		int h;
		cout << "1. Cut out her heart with the gem" << endl;
		cout << "2. Do nothing" << endl;
		cout << endl;
		cout << "Enter 1 or 2: ";
		cin >> h;
		cout << endl;
		while (h != 1 && h != 2)
		{
			cout << "Invalid choice. Enter again." << endl;
			cin >> h;
			cout << endl;
		}
		if (h == 1)
		{
			hell++;
			cout << "Fearing the glow to be a sign of something dangerous, you take the gem and bring it down on the mermaid's chest. The water around you turns red. You continue to hack at the body until you find the source of the glow. It's the mermaid's heart.";
			cin.get();
			cout << "You take out the heart. The blood stained gem in your hand glows blood red. There is a flash of light and the gem and the heart vanish. In it's place there is a cracked gem that pulsates with blood red light. It gives off a sinister aura. You take it." << endl;
			cout << endl;
			cout << "Obtained : Heart of the Wronged !";
			heart_of_the_wronged++;
		}
		else if (h == 2)
		{
			cout << "You are paralysed with fright. You have no idea what is going to happen. Suddenly the glow grows brighter and bursts out of the mermaid's chest. The gem in your hand starts to brighten. There is a blinding flash and a orb appears in front of you. It gives off a sad aura. You take it. " << endl;
			cout << endl;
			cout << "Obtained : Soul of the Pure !" << endl;
			soul_of_the_pure++;
		}
		cout << endl;
		cout << "The mermaid's body then disintegrates right in front of your eyes. You feel numb and remorse. It is all your fault. Your greed caused the mermaid's death. ";
		cin.get();
		cout << "There is nothing left for you to do than to swim back upto the surface. You walk out onto the shore and with a shock, realise that you did not have to breathe the entire time you were underwater. ";
		cin.get();
		cout << "'It must've been her magic...', you say to yourself.";
		cin.get();
		cout << "With no guidance as to what to do next, you decide to make way towards the nearest civilization. The item you gained weigh heavy.";
		cin.get();
		cout << "You are crushed by what you have done. However, you have to move on, and find your home.";
		cin.get();
	}
	else if (g == 2)
	{
		heaven++;
		cout << "You take control over your will and steel yourself away from the beautiful gem. You follow the mermaid deeper into the crystal cave.";
		cin.get();
		cout << "You reach an altar. There is a magnificant shard of diamond placed on the altar. You cannot take your eyes away from it.";
		cin.get();
		cout << "The mermaid looks at you and you look back at her.";
		cin.get();
		cout << "'What?'" << endl;
		cin.get();
		cout << "'Take it'" << endl;
		cin.get();
		cout << "What do you do?" << endl;
		cout << endl;
		int i;
		cout << "1. Take the diamond" << endl;
		cout << "2. Refuse" << endl;
		cout << endl;
		cout << "Enter 1 or 2: ";
		cin >> i;
		cout << endl;
		while (i != 1 && i != 2)
		{
			cout << "Invalid choice. Enter again." << endl;
			cin >> i;
			cout << endl;
		}
		if (i == 1)
		{
			hell++;
			cout << "You pick up the diamond, nervously checking your surroundimgs to make sure the cave isn't collapsing like last time.";
			cin.get();
			cout << "It starts to change shape in your hands. A few seconds later you are holding an ornate diamond dagger.";
			cout << endl;
			cout << "Obtained : Diamond Dagger !" << endl;
			diamond_dagger++;
			cin.get();
			cout << "..." << endl;
			cin.get();
			cout << "'This will aid you in your journey'" << endl;
			cin.get();
			cout << "'How though?'" << endl;
			cin.get();
			cout << "..." << endl;
			cin.get();
			cout << "Once again, you are left hanging by the humanoid fish speaking two thousand words per second.";
		}
		if (i == 2)
		{
			heaven++;
			cout << "'No. I can't take it. I don't feel right taking something this precious. Besides. I don't trust this cave not to collapse on itself. I don't trust any caves to be honest..." << endl;
			cin.get();
			cout << "'I understand. You made the right choice " << name << ". In return, I shall reward you with this.'" << endl;
			cin.get();
			cout << "Saying that, she hands you a golden key." << endl;
			cout << endl;
			cout << "Obtained : Golden key !" << endl;
			golden_key++;
			cin.get();
		}
		cout << "Both of you then exit the cave of jewels and swim back to the surface. You are feeling quite pleased with your newfound item. You also realize that all the while you were underwater, you did not have a need to breathe. You just shrug it off as being an effect of Ava's magic." << endl;
		cin.get();
		cout << "'Go North. Towards the mountains. Trails await you. Stay strong " << name << ", and you will indeed find where you belong.'" << endl;
		cin.get();
		cout << "'Thank you'" << endl;
		cin.get();
		cout << "You then part ways with Ava, embarking on a long adventure with many trials and decisions to find your purpose, and your home.";
		cin.get();
	}

}

void fairy_path(char name[], int heaven, int hell, int dragon_armour, int fairy_wings, string pro1, string pro4, string pro3)
{
	cout << "You choose to go with Aine despite the nagging doubts in your mind. Besides, she is quite small and looks harmless. There is little chance that she could hurt you being the size she is." << endl;
	cin.get();
	cout << "You do wonder where and why she's taking you. Do you ask her about it?" << endl;
	cout << endl;
	int j;
	cout << "1. Yes" << endl;
	cout << "2. No" << endl;
	cout << endl;
	cout << "Enter 1 or 2: ";
	cin >> j;
	cout << endl;
	while (j != 1 && j != 2)
	{
		cout << "Invalid choice. Enter again." << endl;
		cin >> j;
		cout << endl;
	}
	if(j==1)
	{
		heaven++;
	    cout << "'Aine.'" << endl;
	    cin.get();
	    cout << "'Yes " << name << "." << endl;
	    cin.get();
	    cout << "'Where are you taking me?'" << endl;
	    cin.get();
	    cout << "'Your way home.'" << endl;
	    cin.get();
		cout << "'What does my home look like?" << endl;
		cin.get();
		cout << "'I don't know.'" << endl;
		cin.get();
		cout << "'Do you know why I don't remember anything about myself?'" << endl;
		cin.get();
	    cout << "..." << endl;
	    cin.get();
	    cout << "That about everything you can get out of her."<<endl;
	    cin.get();
	}
	else if (j==2)
	{
		cout << "You think it's better to remain quiet than ask questions that might anger Aine. No matter how small, magical beings are full of surprises.";
	    cin.get();
    }
	cout << "Aine leads you to a cave deep in the forest. The cave looks an aweful lot like a den. Given your history with caves, you are not at all enthusiastic about going in. What do you say?" << endl;
	cout << endl;
	int k;
	cout << "1. I'm not going in !?" << endl;
	cout << "2. I have to go in haven't I..." << endl;
	cout << endl;
	cout << "Enter 1 or 2: ";
	cin >> k;
	while (k != 1 && k != 2)
	{
		cout << "Invalid choice. Enter again." << endl;
		cin >> k;
		cout << endl;
	}
	cout << endl;
	if (k == 1)
	{
		hell++;
		cout << "'I'm not going in !?'" << endl;
		cin.get();
		cout << "Aine turns to you." << endl;
		cin.get();
		cout << "'I'm taking you inside. Even if I have to drag you. It's for your own good.'" << endl;
		cin.get();
		cout << "'I'll skip the dragging, thanks.'" << endl;
		cin.get();
		cout << "'See. That wasn't so hard.'" << endl;
		cin.get();
		cout << "'Easy for you to say....'" << endl;
		cin.get();
		cout << "'What?'" << endl;
		cin.get();
		cout << "'Nothing!'" << endl;
		cin.get();
	}
	else if (k == 2)
	{
		heaven++;
		cout << "'You're smart I see.'" << endl;
		cin.get();
		cout << "'I can tell you're being sarcastic'" << endl;
		cin.get();
		cout << "'Oh nooo you caught me.'" << endl;
		cin.get();
		cout << "'Please stop.'" << endl;
		cin.get();
	}
	cout << endl;
	cout << "Aine then leads you inside the cave. You notice puffs of smoke in the air and wonder if someone has built a campfire.";
	cin.get();
	cout << "You go deeper and suddenly the smoke makes a lot of sense. A small dragon is curled up in a nest of embers. With every breath, smoke comes out of its nostrils. It is bright red with a spikes along its spine. It looks dangerously cute to you.";
	cin.get();
	here:
	cout << "Your fairy friend suddenly hands you a dagger. You look at her in alarm and she motions for you to make a move. You know what she is trying to say. But what will you do?" << endl;
	cout << endl;
	int l;
	cout << "1. Kill the baby dragon" << endl;
	cout << "2. Take pity on it" << endl;
	cout << endl;
	cout << "Enter 1 or 2: ";
	cin >> l;
	while (l != 1 && l != 2)
	{
		cout << "Invalid choice. Enter again." << endl;
		cin >> l;
		cout << endl;
	}
	if (l == 2)
	{
		hell++;
		cout << "You decide you are not ready to murder a child just yet. You try to back out of the cave but in the process, you accidentally drop the dagger. Instead of making a horrible clanging sound, the dagger disappears in a flash of light. That was somehow worse as the baby dragon wakes up. Aine magically disappears along with the dagger. You and the dragon both stare at each other for a second. Then it pounces." << endl;
		cin.get();
		cout << "'NO !!!'" << endl;
		cin.get();
		cout << "You utter a final cry as the dragon clamps its jaw on your neck.";
		cin.get();
		cout << "There is a flash of light. And then darkness." << endl;
		cin.get();
		cout << "YOU DIED" << endl;
		cout << endl;
		cout << "Do you wish to redo last choice?" << endl;
		cout << endl;
		int l1;
		cout << "1. Yes" << endl;
		cout << "2. No" << endl;
		cout << endl;
		cout << "Enter 1 or 2: ";
		cin >> l1;
		cout << endl;
		if (l1 == 2)
		{
			cout << "You are about to exit the program. You will not be able to recover your choices. Do you wish to proceed?" << endl;
			cout << endl;
			int m;
			cout << "1. Yes" << endl;
			cout << "2. No" << endl;
			cout << endl;
			cout << "Enter 1 or 2: ";
			cin >> m;
			cout << endl;
			if (m == 1)
			{
				system("cls");
				exit(0);
			}
			else if (m == 2)
			{
				cout << "You chose to redo your choice." << endl;
				goto here;
			}
		}
		if (l1 == 1)
		{
			goto here;
		}
	}
	else if (l == 1)
	{
		heaven++;
		cout << "You steel your heart and prepare yourself for what you're about to do. You position yourself over the sleeping dragon. Curiosly, the embers don't seem to hurt you at all. You take a deep breath. " << endl;
		cin.get();
		cout << "'I'm sorry little one...'" << endl;
		cin.get();
		cout << "With that, you plunge your dagger into the dragon's head. It shudders for a second, exhales one last puff of smoke, and is still. You swallow a sob and extract the dagger from the creature's head." << endl;
		cin.get();
		cout << "'Why did I have to it?'" << endl;
		cin.get();
		cout << "'Because it would've killed you for good.'" << endl;
		cin.get();
		cout << "You sit down heavily onto the floor. After some minutes, you look up to see that the dragon's corpse is gone. Replaced with some sort of steel plates. Upon closer inspection, it turns out to be armour. Finest dragon scale armour. The kind even the most skilled of craftsmen cannot replicate.";
		cin.get();
		cout << "You take the armour." << endl;
		cout << endl;
		cout << "Obtained : Dragon Armour !" << endl;
		dragon_armour++;
		cin.get();
	}
	cout << "Aine leads you out of the cave. The achievement of obtaining a new item does not diminish the guilt in your heart. You know deep down that your fairy companion has your best interests at heart. But you are starting to question her methods.";
	cin.get();
	cout << "You walk with her to her home, which turns out to be a colony of fairies with different coloured wings. No one seems to be afraid of you, which is a relief. Aine guides you to a soft sppoy under an old willow tree. You immediately feel at peace. You close your eyes but sleep won't come to you. Instead you just kick back and relax, taking in the light breeze and the buzzing of the fairies.";
	cin.get();
	cout << "Suddenly the air turns rancid. The fairies freeze in the air. There is an ominous presense heading your way. You equip the dragon armour you acquired from the dragon's nest.";
	cin.get();
	cout << "The presense comes closer. You see it! A mass of darkness moving slowly towards you. Suddenly, it lunges at you!" << endl;
	cin.get();
	cout << "This is a timed choice! Choose quickly!" << endl; 
	cout << endl;
	cout << "1. ATTACK !!!" << endl;
	cout << "2. Hesitate" << endl;
	cout << endl;
	
	int numInput;

	clock_t start = clock();

	cout << "Timer: 15 sec" << endl;

	cout << "Please enter 1 or 2: ";

	while (!_kbhit())                                  //Check for keyboard hit
	{
		//Check if 2 sec timer expired or not
		if (((clock() - start) / CLOCKS_PER_SEC) >= 15)
		{
			cout << "TIME IS UP" << endl;
			cout << endl;
			cout << "The sudden attack confuses you and you struggle to defend yourself. Hands materialize on the shapeless mass. You watch with horror as they swipe at you. The hands pass straight through your head and you are hit with blinding pain. Your vision turns black and you collapse.";
			cin.get();
			cout << "When you come to, you see Aine hovering in front of you." << endl;
			cin.get();
			cout << "'AINE GET OUT OF THE WAY !!!" << endl;
			cin.get();
			cout << "You scream as the dark mass consumes your fairy companion. As if electrified, you spring to your feet and use your armour's gauntlet to land a blow onto the spirit. The blow passes through its body and it dissolves in a puff of darkness. As if absorbing the negative effects of the dark mana, your armour shatters.";
			cin.get();
			cout << "You are stricken with grief over the loss of Aine. And apparently you're not alone. The rest of the fairies have started to cry, tears like tiny pearls flowing down their small cheeks.";
			cin.get();
			cout << "Without warning they all look at you in unision. A fairy comes closer to you. She too, had golden hair like Aine, but her wings were a light green.";
			cin.get();
			cout << "'Leave', she said, 'And take her with you.'" << endl;
			cin.get();
			cout << "She pointed to the place where Aine had fallen. Instead of her body, there lay a pair of bright golden wings." << endl;
			cin.get();
			cout << "'I'm sorry..." << endl;
			cin.get();
			cout << "You take the wings." << endl;
			cout << endl;
			cout << "Obtained : Fairy Wings !" << endl;
			fairy_wings++;
			cin.get();
			cout << "With no guidance as to what to do next, you decide to make way towards the nearest civilization. The item you gained weigh heavy.";
			cout << endl;
			cout << "You are crushed by what you have done. However, you have to move on, and find your home.";
			cout << endl;
			start = clock();
			goto forward;                           
		}
	}

	//Get the input here
	cin >> numInput;

	while (numInput != 1 && numInput != 2)
	{
		cout << "invalid input" << endl;
		cin >> numInput;
	}
	if (numInput == 1)
	{
		cout << "You attack the evil spirit with your bare hands. The armours protects you and all it takes is a single blow to end it. The spirit dissolves into nothingness and all the fairies cheer for you. However, your armour also breaks after dealing with the dark energy. Not much help that was." << endl;
		cin.get();
		cout << "You overhear some of the fairies making comments about you." << endl;
		cin.get();
		cout << "'" << pro4 << " looks to be very brave. Wonder what " << pro1 << " were like in "<<pro3<<" past.'" << endl;
		cin.get();
		cout << "That comment confuses you a bit. But you take it in stride. You see Aine coming towards you." << endl;
		cin.get();
		cout << "'Here is where we part ways. Go to the mountains up North. You'll find what you look for. Stay safe.'" << endl;
		cin.get();
		cout<<"You make your way towards the mountains, wondering what surprises are in store for you next.";
		cin.get(); 
	}
	else if (numInput == 2)
	{
		cout << "The sudden attack confuses you and you struggle to defend yourself. Hands materialize on the shapeless mass. You watch with horror as they swipe at you. The hands pass straight through your head and you are hit with blinding pain. Your vision turns black and you collapse.";
		cin.get();
		cout << "When you come to, you see Aine hovering in front of you." << endl;
		cin.get();
		cout << "'AINE GET OUT OF THE WAY !!!" << endl;
		cin.get();
		cout << "You scream as the dark mass consumes your fairy companion. As if electrified, you spring to your feet and use your armour's gauntlet to land a blow onto the spirit. The blow passes through its body and it dissolves in a puff of darkness.";
		cin.get();
		cout << "You are stricken with grief over the loss of Aine. And apparently you're not alone. The rest of the fairies have started to cry, tears like tiny pearls flowing down their small cheeks.";
		cin.get();
		cout << "Without warning they all look at you in unision. A fairy comes closer to you. She too, had golden hair like Aine, but her wings were a light green.";
		cin.get();
		cout << "'Leave', she said, 'And take her with you.'" << endl;
		cin.get();
		cout << "She pointed to the place where Aine had fallen. Instead of her body, there lay a pair of bright golden wings." << endl;
		cin.get();
		cout << "'I'm sorry..." << endl;
		cin.get();
		cout << "You take the wings." << endl;
		cout << endl;
		cout << "Obtained : Fairy Wings !" << endl;
		fairy_wings++;
		cin.get();
		cout << "With no guidance as to what to do next, you decide to make way towards the nearest civilization. The item you gained weigh heavy.";
		cout << endl;
		cout << "You are crushed by what you have done. However, you have to move on, and find your home.";
		cout << endl;
	}
	
	forward:
	cout << "......";

}

void human_path(char name[], int heaven, int hell)
{
	cout << "You refuse to go with her." << endl;
	cin.get();
	cout << "'I don't trust you. I can't go with you knowing there's a chance you'll turn on me.'" << endl;
	cin.get();
	cout << "She remains quiet for a few seconds." << endl;
	cin.get();
	cout << "'Please. Trust me. I only want to help you.'" << endl;
	cin.get();
	cout << "'Then tell me what are your intentions!?'" << endl;
	cin.get();
	cout << "'I can't...'" << endl;
	cin.get();
	cout << "'Then I guess this is it...'" << endl;
	cin.get();
	cout << "'...goodbye "<< name << ". You would do well to go North'" << endl;
	cin.get();
	cout << "'What's North?'" << endl;
	cin.get();
	cout << "But she is already gone, disappearing in a flash of light." << endl;
	cin.get();
	cout << "You feel like you have lost something important. However, you have made your decision. But North...do you trust her advice?" << endl;
	cout << endl;
	int o;
	cout << "1. Trust her" << endl;
	cout << "2. Don't trust her" << endl;
	cout << endl;
	cout << "Enter 1 or 2: ";
	cin >> o;
	cout << endl;
	while (o != 1 && o != 2)
	{
		cout << "Invalid choice. Enter again." << endl;
		cin >> o;
		cout << endl;
	}
	if (o == 1)
	{
		heaven++;
		cout << "You trust her advice. Despite not trusting her notives, you have faith that she is an honest being. You start making your way North towards the mountains.";
		cin.get();
		cout << "You are walking quietly along a winding path through some fields when you see someone gesturing to you up ahead. You realize it's a human. Breathing sigh or relief, you go upto the stranger and introduce yourself." << endl;
		cin.get();
		cout << "'Greetings. My name is " << name << ". Who are you?'" << endl;
		cin.get();
		cout << "The stranger seems delighted to meet you." << endl;
		cin.get();
		cout << "'My name is Diavolo. I'm a guide and shephard is these parts. You seem to be a traveller. Where are your possessions?'" << endl;
		cin.get();
		cout << "You quickly come up with a story." << endl;
		cin.get();
		cout << "'I am a mountaineer. I conquer mountains as a sport. Can you guide me towards a path leading upto the foot of the tallest mountain?'" << endl;
		cin.get();
		cout << "Oh certainly! But it's a 3 days hike from here to the base. You must be tired. Let me show you to a town where you can rest for a bit. Then we can start our journey tomorrow. How bout it?'" << endl;
		cin.get();
	}
	else if (o == 2)
	{
		hell++;
		cout << "You shrug off her advice. You had just met her and had no reason to trust her. You decide to make your way to the nearest town or village in order to sort out your missing memories.";
		cin.get();
		cout << "You are walking quietly along a winding path through some fields when you see someone gesturing to you up ahead. You realize it's a human. Breathing sigh or relief, you go upto the stranger and introduce yourself." << endl;
		cin.get();
		cout << "'Greetings. My name is " << name << ". I am a traveller in need of a place to stay. Can you aid me in some way?'" << endl;
		cin.get();
		cout << "The stranger seems delighted to meet you." << endl;
		cin.get();
		cout << "'My name is Diavolo. I'm a guide and shephard is these parts. You seem to be a little lost. Where are your possessions?'" << endl;
		cin.get();
		cout << "You quickly come up with a story." << endl;
		cin.get();
		cout << "'I was robbed a few days back. I lost all my baggage and have no money.'" << endl;
		cin.get();
		cout << "Oh I understand! You must be tired. Let me show you to a town where you can rest for a bit. Then we can sort out your money problems. How bout it?'" << endl;
		cin.get();
	}
	cout << "You agree to go with Diavolo and he leads you towards a small town nested in a small valley. The area is filled with greenery and filled with people bustling about doing their businesses." << endl;
	cin.get();
	cout << "'Let's get you settled down in an inn. Luckily for you I know the best place.'" << endl;
	cin.get();
	cout << "'He leads you towards a relatively old building with a faded sign-post which has a carving of a goat on it.'" << endl;
	cin.get();
	cout << "'This place may be a bit old but you cannot get better drinks anywhere else. Also, I know the owner of the inn so I can get you a room for free. By tomorrow, you can help out at the inn to earn money if you need.'" << endl;
	cin.get();
	cout << "'Thank you. That sounds good.'" << endl;
	cin.get();
	cout << "Diavolo goes to talk to the inn-keeper while you take a look around. The inn isn't crowded at all. A few people drinking drinks either in solitude or in groups. Most of them are wearing hoods.'";
	cin.get();
	cout << "Diavolo comes back with your key." << endl;
	cin.get();
	cout << "'Unfortunately, there aren't any rooms left upstairs but I was able to get you one in the basement. You're not afraid of the dark are you?'" << endl;
	cin.get();
	cout << "You find this a bit odd as there weren't many people in the inn. But you go along with your guide anyway. He leads you down into the basement and takes several turns into multiple hallways before stopping at a shabby door. He puts the key into the lock." << endl;
	cin.get();
	cout << "'Here you go. Take the key. Although there is no need. No one ever locks their door here anyway. But in case you want privacy, you are welcome to do so.'" << endl;
	cin.get();
	cout << "You thank Diavolo and enter the room, closing the door behind you. Without warning, you are hit with a strong feeling of deja-vu and you reel. You cannot help feeling that you've been here before. Tramping down your feelings you move towards the bed. The lamp is burning with a small flame. While walking across the room you stop. You stomp your feet in the middle of the room. Just as you suspected, the area under your feet is hollow.";
	cin.get();
	cout << "All of this is making you nervous. You are curious about what's under your feet but you're also not sure if you can deal with this alone. What do you do?" << endl;
	cout << endl;
	int p;
	cout << "1. Check under the floorboards" << endl;
	cout << "2. Get out of the room and get someone to help you" << endl;
	cout << endl;
	cout << "Enter 1 or 2: ";
	cin >> p;
	while (p != 1 && p != 2)
	{
		cout << "Invalid choice. Enter again." << endl;
		cin >> p;
		cout << endl;
	}
	if (p == 2)
	{
		hell++;
		cout << "You make a beeline for the door, but to your horror you find it locked. You are completely sure that you did not lock the door. But you remember you still have the key in your hand. You bring the key to the lock and to your shock, it disintegrates. You are now, officially, stuck.";
		cin.get();
		cout << "You have no choice but to wait for the door to open. However, curiosity wins and you find yourself standing over the hollow floorboards.";
		cin.get();
	}
	if (p == 1)
	{
		heaven++;
		cout << "You decide to investigate the floorboards yourself.";
		cin.get();
	}
	cout << "You pry at the wooden boards. They are mostly rotted from under and easily come off. You reveal an opening big enough for a mouse to crawl through. You start removing the floorboards one by one until you create an opening big enough for yourself. ";
	cin.get();
	cout << "You put your head down in the opening and are surprised to see that you a staring upside down into a spacious passageway.";
	cin.get();
	cout << "Jumping down, you start to make your way into the passage. There is something down there that is drawing you towards it. You are gravitated towards something unknown and you can't seem to pull away.";
	cin.get();
	while (true)
	{
		cout << "You move deeper and deeper into the passage. All of sudden, the air turns heavily and you hear a tortorous moan cut through the air. There are thunderous footsteps echoing in the passage. You hold your breath, waiting. An enormous shadow forms and you see the owner approaching you slowly. It's a gigantic three-headed dog! You bolt back where you came from but the one of the heads manage to bite your leg. It's lifts you up in the air. Your leg burns. What do you do? " << endl;
		cout << endl;
		int q;
		cout << "1. Punch the doghead's eye" << endl;
		cout << "2. Scream" << endl;
		cout << endl;
		cout << "Enter 1 or 2: ";
		cin >> q;
		while (q != 1 && q != 2)
		{
			cout << "Invalid choice. Enter again." << endl;
			cin >> q;
			cout << endl;
		}
		if (q == 2)
		{
			hell++;
			cout << "You scream and the dog, enraged by the noise, slams you down on the floor. There is an audible crack and you just have the time to see a gigantic paw close in over your head before your vision turns black." << endl;
			cin.get();
			cout << "YOU DIED !" << endl;
			cout << endl;
			cout << "Choose again." << endl;
			cout << endl;
		}
		else if (q == 1)
		{
			heaven++;
			cout << "You punch the doghead's eye with your fist. It howls and lets go of your leg. The other two heads snap at you.";
			cin.get();
			break;
		}
	}
	while (true)
	{
		cout << "You sramble to find something to fight back with. In your haste, you trip and fall face first onto the ground. You sense the monster closing in on you." << endl;
		cout << endl;
		int r;
		cout << "1. Run" << endl;
		cout << "2. Pick up a rock" << endl;
		cout << endl;
		cout << "Enter 1 or 2: ";
		cin >> r;
		while (r != 1 && r != 2)
		{
			cout << "Invalid choice. Enter again." << endl;
			cin >> r;
			cout << endl;
		}
		if (r == 2)
		{
			hell++;
			cout << "You pick up a sharp rock beside your head and throw it at the monster. It misses its mark completely. You gulp. The monster growls and the last thing you see is a giant max closing around your face." << endl;
			cin.get();
			cout << "YOU DIED !" << endl;
			cout << endl;
			cout << "Choose again." << endl;
			cout << endl;
		}
		if (r == 1)
		{
			heaven++;
			cout << "Focusing all your remaining energy into your limbs, you manage to get up and narrowly miss one of the dog heads as it snaps at you.";
			cin.get();
			break;
		}
	}
	cout << "You run back towards the opening. The monster tries to follow you but it's slow due to it's size and being in a cramped space. You make it out of the tunnel just as the monster lunges at you. ";
	cin.get();
	cout << "Climbing into your room you frantically look for a weapon. Finding none you try your luck at they door again. Still locked. You have no choice but to face the three-headed monster.";
	cin.get();
	while (true)
	{
		cout << "There is a crack and you spin around. One of the dog heads is trying to force its way through the gap in the floor. However, it gets stuck. you have a chance! What do you do?";
		cin.get();
		int s;
		cout << "1. Grab the lamp" << endl;
		cout << "2. Try to escape " << endl;
		cout << endl;
		cout << "Enter 1 or 2: ";
		cin >> s;
		cout << endl;
		while (s != 1 && s != 2)
		{
			cout << "Invalid choice. Enter again." << endl;
			cin >> s;
			cout << endl;
		}
		if (s == 1)
		{
			hell++;
			cout << "You hurry and grab the lamp. The dog head is making headway into tearing the floor apart. Cautiously moving forward, you pour the burning oil from the lamp directly into the dog head's eye. It gives a bloodcurdling scream and retreats into the tunnel.";
			cin.get();
			cout << "For a second you feel elated. The monster is gone! But the next second, the floor is torn apart and all three heads emerge. You try to back up but one of the heads grabs you by its jaw. You feel a searing burn where you've been injured. The last thing you feel are your arms and legs being torn apart. Then black." << endl;
			cin.get();
			cout << "YOU DIED !" << endl;
			cout << endl;
			cout << "Choose again" << endl;
			cin.get();
		}
		if (s == 2)
		{
			heaven++;
			cout << "In despair, you throw yourself at the door, desperately trying to force your way through. You close your eyes, pressing your forehead against the door, and take a deep breath.";
			cin.get();
			cout << "Next thing you know, you're lying face-down on solid ground. Momentarily stunned, you wait till a count of 5 to get your bearings. You look back, and there is no mistaking it. You had somehow, MAGICALLY, phased through the door. And amazingly, you are still in one piece.";
			cin.get();
			break;
		}
	}
	cout << "You hear a crashing sound from inside the room and realize the monster had succeeded in getting its three heads out. Not wanting to be held responsible for property damage, you quickly make to get out of the inn.";
	cin.get();
	cout << "You have no money and are a bit shaken by your experience. So your sense of right and wrong is at an all time low. Before exiting the inn you steal a cloak from the coat rack beside the door. You are not excatly being inconspicous but no one stops you either. You wander the streets on the small town.";
	cin.get();
	cout << "You remember the magical being's advice from before. You have no home to go to and no place to stay. Also, you are quite confused about your whole ordeal. You start having second thoughts about not accepting help when you werre offered it back then." << endl;
	cin.get();
	cout << "But remembering the advice you decide to make your way towards the mountains, wondering what surprises are in store for you next.";
	cin.get();
}

int main()
{
	cout << "Welcome to HOME." << endl;
	cout << "A simple (extremely short) text-based game made by Nightshade. Traverse through the story as it unfolds based on your choices. Choose wisely. You will not be able to redo your decisions. Will you make the correct ones? " << endl;
	cout << "Press enter to continue" << endl;
	cin.get();
	    
		int heaven=0;
		int hell=0;
		int heart_of_the_wronged = 0;
		int soul_of_the_pure = 0;
		int diamond_dagger = 0;
		int golden_key = 0;
		int dragon_armour = 0;
		int fairy_wings = 0;
		int fairy = 0;
		int mermaid = 0;
		int human = 0;
		int escape = 0;
		int accept = 0;
	
		//input name
		char name[50];
		cout << "Please enter your name" << endl;
		cout << endl;
		cin.getline(name, 50);
		cout << endl;

		//input pronouns
		int n;
		string pro1, pro4;
		string pro2, pro5;
		string pro3, pro6;
		cout << "Please select pronouns" << endl;
		cout << endl;
		cout << " 1. He/Him" << endl;
		cout << " 2. She/Her" << endl;
		cout << " 3. They/them" << endl;
		cout << endl;
		cout << "Enter 1, 2 or 3: ";
		cin >> n;

		while (n != 1 && n != 2 && n != 3)
		{
			cout << "Invalid Input. Enter again" << endl;
			cin >> n;
			cout << endl;
		}

		if (n == 1)
		{
			pro1 = "he";
			pro2 = "him";
			pro3 = "his";
			pro4 = "He";
			pro5 = "Him";
			pro6 = "His";
		}
		if (n == 2)
		{
			pro1 = "she";
			pro2 = "her";
			pro3 = "hers";
			pro4 = "She";
			pro5 = "Her";
			pro6 = "Hers";
		}
		if (n == 3)
		{
			pro1 = "they";
			pro2 = "them";
			pro3 = "their";
			pro4 = "They";
			pro5 = "Them";
			pro6 = "Their";
		}

    cout << endl;
	cout << "Your name is " << name << " and your pronouns are " << pro1 << ", " << pro2 << " and " << pro3;
	cout << endl;

	system("pause");
	cin.get();
	system("cls");
	cout << "Home...";
	cin.get();
    system("cls");

	cout << "--------------------PART I--------------------" << endl;
	cout << "                THE AWAKENING                 " << endl;
	cout << endl;
	cout << endl;
	Sleep(2000);
	cout << "Darkness...." << endl;
	cout << endl;
	Sleep(1500);
	cout << "I was falling..." << endl;
	cout << endl;
	Sleep(1500);
	cout << "But from where?" << endl;
	cout << endl;
	Sleep(1500);
	cout << "When you open your eyes, You are in a strange place. You don't remember how you got there. You don't remember your name or who you are.";
	cin.get();
	cout << "You get up and look around. You seem to be in a stone cave. Behind you is a cliff ending in darkness and in front of you the passage moves on.";
	cin.get();
	cout << "You start to walk forward. After some time walking you start to feel agitated. There is a feeling that you are being followed. You have to get out of the cave quickly!";
	cin.get();
	cout << "Suddenly you arrive at a fork in the path. The terrifying feeling is getting stronger. Which path do you choose?" << endl;
	cout << endl;
	cout << "1. Right" << endl;
	cout << "2. Left" << endl;
	int b;
	cout << endl;
	cout << "Enter 1 or 2: ";
	cin >> b;
	cout << endl;
	while (b != 1 && b != 2)
	{
		cout << "Invalid choice. Enter again." << endl;
		cin >> b;
		cout << endl;
	}
	if(b==1)
	{
		cout << "You choose the right path and start running. The ominous sensation is eating away at you. Suddenly you see light at the end of the passage. You start to run faster."<<endl;
		cin.get();
		cout << "'Come on, just a little more....I can make it!'" << endl;
		cin.get();
		cout << "You burst trough the mouth of the cave and find yourself blinded by the light. After a few moments, you open your eyes. There is a vast sea in front of you. A cool breeze is blowing and there is calming sound of waves crashing against rocks. It's night and there is a full moon in the clear sky. Which is confusing because you were blinded just a second ago. The feeling of terror is gone and a serene calm washes over your body.";
		cin.get();
		cout << "Suddenly there is a deep rumbling. You look back and rocks begin to fall within the cave. It collapsed! Not that you're sorry about it in the slightest.";
		cin.get();
		cout << "There is no way to go other than forward. So you start to move along the seashore. It's a beautiful night and you admire the scenery.";
		cin.get();
		cout << "Suddenly you hear a whisper. You look around but there's no one there. The whisper came again. And you hasten to find its source.";
		cin.get();
		cout << "You look towards the sea and you see something glowing just a few feet away! You move towards it unconciously. The glow surfaces and you hear youself gasp" << endl;
		cin.get();
		cout << "'What the...!!!'"<<endl;
		cin.get();
		cout << "It's a mermaid! She's beautiful and heavenly, with silver hair and crown, and a silvery tail. She whispers something. You are transfixed. Slowly, you move towards her. " << endl;
        cin.get();
		cout << "'What are you saying?' You say to her. You move closer. And closer."<<endl;
		cin.get();
		cout << "!!!!"<<endl;
		cin.get();
		cout << "'" << name << "'"<<endl;
		cin.get();
		cout << "You know without a doubt that she is calling out to you. 'I am " << name << ". And the moment the words escape your lips, voices flood into your head. Memories of all the times you heard people say your name. It's like a part of you has been restored."<<endl;
		cin.get();
		cout << "'How do you know my name?'"<<endl;
		cin.get();
		cout << "'I am Ava. And I see your name in your soul. Come with me.'"<<endl;
		cin.get();
		cout << "There is no doubt in your mind that she's teling the truth. However, you are skeptical about going with her. What do you choose? " << endl;
		cout << endl;
		int c;
		cout << "1. Go with her" << endl;
		cout << "2. Decline" << endl;
		cout << endl;
		cout << "Enter 1 or 2: ";
		cin >> c;
		while (c != 1 && c != 2)
		{
			cout << "Invalid choice. Enter again." << endl;
			cin >> c;
			cout << endl;
		}

		if (c == 1)
		{
			mermaid++;
			heaven++;
			mermaid_path(name, heaven, hell, heart_of_the_wronged, soul_of_the_pure, diamond_dagger, golden_key);
			
		}
		else if (c == 2)
		{
			human++;
			hell++;
			human_path(name, heaven, hell);
		}
	}
	else if (b == 2)
	{
		cout << "You choose the left path and start running. The ominous sensation is eating away at you. Suddenly you see light at the end of the passage. You start to run faster."<<endl;
		cin.get();
		cout << "'Come on, just a little more....I can make it!'"<<endl;
		cin.get();
		cout << "You burst trough the mouth of the cave and find yourself blinded by the light. After a few moments, you open your eyes. There is a dense forest in front of you. Tall trees form a natural canopy and you hear small animals move within the tall branches. It's night and there is a full moon in the clear sky. Which is confusing because you were blinded just a second ago. The feeling of terror is gone and a serene calm washes over your body.";
		cin.get();
		cout << "Suddenly there is a deep rumbling. You look back and rocks begin to fall within the cave. It collapsed! Not like you're sorry about that in the slightest.";
		cin.get();
		cout << "There is no way to go other than forward. So you start to move. It's a beautiful night and you admire the scenery. However, you can't help but be slightly nervous about the possible dangers lurking within the trees. ";
		cin.get();
		cout << "Suddenly you hear a whisper. You look around but there's no one there. The whisper came again. And you hasten to find its source.";
		cin.get();
		cout << "You move deeper into the forest and after a few minutes of searching, you see something glowing just a few feet away! You move towards it unconciously. The glow moves closer and you hear youself gasp."<<endl;
		cin.get();
		cout << "'What the...!!!'"<<endl;
		cin.get();
		cout << "It's a tree spirit! She's beautiful and heavenly, with golden hair and wings, and a dress made of roses. She whispers something. You are transfixed. Slowly, you move towards her. ";
		cin.get();
		cout << "'What are you saying?' You say to her. You move closer. And closer."<<endl;
		cin.get();
		cout << "!!!!"<<endl;
		cin.get();
		cout << "'" << name << "'"<<endl;
		cin.get();
		cout << "You know without a doubt that she is calling out to you. 'I am " << name << ". And the moment the words escape your lips, voices flood into your head. Memories of all the times you heard people say your name. It's like a part of you has been restored.";
		cin.get();
		cout << "'How do you know my name?'"<<endl;
		cin.get();
		cout << "'I am Aine. And I see your name in your soul. Come with me.'"<<endl;
		cin.get();
		cout << "There is no doubt in your mind that she's teling the truth. However, you are skeptical about going with her. What do you choose? " << endl;
		cout << endl;
		int d;
		cout << "1. Go with her" << endl;
		cout << "2. Decline" << endl;
		cout << endl;
		cout << "Enter 1 or 2: ";
		cin >> d;
		while (d != 1 && d != 2)
		{
			cout << "Invalid choice. Enter again." << endl;
			cin >> d;
			cout << endl;
		}
		cout << endl;
		if (d == 1)
		{
			fairy++;
			heaven++;
			fairy_path(name, heaven, hell, dragon_armour, fairy_wings, pro1, pro4, pro3);
		}
		else if (d == 2)
		{
			human++;
			hell++;
			human_path(name, heaven, hell);
		}
	}
	
	system("cls");
	cin.get();

	cout << "--------------------PART II--------------------" << endl;
	cout << "                    SLUMBER                    " << endl;
	cout << endl;
	cout << endl;
	Sleep(2000);
	cout << "Numb..." << endl;
	cout << endl;
	Sleep(1500);
	cout << "I felt nothing..." << endl;
	cout << endl;
	Sleep(1500);
	cout << "What was my purpose?" << endl;
	cout << endl;
	Sleep(1500);
	cout << "You leave the village and head North. You don't have a plan as to what you'll do when you get there, so your first priority is obtaining a weapon.";
	cin.get();
	cout << "You don't know how to get that either. So you contemplate carrying some rocks around with you. Then you decide that is a stupid idea because rocks are heavy. And you're back to square one again.";
	cin.get();
	cout << "You take a winding road along a river and travel upsteam. The path is well worn and you sense that it is used very often. That also means that people go to the mountains quite often. You wonder if your home is in that mountain. Or maybe you'll regain your memories there. These thoughts motivate you and you quicken your pace.";
	cin.get();
	cout << "Night falls and you stop and sit under a tree for a while, gazing at the stars.";
	cin.get();
	cout << "Then you look to your right.";
	cin.get();
	cout << "A full grown silver wolf is looking straight at you. You are paralyzed. You both stare at each other for what seems like an eternity. Then the wolf leaves, quietly.";
	cin.get();
	cout << "There is stunned silence. You cannot believe that happened. Yet a lot of unbelievable things have been happening to you lately. But you are confused. Any wild animal's first instincts are to attack on sight, especially if it's hungry. Yet the wolf had simply left.";
	cin.get();
	cout << "You mull over it for a while. In the end you decide that the wolf was simply not hungry. You continue your journey in the night, holding the cloak more tightly around you for comfort.";
	cin.get();
	cout << "Soon you reach the foot of the mountain. Now you have no idea what to do. You are weaponless, homeless and most importantly, brainless. Your current predicament makes you want to curl up in a ball and cry.";
	cin.get();
	cout << "'What a pretty human. Whatever must you be doing here?'" << endl;
	cin.get();
	cout << "You whip your head from side to side, trying to find the source of the voice." << endl;
	cin.get();
	cout << "'Oh dear me. " << pro4 << " seem to be lost. Should we help " << pro2 << "?" << endl;
	cin.get();
	cout << "We?" << endl;
	cin.get();
	cout << "I do not know my dear friend. We should not interfere with the matters of the Underworld. Even if " << pro1 << "'s moderately eye-catching." << endl;
	cin.get();
	cout << "You finally find the source of the voices. They belong to two black ravens sitting on a small dead tree. Now that you think about it, the land around the mountain is quite barren and the sky a murky grey colour." << endl;
	cin.get();
	cout << "You decide to talk to the ravens." << endl;
	cin.get();
	cout << "'Uh...hello?'" << endl;
	cin.get();
	cout << "Smooth " << name << ", smooth." << endl;
	cin.get();
	cout <<"'"<< pro4 << " talked!'"<< endl;
	cin.get();
	cout << "'Yes. I know. Surprise surprise. Can you help me?'" << endl;
	cin.get();
	cout << "'Do we help? I do not know. Maybe for the right price?" << endl;
	cin.get();
	cout << "'Don't be greedy. " << pro4 << " has nothing. Like all the others.'" << endl;
	cin.get();
	cout << "You find it weird that people come to the mountain empty-handed. You also find you are quite dense." << endl;
	cin.get();
	cout << "'Oh but they do have something!'" << endl;
	cin.get();
	cout << "'You...want this cloak?'" << endl;
	cin.get();
	cout << "'It is not the best, but it shall suffice.'" << endl;
	cin.get();
	cout << "You take off your cloak and hold it out to the ravens. The ravens look at it, inspect it, then it disappears in a flash of light like most things in your life." << endl;
	cin.get();
	cout << "'Follow us.'" << endl;
	cin.get();
	cout << "You follow the ravens as they fly overhead. They lead you up a rocky path past several small caves. Each cave seems to be emitting a different aura. None of them look inviting. ";
	cin.get();
	cout << "You walk for several hours, yet the only feeling you experience is the sensation of numbness in your heart. Finally you reach a large cave in the mountain. At first glance everthing seems unremarkable. However, after a few seconds, an enormous door materializes at the mouth of the cave. It is at least 20 feet wide and tall enough to fit a small giant. There are disturbing carvings etched al over the door. Scenes of Prometheus having his guts torn out by the Eagle. Pandora unleashing calamities in mankind. Zeus murdering Kronos. It is a mesmerizing visage." << endl;
	cin.get();
	cout << "'Go ahead', the ravens caw in unision. What do you do?" << endl;
	cout << endl;
	int t;
	cout << "1. Knock " << endl;
	cout << "2. Call out" << endl;
	cout << endl;
	cout << "Enter 1 or 2: ";
	cin >> t;
	while (t != 1 && t != 2)
	{
		cout << "Invalid choice. Enter again." << endl;
		cin >> t;
		cout << endl;
	}
	cout << endl;
	if (t == 1)
	{
		cout << "You move forward and knock on the door. The sound you make is so pathetically feeble you doubt the ravens heard it. And yet, the huge door begins to open. Pushed back as if moved by some giant invisible arms. It opens just enough for you to slide through the crack." << endl;
		cin.get();
	}
	if (t == 2)
	{
		heaven++;
		cout << "'......Open says me?'" << endl;
		cin.get();
		cout << "The ravens look as if they want nothing more than to sink into the ground.";
		cin.get();
		cout << "But miraculously, someone, somehow, is laughing in there! You take that as a sign that you won't die immediately when you enter.";
		cin.get();
		cout << "The door gives an earth-shaking groan and opens just enough for you to pass through.";
		cin.get();
	}
	cout << "You enter the heart of the mountain.";
	cin.get();
	cout << "You had no idea what you expected to see. But it wasn't anything you imagined. The heart of the mountain is an enormous cavern. And in the centre of the cavern is a giant throne carved from obsidian.";
	cin.get();
	cout << "The cavern is empty. What do you do?" << endl;
	cout << endl;
	int u;
	cout << "1. Sit on the floor" << endl;
	cout << "2. Sit on the throne" << endl;
	cout << endl;
	cout << "Enter 1 or 2: ";
	cin >> u;
	while (u != 1 && u != 2)
	{
		cout << "Invalid choice. Enter again." << endl;
		cin >> u;
		cout << endl;
	}
	if (u == 1)
	{
		cout << "You decide to wait for whatever has to happen next and sit down on the floor at the foot of the throne. After some time you hear someone whispering and a thick mist filling the cavern. The mist starts to take the shape of smething indistinct.";
		cin.get();
	}
	if (u == 2)
	{
		cout << "You take a long look at the throne. It's majestic. As if you're a moth drawn to a flame, you move towrads the throne. You reach the base and hold out your hand. Closer...and closer...and closer...till you touch the smooth carved surface.";
		cin.get();
		cout << "There is a sudden clap of thunder and you feel as though you've been struck by lightning. Pulling your hand away from the throne, you stumble back and trip.";
		cin.get();
	}
	cout << "A gigantic form begins to take shape on the throne. You get up and back away as far you can from the mass. Then it speaks..." << endl;
	cin.get();
	cout << "'Ahh. Here is my little escapee. Tell me. How have you been enjoying your...newfound freedom?'" << endl;
	cin.get();
	cout << "'Escapee?'" << endl;
	cin.get();
	cout << "Ah yes you don't remember. How could you.'" << endl;
	cin.get();
	cout << "You are heavily confused by this conversation. Choose.." << endl;
	int v;
	cout << "1. Who are you?" << endl;
	cout << "2. What do I not remember?" << endl;
	cout << endl;
	cout << "Enter 1 or 2: ";
	cin >> v;
	while (v != 1 && v != 2)
	{
		cout << "Invalid choice. Enter again." << endl;
		cin >> v;
		cout << endl;
	}
	if (v == 1)
	{
		hell++;
		cout << "'W-who are you?" << endl;
		cin.get();
		cout << "'I see you are slower than most. How disappointing.'" << endl;
		cin.get();
		
	}
	if (v == 2)
	{
		cout << "'What am I not remembering? Who am I? WHY CAN'T I REMEMBER!?'" << endl;
		cin.get();
		cout << "'You are but a mere mortal.'" << endl;
		cin.get();
	}
	cout << "There is silence. Then the giant hazy mass begins to materialize and solidify.";
	cin.get();
	cout << "You are now looking at a man. A 20 feet tall man with skin as white as ivory, and clothes as black as the abyss. He is wearing a crowm. Wearing isn't the right word. The crown is FLOATING over the giant man's head." << endl;
	cin.get();
	cout << "'You're no man...'" << endl;
	cin.get();
	cout << "'I. Am Hades. And I am a god.'" << endl;
	cin.get();
	cout << "Your knees tremble and you feel pure terror. In front of you is a deity that is capable of annihilating the entire human race. What do you say?" << endl;
	cout << endl;
	int w;
	cout << "1. ....." << endl;
	cout << "2. Why am I here?" << endl;
	cout << endl;
	cout << "Enter 1 or 2: ";
	cin >> w;
	while (w != 1 && w != 2)
	{
		cout << "Invalid choice. Enter again." << endl;
		cin >> w;
		cout << endl;
	}
	switch (w)
	{
	    case 1:
		{
			heaven++;
			cout << "You are paralyzed with terror. There is something terrifying about the being in front of you." << endl;
			cin.get();
			cout << "'Wise choice. I am not too happy with what you have done mortal. Judgement is due.'" << endl;
			cin.get();
		}
		case 2:
		{
			cout << "'Why am I here?'" << endl;
			cin.get();
			cout << "'You are here because I was not careful enough. It seems I have kept an easy hand with my subjects. Perhaps too easy.";
			cin.get();
		}
		default:
		{
			cout << "Invalid Input." << endl;
			cout << endl;
		}
	}
	cout << "'Before I send you off. You have a right to know what happened to you. Consider this as a courtesy.'" << endl;
	cin.get();
	cout << "'I...thank you.', what do you ask?" << endl;
	int x;
	cout << "1. Tell me my past" << endl;
	cout << "2. What is going to happen to me" << endl;
	cout << endl;
	cout << "Enter 1 or 2: ";
	cin >> x;
	cout << endl;
	while (x != 1 && x != 2)
	{
		cout << "Invalid choice. Enter again." << endl;
		cin >> x;
		cout << endl;
	}
	if (x == 1)
	{
		cout << "'Tell me everything.'" << endl;
		cin.get();
		cout << "'Let's start with your past then.'" << endl;
		cin.get();
	}
	if (x == 2)
	{
		cout << "'What is going to happen to me?'" << endl;
		cin.get();
		cout << "You'll be sent home. But before that, you are owed an explanation." << endl;
		cin.get();
	}
	cout << "Hades rasies his hand and points his ivory finger towards you.";
	cin.get();
	cout << "Visions erupt in your head. Playing in a sequence.";
	cin.get();
	cout << "You see yourself opening your eyes and looking at your parents, your house in the village far away in a valley, your childhood with your friends and your siblings.";
	cin.get();
	cout << "You see yourself laughing at the beach, holding hands with your lover, the beautiful ring he gave you shining brighty on your hand.";
	cin.get();
	cout << "You see yourself walking back home at night from the market, that fateful day's produce in your arms. You see the man closing in on you, the run into the woods, the knife coming towards you...";
	cin.get();
	cout << "Tears are flowing down your cheeks. Was that really how you lived your life? You were happy. Everything was perfect...and all of it...was taken away from you..." << endl;
	cin.get();
	cout << "'No...it cannot be...IT CANNOT BE !!!" << endl;
	cin.get();
	cout << "'I-I died...why...I was happy...I WAS INNOCENT !!!'" << endl;
	cin.get();
	cout << "Hades is looking quietly at you." << endl;
	cin.get();
	cout << "'I can't die...let me go back...I want to go back...PLEASE LET ME GO BACK...'" << endl;
	cin.get();
	cout << "'I'm afraid that isn't possible mortal. You were not supposed to wander Earth again. Yet you came back.'" << endl;
	cin.get();
	cout << "'During the time of your death, when the deity of the dead, Thanatos, came to escort you, there was turmoil in the Underworld, the land of afterlife. Spirits were escaping. Thanatos was unable to guide them all. That's how you found yourself in the land of the living. All of the grief you have faced could have been avoided if Thanatos had caught you before you left the cave.'" << endl;
	cin.get();
	cout << "Everything was starting to make sense now. That presense you had felt in the cave where you have woken up. That was Thanatos trying to take you back.";
	cin.get();
	if (fairy > 0)
	{ 
		cout << "'Then what about that fairy? Did you send her as well?'" << endl;
		cin.get();
		cout << "'Yes. However she was only supposed to guide you here. I am aware she did more than that.'" << endl;
		cin.get();
	}
	if (mermaid > 0)
	{
		cout << "'Then what about that mermaid? Did you send her as well?'" << endl;
		cin.get();
		cout << "'Yes. However she was only supposed to guide you here. I am aware she did more than that.'" << endl;
		cin.get();
	}
	if (human > 0)
	{
		cout << "'Then what about the human? Did you send him as well?'" << endl;
		cin.get();
		cout << "'Yes. However he was a last resort since you had declined my other guide's help. He was more focused on disposing of you than guiding you. I see however, you came over his trials.'" << endl;
		cin.get();
	}
	cout << "...." << endl;
	cin.get();
	cout << "'Now that you have told everything. What do you choose mortal. Choose wisely.'" << endl;
	cout << endl;
	int y;
	cout << "1. I WON'T GO" << endl;
	cout << "2. I...I accept my fate..." << endl;
	cout << endl;
	cout << "Enter 1 or 2: ";
	cin >> y;
	while (y != 1 && y != 2)
	{
		cout << "Invalid choice. Enter again." << endl;
		cin >> y;
		cout << endl;
	}
	if (y == 1)
	{
		escape++;
		cout << "'No...I CAN'T GO LIKE THIS. PLEASE GIVE ME ANOTHER CHANCE..." << endl;
		cin.get();
		cout << "'I cannot give you life again mortal. It is breaking the laws of the universe.'" << endl;
		cin.get();
		cout << "'NO!!!'" << endl;
		cin.get();
		cout << "You try to run away from the cavern. The moment you lift your feet, black shackles erupt from the ground and chain you in place." << endl;
		cin.get();
		cout << "'You have made a grave mistake mortal. However, I am willing to give you another chance.'" << endl;
		cin.get();
	}
	if (y == 2)
	{
		accept++;
		cout << "'I accept my fate...'" << endl;
		cin.get();
		cout << "Hades looks pleased with you." << endl;
		cin.get();
		cout << "'You have done well getting this far mortal. You shall be rewarded.'" << endl;
		cin.get();
	}
	cout << "Hades raises his hand again. This time two beings materialize in front of you. One is wearing white clothes and the other is wearing black clothes. Standing in front of you are the angel and devil." << endl;
	cin.get();
	cout << "'Wait a minute. Diavolo?'" << endl;
	cin.get();
	cout << "The devil winks at you." << endl;
	cin.get();
	cout << "'Glad you caught on.'" << endl;
	cin.get();
	cout << "'Now for your judgement.'" << endl;
	cin.get();
	cout << "You wait with bated breath." << endl;
	cin.get();

	if (heaven > hell)
	{
		cout << "The angel steps forward." << endl;
		cin.get();
		cout << "'Because of what has happened, your past mistakes have been exempted and thus, you are judged based solely on the choices you made after you re-entered the land of the living.'" << endl;
		cin.get();
		cout << "Words cannot describe the emotions you feel. You are saved. Or are you?" << endl;
		cin.get();

		if (heart_of_the_wronged > 0)
		{
			cout << "'The mermaid Ava was sent to you as a guide. To lead you here to your final judgement. However, the mermaid is dead and you possess her heart. That being said...'" << endl;
			cin.get();
			cout << "'Ava holds no grudge towards you. And has wished you gift her heart to lord Hades, so she can be reborn again. However, you can also use her heart to go to Elysium. The highest ranked heaven in the Underworld. Choose mortal.'" << endl;
			cout << endl;
			int z;
			cout << "1. Give her heart to Hades" << endl;
			cout << "2. Choose Elysium" << endl;
			cout << endl;
			cout << "Enter 1 or 2: ";
			cin >> z;
			if (z == 1)
			{
				cout << "'My lord, I am deeply regretful about Ava's death and wish for nothing more than her to join life once again.'" << endl;
				cin.get();
				cout << "'Well said mortal. She shall be reborn.'" << endl;
				cin.get();
				cout << "The heart glows in the angel's hands, then it disappers. Hades appears to be impressed with you." << endl;
				cin.get();
				cout << "'Well done mortal.'";
			}
			if (z == 2)
			{
				cout << "Greed overcomes you once again." << endl;
				cin.get();
				cout << "'I choose Elysium'" << endl;
				cin.get();
				cout << "There is absolute silence...The angel steps back quietly and Diavolo steps forward. You realize your mistake too late." << endl;
				cin.get();
				cout << "No..." << endl;
				cin.get();
				cout << "The ground erupts. And thousands of blackened arms reach out to you. You do not resist anymore.";

				goto hell;
			}
		}
		if (soul_of_the_pure > 0)
		{
			cout << "'The mermaid Ava was sent to you as a guide. To lead you here to your final judgement. However, the mermaid is dead and you possess her soul. That being said...'" << endl;
			cin.get();
			cout << "'Ava holds no grudge towards you. And has wished you gift her soul to lord Hades, so she can serve the god of the Underworld for all eternity. However, you can also use her soul's blessing to go to Elysium. The highest ranked heaven in the Underworld. Choose mortal.'" << endl;
			cout << endl;
			int z;
			cout << "1. Give her soul to Hades" << endl;
			cout << "2. Choose Elysium" << endl;
			cout << endl;
			cout << "Enter 1 or 2: ";
			cin >> z;
			if (z == 1)
			{
				cout << "'My lord, I am deeply regretful about Ava's death and wish for nothing more than for her to fulfill her dying wish.'" << endl;
				cin.get();
				cout << "'Well said mortal. She shall be avenged.'" << endl;
				cin.get();
				cout << "The soul glows in the angel's hands, then it disappers. Hades appears to be impressed with you." << endl;
				cin.get();
				cout << "'Well done mortal.'";
			}
			if (z == 2)
			{
				cout << "Greed overcomes you once again." << endl;
				cin.get();
				cout << "'I choose Elysium'" << endl;
				cin.get();
				cout << "There is absolute silence...The angel steps back quietly and Diavolo steps forward. You realize your mistake too late." << endl;
				cin.get();
				cout << "No..." << endl;
				cin.get();
				cout << "The ground erupts. And thousands of blackened arms reach out to you. You do not resist anymore.";

				goto hell;
			}
		}
		if (diamond_dagger > 0)
		{
			cout << "'The mermaid Ava was sent to you as a guide. To lead you here to your final judgement. She succeeded in her duty. That being said...'" << endl;
			cin.get();
			cout << "'She gave you a dagger. That dagger was once used to slay the Chimera of the ocean. An artefact like that would be better suited in the hall of Hades than with a mortal.'" << endl;
			cin.get();
			cout << "You immediately take the hint." << endl;
			cin.get();
			cout << "'I would like for nothing more than to present this priceless artefact to my lord.'" << endl;
			cin.get();
			cout << "Hades looks pleased with you." << endl;
			cin.get();
		}
		if (golden_key > 0)
		{
			cout << "'The mermaid Ava was sent to you as a guide. To lead you here to your final judgement. She succeeded in her duty. That being said...'" << endl;
			cin.get();
			cout << "'She gave you a gold key. That key is the gateway to the greatest treasures of the ocean. What do you wish to do with it?'" << endl;
			cin.get();
			cout << "'...I wish to give the treasure to my family.'" << endl;
			cin.get();
			cout << "The angel looks pleased." << endl;
			cin.get();
			cout << "'It shall be done'" << endl;
			cin.get();
		}
		if (fairy_wings > 0)
		{
			cout << "'The fairy Aine was sent to you as a guide. To lead you here to your final judgement. However, the fairy is dead and you possess her wings. That being said...'" << endl;
			cin.get();
			cout << "'Aine holds no grudge towards you. And has wished you gift her wings to lord Hades, so she can be reborn again. However, you can also use her heart to go to Elysium. The highest ranked heaven in the Underworld. Choose mortal.'" << endl;
			cout << endl;
			int ab;
			cout << "1. Give her wings to Hades" << endl;
			cout << "2. Choose Elysium" << endl;
			cout << endl;
			cout << "Enter 1 or 2: ";
			cin >> ab;
			if (ab == 1)
			{
				cout << "'My lord, I am deeply regretful about Aine's death and wish for nothing more than her to join life once again.'" << endl;
				cin.get();
				cout << "'Well said mortal. She shall be reborn.'" << endl;
				cin.get();
				cout << "The wings glow in the angel's hands, then they disappers. Hades appears to be impressed with you." << endl;
				cin.get();
				cout << "'Well done mortal.'";
			}
			if (ab == 2)
			{
				cout << "Greed overcomes you once again." << endl;
				cin.get();
				cout << "'I choose Elysium'" << endl;
				cin.get();
				cout << "There is absolute silence...The angel steps back quietly and Diavolo steps forward. You realize your mistake too late." << endl;
				cin.get();
				cout << "No..." << endl;
				cin.get();
				cout << "The ground erupts. And thousands of blackened arms reach out to you. You do not resist anymore.";

				goto hell;
			}
		}

		cout << "'So this is it then...'" << endl;
		cout << endl;
		Sleep(2000);
		cout << "The angel holds out his hand to you. You take it. The memories of your life will always stay with you. But like all living beings. You are to die one day. That time may have come early for you. But you have made the most of it. Now it is time to move on...";
		cout << endl;
		Sleep(2000);
		cout << "You walk with the angel. Towards your new life.";
		cout << endl;
		Sleep(2000);
		cout << "Towards your home." << endl;
		cout << endl;
	}

	if (hell > heaven)
	{
		cout << "The devil steps forward." << endl;
		cin.get();
		cout << "'Because of what has happened, your past mistakes have been exempted and thus, you are judged based solely on the choices you made after you re-entered the land of the living.'" << endl;
		cin.get();
		cout << "Your heart stops. Time slows down..." << endl;
		cin.get();

		if (heart_of_the_wronged > 0)
		{
			cout << "'The mermaid Ava was sent to you as a guide. To lead you here to your final judgement. However, the mermaid is dead and you possess her heart.'" << endl;
			cin.get();
			cout << "'Ava holds no grudge towards you. And has wished you gift her heart to lord Hades, so she can be reborn again. However, lord Hades is not pleased that you caused the death of one of his servants.'" << endl;
			cout << endl;
			cin.get();
			cout << "You feel numb." << endl;
			cin.get();
			cout << "'My lord, I am deeply regretful about Ava's death and wish for nothing more than her to join life once again.'" << endl;
			cin.get();
			cout << "'She shall be reborn. However, you will not'" << endl;
				
		}
		if (soul_of_the_pure > 0)
		{
			cout << "'The mermaid Ava was sent to you as a guide. To lead you here to your final judgement. However, the mermaid is dead and you possess her soul.'" << endl;
			cin.get();
			cout << "'Ava holds no grudge towards you. And has wished you gift her soul to lord Hades, so she can be reborn again. However, lord Hades is not pleased that you caused the death of one of his servants.'" << endl;
			cout << endl;
			cin.get();
			cout << "You feel numb." << endl;
			cin.get();
			cout << "'My lord, I am deeply regretful about Ava's death and wish for nothing more than her to join life once again.'" << endl;
			cin.get();
			cout << "'She shall be reborn. However, you will not'" << endl;
		}
		if (diamond_dagger > 0)
		{
			cout << "'The mermaid Ava was sent to you as a guide. To lead you here to your final judgement. She succeeded in her duty. That being said...'" << endl;
			cin.get();
			cout << "'She gave you a dagger. That dagger was once used to slay the Chimera of the ocean. An artefact like that would be better suited in the hall of Hades than with a mortal.'" << endl;
			cin.get();
			cout << "You immediately take the hint." << endl;
			cin.get();
			cout << "'I would like for nothing more than to present this priceless artefact to my lord.'" << endl;
			cin.get();
			cout << "Hades looks pleased with you. However..." << endl;
			cin.get();
			cout << "'You have not been wise in your ventures in the land of the living. That has been taken into account. I do not find you worthy enough to die a hero's death.'" << endl;
			cin.get();

		}
		if (golden_key > 0)
		{
			cout << "'The mermaid Ava was sent to you as a guide. To lead you here to your final judgement. She succeeded in her duty. That being said...'" << endl;
			cin.get();
			cout << "'She gave you a gold key. That key is the gateway to the greatest treasures of the ocean. What do you wish to do with it?'" << endl;
			cin.get();
			cout << "'...I wish to give the treasure to my family.'" << endl;
			cin.get();
			cout << "The angel looks pleased." << endl;
			cin.get();
			cout << "'It shall be done. However...'" << endl;
			cin.get();
			cout << "'You have not been wise in your ventures in the land of the living. That has been taken into account. I do not find you worthy enough to die a hero's death.'" << endl;
			cin.get();
		}
		if (fairy_wings > 0)
		{
			cout << "'The fairy Aine was sent to you as a guide. To lead you here to your final judgement. However, the fairy is dead and you possess her wings.'" << endl;
			cin.get();
			cout << "'Aine holds no grudge towards you. And has wished you gift her wings to lord Hades, so she can be reborn again. However, lord Hades is not pleased that you caused the death of one of his servants.'" << endl;
			cout << endl;
			cin.get();
			cout << "You feel numb." << endl;
			cin.get();
			cout << "'My lord, I am deeply regretful about Aine's death and wish for nothing more than her to join life once again.'" << endl;
			cin.get();
			cout << "'She shall be reborn. However, you will not'" << endl;
			cin.get();
			cout << "No..." << endl;
			cin.get();
			cout << "The ground erupts. And thousands of blackened arms reach out to you. You do not resist anymore.";
			cout << endl;


		}
	hell:
		Sleep(2000);
		cout << "'So this is it then...'" << endl;
		cout << endl;
		Sleep(2000);
		cout << "The devil looks at you with delight. Your mind is shattered. This is what you'll have to suffer for the rest of eternity....";
		cout << endl;
		Sleep(2000);
		cout << "'NO THIS CAN'T BE HAPPENING...I CAN'T GO LIKE THIS...SOMEONE...anyone...save me...'" << endl;
		cout << endl;
		Sleep(2000);
		cout << "The devil descends with you as the blackened arms pull you towards hell...." << endl;
		cout << endl;
		Sleep(2000);
		cout << "Towards your new home..." << endl;
		cout << endl;
	}

	cin.get();
	system("cls");
	cout << "THE END" << endl;
	cin.get();
	system("cls");
	cout << "Thank you for playing Home.";

	return 0;
}