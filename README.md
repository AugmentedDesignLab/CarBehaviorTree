# CarBehaviorTree
UE4 behavior tree implementation for cars. 

## Project Structure
To run behavior tree in UE4 the actor needs a controller class inherited from the [AIController.](https://docs.unrealengine.com/en-US/Gameplay/Framework/Controller/AIController/index.html) In this project VehicleAIController is inherited from AAIController class which is a base class in UE4. Unreal also provides a [WheeledVehicle](https://docs.unrealengine.com/en-US/API/Plugins/PhysXVehicles/AWheeledVehicle/index.html) base class that is inherited by the WheeledVehicleObject class in this project. This class is included in [PhysXVehicle.](https://docs.unrealengine.com/en-US/API/Plugins/PhysXVehicles/index.html) To include this plugin in the project add 'PhysXVehicle' in Public Dependency Module of the Build.cs file. It should look like this [image1]. 

Unreal provides basic documentation of their vehicle structure. [The basic vehicle structure in UE4.](https://docs.unrealengine.com/en-US/Engine/Physics/Vehicles/VehicleUserGuide/index.html) Follow the steps to configure physics asset, skeletal mesh, animation blueprint, tire blueprint. 

How to create a car instance using this WheeledVehicleObject class:
* Item 1 Create a blueprint class based on WheeledVehicleObject class.
* Item 2 

Vehicles in this implementation assumes that there is a WayPoint class associated with the roads. This Waypoint class has a splinecomponent associatited with it. Vehicles while moving along the road follow this spline to keep track of the roads. 

##### Vehicle AI Controller:

##### Wheeled Vehicle Object
