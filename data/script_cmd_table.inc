	.align 2
gScriptCmdTable:: @ 814AE30
	.4byte ScrCmd_nop                     @ 0x00
	.4byte ScrCmd_nop1                    @ 0x01
	.4byte ScrCmd_end                     @ 0x02
	.4byte ScrCmd_return                  @ 0x03
	.4byte ScrCmd_call                    @ 0x04
	.4byte ScrCmd_goto                    @ 0x05
	.4byte ScrCmd_goto_if                 @ 0x06
	.4byte ScrCmd_call_if                 @ 0x07
	.4byte ScrCmd_gotostd                 @ 0x08
	.4byte ScrCmd_callstd                 @ 0x09
	.4byte ScrCmd_gotostd_if              @ 0x0A
	.4byte ScrCmd_callstd_if              @ 0x0B
	.4byte ScrCmd_gotoram                 @ 0x0C
	.4byte ScrCmd_killscript              @ 0x0D
	.4byte ScrCmd_setmysteryeventstatus   @ 0x0E
	.4byte ScrCmd_loadword                @ 0x0F
	.4byte ScrCmd_loadbyte                @ 0x10
	.4byte ScrCmd_writebytetoaddr         @ 0x11    
	.4byte ScrCmd_loadbytefromaddr        @ 0x12
	.4byte ScrCmd_setptrbyte              @ 0x13
	.4byte ScrCmd_copylocal               @ 0x14
	.4byte ScrCmd_copybyte                @ 0x15
	.4byte ScrCmd_setvar                  @ 0x16
	.4byte ScrCmd_addvar                  @ 0x17
	.4byte ScrCmd_subvar                  @ 0x18
	.4byte ScrCmd_copyvar                 @ 0x19
	.4byte ScrCmd_setorcopyvar            @ 0x1A
	.4byte ScrCmd_compare_local_to_local  @ 0x1B
	.4byte ScrCmd_compare_local_to_value  @ 0x1C
	.4byte ScrCmd_compare_local_to_addr   @ 0x1D
	.4byte ScrCmd_compare_addr_to_local   @ 0x1E
	.4byte ScrCmd_compare_addr_to_value   @ 0x1F
	.4byte ScrCmd_compare_addr_to_addr    @ 0x20
	.4byte ScrCmd_compare_var_to_value    @ 0x21
	.4byte ScrCmd_compare_var_to_var      @ 0x22
	.4byte ScrCmd_callnative              @ 0x23
	.4byte ScrCmd_gotonative              @ 0x24
	.4byte ScrCmd_special                 @ 0x25
	.4byte ScrCmd_specialvar              @ 0x26
	.4byte ScrCmd_waitstate               @ 0x27
	.4byte ScrCmd_delay                   @ 0x28
	.4byte ScrCmd_setflag                 @ 0x29
	.4byte ScrCmd_clearflag               @ 0x2A
	.4byte ScrCmd_checkflag               @ 0x2B
	.4byte ScrCmd_initclock               @ 0x2C
	.4byte ScrCmd_dotimebasedevents       @ 0x2D
	.4byte ScrCmd_gettime                 @ 0x2E
	.4byte ScrCmd_playse                  @ 0x2F
	.4byte ScrCmd_waitse                  @ 0x30
	.4byte ScrCmd_playfanfare             @ 0x31
	.4byte ScrCmd_waitfanfare             @ 0x32
	.4byte ScrCmd_playbgm                 @ 0x33
	.4byte ScrCmd_savebgm                 @ 0x34
	.4byte ScrCmd_fadedefaultbgm          @ 0x35
	.4byte ScrCmd_fadenewbgm              @ 0x36
	.4byte ScrCmd_fadeoutbgm              @ 0x37
	.4byte ScrCmd_fadeinbgm               @ 0x38
	.4byte ScrCmd_warp                    @ 0x39
	.4byte ScrCmd_warpsilent              @ 0x3A
	.4byte ScrCmd_warpdoor                @ 0x3B
	.4byte ScrCmd_warphole                @ 0x3C
	.4byte ScrCmd_warpteleport            @ 0x3D
	.4byte ScrCmd_setwarp                 @ 0x3E
	.4byte ScrCmd_setdynamicwarp          @ 0x3F
	.4byte ScrCmd_setdivewarp             @ 0x40
	.4byte ScrCmd_setholewarp             @ 0x41
	.4byte ScrCmd_getplayerxy             @ 0x42
	.4byte ScrCmd_getpartysize            @ 0x43
	.4byte ScrCmd_additem                 @ 0x44
	.4byte ScrCmd_removeitem              @ 0x45
	.4byte ScrCmd_checkitemspace          @ 0x46
	.4byte ScrCmd_checkitem               @ 0x47
	.4byte ScrCmd_checkitemtype           @ 0x48
	.4byte ScrCmd_addpcitem               @ 0x49
	.4byte ScrCmd_checkpcitem             @ 0x4A
	.4byte ScrCmd_adddecoration           @ 0x4B
	.4byte ScrCmd_removedecoration        @ 0x4C
	.4byte ScrCmd_checkdecor              @ 0x4D
	.4byte ScrCmd_checkdecorspace         @ 0x4E
	.4byte ScrCmd_applymovement           @ 0x4F
	.4byte ScrCmd_applymovement_at        @ 0x50
	.4byte ScrCmd_waitmovement            @ 0x51
	.4byte ScrCmd_waitmovement_at         @ 0x52
	.4byte ScrCmd_removeobject            @ 0x53
	.4byte ScrCmd_removeobject_at         @ 0x54
	.4byte ScrCmd_addobject               @ 0x55
	.4byte ScrCmd_addobject_at            @ 0x56
	.4byte ScrCmd_setobjectxy             @ 0x57
	.4byte ScrCmd_showobjectat            @ 0x58
	.4byte ScrCmd_hideobjectat            @ 0x59
	.4byte ScrCmd_faceplayer              @ 0x5A
	.4byte ScrCmd_turnobject              @ 0x5B
	.4byte ScrCmd_trainerbattle           @ 0x5C
	.4byte ScrCmd_trainerbattlebegin      @ 0x5D
	.4byte ScrCmd_gotopostbattlescript    @ 0x5E
	.4byte ScrCmd_gotobeatenscript        @ 0x5F
	.4byte ScrCmd_checktrainerflag        @ 0x60
	.4byte ScrCmd_settrainerflag          @ 0x61
	.4byte ScrCmd_cleartrainerflag        @ 0x62
	.4byte ScrCmd_setobjectxyperm         @ 0x63
	.4byte ScrCmd_moveobjectoffscreen     @ 0x64
	.4byte ScrCmd_setobjectmovementtype   @ 0x65
	.4byte ScrCmd_waitmessage             @ 0x66
	.4byte ScrCmd_message                 @ 0x67
	.4byte ScrCmd_closemessage            @ 0x68
	.4byte ScrCmd_lockall                 @ 0x69
	.4byte ScrCmd_lock                    @ 0x6A
	.4byte ScrCmd_releaseall              @ 0x6B
	.4byte ScrCmd_release                 @ 0x6C
	.4byte ScrCmd_waitbuttonpress         @ 0x6D
	.4byte ScrCmd_yesnobox                @ 0x6E
	.4byte ScrCmd_multichoice             @ 0x6F
	.4byte ScrCmd_multichoicedefault      @ 0x70
	.4byte ScrCmd_multichoicegrid         @ 0x71
	.4byte ScrCmd_drawbox                 @ 0x72
	.4byte ScrCmd_erasebox                @ 0x73
	.4byte ScrCmd_drawboxtext             @ 0x74
	.4byte ScrCmd_showmonpic              @ 0x75
	.4byte ScrCmd_hidemonpic              @ 0x76
	.4byte ScrCmd_showcontestwinner       @ 0x77
	.4byte ScrCmd_braillemessage          @ 0x78
	.4byte ScrCmd_givemon                 @ 0x79
	.4byte ScrCmd_giveegg                 @ 0x7A
	.4byte ScrCmd_setmonmove              @ 0x7B
	.4byte ScrCmd_checkpartymove          @ 0x7C
	.4byte ScrCmd_bufferspeciesname       @ 0x7D
	.4byte ScrCmd_bufferleadmonspeciesname @ 0x7E
	.4byte ScrCmd_bufferpartymonnick      @ 0x7F
	.4byte ScrCmd_bufferitemname          @ 0x80
	.4byte ScrCmd_bufferdecorationname    @ 0x81
	.4byte ScrCmd_buffermovename          @ 0x82
	.4byte ScrCmd_buffernumberstring      @ 0x83
	.4byte ScrCmd_bufferstdstring         @ 0x84
	.4byte ScrCmd_bufferstring            @ 0x85
	.4byte ScrCmd_pokemart                @ 0x86
	.4byte ScrCmd_pokemartdecoration      @ 0x87
	.4byte ScrCmd_pokemartdecoration2     @ 0x88
	.4byte ScrCmd_playslotmachine         @ 0x89
	.4byte ScrCmd_setberrytree            @ 0x8A
	.4byte ScrCmd_choosecontestmon        @ 0x8B
	.4byte ScrCmd_startcontest            @ 0x8C
	.4byte ScrCmd_showcontestresults      @ 0x8D
	.4byte ScrCmd_contestlinktransfer     @ 0x8E
	.4byte ScrCmd_random                  @ 0x8F
	.4byte ScrCmd_addmoney                @ 0x90
	.4byte ScrCmd_removemoney             @ 0x91
	.4byte ScrCmd_checkmoney              @ 0x92
	.4byte ScrCmd_showmoneybox            @ 0x93
	.4byte ScrCmd_hidemoneybox            @ 0x94
	.4byte ScrCmd_updatemoneybox          @ 0x95
	.4byte ScrCmd_getpricereduction       @ 0x96
	.4byte ScrCmd_fadescreen              @ 0x97
	.4byte ScrCmd_fadescreenspeed         @ 0x98
	.4byte ScrCmd_setflashradius          @ 0x99
	.4byte ScrCmd_animateflash            @ 0x9A
	.4byte ScrCmd_messageautoscroll       @ 0x9B
	.4byte ScrCmd_dofieldeffect           @ 0x9C
	.4byte ScrCmd_setfieldeffectargument  @ 0x9D
	.4byte ScrCmd_waitfieldeffect         @ 0x9E
	.4byte ScrCmd_setrespawn              @ 0x9F
	.4byte ScrCmd_checkplayergender       @ 0xA0
	.4byte ScrCmd_playmoncry              @ 0xA1
	.4byte ScrCmd_setmetatile             @ 0xA2
	.4byte ScrCmd_resetweather            @ 0xA3
	.4byte ScrCmd_setweather              @ 0xA4
	.4byte ScrCmd_doweather               @ 0xA5
	.4byte ScrCmd_setstepcallback         @ 0xA6
	.4byte ScrCmd_setmaplayoutindex       @ 0xA7
	.4byte ScrCmd_setobjectpriority       @ 0xA8
	.4byte ScrCmd_resetobjectpriority     @ 0xA9
	.4byte ScrCmd_createvobject           @ 0xAA
	.4byte ScrCmd_turnvobject             @ 0xAB
	.4byte ScrCmd_opendoor                @ 0xAC
	.4byte ScrCmd_closedoor               @ 0xAD
	.4byte ScrCmd_waitdooranim            @ 0xAE
	.4byte ScrCmd_setdooropen             @ 0xAF
	.4byte ScrCmd_setdoorclosed           @ 0xB0
	.4byte ScrCmd_addelevmenuitem         @ 0xB1
	.4byte ScrCmd_showelevmenu            @ 0xB2
	.4byte ScrCmd_checkcoins              @ 0xB3
	.4byte ScrCmd_addcoins                @ 0xB4
	.4byte ScrCmd_removecoins             @ 0xB5
	.4byte ScrCmd_setwildbattle           @ 0xB6
	.4byte ScrCmd_dowildbattle            @ 0xB7
	.4byte ScrCmd_setvaddress             @ 0xB8
	.4byte ScrCmd_vgoto                   @ 0xB9
	.4byte ScrCmd_vcall                   @ 0xBA
	.4byte ScrCmd_vgoto_if                @ 0xBB
	.4byte ScrCmd_vcall_if                @ 0xBC
	.4byte ScrCmd_vmessage                @ 0xBD
	.4byte ScrCmd_vloadptr                @ 0xBE
	.4byte ScrCmd_vbufferstring           @ 0xBF
	.4byte ScrCmd_showcoinsbox            @ 0xC0
	.4byte ScrCmd_hidecoinsbox            @ 0xC1
	.4byte ScrCmd_updatecoinsbox          @ 0xC2
	.4byte ScrCmd_incrementgamestat       @ 0xC3
	.4byte ScrCmd_setescapewarp           @ 0xC4
	.4byte ScrCmd_waitmoncry              @ 0xC5

gScriptCmdTableEnd::
	.4byte ScrCmd_nop