
##############################
# Country definition for AFG #
##############################

country =
{ tag                 = AFG
  puppet              = USA
  control             = USA
  # Resource Reserves
  energy              = 1000
  metal               = 1000
  rare_materials      = 500
  oil                 = 500
  supplies            = 500
  money               = 10
  manpower            = 26
  dissent             = 10
  capital             = 2171
  diplomacy =
  { relation = { tag = USA value = 200 access = yes }
  }
  nationalprovinces      = {  2168 2173 2172 2171 2169 2170 1529 1537  } 
	ownedprovinces         = {  2168 2173 2172 2171 2169 2170  } 
	controlledprovinces    = {  2168 2173 2172 2171 2169 2170  }
  techapps            = {  }
  policy =
  { date              = { year = 0 month = march day = 0 }
    democratic        = 3
    political_left    = 5
    free_market       = 5
    freedom           = 3
    professional_army = 1
    defense_lobby     = 3
    interventionism   = 2
  }
}
