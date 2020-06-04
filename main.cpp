#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates CamelCase


//  1)
//  Noun:       vehicle
//  action 1:   the vehicle starts
vehicle.start();
//  action 2:   the vehicle turns left
vehicle.turnLeft();
//  action 3:   the vehicle illuminates road ahead
vehicle.illuminateRoad();
//  2)
//  Noun:       person
//  action 1:   the person walks
person.walk();
//  action 2:   the person open door
person.openDoor();
//  action 3:   the person lays down
person.layDown();
//  3)
//  Noun:       npc
//  action 1:   the npc follows player
npc.followPlayer();
//  action 2:   the npc attacks
npc.attack();
//  action 3:   the npc creates a new walking path
npc.createNewWalkingPath();
//  4)
//  Noun:       fader
//  action 1:   the fader increases the volume
fader.turnVolumeUp();
//  action 2:   the fader decreases the volume
fader.turnVolumeDown();
//  action 3:   the fader adjust signal to unity gain
fader.autoAdjustToUnityGain();
//  5)
//  Noun:       phone
//  action 1:   the phone calls
phone.call();
//  action 2:   the phone sends text
phone.sendText();
//  action 3:   the phone finds nearby restaurant
phone.findRestaurantNeaby();
//  6)
//  Noun:       hand
//  action 1:   the hand lifts finger
hand.liftFinger();
//  action 2:   the hand holds object
hand.holdObject();
//  action 3:   the hand closes
hand.close();
//  7)
//  Noun:       dog
//  action 1:   the dor barks
dog.bark();
//  action 2:   the dog catches the ball
dog.catchBall();
//  action 3:   the dog eats the food
dog.eatFood();
//  8)
//  Noun:       parrot
//  action 1:   the parrot flys
parrot.fly();
//  action 2:   the parrot repeats last heard word
parrot.repeatLastWord();
//  action 3:   the parrot locates its cage
parrot.locateCage();
//  9)
//  Noun:       carRentalService
//  action 1:   the detective searches for clue
carRentalService.findNearestAvailableCar();
//  action 2:   the detective interviews suspect
carRentalService.checkFuelAmount();
//  action 3:   the detective arrests suspect
carRentalService.cleanCarsInRadius();
//  10)
//  Noun:       protester
//  action 1:   the protester initiates a peaceful protest
protester.initiatePeacefulProtest();
//  action 2:   the protester assesses the proximity of police
protester.assessPoliceProximity();
//  action 3:   the protester neutralizes the tear gas
protester.neutralizeTearGas();


#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
