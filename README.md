# CarBehaviorTree
UE4 behavior tree implementation for cars. 

## Project Structure
To run behavior tree in UE4 the actor needs a controller class inherited from the AIController. In this project VehicleAIController is inherited from AAIController class which is a base class in UE4. Unreal also provides a WheeledVehicle base class that is inherited by the WheeledVehicleObject class in this project. [The basic vehicle structure in UE4.](https://docs.unrealengine.com/en-US/Engine/Physics/Vehicles/VehicleUserGuide/index.html)

How to create a car instance using this WheeledVehicleObject class:
* Item 1 Create a blueprint class based on WheeledVehicleObject class.
* Item 2 

Vehicles in this implementation assumes that there is a WayPoint class associated with the roads. This Waypoint class has a splinecomponent associatited with it. Vehicles while moving along the road follow this spline to keep track of the roads. 

##### Vehicle AI Controller:

##### Wheeled Vehicle Object
