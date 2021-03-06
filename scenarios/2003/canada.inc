
##############################
# Country definition for CAN #
##############################

country =
{ tag                 = CAN
  # Resource Reserves
  energy              = 1000
  metal               = 1000
  rare_materials      = 500
  oil                 = 500
  supplies            = 500
  money               = 20
  manpower            = 21
  transports          = 140
  escorts             = 0
  capital             = 2108
  # NATO
  diplomacy =
  { relation = { tag = BEL value = 200 access = yes }
    relation = { tag = BUL value = 200 access = yes }
    relation = { tag = USA value = 200 access = yes }
    relation = { tag = CZE value = 200 access = yes }
    relation = { tag = DEN value = 200 access = yes }
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
  SpyInfo                = {  country = "CAN" NumberOfSpies = 6  } 
   nationalprovinces      = {  2089 2092 2090 2093 2095 2103 2104 2105 2102 2099 2091 2096 2097 2098 2094 2100 2101 2106 2107 2115 2108 2109 2110 2129 2113 2114 2148 2149 2112 2127 2130 2111 2116 2123 2122 2121 2120 2125 2124 2117 2118 2119 2128 2135 2136 2138 2137 2132 2131 2134 2126 2133  } 
   ownedprovinces         = {  2090 2089 2092 2105 2102 2099 2093 2091 2095 2094 2096 2103 2104 2101  2100    2097 2098 2107 2115 2106 2110 2129 2113 2114 2148 2149 2112 2127 2130 2108 2111 2109 2119 2117 2116 2123 2122 2121 2120 2125 2124 2128  2132 2131 2134 2126 2133 2118 2136 2138 2137  } 
   controlledprovinces    = {  2090  2089 2092  2105 2102 2099 2093 2091 2095  2094  2096    2103  2104  2101  2100   2097 2098   2107 2115   2106  2110  2129 2113 2114 2148 2149 2112 2127 2130  
                              2108  2111  2109  2119   2117  2116 2123 2122 2121 2120 2125 2124  2128  2132 2131 2134 2126  2133  2118 2136 2138 2137 
                             } 
  techapps            = { 
					#Industry
					5010 5020 5030 5040 5050 5060 5070 5080 5090
					5110 5120 5130 5140 5150 5160 5170 5180 5190
					5210 5220 5230 5240 5250 5260 5270 5280 5290
					#Army Equip
                                        1000 1050 1110
                                        1010 1060 1120
                                             1070
					2200 2210 2220 2230
                                        2300 2310 2320 2330
					2400 2410 2420 2430
                                        2500 2510 2520 2530
					2600 2610 2620 2630
                                        2700 2710 2720 2730
					2800 2810 2820 2830
					#Army Org
					1990
                    1500 1510 1520 1530
					1900 1910 1920 1930
					1260 1270
					1300 1310 1320 1330
					1800 1810 1820
					#Aircraft
					4800 4810 4820
					4700 4710 4720
					4750 4760 4770
                                        4000 4010 4020 4030
                                        4640 4650 4660
					4900 4910 4920
                                        4400 4410
                                        4300 4310
                                        4570
					#Land Docs
					6010 6020
					6930
					6600 6610 6700 6710
					6100 6110 6120 6140 6160
					6200 6210 6220 6240 6260
					6300 6310 6320 6340 6360
					#Air Docs
					9040 9510 9520 9530 9540
					9050 9060 9070 9120
					9130 9140 9150 9200
					9210 9220 9230 9280
					#Secret Weapons
					7010 7060 7070 7080
					7180 7190 7200
                                        7330 7310 7320
                                        #Navy Techs
                                        3000 3010 3020
                                        3100 3110
                                        3590
                                        3700 3710 3720
                                        3850 3860 3870
                                        #Navy Doctrines
                                        8900 8910 8920
                                        8950 8960 8970
                                        8400 8410 8420
                                        8000 8010 8020
                                        8500 8510 8520
                                        8100 8110 8120
                                        8600 8610 8620
                        }
  policy =
  { date              = { year = 0 month = march day = 0 }
    democratic        = 10
    political_left    = 9
    free_market       = 8
    freedom           = 9
    professional_army = 10
    defense_lobby     = 2
    interventionism   = 6
  }
  # #####################################
  # ARMY
  # #####################################
  landunit =
  { id       = { type = 7700 id = 1 }
    location = 2103
    name     = "Land Force Western Area"
    division =
    { id            = { type = 7700 id = 2 }
      name          = "1 Mechanized Brigade"
      strength      = 100
      type          = cavalry
      model         = 3
    }
  }
  landunit =
  { id       = { type = 7700 id = 3 }
    location = 2111
    name     = "Land Force Central Area"
    division =
    { id            = { type = 7700 id = 4 }
      name          = "2 Mechanized Brigade"
      strength      = 100
      type          = cavalry
      model         = 3
    }
  }
  landunit =
  { id       = { type = 7700 id = 5 }
    location = 2119
    name     = "Land Force Quebec Area"
    division =
    { id            = { type = 7700 id = 6 }
      name          = "5 Mechanized Brigade"
      strength      = 100
      type          = cavalry
      model         = 3
    }
  }
  # #####################################
  # NAVY
  # #####################################
  navalunit =
  { id       = { type = 7700 id = 200 }
    location = 2132
    base     = 2132
    name     = "Maritime Forces Atlantic"
    division =
    { id    = { type = 7700 id = 201 }
      name  = "HMCS Iroquois"
      type  = light_cruiser
      model = 1
    }
    division =
    { id    = { type = 7700 id = 202 }
      name  = "HMCS Athabaskan"
      type  = light_cruiser
      model = 1
    }
    division =
    { id    = { type = 7700 id = 203 }
      name  = "HMCS Halifax"
      type  = destroyer
      model = 2
    }
    division =
    { id    = { type = 7700 id = 204 }
      name  = "HMCS Ville de Qu�bec"
      type  = destroyer
      model = 2
    }
    division =
    { id    = { type = 7700 id = 205 }
      name  = "HMCS Toronto"
      type  = destroyer
      model = 2
    }
    division =
    { id    = { type = 7700 id = 206 }
      name  = "HMCS Montr�al"
      type  = destroyer
      model = 2
    }
    division =
    { id    = { type = 7700 id = 207 }
      name  = "HMCS Fredericton"
      type  = destroyer
      model = 2
    }
    division =
    { id    = { type = 7700 id = 208 }
      name  = "HMCS Charlottetown"
      type  = destroyer
      model = 2
    }
    division =
    { id    = { type = 7700 id = 209 }
      name  = "HMCS St. John's"
      type  = destroyer
      model = 2
    }
    division =
    { id    = { type = 7700 id = 210 }
      name  = "HMCS Victoria"
      type  = submarine
      model = 3
    }
    division =
    { id    = { type = 7700 id = 211 }
      name  = "HMCS Windsor"
      type  = submarine
      model = 3
    }
  }
  navalunit =
  { id       = { type = 7700 id = 212 }
    location = 2089
    base     = 2089
    name     = "Maritime Forces Pacific"
    division =
    { id    = { type = 7700 id = 213 }
      name  = "HMCS Algonquin"
      type  = light_cruiser
      model = 1
    }
    division =
    { id    = { type = 7700 id = 214 }
      name  = "HMCS Vancouver"
      type  = destroyer
      model = 2
    }
    division =
    { id    = { type = 7700 id = 215 }
      name  = "HMCS Regina"
      type  = destroyer
      model = 2
    }
    division =
    { id    = { type = 7700 id = 216 }
      name  = "HMCS Calgary"
      type  = destroyer
      model = 2
    }
    division =
    { id    = { type = 7700 id = 217 }
      name  = "HMCS Winnipeg"
      type  = destroyer
      model = 2
    }
    division =
    { id    = { type = 7700 id = 218 }
      name  = "HMCS Ottawa"
      type  = destroyer
      model = 2
    }
    division =
    { id    = { type = 7700 id = 219 }
      name  = "HMCS Corner Brook"
      type  = submarine
      model = 3
    }
    division =
    { id    = { type = 7700 id = 220 }
      name  = "HMCS Chicoutimi"
      type  = submarine
      model = 3
    }
  }
  # #####################################
  # AIR FORCE
  # #####################################
  airunit =
  { id       = { type = 7700 id = 100 }
    location = 2104
    base     = 2104
    name     = "4 Wing"
    division =
    { id       = { type = 7700 id = 101 }
      name     = "4 Wing"
      type     = interceptor
      strength = 100
      model    = 2
    }
  }
  airunit =
  { id       = { type = 7700 id = 102 }
    location = 2108
    base     = 2108
    name     = "8 Wing"
    division =
    { id       = { type = 7700 id = 103 }
      name     = "8 Wing"
      type     = transport_plane
      strength = 80
      model    = 1
    }
  }
  airunit =
  { id       = { type = 7700 id = 104 }
    location = 2119
    base     = 2119
    name     = "19 Wing"
    division =
    { id       = { type = 7700 id = 105 }
      name     = "19 Wing"
      type     = naval_bomber
      strength = 40
      model    = 1
    }
  }
}
