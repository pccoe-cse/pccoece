
*Assignment No.10* 
/* 
Set A of customers like pizza and set B of customers like burger. Write a C++ program  to store two sets using an array. compute and display. 
a. Set of customers who like either pizza or burger or both 
b. Set of customers who like both pizza and burger. 
c. Set of customers who like only pizza, not burger. 
d. Set of customers who like only burger not pizza. 
e. Number of customers who like neither pizza nor burger.  
Note: 
I.Instructor will suggest students to identify suitable data structure for their application to be   developed as a part of PBL-I project. 
II.Instructor will suggest students to implement identified data structure for their application to be  developed as a part of PBL-I project 
*/ 
#include<iostream> 
#include<algorithm> 
#include<vector>
using namespace std; 
int main() 
{ 
 // Like pizza -> p 
 // Like burger -> b 
 // Use library algorithm for set operations 
  
 vector<int> pizza = {1,2,3,4,5,6}; 
 vector<int> burger = {3,4,5,6,7,8}; 
 vector<int> likePizzaAndBurger, eitherPizzaOrBurger, bothPizzaAndBurger, onlyPizzaNotBurger,  onlyBurgerNotPizza, neitherPizzaOrBurger; 
 // find people who like both 
 set_union(pizza.begin(), pizza.end(), burger.begin(), burger.end(),  
back_inserter(likePizzaAndBurger)); 
  
 cout << "People who like both Pizza as well as Burger : " << endl; 
 for (int i = 0 ; i <likePizzaAndBurger.size() ; i++) 
 { 
 cout << likePizzaAndBurger[i] << " "; 
 } 
 cout << endl << endl; 
 // either pizza or burger 
 set_union(pizza.begin(), pizza.end(), burger.begin(), burger.end(),  
back_inserter(eitherPizzaOrBurger)); 
  
 cout << "People who like either Pizza or Burger : " << endl; 
 for (int i = 0 ; i < eitherPizzaOrBurger.size(); i++) 
 {
 cout << eitherPizzaOrBurger[i] << " "; 
 } 
 cout << endl << endl; 
 // both pizza and burger -->intersection 
 set_intersection(pizza.begin(), pizza.end(), burger.begin(), burger.end(),  back_inserter(bothPizzaAndBurger)); 
  
 cout << "People who like both Pizza and Burger : " << endl;  for (int i = 0 ; i < bothPizzaAndBurger.size(); i++) 
 { 
 cout << bothPizzaAndBurger[i] << " "; 
 } 
 cout << endl << endl; 
 // only pizza not burger 
 set_difference(pizza.begin(), pizza.end(), burger.begin(), burger.end(),  back_inserter(onlyPizzaNotBurger)); 
  
 cout << "People who like only Pizza but not Burger : " << endl;  for (int i = 0 ; i < onlyPizzaNotBurger.size(); i++) 
 { 
 cout << onlyPizzaNotBurger[i] << " "; 
 } 
 cout << endl << endl; 
 // only burger not pizza 
 set_difference(burger.begin(), burger.end(), pizza.begin(), pizza.end(),  back_inserter(onlyBurgerNotPizza)); 
  
 cout << "People who like only Burger but not Pizza : " << endl;  for (int i = 0 ; i < onlyBurgerNotPizza.size(); i++)
 { 
 cout << onlyBurgerNotPizza[i] << " ";  } 
 cout << endl << endl; 
  
 return 0; 
} 
OUTPUT :: 
People who like both Pizza as well as Burger : 1 2 3 4 5 6 7 8 
People who like either Pizza or Burger : 1 2 3 4 5 6 7 8 
People who like both Pizza and Burger : 3 4 5 6 
People who like only Pizza but not Burger : 1 2 
People who like only Burger but not Pizza : 7 8
