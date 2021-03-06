#include "rack.hpp"
#include "Biquad.h"
#include "VAStateVariableFilter.h"



<<<<<<< HEAD

=======
>>>>>>> b21f5674d48ade4815d1098f8437472628d31254

using namespace rack;



////////////////////
// module widgets
////////////////////

extern Plugin *plugin;


<<<<<<< HEAD
 
=======

>>>>>>> b21f5674d48ade4815d1098f8437472628d31254

/////////////////////////////
// CUSTOM KNOBS & GRAPHICS //
/////////////////////////////


struct AutodafeKnobRed : SVGKnob {
    AutodafeKnobRed() {
        box.size = Vec(20, 20);
        minAngle = -0.75*M_PI;
        maxAngle = 0.75*M_PI;
        setSVG(SVG::load(assetPlugin(plugin, "res/AutodafeKnobRed.svg")));
    }
};


<<<<<<< HEAD


struct AutodafeKnobRedBig : SVGKnob {
    AutodafeKnobRedBig() {
        box.size = Vec(35, 35);
        minAngle = -0.75*M_PI;
        maxAngle = 0.75*M_PI;
        setSVG(SVG::load(assetPlugin(plugin, "res/AutodafeKnobRedBig.svg")));
    }
};



=======
>>>>>>> b21f5674d48ade4815d1098f8437472628d31254
struct AutodafeKnobBlue : SVGKnob {
	AutodafeKnobBlue() {
		box.size = Vec(20, 20);
		minAngle = -0.75*M_PI;
		maxAngle = 0.75*M_PI;
		setSVG(SVG::load(assetPlugin(plugin, "res/AutodafeKnobBlue.svg")));
	}
};


<<<<<<< HEAD
struct AutodafeKnobBlueBig : SVGKnob {
	AutodafeKnobBlueBig() {
		box.size = Vec(35, 35);
		minAngle = -0.75*M_PI;
		maxAngle = 0.75*M_PI;
		setSVG(SVG::load(assetPlugin(plugin, "res/AutodafeKnobBlueBig.svg")));
	}
};



=======
>>>>>>> b21f5674d48ade4815d1098f8437472628d31254
struct AutodafeKnobGreen : SVGKnob {
	AutodafeKnobGreen() {
		box.size = Vec(20, 20);
		minAngle = -0.75*M_PI;
		maxAngle = 0.75*M_PI;
		setSVG(SVG::load(assetPlugin(plugin, "res/AutodafeKnobGreen.svg")));
	}
};


<<<<<<< HEAD
struct AutodafeKnobGreenBig : SVGKnob {
	AutodafeKnobGreenBig() {
		box.size = Vec(35, 35);
		minAngle = -0.75*M_PI;
		maxAngle = 0.75*M_PI;
		setSVG(SVG::load(assetPlugin(plugin, "res/AutodafeKnobGreenBig.svg")));
	}
};



=======
struct AutodafeKnobGray : SVGKnob {
	AutodafeKnobGray() {
		box.size = Vec(20, 20);
		minAngle = -0.75*M_PI;
		maxAngle = 0.75*M_PI;
		setSVG(SVG::load(assetPlugin(plugin, "res/AutodafeKnobGray.svg")));
	}
};
>>>>>>> b21f5674d48ade4815d1098f8437472628d31254
struct AutodafeKnobPurple : SVGKnob {
	AutodafeKnobPurple() {
		box.size = Vec(20, 20);
		minAngle = -0.75*M_PI;
		maxAngle = 0.75*M_PI;
		setSVG(SVG::load(assetPlugin(plugin, "res/AutodafeKnobPurple.svg")));
	}
};

<<<<<<< HEAD

struct AutodafeKnobPurpleSmall : SVGKnob {
	AutodafeKnobPurpleSmall() {
		box.size = Vec(15, 15);
		minAngle = -0.75*M_PI;
		maxAngle = 0.75*M_PI;
		setSVG(SVG::load(assetPlugin(plugin, "res/AutodafeKnobPurpleSmall.svg")));
	}
};


struct AutodafeKnobPurpleBig : SVGKnob {
	AutodafeKnobPurpleBig() {
		box.size = Vec(35, 35);
		minAngle = -0.75*M_PI;
		maxAngle = 0.75*M_PI;
		setSVG(SVG::load(assetPlugin(plugin, "res/AutodafeKnobPurpleBig.svg")));
	}
};


struct AutodafeKnobWhite : SVGKnob {
	AutodafeKnobWhite() {
		box.size = Vec(20, 20);
		minAngle = -0.75*M_PI;
		maxAngle = 0.75*M_PI;
		setSVG(SVG::load(assetPlugin(plugin, "res/AutodafeKnobWhite.svg")));
	}
};



struct AutodafeKnobWhiteBig : SVGKnob {
	AutodafeKnobWhiteBig() {
		box.size = Vec(35, 35);
		minAngle = -0.75*M_PI;
		maxAngle = 0.75*M_PI;
		setSVG(SVG::load(assetPlugin(plugin, "res/AutodafeKnobWhiteBig.svg")));
	}
};

struct AutodafeKnobBrown : SVGKnob {
	AutodafeKnobBrown() {
		box.size = Vec(20, 20);
		minAngle = -0.75*M_PI;
		maxAngle = 0.75*M_PI;
		setSVG(SVG::load(assetPlugin(plugin, "res/AutodafeKnobBrown.svg")));
	}
};




struct AutodafeKnobBrownBig : SVGKnob {
	AutodafeKnobBrownBig() {
		box.size = Vec(35, 35);
		minAngle = -0.75*M_PI;
		maxAngle = 0.75*M_PI;
		setSVG(SVG::load(assetPlugin(plugin, "res/AutodafeKnobBrownBig.svg")));
	}
};

struct AutodafeKnobBlack : SVGKnob {
	AutodafeKnobBlack() {
		box.size = Vec(20, 20);
		minAngle = -0.75*M_PI;
		maxAngle = 0.75*M_PI;
		setSVG(SVG::load(assetPlugin(plugin, "res/AutodafeKnobBlack.svg")));
	}

};



struct AutodafeKnobBlackSmall : SVGKnob {
	AutodafeKnobBlackSmall() {
		box.size = Vec(15, 15);
		minAngle = -0.75*M_PI;
		maxAngle = 0.75*M_PI;
		setSVG(SVG::load(assetPlugin(plugin, "res/AutodafeKnobBlackSmall.svg")));
	}

};


struct AutodafeKnobBlackBig : SVGKnob {
	AutodafeKnobBlackBig() {
		box.size = Vec(35, 35);
		minAngle = -0.75*M_PI;
		maxAngle = 0.75*M_PI;
		setSVG(SVG::load(assetPlugin(plugin, "res/AutodafeKnobBlackBig.svg")));
=======
struct AutodafeKnobPink : SVGKnob {
	AutodafeKnobPink() {
		box.size = Vec(20, 20);
		minAngle = -0.75*M_PI;
		maxAngle = 0.75*M_PI;
		setSVG(SVG::load(assetPlugin(plugin, "res/AutodafeKnobPink.svg")));
>>>>>>> b21f5674d48ade4815d1098f8437472628d31254
	}
};

struct AutodafeKnobOrange : SVGKnob {
	AutodafeKnobOrange() {
		box.size = Vec(20, 20);
		minAngle = -0.75*M_PI;
		maxAngle = 0.75*M_PI;
		setSVG(SVG::load(assetPlugin(plugin, "res/AutodafeKnobOrange.svg")));
	}
};



<<<<<<< HEAD
struct AutodafeKnobOrangeBig : SVGKnob {
	AutodafeKnobOrangeBig() {
		box.size = Vec(35, 35);
		minAngle = -0.75*M_PI;
		maxAngle = 0.75*M_PI;
		setSVG(SVG::load(assetPlugin(plugin, "res/AutodafeKnobOrangeBig.svg")));
	}
};



=======
>>>>>>> b21f5674d48ade4815d1098f8437472628d31254
struct AutodafeKnobYellow : SVGKnob {
	AutodafeKnobYellow() {
		box.size = Vec(20, 20);
		minAngle = -0.75*M_PI;
		maxAngle = 0.75*M_PI;
		setSVG(SVG::load(assetPlugin(plugin, "res/AutodafeKnobYellow.svg")));
	}
};


<<<<<<< HEAD


struct AutodafeKnobYellowBig : SVGKnob {
	AutodafeKnobYellowBig() {
		box.size = Vec(35, 35);
		minAngle = -0.75*M_PI;
		maxAngle = 0.75*M_PI;
		setSVG(SVG::load(assetPlugin(plugin, "res/AutodafeKnobYellowBig.svg")));
	}
};







=======
>>>>>>> b21f5674d48ade4815d1098f8437472628d31254
struct AutodafeButton : SVGSwitch, MomentarySwitch {
    AutodafeButton() {

    	addFrame(SVG::load(assetPlugin(plugin, "res/AutodafeButton.svg")));
        //SVG::load("res/AutodafeButton.svg");
		
		box.size = Vec(20,20);
      
    } 
};   

<<<<<<< HEAD




struct BtnUp : SVGSwitch, MomentarySwitch {
	BtnUp() {
		addFrame(SVG::load(assetPlugin(plugin, "res/BtnUp.svg")));
		sw->wrap();
		box.size = sw->box.size;
	}
};




struct BtnDwn : SVGSwitch, MomentarySwitch {
	BtnDwn() {
		addFrame(SVG::load(assetPlugin(plugin, "res/BtnDwn.svg")));
		sw->wrap();
		box.size = sw->box.size;
	}
};








struct BtnTrigSequencer : SVGSwitch, MomentarySwitch {
	BtnTrigSequencer() {
		addFrame(SVG::load(assetPlugin(plugin, "res/BtnTrigSequencer.svg")));
		sw->wrap();
		box.size = sw->box.size;
	}
};
 
struct BtnTrigSequencerSmall : SVGSwitch, MomentarySwitch {
	BtnTrigSequencerSmall() {
		addFrame(SVG::load(assetPlugin(plugin, "res/BtnTrigSequencerSmall.svg")));
		sw->wrap();
		box.size = sw->box.size;
	}
};






struct WhiteKey : SVGSwitch, MomentarySwitch {
	WhiteKey() {
		addFrame(SVG::load(assetPlugin(plugin, "res/WhiteKey.svg")));
		sw->wrap();
		box.size = sw->box.size;
	}
};



struct BlackKey : SVGSwitch, MomentarySwitch {
	BlackKey() {
		addFrame(SVG::load(assetPlugin(plugin, "res/BlackKey.svg")));
		sw->wrap();
		box.size = sw->box.size;
	}
};



///////////////////////////////////
///      WIDGETS                ///
///////////////////////////////////


=======
>>>>>>> b21f5674d48ade4815d1098f8437472628d31254


struct LFOWidget : ModuleWidget {
	LFOWidget();
};


struct BPMClockWidget : ModuleWidget {
	BPMClockWidget();
};




struct Multiple28Widget : ModuleWidget  {
	Multiple28Widget();
};


struct Multiple18Widget : ModuleWidget  {
	Multiple18Widget();
};


struct ClockDividerWidget : ModuleWidget {
	ClockDividerWidget();
};



struct SEQ16Widget : ModuleWidget{
	SEQ16Widget();
	Menu *createContextMenu() override;
	
};

struct TriggerSeqWidget : ModuleWidget{
	TriggerSeqWidget();
	
};


struct FoldBackWidget : ModuleWidget{
	FoldBackWidget();
};

struct BitCrusherWidget : ModuleWidget{
	BitCrusherWidget();
};





struct SEQ8Widget : ModuleWidget{
	SEQ8Widget();
	Menu *createContextMenu() override;
	
};







struct FormantFilterWidget : ModuleWidget{
	FormantFilterWidget();
};

struct MultiModeFilterWidget : ModuleWidget{
	MultiModeFilterWidget();
};
struct FixedFilterWidget : ModuleWidget{
	FixedFilterWidget();
};





<<<<<<< HEAD


//// EFFECTS

=======
>>>>>>> b21f5674d48ade4815d1098f8437472628d31254
struct PhaserFxWidget : ModuleWidget{
	PhaserFxWidget();
};


struct ChorusFxWidget : ModuleWidget{
	ChorusFxWidget();
};






struct ReverbFxWidget : ModuleWidget{
	ReverbFxWidget();
};























struct KeyboardModelWidget : ModuleWidget{
	KeyboardModelWidget();
};

























