# XR Geometry Interaction Demo

An Unreal Engine 5 C++ project demonstrating XR-style interaction concepts and computational geometry through reusable components and Blueprint integration.

## 🎯 Project Overview

The XR Geometry Interaction Demo explores how mathematical concepts such as 3D vectors, distance calculations, direction vectors, and dot products can be used to support spatial reasoning and interactive 3D environments.

The project uses C++ components exposed to Unreal Engine Blueprints to support reusable geometry calculations.

## 🛠️ Technologies Used

- Unreal Engine 5
- C++
- Blueprint Visual Scripting
- 3D Mathematics
- OpenXR (planned integration for VR support)

## 📌 Core Concepts

- 3D Vector Mathematics
- Distance Calculation
- Direction Vector Calculation
- Dot Product
- Local and World Orientation
- C++ and Blueprint Integration
- Spatial Reasoning

## ⚙️ Implemented C++ Functions

The `GeometryInteractionComponent` provides the following functions:

### 1. DistanceToPoint()

Calculates the distance between the owning actor and a target point.

### 2. ForwardDot()

Uses the dot product between the actor's forward direction and the direction toward a target point.

- Positive value: Target is generally in front.
- Negative value: Target is generally behind.
- Zero: Target is approximately perpendicular to the forward direction.

### 3. DirectionToPoint()

Calculates the normalized direction vector from the owning actor toward a target point.

## 📁 Project Structure

```text
XR-Geometry-Interaction-Demo/
│
├── XRGeometryInteractionDemo.uproject
├── README.md
│
└── Source/
    └── XRGeometryDemo/
        ├── XRGeometryDemo.Build.cs
        ├── Public/
        │   └── GeometryInteractionComponent.h
        │
        └── Private/
            ├── GeometryInteractionComponent.cpp
            └── XRGeometryDemo.cpp
```

## 🚀 Editor Setup

1. Open the project using a compatible Unreal Engine 5 installation.
2. Enable the OpenXR plugin when preparing for VR headset integration.
3. Add `GeometryInteractionComponent` to a player or controller actor.
4. Access the exposed C++ functions through Blueprint nodes.
5. Place a target object in front of the player.
6. Use `ForwardDot(TargetLocation)` to analyze target orientation.
7. Add a line trace from the controller or camera for object detection.
8. Use the hit result to implement object highlighting or interaction.
9. Add teleportation points and interactable objects when extending the XR prototype.

**Note:** Steps involving line tracing, grabbing, highlighting, and teleportation describe suggested extensions and require additional implementation.

## 💡 Portfolio Features

- Reusable C++ geometry component
- Blueprint-accessible geometry functions
- Dot-product-based spatial reasoning
- Distance and direction calculations
- Foundation for XR-style interaction
- Extensible Unreal Engine architecture

## 🎓 Interview Talking Points

This project demonstrates:

- How 3D vector mathematics supports spatial calculations.
- How dot products help determine the relative orientation of objects.
- How C++ components can expose reusable functionality to Blueprints.
- How mathematical operations can support interactive 3D application development.

## 🔮 Future Enhancements

- Implement controller-based ray interaction.
- Add object highlighting and grabbing.
- Integrate OpenXR for VR headset support.
- Implement teleportation mechanics.
- Develop distance-based interaction UI.

## 👩‍💻 Project Information

**Project:** XR Geometry Interaction Demo

**Engine:** Unreal Engine 5

**Programming Language:** C++

**Scripting:** Unreal Engine Blueprints

**Focus:** Computational Geometry and XR Interaction

**Repository:** [GitHub](https://github.com/Bhuvana6303/XR-Geometry-Interaction-Demo-2026)
