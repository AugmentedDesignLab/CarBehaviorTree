# CarBehaviorTree
UE4 behavior tree implementation for cars. 

## Project Setup
To run behavior tree in UE4 the actor needs a controller class inherited from the [AIController.](https://docs.unrealengine.com/en-US/Gameplay/Framework/Controller/AIController/index.html) In this project VehicleAIController is inherited from AAIController class which is a base class in UE4. Unreal also provides a [WheeledVehicle](https://docs.unrealengine.com/en-US/API/Plugins/PhysXVehicles/AWheeledVehicle/index.html) base class that is inherited by the WheeledVehicleObject class in this project. This class is included in [PhysXVehicle.](https://docs.unrealengine.com/en-US/API/Plugins/PhysXVehicles/index.html) To include this plugin in the project add 'PhysXVehicle' in Public Dependency Module of the Build.cs file. It should look like this ![Adding PhysXVehicle](/Images/PhysXvehicle.PNG). 

##### Behavior tree asset 
Unreal gives an interface to add and remove task easily in the behavior tree. Selector, sequence, decorator can be added without implementing task in C++. But in this project we followed the following convention. 
* Precondition: Each task contains a precondition checker that returns true only at particular situation. All the precondition classes start with 'TaskCheck' keyword. For example, 'TaskCheckChangeSpline' is a precondition class.
* Task: Executes after preconditions are true. Start with keyword 'Task'. 

Each Behavior tree contains a blackboard. In this project blackboard asset contains all the control, state and threshold variable that will be used inside and outside of the task. For now the blackboard looks like this. More variables will be added for more tasks.

![blackboard](/Images/BlackBoard.PNG).
 

##### VehicleAIController
This class contains the behavior tree and blackboard asset. It gets the behavior tree asset from the content folder, initialize blackboard and starts running the behavior tree. Initialize the state, control and threshold variables.

##### WheeledVehicleObject
This class initialize some control variables in the blackboard. During each frame it gets the control values from blackboard and apply it.

Unreal provides basic documentation of their vehicle structure. [The basic vehicle structure in UE4.](https://docs.unrealengine.com/en-US/Engine/Physics/Vehicles/VehicleUserGuide/index.html) Follow the steps to configure physics asset, skeletal mesh, animation blueprint, wheel blueprint. 

##### How to create a car instance using WheeledVehicleObject class:
* Create a blueprint class based on WheeledVehicleObject class. This will give a hierarchy like this.  
![Wheeled Vehicle Object](/Images/skeletalmesh.PNG) 
* Add the VehicleAIController class in the pawn.  
![Vehicle AI Controller](/Images/COntrollerPawn.PNG)
* Add skeletal mesh, animation blueprint and materials in the Skeletal Mesh Component.
* Configure the wheels in the vehicle movement component. Bone name in the Wheels setting should be the same as the physics asset. Add appropriate wheel class.  
![Wheel Setup](/Images/wheelsetup.PNG) 

The basic diagram for car is similar to this. 
![Car Diagram](/Images/CarDiagram.jpeg)

##### Function call order
1. Constructor AWheeledVehicleObject
2. Constructor AVehicleAIController
3. BeginPlay AVehicleAIController
4. BeginPlay AWheeledVehicleObject
5. Tick AWheeledVehicleObject & AVehicleAIController


Vehicles in this implementation assumes that there is a WayPoint class associated with the roads. This Waypoint class needs to have a splinecomponent associatited with it. Vehicles while moving along the road follow this spline to keep track of the roads. The implementation also assumes that each WayPoint has a list of connected spline and boolean variables for stop sign.

Place the car blueprint in the scene and select a WayPoint actor from the scene. 

## Project Structure
Blackboard plays the most important role in this implementation. All the variables important for the vehicle are in the blackboard. All the task read and write on the blackboard. ![Diagram](/Images/diagram.PNG)  

Controller class initialize the blackboard and start the behavior tree. At each frame, WheeledVehicleObject reads the control values(Brake, Steering, Throttle) and apply those on the vehicle. 

##### How to create new behavior tree task
* Add neccesary variables in the blackboard by adding a new key. 
* Create two C++ class inherited from UBTTask_BlackboardBase. One is for precondition check and the other is for actual task implementation.
* If the task requires perception to get activated, change the state variable from the perception update function in Controller class.
* Implement actual task in the other C++ class and change the control variable accordingly. 

For example, the changing spline task have two classes. TaskCheckChangeSpline check if the car is at the end of spline. If true than it hands the control to the task TaskChangeSpline. In the TaskChangeSpline access the Waypoint from the blackboard and change it to another Waypoint connected with the previous Waypoint.   
![TaskCheckChangeSpline](/Images/checkchangespline.PNG)

![TaskChangeSpline](/Images/changespline.PNG)
