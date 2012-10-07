
##############################
# Country definition for DEN #
##############################

country =
{ tag                 = DEN
  regular_id          = U72
  transports          = 18
  escorts             = 0
  manpower            = 30
  capital             = 294
  # Resource Reserves
  energy              = 1000
  metal               = 1000
  rare_materials      = 500
  oil                 = 500
  supplies            = 500
  money               = 10
  # NATO
  diplomacy =
  { relation = { tag = BEL value = 200 access = yes }
    relation = { tag = BUL value = 200 access = yes }
    relation = { tag = CAN value = 200 access = yes }
    relation = { tag = CZE value = 200 access = yes }
    relation = { tag = USA value = 200 access = yes }
    relation = { tag = EST value = 200 access = yes }
    relation = { tag = FRA value = 200 access = yes }
    relation = { tag = GER value = 200 access = yes }
    relation = { tag = GRE value = 200 access = yes }
    relation = { tag = HUN value = 200 access = yes }
    relation = { tag = ICL value = 200 access = yes }
    relation = { tag = ITA value = 200 access = yes }
    relation = { tag = LAT value = 200 access = yes }
    relation = { tag = LIT value = 200 access = yes }
    relation = { tag = LUX value = 200 access = yes }
    relation = { tag = HOL value = 200 access = yes }
    relation = { tag = NOR value = 200 access = yes }
    relation = { tag = POL value = 200 access = yes }
    relation = { tag = POR value = 200 access = yes }
    relation = { tag = ROM value = 200 access = yes }
    relation = { tag = SLO value = 200 access = yes }
    relation = { tag = SLV value = 200 access = yes }
    relation = { tag = SPA value = 200 access = yes }
    relation = { tag = TUR value = 200 access = yes }
    relation = { tag = ENG value = 200 access = yes }
  }
  SpyInfo                = {  country = "DEN" NumberOfSpies = 3  } 
   nationalprovinces      = {  216 217 218 219 294 220 2 1783 } 
   ownedprovinces         = {  216 217 218 219 294 220  2 1783 } 
   controlledprovinces    = {  216 217 218 219 294 220  2  1783}
  techapps            = {
					#Industry
					5010 5020 5030 5040 5050 5060 5070 5080 5090
					5110 5120 5130 5140 5150 5160 5170 5180 5190
					5210 5220 5230 5240 5250 5260 5270 5280 5290
                                        #Army Equip:
                                        2000 2050 2110
                                        2010 2060 2120
                                             2070
                                        2300 2310 2320
                                        2400 2410 2420
                                        2200 2210 2220
                                        2500 2510 2520
                                        2600 2610 2620
                                        2700 2710 2720
                                        2800 2810 2820
					#Army Org
                                        1000 1050 1110
                                        1010 1060 1120
                                             1070
                                        1500 1510 1520
                                        1300 1310 1320
                                        1260 1270
					1990
                                        1900 1910 1920
					#Aircraft
					4800 4810
					4700 4710
					4750 4760
					4900 4910
                                        4000 4010 4020
                                        4400 4410
                                        4640 4650
					#Land Docs
					6930
					6600 6610
					6010 6020
					6100 6110 6120 6140 6160
					6200 6210 6220 6240 6260
					#Air Docs
					9040 9510 9520 9530 9540
					9050 9060 9070 9120
					9130 9140 9150 9200
					#Secret Weapons
					7010 7060 7070 7080
					7180
                                        7330 7310 7320
                                        #Navy Techs
                                        3000 3010 3020
                                        3590
                                        3700 37700 3710
                                        3850 3860 3870
                                        #Navy Doctrines
                                        8900 8910 8920
                                        8950 8960 8970
                                        8400 8410 8420
                                        8000 8010 8020
                                        8500 8510 8520
                        }
  policy =
  { date              = { year = 0 month = march day = 0 }
    democratic        = 10
    political_left    = 5
    free_market       = 8
    freedom           = 9
    professional_army = 5
    defense_lobby     = 2
    interventionism   = 6
  }
  # #####################################
  # ARMY
  # #####################################
  landunit =
  { id       = { type = 9100 id = 1 }
    location = 294
    name     = "Den Internationale Brigade"
    division =
    { id       = { type = 9100 id = 2 }
      name     = "Den Internationale Brigade"  # rapid reaction unit dissolved in 2005
      strength = 90
      type     = cavalry
      model    = 2
    }
  }
  landunit =
  { id       = { type = 9100 id = 3 }
    location = 216
    name     = "Multinational Corps Northeast" # splitted in 2 brigades in 2005
    division =
    { id       = { type = 9100 id = 4 }
      name     = "Danske Division"
      strength = 10
      type     = infantry
      model    = 1
    }
  }
  # ###################################
  # NAVY
  # ###################################
  navalunit =
  { id       = { type = 9100 id = 200 }
    location = 294
    base     = 294
    name     = "Kongelige Danske Marine"
    division =
    { id    = { type = 9100 id = 201 }
      name  = "KDM Thetis"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 9100 id = 202 }
      name  = "KDM Triton"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 9100 id = 203 }
      name  = "KDM Vædderen"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 9100 id = 204 }
      name  = "KDM Hvidbjørnen"
      type  = destroyer
      model = 1
    }
  }
  navalunit =
  { id       = { type = 9100 id = 209 }
    location = 294
    base     = 294
    name     = "Undervandsflaade"
    division =
    { id    = { type = 9100 id = 210 }
      name  = "KDM Kronborg"
      type  = submarine
      model = 2
    }
  }
  # ####################################
  # AIR FORCE
  # ####################################
  airunit =
  { id       = { type = 9100 id = 100 }
    location = 220
    base     = 220
    name     = "Flyvevåbnet"
    division =
    { id       = { type = 9100 id = 101 }
      name     = "Fighter Wing Skrydstrup"
      type     = interceptor
      strength = 100
      model    = 2
    }
    division =
    { id       = { type = 9100 id = 102 }
      name     = "Air Transport Wing Aalborg"
      type     = transport_plane
      strength = 100
      model    = 1
    }
  }
}
