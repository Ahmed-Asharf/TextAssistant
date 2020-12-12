// TextAssistant.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include "Text.h"
#include "Preprocessor.h"

int main()
{
	//std::cout << "\n!!!Nothing!!!\n";
    
	std::ifstream readText("text1.txt");
	Text t(readText);
	//Text t1("Technology is affecting every aspect of life. Everyone remembers how traditional learning is updated by E-learning after invent of computers and internet. Nowadays, a new trend had started in educational institutes especially universities that is referred as Bring Your Own Device (BYOD) that is student utilized his/her own laptop, tablet, smartphone generally PDAs (Personal Digital Assistant) for campus purposes. Majority rely on a good smartphone so we can say that we are stepping towards M-learning (Mobile learning). Cell phones are effective educational tool because they made teaching and learning easier if they are used wisely. Cell phones can make education inexpensive, save considerable time and make education more interesting and appealing for students.Using cell phone as an educational tool make education cheaper and save enough amount of money.Using mobile you do not need to invest in course materials.Everyone is familiar with EBooks, EPubs, PDFs.Moreover, you do not need to buy other educational tools such as calculators, dictionaries, notebooks, watches and even other PDAs like tablets and laptops.Because smartphones nowadays are All - in - one solution having thousands of features.Secondly, usage of cell phones as educational tool make your day more productive and save considerable amount of time.Mobile phones offer everything on fingertips whether a meaning of a word or entire essay.Search Engines like Google are heaven for students and instructors too.Teacher student communication gone to next level using cell phones.Instructors are using apps like Google Classroom and Edmodo to provide course material and to make announcements.Instead of traditional learning methods E - learning or M - learning is more effective and practical.Real world have limitations but virtual world does not have.It is difficult to understand 3 dimensional geometry on board but using interactive apps it�s a piece of cake.Similarly, unseen phenomenon like Electromagnetism also required visuals.Secondly, students of every age group now prefer Online lectures to cover their daily topics and Quiz games to test themselves.In this regard smartphones also plays vital role.There are hundreds of educational apps of every subject like Elevate, Photomath, Programming Hub that assist in this regard.Therefore, cell phones are proved as a great educational tool.The learning process can be made simpler and teachers will have less problems communicating with students.The use of cell phones as an educational tool can reduce cost, time and make education interactive and productive.Cell phones should be used for acquiring education but with personal justification.");
	//std::cout << t.getContent()<<std::endl;
	Preprocessor p(t);
		//p.lowerCasing();
		//std::cout << t.getContent() << std::endl;
	//p.wordTokenizing();
	p.sentenceTokenizing();
	//std::cout << t.getContent();
	//std::cout << t1.getContent();
	//Text shortT("the quick brown fox jumps over the lazy dog");
	
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
