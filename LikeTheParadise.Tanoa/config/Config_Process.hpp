/*
*   class:
*       MaterialsReq (Needed to process) = Array - Format -> {{"ITEM CLASS",HOWMANY}}
*       MaterialsGive (Returned items) = Array - Format -> {{"ITEM CLASS",HOWMANY}}
*       Text (Progess Bar Text) = Localised String
*       NoLicenseCost (Cost to process w/o license) = Scalar
*
*   Example for multiprocess:
*
*   class Example {
*       MaterialsReq[] = {{"cocaine_processed",1},{"heroin_processed",1}};
*       MaterialsGive[] = {{"diamond_cut",1}};
*       Text = "STR_Process_Example";
*       //ScrollText = "Process Example";
*       NoLicenseCost = 4000;
*   };
*/

class ProcessAction {
    class oil {
        MaterialsReq[] = {{"oil_unprocessed",1}};
        MaterialsGive[] = {{"oil_processed",1}};
        Text = "STR_Process_Oil";
        //ScrollText = "Process Oil";
        NoLicenseCost = 1200;
    };

    class diamond {
        MaterialsReq[] = {{"diamond_uncut",1}};
        MaterialsGive[] = {{"diamond_cut",1}};
        Text = "STR_Process_Diamond";
        //ScrollText = "Cut Diamonds";
        NoLicenseCost = 1350;
    };

    class heroin {
        MaterialsReq[] = {{"heroin_unprocessed",1}};
        MaterialsGive[] = {{"heroin_processed",1}};
        Text = "STR_Process_Heroin";
        //ScrollText = "Process Heroin";
        NoLicenseCost = 5000;
    };

    class turtle {
        MaterialsReq[] = {{"turtle_raw",1}};
        MaterialsGive[] = {{"turtle",1}};
        Text = "STR_Process_Turtle";
        //ScrollText = "Process Turtel";
        NoLicenseCost = 3000;
    };

    class lsd {
        MaterialsReq[] = {{"kroeten",1}};
        MaterialsGive[] = {{"lsd",1}};
        Text = "STR_Process_LSD";
        //ScrollText = "Process LSD";
        NoLicenseCost = 7000;
    };

    class copper {
        MaterialsReq[] = {{"copper_unrefined",1}};
        MaterialsGive[] = {{"copper_refined",1}};
        Text = "STR_Process_Copper";
        //ScrollText = "Refine Copper";
        NoLicenseCost = 750;
    };

     class korallen {
        MaterialsReq[] = {{"korallen",1}};
        MaterialsGive[] = {{"schmuck",1}};
        Text = "STR_Process_Korallen";
        //ScrollText = "Refine Copper";
        NoLicenseCost = 7000;
    };

    class iron {
        MaterialsReq[] = {{"iron_unrefined",1}};
        MaterialsGive[] = {{"iron_refined",1}};
        Text = "STR_Process_Iron";
        //ScrollText = "Refine Iron";
        NoLicenseCost = 1120;
    };

    class sand {
        MaterialsReq[] = {{"sand",1}};
        MaterialsGive[] = {{"glass",1}};
        Text = "STR_Process_Sand";
        //ScrollText = "Melt Sand into Glass";
        NoLicenseCost = 650;
    };

    class salt {
        MaterialsReq[] = {{"salt_unrefined",1}};
        MaterialsGive[] = {{"salt_refined",1}};
        Text = "STR_Process_Salt";
        //ScrollText = "Refine Salt";
        NoLicenseCost = 450;
    };

    class cocaine {
        MaterialsReq[] = {{"cocaine_unprocessed",1}};
        MaterialsGive[] = {{"cocaine_processed",1}};
        Text = "STR_Process_Cocaine";
        //ScrollText = "Process Cocaine";
        NoLicenseCost = 5000;
    };

    class marijuana {
        MaterialsReq[] = {{"cannabis",1}};
        MaterialsGive[] = {{"marijuana",1}};
        Text = "STR_Process_Marijuana";
        //ScrollText = "Harvest Marijuana";
        NoLicenseCost = 5000;
    };

    class cement {
        MaterialsReq[] = {{"rock",1}};
        MaterialsGive[] = {{"cement",1}};
        Text = "STR_Process_Cement";
        //ScrollText = "Mix Cement";
        NoLicenseCost = 350;
    };

	class palmwedel {
        MaterialsReq[] = {{"palmblatt",1}};
        MaterialsGive[] = {{"palmwedel",1}};
        Text = "STR_Process_palmw";
        //ScrollText = "Palmwedel Binden";
        NoLicenseCost = 700;
    };

	class palmol {
        MaterialsReq[] = {{"palmblatt",1}};
        MaterialsGive[] = {{"palmol",1}};
        Text = "STR_Process_palmol";
        //ScrollText = "Palmöl Pressen";
        NoLicenseCost = 750;
    };

	class gummi {
        MaterialsReq[] = {{"gummi_raw",1}};
        MaterialsGive[] = {{"gummi_processed",1}};
        Text = "STR_Process_gummi";
        //ScrollText = "Kautschuk Trocknen";
        NoLicenseCost = 800;
    };

	class kokosm {
        MaterialsReq[] = {{"kokos",1}};
        MaterialsGive[] = {{"kokosmilch",1},{"kokosfleisch",1}};
        Text = "STR_Process_kokos";
        //ScrollText = "Kokusnuss Spalten";
        NoLicenseCost = 800;
    };

	class zucker {
        MaterialsReq[] = {{"zuckerr",1}};
        MaterialsGive[] = {{"zucker",1}};
        Text = "STR_Process_zucker";
        //ScrollText = "Zucker Raffinieren";
        NoLicenseCost = 800;
    };
};
