
##############################
# Country definition for BRA #
##############################

country =
{ tag                 = BRA
  # Resource Reserves
  energy              = 1000
  metal               = 1000
  rare_materials      = 500
  oil                 = 500
  supplies            = 500
  money               = 80
  manpower            = 331
  transports          = 170
  escorts             = 0
  capital             = 2075
  diplomacy = 
   {  relation = {  tag = ARG value = -10  } 
     relation = {  tag = BOL value = 10  } 
     relation = {  tag = CHL value = 10  } 
     relation = {  tag = COL value = 10  } 
     relation = {  tag = ECU value = 10  } 
     relation = {  tag = GER value = 50  } 
     relation = {  tag = IRE value = 20  } 
     relation = {  tag = PAR value = 10  } 
     relation = {  tag = POR value = 75  } 
     relation = {  tag = PRU value = 10  } 
     relation = {  tag = SOV value = 50  } 
     relation = {  tag = URU value = 125  } 
     relation = {  tag = USA value = 120  } 
     relation = {  tag = VEN value = 10  } 
    } 
   SpyInfo                = {  country = "BRA" NumberOfSpies = 5  }
  nationalprovinces      = {  2058 2057 2060 2061 2004 2003 2002 2001 2005 2062 2071 2066 2065 2068 2069 2067 2076 2059 2075 2074 2073 2072 2070 2006  } 
   ownedprovinces         = {  2058 2057 2060 2061 2004 2003 2002 2001 2005 2062 2071 2066 2065 2068 2069 2067 2076 2059 2075 2074 2073 2072 2070 2006  } 
   controlledprovinces    = {  2058 2057 2060 2061 2004 2003 2002 2001 2005 2062 2071 2066 2065 2068 2069 2067 2076 2059 2075 2074 2073 2072 2070 2006  } 
  techapps            = { 
                                        #Industry:
                                        5010 5110
                                        5020 5120
                                        5030 5130
                                        5040 5140
                                        5050 5150
                                        5060 5160
                                        5070 5170
                                        5080 5180
                                        5090 5190
					#Army Equip
                                        2000 2050
                                        2010 2060
                                             2070
                                        2300 2310
					2200 2210
					2500 2510
					2600 2610
					2700 2710
					2800 2810
					2400 2410
					#Army Org
                                        1000 1050
                                        1010 1060
                                             1070
					1300 1310
                                        1500 1510
                                        1200 1210
					1400 1410
					1800
					1900 1910
					1980
					1260
					1700
					#Aircraft
					4570
					4400 4410
                                        4000 4010
                                        4100 4110 4120
					4300
                                        4640 4650
                                        4700 4710
					4750 4760
					4800 4810
					#Land Docs
					6100 6110 6120 6130 6140 6150 6160 6170
					6600 6610
					6910
					6010 6030 6040 6200
					#Air Docs
					9010 9510
					9050 9060 9070 9090 9100 9110 9120 9450
					#Secret Weapons
					7010 7060 7070
					7180
                                        7330 7310
                                        #Navy Techs
                                        3000 3010
                                        3400
                                        3590
                                        3700 37700 3710 37710
                                        3850 3860
                                        #Navy Doctrines
                                        8900 8910
                                        8950 8960
                                        8400 8410
                                        8000 8010
                                        8500 8510
                                        8300
                                        8800
				
                        }
  policy =
  { date              = { year = 0 month = march day = 0 }
    democratic        = 9
    political_left    = 8
    free_market       = 6
    freedom           = 7
    professional_army = 4
    defense_lobby     = 3
    interventionism   = 6
  }
  # #####################################
  # ARMY
  # #####################################
  landunit =
  { id       = { type = 7100 id = 1 }
    location = 2067
    name     = "Comando de Operações Terrestres"
    division =
    { id       = { type = 7100 id = 2 }
      name     = "C O Ter HQ"
      strength = 100
      type     = hq
      model    = 1
    }
  }
  landunit =
  { id       = { type = 7100 id = 3 }
    location = 2005
    name     = "Comando Militar da Amazônia"
    division =
    { id       = { type = 7100 id = 4 }
      name     = "1a Brigada de Selva"
      strength = 100
      type     = bergsjaeger
      model    = 12
    }
    division =
    { id       = { type = 7100 id = 5 }
      name     = "2a Brigada de Selva"
      strength = 100
      type     = bergsjaeger
      model    = 12
    }
    division =
    { id       = { type = 7100 id = 6 }
      name     = "16a Brigada de Selva"
      strength = 100
      type     = bergsjaeger
      model    = 12
    }
    division =
    { id       = { type = 7100 id = 7 }
      name     = "17a Brigada de Selva"
      strength = 100
      type     = bergsjaeger
      model    = 12
    }
    division =
    { id       = { type = 7100 id = 8 }
      name     = "23a Brigada de Selva"
      strength = 100
      type     = bergsjaeger
      model    = 12
    }
  }
  landunit =
  { id       = { type = 7100 id = 9 }
    location = 2071
    name     = "Comando Militar do Nordeste" 
    division =
    { id            = { type = 7100 id = 10 }
      name          = "7a Divisão de Exército"
      strength      = 80
      type          = motorized
      model         = 1
    }
  }
  landunit =
  { id       = { type = 7100 id = 12 }
    location = 2060
    name     = "Comando Militar do Oeste"
    division =
    { id            = { type = 7100 id = 13 }
      name          = "4a Brigada de Cavalaria Mecanizada"
      strength      = 100
      type          = cavalry
      model         = 1
    }
    division =
    { id            = { type = 7100 id = 14 }
      name          = "13a Brigada Motorizada"
      strength      = 100
      type          = mechanized
      model         = 1
    }
    division =
    { id            = { type = 7100 id = 15 }
      name          = "18a Brigada de Fronteira"
      strength      = 100
      type          = garrison
      model         = 8
    }
  }
  landunit =
  { id       = { type = 7100 id = 16 }
    location = 2067
    name     = "Comando Militar do Planalto"
    division =
    { id            = { type = 7100 id = 17 }
      name          = "3a Brigada Motorizada"
      strength      = 100
      type          = mechanized
      model         = 1
    }
    division =
    { id       = { type = 7100 id = 18 }
      name     = "Brigada de Operações Especiais"
      strength = 100
      type     = bergsjaeger
      model    = 14
    }
  }
  landunit =
  { id       = { type = 7100 id = 19 }
    location = 2075
    name     = "Comando Militar do Leste" # 1st division command
    division =
    { id            = { type = 7100 id = 20 }
      name          = "4a Brigada Motorizada"
      strength      = 100
      type          = mechanized
      model         = 1
    }
    division =
    { id            = { type = 7100 id = 21 }
      name          = "Brigada Paraquedista"
      strength      = 100
      type          = paratrooper
      model         = 15
    }
  }
  landunit =
  { id       = { type = 7100 id = 22 }
    location = 2059
    name     = "Comando Militar do Sudeste" # 2nd division command
    division =
    { id       = { type = 7100 id = 23 }
      name     = "12a Brigada Leve"
      strength = 100
      type     = militia
      model    = 1
    }
  }
  landunit =
  { id       = { type = 7100 id = 24 }
    location = 2058
    name     = "Comando Militar do Sul"
    division =
    { id       = { type = 7100 id = 25 }
      name     = "3a Divisão de Exército"
      strength = 100
      type     = infantry
      model    = 2
    }
    division =
    { id       = { type = 7100 id = 26 }
      name     = "5a Divisão de Exército"
      strength = 100
      type     = infantry
      model    = 1
    }
    division =
    { id       = { type = 7100 id = 27 }
      name     = "6a Divisão de Exército"
      strength = 100
      type     = motorized
      model    = 2
    }
  }
  landunit =
  { id       = { type = 7100 id = 28 }
    location = 2075
    name     = "Força de Fuzileiros da Esquadra"
    division =
    { id       = { type = 7100 id = 29 }
      name     = "Divisão Anfíbia"
      strength = 50
      type     = marine
      model    = 11
    }
  }
  # #####################################
  # NAVY
  # #####################################
  navalunit =
  { id       = { type = 7100 id = 200 }
    location = 2058
    base     = 2058
    name     = "Marinha do Brasil"
    division =
    { id            = { type = 7100 id = 201 }
      name          = "São Paulo"
      type          = escort_carrier
      model         = 0
    }
    division =
    { id    = { type = 7100 id = 215 }
      name  = "Niterói"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 7100 id = 216 }
      name  = "Defensora"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 7100 id = 213 }
      name  = "Constituição"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 7100 id = 214 }
      name  = "Liberal"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 7100 id = 217 }
      name  = "Independência"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 7100 id = 218 }
      name  = "União"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 7100 id = 202 }
      name  = "Greenhalgh"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 7100 id = 203 }
      name  = "Dodsworth"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 7100 id = 204 }
      name  = "Bosísio"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 7100 id = 205 }
      name  = "Rademaker"
      type  = destroyer
      model = 1
    }
  }
  navalunit =
  { id       = { type = 7100 id = 219 }
    location = 2058
    base     = 2058
    name     = "Força de Submarinos"
    division =
    { id    = { type = 7100 id = 220 }
      name  = "Tupi"
      type  = submarine
      model = 2
    }
    division =
    { id    = { type = 7100 id = 221 }
      name  = "Tamoio"
      type  = submarine
      model = 2
    }
    division =
    { id    = { type = 7100 id = 222 }
      name  = "Timbira"
      type  = submarine
      model = 2
    }
    division =
    { id    = { type = 7100 id = 223 }
      name  = "Tapajó"
      type  = submarine
      model = 2
    }
  }
  navalunit =
  { id       = { type = 7100 id = 224 }
    location = 2059
    base     = 2059
    name     = "Amphibious Fleet"
    division =
    { id    = { type = 7100 id = 225 }
      name  = "1a Flotilha de Transporte"
      type  = transport
      model = 0
    }
    division =
    { id    = { type = 7100 id = 226 }
      name  = "2a Flotilha de Transporte"
      type  = transport
      model = 0
    }
    division =
    { id    = { type = 7100 id = 227 }
      name  = "3a Flotilha de Transporte"
      type  = transport
      model = 0
    }
    division =
    { id    = { type = 7100 id = 228 }
      name  = "4a Flotilha de Transporte"
      type  = transport
      model = 0
    }
  }
  # #####################################
  # AIR FORCE
  # #####################################
  airunit =
  { id       = { type = 7100 id = 100 }
    location = 2059
    base     = 2059
    name     = "II FAe"
    division =
    { id       = { type = 7100 id = 101 }
      name     = "7. Grupo de Aviação"
      type     = naval_bomber
      strength = 100
      model    = 0
    }
  }
  airunit =
  { id       = { type = 7100 id = 102 }
    location = 2075
    base     = 2075
    name     = "III FAe"
    division =
    { id       = { type = 7100 id = 103 }
      name     = "1. Grupo de Aviação de Caça"
      type     = interceptor
      strength = 100
      model    = 1
    }
    division =
    { id       = { type = 7100 id = 104 }
      name     = "1. Grupo de Defesa Aérea"
      type     = multi_role
      strength = 100
      model    = 2
    }
    division =
    { id       = { type = 7100 id = 105 }
      name     = "3. Grupo de Aviação"
      type     = tactical_bomber
      strength = 100
      model    = 0
    }
  }
   airunit =
  { id       = { type = 7100 id = 106 }
    location = 2075
    base     = 2075
    name     = "V FAe"
    division =
    { id       = { type = 7100 id = 107 }
      name     = "1. Grupo de Transporte"
      type     = transport_plane
      strength = 100
      model    = 0
    }
  }
}
