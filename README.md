# XR Geometry Interaction Demo

## Goal
A portfolio-friendly Unreal Engine 5 prototype focused on XR-style interaction and computational geometry.

## Core concepts
- 3D vectors
- Distance calculation
- Direction vectors
- Dot product
- Local/world orientation
- Ray-based interaction
- Blueprint/C++ integration

## Editor setup
1. Create an XR/OpenXR-compatible UE5 project or use a normal project first.
2. Enable the OpenXR plugin when using a VR headset.
3. Add `GeometryInteractionComponent` to the player/controller actor.
4. Create Blueprint nodes from the exposed C++ functions.
5. Add a target object in front of the player.
6. Use `ForwardDot(TargetLocation)`:
   - > 0: target is generally in front.
   - < 0: target is generally behind.
7. Add a line trace from the controller/camera.
8. Use the hit result to highlight or grab the target.
9. Add a simple teleport point and interactable objects for the XR demo.

## Portfolio features
- XR-ready interaction architecture
- C++ reusable geometry component
- Blueprint visual scripting
- Dot-product based spatial reasoning
- Raycast interaction
- Distance-based interaction UI

## Interview talking points
The project demonstrates how mathematical concepts such as vectors, normalization and dot products can drive real-time 3D interaction.

## Recommended portfolio title
XR Geometry Interaction Demo — Unreal Engine 5 / C++ / Blueprints / OpenXR"# Add-Unreal-Engine-XR-Geometry-Demo" 
"# Add-Unreal-Engine-XR-Geometry-Demo" 
