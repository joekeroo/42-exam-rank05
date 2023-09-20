# 42KL-Exam-Rank05

mini version of the 42 project 'cpp04 : materia'.

this exam is to test your knowledge on cpp encapsulation, inheritance and polymorphism.

# Description

|     Title     |                                                                                                                            Expected files                                                                                                                             | Allowed functions |
| :-----------: | :-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------: | :---------------: |
| cpp_module_00 |                                                                                                                        Warlock.cpp Warlock.hpp                                                                                                                        |        All        |
| cpp_module_01 |                                                                        Warlock.cpp Warlock.hpp ASpell.hpp ASpell.cpp ATarget.hpp ATarget.cpp Fwoosh.hpp Fwoosh.cpp LittleKid.hpp LittleKid.cpp                                                                        |        All        |
| cpp_module_02 | Warlock.cpp Warlock.hpp ASpell.hpp ASpell.cpp ATarget.hpp ATarget.cpp Fwoosh.hpp Fwoosh.cpp Dummy.hpp Dummy.cpp Fireball.hpp Fireball.cpp Polymorph.hpp Polymorph.cpp BrickWall.hpp BrickWall.cpp SpellBook.hpp SpellBook.cpp TargetGenerator.hpp TargetGenerator.cpp |        All        |

# cpp_module_00

```
Make a Warlock class. It has to be in Coplien's form.
It has the following private attributes :

- name (string)
- title (string)

Both these functions will have to be callable on a constant Warlock.
Create the following setter:

- setTitle, returns void and takes a reference to constant string

Your Warlock will also have, in addition to whatever's required by Coplien's form :

- a constructor that takes, in this order, its name and title.
- Your Warlock will not be able to be copied, instantiated by copy, or instantiated without a name and a title.

Our Warlock must also be able to introduce himself, while boasting with all its might.
So you will write the following function :

- void introduce() const;
```

# cpp_module_01

```
In the Warlock class, the switch statement is FORBIDDEN and its use would result in a -42.

Create an abstract class called ASpell, in Coplien's form, that has the following protected attributes:
(All these functions can be called on a constant object)

- name (string)
- effects (string)
- Both will have getters (getName and getEffects) that return strings.
- add a clone pure method that returns a pointer to ASpell.
- ASpell has a constructor that takes its name and its effects, in that order.

Now you will create an ATarget abstract class, in Coplien's form :

- It has a type attribute, which is a string.
- and its associated getter, getType, that return a reference to constant string.

In much the same way as ASpell, it has a clone() pure method.
All these functions can be called on a constant object.
It has a constructor that takes its type.

- add to your ATarget a getHitBySpell function that takes a reference to constant ASpell.
- add to your ASpell class a launch function that takes a reference to constant ATarget.

When all this is done, create an implementation of ASpell called Fwoosh.
Its default constructor will set the name to "Fwoosh" and the effects to "fwooshed".
You will, of course, implement the clone() method.
In the case of Fwoosh, it will return a pointer to a new Fwoosh object.

In the same way, create a concrete ATarget called Dummy.
the type of which is "Target Practice Dummy". You must also implement its clone() method.

Add to the Warlock the following member functions:

- learnSpell, takes a pointer to ASpell, that makes the Warlock learn a spell
- forgetSpell, takes a string corresponding a to a spell's name, and makes the Warlock forget it. If it's not a known spell, does nothing.
- launchSpell, takes a string (a spell name) and a reference to ATarget, that launches the spell on the selected target. If it's not a known spell, does nothing.

You will need a new attribute to store the spells your Warlock knows. Several
types fit the bill, it's up to you to choose the best one.
```

# cpp_module-02

```
In the Warlock, SpellBook and TargetGenerator classes, the switch statement is FORBIDDEN and its use would result in a -42.

Create the following two spells, on the same model as Fwoosh :

- Fireball (Name: "Fireball", Effects: "burnt to a crisp")
- Polymorph (Name: "Polymorph", Effects: "turned into critter")

In addition to this, just so he won't have only dummy to attack, let's make a new target for him :
- BrickWall (Type: "Inconspicuous Red-brick Wall").

Now, make a SpellBook class, in canonical form, that can't be copied or instantiated by copy.
It will have the following functions:

- void learnSpell(ASpell*), that COPIES a spell in the book
- void forgetSpell(string const &), that deletes a spell from the book, except if it isn't there
- ASpell* createSpell(string const &), that receives a string corresponding to the name of a spell, creates it, and returns it.

Modify the Warlock, now, make it have a spell book that will be created with him and destroyed with him.
Also make his learnSpell and forgetSpell functions call those of the spell book.

The launchSpell function will have to use the SpellBook to create the spell it's attempting to launch.

Make a TargetGenerator class, in canonical form, and as before, non-copyable.
It will have the following functions:

- void learnTargetType(ATarget*), teaches a target to the generator
- void forgetTargetType(string const &), that makes the generator forget a target type if it's known
- ATarget* createTarget(string const &), that creates a target of the specified type
```

# Srcs

you can look at the more detailed subject requirements in the subject folder.

- [subject](subject/)
