#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

int main ()
{
  // inventory dataset. stored in a 2d array. r,c. [i] will be item, [j] will be code
  string a[144][2] = { {"cheese, mozz. shredded (comm) ","1019"},
                 {"dressing balsamic fat free ","1400"},
                 {"dressing caesar lite ","1299"},
                 {"dressing italian low calorie ","1375"},
                 {"dressing ranch banquet ","1095"},
                 {"water bottled gallon jug ","DST1111"},
                 {"cheese, shredded cheddar (purchased) ","1232"},
                 {"cheese, sliced american (purchased) ","1245"},
                 {"cream cheese (plain) ","1016"},
                 {"turkey breast sliced (sysco)","1384"},
                 {"turkey ham sliced (sysco) ","1289"},
                 {"applesauce canned (comm) ","1000"},
                 {"applesauce cups (comm) ","1345"},
                 {"black beans (comm) ","1456"},
                 {"garbanzo beans (comm) ","1458"},
                 {"mixed fruit (comm) ","1351"},
                 {"peaches diced (comm) ","1324"},
                 {"pears canned (comm) ","1152"},
                 {"raisins (comm) ","1365"},
                 {"rice white 25lb bag comm, ","DST1118"},
                 {"sun butter (comm) ","DST1088"},
                 {"all purpose cleaner aerosol can ","DST1044"},
                 {"apex dishwash plus (white) ","1361"},
                 {"apex manual detergent (purple) ","1355"},
                 {"apex rinse additive (green) ","1356"},
                 {"cleanser, lemon eze ","1204"},
                 {"digiclean antibacterial hand soap foam ","1213"},
                 {"eco-san ","1206"},
                 {"grease strip plus ","1209"},
                 {"hand sanitizer ","DST1147"},
                 {"hand soap foam (new 2020) ","DST1146"},
                 {"lime-a-way ","1217"},
                 {"pan dandy ","1218"},
                 {"wash-n-walk ","1219"},
                 {"applesauce cups ","DST1130"},
                 {"baby food, gerber rice cereal (nonstock) ","1060"},
                 {"baby food, peach (nonstock) ","1081"},
                 {"baking powder ","1057"},
                 {"baking soda ","1058"},
                 {"bbq suace, smokey reserve ","1407"},
                 {"beans, baked (bush) ","1062"},
                 {"cereal, cheerios honey nut (bwipk) ","1070"},
                 {"cereal, chex cinnamon ","1391"},
                 {"cereal, cocoa puff (bwipk) ","1075"},
                 {"cereal, frosted mini wheat (bwipk) ","1073"},
                 {"cereal, lucky charms ","DST1067"},
                 {"crackers, graham 3pk ","1091"},
                 {"fruit spread marionberry ","DST1054"},
                 {"gravy (beef) ","1381"},
                 {"jelly, mixed p/c's ","1103"},
                 {"ketchup, dispenser heinz ","1404"},
                 {"mayonnaise, dispenser heinz ","1405"},
                 {"milk dry non fat ","DST1031"},
                 {"mix muffin w/g ","1271"},
                 {"mustard, dispenser heinz ","1406"},
                 {"pan coating, vegaline ","1161"},
                 {"raisin individual box ","1074"},
                 {"sauce enchilada ","1184"},
                 {"sauce spagetti ","1318"},
                 {"similac (advanced) ","1417"},
                 {"similac (soy) ","1031"},
                 {"soup tomato ","1349"},
                 {"sun butter ","DST1055"},
                 {"syrup p/c ","DST1148"},
                 {"syrup pancake & waffle ","1189"},
                 {"tortilla chip ","DST1060"},
                 {"2oz lid for portion cup ","DST1144"},
                 {"apron, disposable ","1110"},
                 {"bag, ziplock (gallon) ","1113"},
                 {"bag, ziplock (pt.) ","1273"},
                 {"bag, ziplock (quart) ","1115"},
                 {"bags (saddle) ","1112"},
                 {"bowl, paper 8oz. ","1117"},
                 {"cup, baking paper ","1121"},
                 {"cup, cold 10oz ","1454"},
                 {"cup, cold 5oz. ","1120"},
                 {"film, 18\" ","1129"},
                 {"film, 24\" ","1130"},
                 {"foil, aluminum 18\" ","1131"},
                 {"forks, disposable plastic blk ","1128"},
                 {"gloves, lrg powder free ","1330"},
                 {"gloves, med powder free ","1329"},
                 {"gloves, sml powder free ","1328"},
                 {"gloves, xl powder free ","1385"},
                 {"hairnet, (dkbrn) ","1211"},
                 {"liner, can 12-16gal. ","1137"},
                 {"liner, can 33gal. ","1135"},
                 {"liner, can 8-10gal. ","1136"},
                 {"liner, pan (fullsize) ","1142"},
                 {"liner, pan (halfsize) ","1143"},
                 {"napkins disposable ","1144"},
                 {"plates paper 8.5\" ","1145"},
                 {"spoons plastic washable blue ","1004"},
                 {"towels chix ","1148"},
                 {"tray 2# ","1156"},
                 {"breakfast round dough, choc chip ","1445"},
                 {"baked cookies (cpk) ","1430"},
                 {"cinnamon roll dough 1.25oz ","1170"},
                 {"dinner rolls ","DST1030"},
                 {"muffin (cpk) ","1315"},
                 {"pancake w/g ","1162"},
                 {"pizza crust 16\" (new 2019) ","DST1083"},
                 {"re pack dragon puff ","DST1127"},
                 {"re pack rounds ","DST1132"},
                 {"tortillas mindful grain 8\" ","1190"},
                 {"waffle, mini maple ","DST1131"},
                 {"beef crumbles (comm) ","DST1041"},
                 {"cherries iqf comm, ","DST1120"},
                 {"chicken fajita (100117) (comm) ","1022"},
                 {"peas, frozen (comm) ","DST1085"},
                 {"peppers and onion blend frz (comm) ","DST1097"},
                 {"potato fries oven (comm) ","1440"},
                 {"strawberry froz, 6/5lb (comm) ","DST1099"},
                 {"turkey roast (comm) ","DST1089"},
                 {"beef meatball jtm (cp5049) (comm) ","DST1026"},
                 {"beef patty (comm) #69050 (sep2020) ","DST1141"},
                 {"beef taco meat jtmcp 5250 (comm) ","1410"},
                 {"breadstick, cheese filled w/g 7338 comm ","1065"},
                 {"cheese sauce jalapeno jtm 5708 (comm) ","1435"},
                 {"cheese sauce jtm 5705 (comm) ","1434"},
                 {"chicken nugget tyson (70364) (comm) ","1427"},
                 {"chicken patty tyson (70304) (comm) ","1026"},
                 {"chicken patty, hot & spicy (70314) (comm) ","1250"},
                 {"re pack chicken burger comm ","DST1142"},
                 {"re pack hamburger (commod) ","DST1133"},
                 {"re pack nuggets ","DST1134"},
                 {"sloppy joe jtm (cp454) comm ","1414"},
                 {"juice, apple frozen ","1104"},
                 {"burrito, bean & cheese (new 2017) ","DST1084"},
                 {"chicken patty (70304) (sysco) ","1249"},
                 {"corndog chicken ","1068"},
                 {"egg omelets ","1040"},
                 {"egg patties (sysco) ","DST1153"},
                 {"franks, turkey 8/1 ","1097"},
                 {"pancake/sausage breakfast on a stick ","1420"},
                 {"pizza breakfast sausage w/g 63912 (not comm) ","1452"},
                 {"re pack egg & cheese muffin ","DST1138"},
                 {"re pack hotdog ","DST1136"},
                 {"re pack omelet ","DST1139"},
                 {"re pack sandwich ","DST1137"},
                 {"sausage crumble topping ","1009"},
                 {"turkey sausage patty (sysco) ","1055"},
{"re pack cinnamon rolls ","DST1154"},
{"egg patty (comm) ","DST1153"} };

  // main loop
    // user input - search the dataset item keywords. convert to lowercase. 0exit
    while(true)
    {
      string keyword = "";
      cout << "\nSearch inventory: ";
      cin >> keyword;

      // whole string version
      //getline (cin, keyword);

      // iterate through array[i]. if the keyword was found, print array[i][j]
      for(int i = 0; i < 144; i++)
      {
        size_t found = a[i][0].find(keyword);
        if (found!=string::npos)
        {
          for(int j = 0; j < 2; j++)
          {
            cout << a[i][j] << " ";
          }
          cout << "\n";
        }

      }

      // if no match found, print no match
    }

  // debug

  return 0;
}
