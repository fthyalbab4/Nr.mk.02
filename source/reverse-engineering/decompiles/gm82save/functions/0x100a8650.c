// rea decompile_all
// name: FUN_100a8650
// address: 0x100a8650
// body: available
// range: 0x100a8650-0x100a883f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool __fastcall FUN_100a8650(undefined8 *param_1,undefined8 *param_2)

{
  size_t sVar1;
  byte bVar2;
  char cVar3;
  void *pvVar4;
  size_t sVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  void *_Buf1;
  void *_Buf2;
  size_t _Size;
  byte local_88;
  char local_87;
  void *local_84;
  size_t local_80;
  void *local_7c;
  size_t local_78;
  byte local_6c;
  char local_6b;
  void *local_68;
  size_t local_64;
  void *local_60;
  size_t local_5c;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;

  if ((((*(size_t *)((int)param_1 + 4) == *(size_t *)((int)param_2 + 4)) &&
       (*(char *)((int)param_1 + 0x1c) == *(char *)((int)param_2 + 0x1c))) &&
      (*(char *)((int)param_1 + 0x1d) == '\x02')) &&
     (((*(char *)((int)param_2 + 0x1d) == '\x02' &&
       (*(byte *)(param_2 + 1) < 3 == *(byte *)(param_1 + 1) < 3)) &&
      (iVar6 = memcmp(*(void **)param_1,*(void **)param_2,*(size_t *)((int)param_1 + 4)), iVar6 == 0
      )))) {
    return true;
  }
  local_20 = param_1[2];
  local_38 = param_2[3];
  local_18 = param_1[3];
  local_30 = *param_1;
  local_28 = param_1[1];
  local_50 = *param_2;
  local_40 = param_2[2];
  local_48 = param_2[1];
  do {
    do {
      while( true ) {
        FUN_101102a0(&local_6c,(int *)&local_30);
        sVar5 = local_5c;
        pvVar4 = local_60;
        _Size = local_64;
        _Buf1 = local_68;
        cVar3 = local_6b;
        bVar2 = local_6c;
        uVar8 = (uint)local_6c;
        if (uVar8 == 0xff) {
          FUN_101102a0(&local_88,(int *)&local_50);
          return local_88 == 0xff;
        }
        FUN_101102a0(&local_88,(int *)&local_50);
        sVar1 = local_78;
        _Buf2 = local_7c;
        if (local_88 == 0xff) {
          return false;
        }
        iVar6 = uVar8 - 5;
        iVar7 = local_88 - 5;
        if (bVar2 < 6) {
          iVar6 = 0;
        }
        if (local_88 < 6) {
          iVar7 = 0;
        }
        if (iVar6 != iVar7) {
          return false;
        }
        if (iVar6 != 4) break;
switchD_100a87c5_caseD_0:
        _Buf2 = local_84;
        if (_Size != local_80) {
          return false;
        }
LAB_100a87ce:
        iVar6 = memcmp(_Buf1,_Buf2,_Size);
        if (iVar6 != 0) {
          return false;
        }
      }
    } while (iVar6 != 0);
    if (bVar2 != local_88) {
      return false;
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(bVar2) {
    default:
      goto switchD_100a87c5_caseD_0;
    case 1:
    case 4:
      if (_Size != local_80) {
        return false;
      }
      iVar6 = memcmp(_Buf1,local_84,_Size);
      if (iVar6 != 0) {
        return false;
      }
      _Buf1 = pvVar4;
      _Size = sVar5;
      if (sVar5 != sVar1) {
        return false;
      }
      goto LAB_100a87ce;
    case 2:
    case 5:
      if (cVar3 != local_87) {
        return false;
      }
    }
  } while( true );
}
