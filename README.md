# CinematicModeExtension
Adds features to the cinematic mode functionality in PlayerControllers of Unreal Engine that should have been a part of the engine to begin with.

# Disclaimer
I am not actively working on the plugin. You are free to fork this repo or make PRs but remember that merges will take time to complete due my limited availibility. If used in a commerical product, add my name to the credits.

#Features 

## IsInCimenaticMode()
Can be called in Blueprints to check if the player controller is in Cinematic mode. Oddly enough only the setter is accessible to Blueprints.

## CinematicModeBlocker
An input modifier that can be added to EnhancedInputActions to block input when cinematic mode is on. By default, CinematicMode only blocks look and move inputs while still allowing other inputs you may bind to your pawns. Using this modifier gives a foolproof way to mitigate that without cluttering your locomotion code.

