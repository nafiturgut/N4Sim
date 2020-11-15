# N4Sim

**N4Sim** is the first Nervous NaNoNetwork Simulator
accounting for Synaptic Molecular Communications which is written in C++.

## How it works

  Run the application file run_files/Interface.exe
  

**Main User Interface**:

The main user interface of N4Sim is shown below. Simulator' GUI consists of 6 major parts. 

1- First area is the network configuration area, you can select number of neurons for configuration of simulator. 
Layers denote the region of neurons which lay in the same region. Custom layer option is for defining the regions of layers.
If you select this option, Area 3 will be accessible for changes. 

2- Area 2 is for giving input spikes of the network, you can determine the inputs for the network from a text file, or you can use input panel 
for adding new input spikes.

3- This part of the simulator is for choosing layers regions and neurons inside it. You can either select the positions of the neurons
by clicking Custom Locations, or the simulator will randomly distribute neurons. This part has also takes the inputs from text file
or from the panel.

4- This part is for visualizing the locations of neurons and respective connections.

5- This part is for changing and controlling layers and neurons configurations. You can click neurons and layers to change their features.

6- In order to run the simulator, you should first click on Error Check then press Start for running simulator.

![alt text](./project_images/main.png)



In order to run a simulation necessary input files should be uploaded.
## Example Configuration & Run

1- First click Custom Layer in Area 1 then click Input From File in Area 3. Then click open to choose Layer.txt file from input_files folder.
If the txt file is suitable for this part you will get this screen. You should enter Number of Input & Output Neuron in Area 1 as 1 to proceed.
![alt text](./project_images/layer.png)

2- After adding the layer, you should add input spikes for the network as well. For this part, click Input from File in Area 2, and click open
to select Input.txt from input_files. If the txt file is suitable for this part you will get this screen. You can see that 
two boxes in Area 1 is filled with numbers from the layer part: total number of neurons = 8, total layer = 3 which is taken from Layer.txt.

![alt text](./project_images/input.png)

3- Finally, all configurations for the network is settled. You can initialize the network by first clicking Error Check then start.
![alt text](./project_images/error check.png)

`
4- If everything goes well, you will see a result screen similar to the image below. You can see both visualization and log screen.
![alt text](./project_images/result.png)

