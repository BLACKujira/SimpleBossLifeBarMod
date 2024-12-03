[English](Readme/README.en.md) | [简体中文](Readme/README.zhs.md) | [日本語](Readme/README.ja.md)

# Simple Boss LifeBar Mod for R-Type Final 2

This is a Boss LifeBar mod designed for R-Type Final 2.

## Features
- Supports displaying health for bosses with multiple cores and components.
- Displays health for some mini-bosses.
- Supports multiple languages.

## Known Issues
1. The mod does not support displaying dynamic health for the boss in Stage Z4.0. Currently, only the initial health is shown and does not decrease with damage.
2. The mod does not support displaying health for bosses in unreleased stages or custom stages.
3. It may not function correctly if scroll speed is modified using special methods.

## Installation Guide
1. Install UE4SS v3.0.0 by following the instructions in the [UE4SS-RE/RE-UE4SS](https://github.com/UE4SS-RE/RE-UE4SS) repository, and upgrade to v3.0.1.
2. Run the game once to generate the `RTypeFinal2\Content\Paks\LogicMods` directory.
3. Download `SimpleBossLifeBar.pak` from the Releases section of this repository.
4. Copy `SimpleBossLifeBar.pak` to the `RTypeFinal2\Content\Paks\LogicMods` directory.
5. Copy `pakchunk0-WindowsNoEditor.sig` from `RTypeFinal2\Content\Paks` to `RTypeFinal2\Content\Paks\LogicMods` and rename it to `SimpleBossLifeBar.sig`.

## Important Notes
- **Do not rename `SimpleBossLifeBar.pak`.** UE4SS relies on the file name to locate the mod's entry point. Renaming it will prevent the mod from functioning properly.
- The `.sig` file must match the `.pak` file name, i.e., `SimpleBossLifeBar.sig`. The game checks for a corresponding `.sig` signature file for each `.pak`. In theory, other `.sig` files from the game can also be used.

## Screenshots
*(Insert screenshots here)*  
![Screenshot 1](Readme/Image/01.png)  
![Screenshot 2](Readme/Image/02.png)  
![Screenshot 3](Readme/Image/03.png)  

## Final Notes
I have spent a long time searching for the object that records the health of the Stage Z4.0 boss, but I have yet to find it. If you succeed in locating it, please add an issue or contact me through other means. Thank you!
