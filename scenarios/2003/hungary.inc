
##############################
# Country definition for HUN #
##############################

country =
{ tag                 = HUN
  manpower            = 41
  capital             = 284
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
    relation = { tag = DEN value = 200 access = yes }
    relation = { tag = EST value = 200 access = yes }
    relation = { tag = FRA value = 200 access = yes }
    relation = { tag = GER value = 200 access = yes }
    relation = { tag = GRE value = 200 access = yes }
    relation = { tag = USA value = 150 access = yes }
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
  SpyInfo                = {  country = "HUN" NumberOfSpies = 7  } 
 nationalprovinces = {  276 277 278 279 280 281 282 283 284 209 210 215 293 341 296 } 
 ownedprovinces = {  276 277 278 279 280 281 282 283 284  } 
 controlledprovinces = {  276 277 278 279 280 281 282 283 284  } 
 claimedprovinces = {  188 208 211 212 213 214 285 286 287 288 289 291 292 295 341   } 
  techapps            = { 
					#Industry
					5010 5020 5030 5040 5050 5060 5070 5080 5090
					5110 5120 5130 5140 5150 5160 5170 5180 5190
					#Army Equip
                                        2000 2050
                                        2010 2060
					2200 2210
					2400 2410
					2500 2510
					2600 2610
					2700 2710
					2800 2810
					#Army Org
                                        1000 1050
                                        1010 1060
					1260
					1900 1910
					1800
					1300 1310
					1400 1410
					#Aircraft
                                        4400 4410
                                        4000 4010 4020
                                        4640 4650
                                        4700 4710
                                        4750 4760
					4900
					#Land Docs
					6010 6020
					6930
					6600 6610
					6100 6110 6120 6140 6160 6170
					6200 6210 6220 6240 6260 6270
					#Air Docs
					9040 9510 9520 9530 9540
					9050 9060 9070 9120
					9130 9140 9150 9200
					#Secret Weapons
					7010
					7060 7070
                                        7330 7310
                        }
  policy =
  { date              = { year = 0 month = march day = 0 }
    democratic        = 10
    political_left    = 5
    free_market       = 8
    freedom           = 8
    professional_army = 9
    defense_lobby     = 3
    interventionism   = 5
  }
  # #####################################
  # ARMY
  # #####################################
  landunit =
  { id       = { type = 12100 id = 1 }
    location = 284
    name     = "I.Corps"
    division =
    { id            = { type = 12100 id = 2 }
      name          = "MH 5. Bocskai István Lövészdandár"
      strength      = 100
      type          = mechanized
      model         = 1
    }
  }
  landunit =
  { id       = { type = 12100 id = 3 }
    location = 281
    name     = "II Corps"
    division =
    { id            = { type = 12100 id = 4 }
      name          = "MH 25. Klapka György Lövészdandár"
      strength      = 100
      type          = mechanized
      model         = 1
    }
  }
  landunit =
  { id       = { type = 12100 id = 5 }
    location = 282
    name     = "III Corps"
    division =
    { id            = { type = 12100 id = 6 }
      name          = "MH 62. Bercsényi Miklós Gépesített Lövészdandár"  # dissolved in 2004
      strength      = 30
      type          = light_armor
      model         = 4
    }
  }
  # ####################################
  # AIR FORCE
  # ####################################
  airunit =
  { id       = { type = 12100 id = 200 }
    location = 284
    base     = 284
    name     = "Magyar Légiero"
    division =
    { id       = { type = 12100 id = 201 }
      name     = "59.'Szentgyörgyi Dezso' Harcászati Repülobázis"
      type     = interceptor
      strength = 20
      model    = 2
    }
  }
}
