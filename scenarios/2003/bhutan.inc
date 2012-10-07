 
 ############################## 
 # Country definition for BHU # 
 ############################## 
  
 country = 
 {  tag                    = BHU  
   manpower               = 0 
   # Resource Reserves 
energy                 = 180
metal                  = 90
rare_materials         = 45
   oil                    = 200 
   supplies               = 200 
   money                  = 10 
   capital                = 1456 
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 3 
     political_left    = 4 
     free_market       = 8 
     freedom           = 9 
     professional_army = 2 
     defense_lobby     = 1 
     interventionism   = 1 
    } 
   nationalprovinces      = {  1456  } 
   ownedprovinces         = {  1456  } 
   controlledprovinces    = {  1456  } 
  
   techapps            = {
					#Industry
					5010 5020 5030 5040 5050 5060 5070 5080 5090
					5110 5120 5130 5140 5150      5170      5190
                                        #Army Equip:
                                        2400 2410 2420
                                        2200 2210 2220
                                        2500 2510 2520
                                        2600 2610 2620
                                        2700 2710 2720
                                        2800 2810 2820
					#Army Org
                                        1300 1310 1320
                                        1260 1270
					1990
					1900 1910 1920
					#Air Docs
                                        9050
                                        9060
                                        9070
                                        9020
                                        9510 9520
					#Air Force
                                        4640
                                        4700
                                        4750
					#Land Docs
					6930 6010 6020
					6600 6610
					6100 6110 6160 6170
                                        6200 6210
					#Navy
                                        3000
                                        3850
                                        3590
					#Navy Docs
                                        8900
                                        8950
                                        8000
                                        8500
                        }
   diplomacy = 
   {  relation = {  tag = AST value = 200  } 
     relation = {  tag = CAN value = 200  } 
     relation = {  tag = ENG value = 200  } 
     relation = {  tag = FRA value = 150  } 
     relation = {  tag = GER value = 1  } 
     relation = {  tag = IRQ value = 100  } 
     relation = {  tag = ITA value = 1  } 
     relation = {  tag = NEP value = 200  } 
     relation = {  tag = NZL value = 200  } 
     relation = {  tag = OMN value = 150  } 
     relation = {  tag = SAF value = 200  } 
     relation = {  tag = USA value = 100  } 
     relation = {  tag = YEM value = 150  } 
    } 
   SpyInfo                = {  country = "BHU" NumberOfSpies = 1  } 
   headofstate            = {  type = 9 id = 330001  } 
   headofgovernment       = {  type = 9 id = 330002  } 
   foreignminister        = {  type = 9 id = 330003  } 
   armamentminister       = {  type = 9 id = 330004  } 
   ministerofsecurity     = {  type = 9 id = 330005  } 
   ministerofintelligence = {  type = 9 id = 330006  } 
   chiefofstaff           = {  type = 9 id = 330007  } 
   chiefofarmy            = {  type = 9 id = 330008  } 
   chiefofnavy            = {  type = 9 id = 330009  } 
   chiefofair             = {  type = 9 id = 330010  } 
   landunit = 
   {  location = 1456 
     id       = {  type = 16000 id = 1  } 
     name     = "Royal Bhutanese Army" 
     Division = 
     {  id       = {  type = 16000 id = 2  } 
       name     = "Household Division" 
       type     = infantry 
       model    = 5
       strength = 10 
      } 
     Division = 
     {  id       = {  type = 16000 id = 3  } 
       name     = "Royal Division" 
       type     = infantry 
       model    = 5
       strength = 10 
      } 
    } 
  } 
 