## ValkyrieUproject

4.27 Unreal project for modding VALKYRIE ELYSIUM. This project is preconfigured to export chunks and utilize efficient Oodle compression when packaging. Additionally, it integrates the Bonamik and KineDriver placeholder code from [EndGameProj](https://github.com/narknon/EndGameProj) to allow for retaining original physics on modified skeletal meshes (with user configuration).

### Getting Started

Clone this repository, open the .uproject within the VALKYRIE_ELYSIUM folder, and compile the necessary modules once prompted. When complete, the Unreal editor will open.

Support for compiling the project will not be provided as documentation is widely accessible elsewhere.

### Bonamik/KineDriver

This project does not allow the creation or modification of Bonamik/KineDriver assets. Instead, it allows you to create placeholder assets in your project so that your modified skeletal meshes retain the necessary references to utilize physics present on the originals. **You should ***NOT*** package these placeholders with your mods!**

<details>
  <summary>Tutorial</summary>
  
  To create placeholder Bonamik/KineDriver assets, right-click in the content browser and create a **Data Asset**, organized under Miscellaneous. From the class selection window, choose either **SQEX_BonamikAsset** or **SQEX_KineDriverData**. Name and place this according to the Bonamik/KineDriver asset(s) you wish to reference.
  
  To configure your skeletal mesh to reference these placeholder assets, open your mesh and navigate to Asset User Data, creating and configuring the necessary elements. You can find the settings utilized by original skeletal meshes by opening them in [FModel](https://github.com/4sval/FModel). For example, these are the settings for **SK_CHA_PL01**:
  
  ![enter image description here](https://i.imgur.com/5HqsyYq.png)
  
</details>
