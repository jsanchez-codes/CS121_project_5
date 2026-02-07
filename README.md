# CS121_project_5
(lab) OOP Horse Race

# HorseRace OOP

## UML

```mermaid
classDiagram

class Horse{
    position:int
    index:int
    trackLength:int
    Horse()
    init(int index, int trackLength)
    advance()
    printLane()
    isWinner() bool
}

class Race{
    TRACK_LENGTH:int
    NUM_HORSES:int
    Horse horses[HORSE_NUM]
    Race()
    start()
}

Race --> Horse
```

## Race()

```
in header
    set const static in NUM_HORSES to 5
    set const int TRACK_LENGTH to 15
in constructor
    go through each horse
    initialize that horse by calling it's init
```

## Race.start()

```
set bool keepGoing to true
while keepGoing:
    for each horse:
    advance that horse
    print horse lane
    if that horse wins:
        set keepGoing to false
```

## Horse::Horse()

```
    set position to 0
    set index to 0
    set track_length to 15
```

## void Horse::init(int index, int trackLength){

```
    my index = index
    my trackLength = trackLength
    my position = 0
```

## void Horse::advance

```
    roll a random 0-1 int called coin
    add coin to position
```

## void Horse::printLane()

```
    for position from 0 to track length:
        if position == my position:
            print index
        otherwise:
            print "."
        print newline
```

## bool Horse::isWinner

```
    bool result = false
    if position >= trackLength
        result = true
        print some winning commentary
    return result
```

