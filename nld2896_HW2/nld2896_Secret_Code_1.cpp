#include <iostream>
#include <vector>
#include <map>
#include <fstream>
#include <string>
#include <iterator>

using namespace std;


int main(int argc, char* argv[]){

	string line;
	string line2;
	vector <string> words;
	vector <char> numbers;
	vector <char>s_words;
	map<char,char> list;
	map<char, char>::iterator it;
	
	if(argc==3)
	{
		ifstream infile;
		infile.open("Words.txt");
			if(infile.is_open())
			{
				while(infile>>line)
				{
					for(int j=0; j<line.size();j++)
					{
						if(isdigit(line[j]))
						{
							numbers.push_back(line[j]);
						}
					}	
					words.push_back(line);
					
				}
				cout<<"Words in Words.txt file\n";
				for(int i = 0; i< words.size(); i++)
				{
					cout<<words[i]<<endl;
					
				}
				cout<<"Number found in words\n";
				for(int p=0; p<6;p++)
				{
					cout<<numbers[p]<<endl;
				}
				
				infile.close();
			
			}
				else
				{
					cout<<"Did not open\n\n";
					return 0;
				}
	
	
		ifstream myfile;
		myfile.open("Map.txt");
			if(myfile.is_open())
			{
				list['3'] = 'T';
				list['7'] = 'S';
				list['8'] = 'E';
				list['4'] = 'B';
				list['1'] = 'O';
				list['6'] = 'C';
				list['2'] = 'J';
				for(it = list.begin(); it != list.end(); it++)
				{
					cout<< it->first <<" "<<it->second<<endl;
				}
				for(it = list.begin(); it != list.end(); it++)
				{
					for(int e=0; e<numbers.size(); e++)
					{
						if(numbers[e] == it->first)
						{
							cout<<"The secret word is "<<list['4']<<list['2']<<list['8']<<list['6']<<list['3']<<list['7'];
							cout<<endl;
							s_words.push_back(it->second);
						}
						myfile.close();
						break;
					}
				}
			
			
			}
	
			else
			{
				cout<<"dont got it\n";
			}
	
			
			
			ofstream myfile2("nld2896_output.txt",ios_base::app);
			if(myfile2.is_open())
			{
				for(int w=0; w< s_words.size(); w++)
				{
					myfile2<<s_words[w];
					myfile2<<endl;
				}
			}
			myfile2.close();
			return 0;
			
	}	
	
	else{
		cout<<"Not the right number of arguments\n";
		return 0;
		}
	
}
