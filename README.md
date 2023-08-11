# EasyDialogue for UE5

Unreal Version: UE 5.1.1

Currently Compatible Platforms: Windows

EasyDialogue is a plugin that provides the architecture of a dialogue system, together with a lot of customizability.

## Features

This plugin let's the you:

- set the speaker's name
- set the dialogue box text
- use different text styles (font, colored, small)
- specify pauses of customizable length after words
- set music dependent on the dialogue
- specify voice lines or sounds for every dialogue box
- creating branching 
- use a typewriter animation style
- specify sounds for characters to be played when interacted with
- specify answers the player can give to a dialogue box
- specify text styles for hovered and unhovered answers
- create branching dialogue structures based on the player's answer
- bind events to dialogue boxes
- switch the dialogue of a character based on events
- set the sprites for the dialogue box, names, answers, answer backgrounds, and an icon that appears when the text is finished
- set the text style for answers
- set sounds to be played when proceeding in dialogue, moving between answers, selecting an answers, and toggling fast forward
- set the dialogue assets with code

The typewriter supports customizable settings like  animation speed and comes with a fast forward function, which's speed is also customizable

## Installation

To download the plugin, simply download this repository. In the project the plugin will be added to, create a folder called "Plugins" on the same layer as the URPOJECT file. Extract the downloaded .zip and place the "EasyDialogue" folder into the Plugins folder.

To use this plugin, another plugin called [GenericGraph](https://github.com/jinyuliao/GenericGraph) is also required. A tutorial to install it is provided on it's GitHub page, but is similar to the installation of EasyDialogue.

## Setup Guide

Classes to be used are the one's inside the "UserClasses" Folder. Here, the widgets, BP_EasyDialogueAudioHandler and empty settings and a style table are provided. You can edit these like you want. If necessary, you can also edit the functionality of the classes inside the "PluginFunctionality" folder.

### Dialogues

To create a dialogue asset, first, right click inside Unreal Engine's content browser and create a generic graph asset. Inside this asset, set the node type to BP_EasyDialogueNode and the set edge type to BP_EasyDialogueEdge. It is easier to do this once and copy the created dialogue assets.

![alt text](https://github.com/Sehilius/EasyDialogue-UE5/blob/main/Images/graph%20settings.png "branching")

### BP_EasyDialogueNode

This is where you specify the settings for the dialogue box widget. Here you can set:

- Speaker name
- Dialogue box text
- Pauses in the typewriter animation
- Animation style (Default or Typewriter)
- Typewriter speed
- Typewriter sounds to be randomly played
- Music to play when a dialogue box gets executed (this will reset to the level music after the dialogue ends)
- Sentence pause duration (Duration the typewriter pauses after punctuation
- Speaker voiceline to be played
- Dialogue box name (important for event binding)
- Player answers

To specify dialogue text, create a new element in the array. This will create an object where you can choose the style, text and the pause duration after this segment. When specifying player answers. you can add as many answers as you like. These will be the names of the buttons that appear when the player can select between answers

The text styles provided are:

- Default
- Color1
- Color2
- Color3
- Small

It is recommended to only use the small text by itself, since when combining small and bigger text and using the small text as the first in a line, there will be a jumping in text as soon as bigger text appears. More information about how text styles are used is given later in this README.

![alt text](https://github.com/Sehilius/EasyDialogue-UE5/blob/main/Images/old%20man.png "branching")

![alt text](https://github.com/Sehilius/EasyDialogue-UE5/blob/main/Images/answers.png "branching")



### BP_EasyDialogueEdge

These edges connect the dialogue boxes in a sequence. When having branching to due player answers inside the graph, pull an edge for each answer from that dialogue box to a new separate box. In the edges properties, specify the index the answer has in the PlayerAnswers array of the dialogue box that required the answer.

![alt text](https://github.com/Sehilius/EasyDialogue-UE5/blob/main/Images/linear%20graph.png "branching")


![alt text](https://github.com/Sehilius/EasyDialogue-UE5/blob/main/Images/graph%20branching.png "branching")

### BP_EasyDialogueComponent_Player

The component to be added to the player pawn. This component does need to be set up within the class it has been added to.

First, you need to bind events that disable and enable the pawn's movement, so the component can freeze the player's movement during dialogue and reenable it when it's over. For thism use the event dispatchers "EnableMovement" and "DisableMovement".

Second, you can use the events of the component to the desired controls. For this, use "OnTryToInteract" to interact with objects, "OnToggleFastForward" to toggle the typewriter's fast forward, and "AnswerMoveUp" and "AnswerMoveDown" to navigate between answers. In this version, interacting, proceeding and selecting an answer to all share the same event. Which means they will all share the key.

The "OnTryToInteract" needs a capsule collider as an input, which will be used to detect interactable objects. This capsule collider will need to be added to your pawn.

### BP_EasyDialogueComponent_NPC

This is the component that needs to be added to every object that the player can start a dialogue with. Here, you can set the current dialogue asset to use on interaction and dialogue start sounds, which randomly play when the interaction is started.

### Style Data Table

This is the table containing the text styles. Here, you can customize the text styles and set your own font, but DO NOT change the name of the styles. If the style names needs to be edited or additional styles are needed, adjust the E_EasyDialogueTestStyle enum accordingly. An addition to the previously mentioned styles, there are also two styles for answers. AnswerNormal is the style for answers that are currently not hovered by the player and AnswerHovered is for the answer that is currently hovered.

A tutorial about the RichTextBlock and data tables with rich text styles can be found [here](https://youtu.be/9M4rjznF7Ys)

### Dialogue Settings
Contain the sprites, audio, and style data table to be used. You can create as many of these as you want. The asset specified in DA_EasyDialogueGeneralSettings will be the one used within the game. If sprites are left empty, borders within the widgets need to be adjusted, otherwise they will draw a white box

### Widgets

The three widgets will automatically read the sprites specified in the dialogue settings data asset that is currently used. You can further adjust the widgets positions and other properties. To counter sprite stretching, you can adjust the margin inside the border, which works similar to 9-slicing.

### BP_EasyDialogueAudioHandler

This class handles all dialogue sound and level music. For it to work, drag it inside the level and set the level's music inside that instance.

### Event Binding

The plugin supports binding events to a certain dialogue box of the currently set dialogue. For this, use the "SetDialogueBoxEvent" function of BP_EasyDialogueComponent_NPC. As an additional input to that function, you have to give the dialogue box name that is specified in the graph of the dialogue asset.

### Demo Map

The Plugin comes with a demo map, where you can interact with NPCs, demonstrating some of EasyDialogue's features. This map requires Unreal Engine third person template In this map. You can move around with "WASD", jump with "spacebar", and interact with "E". For dialogues, you can proceed with "E", toggle fast forward with "spacebar", select between answers with "W" and "S", and select an answer with "E". The BP_EasyDialoguePlayerCharacter class demonstrates how one can set up the AC_EasyDialogueComponent_Player class on the player pawn. Examples for all other functionality are also found there, so check out the code!








