# CarBehaviorTree
UE4 behavior tree implementation for cars. 

## Project Structure
To run behavior tree in UE4 the actor needs a controller class inherited from the [AIController.](https://docs.unrealengine.com/en-US/Gameplay/Framework/Controller/AIController/index.html) In this project VehicleAIController is inherited from AAIController class which is a base class in UE4. Unreal also provides a [WheeledVehicle](https://docs.unrealengine.com/en-US/API/Plugins/PhysXVehicles/AWheeledVehicle/index.html) base class that is inherited by the WheeledVehicleObject class in this project. This class is included in [PhysXVehicle.](https://docs.unrealengine.com/en-US/API/Plugins/PhysXVehicles/index.html) To include this plugin in the project add 'PhysXVehicle' in Public Dependency Module of the Build.cs file. It should look like this [image1]. 

##### Behavior tree asset 
Unreal gives an interface to add and remove task easily in the behavior tree. Selector, sequence, decorator can be added without implementing task in C++. But in this project we followed the following convention. 
* Precondition: Each task contains a precondition checker that returns true only at particular situation.
* Task: Executes after preconditions are true.

Each Behavior tree contains a blackboard. In this project blackboard asset contains all the control, state and threshold variable that will be used inside and outside of the task. For now the blackboard looks like this.[image]. More variables will be added for more tasks.  

##### VehicleAIController
This class contains the behavior tree and blackboard asset. It gets the behavior tree asset from the content folder, initialize blackboard and starts running the behavior tree. Initialize the state, control and threshold variables.

##### WheeledVehicleObject
This class initialize the 

Unreal provides basic documentation of their vehicle structure. [The basic vehicle structure in UE4.](https://docs.unrealengine.com/en-US/Engine/Physics/Vehicles/VehicleUserGuide/index.html) Follow the steps to configure physics asset, skeletal mesh, animation blueprint, tire blueprint. 

##### How to create a car instance using this WheeledVehicleObject class:
* Create a blueprint class based on WheeledVehicleObject class. This will give a hierarchy like this [image2] Add the VehicleAIController class in the pawn. [image3]
* Add skeletal mesh, animation blueprint and materials in the Skeletal Mesh Component.
* Configure the wheels in the vehicle movement component. [image4] Bone name in the Wheels setting should be the same as the physics asset. Add appropriate wheel class.

##### Function call order
1. Constructor AWheeledVehicleObject
2. Constructor AVehicleAIController
3. BeginPlay AVehicleAIController
4. BeginPlay AWheeledVehicleObject
5. Tick AWheeledVehicleObject & AVehicleAIController

These steps will give a vehicle actor that comprises like this.[image5]

Vehicles in this implementation assumes that there is a WayPoint class associated with the roads. This Waypoint class has a splinecomponent associatited with it. Vehicles while moving along the road follow this spline to keep track of the roads. 


