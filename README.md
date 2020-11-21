# BeyondDnD

https://github.com/mouser/BeyondDnD

BeyondDnD, a framework to go beyond DnD Beyond. Like, far far away.

## What this is NOT

This is not a userland set of tools to replace, complement nor aid in your use of DnDBeyond.

You _still_ need a DnDB account for this code to be any useful. I encourage you to do so.

This code is a framework  library for use by _other_ developers to make their own set of tools 
for their needs. It grants read-only access to information stored in your DnDB-accessible 
character profiles.

In its current state, BeyondDnD can deal with 5e DnD data structures. Some of it. 
There has been no development or tests on other systems like PathFinder.

Fitness of this is highly dependant on external people to not alter their JSON structures.


## What this is, fer real

This is an Objective-C framework that interprets DnDB's JSON format assaociated with a character file.
Using a simple API, it can load, interpret the data set in a non-lossy fashion. That is, any encountered
data it doesn't know is reported for further development, and retained in memory to allow digging
through it in code that makes use of this framework.

It's written exclusively in Objective-C, because I'm civilized. Wether you use this in your own language
is your own decision to make. Pitty the fools who don't use true runtime objects.
Structs suck kobold meat balls.

## Support

Ahahahahaha!

No really, get bent. DnDBeyond does _not_ support this code. This is strictly a personal endeavour.
If you need something added, you can always make an enhancement request. If I see value, can spare
the time and envision a solution to the request, maybe I'll add the code.

But really, this code is a starting point for YOUR project, not by any means a comprehensive set of tools
to build your next game with.

### Where this comes from

I have written my own DnD DM tool for some time and while I had my own format of a character structure,
it was purposely not meant to be a replacement for DnDBeyond. But at some point, I integrated minimal
support for importing data from DnDBeyond in the form of charecter preview image, basic info like XP total
and character name should it change.

The full DnDBeyond JSON format, though, is not entirely structured; some structures have no unique names
or fields and identifiers pretty much generic. The stats blocs are tagged with a numeric [1...6] whereas STR 
and other strings might have been more useful.

At some point, I decided to bite the bullet and actually build up a read-only API for this JSON stuff, because
I do this day-in day-out at the office and I knew how to do it simply. Thanks to a proper object language
and Key-Value-Coding.

# What's What
...in the 🩳

## BeyondDnD
This is the framework that does it all. This is your primary target to include in your projects.

In this projects, sources are collated in three main subgroups:

### JSonBase
This contains a base class that the model objects all derive from. When you will be inspecting your
character sheet at runtime, any information not currently treated in the object models will accumulate
in their base class, in the _dojUnknownValues_ property.

### Model
These are the classes that map the JSON structure into consumable Objective-C classes.
Most of that is just empty classes that define properties that map to the JSON data. There
are two exceptions for the most part:

Data identified by _id_ and _description_ had to be remapped because of name collisions in
Cocoa. Any JSON _id_ object gets re-interpreted as _id_endity_. Likewise, any _description_
JSON data gets remapped to _desc_.

These classes are meant to be a transposition of the JSOPN structures. DON'T put additional
methods and properties in there. One day, maybe, we'll be reusing these to re-generate JSON
out of the structures.

Any code meant to interpret this data should be in BeyondDnDSheet. THAT's your starting point.

### TheFunBits
This contains the _BeyondDnDSheet_. It's the primary consumable class that you will use.
You can use it to instantiate a whole hierarchy of objects that corresponds to the JSON
data model.

Additionally, it contains some massaging code to interpret the data and return you consumable
sheet-style data.

## bdnd
This is a sample tool using BeyondDnD.framework

It shows how you can use it in your code and offers a couple of utilities to help you debug your code.
See _dndb --help_ in terminal once you build and install it.
